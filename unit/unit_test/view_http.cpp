	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	/*

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTextureView = NULL;

	tinyobj::ObjReaderConfig reader_config;

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;



	}

	}

	{

struct ConstantMaterial {

		KEY_PRESS_SURFACE_TOTAL

			{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		KEY_PRESS_SURFACE_TOTAL

	SDL_Quit();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (!reader.ParseFromFile(inputfile, reader_config))

};

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;

		{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		SDL_RenderCopy(ren, tex, NULL, NULL);

#include "DirectXManager.h"

	if (!reader.ParseFromFile(inputfile, reader_config))

#include <SDL.h>



	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	WORD* pIList = new WORD[icount];

	m_pVertexBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

#include "DirectXManager.h"

			}

	//テクスチャ読み込み



};

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		if (!ret)

		delete[] pIList;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&m_pSwapChain,

	vrData.SysMemPitch = 0;

{

	m_pRenderTargetView = NULL;

	txDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		R"(cube.obj)");



	m_Viewport.Width = (FLOAT)rect.Width();

	//Create Index

				WORD index = idx.vertex_index;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

{

		m_pImmediateContext->ClearState();

	txDesc.MipLevels = 1;

		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pTextureView = NULL;

				// access to vertex

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);









	SAFE_RELEASE(m_pDepthStencilView);

		if (!ret)

	std::string inputfile = "test.obj";



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	if (FAILED(hr))

int SEGMENT = 36;

	XMFLOAT4X4 world;



	//Key press surfaces constants

		&m_pDevice,

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);



	scDesc.SampleDesc.Count = 1;

	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	}



	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//Create Index



};

		pIList[j] = indexList[j];

	// Loop over shapes

		return hr;

}

		SDL_Delay(1000);

	m_pDepthStencilView = NULL;



	ZeroMemory(&txDesc, sizeof(txDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





		}

	XMFLOAT4X4 projection;

	}

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	SAFE_RELEASE(m_pVertexShader);

}

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	int     vcount = vertexlist.size();

#endif

	}

	scDesc.BufferDesc.Width = rect.Width();

	m_pMatrixBuffer = NULL;

	}

{

	ibDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)

	WORD   icount = indexList.size();

			}

	scDesc.OutputWindow = hwnd;

			index_offset += fv;

				WORD index = idx.vertex_index;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pSampler = NULL;

	vector<Vertex> vertexlist;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	WORD* pIList = new WORD[icount];

}



	scDesc.SampleDesc.Count = 1;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.pSysMem = &pVList[0];

		return hr;

	txDesc.SampleDesc.Quality = 0;

		m_pImmediateContext->ClearState();

	vrData.SysMemPitch = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		KEY_PRESS_SURFACE_DOWN,

	//Key press surfaces constants



	for (int j = 0; j < icount; j++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//ビューポート設定

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	ConstantLightBuffer clb;

			case SDLK_RIGHT:

	m_pDepthStencilView = NULL;

#include "DirectXManager.h"



	for (const auto& shape : shapes)



	scDesc.OutputWindow = hwnd;



	ibDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

		// Loop over faces(polygon)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

		if (!reader.Error().empty())

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_TEXTURE2D_DESC txDesc;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#define TINYOBJLOADER_IMPLEMENTATION

};

	Release();

	tinyobj::ObjReaderConfig reader_config;





	m_VertexCount = vcount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

	std::string inputfile = "test.obj";





	std::string error;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	SDL_DestroyWindow(win);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::string inputfile = "test.obj";

	SDL_DestroyRenderer(ren);

	}*/

void CD3DTest::Render()

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	ibDesc.StructureByteStride = 0;





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pVertexShader = NULL;



	vector<WORD> indexList;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		pVList[i] = vertexlist[i];

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	for (size_t s = 0; s < shapes.size(); s++)

	//テクスチャ読み込み





	m_IndexCount = icount;

CD3DTest::CD3DTest()

				// access to vertex

	LoadObj(vertexlist, indexList);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	for (int i = 0; i < 3; i++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pTextureView = NULL;

	cbDesc.MiscFlags = 0;

	auto& attrib = reader.GetAttrib();

		1,

			exit(1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{

		&m_pDevice,

	DXGI_SWAP_CHAIN_DESC scDesc;

	std::string inputfile = "test.obj";



	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pTexture);



	{

	SAFE_RELEASE(m_pRenderTargetView);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

		&m_pSwapChain,

	//定数バッファ作成

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		SDL_RenderClear(ren);



	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		//User requests quit

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	vrData.pSysMem = &pVList[0];

	scDesc.BufferDesc.Width = rect.Width();

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pTextureView);



			for (size_t v = 0; v < fv; v++)

/*



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;



	{

	irData.pSysMem = &pIList[0];

	for (const auto& shape : shapes)

CD3DTest::~CD3DTest()

	Vertex* pVList = new Vertex[vcount];

};

	float    fov = XMConvertToRadians(20.0f);



				break;

	{

				WORD index = idx.vertex_index;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

#ifdef _DEBUG



			for (size_t v = 0; v < fv; v++)

	//頂点レイアウト作成

	CRect                rect;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}



	irData.pSysMem = &pIList[0];

		if (!ret)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.MiscFlags = 0;

}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//vector<WORD> index_t;

	if (FAILED(hr))

		&level,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	delete[] pIList;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			default:

	std::string imagePath = "hello.bmp";

	ibDesc.MiscFlags = 0;

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	UINT offsets = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4         eyePos;   //視点座標

	//ビューポート設定





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//テクスチャ読み込み

		&m_pDevice,

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pVertexBuffer = NULL;

int main(int, char**)

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include <iostream>

			switch (e.key.keysym.sym)

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pVertexShader = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pInputLayout = NULL;

CD3DTest::~CD3DTest()

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	bool ret = tinyobj::LoadObj(



	vbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.Height = (FLOAT)rect.Height();

	//テクスチャ読み込み

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				indexlist.push_back(idx.vertex_index);

}

	while (SDL_PollEvent(&e) != 0)

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMFLOAT4 ambient;           //環境(r,g,b)



	//ピクセルシェーダー生成



			// Loop over vertices in the face.

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&txDesc, sizeof(txDesc));

#include <SDL.h>



	// Loop over shapes



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	float    farZ = 100.0f;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pIndexBuffer);

		//User requests quit

	}

}

	SDL_DestroyWindow(win);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

		m_pImmediateContext->ClearState();

	}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_DEFAULT,

			for (size_t v = 0; v < fv; v++)

	UINT flags = 0;

	vector<WORD> indexList;

	SDL_DestroyTexture(tex);

	}

			index_offset += fv;

		&m_pSwapChain,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



			case SDLK_UP:





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				// access to vertex

}

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_IndexCount = icount;

	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (!reader.Warning().empty())

	auto& shapes = reader.GetShapes();

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pTextureView = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		// Loop over faces(polygon)



	SDL_Quit();



	ConstantLight    pntLight; //点光源



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

	//テクスチャ読み込み

			//Select surfaces based on key press

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

CD3DTest::~CD3DTest()

int main(int, char**)

	}

}

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//vector<Vertex> vertex_t;



		&shapes,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;







	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};



	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	LoadObj(vertexlist, indexList);

			//Select surfaces based on key press

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

HRESULT CD3DTest::Create(HWND hwnd)

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

using std::cout; using std::endl;



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	if (!error.empty())

using std::cout; using std::endl;

/*

		KEY_PRESS_SURFACE_UP,

}

	UINT offsets = 0;

				break;

		&materials,



		}

}

struct ConstantLight {



{

void CD3DTest::Render()

			for (size_t v = 0; v < fv; v++)

	for (int i = 0; i < vcount; i++)



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4         eyePos;   //視点座標

		if (!ret)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//ビューポート設定

	SDL_Event e;

	SDL_Event e;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 specular;          //反射(r,g,b)

	scDesc.BufferDesc.Width = rect.Width();



		&level,



	XMStoreFloat4(&clb.ambient, lightAmbient);

		&m_pSwapChain,

	{

		&level,

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		if (!reader.Error().empty())

				indexlist.push_back(idx.vertex_index);

	ConstantLightBuffer clb;

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	tinyobj::ObjReader reader;

int SEGMENT = 36;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	txDesc.MipLevels = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		// Loop over faces(polygon)

	XMFLOAT4X4 view;

			{

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;

	if (!reader.Warning().empty())

	SDL_DestroyWindow(win);

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	while (SDL_PollEvent(&e) != 0)

	}





	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	pBackBuffer->Release();

	{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		if (e.type == SDL_QUIT)



	SAFE_RELEASE(m_pLightBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pVertexShader);

	D3D11_BUFFER_DESC ibDesc;

				vertex.push_back(vertex_tmp);

	float    fov = XMConvertToRadians(20.0f);



#ifdef _DEBUG

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				WORD index = idx.vertex_index;



#include "DirectXManager.h"

	m_Angle += XMConvertToRadians(1.0f);

	};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	DXGI_SWAP_CHAIN_DESC scDesc;

		&m_pSwapChain,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



void CD3DTest::Render()

			{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

	m_pSwapChain->Present(0, 0);



	return;

		&level,

};

	m_pDepthStencilTexture = NULL;

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_FreeSurface(suf);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return;



		return 1;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	dsDesc.Texture2D.MipSlice = 0;

		&error,

	{

}

	//テクスチャ読み込み

	}

	if (FAILED(hr))



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pSampler);

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	if (m_pImmediateContext)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_RIGHT,

	m_pMatrixBuffer = NULL;

	scDesc.OutputWindow = hwnd;

	irData.SysMemPitch = 0;

	WORD* pIList = new WORD[icount];







CD3DTest::CD3DTest()



	SDL_DestroyWindow(win);

 * Lesson 1: Hello World!

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

		SDL_Delay(1000);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	ConstantLightBuffer clb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pTexture);

	SDL_FreeSurface(bmp);

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_RIGHT,





		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_SUBRESOURCE_DATA vrData;

{

	for (int i = 0; i < 3; i++)

	scDesc.SampleDesc.Count = 1;

	//Clean up our objects and quit

	std::string imagePath = "hello.bmp";

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

}

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

{

				break;

	m_VertexCount = 0;

	if (FAILED(hr))



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	for (const auto& shape : shapes)

				tinyobj::real_t ty =







CD3DTest::CD3DTest()



	}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	if (!reader.Warning().empty())

	WORD* pIList = new WORD[icount];

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	WORD* pIList = new WORD[icount];

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	enum KeyPressSurfaces

	if (FAILED(hr))

		return hr;

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderPresent(ren);

void CD3DTest::Render()

	vrData.SysMemPitch = 0;

	txDesc.Height = rect.Height();

{

#ifdef _DEBUG

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//テクスチャ読み込み

		&shapes,

	m_Viewport.MinDepth = 0.0f;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	bool ret = tinyobj::LoadObj(



	XMFLOAT4 pos;               //座標(x,y,z)

	//Vertex* pVList = new Vertex[vcount];

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pSampler = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	/*

			for (size_t v = 0; v < num_vertices; v++)

		pLevels,

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		&m_pDevice,

		&scDesc,

}

				WORD index = idx.vertex_index;

	D3D11_TEXTURE2D_DESC txDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	return;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pVertexShader);

		if (!ret)



		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vrData.pSysMem = &pVList[0];

}

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext = NULL;





	m_pVertexShader = NULL;

			index_offset += num_vertices;

		pLevels,

#include <iostream>

	{

		return hr;

	{

	{

	for (int i = 0; i < 3; i++)





	XMFLOAT4 pos;               //座標(x,y,z)

	m_pInputLayout = NULL;

#include "DirectXManager.h"

	//Vertex* pVList = new Vertex[vcount];



				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	return;

	SAFE_RELEASE(m_pLightBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	{

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		}

	m_pRenderTargetView = NULL;

	vector<WORD> indexList;

	m_Viewport.Height = (FLOAT)rect.Height();

			// Loop over vertices in the face.

		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantLight {

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pTextureView = NULL;

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	/*

	std::string inputfile = "test.obj";

	return 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		KEY_PRESS_SURFACE_RIGHT,

};

struct ConstantLightBuffer {

	std::string inputfile = "test.obj";

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	Release();

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&m_pDevice,

	dsDesc.Format = txDesc.Format;

	for (int j = 0; j < icount; j++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		{





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#endif

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pPixelShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_Quit();

 */



	delete[] pIList;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void CD3DTest::Release()

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		if (!ret)

#include <SDL.h>

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_SUBRESOURCE_DATA irData;

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pTexture = NULL;



	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantMatrixBuffer {

	//頂点レイアウト作成



	SDL_DestroyTexture(tex);

	XMFLOAT4X4 world;

		delete[] pVList;

				// access to vertex

	vbDesc.MiscFlags = 0;

	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	txDesc.Height = rect.Height();



	}

	//頂点シェーダー生成

		//User presses a key

				indexlist.push_back(index);

	m_pDepthStencilView = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantLight {

	irData.SysMemSlicePitch = 0;

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	/*

	m_pInputLayout = NULL;

	irData.SysMemSlicePitch = 0;

		SDL_Delay(1000);



	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	m_pVertexShader = NULL;

	if (FAILED(hr))

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	HRESULT              hr;

	m_Angle += XMConvertToRadians(1.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext = NULL;



		}

			index_offset += num_vertices;





	if (m_pImmediateContext)

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		}



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	Vertex* pVList = new Vertex[vcount];

	{

	std::vector<tinyobj::shape_t> shapes;

	Release();

	SDL_DestroyTexture(tex);

		SDL_Delay(1000);

	irData.pSysMem = &pIList[0];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	HRESULT              hr;

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pDevice);



		return hr;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			case SDLK_RIGHT:

		&error,

		//User presses a key



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	{





		D3D11_SDK_VERSION,



	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

		return hr;

	enum KeyPressSurfaces

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	D3D11_BUFFER_DESC ibDesc;





	}

		m_pImmediateContext->ClearState();

			case SDLK_RIGHT:

	m_pSampler = NULL;

	{

	}

	//First we need to start up SDL, and make sure it went ok

		return 1;

	}



	if (!error.empty())

		size_t index_offset = 0;  // インデントのオフセット

	}



	{

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

	m_pSampler = NULL;

	}

	{

	m_pTexture = NULL;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_TOTAL

	scDesc.SampleDesc.Count = 1;

		&materials,

				break;

	float    fov = XMConvertToRadians(20.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	if (!reader.ParseFromFile(inputfile, reader_config))



			index_offset += fv;

	m_Angle += XMConvertToRadians(1.0f);

	m_pTexture = NULL;

#include <SDL.h>

			exit(1);

		NULL,





			}

		size_t index_offset = 0;  // インデントのオフセット

{

				break;

	m_VertexCount = vcount;

				indexlist.push_back(idx.vertex_index);



	vector<Vertex> vertexlist;



			index_offset += fv;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_Viewport.MinDepth = 0.0f;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_FreeSurface(bmp);



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

{

#include <SDL.h>

		exit(1);

	if (m_pImmediateContext)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);





		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pIndexBuffer = NULL;

		D3D11_SDK_VERSION,

	D3D11_SUBRESOURCE_DATA vrData;

};

		SDL_Delay(1000);





{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Event e;

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	reader_config.mtl_search_path = "./"; // Path to material files

	UINT offsets = 0;

	{



	m_pImmediateContext = NULL;

	enum KeyPressSurfaces

	vrData.SysMemPitch = 0;

	while (SDL_PollEvent(&e) != 0)

		&error,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

			case SDLK_LEFT:

	};

	if (!reader.Warning().empty())

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		{



	ConstantLight    pntLight; //点光源



	//頂点レイアウト作成

		size_t index_offset = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	dsDesc.Texture2D.MipSlice = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	};

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return 0;





#ifdef _DEBUG

HRESULT CD3DTest::Create(HWND hwnd)

			//Select surfaces based on key press

	cbDesc.CPUAccessFlags = 0;

#include "DirectXManager.h"

{

{

	}

	D3D11_SUBRESOURCE_DATA irData;

	m_pDevice = NULL;

	SDL_Quit();

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	m_Angle += XMConvertToRadians(1.0f);

	ConstantLight    pntLight; //点光源

{

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC vbDesc;

	std::string inputfile = "test.obj";

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pPixelShader = NULL;

		delete[] pVList;

	}

	SAFE_RELEASE(m_pVertexShader);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t tx =

	m_Angle += XMConvertToRadians(1.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}

	SDL_Quit();

	}

			case SDLK_LEFT:

	m_pInputLayout = NULL;

	float    farZ = 100.0f;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pDevice);

		if (!ret)

	scDesc.BufferDesc.Width = rect.Width();

		delete[] pVList;

	}*/



		delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyWindow(win);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			break;

	//頂点バッファ作成

		&scDesc,

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//テクスチャ読み込み

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			index_offset += fv;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	Release();



	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pImmediateContext);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	::GetClientRect(hwnd, &rect);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

				// access to vertex

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	SAFE_RELEASE(m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	float    nearZ = 0.1f;

	//vector<Vertex> vertex_t;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	auto& materials = reader.GetMaterials();



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		size_t index_offset = 0;





	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&attrib,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}

	if (FAILED(hr))

	float    nearZ = 0.1f;

	m_Viewport.MaxDepth = 1.0f;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.OutputWindow = hwnd;

		//User requests quit

	//vector<Vertex> vertex_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		1,

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		delete[] pVList;

	/*



	if (FAILED(hr))

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

HRESULT CD3DTest::Create(HWND hwnd)



				indexlist.push_back(index);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;



#include "DirectXManager.h"



#endif

	irData.SysMemSlicePitch = 0;







		}

	DXGI_SWAP_CHAIN_DESC scDesc;

	Release();

	SDL_DestroyTexture(tex);

	//Clean up our objects and quit



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_BUFFER_DESC vbDesc;

	txDesc.MiscFlags = 0;

	SDL_Quit();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pSampler = NULL;







	dsDesc.Texture2D.MipSlice = 0;



		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				// access to vertex



			// Loop over vertices in the face.



			for (size_t v = 0; v < num_vertices; v++)

		size_t index_offset = 0;

	D3D11_SUBRESOURCE_DATA irData;





		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	std::string error;

	D3D11_BUFFER_DESC ibDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

	std::vector<tinyobj::shape_t> shapes;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D11_SDK_VERSION,



	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

	m_pIndexBuffer = NULL;

	{

{

	scDesc.Windowed = TRUE;



				tinyobj::real_t ty =

{



{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

#include "DirectXManager.h"



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_Viewport.TopLeftY = 0;

		}

	txDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;



		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	/*

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))



		&m_pDevice,

		{





	irData.SysMemSlicePitch = 0;

	m_pIndexBuffer = NULL;



	m_VertexCount = 0;



	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pDepthStencilView = NULL;



	{

	m_Viewport.Width = (FLOAT)rect.Width();

	float    farZ = 100.0f;

				indexlist.push_back(idx.vertex_index);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		&level,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	m_pVertexShader = NULL;

	// Loop over shapes

	SAFE_RELEASE(m_pRenderTargetView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	//テクスチャ読み込み

	vector<WORD> indexList;



		delete[] pIList;



	irData.SysMemSlicePitch = 0;

	m_pSwapChain = NULL;

		return hr;

	cbDesc.StructureByteStride = 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())



				break;

			break;



	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_UP,

	m_IndexCount = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pTextureView);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	cbDesc.MiscFlags = 0;

			default:

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		if (!ret)

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (int j = 0; j < icount; j++)

/*

}

			for (size_t v = 0; v < num_vertices; v++)

	//頂点バッファ作成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pVertexBuffer);





			case SDLK_DOWN:

				tinyobj::real_t tx =

		D3D_DRIVER_TYPE_HARDWARE,

};

	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>





#endif

			case SDLK_DOWN:

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.MiscFlags = 0;

		{

		return hr;



#endif

	pBackBuffer->Release();

		pIList[j] = indexList[j];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pVertexShader);

	}

	m_pVertexShader = NULL;

	SDL_FreeSurface(bmp);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

		KEY_PRESS_SURFACE_DEFAULT,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			for (size_t v = 0; v < num_vertices; v++)

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.Width = rect.Width();

	irData.SysMemPitch = 0;



	std::string error;





	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pInputLayout);



	irData.pSysMem = &pIList[0];

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4X4 view;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		}

		R"(cube.obj)");

	cbDesc.StructureByteStride = 0;



	CRect                rect;

		KEY_PRESS_SURFACE_RIGHT,

			// Loop over vertices in the face.

{

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		NULL,

		&scDesc,

	SDL_Quit();

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		cout << "SDL_INIT_ERROR" << endl;







	D3D11_BUFFER_DESC vbDesc;

	UINT flags = 0;



	m_IndexCount = 0;

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_LEFT,

	m_pSwapChain->Present(0, 0);

				WORD index = idx.vertex_index;

	SDL_DestroyTexture(tex);



struct ConstantLightBuffer {

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vector<WORD> indexList;



struct ConstantMaterial {

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//ピクセルシェーダー生成

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pLightBuffer);

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pVertexShader);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}



			int num_vertices = shape.mesh.num_face_vertices[f];

void CD3DTest::Release()



		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_DOWN,

{





	auto& materials = reader.GetMaterials();

	scDesc.BufferDesc.Height = rect.Height();

	/*

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

};

	SDL_DestroyRenderer(ren);





	m_IndexCount = 0;

				indexlist.push_back(idx.vertex_index);

}
using std::cout; using std::endl;



		}

{

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);





	{

	irData.SysMemPitch = 0;

	vrData.SysMemSlicePitch = 0;

	}



}
	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pSwapChain = NULL;

		SDL_RenderClear(ren);

			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))



			//Select surfaces based on key press

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

	SDL_Quit();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			switch (e.key.keysym.sym)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);



	scDesc.BufferCount = 1;



				// access to vertex

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	tinyobj::ObjReader reader;

	for (int i = 0; i < vcount; i++)

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



struct ConstantLightBuffer {

	irData.SysMemSlicePitch = 0;





	txDesc.ArraySize = 1;

				tinyobj::real_t tx =



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		if (!ret)



			case SDLK_UP:

	m_VertexCount = vcount;

/*

	ConstantMatrixBuffer cmb;

				tinyobj::real_t ty =

		&scDesc,

		1,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_FreeSurface(bmp);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

};

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

		pLevels,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}



		return hr;

	m_pLightBuffer = NULL;

	cbDesc.MiscFlags = 0;

		&m_pDevice,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	SDL_Quit();

	txDesc.SampleDesc.Count = 1;

	delete[] pIList;

		// Loop over faces(polygon)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilView = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Quit();

{



	cbDesc.CPUAccessFlags = 0;

		&scDesc,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	txDesc.Height = rect.Height();

using std::cout; using std::endl;

	{

	delete[] pIList;

	UINT offsets = 0;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

	}

		size_t index_offset = 0;

		//User requests quit

struct ConstantLightBuffer {





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	UINT strides = sizeof(Vertex);



	if (FAILED(hr))

				WORD index = idx.vertex_index;

struct ConstantMaterial {

		return hr;

	ConstantMaterial material; //物体の質感

	//Clean up our objects and quit



	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vrData.SysMemPitch = 0;

/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	std::vector<tinyobj::shape_t> shapes;

		NULL,

{



	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC cbDesc;

	CRect                rect;

		return hr;

	tinyobj::ObjReader reader;

	D3D11_BUFFER_DESC ibDesc;

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	enum KeyPressSurfaces



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;



	vrData.SysMemPitch = 0;

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	Release();

			}

	txDesc.CPUAccessFlags = 0;



	m_IndexCount = 0;

	{

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_Delay(1000);

	txDesc.SampleDesc.Quality = 0;

			case SDLK_DOWN:

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (m_pImmediateContext)

	float    fov = XMConvertToRadians(20.0f);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&attrib,

		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

			{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

/*

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	}

	//Clean up our objects and quit

		return hr;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}







	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			{

	{



		pIList[j] = indexList[j];

	for (int i = 0; i < vcount; i++)

	//頂点シェーダー生成

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    farZ = 100.0f;



	WORD* pIList = new WORD[icount];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (const auto& shape : shapes)

#ifdef _DEBUG



	{

	D3D11_TEXTURE2D_DESC txDesc;

	m_pDevice = NULL;

	if (FAILED(hr))

	Release();

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				break;

	float    nearZ = 0.1f;

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.OutputWindow = hwnd;



			//Select surfaces based on key press

void CD3DTest::Release()

 */

			exit(1);

			switch (e.key.keysym.sym)



		&scDesc,

	pBackBuffer->Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				// access to vertex

	m_pDepthStencilView = NULL;

			}



			for (size_t v = 0; v < fv; v++)

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4X4 world;

	//Clean up our objects and quit

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.MiscFlags = 0;



	}

	D3D11_BUFFER_DESC cbDesc;



	//インデックスバッファ作成

			//Select surfaces based on key press

	if (FAILED(hr))

	m_pDevice = NULL;

int main(int, char**)

		return hr;

	txDesc.Width = rect.Width();

				break;

	dsDesc.Format = txDesc.Format;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	{

	{

		pLevels,

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



	m_pInputLayout = NULL;

struct ConstantLight {

	txDesc.Height = rect.Height();

	return hr;



	scDesc.BufferCount = 1;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



			case SDLK_UP:

	if (FAILED(hr))

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		size_t index_offset = 0;  // インデントのオフセット

	SDL_Quit();

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	tinyobj::ObjReader reader;

int main(int, char**)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	for (size_t s = 0; s < shapes.size(); s++)

		&attrib,

	m_pTexture = NULL;

	SAFE_RELEASE(m_pSwapChain);

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& materials = reader.GetMaterials();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		size_t index_offset = 0;

	HRESULT              hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ibDesc.StructureByteStride = 0;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	D3D11_SUBRESOURCE_DATA irData;



	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	irData.pSysMem = &pIList[0];

		&shapes,

{

	//Create Index

	//vector<Vertex> vertex_t;

	m_pTexture = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標



	auto& attrib = reader.GetAttrib();

	// Loop over shapes

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

			default:



				break;

				vertex.push_back(vertex_tmp);

		pIList[j] = indexList[j];



				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	SDL_FreeSurface(bmp);

	m_pLightBuffer = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

	pBackBuffer->Release();

	SAFE_RELEASE(m_pSampler);

				WORD index = idx.vertex_index;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

			break;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

	txDesc.SampleDesc.Count = 1;

}

				break;

	for (int i = 0; i < vcount; i++)

		&m_pImmediateContext);

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))

	m_IndexCount = 0;

		NULL,

	if (FAILED(hr))

	}



#ifdef _DEBUG

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			for (size_t v = 0; v < fv; v++)



				vertex.push_back(vertex_tmp);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_IndexCount = icount;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//頂点レイアウト作成

	//深度ステンシルバッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));



};



};

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

}

	for (int j = 0; j < icount; j++)



	Vertex* pVList = new Vertex[vcount];

	irData.SysMemPitch = 0;

	UINT strides = sizeof(Vertex);











	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vrData.SysMemSlicePitch = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#endif

	//vector<WORD> index_t;



		size_t index_offset = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	return hr;



	ibDesc.MiscFlags = 0;

	return hr;

		&m_pImmediateContext);

		//User requests quit

	SDL_Quit();

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	XMFLOAT4         eyePos;   //視点座標



	//頂点バッファ作成

		{

{

	D3D11_BUFFER_DESC ibDesc;

{



	txDesc.ArraySize = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	float    fov = XMConvertToRadians(20.0f);





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	float    farZ = 100.0f;

	ConstantMaterial material; //物体の質感

	m_pSwapChain = NULL;

	}

	}

struct ConstantLightBuffer {

	bool ret = tinyobj::LoadObj(

};

	XMFLOAT4         eyePos;   //視点座標

	Vertex* pVList = new Vertex[vcount];

	return 0;



#include "DirectXManager.h"

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	UINT strides = sizeof(Vertex);

	D3D11_SUBRESOURCE_DATA irData;



	SDL_Quit();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t tx =

	scDesc.BufferDesc.Height = rect.Height();

	tinyobj::ObjReader reader;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA irData;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_SUBRESOURCE_DATA vrData;





	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pDevice);

}

HRESULT CD3DTest::Create(HWND hwnd)

	}

				WORD index = idx.vertex_index;

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		exit(1);

		return hr;

	if (FAILED(hr))

		return hr;

	{

		}

	SAFE_RELEASE(m_pSwapChain);

		KEY_PRESS_SURFACE_RIGHT,

CD3DTest::CD3DTest()



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pVertexShader = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4X4 projection;



	txDesc.SampleDesc.Quality = 0;

			}

#include <iostream>

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

#include "DirectXManager.h"

			case SDLK_LEFT:

	m_pSampler = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)



		delete[] pIList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyRenderer(ren);



	// Loop over shapes

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

		pLevels,

				tinyobj::real_t ty =

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	scDesc.BufferCount = 1;

		return hr;

			default:





	if (FAILED(hr))

	}

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_IndexCount = 0;

		return hr;

	ConstantLight    pntLight; //点光源

	ID3D11Texture2D* pBackBuffer;

			//Select surfaces based on key press

			{

{

	DXGI_SWAP_CHAIN_DESC scDesc;



	ID3D11Texture2D* pBackBuffer;

	std::string imagePath = "hello.bmp";

			}

	SDL_DestroyWindow(win);

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		SDL_RenderPresent(ren);

	UINT offsets = 0;

		}

	tinyobj::ObjReaderConfig reader_config;



		1,

	XMStoreFloat4(&clb.eyePos, eye);

	vector<Vertex> vertexlist;

	std::string error;

{

struct ConstantMatrixBuffer {

			case SDLK_UP:

		return 1;

		{

{

	Release();

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//vector<WORD> index_t;



	txDesc.CPUAccessFlags = 0;

			// Loop over vertices in the face.

	UINT flags = 0;

#ifdef _DEBUG

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantMaterial material; //物体の質感



{



	D3D_FEATURE_LEVEL level;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				vertex.push_back(vertex_tmp);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (const auto& shape : shapes)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

		&m_pDevice,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}

		R"(cube.obj)");

	SDL_FreeSurface(bmp);

	scDesc.BufferCount = 1;

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//頂点レイアウト作成

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

		{

int main(int, char**)



	scDesc.BufferDesc.Width = rect.Width();

	m_pTextureView = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));



	for (int j = 0; j < icount; j++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	scDesc.SampleDesc.Quality = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

	XMStoreFloat4(&clb.ambient, lightAmbient);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMaterial {

	scDesc.BufferDesc.Width = rect.Width();

			for (size_t v = 0; v < num_vertices; v++)

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	float    farZ = 100.0f;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pLightBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		{

{

		delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		}

	m_pVertexShader = NULL;

				break;

	SAFE_RELEASE(m_pSwapChain);

	if (!reader.Warning().empty())

#ifdef _DEBUG



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (!error.empty())

		{

	m_pMatrixBuffer = NULL;



		return hr;

	//First we need to start up SDL, and make sure it went ok

			for (size_t v = 0; v < fv; v++)

		NULL,



			for (size_t v = 0; v < fv; v++)

				break;

		{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_RIGHT,

		{

		&m_pDevice,



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4X4 world;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pSampler = NULL;

struct ConstantMatrixBuffer {

	std::vector<tinyobj::shape_t> shapes;

	CRect                rect;

	/*

				break;

int main(int, char**)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pTextureView = NULL;

	return hr;

	txDesc.MiscFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	CRect                rect;

	while (SDL_PollEvent(&e) != 0)

		&scDesc,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



CD3DTest::CD3DTest()

				vertex.push_back(vertex_tmp);

};

	cbDesc.CPUAccessFlags = 0;

	m_pDevice = NULL;



int main(int, char**)

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&shapes,

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		R"(cube.obj)");



	SAFE_RELEASE(m_pDepthStencilView);

		KEY_PRESS_SURFACE_DEFAULT,



	{

	::GetClientRect(hwnd, &rect);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	HRESULT              hr;

	vrData.pSysMem = &pVList[0];

	Vertex* pVList = new Vertex[vcount];



		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ty =

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	}

	cbDesc.StructureByteStride = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <SDL.h>

		if (!reader.Error().empty())

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.SysMemSlicePitch = 0;

		&attrib,



	{

	txDesc.CPUAccessFlags = 0;

	{



	XMFLOAT4 pos;               //座標(x,y,z)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4X4 view;

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{

#include <iostream>

		&m_pImmediateContext);



			}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	std::string imagePath = "hello.bmp";

			// Loop over vertices in the face.

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC cbDesc;

	UINT flags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pLightBuffer = NULL;

	//頂点シェーダー生成

#include <iostream>

	scDesc.OutputWindow = hwnd;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pPixelShader);



	}*/

				vertex.push_back(vertex_tmp);

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4 specular;          //反射(r,g,b)



	dsDesc.Format = txDesc.Format;

	ConstantLightBuffer clb;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

		&m_pDevice,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





	txDesc.Width = rect.Width();

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	/*

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

}

	LoadObj(vertexlist, indexList);

			// Loop over vertices in the face.

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

		return hr;

	Release();

		SDL_RenderClear(ren);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		1,

				tinyobj::real_t ty =

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;





	}*/

#endif



		pIList[j] = indexList[j];

		KEY_PRESS_SURFACE_LEFT,



		{

				WORD index = idx.vertex_index;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	scDesc.BufferCount = 1;

	{



		&m_pImmediateContext);

	SDL_FreeSurface(bmp);

	//ピクセルシェーダー生成

	tinyobj::attrib_t attrib;



		{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))



	return 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_IndexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_DestroyWindow(win);

struct ConstantLightBuffer {

struct ConstantLight {



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//テクスチャ読み込み

	return 0;



	ibDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA irData;

	//Create Index

	XMFLOAT4         eyePos;   //視点座標



	m_pInputLayout = NULL;

	enum KeyPressSurfaces

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL



	SAFE_RELEASE(m_pInputLayout);

	m_pLightBuffer = NULL;

		SDL_RenderClear(ren);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantMatrixBuffer {

	WORD   icount = indexList.size();

#endif

	m_Viewport.MaxDepth = 1.0f;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&attrib,

	while (SDL_PollEvent(&e) != 0)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		delete[] pVList;


