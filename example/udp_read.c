	ID3D11Texture2D* pBackBuffer;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		cout << "SDL_INIT_ERROR" << endl;

#define TINYOBJLOADER_IMPLEMENTATION

		{



	UINT strides = sizeof(Vertex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

			// Loop over vertices in the face.

	m_IndexCount = icount;



		&materials,



	m_Viewport.MaxDepth = 1.0f;

struct ConstantLightBuffer {





		return hr;

	{

	cbDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);



	if (FAILED(hr))

#include "DirectXManager.h"

	XMStoreFloat4(&clb.ambient, lightAmbient);

 * Lesson 1: Hello World!



	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//深度ステンシルバッファ作成

		pIList[j] = indexList[j];

			// Loop over vertices in the face.

			case SDLK_DOWN:

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		KEY_PRESS_SURFACE_LEFT,

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vbDesc.MiscFlags = 0;

}

 * Lesson 1: Hello World!

}
	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			case SDLK_LEFT:

	{

	SAFE_RELEASE(m_pTextureView);

{



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pVertexShader);





	if (FAILED(hr))



		&shapes,

	if (FAILED(hr))



	if (FAILED(hr))

		R"(cube.obj)");

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



		&m_pSwapChain,

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (int i = 0; i < vcount; i++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    farZ = 100.0f;

}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	std::string error;

{

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		pIList[j] = indexList[j];

	delete[] pIList;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#define TINYOBJLOADER_IMPLEMENTATION

		else if (e.type == SDL_KEYDOWN)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		}



		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return 1;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ビューポート設定

			case SDLK_UP:

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//Vertex* pVList = new Vertex[vcount];

 */

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	ConstantLightBuffer clb;



	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	Release();

	XMFLOAT4         eyePos;   //視点座標

	UINT offsets = 0;



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexShader);

			int num_vertices = shape.mesh.num_face_vertices[f];

	Release();

				tinyobj::real_t ty =

		SDL_RenderPresent(ren);

int SEGMENT = 36;

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferCount = 1;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.MiscFlags = 0;



{

	delete[] pVList;

		&m_pImmediateContext);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.SysMemSlicePitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	UINT strides = sizeof(Vertex);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	}

	vector<Vertex> vertexlist;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

}

				tinyobj::real_t tx =

			// Loop over vertices in the face.

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	for (size_t s = 0; s < shapes.size(); s++)



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			{

	ConstantMatrixBuffer cmb;

	D3D11_SUBRESOURCE_DATA vrData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	/*

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	vbDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

	//First we need to start up SDL, and make sure it went ok

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4 ambient;           //環境(r,g,b)

	//定数バッファ作成



int main(int, char**)

				break;





	if (FAILED(hr))

		m_pImmediateContext->ClearState();

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pIndexBuffer);

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);





	D3D11_BUFFER_DESC cbDesc;

	}

				// access to vertex

	D3D11_SUBRESOURCE_DATA vrData;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	for (int j = 0; j < icount; j++)

		// Loop over faces(polygon)

	std::vector<tinyobj::shape_t> shapes;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);



	UINT flags = 0;

		1,

		return 1;

	XMFLOAT4         eyePos;   //視点座標

	m_pRenderTargetView = NULL;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	{



				// access to vertex



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//Create Index

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	//頂点レイアウト作成

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemSlicePitch = 0;



	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D11_TEXTURE2D_DESC txDesc;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Quit();



	std::vector<tinyobj::shape_t> shapes;

	}

		&shapes,

				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);

	enum KeyPressSurfaces

		return hr;

	ibDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pVertexBuffer);



	m_pTextureView = NULL;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4X4 projection;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

				break;

	SAFE_RELEASE(m_pDepthStencilTexture);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pDepthStencilView = NULL;

		return hr;



		{



				indexlist.push_back(index);

	m_pSwapChain->Present(0, 0);

				tinyobj::real_t ty =



	SDL_FreeSurface(suf);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyTexture(tex);

using std::cout; using std::endl;

	cbDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		&m_pSwapChain,

	UINT strides = sizeof(Vertex);

	std::vector<tinyobj::material_t> materials;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	tinyobj::ObjReaderConfig reader_config;

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantLightBuffer {

};



	txDesc.SampleDesc.Count = 1;

	txDesc.SampleDesc.Count = 1;

	txDesc.ArraySize = 1;

	{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//定数バッファ作成

	vrData.pSysMem = &pVList[0];

		{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;







	scDesc.OutputWindow = hwnd;

			{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	int     vcount = vertexlist.size();





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);









	D3D11_TEXTURE2D_DESC txDesc;

	float    farZ = 100.0f;

		// Loop over faces(polygon)

	//定数バッファ作成

		cout << "SDL_INIT_ERROR" << endl;

	m_pSampler = NULL;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	WORD* pIList = new WORD[icount];



#include <iostream>

				indexlist.push_back(idx.vertex_index);

	irData.pSysMem = &pIList[0];

				indexlist.push_back(index);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.MiscFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;

}

		}



	auto& materials = reader.GetMaterials();

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.StructureByteStride = 0;

			break;



	vector<Vertex> vertexlist;

	SDL_DestroyWindow(win);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#include <iostream>

#endif

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&materials,

struct ConstantMatrixBuffer {

	{



	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pInputLayout);

	return 0;

		pLevels,

		}

	std::string error;



	XMFLOAT4X4 projection;

int main(int, char**)



				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	//vector<Vertex> vertex_t;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4X4 world;



		SDL_RenderPresent(ren);

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pSampler = NULL;



	SAFE_RELEASE(m_pPixelShader);

	//vector<WORD> index_t;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Count = 1;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

 * Lesson 1: Hello World!

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			exit(1);

			case SDLK_DOWN:

	//頂点シェーダー生成

	auto& shapes = reader.GetShapes();

			}

		SDL_Delay(1000);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	m_IndexCount = 0;

		delete[] pIList;

#include <iostream>



	SAFE_RELEASE(m_pMatrixBuffer);

	{

			{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	cbDesc.MiscFlags = 0;

	ConstantMatrixBuffer cmb;

		return hr;

		&m_pDevice,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{



	UINT flags = 0;

	//Create Index

			}



		return hr;

			for (size_t v = 0; v < fv; v++)

{



	txDesc.MiscFlags = 0;

	if (FAILED(hr))

using std::cout; using std::endl;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Release()

	}*/

int main(int, char**)

	m_Angle += XMConvertToRadians(1.0f);

		return hr;







	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pVList;

		&m_pImmediateContext);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	SDL_DestroyTexture(tex);

			{





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//定数バッファ作成



	{





	::ZeroMemory(&scDesc, sizeof(scDesc));





	cbDesc.StructureByteStride = 0;

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::~CD3DTest()

	if (m_pImmediateContext)

			{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

	auto& materials = reader.GetMaterials();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_SUBRESOURCE_DATA vrData;

		&m_pSwapChain,

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

		&m_pSwapChain,

	if (FAILED(hr))

	m_IndexCount = 0;

	m_VertexCount = vcount;





	LoadObj(vertexlist, indexList);

}

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pSampler = NULL;

		SDL_RenderClear(ren);

	for (const auto& shape : shapes)

	CRect                rect;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pSwapChain->Present(0, 0);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_BUFFER_DESC vbDesc;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pTextureView);





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pPixelShader);



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;







	m_IndexCount = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Clean up our objects and quit



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::~CD3DTest()

	return hr;

			for (size_t v = 0; v < num_vertices; v++)

	//頂点レイアウト作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Height = rect.Height();





}

	}*/

			case SDLK_RIGHT:

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

{

	std::vector<tinyobj::material_t> materials;

	//Clean up our objects and quit

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

		return hr;

			}

	vrData.SysMemSlicePitch = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantMaterial {

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				// access to vertex

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	{

		if (!reader.Error().empty())

	irData.SysMemPitch = 0;

		return hr;

	if (FAILED(hr))

}



	dsDesc.Texture2D.MipSlice = 0;

	float    nearZ = 0.1f;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

	SAFE_RELEASE(m_pSwapChain);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

CD3DTest::~CD3DTest()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		//User presses a key

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D11_SDK_VERSION,

		//User presses a key

	vector<WORD> indexList;

		return hr;

			}

	UINT strides = sizeof(Vertex);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	m_pSwapChain = NULL;

	vrData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Count = 1;

		//User presses a key

	{





	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return hr;

		NULL,

	}



		SDL_Delay(1000);

	m_IndexCount = 0;





		return hr;





	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



			for (size_t v = 0; v < num_vertices; v++)



	XMStoreFloat4(&clb.ambient, lightAmbient);



	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)





		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			exit(1);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	ID3D11Texture2D* pBackBuffer;

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

int main(int, char**)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	{

			case SDLK_DOWN:

		SDL_RenderClear(ren);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

{

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_Viewport.TopLeftY = 0;

	txDesc.SampleDesc.Quality = 0;









				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	CRect                rect;

		}



	cbDesc.StructureByteStride = 0;

	ibDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pLightBuffer);

#include <iostream>



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL level;

		SDL_Delay(1000);

	delete[] pVList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			index_offset += num_vertices;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.ArraySize = 1;

	m_pTextureView = NULL;

	if (FAILED(hr))

	SDL_Quit();

		return hr;

	m_pImmediateContext = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_DestroyTexture(tex);



	SAFE_RELEASE(m_pRenderTargetView);

	delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		if (e.type == SDL_QUIT)

	scDesc.BufferDesc.Height = rect.Height();

	Release();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		size_t index_offset = 0;

		D3D_DRIVER_TYPE_HARDWARE,



				break;

	scDesc.OutputWindow = hwnd;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	scDesc.SampleDesc.Quality = 0;

struct ConstantMaterial {

struct ConstantMaterial {

	XMStoreFloat4(&clb.ambient, lightAmbient);

			}

		return hr;

#endif

				break;

	return hr;





	// Loop over shapes



	SAFE_RELEASE(m_pImmediateContext);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSwapChain);

		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		return hr;

	std::vector<tinyobj::shape_t> shapes;





	SDL_Event e;

};

	if (FAILED(hr))

	float    farZ = 100.0f;

			case SDLK_RIGHT:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.Warning().empty())

		return hr;

		return hr;



				tinyobj::real_t tx =

	UINT flags = 0;

	if (FAILED(hr))

	SDL_Event e;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		R"(cube.obj)");

	m_Viewport.MaxDepth = 1.0f;

			{



				// access to vertex

	//定数バッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.MiscFlags = 0;

	{

#endif

	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Width = rect.Width();

	::GetClientRect(hwnd, &rect);

	UINT flags = 0;

}
	m_VertexCount = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	irData.pSysMem = &pIList[0];

		size_t index_offset = 0;  // インデントのオフセット

	m_pMatrixBuffer = NULL;



	//vector<Vertex> vertex_t;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	WORD   icount = indexList.size();

			exit(1);

	scDesc.Windowed = TRUE;



	if (FAILED(hr))



	tinyobj::ObjReader reader;

	WORD   icount = indexList.size();

	DXGI_SWAP_CHAIN_DESC scDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

	//ビューポート設定

	//定数バッファ作成





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//定数バッファ作成

		&m_pImmediateContext);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	return hr;

	SDL_DestroyTexture(tex);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pDepthStencilView = NULL;

	scDesc.SampleDesc.Count = 1;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

		SDL_Delay(1000);

	m_IndexCount = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	if (FAILED(hr))

	//vector<WORD> index_t;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::CD3DTest()



	auto& materials = reader.GetMaterials();

			break;

	}



	cbDesc.StructureByteStride = 0;

	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;

};

	cbDesc.MiscFlags = 0;

 */

	txDesc.SampleDesc.Quality = 0;

#endif

	SAFE_RELEASE(m_pPixelShader);





	delete[] pVList;

			}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pTexture);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_BUFFER_DESC cbDesc;

	m_Viewport.MinDepth = 0.0f;

	{



		KEY_PRESS_SURFACE_TOTAL

#ifdef _DEBUG

	{

}

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	//インデックスバッファ作成



};

	XMStoreFloat4(&clb.eyePos, eye);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	//vector<WORD> index_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ID3D11Texture2D* pBackBuffer;

	{

	if (FAILED(hr))

{

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

#include "DirectXManager.h"



	scDesc.OutputWindow = hwnd;

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

}

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyWindow(win);

			for (size_t v = 0; v < fv; v++)

	std::string imagePath = "hello.bmp";

	{

	vrData.pSysMem = &pVList[0];

{



	SAFE_RELEASE(m_pImmediateContext);

	for (const auto& shape : shapes)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



{

	SDL_DestroyRenderer(ren);





	for (const auto& shape : shapes)



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		SDL_RenderPresent(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemSlicePitch = 0;

	for (const auto& shape : shapes)

		// Loop over faces(polygon)

	SDL_Event e;

void CD3DTest::Render()

		pIList[j] = indexList[j];

	SDL_DestroyWindow(win);

	if (FAILED(hr))





	//Vertex* pVList = new Vertex[vcount];



	float    fov = XMConvertToRadians(20.0f);

	ConstantLight    pntLight; //点光源

	}

				tinyobj::real_t ty =

	if (FAILED(hr))

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



{



				vertex.push_back(vertex_tmp);





			break;

		return hr;

				break;

		size_t index_offset = 0;

	scDesc.BufferDesc.Height = rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4X4 world;

	m_pSwapChain = NULL;

	dsDesc.Format = txDesc.Format;

		SDL_Delay(1000);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderClear(ren);

using std::cout; using std::endl;





	auto& materials = reader.GetMaterials();

}

				// access to vertex

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		if (!reader.Error().empty())

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				vertex.push_back(vertex_tmp);





	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		SDL_Delay(1000);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReader reader;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		KEY_PRESS_SURFACE_TOTAL

		&m_pDevice,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

int main(int, char**)

			exit(1);

	//深度ステンシルバッファ作成

		if (e.type == SDL_QUIT)

struct ConstantLight {

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <iostream>

	if (FAILED(hr))



		return hr;

		cout << "SDL_INIT_ERROR" << endl;

				break;



		}

	// Loop over shapes

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.CPUAccessFlags = 0;





	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



struct ConstantMaterial {

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		SDL_RenderPresent(ren);

#include <iostream>



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4         eyePos;   //視点座標



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	{

	//vector<WORD> index_t;

	XMStoreFloat4(&clb.eyePos, eye);

	HRESULT              hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		m_pImmediateContext->ClearState();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderPresent(ren);

			{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	::ZeroMemory(&scDesc, sizeof(scDesc));

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	WORD   icount = indexList.size();

	txDesc.SampleDesc.Count = 1;

	m_Viewport.Height = (FLOAT)rect.Height();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

int main(int, char**)

	CRect                rect;

	if (FAILED(hr))

		return 1;

	SAFE_RELEASE(m_pPixelShader);

	m_VertexCount = 0;



void CD3DTest::Render()

	scDesc.SampleDesc.Quality = 0;



	//Clean up our objects and quit

	for (const auto& shape : shapes)

	for (int j = 0; j < icount; j++)

		&materials,

	txDesc.SampleDesc.Quality = 0;



				vertex.push_back(vertex_tmp);

	//頂点バッファ作成

		pIList[j] = indexList[j];



	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pImmediateContext);

	m_VertexCount = 0;



	scDesc.OutputWindow = hwnd;



	m_pLightBuffer = NULL;

	SDL_Quit();

		KEY_PRESS_SURFACE_DOWN,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.StructureByteStride = 0;

			case SDLK_RIGHT:

	{

		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.CPUAccessFlags = 0;



struct ConstantMaterial {

	//ピクセルシェーダー生成

	vector<Vertex> vertexlist;

	vbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.SysMemPitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pTexture);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (FAILED(hr))

		{

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

#define TINYOBJLOADER_IMPLEMENTATION

	m_pTexture = NULL;

	D3D11_BUFFER_DESC ibDesc;

	}

void CD3DTest::Render()

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	m_pInputLayout = NULL;

	{

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pSwapChain = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t ty =





	ConstantLightBuffer clb;

	std::vector<tinyobj::shape_t> shapes;

	m_pPixelShader = NULL;

{

	SAFE_RELEASE(m_pDepthStencilTexture);



	}

			//Select surfaces based on key press

		SDL_RenderClear(ren);

{





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

{



	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		pIList[j] = indexList[j];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



#define TINYOBJLOADER_IMPLEMENTATION

			}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();

				indexlist.push_back(index);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





		size_t index_offset = 0;

	m_pTexture = NULL;

	UINT strides = sizeof(Vertex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	SAFE_RELEASE(m_pDepthStencilView);

		&attrib,

	SDL_DestroyTexture(tex);

	ID3D11Texture2D* pBackBuffer;

	dsDesc.Texture2D.MipSlice = 0;

	//Clean up our objects and quit

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (const auto& shape : shapes)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (size_t s = 0; s < shapes.size(); s++)

 * Lesson 1: Hello World!

	m_VertexCount = 0;

	if (FAILED(hr))



}

	//テクスチャ読み込み



		KEY_PRESS_SURFACE_LEFT,



				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.TopLeftX = 0;

		pLevels,



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				indexlist.push_back(index);

	SDL_DestroyWindow(win);

	m_pDepthStencilTexture = NULL;

			//Select surfaces based on key press

	auto& shapes = reader.GetShapes();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pInputLayout = NULL;

	txDesc.MiscFlags = 0;

		NULL,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())

		SDL_RenderClear(ren);

	m_Viewport.Height = (FLOAT)rect.Height();





	ZeroMemory(&dsDesc, sizeof(dsDesc));



	std::vector<tinyobj::material_t> materials;

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			case SDLK_UP:

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	{

{

	txDesc.MipLevels = 1;

	if (FAILED(hr))



	}



	vbDesc.StructureByteStride = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	return 0;

int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,



	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//インデックスバッファ作成



{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#endif

	cbDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

using std::cout; using std::endl;

	ID3D11Texture2D* pBackBuffer;



void CD3DTest::Render()

	//深度ステンシルバッファ作成

		{

	/*



	m_pVertexBuffer = NULL;



		{

struct ConstantMatrixBuffer {

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vrData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	irData.pSysMem = &pIList[0];

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.StructureByteStride = 0;

		&shapes,



	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pInputLayout = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	delete[] pIList;

	::GetClientRect(hwnd, &rect);

	m_pDevice = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();

				break;

			case SDLK_LEFT:

	SDL_DestroyWindow(win);





	m_pDepthStencilTexture = NULL;

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);



	SDL_Quit();

	return;

	SAFE_RELEASE(m_pRenderTargetView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

	//テクスチャ読み込み

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	/*

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

int main(int, char**)

	m_pVertexBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();

			break;

	vector<Vertex> vertexlist;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



				vertex.push_back(vertex_tmp);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4X4 world;

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	//深度ステンシルバッファ作成

	//深度ステンシルバッファ作成



	dsDesc.Texture2D.MipSlice = 0;

	//ビューポート設定

			for (size_t v = 0; v < fv; v++)



	WORD   icount = indexList.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	auto& attrib = reader.GetAttrib();

	cbDesc.StructureByteStride = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	if (FAILED(hr))



	XMFLOAT4 pos;               //座標(x,y,z)



				break;

	pBackBuffer->Release();

	//First we need to start up SDL, and make sure it went ok

	WORD   icount = indexList.size();



	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_SUBRESOURCE_DATA vrData;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

		return hr;

	cbDesc.MiscFlags = 0;

	}

	SDL_DestroyRenderer(ren);

	XMFLOAT4X4 view;



	tinyobj::ObjReaderConfig reader_config;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	pBackBuffer->Release();

	m_IndexCount = icount;

		SDL_Delay(1000);

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&materials,

	ID3D11Texture2D* pBackBuffer;

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	/*

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pTextureView = NULL;

	//テクスチャ読み込み

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//vector<WORD> index_t;

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.StructureByteStride = 0;

				break;



int main(int, char**)

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	WORD* pIList = new WORD[icount];



	}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	float    farZ = 100.0f;



};

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

/*

	/*

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_FreeSurface(suf);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_TOTAL

	m_pDepthStencilView = NULL;

	std::vector<tinyobj::material_t> materials;

			for (size_t v = 0; v < num_vertices; v++)



		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pSwapChain = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    nearZ = 0.1f;



	irData.SysMemPitch = 0;

	float    nearZ = 0.1f;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

struct ConstantMaterial {



		&error,



	for (int i = 0; i < vcount; i++)



		return hr;

	// Loop over shapes



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pSampler = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	tinyobj::attrib_t attrib;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pDepthStencilView);

/*

	}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.MiscFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MiscFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	if (FAILED(hr))

	delete[] pIList;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	{

	cbDesc.CPUAccessFlags = 0;

	if (!error.empty())



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



	std::string imagePath = "hello.bmp";

#endif

}

	cbDesc.MiscFlags = 0;

			index_offset += num_vertices;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		{

	reader_config.mtl_search_path = "./"; // Path to material files



CD3DTest::CD3DTest()



	if (FAILED(hr))

	//頂点バッファ作成

	m_pVertexBuffer = NULL;

	ConstantLightBuffer clb;



	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



			// Loop over vertices in the face.

#include "DirectXManager.h"

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pDepthStencilTexture);

		&level,

{

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

		&level,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	//First we need to start up SDL, and make sure it went ok

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.Width = rect.Width();

	//Create Index



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	// Loop over shapes

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_pSwapChain = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	scDesc.SampleDesc.Count = 1;

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pLightBuffer);



			break;

	m_pSwapChain = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		// Loop over faces(polygon)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	m_pImmediateContext = NULL;

	txDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

		return 1;

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderPresent(ren);



			default:

	txDesc.CPUAccessFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DEFAULT,

		D3D_DRIVER_TYPE_HARDWARE,

		return 1;

	//ビューポート設定

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyWindow(win);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//頂点バッファ作成

		return 1;

		&m_pImmediateContext);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_FreeSurface(suf);

	{

 */

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pSampler = NULL;



	//Key press surfaces constants

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	LoadObj(vertexlist, indexList);

		return hr;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	if (m_pImmediateContext)

struct ConstantLightBuffer {



	{

		flags,

	WORD* pIList = new WORD[icount];

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	scDesc.SampleDesc.Quality = 0;

	auto& shapes = reader.GetShapes();

				// access to vertex

#include <SDL.h>

struct ConstantMaterial {

	m_VertexCount = vcount;

	scDesc.BufferCount = 1;

		pIList[j] = indexList[j];



	// Loop over shapes

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	tinyobj::attrib_t attrib;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return;

	}

	txDesc.Height = rect.Height();



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	}

			{

	irData.SysMemPitch = 0;

	//Clean up our objects and quit

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyRenderer(ren);

		&scDesc,



	auto& materials = reader.GetMaterials();

			index_offset += num_vertices;

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SAFE_RELEASE(m_pMatrixBuffer);

int main(int, char**)

	D3D_FEATURE_LEVEL level;

	return;



	SAFE_RELEASE(m_pInputLayout);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	{

	//頂点バッファ作成

	//Key press surfaces constants

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}



	SDL_DestroyTexture(tex);

		return hr;

		return hr;

		KEY_PRESS_SURFACE_UP,

	txDesc.CPUAccessFlags = 0;

};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (!reader.Warning().empty())

		SDL_RenderPresent(ren);

	scDesc.SampleDesc.Count = 1;

	scDesc.OutputWindow = hwnd;

	{

	CRect                rect;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.MaxDepth = 1.0f;

	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pLightBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

/*

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//定数バッファ作成

		return hr;

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (!reader.Warning().empty())



	//vector<WORD> index_t;

	//Key press surfaces constants

			exit(1);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		&m_pDevice,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyTexture(tex);



	UINT offsets = 0;

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pRenderTargetView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pVertexShader = NULL;



	}

	scDesc.BufferDesc.Width = rect.Width();

		return hr;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



};



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	//インデックスバッファ作成



	if (FAILED(hr))

struct ConstantMaterial {

{

				indexlist.push_back(index);

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vector<Vertex> vertexlist;

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



}

struct ConstantMaterial {



	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	{

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	delete[] pVList;

	std::string inputfile = "test.obj";

};

				vertex.push_back(vertex_tmp);

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	};



	SDL_Quit();

}
	XMFLOAT4 ambient;           //環境(r,g,b)



	UINT strides = sizeof(Vertex);

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vbDesc.StructureByteStride = 0;





		SDL_RenderClear(ren);





	{

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_Delay(1000);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		NULL,

}

{

	SAFE_RELEASE(m_pPixelShader);

struct ConstantMatrixBuffer {

	txDesc.Width = rect.Width();

			// Loop over vertices in the face.

	{

	{

		return hr;

		}

	LoadObj(vertexlist, indexList);

		return hr;

	m_pMatrixBuffer = NULL;

	scDesc.OutputWindow = hwnd;





	m_pMatrixBuffer = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

	{

	m_IndexCount = 0;

		return hr;

	m_Viewport.TopLeftY = 0;

			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	HRESULT              hr;

	if (m_pImmediateContext)

	}

	XMFLOAT4X4 world;

{



CD3DTest::CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	return;

	XMFLOAT4 specular;          //反射(r,g,b)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pIndexBuffer = NULL;



		cout << "SDL_INIT_ERROR" << endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			index_offset += fv;



		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点シェーダー生成



		// Loop over faces(polygon)

		return hr;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

int main(int, char**)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.SampleDesc.Count = 1;



	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);



	irData.SysMemPitch = 0;

				indexlist.push_back(index);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	XMFLOAT4 pos;               //座標(x,y,z)

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	for (int i = 0; i < 3; i++)

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pSampler);



				indexlist.push_back(index);

	m_pIndexBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pDepthStencilTexture = NULL;

		//User presses a key

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

 */

	float    nearZ = 0.1f;

			break;

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemPitch = 0;

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);



	scDesc.SampleDesc.Quality = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

int main(int, char**)



	}

	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = 0;

	cbDesc.MiscFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReaderConfig reader_config;

};

	m_pTextureView = NULL;

		&scDesc,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		}

	}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

			}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&materials,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//vector<WORD> index_t;

	m_pLightBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<Vertex> vertexlist;

	dsDesc.Format = txDesc.Format;

		//User presses a key

	m_Viewport.Height = (FLOAT)rect.Height();







				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pPixelShader);

	for (const auto& shape : shapes)

				indexlist.push_back(idx.vertex_index);



			}

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	{

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4         eyePos;   //視点座標



	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

			// Loop over vertices in the face.



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyWindow(win);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pInputLayout);









}

	ConstantMatrixBuffer cmb;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA irData;

	/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vrData.SysMemSlicePitch = 0;

	dsDesc.Texture2D.MipSlice = 0;

	std::vector<tinyobj::shape_t> shapes;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



}



	return;



	SAFE_RELEASE(m_pInputLayout);

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pMatrixBuffer);

	ConstantLightBuffer clb;







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

};

	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	tinyobj::attrib_t attrib;

}

	HRESULT              hr;

	//深度ステンシルバッファ作成



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

			case SDLK_LEFT:

#include "DirectXManager.h"

	//ピクセルシェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

	//Key press surfaces constants

	m_pVertexBuffer = NULL;



	m_pMatrixBuffer = NULL;



			index_offset += num_vertices;



struct ConstantLightBuffer {

			case SDLK_DOWN:

	scDesc.BufferCount = 1;

	//ビューポート設定

	Vertex* pVList = new Vertex[vcount];

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	// Loop over shapes

{

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4X4 view;

		pVList[i] = vertexlist[i];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderClear(ren);

	//インデックスバッファ作成

		{

	return 0;



	m_Viewport.Height = (FLOAT)rect.Height();



	scDesc.Windowed = TRUE;

	cbDesc.MiscFlags = 0;

			{



	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{



			{

	vrData.pSysMem = &pVList[0];

	SDL_Quit();



		return hr;

#include <iostream>

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;


