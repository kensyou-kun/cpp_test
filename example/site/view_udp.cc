	if (FAILED(hr))

			case SDLK_RIGHT:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pInputLayout = NULL;



		return hr;

#ifdef _DEBUG

		}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	dsDesc.Format = txDesc.Format;

	m_Viewport.Height = (FLOAT)rect.Height();

struct ConstantMaterial {

				vertex.push_back(vertex_tmp);



	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferDesc.Width = rect.Width();

		SDL_RenderPresent(ren);

			//Select surfaces based on key press

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D_FEATURE_LEVEL level;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				vertex.push_back(vertex_tmp);



	}

#include "DirectXManager.h"



		&level,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

		return hr;

	m_pInputLayout = NULL;

struct ConstantLight {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&level,

CD3DTest::~CD3DTest()

			case SDLK_RIGHT:

	//Key press surfaces constants

	{



	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4         eyePos;   //視点座標

	vector<Vertex> vertexlist;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

};



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SAFE_RELEASE(m_pInputLayout);







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

 * Lesson 1: Hello World!





{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}





		//User presses a key

	XMFLOAT4X4 view;

		return hr;

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

		if (e.type == SDL_QUIT)

	txDesc.ArraySize = 1;

	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//vector<WORD> index_t;

};

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4X4 projection;

	{

	for (int j = 0; j < icount; j++)



			{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 specular;          //反射(r,g,b)

			//Select surfaces based on key press

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (size_t s = 0; s < shapes.size(); s++)



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pRenderTargetView = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

		return hr;

	{

struct ConstantMaterial {

};



	pBackBuffer->Release();

	SDL_FreeSurface(suf);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		//User presses a key

}

	//Key press surfaces constants

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//インデックスバッファ作成

			// Loop over vertices in the face.



#include <iostream>

		return hr;

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//頂点バッファ作成

	//Clean up our objects and quit

 * Lesson 1: Hello World!

	dsDesc.Format = txDesc.Format;

	SDL_Quit();

	SAFE_RELEASE(m_pPixelShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.TopLeftX = 0;

	m_Viewport.Height = (FLOAT)rect.Height();



		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	//Key press surfaces constants



	//Vertex* pVList = new Vertex[vcount];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))



		SDL_RenderClear(ren);





	m_pDevice = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



	for (int j = 0; j < icount; j++)

	m_Viewport.MaxDepth = 1.0f;



			case SDLK_DOWN:

	vrData.SysMemSlicePitch = 0;

				break;

		pIList[j] = indexList[j];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pTextureView = NULL;



			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_TOTAL

	m_pTexture = NULL;

}

	dsDesc.Texture2D.MipSlice = 0;

		D3D11_SDK_VERSION,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderPresent(ren);





	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

	D3D11_BUFFER_DESC vbDesc;

	m_VertexCount = vcount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ID3D11Texture2D* pBackBuffer;

		&attrib,

#include "DirectXManager.h"



#include <iostream>

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		m_pImmediateContext->ClearState();

				break;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

		//User requests quit

void CD3DTest::Render()



	ConstantLightBuffer clb;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			{

	{



	}



			default:

		exit(1);

	m_pIndexBuffer = NULL;

	txDesc.CPUAccessFlags = 0;

			case SDLK_RIGHT:



	{

	if (FAILED(hr))

		return 1;



		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Angle += XMConvertToRadians(1.0f);

	m_pMatrixBuffer = NULL;

		m_pImmediateContext->ClearState();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vrData.SysMemSlicePitch = 0;

	m_pVertexBuffer = NULL;



			// Loop over vertices in the face.

		return hr;



#include <SDL.h>



	int     vcount = vertexlist.size();

		return hr;



	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

CD3DTest::CD3DTest()

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//頂点レイアウト作成

	auto& materials = reader.GetMaterials();

	irData.SysMemPitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{

	HRESULT              hr;



		&level,

				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))

		&level,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	scDesc.OutputWindow = hwnd;

		pLevels,



int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,

struct ConstantMatrixBuffer {

				// access to vertex

	/*



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_UP,

	pBackBuffer->Release();

	SAFE_RELEASE(m_pDepthStencilView);

	std::string inputfile = "test.obj";

	//ピクセルシェーダー生成





			exit(1);

void CD3DTest::Render()

	vector<WORD> indexList;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	std::string error;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	float    nearZ = 0.1f;

				vertex.push_back(vertex_tmp);

			case SDLK_RIGHT:

}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	txDesc.Height = rect.Height();

	m_pTextureView = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

	{

	}

	cbDesc.CPUAccessFlags = 0;

	txDesc.MiscFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	}





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	reader_config.mtl_search_path = "./"; // Path to material files

			{



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pRenderTargetView);

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);



	vbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

	vrData.SysMemPitch = 0;

	m_pLightBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	dsDesc.Format = txDesc.Format;

		1,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.StructureByteStride = 0;

	m_pTexture = NULL;

	SDL_DestroyWindow(win);

	std::string error;

{

			{

};

{

	{



		if (!reader.Error().empty())

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.Windowed = TRUE;

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)



	for (int i = 0; i < 3; i++)

	{



				vertex.push_back(vertex_tmp);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}
	cbDesc.MiscFlags = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



int main(int, char**)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pSampler = NULL;

	if (FAILED(hr))

	m_pPixelShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	dsDesc.Texture2D.MipSlice = 0;



	txDesc.SampleDesc.Quality = 0;

		return hr;

	if (FAILED(hr))

#include <iostream>

	{

struct ConstantMatrixBuffer {

	irData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	auto& shapes = reader.GetShapes();

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み

	::GetClientRect(hwnd, &rect);





	if (FAILED(hr))

	Release();

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Quit();

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSampler);

		pLevels,

		return hr;



	cbDesc.MiscFlags = 0;

			index_offset += num_vertices;





		return hr;

	m_pMatrixBuffer = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		size_t index_offset = 0;  // インデントのオフセット

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

struct ConstantLightBuffer {



	::ZeroMemory(&scDesc, sizeof(scDesc));



	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pMatrixBuffer);



	m_pInputLayout = NULL;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pDevice,

		KEY_PRESS_SURFACE_DEFAULT,

	tinyobj::ObjReaderConfig reader_config;





};

	while (SDL_PollEvent(&e) != 0)

	m_Viewport.MinDepth = 0.0f;

	txDesc.MipLevels = 1;



	//頂点シェーダー生成

				tinyobj::real_t ty =

		}

	float    nearZ = 0.1f;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.MiscFlags = 0;

	int     vcount = vertexlist.size();



	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

				break;

	return;

	//Create Index

				break;

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ConstantMaterial material; //物体の質感

	for (const auto& shape : shapes)

	m_Viewport.Width = (FLOAT)rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyWindow(win);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));



			break;



	cbDesc.CPUAccessFlags = 0;

		return hr;

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}

	{

	enum KeyPressSurfaces



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				vertex.push_back(vertex_tmp);

				break;

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;



		&m_pSwapChain,

	UINT flags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

};

	SDL_DestroyTexture(tex);

				WORD index = idx.vertex_index;

	//頂点レイアウト作成

	return hr;

	txDesc.SampleDesc.Quality = 0;

			case SDLK_LEFT:

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.OutputWindow = hwnd;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		1,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

	if (!reader.Warning().empty())

	m_Viewport.Width = (FLOAT)rect.Width();

	std::string inputfile = "test.obj";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		pIList[j] = indexList[j];



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return 0;

		return hr;

	vrData.SysMemPitch = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

{

{



	//定数バッファ作成



	//ビューポート設定

/*

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.pSysMem = &pVList[0];



			switch (e.key.keysym.sym)

	//ビューポート設定

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		pVList[i] = vertexlist[i];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

#include "DirectXManager.h"



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_BUFFER_DESC ibDesc;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

	m_pIndexBuffer = NULL;

	vector<WORD> indexList;

	txDesc.CPUAccessFlags = 0;



			case SDLK_RIGHT:

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	/*

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	// Loop over shapes

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pPixelShader);

			{

	}



	m_pTexture = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	if (FAILED(hr))



	for (int i = 0; i < 3; i++)





{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

				// access to vertex

				vertex.push_back(vertex_tmp);

int main(int, char**)

				WORD index = idx.vertex_index;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



#ifdef _DEBUG

	txDesc.SampleDesc.Quality = 0;

		size_t index_offset = 0;

	//テクスチャ読み込み

	}

using std::cout; using std::endl;





	ibDesc.CPUAccessFlags = 0;

	std::string imagePath = "hello.bmp";

	//頂点レイアウト作成



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



{



		KEY_PRESS_SURFACE_RIGHT,



	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include "DirectXManager.h"

	D3D11_BUFFER_DESC cbDesc;

	tinyobj::ObjReaderConfig reader_config;



	txDesc.Height = rect.Height();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_IndexCount = icount;

	txDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

};





	//深度ステンシルバッファ作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		size_t index_offset = 0;

	SAFE_RELEASE(m_pPixelShader);

		//User presses a key

		{

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferDesc.Width = rect.Width();

				vertex.push_back(vertex_tmp);

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}



	XMFLOAT4X4 projection;



			{

	ibDesc.MiscFlags = 0;

	irData.SysMemSlicePitch = 0;

	SDL_FreeSurface(bmp);

	delete[] pVList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

		flags,

		if (!reader.Error().empty())

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#endif

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pVertexShader = NULL;

		SDL_RenderClear(ren);

	ibDesc.StructureByteStride = 0;

		//User presses a key

				// access to vertex



	m_pDepthStencilTexture = NULL;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_VertexCount = vcount;











		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//インデックスバッファ作成

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Height = rect.Height();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDevice);

	WORD* pIList = new WORD[icount];



	XMFLOAT4X4 projection;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#ifdef _DEBUG

	txDesc.Height = rect.Height();

		&level,



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

};

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

		SDL_Delay(1000);

 * Lesson 1: Hello World!

		{



}

	for (int i = 0; i < 3; i++)



		return hr;

	vbDesc.MiscFlags = 0;

		&m_pDevice,

	vbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				// access to vertex

	m_pSampler = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	UINT flags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//ピクセルシェーダー生成

		pIList[j] = indexList[j];

	SDL_Event e;

		SDL_RenderClear(ren);

	SDL_FreeSurface(bmp);

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

struct ConstantMaterial {

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyRenderer(ren);

				tinyobj::real_t ty =

		&m_pDevice,



	m_pDevice = NULL;

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vrData.SysMemPitch = 0;

	}







	scDesc.Windowed = TRUE;

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	};

		SDL_RenderCopy(ren, tex, NULL, NULL);



	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



#define TINYOBJLOADER_IMPLEMENTATION

	m_pTexture = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//Create Index

	XMFLOAT4         eyePos;   //視点座標





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderClear(ren);

	}

	SDL_DestroyRenderer(ren);

			case SDLK_DOWN:

	}

	scDesc.BufferDesc.Height = rect.Height();

	UINT flags = 0;

	tinyobj::attrib_t attrib;

	if (FAILED(hr))



};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//テクスチャ読み込み

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderPresent(ren);



CD3DTest::~CD3DTest()

{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

}

	SDL_FreeSurface(bmp);

	scDesc.BufferDesc.Height = rect.Height();

	vector<Vertex> vertexlist;



		return hr;

	SAFE_RELEASE(m_pTextureView);

	m_pDepthStencilView = NULL;

}



	vector<WORD> indexList;







#define TINYOBJLOADER_IMPLEMENTATION



	WORD   icount = indexList.size();

				tinyobj::real_t tx =

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	SAFE_RELEASE(m_pRenderTargetView);

	std::string inputfile = "test.obj";

	WORD* pIList = new WORD[icount];

		KEY_PRESS_SURFACE_DOWN,

	tinyobj::ObjReader reader;

	irData.SysMemPitch = 0;

	int     vcount = vertexlist.size();



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



};



	XMFLOAT4         eyePos;   //視点座標

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		&level,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.CPUAccessFlags = 0;





	::GetClientRect(hwnd, &rect);





	m_pDevice = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





using std::cout; using std::endl;

	D3D11_TEXTURE2D_DESC txDesc;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	if (!reader.Warning().empty())



				break;

};

	SAFE_RELEASE(m_pLightBuffer);

		exit(1);





		return hr;

			break;

		{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	bool ret = tinyobj::LoadObj(

			// Loop over vertices in the face.

};

	{

}
void CD3DTest::Render()

	scDesc.SampleDesc.Quality = 0;

{

		return hr;

				break;

		D3D11_SDK_VERSION,



		SDL_Delay(1000);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	bool ret = tinyobj::LoadObj(

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	return 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	m_Viewport.Height = (FLOAT)rect.Height();

	HRESULT              hr;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pSampler = NULL;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	irData.pSysMem = &pIList[0];

	irData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

		D3D_DRIVER_TYPE_HARDWARE,

		}

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		if (e.type == SDL_QUIT)

	vrData.SysMemSlicePitch = 0;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

		&level,

		&shapes,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	for (int i = 0; i < vcount; i++)

	txDesc.SampleDesc.Quality = 0;

#include <SDL.h>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





				vertex.push_back(vertex_tmp);

	vector<Vertex> vertexlist;



	// Loop over shapes

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);









	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

using std::cout; using std::endl;

		D3D11_SDK_VERSION,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	};

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.Width = (FLOAT)rect.Width();

	UINT offsets = 0;

	tinyobj::ObjReaderConfig reader_config;



	auto& materials = reader.GetMaterials();

	int     vcount = vertexlist.size();

				vertex.push_back(vertex_tmp);

	D3D11_TEXTURE2D_DESC txDesc;

		cout << "SDL_INIT_ERROR" << endl;



		return hr;



			{

	if (!reader.Warning().empty())

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;

		pLevels,

	vrData.SysMemSlicePitch = 0;

		delete[] pIList;

CD3DTest::CD3DTest()

	irData.pSysMem = &pIList[0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

	m_pIndexBuffer = NULL;

	m_pInputLayout = NULL;

	delete[] pIList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_Angle += XMConvertToRadians(1.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	float    nearZ = 0.1f;

	m_VertexCount = vcount;



	XMFLOAT4 pos;               //座標(x,y,z)



};

	if (FAILED(hr))

		return hr;

				break;



	std::string imagePath = "hello.bmp";

	//頂点バッファ作成

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.TopLeftY = 0;

		&m_pImmediateContext);

	SAFE_RELEASE(m_pInputLayout);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_Viewport.TopLeftX = 0;



	txDesc.SampleDesc.Count = 1;

				// access to vertex

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	UINT flags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	tinyobj::ObjReaderConfig reader_config;

	SDL_Quit();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);


