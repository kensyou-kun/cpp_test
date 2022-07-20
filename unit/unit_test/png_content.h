int main(int, char**)

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pIndexBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

			switch (e.key.keysym.sym)

	ConstantLightBuffer clb;



	m_pMatrixBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

		{

	}



	auto& shapes = reader.GetShapes();

		else if (e.type == SDL_KEYDOWN)



		SDL_RenderClear(ren);

				break;

				// access to vertex

	//vector<WORD> index_t;

		return hr;







	}

	XMFLOAT4 ambient;           //環境(r,g,b)



	{

			// Loop over vertices in the face.

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pVertexShader);

	Vertex* pVList = new Vertex[vcount];

	if (!error.empty())

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//ビューポート設定



	XMFLOAT4X4 projection;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	txDesc.MipLevels = 1;

};



	txDesc.ArraySize = 1;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_IMPLEMENTATION



	XMFLOAT4X4 view;

	vbDesc.CPUAccessFlags = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <SDL.h>

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//vector<Vertex> vertex_t;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

	SAFE_RELEASE(m_pVertexShader);

	enum KeyPressSurfaces

{

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))





	}*/



	ConstantLightBuffer clb;



			case SDLK_RIGHT:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	ID3D11Texture2D* pBackBuffer;





	if (!error.empty())

	}

	ibDesc.CPUAccessFlags = 0;



		KEY_PRESS_SURFACE_DEFAULT,

{

		D3D11_SDK_VERSION,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	delete[] pVList;

#include <iostream>

	bool ret = tinyobj::LoadObj(

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		delete[] pVList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pTextureView);

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pIndexBuffer);

	ConstantLightBuffer clb;

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.CPUAccessFlags = 0;

				break;

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pInputLayout = NULL;



		SDL_Delay(1000);

	pBackBuffer->Release();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			}

	if (!reader.ParseFromFile(inputfile, reader_config))



	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferCount = 1;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDepthStencilTexture = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&scDesc,

};

	SDL_DestroyRenderer(ren);



	D3D11_BUFFER_DESC ibDesc;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		if (e.type == SDL_QUIT)





	SAFE_RELEASE(m_pTexture);

		return hr;

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantMaterial {

			int num_vertices = shape.mesh.num_face_vertices[f];

		&scDesc,

{

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				vertex.push_back(vertex_tmp);

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyWindow(win);

	{

	SAFE_RELEASE(m_pImmediateContext);

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

				break;

	//First we need to start up SDL, and make sure it went ok

#endif

}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4X4 view;

	pBackBuffer->Release();

	return hr;

	m_pVertexShader = NULL;

int main(int, char**)

	vector<Vertex> vertexlist;





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	XMFLOAT4 pos;               //座標(x,y,z)



	txDesc.SampleDesc.Quality = 0;



	{



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <iostream>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.BufferCount = 1;

		if (e.type == SDL_QUIT)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4X4 view;

	SDL_Event e;

		D3D11_SDK_VERSION,

	vrData.SysMemSlicePitch = 0;

	}

	//頂点シェーダー生成

		&shapes,

	vrData.pSysMem = &pVList[0];



		return hr;

	if (m_pImmediateContext)

	m_IndexCount = 0;

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}*/

	cbDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.SampleDesc.Quality = 0;

	}



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;

int main(int, char**)



	m_IndexCount = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.ArraySize = 1;

		cout << "SDL_INIT_ERROR" << endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderPresent(ren);

	{



			//Select surfaces based on key press

			break;

	std::string error;

	irData.SysMemPitch = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pDepthStencilView = NULL;

	ID3D11Texture2D* pBackBuffer;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Quality = 0;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.TopLeftX = 0;

	vrData.SysMemPitch = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

void CD3DTest::Render()

	}

		R"(cube.obj)");



	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vrData.pSysMem = &pVList[0];



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

#endif

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	UINT strides = sizeof(Vertex);

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	m_pDepthStencilTexture = NULL;

	m_pLightBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))





				// access to vertex

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		return hr;

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				indexlist.push_back(idx.vertex_index);

		return hr;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		}

		}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_IndexCount = 0;

		pIList[j] = indexList[j];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		1,

				vertex.push_back(vertex_tmp);

	if (!reader.ParseFromFile(inputfile, reader_config))



}

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	ibDesc.CPUAccessFlags = 0;

	float    farZ = 100.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	Release();

	return;

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	enum KeyPressSurfaces

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	delete[] pIList;

#endif

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	SAFE_RELEASE(m_pMatrixBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

	DXGI_SWAP_CHAIN_DESC scDesc;



	LoadObj(vertexlist, indexList);



	D3D11_BUFFER_DESC cbDesc;



	}*/

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		size_t index_offset = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{



	std::vector<tinyobj::material_t> materials;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t tx =

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	::GetClientRect(hwnd, &rect);





	{



	txDesc.Width = rect.Width();

		size_t index_offset = 0;

	delete[] pIList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.SampleDesc.Count = 1;

	m_pDepthStencilView = NULL;

	ConstantLight    pntLight; //点光源

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



struct ConstantMatrixBuffer {

	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Width = rect.Width();

		SDL_Delay(1000);



	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.BufferCount = 1;



	ibDesc.MiscFlags = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	SAFE_RELEASE(m_pImmediateContext);



			}

	txDesc.Height = rect.Height();

	delete[] pVList;

int SEGMENT = 36;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	scDesc.BufferDesc.Width = rect.Width();

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	for (int i = 0; i < 3; i++)

		cout << "SDL_INIT_ERROR" << endl;

	m_pDevice = NULL;

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 pos;               //座標(x,y,z)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

 * Lesson 1: Hello World!

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vector<WORD> indexList;

	XMFLOAT4X4 world;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pTexture);



	}





	//Vertex* pVList = new Vertex[vcount];



};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	std::vector<tinyobj::shape_t> shapes;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&m_pSwapChain,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				WORD index = idx.vertex_index;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}

	{

		&shapes,

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	int     vcount = vertexlist.size();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



};

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	LoadObj(vertexlist, indexList);

			index_offset += fv;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			// Loop over vertices in the face.





		flags,





	/*

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		&m_pSwapChain,



	XMFLOAT4         eyePos;   //視点座標



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	WORD* pIList = new WORD[icount];



	vector<WORD> indexList;

		delete[] pIList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pTextureView);

	txDesc.CPUAccessFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

	vrData.SysMemSlicePitch = 0;

	txDesc.MiscFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		{

	XMFLOAT4X4 world;





	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Width = rect.Width();

	tinyobj::ObjReaderConfig reader_config;

CD3DTest::~CD3DTest()



		KEY_PRESS_SURFACE_LEFT,



	m_pLightBuffer = NULL;

	m_Angle += XMConvertToRadians(1.0f);

				indexlist.push_back(idx.vertex_index);

	{



#include <SDL.h>

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;







	auto& materials = reader.GetMaterials();

	LoadObj(vertexlist, indexList);

	if (m_pImmediateContext)

	vector<WORD> indexList;

		pIList[j] = indexList[j];



		SDL_RenderPresent(ren);

	auto& shapes = reader.GetShapes();

	m_pVertexShader = NULL;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			exit(1);

	/*

		{

	delete[] pVList;

	std::vector<tinyobj::material_t> materials;

	}

	SDL_FreeSurface(bmp);

	ibDesc.CPUAccessFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

		}

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





int main(int, char**)

};

	hr = D3D11CreateDeviceAndSwapChain(NULL,

 */

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		pLevels,

			case SDLK_LEFT:

	tinyobj::ObjReader reader;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





	{

	scDesc.BufferDesc.Width = rect.Width();



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		{

		if (e.type == SDL_QUIT)

	ConstantLight    pntLight; //点光源

		&scDesc,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyTexture(tex);

	}

#include <iostream>

	}

/*

	scDesc.BufferCount = 1;

	m_pSwapChain = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pTexture);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	CRect                rect;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (m_pImmediateContext)

		D3D11_SDK_VERSION,

	UINT offsets = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#include <iostream>

			default:

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		D3D11_SDK_VERSION,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

	UINT offsets = 0;

	return;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext = NULL;



		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	tinyobj::ObjReader reader;

struct ConstantLight {

			default:

		&m_pDevice,

	XMFLOAT4X4 view;



	txDesc.Width = rect.Width();

	//テクスチャ読み込み

	if (FAILED(hr))





#ifdef _DEBUG

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	{

		//User presses a key

			}

		}

	if (FAILED(hr))

	WORD   icount = indexList.size();

	m_pSwapChain = NULL;

#include <iostream>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	enum KeyPressSurfaces

	//Clean up our objects and quit



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			for (size_t v = 0; v < fv; v++)



struct ConstantMatrixBuffer {



	int     vcount = vertexlist.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	std::string imagePath = "hello.bmp";

	//ピクセルシェーダー生成

}

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&materials,

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	WORD* pIList = new WORD[icount];

		return hr;

		SDL_RenderPresent(ren);

struct ConstantLight {

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMFLOAT4X4 projection;



	m_pImmediateContext = NULL;

}
		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	if (FAILED(hr))



	m_pLightBuffer = NULL;

		//User requests quit

		return hr;

	cbDesc.CPUAccessFlags = 0;

		exit(1);

	float    fov = XMConvertToRadians(20.0f);

		size_t index_offset = 0;  // インデントのオフセット

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pTexture);

			{

				break;

	SDL_Quit();

				break;

	m_VertexCount = vcount;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_DestroyRenderer(ren);



	m_pLightBuffer = NULL;

		}

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_UP,

	return 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

struct ConstantLight {

	SDL_DestroyTexture(tex);

		return hr;

	HRESULT              hr;



	ConstantLight    pntLight; //点光源

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_Delay(1000);



	ibDesc.ByteWidth = sizeof(WORD) * icount;



 */

		{







	};

};

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))

			}

};



		}

}



		return hr;



	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

		D3D11_SDK_VERSION,

		KEY_PRESS_SURFACE_DEFAULT,

	irData.SysMemPitch = 0;

	irData.pSysMem = &pIList[0];

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;



	//頂点シェーダー生成

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			for (size_t v = 0; v < num_vertices; v++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =



	{

	if (!reader.Warning().empty())

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

				indexlist.push_back(idx.vertex_index);

	txDesc.SampleDesc.Count = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	vbDesc.StructureByteStride = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.MiscFlags = 0;



	}

	SAFE_RELEASE(m_pSwapChain);



	vbDesc.StructureByteStride = 0;

	};



{

			index_offset += num_vertices;



	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

void CD3DTest::Render()

	if (SDL_Init(SDL_INIT_VIDEO != 0))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_Delay(1000);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//ビューポート設定

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pTextureView);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	bool ret = tinyobj::LoadObj(

	scDesc.Windowed = TRUE;

	{





		KEY_PRESS_SURFACE_UP,



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#ifdef _DEBUG

		//User presses a key

				tinyobj::real_t ty =

	std::string imagePath = "hello.bmp";





		&m_pSwapChain,

	D3D11_BUFFER_DESC vbDesc;

	}

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pTexture);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pVertexShader);



		{



		}



	if (m_pImmediateContext)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	return hr;

	SAFE_RELEASE(m_pTextureView);

	// Loop over shapes

	m_pPixelShader = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pIndexBuffer = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	pBackBuffer->Release();

void CD3DTest::Release()





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pTextureView = NULL;

				vertex.push_back(vertex_tmp);





	//vector<WORD> index_t;

#include <iostream>

	std::vector<tinyobj::material_t> materials;

	scDesc.OutputWindow = hwnd;



		delete[] pIList;

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	return;

	//テクスチャ読み込み

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		pVList[i] = vertexlist[i];

		NULL,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				WORD index = idx.vertex_index;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

void CD3DTest::Render()

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			// Loop over vertices in the face.

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		&m_pDevice,

	SAFE_RELEASE(m_pTextureView);

	if (!error.empty())

	//頂点レイアウト作成

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT flags = 0;

	m_Viewport.MaxDepth = 1.0f;



}

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Clean up our objects and quit

	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_TOTAL

			}

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.MinDepth = 0.0f;



int main(int, char**)

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.MipLevels = 1;

	m_pVertexBuffer = NULL;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		size_t index_offset = 0;

	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	{

	LoadObj(vertexlist, indexList);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void CD3DTest::Release()



	//Create Index

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



			case SDLK_LEFT:

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	WORD   icount = indexList.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pMatrixBuffer = NULL;



	enum KeyPressSurfaces

	::GetClientRect(hwnd, &rect);



{



	}

	vrData.pSysMem = &pVList[0];



	std::string inputfile = "test.obj";

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	scDesc.Windowed = TRUE;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

				tinyobj::real_t ty =

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.SampleDesc.Count = 1;

	{

	//Key press surfaces constants

			}

		}

	vbDesc.MiscFlags = 0;



	::GetClientRect(hwnd, &rect);

}



				tinyobj::real_t ty =



			case SDLK_DOWN:

	}

	scDesc.BufferCount = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

#include <SDL.h>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.MiscFlags = 0;



	}*/

	vrData.SysMemPitch = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				vertex.push_back(vertex_tmp);

		m_pImmediateContext->ClearState();

	cbDesc.MiscFlags = 0;



#include <iostream>

	cbDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_VertexCount = vcount;

		SDL_RenderClear(ren);

	ibDesc.CPUAccessFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#ifdef _DEBUG

		flags,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (int i = 0; i < vcount; i++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	CRect                rect;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{



	float    farZ = 100.0f;

	m_pInputLayout = NULL;

{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantLight {

		size_t index_offset = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pLightBuffer = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.pSysMem = &pIList[0];



	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Count = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Width = rect.Width();

}

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t ty =



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vector<Vertex> vertexlist;

	UINT strides = sizeof(Vertex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		if (!ret)

				break;

};

		m_pImmediateContext->ClearState();

	m_pInputLayout = NULL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		cout << "SDL_INIT_ERROR" << endl;

	auto& shapes = reader.GetShapes();



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	return;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pVertexBuffer);



	XMFLOAT4X4 world;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



			for (size_t v = 0; v < num_vertices; v++)

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&level,



		}

CD3DTest::CD3DTest()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.MiscFlags = 0;



				WORD index = idx.vertex_index;

	float    farZ = 100.0f;

		SDL_Delay(1000);

	txDesc.Height = rect.Height();



	m_IndexCount = 0;



	SAFE_RELEASE(m_pLightBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

	{

	}

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	{

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t tx =

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

		1,

	ibDesc.CPUAccessFlags = 0;

		pLevels,



		//User presses a key

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#ifdef _DEBUG

	XMFLOAT4X4 world;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.TopLeftY = 0;

		SDL_Delay(1000);

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		return hr;

	cbDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 projection;

	m_pInputLayout = NULL;

	// Loop over shapes

	auto& shapes = reader.GetShapes();

	return 0;

		{

	m_Viewport.TopLeftY = 0;

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//頂点レイアウト作成

	int     vcount = vertexlist.size();

	D3D11_BUFFER_DESC ibDesc;



	m_pDevice = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		{

};

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.CPUAccessFlags = 0;



	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSwapChain);



	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	auto& shapes = reader.GetShapes();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Quit();

	SDL_DestroyRenderer(ren);

	D3D11_TEXTURE2D_DESC txDesc;





	XMFLOAT4 specular;          //反射(r,g,b)

	}

	SAFE_RELEASE(m_pVertexBuffer);

	D3D_FEATURE_LEVEL level;

		if (!ret)

		SDL_RenderClear(ren);

		return hr;

		&materials,

	return;



				break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.eyePos, eye);

		// Loop over faces(polygon)

	ID3D11Texture2D* pBackBuffer;

	scDesc.SampleDesc.Count = 1;

	scDesc.Windowed = TRUE;

		SDL_RenderClear(ren);

			switch (e.key.keysym.sym)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//ピクセルシェーダー生成

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	CRect                rect;





	{

		return hr;

			break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pDevice,

	XMStoreFloat4(&clb.ambient, lightAmbient);

{

		return hr;

			case SDLK_DOWN:

	scDesc.BufferDesc.Width = rect.Width();

		&attrib,

	delete[] pIList;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

 */

	WORD   icount = indexList.size();

	pBackBuffer->Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

#include <iostream>

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.SampleDesc.Quality = 0;

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#include <iostream>

	txDesc.Width = rect.Width();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//ビューポート設定

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

		flags,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	if (!error.empty())

	};

			default:



	enum KeyPressSurfaces

	SDL_FreeSurface(bmp);

	ibDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	auto& materials = reader.GetMaterials();



	m_pDepthStencilTexture = NULL;

	std::string inputfile = "test.obj";

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.StructureByteStride = 0;

	//Vertex* pVList = new Vertex[vcount];



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexShader);

		}

	XMFLOAT4 specular;          //反射(r,g,b)

	irData.SysMemPitch = 0;

	return hr;

	SAFE_RELEASE(m_pPixelShader);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		delete[] pVList;

	for (int i = 0; i < vcount; i++)

		{



	//テクスチャ読み込み

	if (FAILED(hr))



	SAFE_RELEASE(m_pPixelShader);

		delete[] pIList;



}
	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				// access to vertex



			exit(1);

int main(int, char**)

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	UINT offsets = 0;





		SDL_RenderPresent(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

{



	std::string error;

	bool ret = tinyobj::LoadObj(

	ConstantLight    pntLight; //点光源



	auto& attrib = reader.GetAttrib();

void CD3DTest::Render()

		{

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pIndexBuffer);



	XMFLOAT4X4 projection;

HRESULT CD3DTest::Create(HWND hwnd)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		size_t index_offset = 0;

	vbDesc.StructureByteStride = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	}

{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D11_BUFFER_DESC vbDesc;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

struct ConstantLight {

	m_IndexCount = 0;

		return hr;

	cbDesc.MiscFlags = 0;

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t tx =



	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	UINT flags = 0;



void CD3DTest::Release()

	m_IndexCount = icount;



		return hr;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

	UINT strides = sizeof(Vertex);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	//頂点バッファ作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

};

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_DEFAULT,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

CD3DTest::~CD3DTest()

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.SampleDesc.Count = 1;

}

			case SDLK_RIGHT:

		{

	if (FAILED(hr))

		&m_pSwapChain,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_VertexCount = 0;

using std::cout; using std::endl;

struct ConstantLightBuffer {



	XMFLOAT4 ambient;           //環境(r,g,b)

	auto& attrib = reader.GetAttrib();



	XMFLOAT4X4 world;

		pLevels,

	m_Viewport.MaxDepth = 1.0f;

#include <iostream>

	irData.SysMemSlicePitch = 0;

	//定数バッファ作成

		&error,

	m_pDepthStencilTexture = NULL;

		SDL_RenderClear(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	std::vector<tinyobj::shape_t> shapes;

		delete[] pIList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	UINT flags = 0;

	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



};

	delete[] pVList;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	pBackBuffer->Release();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}



	scDesc.SampleDesc.Quality = 0;

 * Lesson 1: Hello World!



	tinyobj::attrib_t attrib;

		return hr;

		&attrib,

			{

	delete[] pVList;

};

struct ConstantMatrixBuffer {

			switch (e.key.keysym.sym)

		{

		NULL,

	//ビューポート設定

	}

	//Key press surfaces constants

	CRect                rect;

CD3DTest::~CD3DTest()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		pLevels,

	txDesc.SampleDesc.Quality = 0;

	dsDesc.Texture2D.MipSlice = 0;

	m_Angle += XMConvertToRadians(1.0f);







	m_pDepthStencilTexture = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pLightBuffer);



		R"(cube.obj)");

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				// access to vertex

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pDevice = NULL;

CD3DTest::CD3DTest()

	SDL_DestroyWindow(win);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.StructureByteStride = 0;

	auto& shapes = reader.GetShapes();

	ConstantLightBuffer clb;

	std::vector<tinyobj::material_t> materials;

		{

		}

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





int main(int, char**)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	//First we need to start up SDL, and make sure it went ok

	std::vector<tinyobj::material_t> materials;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		SDL_Delay(1000);

			switch (e.key.keysym.sym)



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		if (e.type == SDL_QUIT)

	SDL_DestroyTexture(tex);

		{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pSwapChain->Present(0, 0);

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pVertexShader);



/*

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_IndexCount = 0;

			default:

		return hr;

		pVList[i] = vertexlist[i];

		return hr;



	D3D11_SUBRESOURCE_DATA vrData;

	tinyobj::ObjReader reader;

	}

		SDL_RenderClear(ren);

	SDL_Event e;

int main(int, char**)

		// Loop over faces(polygon)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pVertexShader);

			{

	//頂点レイアウト作成

{

	ConstantLightBuffer clb;

			//Select surfaces based on key press

		size_t index_offset = 0;

	if (FAILED(hr))

struct ConstantMatrixBuffer {

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&level,

	Release();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			}



				WORD index = idx.vertex_index;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyRenderer(ren);





				WORD index = idx.vertex_index;

	//vector<WORD> index_t;

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_DestroyWindow(win);

	m_pLightBuffer = NULL;

}
	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	float    farZ = 100.0f;

	if (!reader.ParseFromFile(inputfile, reader_config))

	return;

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//定数バッファ作成

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_Delay(1000);

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		&error,

		}





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.TopLeftY = 0;

	ibDesc.StructureByteStride = 0;



	HRESULT              hr;

	}

			}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	auto& shapes = reader.GetShapes();



	if (FAILED(hr))



using std::cout; using std::endl;



	vbDesc.StructureByteStride = 0;

	{







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;



	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::ObjReaderConfig reader_config;

	//Vertex* pVList = new Vertex[vcount];





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pSampler);

		&error,

		return hr;

			}

			index_offset += fv;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	if (FAILED(hr))



#include <iostream>



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	SDL_DestroyWindow(win);

		else if (e.type == SDL_KEYDOWN)

	//Create Index

	SAFE_RELEASE(m_pVertexShader);



	m_pVertexShader = NULL;



		SDL_Delay(1000);

{

	cbDesc.StructureByteStride = 0;

		return 1;

	std::string error;





	/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pTextureView);

	if (!reader.Warning().empty())

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

struct ConstantLight {

	LoadObj(vertexlist, indexList);

	UINT strides = sizeof(Vertex);



	SAFE_RELEASE(m_pDepthStencilView);

	irData.SysMemPitch = 0;

		return hr;

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.StructureByteStride = 0;



	XMFLOAT4         eyePos;   //視点座標



	SAFE_RELEASE(m_pVertexShader);

			}

{

	}*/

int main(int, char**)



	//ビューポート設定

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	Vertex* pVList = new Vertex[vcount];





}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}





	return;

		D3D11_SDK_VERSION,

	}

	m_pTexture = NULL;

	SDL_Quit();

			exit(1);

	vector<WORD> indexList;

#include "DirectXManager.h"

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

		R"(cube.obj)");

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyRenderer(ren);

	vrData.SysMemSlicePitch = 0;

	std::string imagePath = "hello.bmp";

{

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyTexture(tex);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

		1,

	//頂点レイアウト作成

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderPresent(ren);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_RIGHT,

	m_pPixelShader = NULL;

	ConstantLightBuffer clb;

	XMFLOAT4X4 view;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pTextureView);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.eyePos, eye);

	//Clean up our objects and quit

#ifdef _DEBUG

#include <iostream>

			index_offset += fv;

};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	tinyobj::attrib_t attrib;



	m_pDevice = NULL;

		else if (e.type == SDL_KEYDOWN)

	m_pDepthStencilView = NULL;

}

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;



{

	XMStoreFloat4(&clb.eyePos, eye);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	float    fov = XMConvertToRadians(20.0f);

		flags,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



struct ConstantMatrixBuffer {

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_VertexCount = 0;





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_Delay(1000);



	SDL_FreeSurface(suf);



	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	}

	// Loop over shapes

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.MiscFlags = 0;



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pVertexShader);

	D3D11_SUBRESOURCE_DATA vrData;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pVertexBuffer = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pMatrixBuffer = NULL;

/*

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			index_offset += fv;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.MiscFlags = 0;

using std::cout; using std::endl;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_RenderClear(ren);

			default:

		KEY_PRESS_SURFACE_DEFAULT,

		1,

	auto& attrib = reader.GetAttrib();

		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

	m_Viewport.MaxDepth = 1.0f;

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.Height = rect.Height();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyWindow(win);







{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		if (!ret)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.TopLeftX = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pSwapChain = NULL;



{



	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_TEXTURE2D_DESC txDesc;

}

	for (int i = 0; i < vcount; i++)



		{



	m_pInputLayout = NULL;

	vbDesc.StructureByteStride = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Vertex* pVList = new Vertex[vcount];

	scDesc.SampleDesc.Count = 1;

	m_pLightBuffer = NULL;

			for (size_t v = 0; v < fv; v++)

	{

	m_pSampler = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	};

		//User requests quit

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDepthStencilView = NULL;



		KEY_PRESS_SURFACE_UP,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&m_pDevice,



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	pBackBuffer->Release();

		// Loop over faces(polygon)

	if (!reader.ParseFromFile(inputfile, reader_config))





		if (!ret)



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			exit(1);

		KEY_PRESS_SURFACE_DEFAULT,



		return hr;

}

			case SDLK_RIGHT:

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		delete[] pVList;

		delete[] pVList;

				WORD index = idx.vertex_index;



	for (int j = 0; j < icount; j++)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

using std::cout; using std::endl;





	if (m_pImmediateContext)

		SDL_RenderClear(ren);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pPixelShader);



			case SDLK_RIGHT:



struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//定数バッファ作成

	scDesc.SampleDesc.Count = 1;

CD3DTest::CD3DTest()



	}

	if (FAILED(hr))



	}

	SAFE_RELEASE(m_pSampler);

		KEY_PRESS_SURFACE_UP,





#ifdef _DEBUG

		pVList[i] = vertexlist[i];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

};

	}

	cbDesc.MiscFlags = 0;

	{

		NULL,

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_Delay(1000);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::GetClientRect(hwnd, &rect);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return;

		}



	scDesc.OutputWindow = hwnd;





	XMStoreFloat4(&clb.eyePos, eye);



	SDL_DestroyWindow(win);

	for (int i = 0; i < vcount; i++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_VertexCount = vcount;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&shapes,

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DEFAULT,

	{

	//インデックスバッファ作成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vrData.SysMemPitch = 0;

	cbDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;



	SDL_DestroyRenderer(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pIndexBuffer = NULL;

{

		}

{

	SDL_Event e;

		{



	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	Release();

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pMatrixBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



			for (size_t v = 0; v < num_vertices; v++)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	Release();

	vector<WORD> indexList;

	ConstantLightBuffer clb;

	m_pIndexBuffer = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

				break;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{



	Release();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Quit();

				indexlist.push_back(index);



		&m_pSwapChain,

struct ConstantMaterial {



#endif





		&level,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pTexture);

	m_Viewport.MaxDepth = 1.0f;

		if (e.type == SDL_QUIT)

	SDL_DestroyRenderer(ren);

int main(int, char**)



	scDesc.Windowed = TRUE;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4X4 world;

			exit(1);

		return hr;



	m_pTextureView = NULL;



	SAFE_RELEASE(m_pTexture);

	std::string imagePath = "hello.bmp";

	float    nearZ = 0.1f;

	}

	XMFLOAT4 specular;          //反射(r,g,b)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Create Index

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,



CD3DTest::CD3DTest()



}

	SDL_DestroyTexture(tex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilView);

void CD3DTest::Render()



			// Loop over vertices in the face.

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		R"(cube.obj)");



		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	ConstantMatrixBuffer cmb;

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	return hr;

{

#include <SDL.h>

	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);

	{

		&m_pDevice,

#ifdef _DEBUG

	float    farZ = 100.0f;



	for (int i = 0; i < vcount; i++)



	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

	return hr;

		SDL_RenderClear(ren);

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_RIGHT,

	//頂点シェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pSampler = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	/*



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	XMFLOAT4X4 view;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyWindow(win);

	XMFLOAT4 ambient;           //環境(r,g,b)

	ConstantLight    pntLight; //点光源

	m_pTextureView = NULL;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

 * Lesson 1: Hello World!

		if (e.type == SDL_QUIT)



	CRect                rect;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MipLevels = 1;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			exit(1);

		return hr;



};

	{

			index_offset += num_vertices;

	//Key press surfaces constants

		size_t index_offset = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pIList;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	};

	vbDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	cbDesc.StructureByteStride = 0;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



			index_offset += fv;

	m_pTextureView = NULL;



	std::vector<tinyobj::material_t> materials;

		return 1;

	SAFE_RELEASE(m_pLightBuffer);

			}

	::GetClientRect(hwnd, &rect);

		exit(1);

		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexBuffer);

	}

	//Key press surfaces constants

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_DestroyTexture(tex);

	auto& materials = reader.GetMaterials();



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		exit(1);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::string inputfile = "test.obj";

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

			}

	//Key press surfaces constants

	m_Viewport.MaxDepth = 1.0f;

struct ConstantLightBuffer {

	std::string imagePath = "hello.bmp";

	m_pTextureView = NULL;

}

	float    nearZ = 0.1f;



	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pVertexShader = NULL;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,





	float    nearZ = 0.1f;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext = NULL;

	}



	tinyobj::attrib_t attrib;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	delete[] pIList;

	HRESULT              hr;

	UINT flags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

int main(int, char**)

	m_Viewport.TopLeftX = 0;

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t ty =



	txDesc.ArraySize = 1;



	{

	txDesc.SampleDesc.Count = 1;

	for (int j = 0; j < icount; j++)





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		else if (e.type == SDL_KEYDOWN)





	{

{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

	Release();

	float    farZ = 100.0f;



}

	return;

	/*

				tinyobj::real_t tx =

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	m_IndexCount = icount;



{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_TEXTURE2D_DESC txDesc;

		&attrib,

		NULL,

	txDesc.ArraySize = 1;

		size_t index_offset = 0;

	return 0;



			}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	scDesc.BufferCount = 1;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	UINT strides = sizeof(Vertex);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pSampler = NULL;





	vector<WORD> indexList;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSwapChain);



	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	delete[] pVList;

{

		size_t index_offset = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pVertexShader);

	vrData.SysMemSlicePitch = 0;

#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	pBackBuffer->Release();

	SAFE_RELEASE(m_pImmediateContext);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pDevice);

				// access to vertex

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

 * Lesson 1: Hello World!

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&error,

	ConstantMaterial material; //物体の質感

	cbDesc.MiscFlags = 0;

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return 1;

	SDL_DestroyRenderer(ren);

 * Lesson 1: Hello World!

	std::string inputfile = "test.obj";

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];







	float    fov = XMConvertToRadians(20.0f);

		return hr;

	tinyobj::attrib_t attrib;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

			{

	XMFLOAT4         ambient;  //環境光(r,g,b)



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

/*

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



			}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (!ret)



struct ConstantMaterial {

	//インデックスバッファ作成



	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SAMPLER_DESC smpDesc;

			//Select surfaces based on key press

				tinyobj::real_t ty =

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//vector<Vertex> vertex_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::vector<tinyobj::material_t> materials;

struct ConstantLightBuffer {



{

	//定数バッファ作成



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_DOWN:

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_VertexCount = vcount;

	}

	tinyobj::attrib_t attrib;

 * Lesson 1: Hello World!

	SDL_FreeSurface(bmp);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	D3D11_BUFFER_DESC vbDesc;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	WORD* pIList = new WORD[icount];

		// Loop over faces(polygon)

	for (const auto& shape : shapes)

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	}

{



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    nearZ = 0.1f;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	cbDesc.CPUAccessFlags = 0;





		return 1;

	{

		return hr;

	for (int j = 0; j < icount; j++)

		{

		1,

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 ambient;           //環境(r,g,b)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



void CD3DTest::Release()



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	int     vcount = vertexlist.size();

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t ty =

struct ConstantMatrixBuffer {

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	}

	if (FAILED(hr))



	Release();

		// Loop over faces(polygon)

using std::cout; using std::endl;

	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pVertexShader);



		SDL_RenderClear(ren);

	scDesc.BufferDesc.Width = rect.Width();

	std::vector<tinyobj::material_t> materials;

	tinyobj::attrib_t attrib;

 * Lesson 1: Hello World!

	{

		//User presses a key

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

{





		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

int main(int, char**)



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pMatrixBuffer = NULL;

	SDL_DestroyTexture(tex);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

#include <iostream>

	//ビューポート設定

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_Delay(1000);

}

				indexlist.push_back(index);

	m_Viewport.MinDepth = 0.0f;

	return 0;

struct ConstantLightBuffer {

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

int main(int, char**)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDepthStencilTexture = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	//vector<WORD> index_t;

	txDesc.MipLevels = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vbDesc.StructureByteStride = 0;

#ifdef _DEBUG

	//定数バッファ作成

	txDesc.ArraySize = 1;

	SDL_Quit();

				// access to vertex

	if (FAILED(hr))

	std::string inputfile = "test.obj";

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	SDL_FreeSurface(bmp);





	scDesc.SampleDesc.Quality = 0;



				tinyobj::real_t tx =

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	SDL_FreeSurface(bmp);

	bool ret = tinyobj::LoadObj(

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	m_VertexCount = 0;

{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	for (int j = 0; j < icount; j++)

{

		&shapes,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	irData.pSysMem = &pIList[0];

	for (int i = 0; i < vcount; i++)

	D3D11_SUBRESOURCE_DATA irData;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	m_pVertexShader = NULL;

	//定数バッファ作成

	//ビューポート設定

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pTextureView);

		&m_pDevice,

	}

		}

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//ピクセルシェーダー生成

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}*/

	m_pSampler = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantMaterial material; //物体の質感



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	delete[] pVList;

	Release();

	//深度ステンシルバッファ作成



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#ifdef _DEBUG

		}

		SDL_RenderClear(ren);

		return hr;

{

	m_pInputLayout = NULL;

	UINT offsets = 0;

			case SDLK_UP:



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_VertexCount = vcount;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		SDL_RenderPresent(ren);

	m_VertexCount = 0;



		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

		&level,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::string imagePath = "hello.bmp";





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

	}*/

void CD3DTest::Release()

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_SUBRESOURCE_DATA irData;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{

	/*

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.Format = txDesc.Format;

		exit(1);

				// access to vertex

	XMFLOAT4 pos;               //座標(x,y,z)

		R"(cube.obj)");

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vrData.SysMemPitch = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		}

				break;

		if (!ret)

	enum KeyPressSurfaces

	D3D11_TEXTURE2D_DESC txDesc;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferCount = 1;





	m_Viewport.TopLeftY = 0;

}

				break;

	// Loop over shapes

	SAFE_RELEASE(m_pDepthStencilTexture);

		exit(1);

	}

	}

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pDepthStencilView = NULL;

/*

	irData.SysMemPitch = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

{

		return hr;

	m_pSwapChain = NULL;

	irData.SysMemPitch = 0;

	ConstantLightBuffer clb;

	//vector<WORD> index_t;

	UINT offsets = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.Height = (FLOAT)rect.Height();

	//定数バッファ作成

	m_pSampler = NULL;



};

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pDepthStencilTexture = NULL;

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

		&error,

{





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pSwapChain = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}





			case SDLK_UP:

	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_DOWN,

	std::string error;

}



 * Lesson 1: Hello World!

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.OutputWindow = hwnd;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	// Loop over shapes

				indexlist.push_back(index);

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.MiscFlags = 0;

			}

	if (FAILED(hr))



		return hr;

	scDesc.BufferCount = 1;

	{

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		NULL,

		}

	}



		//User requests quit

	cbDesc.MiscFlags = 0;

		R"(cube.obj)");

				vertex.push_back(vertex_tmp);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	Release();

	return 0;

	std::string inputfile = "test.obj";

	scDesc.SampleDesc.Quality = 0;

		return hr;





			for (size_t v = 0; v < num_vertices; v++)

struct ConstantMaterial {

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))



		&m_pSwapChain,



}

	//vector<WORD> index_t;

		&m_pDevice,

	ibDesc.StructureByteStride = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		exit(1);

		KEY_PRESS_SURFACE_LEFT,



				WORD index = idx.vertex_index;

			// Loop over vertices in the face.

	ConstantLightBuffer clb;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

			switch (e.key.keysym.sym)

	m_VertexCount = 0;

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);

	for (const auto& shape : shapes)



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

CD3DTest::~CD3DTest()

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantLight    pntLight; //点光源

		&scDesc,

	cbDesc.CPUAccessFlags = 0;

		&error,

		if (e.type == SDL_QUIT)

{

	}



	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		NULL,

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	return;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.MiscFlags = 0;

}

}

			for (size_t v = 0; v < num_vertices; v++)

	for (size_t s = 0; s < shapes.size(); s++)

	ConstantMatrixBuffer cmb;

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return 0;

 * Lesson 1: Hello World!

	for (int j = 0; j < icount; j++)



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		//User presses a key

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

/*

	auto& attrib = reader.GetAttrib();



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			index_offset += fv;



		&attrib,



	return;

	cbDesc.StructureByteStride = 0;

	vrData.pSysMem = &pVList[0];

/*



 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_SUBRESOURCE_DATA irData;

			case SDLK_UP:

	float    nearZ = 0.1f;



	if (FAILED(hr))

	m_pImmediateContext = NULL;

	//頂点シェーダー生成

	//Key press surfaces constants

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				WORD index = idx.vertex_index;

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	WORD* pIList = new WORD[icount];

		SDL_RenderClear(ren);

	SDL_Quit();

	//Clean up our objects and quit

	if (!error.empty())

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				WORD index = idx.vertex_index;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok

		return hr;

	//Vertex* pVList = new Vertex[vcount];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	dsDesc.Texture2D.MipSlice = 0;







};

		exit(1);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Width = rect.Width();



#include <SDL.h>

};

		KEY_PRESS_SURFACE_DEFAULT,



	m_Viewport.MinDepth = 0.0f;

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_BUFFER_DESC ibDesc;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_RIGHT,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;

	m_IndexCount = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pTextureView);

#endif

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&level,

	auto& shapes = reader.GetShapes();

	vbDesc.StructureByteStride = 0;

/*

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_RIGHT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_IndexCount = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	int     vcount = vertexlist.size();



}
/*

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

}

	while (SDL_PollEvent(&e) != 0)

		}

	vrData.SysMemPitch = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

#endif





				vertex.push_back(vertex_tmp);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 ambient;           //環境(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{



	while (SDL_PollEvent(&e) != 0)

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_DestroyRenderer(ren);

			// Loop over vertices in the face.

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

	WORD* pIList = new WORD[icount];



			for (size_t v = 0; v < fv; v++)

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		{



		return 1;

	}

	XMFLOAT4X4 projection;

		exit(1);



}



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	delete[] pIList;

	//ビューポート設定



		&m_pImmediateContext);

	tinyobj::attrib_t attrib;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	auto& shapes = reader.GetShapes();

	return;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.SampleDesc.Count = 1;

};

	pBackBuffer->Release();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&m_pSwapChain,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.StructureByteStride = 0;

	float    farZ = 100.0f;





	m_pImmediateContext = NULL;

		return 1;

	//深度ステンシルバッファ作成

	std::string error;



}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		else if (e.type == SDL_KEYDOWN)

CD3DTest::~CD3DTest()

	m_pTextureView = NULL;

	//頂点バッファ作成

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderPresent(ren);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	XMFLOAT4         ambient;  //環境光(r,g,b)

			}

#include <SDL.h>



}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//vector<Vertex> vertex_t;

		return hr;

	}

			}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.SampleDesc.Quality = 0;

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	std::string imagePath = "hello.bmp";



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.MiscFlags = 0;

	txDesc.Width = rect.Width();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;



	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int i = 0; i < 3; i++)



	}

			default:

{



	std::vector<tinyobj::material_t> materials;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	/*

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			}

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		delete[] pIList;

	for (size_t s = 0; s < shapes.size(); s++)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pTextureView);

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 projection;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	ibDesc.CPUAccessFlags = 0;

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	//インデックスバッファ作成



	D3D11_SUBRESOURCE_DATA irData;

			index_offset += fv;

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pLightBuffer);

		//User presses a key

				break;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	pBackBuffer->Release();

	cbDesc.StructureByteStride = 0;







			break;



		SDL_RenderPresent(ren);

		}

		//User presses a key

		SDL_Delay(1000);

	}*/

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		pLevels,

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#include <SDL.h>





		delete[] pVList;

	{

		pIList[j] = indexList[j];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		flags,

		if (!reader.Error().empty())



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include "DirectXManager.h"

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

 * Lesson 1: Hello World!

	}

	if (FAILED(hr))



	Release();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			default:

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			exit(1);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	Release();

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		{

				indexlist.push_back(index);

	m_pSwapChain->Present(0, 0);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Event e;

	Release();

	if (FAILED(hr))



	{

};

	return 0;

struct ConstantLight {



			//Select surfaces based on key press

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pSwapChain);



	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_DOWN,

		return 1;



	XMFLOAT4X4 world;







	vbDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			index_offset += fv;

{

	// Loop over shapes

	std::string error;

	{

	m_pIndexBuffer = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//定数バッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

void CD3DTest::Release()

		pIList[j] = indexList[j];

			case SDLK_RIGHT:

		else if (e.type == SDL_KEYDOWN)

			}

		delete[] pIList;

				WORD index = idx.vertex_index;

		{

	return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	ibDesc.StructureByteStride = 0;

	SDL_Quit();

		return hr;



	scDesc.BufferDesc.Width = rect.Width();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Count = 1;

		{

	if (FAILED(hr))

			break;

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	enum KeyPressSurfaces

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		KEY_PRESS_SURFACE_DOWN,

	/*

		SDL_RenderPresent(ren);

	std::string imagePath = "hello.bmp";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//ビューポート設定

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			case SDLK_RIGHT:



	SAFE_RELEASE(m_pSampler);





	XMFLOAT4         ambient;  //環境光(r,g,b)



	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

HRESULT CD3DTest::Create(HWND hwnd)



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC cbDesc;

}

			{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			default:

			for (size_t v = 0; v < num_vertices; v++)

				break;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.StructureByteStride = 0;

	ibDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	m_pTexture = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pInputLayout);



	SAFE_RELEASE(m_pLightBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D11_BUFFER_DESC ibDesc;



	if (FAILED(hr))



	std::string inputfile = "test.obj";

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

		1,

		return hr;

		&error,

		pVList[i] = vertexlist[i];

	SDL_DestroyRenderer(ren);

	D3D11_SUBRESOURCE_DATA irData;

	dsDesc.Format = txDesc.Format;

			{

	if (m_pImmediateContext)

int main(int, char**)

	std::string inputfile = "test.obj";

int SEGMENT = 36;

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

};

	m_VertexCount = 0;

#include <SDL.h>

			}

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.BufferDesc.Width = rect.Width();





	m_pTexture = NULL;

	//定数バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pSwapChain->Present(0, 0);

	{

struct ConstantLight {

	m_pVertexShader = NULL;

	UINT flags = 0;

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

		{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	Release();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.Windowed = TRUE;

CD3DTest::~CD3DTest()

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				break;

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))



	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return hr;



	//テクスチャ読み込み

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



			// Loop over vertices in the face.

	cbDesc.MiscFlags = 0;

		//User presses a key

		pVList[i] = vertexlist[i];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pIndexBuffer);

	CRect                rect;



	m_Viewport.MaxDepth = 1.0f;

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//Key press surfaces constants

	auto& shapes = reader.GetShapes();

	m_pInputLayout = NULL;

		D3D11_SDK_VERSION,

	std::string error;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pDevice,

	m_pDevice = NULL;

	SAFE_RELEASE(m_pTexture);

	//頂点レイアウト作成

	}*/

}

	{

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

				WORD index = idx.vertex_index;

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	SAFE_RELEASE(m_pImmediateContext);

			case SDLK_UP:

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&shapes,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		KEY_PRESS_SURFACE_DOWN,

		return hr;

		return 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	vrData.SysMemSlicePitch = 0;

		&level,



				vertex.push_back(vertex_tmp);

	m_pMatrixBuffer = NULL;

	}

	//vector<Vertex> vertex_t;





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

	//定数バッファ作成



	//ビューポート設定

			break;

	if (FAILED(hr))

		exit(1);

	Release();

	UINT offsets = 0;

	vrData.pSysMem = &pVList[0];

	vector<Vertex> vertexlist;

	m_pSwapChain->Present(0, 0);

				vertex.push_back(vertex_tmp);

	//深度ステンシルバッファ作成

void CD3DTest::Release()



	//Clean up our objects and quit

	auto& materials = reader.GetMaterials();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t ty =





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	HRESULT              hr;



		pVList[i] = vertexlist[i];

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pDepthStencilView = NULL;

	tinyobj::ObjReaderConfig reader_config;

CD3DTest::~CD3DTest()



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 pos;               //座標(x,y,z)

		{

	vector<Vertex> vertexlist;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//頂点バッファ作成

	if (FAILED(hr))

}

			for (size_t v = 0; v < fv; v++)

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.TopLeftY = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 view;

	{

		&attrib,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	for (const auto& shape : shapes)



struct ConstantMatrixBuffer {

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





#define TINYOBJLOADER_IMPLEMENTATION

#include "DirectXManager.h"

	Release();

	SAFE_RELEASE(m_pMatrixBuffer);

				// access to vertex



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::vector<tinyobj::material_t> materials;



	delete[] pIList;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





{



				vertex.push_back(vertex_tmp);

	D3D_FEATURE_LEVEL level;

	ibDesc.StructureByteStride = 0;

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{



	cbDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ibDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		// Loop over faces(polygon)

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

		&shapes,

	m_pImmediateContext = NULL;

	txDesc.ArraySize = 1;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#define TINYOBJLOADER_IMPLEMENTATION

	dsDesc.Format = txDesc.Format;



	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_UP,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	XMFLOAT4         eyePos;   //視点座標

				indexlist.push_back(idx.vertex_index);

		&m_pImmediateContext);

	WORD   icount = indexList.size();

	txDesc.MipLevels = 1;

	//定数バッファ作成

}

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//インデックスバッファ作成

	m_VertexCount = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t ty =

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

 * Lesson 1: Hello World!

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_BUFFER_DESC cbDesc;

		return hr;

		//User presses a key

		SDL_RenderPresent(ren);

	//vector<Vertex> vertex_t;

using std::cout; using std::endl;



	vrData.pSysMem = &pVList[0];





	//頂点レイアウト作成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float    nearZ = 0.1f;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	ConstantMatrixBuffer cmb;

	SDL_DestroyWindow(win);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#include <SDL.h>



	m_pLightBuffer = NULL;



	delete[] pIList;

	scDesc.SampleDesc.Count = 1;

			{

		{

	//ピクセルシェーダー生成



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);



	vbDesc.CPUAccessFlags = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	::ZeroMemory(&scDesc, sizeof(scDesc));





		return hr;

			index_offset += fv;

void CD3DTest::Render()



	D3D11_BUFFER_DESC cbDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

		}

			{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Height = rect.Height();

			for (size_t v = 0; v < num_vertices; v++)

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

		{

{

	txDesc.ArraySize = 1;



			}

/*

	{

{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_FreeSurface(bmp);



#include <iostream>

	}

#define TINYOBJLOADER_IMPLEMENTATION

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	tinyobj::ObjReader reader;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#endif

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	txDesc.Height = rect.Height();

		NULL,

	scDesc.BufferCount = 1;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTexture);

	{

	vbDesc.MiscFlags = 0;

}

	//深度ステンシルバッファ作成

		SDL_Delay(1000);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

 */

	XMStoreFloat4(&clb.eyePos, eye);

	{

	m_pIndexBuffer = NULL;



CD3DTest::CD3DTest()



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



			default:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferCount = 1;

	m_pTextureView = NULL;

		R"(cube.obj)");

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pPixelShader);



		//User presses a key



	std::string error;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

 */

	bool ret = tinyobj::LoadObj(

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.TopLeftY = 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	irData.SysMemSlicePitch = 0;

	return 0;



}





CD3DTest::~CD3DTest()

	//Clean up our objects and quit

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Create Index

		{

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyRenderer(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	}

CD3DTest::~CD3DTest()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&scDesc,

	D3D11_BUFFER_DESC ibDesc;

	cbDesc.MiscFlags = 0;

			index_offset += fv;



	cbDesc.MiscFlags = 0;

struct ConstantLight {

	m_pTextureView = NULL;

		return hr;

	for (const auto& shape : shapes)

	m_pSampler = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 pos;               //座標(x,y,z)

	irData.pSysMem = &pIList[0];

int SEGMENT = 36;

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	cbDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	vrData.SysMemPitch = 0;





	m_pLightBuffer = NULL;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files

	{

}

	vector<Vertex> vertexlist;

		//User presses a key

	DXGI_SWAP_CHAIN_DESC scDesc;



				tinyobj::real_t ty =

}

		KEY_PRESS_SURFACE_DEFAULT,

	auto& materials = reader.GetMaterials();

				vertex.push_back(vertex_tmp);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	tinyobj::ObjReader reader;

	txDesc.SampleDesc.Quality = 0;

	vrData.SysMemPitch = 0;

	cbDesc.CPUAccessFlags = 0;





	m_IndexCount = 0;

			switch (e.key.keysym.sym)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext = NULL;

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pPixelShader);



		KEY_PRESS_SURFACE_LEFT,

	D3D11_TEXTURE2D_DESC txDesc;

	m_Angle += XMConvertToRadians(1.0f);

	//ピクセルシェーダー生成

	std::vector<tinyobj::material_t> materials;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			default:

		D3D11_SDK_VERSION,



	for (const auto& shape : shapes)

/*

		R"(cube.obj)");

			}

struct ConstantMaterial {

	XMFLOAT4X4 projection;

				break;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	WORD   icount = indexList.size();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&shapes,

	m_VertexCount = vcount;

	{

	dsDesc.Texture2D.MipSlice = 0;

	for (int j = 0; j < icount; j++)



}

				vertex.push_back(vertex_tmp);

	ibDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

		// Loop over faces(polygon)

		SDL_RenderClear(ren);

		return hr;



	SAFE_RELEASE(m_pInputLayout);

	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		//User requests quit

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	vector<Vertex> vertexlist;



	m_VertexCount = vcount;

	if (FAILED(hr))

	m_pPixelShader = NULL;

		//User requests quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{





	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.ambient, lightAmbient);





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_DOWN,

	dsDesc.Format = txDesc.Format;

		{

	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_Viewport.TopLeftX = 0;

 * Lesson 1: Hello World!

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.TopLeftX = 0;

	float    fov = XMConvertToRadians(20.0f);

		D3D11_SDK_VERSION,

struct ConstantLightBuffer {



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::ObjReader reader;



	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

		exit(1);

	m_Viewport.Width = (FLOAT)rect.Width();

#include <SDL.h>

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		SDL_Delay(1000);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	for (int i = 0; i < vcount; i++)

	for (int i = 0; i < vcount; i++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	pBackBuffer->Release();

				break;

	//頂点シェーダー生成

		SDL_RenderClear(ren);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_FreeSurface(bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





	txDesc.CPUAccessFlags = 0;

			case SDLK_UP:

		KEY_PRESS_SURFACE_LEFT,

	for (int j = 0; j < icount; j++)

	ConstantMatrixBuffer cmb;



	XMStoreFloat4(&clb.ambient, lightAmbient);

			index_offset += fv;

		1,

#define TINYOBJLOADER_IMPLEMENTATION

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_RenderPresent(ren);

	return 0;

	SAFE_RELEASE(m_pRenderTargetView);

				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pRenderTargetView);



				WORD index = idx.vertex_index;

	//深度ステンシルバッファ作成

	SDL_FreeSurface(suf);

	}

	m_pSwapChain = NULL;

	m_pSampler = NULL;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	tinyobj::ObjReader reader;

	vrData.pSysMem = &pVList[0];

	//定数バッファ作成

		return hr;

	if (FAILED(hr))

	Release();

	//定数バッファ作成

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

		flags,

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		NULL,

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	if (FAILED(hr))



	vrData.pSysMem = &pVList[0];

	//vector<Vertex> vertex_t;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_pInputLayout = NULL;

		&scDesc,



	SDL_Quit();



			case SDLK_DOWN:

		SDL_RenderCopy(ren, tex, NULL, NULL);

			//Select surfaces based on key press

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



#include <iostream>

		return hr;

	irData.pSysMem = &pIList[0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));





		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderPresent(ren);

	m_pIndexBuffer = NULL;

	std::string imagePath = "hello.bmp";

	}

	m_pPixelShader = NULL;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	m_Viewport.MaxDepth = 1.0f;

	//Key press surfaces constants



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_FreeSurface(suf);

				vertex.push_back(vertex_tmp);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//vector<WORD> index_t;

	UINT strides = sizeof(Vertex);

				break;

HRESULT CD3DTest::Create(HWND hwnd)





	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};

	m_pMatrixBuffer = NULL;

}

		pLevels,

		if (!reader.Error().empty())

		else if (e.type == SDL_KEYDOWN)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				vertex.push_back(vertex_tmp);

	auto& shapes = reader.GetShapes();

	{



	float    fov = XMConvertToRadians(20.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	tinyobj::attrib_t attrib;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



				vertex.push_back(vertex_tmp);

		SDL_Delay(1000);

	HRESULT              hr;

	}

	{

			index_offset += fv;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(



		return hr;

	{

	}



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;

		{

		return hr;

		return hr;

	SDL_Quit();

#include <SDL.h>



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

 */



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;

				break;

	std::string inputfile = "test.obj";

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		{

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





		1,



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	WORD* pIList = new WORD[icount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;  // インデントのオフセット





	SAFE_RELEASE(m_pMatrixBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#define TINYOBJLOADER_IMPLEMENTATION



	m_pLightBuffer = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.eyePos, eye);

	m_pSwapChain->Present(0, 0);

	SDL_Quit();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	pBackBuffer->Release();

		SDL_RenderClear(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	XMFLOAT4X4 world;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	}*/

	for (int i = 0; i < 3; i++)





	SAFE_RELEASE(m_pInputLayout);

}



	ibDesc.CPUAccessFlags = 0;

	m_pTextureView = NULL;

	m_pRenderTargetView = NULL;

int main(int, char**)

			//Select surfaces based on key press

			default:

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	XMFLOAT4X4 projection;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	}

	m_pTextureView = NULL;

	vector<WORD> indexList;

	{

	txDesc.Height = rect.Height();

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pDevice);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pVertexBuffer = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderClear(ren);

				// access to vertex

	cbDesc.CPUAccessFlags = 0;

		}

}

	SDL_FreeSurface(bmp);



			default:

	SDL_FreeSurface(bmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pTextureView);



		{

	scDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC ibDesc;

CD3DTest::~CD3DTest()

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	scDesc.BufferDesc.Height = rect.Height();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	D3D11_BUFFER_DESC cbDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

			{

{

	return hr;

	auto& attrib = reader.GetAttrib();

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				indexlist.push_back(index);

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				WORD index = idx.vertex_index;

	{

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			index_offset += fv;

int main(int, char**)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ConstantMatrixBuffer cmb;

	}

	cbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			}



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

		flags,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

		delete[] pIList;

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	//ピクセルシェーダー生成

	int     vcount = vertexlist.size();

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantMaterial {

	float    farZ = 100.0f;

	}

			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = 0;

	scDesc.BufferDesc.Height = rect.Height();

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pDevice = NULL;

		SDL_RenderPresent(ren);



#endif

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	irData.SysMemPitch = 0;

	m_pRenderTargetView = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	}

	SAFE_RELEASE(m_pSampler);





	D3D11_BUFFER_DESC ibDesc;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.BufferCount = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pRenderTargetView = NULL;

		&materials,





				tinyobj::real_t ty =



		SDL_RenderClear(ren);

		}

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

struct ConstantMaterial {

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		if (!ret)

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	D3D11_BUFFER_DESC cbDesc;



	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_RIGHT,

#define TINYOBJLOADER_IMPLEMENTATION





		size_t index_offset = 0;  // インデントのオフセット

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				vertex.push_back(vertex_tmp);



				indexlist.push_back(index);

	}



	SAFE_RELEASE(m_pDevice);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	for (const auto& shape : shapes)

			}



		KEY_PRESS_SURFACE_DEFAULT,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&shapes,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.SampleDesc.Quality = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

int main(int, char**)

		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderClear(ren);



		KEY_PRESS_SURFACE_TOTAL



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	Release();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	}

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.MinDepth = 0.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		exit(1);



	SDL_DestroyTexture(tex);

	if (m_pImmediateContext)

	//テクスチャ読み込み

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

			//Select surfaces based on key press

				break;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	for (const auto& shape : shapes)

 */

{

	SDL_DestroyWindow(win);

	m_pSampler = NULL;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

int main(int, char**)



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



#include <SDL.h>

int SEGMENT = 36;

		return hr;

	Release();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			exit(1);

	vbDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    nearZ = 0.1f;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}



		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pPixelShader);

	{

			default:



	m_pSampler = NULL;



		R"(cube.obj)");





	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

}

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

				vertex.push_back(vertex_tmp);

			for (size_t v = 0; v < fv; v++)

void CD3DTest::Release()



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		flags,

void CD3DTest::Render()

#define TINYOBJLOADER_IMPLEMENTATION



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				// access to vertex



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	{

int main(int, char**)

		KEY_PRESS_SURFACE_LEFT,

}

	{

	vbDesc.StructureByteStride = 0;

struct ConstantMatrixBuffer {

	txDesc.ArraySize = 1;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	if (FAILED(hr))



	m_IndexCount = 0;

				break;

	UINT flags = 0;

	tinyobj::ObjReaderConfig reader_config;



	std::string imagePath = "hello.bmp";



	}

	{



		if (e.type == SDL_QUIT)



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			}

		if (!ret)

	}

{

		return hr;



		flags,

	// Loop over shapes

	//vector<WORD> index_t;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

};





			for (size_t v = 0; v < fv; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}
	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

			case SDLK_LEFT:



	irData.pSysMem = &pIList[0];



	{

	//vector<Vertex> vertex_t;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

	tinyobj::ObjReader reader;

	//Key press surfaces constants

int main(int, char**)

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSampler = NULL;

		return hr;

	m_Viewport.MinDepth = 0.0f;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	for (int j = 0; j < icount; j++)

	m_Angle += XMConvertToRadians(1.0f);

};

	m_Viewport.TopLeftX = 0;

	for (int i = 0; i < 3; i++)

	}

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				WORD index = idx.vertex_index;

	if (m_pImmediateContext)

	m_pMatrixBuffer = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pDevice = NULL;

		{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

struct ConstantLight {



			default:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				indexlist.push_back(idx.vertex_index);

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	m_pRenderTargetView = NULL;

	scDesc.BufferDesc.Width = rect.Width();



	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

};



	m_pImmediateContext = NULL;

/*



		m_pImmediateContext->ClearState();



	//深度ステンシルバッファ作成



}

	std::vector<tinyobj::shape_t> shapes;



				tinyobj::real_t ty =

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pTexture = NULL;

	XMFLOAT4         eyePos;   //視点座標

	//頂点レイアウト作成

	SAFE_RELEASE(m_pDevice);

			}

		delete[] pVList;

			for (size_t v = 0; v < fv; v++)



}

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))



struct ConstantMaterial {

	if (FAILED(hr))

				break;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	{

				indexlist.push_back(index);



	Vertex* pVList = new Vertex[vcount];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.CPUAccessFlags = 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	vector<Vertex> vertexlist;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

		&materials,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)

	}



/*

				break;

	m_pPixelShader = NULL;



	XMFLOAT4X4 view;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pSwapChain->Present(0, 0);



	float    nearZ = 0.1f;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



int SEGMENT = 36;

	tinyobj::ObjReaderConfig reader_config;

		flags,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

};

		KEY_PRESS_SURFACE_UP,



	XMFLOAT4 attenuate;         //減衰(a,b,c)

			//Select surfaces based on key press

	m_Viewport.MinDepth = 0.0f;



	if (!reader.ParseFromFile(inputfile, reader_config))

			{

				indexlist.push_back(idx.vertex_index);

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 specular;          //反射(r,g,b)

	//頂点シェーダー生成

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);



	//インデックスバッファ作成

		{

	//頂点バッファ作成

	//頂点シェーダー生成









	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.CPUAccessFlags = 0;



	{

				indexlist.push_back(index);



	if (FAILED(hr))

		}

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pPixelShader);

	LoadObj(vertexlist, indexList);

	m_pVertexBuffer = NULL;

		}

	{

		}

	std::vector<tinyobj::shape_t> shapes;

#include <iostream>

		KEY_PRESS_SURFACE_UP,

	ConstantMatrixBuffer cmb;

		KEY_PRESS_SURFACE_DEFAULT,

	//頂点シェーダー生成

	SDL_DestroyRenderer(ren);

#include "DirectXManager.h"

	CRect                rect;



		//User presses a key

	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilTexture);

};

		else if (e.type == SDL_KEYDOWN)

{

	/*

		SDL_RenderClear(ren);

	txDesc.Width = rect.Width();

		return hr;

	}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}




