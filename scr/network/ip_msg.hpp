}

	SAFE_RELEASE(m_pPixelShader);







void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);

};







	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				WORD index = idx.vertex_index;

 */



		{

	//Vertex* pVList = new Vertex[vcount];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





		m_pImmediateContext->ClearState();

	ibDesc.MiscFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pLightBuffer = NULL;





using std::cout; using std::endl;



	SAFE_RELEASE(m_pImmediateContext);

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

 */



	m_pTexture = NULL;

	SDL_DestroyTexture(tex);

};

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	{

	SDL_Quit();

	D3D11_BUFFER_DESC cbDesc;





		return hr;

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				// access to vertex

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pVList;

	//Create Index

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

		}

	auto& materials = reader.GetMaterials();

	CRect                rect;

		if (e.type == SDL_QUIT)



	if (FAILED(hr))



	//頂点レイアウト作成

		&shapes,

	m_VertexCount = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pInputLayout = NULL;

	vbDesc.StructureByteStride = 0;

	//Key press surfaces constants



	//ビューポート設定





	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	SAFE_RELEASE(m_pLightBuffer);

				break;

				indexlist.push_back(idx.vertex_index);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return 1;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.MiscFlags = 0;

		{

	}



	bool ret = tinyobj::LoadObj(

	m_pIndexBuffer = NULL;



	cbDesc.CPUAccessFlags = 0;

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vector<Vertex> vertexlist;

			case SDLK_LEFT:



		&scDesc,

	for (const auto& shape : shapes)

				indexlist.push_back(idx.vertex_index);

			case SDLK_LEFT:

				WORD index = idx.vertex_index;

	m_Viewport.MaxDepth = 1.0f;

	vrData.SysMemSlicePitch = 0;

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			// Loop over vertices in the face.

	//テクスチャ読み込み

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		delete[] pIList;



void CD3DTest::Render()

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.TopLeftX = 0;





		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		delete[] pIList;

	m_Viewport.Width = (FLOAT)rect.Width();

			// Loop over vertices in the face.

	//vector<Vertex> vertex_t;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





		&m_pDevice,



	if (FAILED(hr))

			{

			switch (e.key.keysym.sym)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		R"(cube.obj)");

	ibDesc.MiscFlags = 0;



	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_SUBRESOURCE_DATA vrData;

	ConstantLight    pntLight; //点光源



int main(int, char**)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			index_offset += fv;

	for (const auto& shape : shapes)

struct ConstantLight {







{

	txDesc.SampleDesc.Quality = 0;

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_DestroyTexture(tex);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pDevice = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDevice);

using std::cout; using std::endl;

		return hr;

				indexlist.push_back(idx.vertex_index);

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		}

	//Key press surfaces constants

	dsDesc.Texture2D.MipSlice = 0;

		&m_pSwapChain,

	DXGI_SWAP_CHAIN_DESC scDesc;



	scDesc.BufferCount = 1;

	vbDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	}

	{

	m_pPixelShader = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&attrib,



	m_pSwapChain->Present(0, 0);

	{

	}



	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (m_pImmediateContext)

	UINT strides = sizeof(Vertex);





	cbDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pVertexBuffer = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//頂点バッファ作成





	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}

			for (size_t v = 0; v < fv; v++)

	}

	}

	SDL_DestroyWindow(win);

		flags,



	std::string error;

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

};



		pLevels,

			case SDLK_UP:

struct ConstantLight {

	//テクスチャ読み込み

	txDesc.ArraySize = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	::ZeroMemory(&scDesc, sizeof(scDesc));



	txDesc.Width = rect.Width();



int main(int, char**)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};

		&attrib,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.MinDepth = 0.0f;



	if (FAILED(hr))

	std::string inputfile = "test.obj";

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");



				indexlist.push_back(index);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (m_pImmediateContext)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

			{

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//頂点バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL level;

		return hr;



		SDL_RenderPresent(ren);

	SDL_DestroyTexture(tex);

	vbDesc.StructureByteStride = 0;

#include "DirectXManager.h"

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::string error;

		D3D11_SDK_VERSION,

	ConstantMatrixBuffer cmb;

	txDesc.Width = rect.Width();

				// access to vertex



	m_pIndexBuffer = NULL;

	//Clean up our objects and quit

	D3D_FEATURE_LEVEL level;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

	tinyobj::attrib_t attrib;

	if (m_pImmediateContext)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pSampler = NULL;

	pBackBuffer->Release();

			{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))



		&m_pSwapChain,

		return hr;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

			{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

{

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	dsDesc.Texture2D.MipSlice = 0;

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include "DirectXManager.h"



	m_pDevice = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		return hr;

	//Create Index

	CRect                rect;





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				break;



	if (FAILED(hr))





	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//深度ステンシルバッファ作成



	WORD* pIList = new WORD[icount];



#ifdef _DEBUG

	delete[] pIList;

	txDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

		if (!ret)

#define TINYOBJLOADER_IMPLEMENTATION

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

 * Lesson 1: Hello World!

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_VertexCount = 0;

		&materials,

	SAFE_RELEASE(m_pTexture);

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMFLOAT4X4 world;

	return 0;

	WORD* pIList = new WORD[icount];

	//テクスチャ読み込み

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	return 0;

		else if (e.type == SDL_KEYDOWN)



int main(int, char**)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	SAFE_RELEASE(m_pTextureView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

struct ConstantLight {

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	tinyobj::attrib_t attrib;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include <iostream>

	scDesc.OutputWindow = hwnd;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



};

		1,



	m_IndexCount = icount;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			index_offset += num_vertices;

	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);

	LoadObj(vertexlist, indexList);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

	delete[] pVList;

	SDL_DestroyRenderer(ren);

			switch (e.key.keysym.sym)

#include "DirectXManager.h"

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	delete[] pIList;

	//頂点シェーダー生成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	scDesc.Windowed = TRUE;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);

				tinyobj::real_t tx =

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			{

	SDL_Quit();

	SAFE_RELEASE(m_pImmediateContext);





	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pIndexBuffer = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReader reader;

	vector<WORD> indexList;

	::GetClientRect(hwnd, &rect);

	tinyobj::ObjReaderConfig reader_config;

	{

	SDL_Quit();

	{

{



	{

	//Vertex* pVList = new Vertex[vcount];

/*







	//First we need to start up SDL, and make sure it went ok

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

				break;

	std::vector<tinyobj::shape_t> shapes;

	m_pInputLayout = NULL;



	ibDesc.MiscFlags = 0;

			{

			case SDLK_RIGHT:

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				break;

	delete[] pIList;

	}

	delete[] pIList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

			}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	// Loop over shapes

	return 0;

	D3D11_SAMPLER_DESC smpDesc;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return hr;

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

		delete[] pIList;



	delete[] pVList;

	txDesc.MipLevels = 1;

	auto& attrib = reader.GetAttrib();

		return hr;

	cbDesc.CPUAccessFlags = 0;



	}



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pPixelShader);

	WORD* pIList = new WORD[icount];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//深度ステンシルバッファ作成



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	/*

	if (m_pImmediateContext)

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	cbDesc.MiscFlags = 0;



	m_pImmediateContext = NULL;

	cbDesc.StructureByteStride = 0;



	//Create Index

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_Delay(1000);



	auto& attrib = reader.GetAttrib();

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ID3D11Texture2D* pBackBuffer;

	m_pMatrixBuffer = NULL;

	scDesc.OutputWindow = hwnd;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	// Loop over shapes

	delete[] pVList;

		return hr;

	for (int j = 0; j < icount; j++)

		else if (e.type == SDL_KEYDOWN)

	{

void CD3DTest::Release()

	txDesc.Usage = D3D11_USAGE_DEFAULT;







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_FreeSurface(suf);

			case SDLK_LEFT:



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pVertexShader);



	float    farZ = 100.0f;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			int num_vertices = shape.mesh.num_face_vertices[f];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pImmediateContext);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	LoadObj(vertexlist, indexList);

	m_IndexCount = 0;

	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

		{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		m_pImmediateContext->ClearState();

			{

	ConstantMatrixBuffer cmb;

	/*

	std::vector<tinyobj::shape_t> shapes;

			case SDLK_UP:

	// Loop over shapes

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

void CD3DTest::Release()

		}

	SAFE_RELEASE(m_pTexture);

	std::string imagePath = "hello.bmp";

		return hr;

	CRect                rect;

	if (FAILED(hr))

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.Height = rect.Height();

			for (size_t v = 0; v < num_vertices; v++)



	SDL_Event e;

				// access to vertex



	txDesc.SampleDesc.Count = 1;

		return hr;

		&scDesc,

	ibDesc.MiscFlags = 0;

		delete[] pIList;

{

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		delete[] pIList;

};

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

		NULL,

int main(int, char**)



		&level,

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,



			{

#include <SDL.h>

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ConstantLightBuffer clb;

	//ピクセルシェーダー生成

	scDesc.BufferDesc.Width = rect.Width();

		exit(1);





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



struct ConstantMaterial {

		pIList[j] = indexList[j];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <SDL.h>

				break;

#define TINYOBJLOADER_IMPLEMENTATION

		R"(cube.obj)");



	ibDesc.MiscFlags = 0;



			}

	}

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	XMFLOAT4 ambient;           //環境(r,g,b)

	{

			case SDLK_LEFT:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		D3D11_SDK_VERSION,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);

		flags,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

struct ConstantLight {



	//定数バッファ作成

	m_pSampler = NULL;

		pIList[j] = indexList[j];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		size_t index_offset = 0;

}



		return hr;

	{

	ConstantLightBuffer clb;

struct ConstantLight {

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.SampleDesc.Count = 1;



	//vector<WORD> index_t;

		SDL_RenderPresent(ren);



	if (FAILED(hr))

			case SDLK_DOWN:

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	HRESULT              hr;

				vertex.push_back(vertex_tmp);

	ID3D11Texture2D* pBackBuffer;

		size_t index_offset = 0;  // インデントのオフセット

int main(int, char**)

	m_VertexCount = vcount;

	if (FAILED(hr))

		return hr;

	m_pIndexBuffer = NULL;



	irData.pSysMem = &pIList[0];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderPresent(ren);



}
CD3DTest::CD3DTest()

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		SDL_RenderCopy(ren, tex, NULL, NULL);

};

		pVList[i] = vertexlist[i];

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.eyePos, eye);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	float    nearZ = 0.1f;



	}

	//Create Index

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		m_pImmediateContext->ClearState();





	::GetClientRect(hwnd, &rect);



	if (FAILED(hr))

struct ConstantLightBuffer {

	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pRenderTargetView = NULL;

	m_Viewport.MinDepth = 0.0f;

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pSwapChain = NULL;

		&m_pSwapChain,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4         eyePos;   //視点座標

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	delete[] pVList;



	}

	SAFE_RELEASE(m_pVertexShader);

				vertex.push_back(vertex_tmp);

		return hr;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	WORD* pIList = new WORD[icount];

		}



	irData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	D3D11_SUBRESOURCE_DATA vrData;

	ID3D11Texture2D* pBackBuffer;



	ibDesc.StructureByteStride = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&level,

	int     vcount = vertexlist.size();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_Delay(1000);

		SDL_RenderClear(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//First we need to start up SDL, and make sure it went ok





	SAFE_RELEASE(m_pMatrixBuffer);



		}

		//User requests quit

	auto& shapes = reader.GetShapes();



			break;





			break;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//頂点シェーダー生成

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4 pos;               //座標(x,y,z)



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//Vertex* pVList = new Vertex[vcount];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	float    fov = XMConvertToRadians(20.0f);

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

CD3DTest::CD3DTest()

	m_Viewport.MinDepth = 0.0f;

	ibDesc.MiscFlags = 0;

	//頂点レイアウト作成

	XMFLOAT4X4 view;

	//頂点シェーダー生成

			index_offset += fv;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4X4 view;



		return hr;

	SAFE_RELEASE(m_pVertexShader);

CD3DTest::~CD3DTest()

{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_BUFFER_DESC ibDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//ビューポート設定

		SDL_Delay(1000);

	D3D11_SUBRESOURCE_DATA vrData;

		exit(1);

			{

	delete[] pIList;

		delete[] pVList;

	txDesc.ArraySize = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.Height = rect.Height();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



};

 */

	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

		{

		KEY_PRESS_SURFACE_TOTAL

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				break;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//ビューポート設定

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	for (int i = 0; i < vcount; i++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			{

	ibDesc.MiscFlags = 0;

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

HRESULT CD3DTest::Create(HWND hwnd)

	{

			//Select surfaces based on key press

	if (!reader.Warning().empty())

HRESULT CD3DTest::Create(HWND hwnd)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSwapChain->Present(0, 0);

void CD3DTest::Render()

	for (int i = 0; i < vcount; i++)

	m_pPixelShader = NULL;

		return hr;

	m_pTexture = NULL;

#endif



	}

	float    fov = XMConvertToRadians(20.0f);

	SDL_FreeSurface(bmp);

	UINT offsets = 0;



	dsDesc.Format = txDesc.Format;

	delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	SDL_DestroyWindow(win);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_DEFAULT,



	irData.pSysMem = &pIList[0];



	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pSwapChain,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))



	std::vector<tinyobj::shape_t> shapes;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext = NULL;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D_FEATURE_LEVEL level;

		SDL_RenderPresent(ren);

	//深度ステンシルバッファ作成

		return hr;

	SAFE_RELEASE(m_pSwapChain);



}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	::ZeroMemory(&scDesc, sizeof(scDesc));

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_LEFT:

	if (FAILED(hr))

		exit(1);

		KEY_PRESS_SURFACE_UP,



	}

			case SDLK_RIGHT:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (m_pImmediateContext)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pMatrixBuffer = NULL;

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_LEFT:

		return hr;

	SAFE_RELEASE(m_pSampler);







	CRect                rect;

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	irData.SysMemPitch = 0;





	//頂点バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext = NULL;

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	auto& attrib = reader.GetAttrib();

			exit(1);

		NULL,

			case SDLK_DOWN:



	vrData.SysMemSlicePitch = 0;

				// access to vertex

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	vrData.pSysMem = &pVList[0];

		&attrib,



	{

		&m_pImmediateContext);

				indexlist.push_back(idx.vertex_index);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		exit(1);

	//テクスチャ読み込み

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_TOTAL

			{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//インデックスバッファ作成

	dsDesc.Texture2D.MipSlice = 0;



	}





	SDL_FreeSurface(suf);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pTexture);

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		NULL,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



HRESULT CD3DTest::Create(HWND hwnd)



				tinyobj::real_t tx =

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	XMFLOAT4X4 projection;

		&m_pDevice,

int main(int, char**)

		}



}

#ifdef _DEBUG

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		size_t index_offset = 0;





	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Event e;

	txDesc.CPUAccessFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_DEFAULT,





	}

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		if (e.type == SDL_QUIT)

	SDL_Quit();

	{

		&materials,



	ZeroMemory(&txDesc, sizeof(txDesc));

		&attrib,



				indexlist.push_back(index);



	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pDevice);



		D3D_DRIVER_TYPE_HARDWARE,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		pVList[i] = vertexlist[i];





		size_t index_offset = 0;  // インデントのオフセット



void CD3DTest::Release()

		size_t index_offset = 0;

	m_Viewport.TopLeftY = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&m_pSwapChain,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

int main(int, char**)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				indexlist.push_back(idx.vertex_index);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

		//User requests quit

	m_pSampler = NULL;

	{



	m_pInputLayout = NULL;

		m_pImmediateContext->ClearState();

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))



#include "DirectXManager.h"



	txDesc.SampleDesc.Count = 1;

	std::string imagePath = "hello.bmp";

	}

	scDesc.SampleDesc.Count = 1;





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			index_offset += num_vertices;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <iostream>

		D3D11_SDK_VERSION,

	cbDesc.MiscFlags = 0;

			case SDLK_LEFT:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);







	UINT strides = sizeof(Vertex);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	SDL_Quit();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			index_offset += fv;



using std::cout; using std::endl;

	{

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		pVList[i] = vertexlist[i];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantLightBuffer clb;

	for (int j = 0; j < icount; j++)

				WORD index = idx.vertex_index;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_IndexCount = 0;

				// access to vertex

		&level,

	{

	for (int i = 0; i < vcount; i++)

	delete[] pIList;

				// access to vertex





	for (int j = 0; j < icount; j++)

int main(int, char**)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			{

	SDL_DestroyTexture(tex);

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

		if (!ret)

	//Key press surfaces constants

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

	cbDesc.CPUAccessFlags = 0;

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		delete[] pVList;

	return hr;

	SAFE_RELEASE(m_pRenderTargetView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.ambient, lightAmbient);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantMatrixBuffer {

{



	//Create Index



		SDL_RenderClear(ren);

	irData.pSysMem = &pIList[0];

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_IndexCount = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



		cout << "SDL_INIT_ERROR" << endl;

	//Key press surfaces constants

	//インデックスバッファ作成

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		R"(cube.obj)");

	if (FAILED(hr))

		// Loop over faces(polygon)

	m_pDepthStencilView = NULL;

	for (int j = 0; j < icount; j++)



 * Lesson 1: Hello World!

			// Loop over vertices in the face.

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点バッファ作成

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		pLevels,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			default:

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}

		// Loop over faces(polygon)

	XMFLOAT4X4 view;

	std::string error;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		size_t index_offset = 0;  // インデントのオフセット

	reader_config.mtl_search_path = "./"; // Path to material files

		{

	std::string error;

	bool ret = tinyobj::LoadObj(

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	SAFE_RELEASE(m_pSwapChain);

		SDL_RenderPresent(ren);

		return hr;

		&scDesc,

	ConstantLight    pntLight; //点光源

		}

	ConstantMaterial material; //物体の質感

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

};



	scDesc.BufferDesc.Height = rect.Height();

	SDL_FreeSurface(bmp);

void CD3DTest::Render()

	}

	// Loop over shapes

	{

	m_pVertexShader = NULL;

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

		pIList[j] = indexList[j];



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	}



	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_RIGHT,



		SDL_Delay(1000);

	for (const auto& shape : shapes)

{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{



	{

	SDL_DestroyWindow(win);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	{

		size_t index_offset = 0;  // インデントのオフセット

	pBackBuffer->Release();



	if (FAILED(hr))

	//Clean up our objects and quit

	{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	WORD   icount = indexList.size();

		&materials,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		1,

	{



	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_Viewport.MinDepth = 0.0f;

	}*/

		{

	}

{





void CD3DTest::Render()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_VertexCount = 0;

	SAFE_RELEASE(m_pDevice);

		delete[] pVList;

		return hr;

	for (int i = 0; i < 3; i++)

		return hr;

	vbDesc.CPUAccessFlags = 0;

	scDesc.BufferCount = 1;

	vbDesc.MiscFlags = 0;

		&attrib,

	SDL_DestroyWindow(win);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

int main(int, char**)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.MipLevels = 1;





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		R"(cube.obj)");

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}*/



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;







	m_pDepthStencilView = NULL;



	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pPixelShader);

	//Clean up our objects and quit

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Event e;

				break;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

using std::cout; using std::endl;

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

		&shapes,

	if (FAILED(hr))



	{

			int num_vertices = shape.mesh.num_face_vertices[f];

int main(int, char**)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//テクスチャ読み込み



	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;

	float    farZ = 100.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		}

	ibDesc.CPUAccessFlags = 0;

		&level,

	if (m_pImmediateContext)

	ID3D11Texture2D* pBackBuffer;

		{

	m_pSampler = NULL;



	//Key press surfaces constants

	ibDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pMatrixBuffer = NULL;



	vbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			case SDLK_DOWN:

	cbDesc.MiscFlags = 0;

	m_VertexCount = 0;

	std::string imagePath = "hello.bmp";

}
		return hr;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	scDesc.BufferCount = 1;

		return hr;

	m_IndexCount = 0;

};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vector<WORD> indexList;



	m_Angle += XMConvertToRadians(1.0f);

	CRect                rect;

		&error,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	if (FAILED(hr))



	ConstantMatrixBuffer cmb;

		1,



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_DestroyWindow(win);

	//ビューポート設定



	//vector<Vertex> vertex_t;

	m_pMatrixBuffer = NULL;

}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	cbDesc.MiscFlags = 0;

			//Select surfaces based on key press

		SDL_RenderClear(ren);

			{

	txDesc.MipLevels = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				// access to vertex

	m_pLightBuffer = NULL;

int main(int, char**)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (!reader.Warning().empty())



	dsDesc.Texture2D.MipSlice = 0;

			{

		return 1;



	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{



		if (!ret)



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		D3D11_SDK_VERSION,



	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderPresent(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		exit(1);



			int num_vertices = shape.mesh.num_face_vertices[f];

			//Select surfaces based on key press

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pTexture);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;



	{

		}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			{



	vbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;

	txDesc.ArraySize = 1;

#include <iostream>



	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pRenderTargetView);

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(idx.vertex_index);

	{

	m_pIndexBuffer = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

#include <iostream>

	if (FAILED(hr))

int main(int, char**)

	//頂点レイアウト作成

	D3D_FEATURE_LEVEL level;

		size_t index_offset = 0;



	m_pSampler = NULL;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		cout << "SDL_INIT_ERROR" << endl;



	cbDesc.MiscFlags = 0;



	Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);

	SDL_FreeSurface(bmp);

	m_pTexture = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}*/



			}

	float    fov = XMConvertToRadians(20.0f);

			//Select surfaces based on key press

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pDevice = NULL;

	//First we need to start up SDL, and make sure it went ok

	float    farZ = 100.0f;

#endif

	UINT offsets = 0;

		delete[] pIList;

	cbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ConstantLight    pntLight; //点光源

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Height = rect.Height();

	SDL_DestroyTexture(tex);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



			case SDLK_LEFT:

		KEY_PRESS_SURFACE_RIGHT,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.MiscFlags = 0;

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_BUFFER_DESC cbDesc;

	for (int i = 0; i < vcount; i++)

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_pVertexBuffer = NULL;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

struct ConstantMatrixBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



#ifdef _DEBUG

				break;

	cbDesc.MiscFlags = 0;

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		exit(1);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyTexture(tex);

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	//頂点レイアウト作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.CPUAccessFlags = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

int SEGMENT = 36;



	m_pDepthStencilTexture = NULL;





	/*

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_FreeSurface(suf);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

				vertex.push_back(vertex_tmp);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	WORD* pIList = new WORD[icount];

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	delete[] pVList;



	m_pIndexBuffer = NULL;



			}

	if (FAILED(hr))





	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	//定数バッファ作成

		else if (e.type == SDL_KEYDOWN)



	auto& attrib = reader.GetAttrib();



		return hr;

	}

{

	ID3D11Texture2D* pBackBuffer;

	//頂点バッファ作成

		{

				tinyobj::real_t tx =

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	m_pSwapChain->Present(0, 0);

		&error,

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	cbDesc.StructureByteStride = 0;

	};

	if (FAILED(hr))

	{

	{



	m_IndexCount = 0;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	return;

				break;

		KEY_PRESS_SURFACE_LEFT,





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			index_offset += num_vertices;

	}

	D3D11_SAMPLER_DESC smpDesc;

	m_pVertexBuffer = NULL;

		D3D11_SDK_VERSION,



	if (FAILED(hr))







				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.eyePos, eye);

};

}

			}

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantMaterial material; //物体の質感

	m_pMatrixBuffer = NULL;

			for (size_t v = 0; v < fv; v++)



};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.StructureByteStride = 0;

		flags,

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))



	m_pInputLayout = NULL;

	//定数バッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_Viewport.TopLeftY = 0;

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC ibDesc;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

struct ConstantMatrixBuffer {

	auto& materials = reader.GetMaterials();

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pLightBuffer);

};

		return hr;

	m_IndexCount = icount;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_pRenderTargetView = NULL;



			}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	txDesc.Width = rect.Width();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return 1;

	}

	}





	//ピクセルシェーダー生成

		return hr;

	ibDesc.StructureByteStride = 0;

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_DestroyRenderer(ren);

				indexlist.push_back(idx.vertex_index);

	txDesc.Height = rect.Height();

	SDL_FreeSurface(bmp);

				break;

	D3D_FEATURE_LEVEL level;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.MiscFlags = 0;





	//頂点シェーダー生成



	scDesc.SampleDesc.Count = 1;

void CD3DTest::Release()

	cbDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点バッファ作成



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

HRESULT CD3DTest::Create(HWND hwnd)



{

				vertex.push_back(vertex_tmp);

struct ConstantLight {

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

CD3DTest::CD3DTest()

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

	SAFE_RELEASE(m_pInputLayout);

		{



	//Create Index



	SDL_Quit();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vrData.pSysMem = &pVList[0];

		return hr;

int main(int, char**)

	if (FAILED(hr))

		return hr;



		if (e.type == SDL_QUIT)

	XMFLOAT4 specular;          //反射(r,g,b)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pDepthStencilTexture);

	Vertex* pVList = new Vertex[vcount];

				break;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))



#include <iostream>

	cbDesc.CPUAccessFlags = 0;

		{

		&m_pDevice,

	delete[] pIList;

	{

		return hr;

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	}



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	float    farZ = 100.0f;

	{

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		exit(1);

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.MipLevels = 1;

		exit(1);

	vrData.SysMemSlicePitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





		SDL_RenderPresent(ren);

	//vector<Vertex> vertex_t;

		if (!reader.Error().empty())

	std::string inputfile = "test.obj";

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	auto& materials = reader.GetMaterials();

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    nearZ = 0.1f;

		//User presses a key

struct ConstantMatrixBuffer {

	{



		{

	cbDesc.MiscFlags = 0;

		flags,

		m_pImmediateContext->ClearState();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_Angle += XMConvertToRadians(1.0f);

	for (int i = 0; i < vcount; i++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pTextureView);

		&m_pImmediateContext);

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

		&m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	{



		if (!reader.Error().empty())



		SDL_Delay(1000);

			int num_vertices = shape.mesh.num_face_vertices[f];

	float    nearZ = 0.1f;

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pInputLayout);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_DestroyWindow(win);

	return hr;

		}

	}

	SDL_Event e;

	if (FAILED(hr))



	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pDepthStencilTexture = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	reader_config.mtl_search_path = "./"; // Path to material files

	//Clean up our objects and quit

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//ピクセルシェーダー生成

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		flags,

			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.StructureByteStride = 0;

	//ピクセルシェーダー生成

{

		delete[] pVList;

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);



				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

	}

		return hr;

			{

	SAFE_RELEASE(m_pInputLayout);

		size_t index_offset = 0;

	tinyobj::ObjReader reader;

	return 0;



	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		pVList[i] = vertexlist[i];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.ArraySize = 1;

#include "DirectXManager.h"



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#define TINYOBJLOADER_IMPLEMENTATION

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	Release();

	XMFLOAT4X4 projection;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				vertex.push_back(vertex_tmp);

		exit(1);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pLightBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pTexture = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)





	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	return;

{



	//Key press surfaces constants

	SDL_DestroyRenderer(ren);

	//Create Index

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.SampleDesc.Quality = 0;

		return hr;



		return hr;

	{

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void CD3DTest::Release()

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		}

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//頂点バッファ作成

	cbDesc.MiscFlags = 0;



	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	m_pTextureView = NULL;

		pLevels,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	irData.SysMemPitch = 0;

#include <iostream>



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	for (const auto& shape : shapes)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	Release();

	XMFLOAT4X4 view;



				tinyobj::real_t tx =

	return 0;

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t tx =

				vertex.push_back(vertex_tmp);

	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_LEFT,



		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Quit();

	SAFE_RELEASE(m_pTexture);

		R"(cube.obj)");



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		SDL_RenderPresent(ren);

	cbDesc.MiscFlags = 0;

	txDesc.MiscFlags = 0;



	irData.pSysMem = &pIList[0];



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	m_pSampler = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	float    nearZ = 0.1f;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

void CD3DTest::Release()

		SDL_RenderClear(ren);



		pLevels,

		delete[] pIList;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	float    fov = XMConvertToRadians(20.0f);

	auto& attrib = reader.GetAttrib();

	delete[] pIList;



	//頂点バッファ作成

			exit(1);



		&materials,





			}

				indexlist.push_back(idx.vertex_index);

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		KEY_PRESS_SURFACE_RIGHT,

	if (!reader.ParseFromFile(inputfile, reader_config))



	{

				WORD index = idx.vertex_index;





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{



	txDesc.SampleDesc.Quality = 0;

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};



	SAFE_RELEASE(m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	delete[] pIList;

				break;

	if (m_pImmediateContext)

		return hr;





	}



using std::cout; using std::endl;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		pLevels,



	pBackBuffer->Release();



		pLevels,

	m_VertexCount = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_Delay(1000);



	scDesc.BufferDesc.Height = rect.Height();



				break;

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	WORD* pIList = new WORD[icount];

		{

	std::string error;

		pVList[i] = vertexlist[i];

		delete[] pVList;

	cbDesc.StructureByteStride = 0;

	m_pRenderTargetView = NULL;



	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

	irData.SysMemSlicePitch = 0;

	{

	txDesc.Width = rect.Width();

	dsDesc.Format = txDesc.Format;

	ibDesc.CPUAccessFlags = 0;

{

	if (!error.empty())

				indexlist.push_back(index);



};

int main(int, char**)

	m_pTextureView = NULL;

		// Loop over faces(polygon)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		{

{

	{

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_RIGHT:



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		1,



	// Loop over shapes

	ID3D11Texture2D* pBackBuffer;

	//インデックスバッファ作成



	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

CD3DTest::CD3DTest()

		&level,







				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

struct ConstantMaterial {

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	SDL_DestroyWindow(win);



	m_pImmediateContext = NULL;

		}

		return hr;

	m_pImmediateContext = NULL;

	m_pSampler = NULL;

		SDL_RenderPresent(ren);

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//頂点バッファ作成

	std::vector<tinyobj::material_t> materials;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	::GetClientRect(hwnd, &rect);

		return hr;

void CD3DTest::Release()

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				break;

		flags,

	SDL_DestroyWindow(win);

	scDesc.BufferCount = 1;



	delete[] pVList;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

struct ConstantLight {

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

}

struct ConstantMaterial {



		R"(cube.obj)");

				// access to vertex

	cbDesc.StructureByteStride = 0;

	}



	auto& shapes = reader.GetShapes();





	SAFE_RELEASE(m_pIndexBuffer);

	m_Viewport.TopLeftX = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

};

	XMFLOAT4 specular;          //反射(r,g,b)

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	LoadObj(vertexlist, indexList);



	m_pTexture = NULL;

	cbDesc.CPUAccessFlags = 0;

	{

		}

	UINT offsets = 0;

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_VertexCount = 0;

	XMFLOAT4         eyePos;   //視点座標



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Width = rect.Width();

	SDL_DestroyWindow(win);



			for (size_t v = 0; v < num_vertices; v++)

	dsDesc.Format = txDesc.Format;

	//ビューポート設定

	txDesc.SampleDesc.Quality = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	vbDesc.MiscFlags = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());







	vector<WORD> indexList;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

		{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		NULL,

	}

	vrData.SysMemSlicePitch = 0;

int main(int, char**)

		// Loop over faces(polygon)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

struct ConstantMatrixBuffer {

	m_VertexCount = vcount;



		{



				vertex.push_back(vertex_tmp);

};

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

}

	m_pDevice = NULL;

	{





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



			switch (e.key.keysym.sym)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pIList;

	ibDesc.CPUAccessFlags = 0;





	D3D11_SAMPLER_DESC smpDesc;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int i = 0; i < vcount; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (const auto& shape : shapes)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	irData.SysMemPitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}



int main(int, char**)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

int main(int, char**)

	SAFE_RELEASE(m_pSwapChain);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_SAMPLER_DESC smpDesc;

	delete[] pIList;

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	//ピクセルシェーダー生成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ConstantLightBuffer clb;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&error,

		delete[] pIList;

	SAFE_RELEASE(m_pSampler);

			{





	//ピクセルシェーダー生成

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pPixelShader);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.MiscFlags = 0;

/*

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <SDL.h>



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	{



	//定数バッファ作成

	m_pLightBuffer = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_BUFFER_DESC cbDesc;

	}



		SDL_Delay(1000);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	};

CD3DTest::CD3DTest()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

int SEGMENT = 36;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.CPUAccessFlags = 0;

}

	//深度ステンシルバッファ作成

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





		size_t index_offset = 0;

}
	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

{

	HRESULT              hr;





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Event e;

				vertex.push_back(vertex_tmp);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				WORD index = idx.vertex_index;

	vrData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	scDesc.Windowed = TRUE;

		}

		if (!reader.Error().empty())



	vrData.SysMemPitch = 0;

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&attrib,



		if (!ret)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pVertexBuffer = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&shapes,

		SDL_RenderPresent(ren);

	Release();

		//User requests quit

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	if (!error.empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_FreeSurface(bmp);

	//インデックスバッファ作成

	scDesc.BufferDesc.Height = rect.Height();

		delete[] pVList;

};

	//vector<Vertex> vertex_t;

	scDesc.Windowed = TRUE;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMFLOAT4X4 world;

	}



		&scDesc,





	int     vcount = vertexlist.size();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

#include <iostream>

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	WORD   icount = indexList.size();



			break;

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;





	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.SampleDesc.Quality = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_VertexCount = vcount;

		SDL_RenderCopy(ren, tex, NULL, NULL);







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&m_pSwapChain,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		if (!reader.Error().empty())

	m_pDepthStencilTexture = NULL;

	delete[] pVList;

	}



		return hr;

				break;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.MinDepth = 0.0f;

			exit(1);

	for (const auto& shape : shapes)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pDevice);

	ConstantMatrixBuffer cmb;

	/*

{

	{

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

}



	//vector<Vertex> vertex_t;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

int SEGMENT = 36;

	for (size_t s = 0; s < shapes.size(); s++)

 * Lesson 1: Hello World!

	D3D11_SAMPLER_DESC smpDesc;





		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				break;

	m_pRenderTargetView = NULL;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	UINT offsets = 0;

	vrData.pSysMem = &pVList[0];

	cbDesc.CPUAccessFlags = 0;

	return 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);



		cout << "SDL_INIT_ERROR" << endl;

	return;

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyTexture(tex);

		{

				tinyobj::real_t tx =







		&m_pSwapChain,

	UINT offsets = 0;

	LoadObj(vertexlist, indexList);

	irData.pSysMem = &pIList[0];



	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ibDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	int     vcount = vertexlist.size();

void CD3DTest::Render()

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		&materials,



		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

CD3DTest::CD3DTest()

}

CD3DTest::CD3DTest()

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

		KEY_PRESS_SURFACE_DOWN,

	for (const auto& shape : shapes)

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

		&m_pImmediateContext);

	SDL_FreeSurface(bmp);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pTexture = NULL;







	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

		return 1;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

			index_offset += fv;

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット



	txDesc.ArraySize = 1;

	tinyobj::ObjReaderConfig reader_config;

struct ConstantMaterial {



	ZeroMemory(&txDesc, sizeof(txDesc));



		NULL,

{

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_Viewport.TopLeftX = 0;



	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	for (int i = 0; i < 3; i++)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vrData.SysMemPitch = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		delete[] pVList;

	SDL_DestroyRenderer(ren);



}

#include <SDL.h>



		pIList[j] = indexList[j];

		flags,





	txDesc.MipLevels = 1;

	pBackBuffer->Release();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	enum KeyPressSurfaces

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//定数バッファ作成



		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyRenderer(ren);

	{

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemPitch = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	return 0;

	irData.SysMemPitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty =

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t tx =



	dsDesc.Format = txDesc.Format;

	m_pPixelShader = NULL;

{

	SAFE_RELEASE(m_pTexture);

	vbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pSwapChain);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_FreeSurface(bmp);



	//頂点シェーダー生成



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	delete[] pVList;

		return hr;

				indexlist.push_back(index);

		else if (e.type == SDL_KEYDOWN)

	}

#endif

	vrData.pSysMem = &pVList[0];

	for (int i = 0; i < vcount; i++)

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	std::string error;

		KEY_PRESS_SURFACE_LEFT,

			case SDLK_LEFT:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		&m_pImmediateContext);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				WORD index = idx.vertex_index;

	{

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);





		return hr;

	D3D11_BUFFER_DESC vbDesc;



#include "DirectXManager.h"

			}

	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	scDesc.BufferDesc.Height = rect.Height();

	txDesc.CPUAccessFlags = 0;

		{



	m_pIndexBuffer = NULL;



		&materials,

	}



	//vector<WORD> index_t;

}



	txDesc.SampleDesc.Quality = 0;

	std::string inputfile = "test.obj";

			{



CD3DTest::~CD3DTest()



	Release();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         eyePos;   //視点座標

	//Create Index

		D3D_DRIVER_TYPE_HARDWARE,

	//頂点シェーダー生成



			}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





	m_pSwapChain = NULL;

	txDesc.ArraySize = 1;



		{

	XMFLOAT4         eyePos;   //視点座標

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return 1;



		return hr;

	//頂点シェーダー生成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	dsDesc.Texture2D.MipSlice = 0;

	//頂点レイアウト作成

	m_pInputLayout = NULL;

	txDesc.ArraySize = 1;

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			//Select surfaces based on key press

}

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



}
	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				break;



		SDL_RenderPresent(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



#include <SDL.h>

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

int main(int, char**)

		return hr;

	pBackBuffer->Release();



	{

	SAFE_RELEASE(m_pInputLayout);

	D3D_FEATURE_LEVEL level;

	SDL_DestroyWindow(win);

	//定数バッファ作成

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		{

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	m_VertexCount = 0;

	std::vector<tinyobj::material_t> materials;

	dsDesc.Texture2D.MipSlice = 0;



			case SDLK_UP:

			{

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}
		delete[] pIList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		return hr;







			{

		return hr;

			index_offset += fv;

	{

};

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				indexlist.push_back(index);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//テクスチャ読み込み

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	//Vertex* pVList = new Vertex[vcount];



}



	D3D11_TEXTURE2D_DESC txDesc;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;



}

		&scDesc,

		return hr;

	SAFE_RELEASE(m_pInputLayout);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//ビューポート設定

{

};

#include <iostream>

	if (!reader.Warning().empty())

	float    farZ = 100.0f;

		SDL_RenderPresent(ren);

	float    nearZ = 0.1f;

	{

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_FreeSurface(bmp);

	irData.pSysMem = &pIList[0];

		}



	vector<Vertex> vertexlist;

CD3DTest::CD3DTest()

	m_pTextureView = NULL;

			exit(1);

		&materials,

	if (FAILED(hr))

int main(int, char**)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_SUBRESOURCE_DATA vrData;

				indexlist.push_back(idx.vertex_index);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&materials,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

{



CD3DTest::~CD3DTest()



	if (!reader.Warning().empty())

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.BufferCount = 1;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

		delete[] pVList;

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.CPUAccessFlags = 0;

		return hr;

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	reader_config.mtl_search_path = "./"; // Path to material files

int main(int, char**)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.CPUAccessFlags = 0;



	}

	m_pTextureView = NULL;

		if (e.type == SDL_QUIT)

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::ObjReaderConfig reader_config;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>

		pVList[i] = vertexlist[i];



}

		SDL_Delay(1000);

	{

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ID3D11Texture2D* pBackBuffer;



	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	txDesc.SampleDesc.Count = 1;

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	WORD* pIList = new WORD[icount];

	m_Viewport.TopLeftX = 0;

	UINT flags = 0;





			case SDLK_LEFT:



	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_FreeSurface(suf);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t tx =

	D3D11_SUBRESOURCE_DATA vrData;

{

	}



	SAFE_RELEASE(m_pVertexShader);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDepthStencilTexture = NULL;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_VertexCount = 0;

using std::cout; using std::endl;

	scDesc.Windowed = TRUE;

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pSampler);

/*

	//深度ステンシルバッファ作成

	SDL_FreeSurface(suf);



	if (FAILED(hr))

	irData.SysMemPitch = 0;

	{

		SDL_RenderClear(ren);

	delete[] pIList;



				// access to vertex

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	Vertex* pVList = new Vertex[vcount];

	ID3D11Texture2D* pBackBuffer;

	m_pSwapChain->Present(0, 0);



	//テクスチャ読み込み

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//ビューポート設定

		{

		&level,

	vrData.pSysMem = &pVList[0];

	//ビューポート設定

			case SDLK_DOWN:

	txDesc.MipLevels = 1;

		}

	if (FAILED(hr))

			index_offset += num_vertices;

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

		}

	//頂点シェーダー生成



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return 0;

	m_pRenderTargetView = NULL;

	m_IndexCount = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			index_offset += num_vertices;



		return hr;

	delete[] pIList;

		else if (e.type == SDL_KEYDOWN)





	txDesc.Height = rect.Height();

	irData.SysMemPitch = 0;

	m_pDevice = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//頂点シェーダー生成

int main(int, char**)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//vector<Vertex> vertex_t;

		return hr;

	SDL_FreeSurface(suf);

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		D3D_DRIVER_TYPE_HARDWARE,

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pSampler = NULL;

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

CD3DTest::CD3DTest()





{

	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.SampleDesc.Count = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				indexlist.push_back(idx.vertex_index);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pVertexShader = NULL;

	{

	for (int i = 0; i < 3; i++)

	m_pVertexBuffer = NULL;

		SDL_RenderPresent(ren);

	m_IndexCount = 0;

	vbDesc.CPUAccessFlags = 0;

	//頂点シェーダー生成

	//頂点レイアウト作成

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.BufferDesc.Width = rect.Width();

		m_pImmediateContext->ClearState();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			switch (e.key.keysym.sym)

	vrData.pSysMem = &pVList[0];



	//ピクセルシェーダー生成



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	return;

		KEY_PRESS_SURFACE_DOWN,

		m_pImmediateContext->ClearState();

int main(int, char**)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	irData.SysMemSlicePitch = 0;

	{

	XMFLOAT4 pos;               //座標(x,y,z)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ID3D11Texture2D* pBackBuffer;

	enum KeyPressSurfaces



#include <SDL.h>

	m_pSampler = NULL;

		pLevels,



	SAFE_RELEASE(m_pDepthStencilTexture);

			break;

	m_pVertexBuffer = NULL;

				// access to vertex



		cout << "SDL_INIT_ERROR" << endl;

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				vertex.push_back(vertex_tmp);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.StructureByteStride = 0;

		&error,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

	int     vcount = vertexlist.size();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT offsets = 0;

	m_pTextureView = NULL;

	UINT flags = 0;

	cbDesc.StructureByteStride = 0;

	}

	D3D11_BUFFER_DESC ibDesc;

	vbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	enum KeyPressSurfaces

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			// Loop over vertices in the face.

	ibDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		else if (e.type == SDL_KEYDOWN)



		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_DOWN,

		return hr;





		NULL,





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&m_pSwapChain,

	D3D11_BUFFER_DESC cbDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点シェーダー生成

	std::vector<tinyobj::shape_t> shapes;

	m_pRenderTargetView = NULL;

	if (m_pImmediateContext)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	m_pVertexShader = NULL;



	vrData.SysMemPitch = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pImmediateContext);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(bmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

			break;

}

	m_pMatrixBuffer = NULL;

	txDesc.MiscFlags = 0;

		&shapes,

	return 0;

	SAFE_RELEASE(m_pDepthStencilView);

	m_VertexCount = 0;

		{

	m_pVertexBuffer = NULL;

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			for (size_t v = 0; v < num_vertices; v++)

	}

	m_pVertexShader = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	irData.SysMemPitch = 0;

	float    nearZ = 0.1f;



	//頂点シェーダー生成

	SDL_FreeSurface(suf);

	//First we need to start up SDL, and make sure it went ok

	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		delete[] pIList;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (int i = 0; i < 3; i++)

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			}

		&m_pSwapChain,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pTexture = NULL;



	//Clean up our objects and quit



	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.MiscFlags = 0;



	vector<Vertex> vertexlist;

	delete[] pIList;



	txDesc.ArraySize = 1;

	CRect                rect;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	m_Viewport.Width = (FLOAT)rect.Width();

}
	m_pSampler = NULL;

	tinyobj::attrib_t attrib;

};



		return hr;



			switch (e.key.keysym.sym)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	scDesc.SampleDesc.Quality = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&m_pSwapChain,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			index_offset += fv;

		{

	WORD* pIList = new WORD[icount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);

		NULL,

	ConstantLightBuffer clb;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			case SDLK_RIGHT:



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	UINT strides = sizeof(Vertex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

{

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	float    nearZ = 0.1f;

	vrData.SysMemSlicePitch = 0;

	ID3D11Texture2D* pBackBuffer;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.CPUAccessFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		KEY_PRESS_SURFACE_DEFAULT,

	}



				// access to vertex

	ConstantLight    pntLight; //点光源

	/*

#include <SDL.h>

	for (const auto& shape : shapes)

}
	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.CPUAccessFlags = 0;

		{

	//vector<WORD> index_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	auto& shapes = reader.GetShapes();

		NULL,

	vbDesc.MiscFlags = 0;



	//First we need to start up SDL, and make sure it went ok

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

		delete[] pVList;

struct ConstantLightBuffer {

		SDL_Delay(1000);

/*

	Release();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		1,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

	m_pImmediateContext = NULL;

	return;

};

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.CPUAccessFlags = 0;

		&shapes,



	{

				break;

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vrData.pSysMem = &pVList[0];





struct ConstantLightBuffer {

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	WORD   icount = indexList.size();

	//頂点バッファ作成

	Release();

int main(int, char**)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



#ifdef _DEBUG

	//First we need to start up SDL, and make sure it went ok

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pSampler);

	vrData.pSysMem = &pVList[0];

		SDL_RenderPresent(ren);

		flags,

	std::string imagePath = "hello.bmp";

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pInputLayout);

	{

		cout << "SDL_INIT_ERROR" << endl;



	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	irData.SysMemPitch = 0;

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.MiscFlags = 0;

	ConstantMaterial material; //物体の質感

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

	std::string imagePath = "hello.bmp";

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyWindow(win);

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	int     vcount = vertexlist.size();

		D3D11_SDK_VERSION,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	dsDesc.Format = txDesc.Format;

	CRect                rect;

	for (const auto& shape : shapes)

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

			exit(1);

	SAFE_RELEASE(m_pDevice);

	std::vector<tinyobj::shape_t> shapes;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.OutputWindow = hwnd;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.TopLeftY = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#endif

	//vector<Vertex> vertex_t;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_DestroyWindow(win);

	auto& shapes = reader.GetShapes();

				break;

	vrData.SysMemSlicePitch = 0;

	auto& materials = reader.GetMaterials();

	scDesc.Windowed = TRUE;

		SDL_RenderClear(ren);



	}

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		//User presses a key

	txDesc.MipLevels = 1;

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pDepthStencilView);

{

	}

		R"(cube.obj)");

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	UINT offsets = 0;

	while (SDL_PollEvent(&e) != 0)





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.eyePos, eye);



struct ConstantMatrixBuffer {

}

			default:



	//Key press surfaces constants

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantMatrixBuffer cmb;

		return hr;

	if (!reader.Warning().empty())

		{



}



		size_t index_offset = 0;

{

	return hr;

	m_pTextureView = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



			case SDLK_LEFT:



			case SDLK_RIGHT:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		exit(1);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.MiscFlags = 0;

}

	//テクスチャ読み込み

	::GetClientRect(hwnd, &rect);





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

		KEY_PRESS_SURFACE_DEFAULT,



			}





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_DestroyRenderer(ren);

				indexlist.push_back(index);

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

using std::cout; using std::endl;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

	{

		{

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	D3D11_BUFFER_DESC vbDesc;

				WORD index = idx.vertex_index;

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pDevice);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	tinyobj::ObjReader reader;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	/*

		pIList[j] = indexList[j];

	vrData.SysMemPitch = 0;



#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	txDesc.Width = rect.Width();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

			// Loop over vertices in the face.

	if (FAILED(hr))



	m_VertexCount = 0;

				indexlist.push_back(idx.vertex_index);

	vrData.pSysMem = &pVList[0];

	{

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			}

		{

	SDL_DestroyRenderer(ren);

		return hr;

	std::string error;

	ConstantLightBuffer clb;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{

	//頂点バッファ作成

	scDesc.BufferDesc.Height = rect.Height();

		if (!ret)

	vbDesc.MiscFlags = 0;

		&m_pSwapChain,

	{

#endif

	//定数バッファ作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		KEY_PRESS_SURFACE_UP,

	float    farZ = 100.0f;

	bool ret = tinyobj::LoadObj(

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

				break;

		return hr;

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.eyePos, eye);

{

struct ConstantMatrixBuffer {

		&attrib,

#include <iostream>

{



	//インデックスバッファ作成

/*

	SAFE_RELEASE(m_pIndexBuffer);

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		{

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vrData.SysMemPitch = 0;

	vrData.pSysMem = &pVList[0];

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	ibDesc.StructureByteStride = 0;



	scDesc.Windowed = TRUE;

	//頂点シェーダー生成



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	m_VertexCount = vcount;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Event e;

	delete[] pIList;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Event e;

		pLevels,

		return hr;

	{



	if (m_pImmediateContext)

	Release();





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext = NULL;



	return hr;

	D3D11_SAMPLER_DESC smpDesc;

		KEY_PRESS_SURFACE_UP,

			exit(1);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pTextureView = NULL;

				break;



}

			int num_vertices = shape.mesh.num_face_vertices[f];

#include <SDL.h>

	scDesc.BufferCount = 1;

	bool ret = tinyobj::LoadObj(

	txDesc.Height = rect.Height();

	scDesc.SampleDesc.Count = 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.MiscFlags = 0;

{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			index_offset += fv;

	vbDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

	float    fov = XMConvertToRadians(20.0f);

	}*/

	for (size_t s = 0; s < shapes.size(); s++)

	vrData.SysMemSlicePitch = 0;

		&scDesc,

	D3D11_BUFFER_DESC cbDesc;

	m_IndexCount = icount;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	SAFE_RELEASE(m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

/*

		m_pImmediateContext->ClearState();

#include <iostream>

		}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//定数バッファ作成

		if (!ret)

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC vbDesc;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		SDL_RenderPresent(ren);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&attrib,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

using std::cout; using std::endl;



	dsDesc.Format = txDesc.Format;





	SDL_DestroyTexture(tex);

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pDevice);

	};



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	auto& shapes = reader.GetShapes();

	irData.SysMemPitch = 0;



	m_pImmediateContext = NULL;



	//First we need to start up SDL, and make sure it went ok



}

	D3D11_SAMPLER_DESC smpDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		cout << "SDL_INIT_ERROR" << endl;

		{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

			exit(1);



	::GetClientRect(hwnd, &rect);









	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			//Select surfaces based on key press

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	SDL_Quit();

	}

{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

		//User presses a key

	SDL_DestroyTexture(tex);

void CD3DTest::Release()

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	float    fov = XMConvertToRadians(20.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

		KEY_PRESS_SURFACE_TOTAL

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;





struct ConstantMatrixBuffer {

		delete[] pIList;

	tinyobj::ObjReader reader;



	D3D11_BUFFER_DESC ibDesc;





	txDesc.Usage = D3D11_USAGE_DEFAULT;





	cbDesc.StructureByteStride = 0;

		return hr;

	SDL_Quit();

	m_IndexCount = icount;

	if (FAILED(hr))

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vector<WORD> indexList;







	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	}



	if (!error.empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//ピクセルシェーダー生成

};

	ConstantMaterial material; //物体の質感

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Event e;



	//ビューポート設定

	scDesc.Windowed = TRUE;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

void CD3DTest::Release()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC vbDesc;

	D3D_FEATURE_LEVEL level;

		&level,

	SDL_FreeSurface(bmp);

	SDL_DestroyRenderer(ren);

struct ConstantMatrixBuffer {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.OutputWindow = hwnd;



	tinyobj::attrib_t attrib;

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

 */

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

		if (!reader.Error().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

{

	scDesc.BufferCount = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	XMFLOAT4X4 projection;

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&materials,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			}

			case SDLK_UP:

				indexlist.push_back(idx.vertex_index);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.CPUAccessFlags = 0;

	Release();

struct ConstantLight {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	cbDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

		return hr;





	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

 * Lesson 1: Hello World!

	//頂点シェーダー生成

		&error,

		SDL_RenderClear(ren);

				tinyobj::real_t ty =



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (!error.empty())

	XMStoreFloat4(&clb.eyePos, eye);

			{

	CRect                rect;

int SEGMENT = 36;

	m_VertexCount = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	};

	//テクスチャ読み込み

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		1,



				vertex.push_back(vertex_tmp);

	auto& materials = reader.GetMaterials();





	dsDesc.Format = txDesc.Format;

	}

}

	tinyobj::attrib_t attrib;

		}

			case SDLK_RIGHT:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	/*

		D3D11_SDK_VERSION,

	//頂点レイアウト作成



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pSwapChain = NULL;

		}



		&level,





}


	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

};

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	while (SDL_PollEvent(&e) != 0)

};

	irData.pSysMem = &pIList[0];

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_BUFFER_DESC cbDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			//Select surfaces based on key press

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

struct ConstantMaterial {

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pTextureView);

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	//インデックスバッファ作成

	XMFLOAT4X4 world;

	float    nearZ = 0.1f;

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

	{

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

				// access to vertex

	//Key press surfaces constants

	::GetClientRect(hwnd, &rect);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	return;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			for (size_t v = 0; v < num_vertices; v++)

			case SDLK_UP:

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

};

		return hr;

		D3D11_SDK_VERSION,

#include <iostream>

			// Loop over vertices in the face.

	SDL_DestroyRenderer(ren);

	txDesc.Width = rect.Width();

	{

	UINT flags = 0;

			switch (e.key.keysym.sym)

	ConstantLight    pntLight; //点光源

		SDL_RenderPresent(ren);

		SDL_RenderPresent(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		&error,

}

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pMatrixBuffer = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4         ambient;  //環境光(r,g,b)

int SEGMENT = 36;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

		else if (e.type == SDL_KEYDOWN)

	scDesc.BufferCount = 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



};



	SAFE_RELEASE(m_pDevice);

		}

	ConstantMatrixBuffer cmb;

struct ConstantMaterial {

			case SDLK_LEFT:

	{

				indexlist.push_back(idx.vertex_index);



		exit(1);

	}

		&attrib,

		&materials,

	m_pSampler = NULL;

using std::cout; using std::endl;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	scDesc.BufferDesc.Width = rect.Width();

	D3D_FEATURE_LEVEL level;



	WORD   icount = indexList.size();

	tinyobj::attrib_t attrib;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{



#include <iostream>

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				break;



		}

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//ピクセルシェーダー生成



	dsDesc.Format = txDesc.Format;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pMatrixBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

};

	}

	SDL_DestroyRenderer(ren);

	ConstantLightBuffer clb;

	if (FAILED(hr))

		&m_pDevice,







		&shapes,



	cbDesc.CPUAccessFlags = 0;

int main(int, char**)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ConstantMatrixBuffer cmb;

		delete[] pIList;

	std::vector<tinyobj::shape_t> shapes;

CD3DTest::CD3DTest()

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

using std::cout; using std::endl;

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		flags,

		R"(cube.obj)");

				break;



	for (int i = 0; i < 3; i++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			//Select surfaces based on key press

	::ZeroMemory(&scDesc, sizeof(scDesc));

		&shapes,

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT







	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderClear(ren);

	float    nearZ = 0.1f;



	SAFE_RELEASE(m_pDepthStencilView);

	m_Angle += XMConvertToRadians(1.0f);





	Release();

				break;



	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

}

struct ConstantMatrixBuffer {

	delete[] pIList;

		pIList[j] = indexList[j];



	m_Viewport.Height = (FLOAT)rect.Height();

	m_pDepthStencilView = NULL;

		size_t index_offset = 0;

		pVList[i] = vertexlist[i];

	}

	SAFE_RELEASE(m_pTexture);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



{

	D3D11_BUFFER_DESC vbDesc;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Viewport.Width = (FLOAT)rect.Width();

		//User requests quit

	}

	//ピクセルシェーダー生成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vrData.pSysMem = &pVList[0];

	irData.SysMemSlicePitch = 0;

	SDL_DestroyRenderer(ren);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//テクスチャ読み込み

struct ConstantMaterial {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//定数バッファ作成

	SDL_FreeSurface(suf);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pTextureView = NULL;

	tinyobj::attrib_t attrib;

void CD3DTest::Render()

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			break;



	}

	{

	::GetClientRect(hwnd, &rect);

};



		size_t index_offset = 0;

				vertex.push_back(vertex_tmp);

			for (size_t v = 0; v < num_vertices; v++)

		}

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		delete[] pVList;







	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha




