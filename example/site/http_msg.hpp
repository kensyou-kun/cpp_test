	for (size_t s = 0; s < shapes.size(); s++)

				// access to vertex

}



	m_pLightBuffer = NULL;

/*

	}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vbDesc.StructureByteStride = 0;

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);

	m_pDepthStencilView = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				tinyobj::real_t ty =

	//ビューポート設定





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pSwapChain->Present(0, 0);

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.MiscFlags = 0;

	{

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		KEY_PRESS_SURFACE_DOWN,

			index_offset += num_vertices;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_DEFAULT,





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pInputLayout = NULL;



		&level,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC vbDesc;



	::GetClientRect(hwnd, &rect);

		size_t index_offset = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDepthStencilTexture);

	ConstantLightBuffer clb;

	irData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//定数バッファ作成

}

	SDL_Event e;

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.MipLevels = 1;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	irData.SysMemSlicePitch = 0;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

	XMFLOAT4X4 view;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





		KEY_PRESS_SURFACE_LEFT,





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include <iostream>

	Release();

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{



	scDesc.OutputWindow = hwnd;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	cbDesc.CPUAccessFlags = 0;



	//Key press surfaces constants



	vbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				// access to vertex

	::GetClientRect(hwnd, &rect);



	//Create Index

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	irData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.Height = (FLOAT)rect.Height();

		// Loop over faces(polygon)



	for (int i = 0; i < vcount; i++)

				WORD index = idx.vertex_index;

};



	{

		SDL_RenderClear(ren);

		{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		//User presses a key

	{

#include <SDL.h>

	if (FAILED(hr))



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	tinyobj::ObjReaderConfig reader_config;

			}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.TopLeftX = 0;

	Release();

	tinyobj::ObjReaderConfig reader_config;

	SDL_Event e;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	Release();

	}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_RIGHT,



CD3DTest::~CD3DTest()



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	D3D_FEATURE_LEVEL level;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_DEFAULT,



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pImmediateContext);

	for (int i = 0; i < vcount; i++)

	m_IndexCount = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//インデックスバッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

		flags,

	if (FAILED(hr))

				WORD index = idx.vertex_index;

				WORD index = idx.vertex_index;

		if (e.type == SDL_QUIT)

	m_pSwapChain = NULL;







	m_VertexCount = vcount;

void CD3DTest::Render()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.pSysMem = &pVList[0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pTextureView);

/*

	auto& attrib = reader.GetAttrib();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = 0;

		else if (e.type == SDL_KEYDOWN)







	if (FAILED(hr))

void CD3DTest::Release()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return 0;

			for (size_t v = 0; v < fv; v++)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			for (size_t v = 0; v < fv; v++)



	irData.SysMemSlicePitch = 0;



	auto& attrib = reader.GetAttrib();



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

		&scDesc,

{

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ID3D11Texture2D* pBackBuffer;

	{

	while (SDL_PollEvent(&e) != 0)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



				tinyobj::real_t ty =



	/*



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	//定数バッファ作成

	{

struct ConstantLight {

		return hr;





/*

	vector<WORD> indexList;

		return hr;

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pDepthStencilTexture = NULL;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	SAFE_RELEASE(m_pIndexBuffer);

		if (e.type == SDL_QUIT)

		SDL_RenderClear(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_Delay(1000);

				WORD index = idx.vertex_index;



	m_pImmediateContext = NULL;

	}

			index_offset += num_vertices;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



/*

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferCount = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

	auto& attrib = reader.GetAttrib();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//vector<Vertex> vertex_t;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	CRect                rect;

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_SUBRESOURCE_DATA vrData;

struct ConstantMaterial {

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	SDL_Quit();

	ID3D11Texture2D* pBackBuffer;

			}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		flags,





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

	UINT offsets = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pTexture = NULL;

	vbDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < fv; v++)

		return hr;

	D3D11_BUFFER_DESC cbDesc;

	txDesc.ArraySize = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 ambient;           //環境(r,g,b)

		{

	m_Viewport.TopLeftX = 0;





	}*/

		if (e.type == SDL_QUIT)

		}

		&shapes,

		R"(cube.obj)");

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

HRESULT CD3DTest::Create(HWND hwnd)

	return hr;

	for (const auto& shape : shapes)

{

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))

	HRESULT              hr;

	scDesc.Windowed = TRUE;

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return 0;

			{

	vrData.SysMemSlicePitch = 0;

	//vector<WORD> index_t;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pMatrixBuffer = NULL;



		SDL_RenderClear(ren);

	vrData.SysMemPitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_VertexCount = vcount;



	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

	//Clean up our objects and quit

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain->Present(0, 0);

	{



		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_SAMPLER_DESC smpDesc;

	SDL_FreeSurface(bmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	vector<Vertex> vertexlist;

	D3D11_BUFFER_DESC ibDesc;

				// access to vertex

	SDL_DestroyWindow(win);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			{



		return hr;

				WORD index = idx.vertex_index;



	if (m_pImmediateContext)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	{

	if (!error.empty())

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}



	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		NULL,

	SDL_Quit();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}



	m_pLightBuffer = NULL;



	UINT flags = 0;



}
	SDL_Quit();

	XMFLOAT4         eyePos;   //視点座標



		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return 1;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ConstantLightBuffer clb;



	SAFE_RELEASE(m_pSwapChain);



	return 0;



	scDesc.BufferCount = 1;

		&materials,

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	int     vcount = vertexlist.size();

	{

	cbDesc.StructureByteStride = 0;

#include <SDL.h>

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.OutputWindow = hwnd;

	Vertex* pVList = new Vertex[vcount];

		{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_UP,



	SDL_DestroyRenderer(ren);



	//頂点シェーダー生成



	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		pLevels,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



{

			{

	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 projection;





	// Loop over shapes

	for (size_t s = 0; s < shapes.size(); s++)

	auto& shapes = reader.GetShapes();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pTexture);

	m_pTextureView = NULL;

	ibDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

#endif

	dsDesc.Format = txDesc.Format;

				break;

	}



}

		delete[] pIList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pSampler = NULL;

		&m_pDevice,

			case SDLK_UP:

	flags |= D3D11_CREATE_DEVICE_DEBUG;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	std::string imagePath = "hello.bmp";

	m_IndexCount = icount;

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&scDesc,

	D3D11_BUFFER_DESC cbDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				indexlist.push_back(idx.vertex_index);

		&shapes,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				WORD index = idx.vertex_index;

	m_Viewport.TopLeftY = 0;

 */



	SAFE_RELEASE(m_pSampler);

	HRESULT              hr;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	// Loop over shapes

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(





	while (SDL_PollEvent(&e) != 0)

	}



	std::vector<tinyobj::shape_t> shapes;

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	WORD* pIList = new WORD[icount];

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pInputLayout);

	txDesc.CPUAccessFlags = 0;

	vrData.SysMemPitch = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//vector<WORD> index_t;

	vrData.SysMemPitch = 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

HRESULT CD3DTest::Create(HWND hwnd)

#include "DirectXManager.h"

	m_VertexCount = 0;

	irData.SysMemPitch = 0;

	}

		//User presses a key

		//User requests quit

	SDL_Event e;

	m_VertexCount = 0;

{



}

		cout << "SDL_INIT_ERROR" << endl;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		SDL_RenderClear(ren);



				tinyobj::real_t ty =

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	vector<WORD> indexList;







	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

	scDesc.Windowed = TRUE;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

				indexlist.push_back(idx.vertex_index);

using std::cout; using std::endl;

			{

	vbDesc.StructureByteStride = 0;

		return hr;

	}



};

	XMFLOAT4 specular;          //反射(r,g,b)

	//頂点バッファ作成

	{



	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDevice);

	//ビューポート設定

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}



	//定数バッファ作成

CD3DTest::~CD3DTest()

 * Lesson 1: Hello World!

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		if (!ret)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	int     vcount = vertexlist.size();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_Angle += XMConvertToRadians(1.0f);



		SDL_Delay(1000);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pDepthStencilView);

	{

				break;

	ibDesc.StructureByteStride = 0;

		1,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	::GetClientRect(hwnd, &rect);

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;



				vertex.push_back(vertex_tmp);

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.BufferDesc.Width = rect.Width();



			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

int SEGMENT = 36;

	D3D11_BUFFER_DESC vbDesc;

	SDL_Quit();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyRenderer(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

		return hr;

	}

	{

		R"(cube.obj)");

			//Select surfaces based on key press

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			for (size_t v = 0; v < fv; v++)

	{

	for (const auto& shape : shapes)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//定数バッファ作成

	//頂点バッファ作成

				break;

	}*/

	txDesc.SampleDesc.Quality = 0;

	enum KeyPressSurfaces

		&shapes,

	SDL_DestroyRenderer(ren);

		}

		&materials,



				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.Windowed = TRUE;

using std::cout; using std::endl;

#include <iostream>

	SDL_FreeSurface(suf);

	D3D11_SUBRESOURCE_DATA vrData;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

	{

	txDesc.Height = rect.Height();



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext = NULL;



	::GetClientRect(hwnd, &rect);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.MaxDepth = 1.0f;

};

	SAFE_RELEASE(m_pVertexBuffer);

			{



		&scDesc,

	for (size_t s = 0; s < shapes.size(); s++)



	SAFE_RELEASE(m_pVertexShader);

	m_pIndexBuffer = NULL;

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}



	m_pLightBuffer = NULL;

	irData.SysMemPitch = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	HRESULT              hr;

			for (size_t v = 0; v < fv; v++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		flags,

{

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		cout << "SDL_INIT_ERROR" << endl;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#include <SDL.h>

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

CD3DTest::CD3DTest()

 */

	for (int j = 0; j < icount; j++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	vector<Vertex> vertexlist;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD* pIList = new WORD[icount];

		&error,

		{

		}



	XMStoreFloat4(&clb.eyePos, eye);

		{

	if (FAILED(hr))

	UINT flags = 0;

				tinyobj::real_t tx =

			switch (e.key.keysym.sym)

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDepthStencilView);

		delete[] pIList;

	SAFE_RELEASE(m_pDepthStencilView);

int SEGMENT = 36;

		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	m_pSwapChain = NULL;

};

	txDesc.ArraySize = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

			}

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	Release();



	if (FAILED(hr))

		return hr;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ConstantLightBuffer clb;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.SampleDesc.Count = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Quit();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	reader_config.mtl_search_path = "./"; // Path to material files

{

	if (FAILED(hr))

				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pSwapChain);



	cbDesc.CPUAccessFlags = 0;

	return;

#include <iostream>

			case SDLK_RIGHT:

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ConstantMaterial material; //物体の質感

	vbDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

	SDL_FreeSurface(suf);

 */

}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	vrData.SysMemSlicePitch = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	auto& materials = reader.GetMaterials();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	scDesc.BufferCount = 1;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Width = rect.Width();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		flags,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC cbDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	delete[] pIList;

	m_Viewport.MinDepth = 0.0f;

	tinyobj::attrib_t attrib;

	tinyobj::ObjReaderConfig reader_config;

	txDesc.MiscFlags = 0;

		{

struct ConstantLightBuffer {

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.MiscFlags = 0;

}


			}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	D3D11_SUBRESOURCE_DATA vrData;

	auto& shapes = reader.GetShapes();

		return hr;



			//Select surfaces based on key press

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		NULL,

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}



	{

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pRenderTargetView);



	SDL_DestroyTexture(tex);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}
	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pTexture = NULL;

		return hr;

		//User requests quit

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.ArraySize = 1;

	m_pRenderTargetView = NULL;

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	// Loop over shapes

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;

HRESULT CD3DTest::Create(HWND hwnd)



	//vector<WORD> index_t;

		if (!ret)

	m_pImmediateContext = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	std::string error;

			//Select surfaces based on key press



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_FreeSurface(suf);

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	//ビューポート設定

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	tinyobj::attrib_t attrib;

	/*

	ZeroMemory(&txDesc, sizeof(txDesc));

{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	if (FAILED(hr))



				vertex.push_back(vertex_tmp);

	//ピクセルシェーダー生成

	XMFLOAT4 ambient;           //環境(r,g,b)



	if (!reader.Warning().empty())

	int     vcount = vertexlist.size();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//Create Index

	cbDesc.MiscFlags = 0;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.StructureByteStride = 0;

	}



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyTexture(tex);





	XMFLOAT4X4 projection;

	{

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	SAFE_RELEASE(m_pLightBuffer);

	m_pLightBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	tinyobj::ObjReader reader;







	m_Viewport.TopLeftX = 0;

		if (!reader.Error().empty())

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantMatrixBuffer {

	Release();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	return 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		//User requests quit

			}

			}

		return hr;

	cbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

				// access to vertex

struct ConstantLight {

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Quit();



			}



	//頂点レイアウト作成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	XMFLOAT4X4 view;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4         ambient;  //環境光(r,g,b)



#include <SDL.h>

};

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Quit();

	int     vcount = vertexlist.size();

		size_t index_offset = 0;  // インデントのオフセット



	m_Viewport.MinDepth = 0.0f;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pMatrixBuffer);

	D3D11_BUFFER_DESC cbDesc;

	SDL_Quit();



	{





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		pIList[j] = indexList[j];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	}

	SAFE_RELEASE(m_pLightBuffer);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pVertexBuffer);

	tinyobj::attrib_t attrib;

			switch (e.key.keysym.sym)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

	//定数バッファ作成

	return hr;

	m_pSwapChain = NULL;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	float    farZ = 100.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

		}

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//Clean up our objects and quit



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		if (!reader.Error().empty())





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		{

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	vrData.SysMemSlicePitch = 0;

	if (!error.empty())

		pIList[j] = indexList[j];

	std::vector<tinyobj::shape_t> shapes;





	/*



				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DEFAULT,

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);



	SDL_Event e;

	if (FAILED(hr))

{

		&attrib,

/*

	cbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

				WORD index = idx.vertex_index;

			}

	SDL_Quit();



	SAFE_RELEASE(m_pInputLayout);

	{





	//深度ステンシルバッファ作成

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pLightBuffer);

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	{

	SDL_DestroyTexture(tex);



struct ConstantLightBuffer {

	}

		SDL_RenderPresent(ren);



	Release();

			{

	scDesc.SampleDesc.Count = 1;

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.ambient, lightAmbient);

	float    fov = XMConvertToRadians(20.0f);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//ピクセルシェーダー生成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantLightBuffer clb;







	m_pRenderTargetView = NULL;



	SAFE_RELEASE(m_pRenderTargetView);

	if (!reader.Warning().empty())

	//テクスチャ読み込み

		pIList[j] = indexList[j];

	Release();



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

#include <iostream>

	SAFE_RELEASE(m_pDevice);

{

		}

	m_pInputLayout = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pSampler = NULL;

#include <SDL.h>

	ibDesc.MiscFlags = 0;



		delete[] pIList;

	XMFLOAT4 pos;               //座標(x,y,z)

}

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pMatrixBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<WORD> indexList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#ifdef _DEBUG

#include <SDL.h>

			}

	enum KeyPressSurfaces

CD3DTest::~CD3DTest()



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;





	SDL_DestroyWindow(win);

	m_pMatrixBuffer = NULL;

	if (!error.empty())

}

	bool ret = tinyobj::LoadObj(

			}

	//vector<Vertex> vertex_t;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pVertexBuffer = NULL;

	m_IndexCount = icount;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		&level,



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	UINT offsets = 0;

	//Create Index

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

struct ConstantLightBuffer {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;



	txDesc.MipLevels = 1;





		size_t index_offset = 0;  // インデントのオフセット





#ifdef _DEBUG

			case SDLK_RIGHT:

	UINT strides = sizeof(Vertex);

	m_pSwapChain->Present(0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

	//頂点バッファ作成



		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantMatrixBuffer cmb;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	int     vcount = vertexlist.size();



	m_VertexCount = vcount;

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.MipLevels = 1;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

	SDL_FreeSurface(suf);

	Release();



	for (size_t s = 0; s < shapes.size(); s++)

{

		pVList[i] = vertexlist[i];



		if (!ret)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		return 1;

{

		exit(1);





	::GetClientRect(hwnd, &rect);

	{

	for (int j = 0; j < icount; j++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pPixelShader = NULL;

	//ピクセルシェーダー生成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	UINT strides = sizeof(Vertex);



	D3D11_BUFFER_DESC vbDesc;



			index_offset += fv;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string imagePath = "hello.bmp";

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.OutputWindow = hwnd;

	ibDesc.MiscFlags = 0;

		m_pImmediateContext->ClearState();

		//User presses a key

	//テクスチャ読み込み

	SDL_FreeSurface(suf);



CD3DTest::CD3DTest()

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.ArraySize = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		delete[] pVList;

	return;

	auto& shapes = reader.GetShapes();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pDepthStencilView);

	float    farZ = 100.0f;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



				vertex.push_back(vertex_tmp);

				break;

				break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	UINT strides = sizeof(Vertex);



		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

{

				WORD index = idx.vertex_index;

	cbDesc.StructureByteStride = 0;

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

	if (m_pImmediateContext)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.SampleDesc.Quality = 0;



	auto& shapes = reader.GetShapes();

		&m_pImmediateContext);



	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	D3D11_BUFFER_DESC vbDesc;

	txDesc.CPUAccessFlags = 0;

}

	Vertex* pVList = new Vertex[vcount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				WORD index = idx.vertex_index;

		D3D_DRIVER_TYPE_HARDWARE,

	m_IndexCount = icount;

	}

	txDesc.ArraySize = 1;

	std::string imagePath = "hello.bmp";

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	}*/

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.TopLeftX = 0;

	Vertex* pVList = new Vertex[vcount];

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

	for (size_t s = 0; s < shapes.size(); s++)

	ConstantLightBuffer clb;

	txDesc.SampleDesc.Count = 1;

		}

	Vertex* pVList = new Vertex[vcount];

	for (int j = 0; j < icount; j++)

	scDesc.SampleDesc.Count = 1;

	tinyobj::ObjReaderConfig reader_config;

	m_pSampler = NULL;



		KEY_PRESS_SURFACE_DOWN,

	ConstantLight    pntLight; //点光源

struct ConstantLightBuffer {

int main(int, char**)



	m_pPixelShader = NULL;

		return hr;

	//Key press surfaces constants

	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vector<Vertex> vertexlist;

	txDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.CPUAccessFlags = 0;

	txDesc.MipLevels = 1;

				break;

	ConstantMatrixBuffer cmb;

		return hr;

	vrData.pSysMem = &pVList[0];

		&m_pSwapChain,



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pRenderTargetView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		pVList[i] = vertexlist[i];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Height = rect.Height();



}

				vertex.push_back(vertex_tmp);

	return 0;



	//Clean up our objects and quit

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		pLevels,

		R"(cube.obj)");



	//ビューポート設定

#include "DirectXManager.h"

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_IndexCount = icount;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#endif



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		}

				vertex.push_back(vertex_tmp);

			// Loop over vertices in the face.

}

{

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}
		else if (e.type == SDL_KEYDOWN)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return 0;

		D3D11_SDK_VERSION,

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;



	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_TEXTURE2D_DESC txDesc;

	WORD* pIList = new WORD[icount];





		R"(cube.obj)");

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#ifdef _DEBUG



		SDL_RenderPresent(ren);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pTextureView);

	m_IndexCount = 0;

}

};

	txDesc.SampleDesc.Count = 1;

	if (m_pImmediateContext)

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include "DirectXManager.h"



		pIList[j] = indexList[j];

	cbDesc.StructureByteStride = 0;

		//User requests quit

	{

		if (e.type == SDL_QUIT)

	}

	}

	m_pInputLayout = NULL;

int main(int, char**)

	std::string inputfile = "test.obj";

	}*/

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.MiscFlags = 0;

			case SDLK_RIGHT:

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

void CD3DTest::Render()



	D3D11_SUBRESOURCE_DATA irData;

};

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//頂点シェーダー生成



	SAFE_RELEASE(m_pSampler);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::string imagePath = "hello.bmp";

	{





	vbDesc.MiscFlags = 0;

		&m_pSwapChain,

		&error,

	//Create Index





		// Loop over faces(polygon)

		SDL_Delay(1000);

	float    farZ = 100.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTextureView);

	SDL_DestroyTexture(tex);

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pMatrixBuffer);

		KEY_PRESS_SURFACE_UP,

		return hr;

	}





	ibDesc.StructureByteStride = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4         ambient;  //環境光(r,g,b)



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyWindow(win);



	dsDesc.Texture2D.MipSlice = 0;

			}

	//ビューポート設定

	std::vector<tinyobj::shape_t> shapes;

			index_offset += fv;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	m_pSwapChain->Present(0, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				WORD index = idx.vertex_index;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pSampler);

	bool ret = tinyobj::LoadObj(

	for (size_t s = 0; s < shapes.size(); s++)

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点シェーダー生成



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pTextureView);

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyRenderer(ren);

CD3DTest::CD3DTest()

	float    farZ = 100.0f;

	vbDesc.CPUAccessFlags = 0;

	vector<WORD> indexList;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				break;

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSampler);

			index_offset += fv;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		R"(cube.obj)");





		// Loop over faces(polygon)

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4X4 view;

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::real_t ty =



		SDL_RenderClear(ren);

{

};

	m_Angle += XMConvertToRadians(1.0f);

{



	WORD   icount = indexList.size();

		&materials,

	LoadObj(vertexlist, indexList);

			default:

#ifdef _DEBUG

	enum KeyPressSurfaces

	cbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

	SDL_DestroyWindow(win);

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	vrData.pSysMem = &pVList[0];

		return hr;

#include <iostream>

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ConstantMatrixBuffer cmb;

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4X4 view;

		delete[] pVList;

		if (e.type == SDL_QUIT)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	delete[] pVList;

	if (FAILED(hr))

		&m_pDevice,



		SDL_Delay(1000);

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	auto& attrib = reader.GetAttrib();

	float    fov = XMConvertToRadians(20.0f);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	scDesc.BufferCount = 1;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftY = 0;

	D3D11_SUBRESOURCE_DATA irData;

	m_Viewport.TopLeftY = 0;



{



	//ビューポート設定

				break;

	m_pDevice = NULL;

	Release();

				indexlist.push_back(idx.vertex_index);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

		&error,

		&scDesc,

	pBackBuffer->Release();

		if (e.type == SDL_QUIT)



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (!error.empty())

{

			}

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD* pIList = new WORD[icount];

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pDepthStencilView);



	D3D_FEATURE_LEVEL level;

	XMFLOAT4X4 view;

void CD3DTest::Render()



struct ConstantLight {

};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



}

		&level,

	//定数バッファ作成

	}*/

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



			int num_vertices = shape.mesh.num_face_vertices[f];

				// access to vertex

#include <iostream>

	m_pVertexShader = NULL;

	txDesc.MipLevels = 1;

	m_pLightBuffer = NULL;

#include "DirectXManager.h"

int SEGMENT = 36;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	{

	if (FAILED(hr))

		&m_pImmediateContext);

			switch (e.key.keysym.sym)



	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			index_offset += num_vertices;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4X4 view;

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

	Release();

	SAFE_RELEASE(m_pPixelShader);



	scDesc.BufferDesc.Height = rect.Height();

};

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	auto& materials = reader.GetMaterials();

		if (!reader.Error().empty())

	{





			break;

			{

		D3D_DRIVER_TYPE_HARDWARE,



	SAFE_RELEASE(m_pInputLayout);



		&scDesc,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.pSysMem = &pIList[0];

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pDevice);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	std::string error;

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.BufferDesc.Height = rect.Height();

	m_pTexture = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	SDL_DestroyTexture(tex);

	{

		return hr;

			break;

	//Create Index

			}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pRenderTargetView);

	while (SDL_PollEvent(&e) != 0)





	vbDesc.MiscFlags = 0;



	}

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pIndexBuffer);

	m_pDepthStencilTexture = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	enum KeyPressSurfaces

	ibDesc.MiscFlags = 0;

	ConstantLight    pntLight; //点光源

	m_VertexCount = 0;





				WORD index = idx.vertex_index;

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	// Loop over shapes

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_IndexCount = icount;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SDL_Quit();

	vbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

			for (size_t v = 0; v < num_vertices; v++)

{

	m_pVertexBuffer = NULL;

#ifdef _DEBUG

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

				WORD index = idx.vertex_index;

};

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{



	txDesc.ArraySize = 1;

	SDL_DestroyTexture(tex);

	for (int i = 0; i < 3; i++)

		return hr;

struct ConstantMaterial {

		&materials,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pSampler = NULL;

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.SampleDesc.Count = 1;

		D3D_DRIVER_TYPE_HARDWARE,

	// Loop over shapes

	float    farZ = 100.0f;

	delete[] pVList;

	for (int i = 0; i < 3; i++)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <SDL.h>

	if (m_pImmediateContext)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



				WORD index = idx.vertex_index;



		pIList[j] = indexList[j];

	ibDesc.MiscFlags = 0;

void CD3DTest::Release()



int main(int, char**)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Event e;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	float    nearZ = 0.1f;

	SDL_FreeSurface(suf);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#endif

	//深度ステンシルバッファ作成

		return hr;

	irData.pSysMem = &pIList[0];

	ConstantLight    pntLight; //点光源

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Event e;

	SDL_Quit();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	dsDesc.Texture2D.MipSlice = 0;



	m_Viewport.MinDepth = 0.0f;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	pBackBuffer->Release();

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::string error;

{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 world;

			{

		&attrib,

		&materials,

	if (FAILED(hr))

	m_IndexCount = 0;



	//深度ステンシルバッファ作成

	{



}

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pDepthStencilTexture);

		&m_pDevice,

	}*/

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		1,

	//Create Index

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			case SDLK_RIGHT:

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	//頂点バッファ作成

	m_Viewport.MaxDepth = 1.0f;

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		SDL_RenderPresent(ren);

		size_t index_offset = 0;  // インデントのオフセット

	vrData.SysMemSlicePitch = 0;



		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

		}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

int main(int, char**)

				break;



#include "DirectXManager.h"

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

			index_offset += fv;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.StructureByteStride = 0;

				break;

	{

			exit(1);

	SAFE_RELEASE(m_pDepthStencilView);

		}

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Angle += XMConvertToRadians(1.0f);

	{

	std::string error;

	delete[] pVList;

		pIList[j] = indexList[j];

};

		SDL_Delay(1000);



	XMFLOAT4         ambient;  //環境光(r,g,b)



	cbDesc.CPUAccessFlags = 0;

	delete[] pVList;

	tinyobj::attrib_t attrib;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderClear(ren);



	for (size_t s = 0; s < shapes.size(); s++)

	m_pSwapChain = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			switch (e.key.keysym.sym)

}



	delete[] pVList;

		if (e.type == SDL_QUIT)

		{





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		{



		{

	m_pLightBuffer = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	txDesc.SampleDesc.Count = 1;

	m_Viewport.MinDepth = 0.0f;

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//定数バッファ作成

	m_Viewport.MinDepth = 0.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.MiscFlags = 0;

			}

	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_TEXTURE2D_DESC txDesc;

	for (int i = 0; i < 3; i++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		pIList[j] = indexList[j];



	std::vector<tinyobj::shape_t> shapes;

struct ConstantLightBuffer {





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		// Loop over faces(polygon)



			switch (e.key.keysym.sym)

	Release();





	int     vcount = vertexlist.size();

int SEGMENT = 36;

				indexlist.push_back(index);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			}



	m_pMatrixBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	float    nearZ = 0.1f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pPixelShader = NULL;

		KEY_PRESS_SURFACE_TOTAL

	auto& attrib = reader.GetAttrib();

	m_pSampler = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		&level,

	txDesc.MipLevels = 1;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

		&m_pSwapChain,

	{

	//Key press surfaces constants

	for (int j = 0; j < icount; j++)

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				indexlist.push_back(idx.vertex_index);

struct ConstantMatrixBuffer {



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_UP,



	}*/

		m_pImmediateContext->ClearState();

void CD3DTest::Render()



}

	D3D11_TEXTURE2D_DESC txDesc;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

 * Lesson 1: Hello World!

	XMFLOAT4         ambient;  //環境光(r,g,b)



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Quit();

	tinyobj::ObjReader reader;



		return hr;

CD3DTest::~CD3DTest()

	if (!reader.ParseFromFile(inputfile, reader_config))



		&scDesc,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pDevice,

		&shapes,

	vrData.pSysMem = &pVList[0];



void CD3DTest::Release()

}

	m_pImmediateContext = NULL;

#endif



		//User presses a key

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



}

				indexlist.push_back(index);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT strides = sizeof(Vertex);

using std::cout; using std::endl;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

#include "DirectXManager.h"

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vrData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	m_pVertexShader = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//定数バッファ作成

	HRESULT              hr;

	SAFE_RELEASE(m_pDepthStencilTexture);



	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

	scDesc.BufferDesc.Height = rect.Height();

		{

		if (!ret)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pIList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//Create Index

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		return hr;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.CPUAccessFlags = 0;



	m_Viewport.MinDepth = 0.0f;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pLevels,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

int main(int, char**)



		SDL_Delay(1000);

	{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

 * Lesson 1: Hello World!

	scDesc.BufferCount = 1;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}
	}

	SAFE_RELEASE(m_pVertexBuffer);

	std::string imagePath = "hello.bmp";

	::GetClientRect(hwnd, &rect);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			//Select surfaces based on key press

	bool ret = tinyobj::LoadObj(

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext = NULL;

	Vertex* pVList = new Vertex[vcount];



		return hr;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pInputLayout = NULL;



		return hr;

			case SDLK_DOWN:

	int     vcount = vertexlist.size();

			break;

		KEY_PRESS_SURFACE_RIGHT,

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	{

			index_offset += fv;

	scDesc.BufferDesc.Width = rect.Width();

{

	XMFLOAT4         eyePos;   //視点座標

				vertex.push_back(vertex_tmp);

};

#define TINYOBJLOADER_IMPLEMENTATION

	if (!error.empty())



			// Loop over vertices in the face.



	//ビューポート設定



	return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				break;

	SAFE_RELEASE(m_pTexture);

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		SDL_RenderClear(ren);

	m_pImmediateContext = NULL;

	}

}
			case SDLK_UP:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};

	}

	D3D11_SAMPLER_DESC smpDesc;

				vertex.push_back(vertex_tmp);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pVertexShader);

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SAFE_RELEASE(m_pRenderTargetView);



	}

	}

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	m_VertexCount = 0;

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				indexlist.push_back(index);

	//First we need to start up SDL, and make sure it went ok

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

}

	auto& materials = reader.GetMaterials();



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4X4 world;

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::ObjReaderConfig reader_config;

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_VertexCount = vcount;

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

};

	if (FAILED(hr))

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

}
				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&m_pSwapChain,

			}

	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pSwapChain);

	D3D11_SUBRESOURCE_DATA irData;

		SDL_RenderClear(ren);

	WORD* pIList = new WORD[icount];

		&scDesc,

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_IndexCount = icount;

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.SampleDesc.Count = 1;







	{

struct ConstantMatrixBuffer {

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





	SAFE_RELEASE(m_pMatrixBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pTextureView = NULL;

		&m_pImmediateContext);

			case SDLK_LEFT:

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	reader_config.mtl_search_path = "./"; // Path to material files

{

		if (!ret)

		return hr;

				WORD index = idx.vertex_index;

	m_pDevice = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	tinyobj::ObjReader reader;

		return hr;

#include "DirectXManager.h"

	float    farZ = 100.0f;

	m_Angle += XMConvertToRadians(1.0f);

	{

	scDesc.SampleDesc.Quality = 0;

	//vector<WORD> index_t;

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4X4 world;

	while (SDL_PollEvent(&e) != 0)



	txDesc.MiscFlags = 0;

		SDL_Delay(1000);



			default:

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pVertexShader);

		&m_pImmediateContext);

	SDL_DestroyWindow(win);

		pIList[j] = indexList[j];

	}



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		SDL_RenderClear(ren);

			case SDLK_LEFT:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



			{

	scDesc.Windowed = TRUE;



		//User presses a key

	m_pInputLayout = NULL;

		&attrib,

	while (SDL_PollEvent(&e) != 0)

	D3D11_BUFFER_DESC ibDesc;

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_BUFFER_DESC cbDesc;

	return 0;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

		{

	m_pInputLayout = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantMaterial material; //物体の質感

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

		&attrib,

				tinyobj::real_t ty =

	SDL_DestroyRenderer(ren);

		//User requests quit

		SDL_RenderPresent(ren);

		&attrib,



#include "DirectXManager.h"

	bool ret = tinyobj::LoadObj(

	m_Viewport.TopLeftX = 0;

	//First we need to start up SDL, and make sure it went ok

	m_pIndexBuffer = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.ArraySize = 1;

		delete[] pIList;

	irData.SysMemSlicePitch = 0;

	if (!reader.Warning().empty())

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_pIndexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}



{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	for (int j = 0; j < icount; j++)

	m_pMatrixBuffer = NULL;



				indexlist.push_back(index);

	if (m_pImmediateContext)

	dsDesc.Texture2D.MipSlice = 0;

	irData.pSysMem = &pIList[0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pImmediateContext);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += fv;

	XMFLOAT4 ambient;           //環境(r,g,b)



	}

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pDevice);



	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_DEFAULT,



	SDL_Event e;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

			break;

	D3D11_SUBRESOURCE_DATA vrData;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pLightBuffer);





		size_t index_offset = 0;

				tinyobj::real_t ty =

	txDesc.Width = rect.Width();







	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

				break;

	m_pInputLayout = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_BUFFER_DESC cbDesc;

		return 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return 1;







	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	SAFE_RELEASE(m_pSampler);

				vertex.push_back(vertex_tmp);

			}

	vector<WORD> indexList;



	txDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (FAILED(hr))

	return 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Event e;

		exit(1);

	SDL_DestroyWindow(win);



		return hr;





	SAFE_RELEASE(m_pVertexShader);

	while (SDL_PollEvent(&e) != 0)



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Create Index

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;



	if (!reader.Warning().empty())

	m_pImmediateContext = NULL;

	int     vcount = vertexlist.size();



	XMFLOAT4 diffuse;           //拡散(r,g,b)



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pTexture = NULL;



	//Create Index

	D3D11_BUFFER_DESC vbDesc;



};

		SDL_Delay(1000);

	//頂点レイアウト作成

	if (FAILED(hr))

void CD3DTest::Release()

	SDL_Quit();

		else if (e.type == SDL_KEYDOWN)



	tinyobj::ObjReader reader;

	vbDesc.MiscFlags = 0;

	ibDesc.StructureByteStride = 0;

	ConstantLightBuffer clb;



	//vector<WORD> index_t;

	};

#include <iostream>

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

};



		}

		//User presses a key

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	//深度ステンシルバッファ作成

		KEY_PRESS_SURFACE_DOWN,

	float    nearZ = 0.1f;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				indexlist.push_back(index);

	std::string error;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pTexture);

	SDL_Event e;

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pTexture);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	ConstantMatrixBuffer cmb;



struct ConstantMaterial {



	vector<WORD> indexList;

	D3D11_BUFFER_DESC cbDesc;

	txDesc.MipLevels = 1;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//テクスチャ読み込み

};

	}



	{

	m_Viewport.TopLeftY = 0;

	{







		return hr;

#include <SDL.h>

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pImmediateContext);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_FreeSurface(bmp);



	ibDesc.CPUAccessFlags = 0;



			}

	//頂点シェーダー生成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	irData.SysMemSlicePitch = 0;



#ifdef _DEBUG

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_UP,

	Vertex* pVList = new Vertex[vcount];

int main(int, char**)



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

		if (!ret)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//Key press surfaces constants

}

	dsDesc.Format = txDesc.Format;

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyRenderer(ren);

	m_pDepthStencilTexture = NULL;



				WORD index = idx.vertex_index;



		return hr;

	m_Viewport.TopLeftX = 0;

		pVList[i] = vertexlist[i];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	Release();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		&m_pDevice,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		flags,

	//頂点バッファ作成

}
		D3D11_SDK_VERSION,

	auto& materials = reader.GetMaterials();

	//vector<Vertex> vertex_t;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//頂点シェーダー生成



	Release();



	//vector<WORD> index_t;





	m_Viewport.MaxDepth = 1.0f;

	irData.SysMemPitch = 0;

	ConstantMatrixBuffer cmb;

	UINT strides = sizeof(Vertex);

	tinyobj::ObjReaderConfig reader_config;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User presses a key

				break;

	m_Viewport.Width = (FLOAT)rect.Width();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	HRESULT              hr;

				// access to vertex

	//Key press surfaces constants

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pTexture = NULL;



HRESULT CD3DTest::Create(HWND hwnd)

};

			// Loop over vertices in the face.



}

	SAFE_RELEASE(m_pImmediateContext);

			break;

	// Loop over shapes



		&m_pSwapChain,

		SDL_RenderPresent(ren);

		}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyWindow(win);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		delete[] pIList;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.Windowed = TRUE;

void CD3DTest::Release()

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.eyePos, eye);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pSwapChain,

	//Create Index

	XMStoreFloat4(&clb.ambient, lightAmbient);

		if (!ret)

	m_pSwapChain->Present(0, 0);

		{

	{

		&m_pSwapChain,



	m_Angle += XMConvertToRadians(1.0f);

		size_t index_offset = 0;  // インデントのオフセット

	std::string inputfile = "test.obj";

	WORD   icount = indexList.size();

	//Vertex* pVList = new Vertex[vcount];

	scDesc.SampleDesc.Quality = 0;

	ConstantLight    pntLight; //点光源

	delete[] pIList;

}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	SAFE_RELEASE(m_pLightBuffer);





	}

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))



	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

 * Lesson 1: Hello World!

	m_pInputLayout = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//深度ステンシルバッファ作成

	delete[] pVList;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pLightBuffer);

	return;

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.SampleDesc.Quality = 0;

using std::cout; using std::endl;

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	std::string error;



	m_pTexture = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.Windowed = TRUE;





		return hr;

	vbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;



}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = 0;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return hr;



		{

	return 0;

		//User presses a key

	{



	LoadObj(vertexlist, indexList);

		size_t index_offset = 0;

	cbDesc.CPUAccessFlags = 0;

	//頂点バッファ作成

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				indexlist.push_back(idx.vertex_index);

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



			{

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pPixelShader);

	vector<WORD> indexList;

#include "DirectXManager.h"

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			default:

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	tinyobj::ObjReader reader;



		SDL_RenderClear(ren);



				tinyobj::real_t ty =

	m_Viewport.Height = (FLOAT)rect.Height();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Viewport.TopLeftX = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

		&m_pDevice,

	if (FAILED(hr))

	m_pInputLayout = NULL;

				tinyobj::real_t ty =



	for (int i = 0; i < 3; i++)

	m_VertexCount = 0;

};

	tinyobj::ObjReader reader;

	m_pPixelShader = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



#include "DirectXManager.h"

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;

	ID3D11Texture2D* pBackBuffer;

	if (!error.empty())

	SDL_FreeSurface(suf);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& attrib = reader.GetAttrib();

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4         eyePos;   //視点座標

	ConstantMaterial material; //物体の質感

				break;

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t tx =

struct ConstantLightBuffer {

	return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	//定数バッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&level,

				break;

{







				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.CPUAccessFlags = 0;

		NULL,



	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	vrData.SysMemPitch = 0;

	{



	m_pInputLayout = NULL;

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

};

		}

	vrData.SysMemSlicePitch = 0;

	{



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	auto& attrib = reader.GetAttrib();





	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4X4 view;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.SampleDesc.Count = 1;



	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			break;

struct ConstantMaterial {

	m_Viewport.MaxDepth = 1.0f;

	if (!error.empty())



	m_pDepthStencilTexture = NULL;

	}

	//深度ステンシルバッファ作成

	//ピクセルシェーダー生成

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);



	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			switch (e.key.keysym.sym)

using std::cout; using std::endl;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_VertexCount = vcount;

			index_offset += fv;

	Release();

	}

	XMFLOAT4X4 projection;

				break;

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			case SDLK_DOWN:

	std::vector<tinyobj::material_t> materials;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderCopy(ren, tex, NULL, NULL);

		// Loop over faces(polygon)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void CD3DTest::Release()

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	// Loop over shapes

	{

	vector<WORD> indexList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pSampler = NULL;

	float    fov = XMConvertToRadians(20.0f);

	txDesc.MipLevels = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_VertexCount = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 pos;               //座標(x,y,z)



		{



void CD3DTest::Render()

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_UP:

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

#include <SDL.h>

	SDL_Quit();

struct ConstantLightBuffer {

		}

		flags,

		NULL,

}

	D3D11_SAMPLER_DESC smpDesc;

	//頂点バッファ作成

		if (e.type == SDL_QUIT)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//Vertex* pVList = new Vertex[vcount];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	irData.pSysMem = &pIList[0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		KEY_PRESS_SURFACE_DEFAULT,

	ConstantLightBuffer clb;

				WORD index = idx.vertex_index;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	WORD   icount = indexList.size();



	SAFE_RELEASE(m_pTexture);



	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	int     vcount = vertexlist.size();

		return hr;

		KEY_PRESS_SURFACE_UP,

	txDesc.Width = rect.Width();

		&m_pDevice,

		m_pImmediateContext->ClearState();

				indexlist.push_back(index);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	std::string inputfile = "test.obj";





			case SDLK_LEFT:

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pPixelShader);

		{

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_RIGHT,

	ID3D11Texture2D* pBackBuffer;



	txDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	if (!reader.ParseFromFile(inputfile, reader_config))



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		// Loop over faces(polygon)



	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))



}

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);



		exit(1);

#ifdef _DEBUG

#include <iostream>

#include <SDL.h>

		&shapes,

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

	//vector<WORD> index_t;

			default:



		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pLightBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	SDL_DestroyWindow(win);

	if (FAILED(hr))

			default:

	tinyobj::attrib_t attrib;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	std::vector<tinyobj::material_t> materials;



	txDesc.MiscFlags = 0;

		//User requests quit

		//User requests quit

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);



		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

}

void CD3DTest::Release()

		return hr;



			case SDLK_DOWN:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	irData.SysMemPitch = 0;

	{





		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		delete[] pIList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.MiscFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

				vertex.push_back(vertex_tmp);



HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

		&error,

	if (!error.empty())

	D3D11_BUFFER_DESC vbDesc;

{

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pSampler = NULL;

		pVList[i] = vertexlist[i];

				break;

#include <iostream>



	{

		KEY_PRESS_SURFACE_DEFAULT,

	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_UP,

		&m_pSwapChain,

#include <iostream>

	m_pVertexShader = NULL;



	vector<WORD> indexList;

	SDL_DestroyRenderer(ren);

		R"(cube.obj)");

	{

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Quit();

				break;



	for (int i = 0; i < 3; i++)

		&level,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (e.type == SDL_QUIT)

		size_t index_offset = 0;

	SDL_FreeSurface(bmp);

	//定数バッファ作成

		KEY_PRESS_SURFACE_TOTAL

{



	tinyobj::ObjReaderConfig reader_config;



	m_VertexCount = 0;

	//頂点レイアウト作成



	dsDesc.Format = txDesc.Format;

	{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_DEFAULT,

		return 1;

	Release();

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pInputLayout = NULL;

		SDL_RenderClear(ren);

	}

	m_pSwapChain = NULL;

	cbDesc.MiscFlags = 0;



	irData.SysMemPitch = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{

	D3D11_SAMPLER_DESC smpDesc;

		&attrib,





		&error,

};

	std::vector<tinyobj::shape_t> shapes;

	dsDesc.Format = txDesc.Format;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

	m_pSwapChain = NULL;

	m_pSwapChain->Present(0, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string imagePath = "hello.bmp";



		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pSwapChain = NULL;

	txDesc.SampleDesc.Count = 1;



	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&materials,

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

int main(int, char**)



			{

	return 0;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pLightBuffer);

	{

	SAFE_RELEASE(m_pLightBuffer);

	m_pDepthStencilView = NULL;

	txDesc.CPUAccessFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//定数バッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			index_offset += fv;

			exit(1);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pSwapChain);

	m_pSampler = NULL;

	return;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				// access to vertex



	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::vector<tinyobj::material_t> materials;

		SDL_Delay(1000);



	delete[] pVList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		size_t index_offset = 0;

/*

		{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.CPUAccessFlags = 0;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//Create Index

	std::string imagePath = "hello.bmp";

	SDL_DestroyTexture(tex);

	D3D_FEATURE_LEVEL level;

	for (int j = 0; j < icount; j++)

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



	D3D11_TEXTURE2D_DESC txDesc;



			{



	if (FAILED(hr))



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	UINT offsets = 0;

	if (FAILED(hr))



			int num_vertices = shape.mesh.num_face_vertices[f];

			{

	m_pTextureView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

HRESULT CD3DTest::Create(HWND hwnd)



	if (!reader.Warning().empty())

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

{



		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		// Loop over faces(polygon)

	m_VertexCount = 0;

	SDL_DestroyWindow(win);

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	m_pMatrixBuffer = NULL;

	float    fov = XMConvertToRadians(20.0f);

	std::string imagePath = "hello.bmp";

	m_Angle += XMConvertToRadians(1.0f);



		&shapes,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			for (size_t v = 0; v < num_vertices; v++)

	ConstantLight    pntLight; //点光源

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

CD3DTest::~CD3DTest()

		pLevels,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				break;



		&m_pImmediateContext);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::vector<tinyobj::material_t> materials;

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexBuffer = NULL;

	SDL_DestroyTexture(tex);

	}

	if (FAILED(hr))

	//頂点バッファ作成

	CRect                rect;

	auto& attrib = reader.GetAttrib();

	m_pDepthStencilView = NULL;

		{

	cbDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;

#include <iostream>

		&m_pDevice,

#include <SDL.h>

	SAFE_RELEASE(m_pSwapChain);

	{

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.pSysMem = &pIList[0];

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//テクスチャ読み込み





	m_VertexCount = 0;

	if (m_pImmediateContext)

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

			}

	float    nearZ = 0.1f;

	if (FAILED(hr))



		return hr;

	std::string imagePath = "hello.bmp";



	{

	//頂点シェーダー生成



	m_pPixelShader = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//頂点シェーダー生成

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	UINT flags = 0;



	m_pDepthStencilTexture = NULL;



		&error,

#define TINYOBJLOADER_IMPLEMENTATION

		}

	tinyobj::ObjReader reader;



	tinyobj::attrib_t attrib;

	// Loop over shapes

	auto& materials = reader.GetMaterials();

			default:

	vbDesc.CPUAccessFlags = 0;

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.SampleDesc.Count = 1;

	D3D11_TEXTURE2D_DESC txDesc;

		delete[] pVList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				vertex.push_back(vertex_tmp);



	m_pSampler = NULL;



	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	/*

	m_pDevice = NULL;

		return hr;

	txDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	scDesc.BufferDesc.Width = rect.Width();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.pSysMem = &pIList[0];

	scDesc.Windowed = TRUE;



	if (FAILED(hr))

	SDL_DestroyWindow(win);

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);





		{



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	WORD* pIList = new WORD[icount];



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	txDesc.Height = rect.Height();



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.StructureByteStride = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//vector<Vertex> vertex_t;

	D3D11_SUBRESOURCE_DATA irData;





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&scDesc,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);







	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	reader_config.mtl_search_path = "./"; // Path to material files

	WORD   icount = indexList.size();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ConstantLightBuffer clb;

	{

	//テクスチャ読み込み

				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

		}

	//First we need to start up SDL, and make sure it went ok

	pBackBuffer->Release();

		&shapes,

	m_pTexture = NULL;

	txDesc.Width = rect.Width();





	WORD   icount = indexList.size();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;

	//テクスチャ読み込み



			case SDLK_UP:

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))



	XMFLOAT4X4 world;

				// access to vertex

			for (size_t v = 0; v < num_vertices; v++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				// access to vertex

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include <SDL.h>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	enum KeyPressSurfaces



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderPresent(ren);

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pImmediateContext);

		}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftX = 0;




