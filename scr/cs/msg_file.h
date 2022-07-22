		return hr;

#include <iostream>

	cbDesc.StructureByteStride = 0;

	}

	return 0;

			case SDLK_DOWN:

				tinyobj::real_t ty =

		exit(1);

	SAFE_RELEASE(m_pVertexShader);



	ID3D11Texture2D* pBackBuffer;

	SDL_FreeSurface(bmp);

		KEY_PRESS_SURFACE_TOTAL

	//vector<Vertex> vertex_t;



			case SDLK_RIGHT:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.SampleDesc.Count = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				break;

				vertex.push_back(vertex_tmp);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

		//User presses a key

	std::string imagePath = "hello.bmp";



	Release();

	int     vcount = vertexlist.size();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		NULL,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

}



				vertex.push_back(vertex_tmp);

struct ConstantMatrixBuffer {

	vector<Vertex> vertexlist;



	/*

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	}

			{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.ArraySize = 1;

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

			case SDLK_DOWN:



	{

	SAFE_RELEASE(m_pDepthStencilView);

		delete[] pIList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);









	vector<Vertex> vertexlist;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

CD3DTest::~CD3DTest()

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	m_pPixelShader = NULL;

		}

	XMFLOAT4 specular;          //反射(r,g,b)

		&m_pSwapChain,

	{

	//頂点レイアウト作成



	SAFE_RELEASE(m_pTextureView);

			case SDLK_LEFT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	//頂点レイアウト作成

	vector<WORD> indexList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		exit(1);

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

CD3DTest::CD3DTest()

	while (SDL_PollEvent(&e) != 0)

	txDesc.Width = rect.Width();

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::shape_t> shapes;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pMatrixBuffer = NULL;

	dsDesc.Texture2D.MipSlice = 0;





struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.SampleDesc.Count = 1;

	txDesc.SampleDesc.Count = 1;

	reader_config.mtl_search_path = "./"; // Path to material files

CD3DTest::~CD3DTest()



	SAFE_RELEASE(m_pRenderTargetView);

};

		KEY_PRESS_SURFACE_DEFAULT,

			switch (e.key.keysym.sym)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

		return hr;

	UINT strides = sizeof(Vertex);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	scDesc.SampleDesc.Quality = 0;

	//定数バッファ作成

	txDesc.MipLevels = 1;

struct ConstantMatrixBuffer {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}*/

	std::string error;

	irData.SysMemPitch = 0;





struct ConstantMatrixBuffer {

		}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	ID3D11Texture2D* pBackBuffer;

		}

	{

		D3D_DRIVER_TYPE_HARDWARE,

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	scDesc.SampleDesc.Quality = 0;

	//vector<WORD> index_t;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderClear(ren);

		//User presses a key

	{

			{



		cout << "SDL_INIT_ERROR" << endl;

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	// Loop over shapes

	txDesc.MiscFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SDL_Quit();

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

void CD3DTest::Render()

				break;

		&level,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;



	cbDesc.MiscFlags = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//Create Index



			case SDLK_RIGHT:



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (int j = 0; j < icount; j++)

		}

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.SampleDesc.Count = 1;

	}

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pVertexBuffer);



CD3DTest::~CD3DTest()

	//頂点レイアウト作成

	tinyobj::ObjReader reader;

	irData.SysMemPitch = 0;

	m_IndexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	//深度ステンシルバッファ作成

	{

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderClear(ren);

CD3DTest::CD3DTest()

		flags,

		{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

HRESULT CD3DTest::Create(HWND hwnd)



	return;

			{

struct ConstantLightBuffer {

struct ConstantMatrixBuffer {









	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





		return hr;

	// Loop over shapes

#include "DirectXManager.h"



	txDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

		}



	}

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	SDL_Quit();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



				vertex.push_back(vertex_tmp);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SDL_FreeSurface(bmp);

	//vector<Vertex> vertex_t;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	LoadObj(vertexlist, indexList);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	//インデックスバッファ作成

	//頂点シェーダー生成

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//頂点バッファ作成

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	tinyobj::attrib_t attrib;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int SEGMENT = 36;

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.SysMemPitch = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.MiscFlags = 0;



	HRESULT              hr;



			{





	}

	m_pMatrixBuffer = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pTexture);

	bool ret = tinyobj::LoadObj(

	}



	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC vbDesc;

{

	D3D11_BUFFER_DESC cbDesc;

{



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 pos;               //座標(x,y,z)

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	return 0;

	SAFE_RELEASE(m_pDevice);

				// access to vertex

	ConstantLightBuffer clb;



	m_pInputLayout = NULL;





	{

	//頂点レイアウト作成

}

		&m_pSwapChain,

		SDL_RenderPresent(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_VertexCount = vcount;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.MiscFlags = 0;

	m_pInputLayout = NULL;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		//User requests quit

	m_VertexCount = 0;

	D3D11_SUBRESOURCE_DATA irData;

	//頂点バッファ作成

	}

		flags,





	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_Angle += XMConvertToRadians(1.0f);

	m_pSwapChain = NULL;

	//頂点バッファ作成

};

	vrData.pSysMem = &pVList[0];

		D3D11_SDK_VERSION,

	delete[] pIList;

struct ConstantLight {

	if (FAILED(hr))



#include <iostream>

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	for (int i = 0; i < 3; i++)

};

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			//Select surfaces based on key press

	SAFE_RELEASE(m_pDepthStencilTexture);



		KEY_PRESS_SURFACE_DEFAULT,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		m_pImmediateContext->ClearState();



	ID3D11Texture2D* pBackBuffer;

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	m_pIndexBuffer = NULL;



	cbDesc.StructureByteStride = 0;

		&error,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.CPUAccessFlags = 0;



	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderClear(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				break;



	SDL_Quit();

	m_VertexCount = 0;

}
		D3D11_SDK_VERSION,



		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;

			}

	cbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::real_t tx =

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

				indexlist.push_back(idx.vertex_index);

		if (!reader.Error().empty())

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = vcount;

		}

};

	UINT flags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

	m_pDevice = NULL;

	//頂点バッファ作成

	Release();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		}

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	tinyobj::attrib_t attrib;

	//ピクセルシェーダー生成

	{







		if (e.type == SDL_QUIT)

	D3D_FEATURE_LEVEL level;

				break;

	scDesc.BufferCount = 1;

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	WORD* pIList = new WORD[icount];

	while (SDL_PollEvent(&e) != 0)

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		SDL_RenderClear(ren);

		return 1;

	D3D11_BUFFER_DESC vbDesc;





		1,

	m_pSampler = NULL;

	D3D11_BUFFER_DESC cbDesc;

				break;



#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SAFE_RELEASE(m_pTexture);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

		SDL_Delay(1000);

	for (int i = 0; i < vcount; i++)

	{



	ibDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();

	//頂点レイアウト作成

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			switch (e.key.keysym.sym)

}

	m_pSwapChain = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];





				vertex.push_back(vertex_tmp);

		&m_pDevice,

	//ピクセルシェーダー生成

	/*

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	if (FAILED(hr))

struct ConstantLight {

			}

	//頂点シェーダー生成

	XMStoreFloat4(&clb.eyePos, eye);



		return hr;

	Release();

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	SAFE_RELEASE(m_pDepthStencilView);



	ibDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pIndexBuffer = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

	{

	//Key press surfaces constants

	bool ret = tinyobj::LoadObj(

	m_pRenderTargetView = NULL;



	SAFE_RELEASE(m_pDevice);

		SDL_RenderCopy(ren, tex, NULL, NULL);



		R"(cube.obj)");

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	UINT strides = sizeof(Vertex);



	irData.SysMemPitch = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		&materials,



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





		pVList[i] = vertexlist[i];

	{

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t ty =

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;



				indexlist.push_back(index);

	if (!error.empty())

	m_pVertexShader = NULL;

 */

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	if (m_pImmediateContext)

			index_offset += num_vertices;

	scDesc.BufferDesc.Width = rect.Width();

	m_pIndexBuffer = NULL;



	m_pTexture = NULL;

	txDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			{

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

/*

	//vector<WORD> index_t;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_BUFFER_DESC cbDesc;

			index_offset += fv;



	ibDesc.StructureByteStride = 0;



		{

	XMFLOAT4X4 view;

	for (int i = 0; i < 3; i++)

	m_pSwapChain = NULL;

}

	SAFE_RELEASE(m_pVertexBuffer);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SAMPLER_DESC smpDesc;

	return hr;



	m_IndexCount = 0;

				tinyobj::real_t ty =



	XMFLOAT4 specular;          //反射(r,g,b)

	while (SDL_PollEvent(&e) != 0)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	Release();

		return hr;

		}

	XMFLOAT4         eyePos;   //視点座標

			int num_vertices = shape.mesh.num_face_vertices[f];

		&level,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	return;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vector<WORD> indexList;

		&attrib,

		m_pImmediateContext->ClearState();

	m_VertexCount = 0;



	return;

	SDL_DestroyRenderer(ren);

 * Lesson 1: Hello World!

#include <iostream>

	XMStoreFloat4(&clb.eyePos, eye);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		D3D_DRIVER_TYPE_HARDWARE,

	HRESULT              hr;

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//Key press surfaces constants

struct ConstantLightBuffer {

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_BUFFER_DESC cbDesc;





				break;

	if (FAILED(hr))

	//頂点レイアウト作成



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;

	vector<Vertex> vertexlist;

				vertex.push_back(vertex_tmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Release();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pVertexBuffer);

	ConstantMatrixBuffer cmb;

	float    nearZ = 0.1f;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

void CD3DTest::Release()

	{



	cbDesc.MiscFlags = 0;

				break;

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	auto& materials = reader.GetMaterials();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	//vector<Vertex> vertex_t;







	XMFLOAT4X4 view;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

#include <SDL.h>

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_RIGHT,

				break;

		KEY_PRESS_SURFACE_DOWN,

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

		exit(1);

	SDL_DestroyWindow(win);



	auto& materials = reader.GetMaterials();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	return 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pSampler);

	std::vector<tinyobj::material_t> materials;

		SDL_Delay(1000);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SAFE_RELEASE(m_pImmediateContext);

				break;

	m_pSwapChain = NULL;

	txDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

		D3D11_SDK_VERSION,

	reader_config.mtl_search_path = "./"; // Path to material files

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		1,

}



	XMFLOAT4X4 world;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





		return hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pVertexBuffer = NULL;



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

using std::cout; using std::endl;

	HRESULT              hr;

	SDL_DestroyTexture(tex);

			exit(1);

	D3D11_SAMPLER_DESC smpDesc;

		KEY_PRESS_SURFACE_TOTAL

	m_VertexCount = 0;

		&error,



	std::vector<tinyobj::shape_t> shapes;

		&materials,



	WORD   icount = indexList.size();



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Quit();





	{

				break;

	txDesc.MipLevels = 1;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

		m_pImmediateContext->ClearState();

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_LEFT,

	};

				break;

}
	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				indexlist.push_back(idx.vertex_index);



	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pLightBuffer);

 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	UINT strides = sizeof(Vertex);

			switch (e.key.keysym.sym)

	if (FAILED(hr))

		//User presses a key

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	dsDesc.Format = txDesc.Format;

	m_pMatrixBuffer = NULL;

		SDL_Delay(1000);

	dsDesc.Format = txDesc.Format;

{



	if (FAILED(hr))



{

			{



	XMStoreFloat4(&clb.ambient, lightAmbient);



	return;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.SampleDesc.Quality = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	{

	std::vector<tinyobj::shape_t> shapes;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		}











	return;

	for (int i = 0; i < vcount; i++)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		if (!reader.Error().empty())

	m_pRenderTargetView = NULL;



	m_VertexCount = vcount;

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Quit();



		return hr;

{

		KEY_PRESS_SURFACE_DOWN,

		m_pImmediateContext->ClearState();

}

	vrData.SysMemSlicePitch = 0;

		&shapes,



	}



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



{

			{

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

		return hr;

	m_pMatrixBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#ifdef _DEBUG

	{

	irData.SysMemSlicePitch = 0;

#endif

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	if (FAILED(hr))

		SDL_RenderPresent(ren);

		SDL_Delay(1000);

	scDesc.BufferCount = 1;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMFLOAT4X4 world;

	D3D11_SUBRESOURCE_DATA vrData;

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))



	irData.SysMemSlicePitch = 0;

#endif

	cbDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			//Select surfaces based on key press

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderPresent(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	vbDesc.MiscFlags = 0;

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.MiscFlags = 0;

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				break;





	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	CRect                rect;



	SAFE_RELEASE(m_pSwapChain);

	/*

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ConstantMatrixBuffer cmb;

		&m_pSwapChain,

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.CPUAccessFlags = 0;

			//Select surfaces based on key press

	tinyobj::ObjReaderConfig reader_config;

	SDL_Quit();

		if (!ret)

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.Windowed = TRUE;

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



#include "DirectXManager.h"

	}

				// access to vertex

}



	//テクスチャ読み込み

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

		return hr;

	UINT flags = 0;

{

	m_IndexCount = icount;





	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.ambient, lightAmbient);

			{

		exit(1);

		return hr;

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

	{

	SAFE_RELEASE(m_pIndexBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_UP:

	{



		{

	while (SDL_PollEvent(&e) != 0)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		SDL_Delay(1000);



	m_Angle += XMConvertToRadians(1.0f);

		return hr;



	D3D11_BUFFER_DESC cbDesc;

	UINT offsets = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	SDL_Quit();

	HRESULT              hr;

}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

		&materials,

	}

	return;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				break;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	vrData.SysMemSlicePitch = 0;

		&error,

			case SDLK_LEFT:



struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    nearZ = 0.1f;



				break;

void CD3DTest::Render()

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pTexture = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	float    farZ = 100.0f;

	m_Viewport.Height = (FLOAT)rect.Height();

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pRenderTargetView);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}



		}

		&attrib,

	{



	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

			}

	m_Viewport.MaxDepth = 1.0f;

		}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

			{



	D3D11_BUFFER_DESC cbDesc;

		&level,

	m_pTextureView = NULL;



	//Clean up our objects and quit



		SDL_RenderCopy(ren, tex, NULL, NULL);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	auto& shapes = reader.GetShapes();

		return hr;

#endif

		pVList[i] = vertexlist[i];

		{



	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pVertexShader);

	//テクスチャ読み込み

	scDesc.SampleDesc.Quality = 0;

void CD3DTest::Render()

	delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}

	UINT strides = sizeof(Vertex);

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	UINT flags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		SDL_RenderClear(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			//Select surfaces based on key press

	return 0;

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	tinyobj::ObjReaderConfig reader_config;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}



			// Loop over vertices in the face.

	irData.pSysMem = &pIList[0];

	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	reader_config.mtl_search_path = "./"; // Path to material files

				indexlist.push_back(idx.vertex_index);



	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SDL_FreeSurface(suf);

	m_pSwapChain->Present(0, 0);

	return;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	scDesc.BufferCount = 1;

	//頂点バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_IndexCount = icount;

	SDL_Quit();

		&scDesc,

				WORD index = idx.vertex_index;

	//定数バッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string error;

		SDL_RenderPresent(ren);

	irData.SysMemSlicePitch = 0;



		SDL_Delay(1000);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyWindow(win);

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t tx =

	txDesc.Width = rect.Width();

		&m_pSwapChain,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

 * Lesson 1: Hello World!

	D3D_FEATURE_LEVEL level;

	//Create Index

		pVList[i] = vertexlist[i];



	XMFLOAT4 pos;               //座標(x,y,z)

			}

			//Select surfaces based on key press



		return hr;

	cbDesc.MiscFlags = 0;

	{





CD3DTest::CD3DTest()

	cbDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pVertexShader);

	std::string inputfile = "test.obj";



			}

	SAFE_RELEASE(m_pSwapChain);



		if (e.type == SDL_QUIT)

		{

	SDL_DestroyTexture(tex);

		return hr;

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	if (FAILED(hr))

	{



			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		//User presses a key

#define TINYOBJLOADER_IMPLEMENTATION

			case SDLK_UP:

	{

		SDL_Delay(1000);

		SDL_RenderClear(ren);

	//ピクセルシェーダー生成



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include <SDL.h>

	D3D11_BUFFER_DESC vbDesc;

	if (!reader.Warning().empty())

	Release();

	SDL_Event e;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	m_pVertexBuffer = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	auto& shapes = reader.GetShapes();



	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantLightBuffer {

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	dsDesc.Format = txDesc.Format;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pTexture = NULL;



	enum KeyPressSurfaces



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pVertexShader);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Count = 1;

			default:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	::ZeroMemory(&scDesc, sizeof(scDesc));

void CD3DTest::Release()

		//User requests quit

		NULL,

	float    farZ = 100.0f;

		SDL_RenderClear(ren);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	irData.pSysMem = &pIList[0];

		size_t index_offset = 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantLightBuffer clb;

		flags,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;

	m_pTexture = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	DXGI_SWAP_CHAIN_DESC scDesc;

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

				break;

	txDesc.ArraySize = 1;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.MaxDepth = 1.0f;

		&m_pImmediateContext);





		&error,

	cbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

				break;

		&m_pDevice,

	bool ret = tinyobj::LoadObj(

	}



		KEY_PRESS_SURFACE_DEFAULT,

}

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

				tinyobj::real_t ty =



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	SDL_DestroyRenderer(ren);

			break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

 * Lesson 1: Hello World!

}

struct ConstantLight {

	}

	XMStoreFloat4(&clb.eyePos, eye);




