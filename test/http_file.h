		&m_pImmediateContext);

	Release();

	XMStoreFloat4(&clb.eyePos, eye);



	cbDesc.MiscFlags = 0;



#endif

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			for (size_t v = 0; v < num_vertices; v++)

	m_Viewport.Width = (FLOAT)rect.Width();

	vrData.SysMemSlicePitch = 0;

	std::vector<tinyobj::material_t> materials;

				break;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}



	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				indexlist.push_back(index);

}

				break;







			}

	//First we need to start up SDL, and make sure it went ok

	for (const auto& shape : shapes)

	}





	m_IndexCount = 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(bmp);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pVertexBuffer = NULL;

				tinyobj::real_t tx =



	vrData.SysMemSlicePitch = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

};



	XMFLOAT4X4 view;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	D3D11_SAMPLER_DESC smpDesc;

		&m_pSwapChain,

{

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_LEFT:

	D3D11_BUFFER_DESC ibDesc;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//First we need to start up SDL, and make sure it went ok



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_IndexCount = icount;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	//Key press surfaces constants

		return hr;

	std::vector<tinyobj::material_t> materials;

#include <SDL.h>

struct ConstantMatrixBuffer {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	{

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		&m_pSwapChain,

	SDL_FreeSurface(bmp);

	vector<WORD> indexList;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	Release();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	}*/

	//Clean up our objects and quit

	std::string imagePath = "hello.bmp";

	cbDesc.MiscFlags = 0;

		delete[] pVList;

	delete[] pVList;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			default:



	//Create Index

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext = NULL;

struct ConstantMatrixBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	while (SDL_PollEvent(&e) != 0)





	SDL_DestroyTexture(tex);







	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			index_offset += fv;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& shapes = reader.GetShapes();

	Release();

	cbDesc.MiscFlags = 0;

		&materials,

			//Select surfaces based on key press

	tinyobj::ObjReader reader;

			{

		delete[] pIList;



	m_pDevice = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Event e;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#include "DirectXManager.h"

		return hr;

	tinyobj::attrib_t attrib;

		return hr;

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pTextureView = NULL;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		//User requests quit



				WORD index = idx.vertex_index;

struct ConstantLight {

	if (FAILED(hr))



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{



struct ConstantMatrixBuffer {

			// Loop over vertices in the face.

	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//First we need to start up SDL, and make sure it went ok



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	Release();

	float    nearZ = 0.1f;

	if (FAILED(hr))

CD3DTest::CD3DTest()

	//vector<Vertex> vertex_t;

			for (size_t v = 0; v < num_vertices; v++)



	//vector<WORD> index_t;

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vector<Vertex> vertexlist;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





				indexlist.push_back(idx.vertex_index);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	irData.SysMemSlicePitch = 0;

	m_pVertexShader = NULL;



		&attrib,

struct ConstantLightBuffer {

	if (FAILED(hr))

	m_pPixelShader = NULL;

int main(int, char**)



	cbDesc.StructureByteStride = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				indexlist.push_back(idx.vertex_index);

	std::vector<tinyobj::material_t> materials;

	}

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);



	if (FAILED(hr))

	SDL_Quit();

	m_Angle += XMConvertToRadians(1.0f);

void CD3DTest::Release()

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



{



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	SAFE_RELEASE(m_pDevice);

struct ConstantMaterial {

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_BUFFER_DESC ibDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4X4 projection;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

		&level,

	m_IndexCount = 0;

			case SDLK_LEFT:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



int SEGMENT = 36;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			index_offset += num_vertices;

		}

	}



		return hr;

		}

	m_Viewport.TopLeftY = 0;

		return hr;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	delete[] pIList;

			switch (e.key.keysym.sym)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

		return hr;

	CRect                rect;



	m_pPixelShader = NULL;

		//User presses a key

		D3D_DRIVER_TYPE_HARDWARE,

	m_Viewport.MaxDepth = 1.0f;

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{





		return hr;



		&scDesc,



	}

	auto& attrib = reader.GetAttrib();

		return hr;

	Vertex* pVList = new Vertex[vcount];

	auto& shapes = reader.GetShapes();

			default:

	SAFE_RELEASE(m_pDepthStencilTexture);

			}

	for (size_t s = 0; s < shapes.size(); s++)



	D3D_FEATURE_LEVEL level;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;



	m_pVertexBuffer = NULL;

				indexlist.push_back(index);

	m_pDepthStencilTexture = NULL;

	D3D11_SAMPLER_DESC smpDesc;

		&materials,

	m_pPixelShader = NULL;

	{

	if (m_pImmediateContext)

	txDesc.MipLevels = 1;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_DestroyWindow(win);

	irData.SysMemSlicePitch = 0;





	while (SDL_PollEvent(&e) != 0)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& attrib = reader.GetAttrib();

	}

				break;

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	{

	//Vertex* pVList = new Vertex[vcount];

	WORD* pIList = new WORD[icount];



	}*/

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pDevice = NULL;

	UINT strides = sizeof(Vertex);

	float    fov = XMConvertToRadians(20.0f);

	if (!error.empty())

	ZeroMemory(&txDesc, sizeof(txDesc));

	txDesc.CPUAccessFlags = 0;

	return;

 */

	m_Viewport.MinDepth = 0.0f;

	D3D11_SUBRESOURCE_DATA vrData;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pVertexBuffer);

	delete[] pIList;

		return hr;

		NULL,

	std::vector<tinyobj::material_t> materials;

			{



		KEY_PRESS_SURFACE_TOTAL

			}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_RenderPresent(ren);

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ConstantLightBuffer clb;



	vrData.SysMemSlicePitch = 0;

	//ビューポート設定

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

int main(int, char**)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	reader_config.mtl_search_path = "./"; // Path to material files

		pVList[i] = vertexlist[i];

			index_offset += num_vertices;

			case SDLK_DOWN:

	std::string inputfile = "test.obj";

	//ビューポート設定

		{

	};

	UINT strides = sizeof(Vertex);

	}

	//Vertex* pVList = new Vertex[vcount];

				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



struct ConstantMatrixBuffer {



	Release();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_VertexCount = vcount;

}

}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&m_pSwapChain,

			break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pDepthStencilView);



	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	/*

		&materials,

		&attrib,

		return hr;

		return hr;

	m_pTexture = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		KEY_PRESS_SURFACE_TOTAL



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ID3D11Texture2D* pBackBuffer;

	txDesc.MipLevels = 1;

	//ピクセルシェーダー生成

		return hr;

	m_pImmediateContext = NULL;

};



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	std::vector<tinyobj::shape_t> shapes;

}

	XMFLOAT4X4 projection;

	return 0;





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_IndexCount = 0;



		return hr;



	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		exit(1);

	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_RIGHT:

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pRenderTargetView);



		}

	XMFLOAT4X4 world;

	{

}

		}

	}

		else if (e.type == SDL_KEYDOWN)

	//定数バッファ作成

	SAFE_RELEASE(m_pLightBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

		{

}

HRESULT CD3DTest::Create(HWND hwnd)



	//テクスチャ読み込み

				vertex.push_back(vertex_tmp);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	enum KeyPressSurfaces

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	irData.pSysMem = &pIList[0];

		return hr;

		KEY_PRESS_SURFACE_UP,

	vrData.pSysMem = &pVList[0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		&m_pDevice,

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		&m_pSwapChain,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pLightBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	tinyobj::ObjReader reader;

	txDesc.SampleDesc.Quality = 0;

	UINT strides = sizeof(Vertex);

#endif

	tinyobj::ObjReaderConfig reader_config;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::vector<tinyobj::shape_t> shapes;

		&error,

	SAFE_RELEASE(m_pMatrixBuffer);

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	ConstantMatrixBuffer cmb;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	WORD   icount = indexList.size();

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pImmediateContext);

			//Select surfaces based on key press



				break;

	float    nearZ = 0.1f;

	{

{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pTexture);

}



		return hr;



	dsDesc.Texture2D.MipSlice = 0;

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

	while (SDL_PollEvent(&e) != 0)

	auto& materials = reader.GetMaterials();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

{

	dsDesc.Format = txDesc.Format;

	SDL_Quit();

		{



void CD3DTest::Render()

		return hr;

		if (!reader.Error().empty())

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantMatrixBuffer cmb;

	vbDesc.MiscFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		delete[] pVList;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		{



	m_pIndexBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	/*

	if (FAILED(hr))

	{

	ibDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();

		return hr;

	return 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return 1;

	//vector<Vertex> vertex_t;

struct ConstantLight {

		&shapes,



	cbDesc.CPUAccessFlags = 0;

	txDesc.Height = rect.Height();

		//User presses a key

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ピクセルシェーダー生成

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





struct ConstantMatrixBuffer {

		{

			case SDLK_RIGHT:

{

				WORD index = idx.vertex_index;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	for (int j = 0; j < icount; j++)

			case SDLK_UP:

	::GetClientRect(hwnd, &rect);

	m_pDevice = NULL;

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

int main(int, char**)

	return 0;



		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyRenderer(ren);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	CRect                rect;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;

	vbDesc.CPUAccessFlags = 0;

	ConstantLightBuffer clb;

			case SDLK_DOWN:

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_DestroyTexture(tex);

	D3D_FEATURE_LEVEL level;

	}

	return;

	{

				// access to vertex



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	// Loop over shapes

		else if (e.type == SDL_KEYDOWN)

	m_VertexCount = vcount;

	m_pImmediateContext = NULL;

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT offsets = 0;

	CRect                rect;

		return hr;



			//Select surfaces based on key press



}

struct ConstantMatrixBuffer {

				break;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pTextureView);

	auto& shapes = reader.GetShapes();

			case SDLK_DOWN:

	scDesc.SampleDesc.Count = 1;

	cbDesc.StructureByteStride = 0;

			}

{





	m_Angle += XMConvertToRadians(1.0f);

		cout << "SDL_INIT_ERROR" << endl;



			case SDLK_RIGHT:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			default:

		//User requests quit



	m_pVertexBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		R"(cube.obj)");

CD3DTest::CD3DTest()



	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	{

}

	scDesc.Windowed = TRUE;

		&error,

	{

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.ambient, lightAmbient);

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pDevice);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

	delete[] pVList;

	XMFLOAT4 specular;          //反射(r,g,b)

	pBackBuffer->Release();



			{

	m_pLightBuffer = NULL;

	ID3D11Texture2D* pBackBuffer;

		pVList[i] = vertexlist[i];

	dsDesc.Format = txDesc.Format;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



#ifdef _DEBUG



	return hr;

int main(int, char**)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pPixelShader);

	SDL_FreeSurface(suf);

	return 0;

	ibDesc.MiscFlags = 0;

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_Viewport.Width = (FLOAT)rect.Width();

};



	{





	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	SAFE_RELEASE(m_pTextureView);

	return 0;

	//ピクセルシェーダー生成

				break;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_Delay(1000);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		pLevels,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	ibDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))





		NULL,



	}

		}

	SDL_DestroyWindow(win);

	WORD   icount = indexList.size();

		NULL,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_UP,

int main(int, char**)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.CPUAccessFlags = 0;

}



	//Clean up our objects and quit



		delete[] pVList;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				vertex.push_back(vertex_tmp);

	};

	{

				break;

	SAFE_RELEASE(m_pLightBuffer);

	m_VertexCount = vcount;

	D3D11_BUFFER_DESC vbDesc;

	//Vertex* pVList = new Vertex[vcount];

	m_pMatrixBuffer = NULL;

	CRect                rect;

	txDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	WORD* pIList = new WORD[icount];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pDepthStencilView = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



				// access to vertex

	std::string error;

	m_VertexCount = 0;

			{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	Release();

		return hr;

#include <SDL.h>

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			int num_vertices = shape.mesh.num_face_vertices[f];

	for (int i = 0; i < vcount; i++)

	m_pInputLayout = NULL;

	{

	//インデックスバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			exit(1);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_BUFFER_DESC ibDesc;

		delete[] pVList;

	{

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Width = rect.Width();



{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	//定数バッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.MiscFlags = 0;

			}

	while (SDL_PollEvent(&e) != 0)

		SDL_Delay(1000);

		delete[] pIList;

		if (!ret)

	m_VertexCount = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

	{

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	txDesc.ArraySize = 1;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	/*

			{

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pDevice = NULL;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	UINT strides = sizeof(Vertex);

	XMFLOAT4X4 view;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

	for (const auto& shape : shapes)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4(&clb.eyePos, eye);

	//ビューポート設定

#define TINYOBJLOADER_IMPLEMENTATION

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_IndexCount = icount;

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemPitch = 0;

		SDL_RenderPresent(ren);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				indexlist.push_back(index);

	std::string inputfile = "test.obj";

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;





	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	float    nearZ = 0.1f;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

	SDL_DestroyTexture(tex);





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.SysMemPitch = 0;

	SDL_Event e;

	m_IndexCount = icount;

	m_pDevice = NULL;

};

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		flags,

	//インデックスバッファ作成





			{

	irData.SysMemPitch = 0;

	m_VertexCount = vcount;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	Vertex* pVList = new Vertex[vcount];



		SDL_RenderClear(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

		else if (e.type == SDL_KEYDOWN)

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	tinyobj::attrib_t attrib;

{

	SAFE_RELEASE(m_pSampler);

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

			break;

	// Loop over shapes

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pRenderTargetView = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	m_pSwapChain = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vector<WORD> indexList;

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pVertexShader);

	txDesc.SampleDesc.Count = 1;

};

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			for (size_t v = 0; v < fv; v++)

	SDL_DestroyTexture(tex);

		return 1;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//ビューポート設定

		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTextureView);

	tinyobj::ObjReaderConfig reader_config;

	}

				tinyobj::real_t ty =

	ZeroMemory(&txDesc, sizeof(txDesc));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyWindow(win);

	vbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	Release();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	float    nearZ = 0.1f;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			for (size_t v = 0; v < fv; v++)

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void CD3DTest::Release()

	m_pImmediateContext = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	tinyobj::attrib_t attrib;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyWindow(win);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_FreeSurface(bmp);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.TopLeftX = 0;

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	Release();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			case SDLK_LEFT:

	for (int i = 0; i < 3; i++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	{

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pInputLayout);

	txDesc.Height = rect.Height();

	//First we need to start up SDL, and make sure it went ok

	m_pLightBuffer = NULL;



	m_pInputLayout = NULL;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

			// Loop over vertices in the face.



CD3DTest::~CD3DTest()

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}

		KEY_PRESS_SURFACE_UP,

	pBackBuffer->Release();



		&level,

	while (SDL_PollEvent(&e) != 0)



	m_pTexture = NULL;



	std::string inputfile = "test.obj";

		&materials,

	XMFLOAT4X4 world;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	SDL_DestroyRenderer(ren);



	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	txDesc.Height = rect.Height();

		// Loop over faces(polygon)

	WORD* pIList = new WORD[icount];



	}

		return hr;

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#ifdef _DEBUG

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		R"(cube.obj)");







	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pVertexShader = NULL;

	m_pImmediateContext = NULL;

			{

	D3D11_BUFFER_DESC ibDesc;



	bool ret = tinyobj::LoadObj(

	{



	if (FAILED(hr))

	{

			index_offset += num_vertices;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (m_pImmediateContext)



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}*/

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	auto& materials = reader.GetMaterials();

		1,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_RenderClear(ren);

			// Loop over vertices in the face.

	D3D11_TEXTURE2D_DESC txDesc;

				break;

				WORD index = idx.vertex_index;

}

	enum KeyPressSurfaces

	ibDesc.CPUAccessFlags = 0;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	auto& shapes = reader.GetShapes();

				// access to vertex

				break;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			// Loop over vertices in the face.

		pVList[i] = vertexlist[i];



	// Loop over shapes





	m_pSwapChain = NULL;

	return 0;

#include <SDL.h>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				indexlist.push_back(index);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pInputLayout = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pSwapChain = NULL;



	dsDesc.Texture2D.MipSlice = 0;

	D3D11_SAMPLER_DESC smpDesc;



	{

	//頂点レイアウト作成

	m_pDepthStencilView = NULL;

	//定数バッファ作成

#include <iostream>

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<Vertex> vertex_t;

	scDesc.OutputWindow = hwnd;

	cbDesc.StructureByteStride = 0;

	/*

	ibDesc.MiscFlags = 0;



	UINT strides = sizeof(Vertex);



	SDL_Event e;

		return hr;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string error;

		}

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	m_Viewport.MaxDepth = 1.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		if (e.type == SDL_QUIT)

	irData.pSysMem = &pIList[0];





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

				break;

	m_pSampler = NULL;

		}

	float    nearZ = 0.1f;

	auto& attrib = reader.GetAttrib();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#endif

	//インデックスバッファ作成

	if (FAILED(hr))

	for (const auto& shape : shapes)

	m_Angle += XMConvertToRadians(1.0f);

		&attrib,



	{

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

		return hr;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	return 0;



	//定数バッファ作成



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	for (int j = 0; j < icount; j++)

		return hr;

			switch (e.key.keysym.sym)

	for (int i = 0; i < 3; i++)

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))



	//Key press surfaces constants

	D3D11_SUBRESOURCE_DATA vrData;

	{

	if (FAILED(hr))

		return hr;



	float    farZ = 100.0f;

	HRESULT              hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			case SDLK_RIGHT:

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.CPUAccessFlags = 0;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			case SDLK_LEFT:

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC ibDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				vertex.push_back(vertex_tmp);

	WORD   icount = indexList.size();



#include "DirectXManager.h"

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {

{

		else if (e.type == SDL_KEYDOWN)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

}

		m_pImmediateContext->ClearState();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//First we need to start up SDL, and make sure it went ok

	return hr;

};

	//頂点バッファ作成

	m_pInputLayout = NULL;

			default:

	m_pMatrixBuffer = NULL;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.ArraySize = 1;

	float    nearZ = 0.1f;

		else if (e.type == SDL_KEYDOWN)

	UINT offsets = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			switch (e.key.keysym.sym)

	SDL_DestroyTexture(tex);

	//頂点シェーダー生成

		pIList[j] = indexList[j];

		NULL,



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D_DRIVER_TYPE_HARDWARE,



				// access to vertex

	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#endif



	XMFLOAT4 attenuate;         //減衰(a,b,c)





	std::vector<tinyobj::material_t> materials;

				break;

	if (FAILED(hr))



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

		}

			break;



	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pMatrixBuffer);

		&error,

	m_Angle += XMConvertToRadians(1.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}





	vrData.SysMemPitch = 0;

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//Vertex* pVList = new Vertex[vcount];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pLevels,

	dsDesc.Format = txDesc.Format;

		}

				WORD index = idx.vertex_index;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	tinyobj::ObjReader reader;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pDepthStencilView);

void CD3DTest::Render()

	SDL_DestroyWindow(win);

	ibDesc.MiscFlags = 0;

	SDL_FreeSurface(suf);

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	D3D11_BUFFER_DESC cbDesc;

{

			{

	return hr;

	XMFLOAT4X4 view;

		NULL,



		return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Quit();

		1,

	{



	auto& attrib = reader.GetAttrib();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#endif

#include "DirectXManager.h"



	auto& shapes = reader.GetShapes();

		size_t index_offset = 0;  // インデントのオフセット



			exit(1);



	m_pSwapChain->Present(0, 0);

		}

		{

	irData.SysMemSlicePitch = 0;

				break;

				break;

	while (SDL_PollEvent(&e) != 0)

struct ConstantMatrixBuffer {

	ConstantLight    pntLight; //点光源

	ibDesc.MiscFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pLightBuffer = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	int     vcount = vertexlist.size();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//vector<Vertex> vertex_t;

};



	cbDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	LoadObj(vertexlist, indexList);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (int i = 0; i < 3; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_IndexCount = icount;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		SDL_RenderClear(ren);

		return hr;

	if (FAILED(hr))

			}



		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_TOTAL



		return hr;

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pSwapChain);

	txDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	UINT offsets = 0;

	SAFE_RELEASE(m_pVertexShader);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_RenderPresent(ren);



	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;







struct ConstantLightBuffer {

		KEY_PRESS_SURFACE_LEFT,



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	LoadObj(vertexlist, indexList);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		delete[] pIList;

	// Loop over shapes

	scDesc.BufferDesc.Width = rect.Width();



	for (int i = 0; i < vcount; i++)



	DXGI_SWAP_CHAIN_DESC scDesc;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				break;

struct ConstantLight {

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				break;



	return;

	//Vertex* pVList = new Vertex[vcount];

		{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	UINT offsets = 0;

		&error,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string inputfile = "test.obj";

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		SDL_RenderClear(ren);



	//First we need to start up SDL, and make sure it went ok



	Release();

	//テクスチャ読み込み

	m_Viewport.MinDepth = 0.0f;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		1,

	vrData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftX = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				// access to vertex

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

		//User presses a key

	}

	XMFLOAT4 ambient;           //環境(r,g,b)

	//vector<Vertex> vertex_t;



	txDesc.Height = rect.Height();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//深度ステンシルバッファ作成

		SDL_RenderClear(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

	{

#ifdef _DEBUG

	vector<WORD> indexList;

	{

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_DEFAULT,

	m_IndexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<Vertex> vertexlist;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

	m_Viewport.MinDepth = 0.0f;

	txDesc.ArraySize = 1;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&error,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferCount = 1;



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		size_t index_offset = 0;

	enum KeyPressSurfaces

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.Height = rect.Height();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#endif

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;

			case SDLK_LEFT:

	m_pImmediateContext = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	float    nearZ = 0.1f;

	};

};

	//vector<Vertex> vertex_t;

	UINT flags = 0;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			//Select surfaces based on key press

	ConstantLightBuffer clb;

	enum KeyPressSurfaces

	txDesc.MiscFlags = 0;

	m_pDepthStencilTexture = NULL;

		return hr;

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

	}

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.MiscFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4X4 view;

	txDesc.Width = rect.Width();





}


	m_pPixelShader = NULL;

		return hr;

	while (SDL_PollEvent(&e) != 0)

	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pInputLayout);

			index_offset += num_vertices;

			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = vcount;

	txDesc.SampleDesc.Count = 1;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	irData.pSysMem = &pIList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vrData.SysMemPitch = 0;

			// Loop over vertices in the face.

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_VertexCount = 0;

	}

	m_pTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		&error,

				indexlist.push_back(idx.vertex_index);



		return hr;

	irData.pSysMem = &pIList[0];

		&shapes,

				break;

		SDL_Delay(1000);

	{



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{



			{

	vector<WORD> indexList;

	vrData.SysMemSlicePitch = 0;

	irData.pSysMem = &pIList[0];



			{



}
	m_pSampler = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

using std::cout; using std::endl;

{



	if (FAILED(hr))

		SDL_Delay(1000);

{



	D3D11_BUFFER_DESC cbDesc;

				vertex.push_back(vertex_tmp);

		SDL_RenderPresent(ren);

		{

	cbDesc.StructureByteStride = 0;

/*

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			break;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SDL_FreeSurface(bmp);



	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_DestroyRenderer(ren);



	SAFE_RELEASE(m_pLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return 1;

	scDesc.BufferDesc.Height = rect.Height();



	vrData.SysMemSlicePitch = 0;

};

		m_pImmediateContext->ClearState();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

};

		return hr;

	m_Viewport.TopLeftY = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

void CD3DTest::Render()



	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	for (int i = 0; i < vcount; i++)

				// access to vertex

		{

	::GetClientRect(hwnd, &rect);

		{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	delete[] pVList;



	ConstantLight    pntLight; //点光源



		}

	{

	txDesc.MiscFlags = 0;

#include "DirectXManager.h"

	scDesc.BufferDesc.Height = rect.Height();



	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pTextureView = NULL;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

			case SDLK_LEFT:

{

	for (const auto& shape : shapes)

}
	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_TEXTURE2D_DESC txDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

	HRESULT              hr;

struct ConstantLight {





	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pDepthStencilView);

}

		KEY_PRESS_SURFACE_DEFAULT,

	{

		SDL_RenderPresent(ren);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

}

		KEY_PRESS_SURFACE_TOTAL

		{

	cbDesc.StructureByteStride = 0;

};

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_VertexCount = vcount;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pVertexShader = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderClear(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	{

	//インデックスバッファ作成

int main(int, char**)

	m_pMatrixBuffer = NULL;



		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vbDesc.StructureByteStride = 0;

	//Create Index





		flags,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pRenderTargetView);

			{

	SDL_DestroyWindow(win);

	vector<WORD> indexList;

	irData.SysMemSlicePitch = 0;



{

		return hr;

	UINT strides = sizeof(Vertex);

	XMFLOAT4X4 world;



		{

		size_t index_offset = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferDesc.Height = rect.Height();

/*

	//頂点シェーダー生成

		&scDesc,

	}

	D3D11_BUFFER_DESC ibDesc;

	HRESULT              hr;

	return 0;





				break;

	{

	//深度ステンシルバッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



#include <iostream>



	{

		delete[] pIList;

	for (int i = 0; i < vcount; i++)

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

				break;

	float    nearZ = 0.1f;

	m_VertexCount = vcount;

	txDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

	ConstantMatrixBuffer cmb;

			for (size_t v = 0; v < num_vertices; v++)

	//Key press surfaces constants

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;







				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4         eyePos;   //視点座標

			case SDLK_DOWN:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	{

	SAFE_RELEASE(m_pSwapChain);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Texture2D.MipSlice = 0;

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		if (e.type == SDL_QUIT)

	//Key press surfaces constants



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.Width = rect.Width();



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (m_pImmediateContext)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	float    nearZ = 0.1f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.SampleDesc.Quality = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	scDesc.BufferDesc.Height = rect.Height();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			int num_vertices = shape.mesh.num_face_vertices[f];



	// Loop over shapes

	txDesc.Height = rect.Height();



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

};

		delete[] pIList;

	XMFLOAT4 ambient;           //環境(r,g,b)



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

	//vector<WORD> index_t;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Quality = 0;

	{

		return hr;

struct ConstantMatrixBuffer {

	ibDesc.MiscFlags = 0;

		}

		return hr;





		cout << "SDL_INIT_ERROR" << endl;

struct ConstantLight {

	txDesc.SampleDesc.Count = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}*/

	scDesc.Windowed = TRUE;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		flags,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>

	m_pSampler = NULL;



	m_Viewport.TopLeftY = 0;

			case SDLK_RIGHT:

	vector<WORD> indexList;

			}

	{



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.CPUAccessFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_SAMPLER_DESC smpDesc;

			//Select surfaces based on key press

	SDL_DestroyRenderer(ren);

		&m_pImmediateContext);

	XMFLOAT4 ambient;           //環境(r,g,b)

	UINT strides = sizeof(Vertex);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		if (!reader.Error().empty())

			for (size_t v = 0; v < fv; v++)

	float    fov = XMConvertToRadians(20.0f);

	SDL_Event e;

	XMFLOAT4         eyePos;   //視点座標

		SDL_RenderClear(ren);





#ifdef _DEBUG

		m_pImmediateContext->ClearState();

	m_pPixelShader = NULL;

	m_pSwapChain->Present(0, 0);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

};

	dsDesc.Texture2D.MipSlice = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vrData.pSysMem = &pVList[0];

	D3D_FEATURE_LEVEL level;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ConstantLightBuffer clb;



};

	}

		return hr;

	/*

struct ConstantMatrixBuffer {





	XMFLOAT4 specular;          //反射(r,g,b)

		}

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.ArraySize = 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

}

	//深度ステンシルバッファ作成

		NULL,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantLight    pntLight; //点光源

	XMFLOAT4         eyePos;   //視点座標

}

	ibDesc.CPUAccessFlags = 0;

		SDL_RenderPresent(ren);

CD3DTest::CD3DTest()

};

	m_Angle += XMConvertToRadians(1.0f);

#include <SDL.h>

		{

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	{

	{

	return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				break;

{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		&m_pDevice,

	}

	tinyobj::ObjReaderConfig reader_config;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

#include <iostream>

				tinyobj::real_t ty =



	}

		m_pImmediateContext->ClearState();

	tinyobj::ObjReaderConfig reader_config;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pMatrixBuffer = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.OutputWindow = hwnd;

				break;

				WORD index = idx.vertex_index;

	m_pSwapChain = NULL;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 projection;

				// access to vertex



	m_VertexCount = vcount;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	while (SDL_PollEvent(&e) != 0)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderClear(ren);

		}

	vbDesc.MiscFlags = 0;

		&materials,

				indexlist.push_back(index);

		&m_pDevice,

	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

		&level,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

}
	vector<WORD> indexList;

		delete[] pVList;

			case SDLK_LEFT:



	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pVertexShader);

	SDL_Event e;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

 * Lesson 1: Hello World!

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	//頂点バッファ作成



				break;

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderClear(ren);



	//頂点レイアウト作成

	vbDesc.MiscFlags = 0;

	//Create Index

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//ビューポート設定

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	return hr;

struct ConstantLight {

	for (size_t s = 0; s < shapes.size(); s++)

{



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

 * Lesson 1: Hello World!

		return 1;

	//定数バッファ作成

		return 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	vbDesc.StructureByteStride = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return 1;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//テクスチャ読み込み





	SAFE_RELEASE(m_pSampler);



		}



				WORD index = idx.vertex_index;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	int     vcount = vertexlist.size();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		flags,



			case SDLK_UP:



	txDesc.SampleDesc.Count = 1;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			case SDLK_RIGHT:

	return;

	std::string error;

}



};



		{



	std::string imagePath = "hello.bmp";

		&m_pImmediateContext);

	vrData.SysMemPitch = 0;

	}

};

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))



	if (FAILED(hr))



		return hr;

	SAFE_RELEASE(m_pIndexBuffer);



		exit(1);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	// Loop over shapes





	dsDesc.Texture2D.MipSlice = 0;

				break;

	cbDesc.StructureByteStride = 0;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

using std::cout; using std::endl;

	if (FAILED(hr))





	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				WORD index = idx.vertex_index;

struct ConstantLight {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key



	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pSwapChain->Present(0, 0);

		&m_pSwapChain,

}



		//User requests quit

	XMFLOAT4         eyePos;   //視点座標

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		D3D_DRIVER_TYPE_HARDWARE,



	{

		if (!reader.Error().empty())





			for (size_t v = 0; v < num_vertices; v++)

	m_pSampler = NULL;



	{

	XMStoreFloat4(&clb.eyePos, eye);

	UINT flags = 0;

	SDL_DestroyRenderer(ren);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vbDesc.CPUAccessFlags = 0;

	vrData.pSysMem = &pVList[0];

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pPixelShader);

	//深度ステンシルバッファ作成



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	UINT flags = 0;

			case SDLK_DOWN:

	ibDesc.CPUAccessFlags = 0;

int main(int, char**)

#include <iostream>

	//ピクセルシェーダー生成

	if (FAILED(hr))



#include <SDL.h>

};



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			}

	//Key press surfaces constants



void CD3DTest::Release()

}


				tinyobj::real_t tx =

	}

	//定数バッファ作成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		m_pImmediateContext->ClearState();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (size_t s = 0; s < shapes.size(); s++)

	//First we need to start up SDL, and make sure it went ok

	txDesc.CPUAccessFlags = 0;

	m_IndexCount = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	SDL_DestroyWindow(win);

		return hr;

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_SAMPLER_DESC smpDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_DestroyTexture(tex);

		pIList[j] = indexList[j];

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyWindow(win);



	txDesc.Height = rect.Height();



	SDL_FreeSurface(suf);

		if (!reader.Error().empty())





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDevice = NULL;

	Vertex* pVList = new Vertex[vcount];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext = NULL;

		SDL_RenderClear(ren);

	float    fov = XMConvertToRadians(20.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDevice);

		&error,

	enum KeyPressSurfaces

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

int main(int, char**)

	for (int i = 0; i < 3; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

};

 * Lesson 1: Hello World!

		{

	int     vcount = vertexlist.size();

	}

		KEY_PRESS_SURFACE_LEFT,

	m_IndexCount = 0;

struct ConstantMaterial {

		&level,





	D3D11_SUBRESOURCE_DATA irData;

			case SDLK_DOWN:

	Vertex* pVList = new Vertex[vcount];

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderPresent(ren);

		delete[] pVList;

		NULL,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



{

	m_pVertexBuffer = NULL;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_IndexCount = icount;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		return hr;

	scDesc.BufferCount = 1;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_RenderPresent(ren);

	if (FAILED(hr))

struct ConstantLight {

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	CRect                rect;

	enum KeyPressSurfaces



	m_pLightBuffer = NULL;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

				break;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantLight    pntLight; //点光源





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	D3D11_BUFFER_DESC vbDesc;





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

	m_pSwapChain->Present(0, 0);

			}

	{

		return 1;

	XMFLOAT4X4 projection;





		}

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pImmediateContext);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		&attrib,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	ConstantLightBuffer clb;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Create Index

	XMStoreFloat4(&clb.eyePos, eye);

			// Loop over vertices in the face.

		return hr;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];







	SDL_DestroyRenderer(ren);



	D3D11_SAMPLER_DESC smpDesc;

		}

	if (FAILED(hr))





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	return 0;

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pMatrixBuffer = NULL;

		return hr;

	SDL_Quit();

			break;



	HRESULT              hr;

}



	m_Viewport.Width = (FLOAT)rect.Width();



	m_IndexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

}

	m_pDepthStencilView = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





			}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}





	D3D11_BUFFER_DESC cbDesc;

	UINT flags = 0;

		&attrib,

	scDesc.Windowed = TRUE;

struct ConstantMatrixBuffer {

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		{

	ConstantMaterial material; //物体の質感

	delete[] pIList;

#define TINYOBJLOADER_IMPLEMENTATION

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	pBackBuffer->Release();

	//テクスチャ読み込み

	D3D11_BUFFER_DESC cbDesc;

		}



	};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



};



	{

	SDL_DestroyWindow(win);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	HRESULT              hr;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Clean up our objects and quit

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	tinyobj::attrib_t attrib;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//頂点バッファ作成





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





CD3DTest::CD3DTest()

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4         ambient;  //環境光(r,g,b)

};

		m_pImmediateContext->ClearState();



		KEY_PRESS_SURFACE_UP,



	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4 ambient;           //環境(r,g,b)

};

		KEY_PRESS_SURFACE_TOTAL



		m_pImmediateContext->ClearState();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				indexlist.push_back(index);



#include <iostream>

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				// access to vertex

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		KEY_PRESS_SURFACE_DOWN,

	scDesc.BufferCount = 1;

		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pIList;

	irData.pSysMem = &pIList[0];

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pDepthStencilTexture);

}

	if (!reader.Warning().empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantMaterial material; //物体の質感

		pVList[i] = vertexlist[i];

void CD3DTest::Render()

				indexlist.push_back(idx.vertex_index);

	ConstantLight    pntLight; //点光源

		{

	XMFLOAT4 pos;               //座標(x,y,z)



		if (!ret)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	auto& attrib = reader.GetAttrib();


