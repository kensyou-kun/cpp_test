	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		if (!reader.Error().empty())

	WORD* pIList = new WORD[icount];

		}





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_LEFT,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	//Vertex* pVList = new Vertex[vcount];

	/*

			for (size_t v = 0; v < num_vertices; v++)

	std::string imagePath = "hello.bmp";

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantLight {

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

	XMFLOAT4         ambient;  //環境光(r,g,b)

				break;

		return hr;

			case SDLK_UP:



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_DestroyRenderer(ren);

void CD3DTest::Release()





	//テクスチャ読み込み



{

};



	//vector<WORD> index_t;

void CD3DTest::Release()

#include <SDL.h>

int SEGMENT = 36;

		SDL_Delay(1000);

	m_Viewport.TopLeftX = 0;



	m_pIndexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.BufferDesc.Height = rect.Height();

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		}

	irData.pSysMem = &pIList[0];

			case SDLK_UP:

	ibDesc.CPUAccessFlags = 0;

	std::string error;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				WORD index = idx.vertex_index;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}

	irData.SysMemPitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferCount = 1;

	m_pIndexBuffer = NULL;

}

	m_pMatrixBuffer = NULL;

	//ピクセルシェーダー生成



	m_pIndexBuffer = NULL;

	vrData.SysMemSlicePitch = 0;

				break;

{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

}

	if (FAILED(hr))



CD3DTest::CD3DTest()

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pMatrixBuffer);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	txDesc.Height = rect.Height();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return 1;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	SDL_Event e;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pInputLayout);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

	scDesc.BufferCount = 1;

			case SDLK_RIGHT:

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

	SDL_Event e;

	scDesc.Windowed = TRUE;

	for (int i = 0; i < vcount; i++)

	//First we need to start up SDL, and make sure it went ok



			exit(1);

	txDesc.SampleDesc.Count = 1;

	m_VertexCount = 0;



	txDesc.Height = rect.Height();

	txDesc.ArraySize = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	std::string inputfile = "test.obj";

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			index_offset += fv;

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pTexture);

				break;



				break;

	}

		{

	SDL_DestroyWindow(win);

	SDL_DestroyRenderer(ren);

		return hr;

	tinyobj::attrib_t attrib;

			//Select surfaces based on key press

	std::string error;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	/*

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_DestroyWindow(win);

	m_IndexCount = 0;

			break;

			exit(1);

	}

		//User requests quit

		{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&m_pImmediateContext);

	if (FAILED(hr))

	if (FAILED(hr))



		SDL_RenderClear(ren);



	if (FAILED(hr))

	delete[] pIList;

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_UP,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	return;



		flags,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				// access to vertex

	scDesc.SampleDesc.Quality = 0;



	}

	reader_config.mtl_search_path = "./"; // Path to material files

	irData.SysMemSlicePitch = 0;

	{

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		}

int main(int, char**)

	//vector<WORD> index_t;

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		SDL_RenderClear(ren);



CD3DTest::~CD3DTest()

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

		}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_Angle += XMConvertToRadians(1.0f);

	{

	auto& attrib = reader.GetAttrib();

		&m_pImmediateContext);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

{

	SAFE_RELEASE(m_pVertexBuffer);

		}

		pLevels,

		if (!ret)

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 pos;               //座標(x,y,z)

{

			{

	}

				break;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t tx =



	D3D11_BUFFER_DESC cbDesc;

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;

	SDL_FreeSurface(bmp);

		{

			case SDLK_RIGHT:

	bool ret = tinyobj::LoadObj(

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		return hr;

	cbDesc.CPUAccessFlags = 0;



	/*

	SAFE_RELEASE(m_pTextureView);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}



				vertex.push_back(vertex_tmp);

	XMFLOAT4 pos;               //座標(x,y,z)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			{



	if (FAILED(hr))

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pSampler);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		pVList[i] = vertexlist[i];

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

	vbDesc.StructureByteStride = 0;



		return hr;

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

		}

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			//Select surfaces based on key press

	D3D11_SAMPLER_DESC smpDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	pBackBuffer->Release();

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}





	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

			{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		m_pImmediateContext->ClearState();

		if (!reader.Error().empty())

	m_pIndexBuffer = NULL;

	vrData.SysMemPitch = 0;

	cbDesc.CPUAccessFlags = 0;



		if (!ret)

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vrData.SysMemSlicePitch = 0;

	for (int i = 0; i < 3; i++)



	Release();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{



	scDesc.BufferDesc.Height = rect.Height();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



#ifdef _DEBUG

		return hr;

			exit(1);

		//User presses a key

{

	m_pMatrixBuffer = NULL;





				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pPixelShader);

		}







	SDL_FreeSurface(suf);

	SDL_DestroyWindow(win);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		else if (e.type == SDL_KEYDOWN)

};

		KEY_PRESS_SURFACE_DOWN,

	return 0;

		}

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (!error.empty())

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		&scDesc,

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				break;

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.Warning().empty())







	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

}





	m_Viewport.MaxDepth = 1.0f;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SDL_FreeSurface(suf);

	//vector<WORD> index_t;

	if (FAILED(hr))

	//頂点シェーダー生成

	WORD   icount = indexList.size();

		delete[] pVList;

	return 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];







{

	UINT strides = sizeof(Vertex);

		return hr;

		SDL_RenderClear(ren);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			}

	txDesc.MipLevels = 1;

/*

				tinyobj::real_t ty =

	D3D_FEATURE_LEVEL level;



	SDL_Event e;

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 pos;               //座標(x,y,z)

	//定数バッファ作成

		return hr;

		&shapes,





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//Key press surfaces constants

	m_pMatrixBuffer = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		if (e.type == SDL_QUIT)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		&m_pSwapChain,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	txDesc.MiscFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

{

	float    farZ = 100.0f;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

				// access to vertex



	}

	tinyobj::ObjReader reader;

		}

/*

	DXGI_SWAP_CHAIN_DESC scDesc;

			}



	if (FAILED(hr))

	{

using std::cout; using std::endl;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		KEY_PRESS_SURFACE_RIGHT,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}



	HRESULT              hr;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	vbDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;





	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			index_offset += fv;

	scDesc.SampleDesc.Count = 1;

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Event e;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.SampleDesc.Quality = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		1,

		NULL,

	irData.pSysMem = &pIList[0];

	m_Viewport.TopLeftX = 0;

	irData.SysMemPitch = 0;

	{

	std::string imagePath = "hello.bmp";

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	float    farZ = 100.0f;

struct ConstantMatrixBuffer {

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t ty =

CD3DTest::~CD3DTest()

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pPixelShader = NULL;

#include <SDL.h>

	float    farZ = 100.0f;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			for (size_t v = 0; v < fv; v++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	auto& shapes = reader.GetShapes();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

int SEGMENT = 36;

		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT strides = sizeof(Vertex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	m_VertexCount = vcount;

		&materials,

	int     vcount = vertexlist.size();

CD3DTest::~CD3DTest()

		return hr;

		//User requests quit

	SAFE_RELEASE(m_pVertexShader);

	auto& shapes = reader.GetShapes();

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pSampler);

	D3D11_SAMPLER_DESC smpDesc;

CD3DTest::~CD3DTest()

	UINT flags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	/*

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		&shapes,

int main(int, char**)

	//ビューポート設定

	SDL_DestroyWindow(win);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	scDesc.SampleDesc.Quality = 0;

	irData.SysMemSlicePitch = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		return hr;

	std::string error;

	for (size_t s = 0; s < shapes.size(); s++)

	float    fov = XMConvertToRadians(20.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	}

	SAFE_RELEASE(m_pRenderTargetView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	// Loop over shapes

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.MaxDepth = 1.0f;

	}

				break;

				WORD index = idx.vertex_index;

		return 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_RenderClear(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	ConstantLightBuffer clb;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pSampler);

		pVList[i] = vertexlist[i];



	if (!error.empty())



CD3DTest::~CD3DTest()

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	while (SDL_PollEvent(&e) != 0)

		}

	txDesc.SampleDesc.Quality = 0;





	bool ret = tinyobj::LoadObj(

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

		&m_pDevice,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

		return hr;

				break;

	//Create Index

	m_pVertexBuffer = NULL;

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_DEFAULT,





	auto& attrib = reader.GetAttrib();

	dsDesc.Texture2D.MipSlice = 0;



	ConstantLight    pntLight; //点光源

	m_pIndexBuffer = NULL;

	for (const auto& shape : shapes)

	ConstantLight    pntLight; //点光源

struct ConstantMaterial {

			{



	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Width = rect.Width();

#include <iostream>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	for (const auto& shape : shapes)

	{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

CD3DTest::~CD3DTest()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		return hr;



	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	ibDesc.MiscFlags = 0;

	/*

	XMFLOAT4X4 projection;

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	SDL_FreeSurface(bmp);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pLightBuffer = NULL;

#include <iostream>

	vbDesc.StructureByteStride = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

struct ConstantLightBuffer {

			exit(1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_Event e;

	cbDesc.CPUAccessFlags = 0;

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}



 */

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	}*/

	std::string imagePath = "hello.bmp";

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{



	ConstantMatrixBuffer cmb;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			}

		return hr;

	float    fov = XMConvertToRadians(20.0f);

};

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	scDesc.OutputWindow = hwnd;

	std::vector<tinyobj::material_t> materials;

	}

		SDL_RenderClear(ren);

	D3D11_SUBRESOURCE_DATA vrData;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pTextureView = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (int i = 0; i < vcount; i++)



		KEY_PRESS_SURFACE_DEFAULT,



		//User requests quit

			{

	{



				// access to vertex

	//定数バッファ作成

			}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Create Index

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Width = rect.Width();

	vbDesc.CPUAccessFlags = 0;

	/*



		KEY_PRESS_SURFACE_UP,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//インデックスバッファ作成

	m_pImmediateContext = NULL;



		return hr;

	XMFLOAT4X4 world;

	std::vector<tinyobj::shape_t> shapes;

			{

	SDL_FreeSurface(suf);

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.SampleDesc.Count = 1;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		//User presses a key

	txDesc.Width = rect.Width();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{



	txDesc.SampleDesc.Quality = 0;

#include <SDL.h>

{

	HRESULT              hr;

	}

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_DOWN,



	D3D11_TEXTURE2D_DESC txDesc;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pTexture = NULL;

			exit(1);

		KEY_PRESS_SURFACE_LEFT,



	}

		&m_pImmediateContext);

	m_pDevice = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;









void CD3DTest::Render()

	float    farZ = 100.0f;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

				// access to vertex

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		D3D_DRIVER_TYPE_HARDWARE,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

	HRESULT              hr;

	{



int main(int, char**)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	tinyobj::ObjReaderConfig reader_config;

	auto& attrib = reader.GetAttrib();



	return;





	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_DEFAULT,

		{

	for (int j = 0; j < icount; j++)

};



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			}



	{

/*

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//vector<WORD> index_t;



			case SDLK_DOWN:

	{

	}

{

};

#include <SDL.h>

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}

		SDL_RenderClear(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.CPUAccessFlags = 0;

	txDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	irData.SysMemPitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	int     vcount = vertexlist.size();

	m_pInputLayout = NULL;

int main(int, char**)

				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	{

		&m_pImmediateContext);





			}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		}



	//ピクセルシェーダー生成

	if (m_pImmediateContext)

struct ConstantLightBuffer {

	dsDesc.Format = txDesc.Format;

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4X4 view;

	if (FAILED(hr))



		}

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		// Loop over faces(polygon)

			case SDLK_DOWN:



	tinyobj::attrib_t attrib;

		SDL_RenderPresent(ren);



	SDL_DestroyTexture(tex);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&shapes,



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	irData.SysMemSlicePitch = 0;

		{

	{

		KEY_PRESS_SURFACE_DOWN,

	std::vector<tinyobj::material_t> materials;

	vrData.SysMemPitch = 0;

		NULL,

#include <iostream>

	SAFE_RELEASE(m_pSwapChain);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	//ピクセルシェーダー生成



	SAFE_RELEASE(m_pRenderTargetView);





{

			case SDLK_UP:

		pVList[i] = vertexlist[i];

	{

};

using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#include <iostream>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferDesc.Height = rect.Height();

	m_VertexCount = 0;

	SDL_Event e;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				WORD index = idx.vertex_index;

};

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty =



	//Clean up our objects and quit

		&m_pSwapChain,

				vertex.push_back(vertex_tmp);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_RIGHT:

		flags,

	//Vertex* pVList = new Vertex[vcount];

using std::cout; using std::endl;





			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pPixelShader);

	for (int i = 0; i < 3; i++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





		delete[] pVList;

	SDL_DestroyRenderer(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pPixelShader);



	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_RenderPresent(ren);

		delete[] pIList;



{

		&level,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

		&shapes,

			case SDLK_LEFT:

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			case SDLK_DOWN:

	ibDesc.StructureByteStride = 0;

	}

	{



	{

	cbDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		//User presses a key

				// access to vertex

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext = NULL;

	if (FAILED(hr))

struct ConstantLight {

				break;

	Release();

				tinyobj::real_t tx =



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		pIList[j] = indexList[j];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vector<WORD> indexList;

			case SDLK_LEFT:

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include "DirectXManager.h"

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		SDL_RenderClear(ren);

				tinyobj::real_t tx =

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//深度ステンシルバッファ作成

	if (FAILED(hr))

			case SDLK_DOWN:

		{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	tinyobj::ObjReader reader;

	D3D11_SUBRESOURCE_DATA vrData;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	D3D11_TEXTURE2D_DESC txDesc;

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (!reader.Warning().empty())

		// Loop over faces(polygon)

	Vertex* pVList = new Vertex[vcount];

		exit(1);



		pIList[j] = indexList[j];

		return hr;

}

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.OutputWindow = hwnd;

	txDesc.MipLevels = 1;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderClear(ren);

	ibDesc.CPUAccessFlags = 0;



	auto& shapes = reader.GetShapes();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.MiscFlags = 0;

}

		D3D11_SDK_VERSION,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



}

	irData.pSysMem = &pIList[0];

		size_t index_offset = 0;

	}

		size_t index_offset = 0;  // インデントのオフセット

	for (int i = 0; i < 3; i++)



	vbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return 1;

	Release();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





 */



	//頂点バッファ作成

		&m_pSwapChain,

	m_Viewport.Width = (FLOAT)rect.Width();

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (m_pImmediateContext)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	m_pSwapChain->Present(0, 0);

{



	std::string imagePath = "hello.bmp";



		}



		m_pImmediateContext->ClearState();

	scDesc.SampleDesc.Count = 1;

		if (!reader.Error().empty())

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.MiscFlags = 0;

	auto& materials = reader.GetMaterials();



	txDesc.Width = rect.Width();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	//テクスチャ読み込み

	if (FAILED(hr))

		return hr;





	{

	//vector<Vertex> vertex_t;

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		m_pImmediateContext->ClearState();

HRESULT CD3DTest::Create(HWND hwnd)

	}

	SAFE_RELEASE(m_pSampler);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&m_pDevice,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMFLOAT4 ambient;           //環境(r,g,b)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	vector<Vertex> vertexlist;

	if (FAILED(hr))

#endif

		&scDesc,

	txDesc.MipLevels = 1;



HRESULT CD3DTest::Create(HWND hwnd)



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	DXGI_SWAP_CHAIN_DESC scDesc;



		&m_pImmediateContext);



	{

	if (FAILED(hr))

		}

	XMFLOAT4 pos;               //座標(x,y,z)



			for (size_t v = 0; v < num_vertices; v++)

	float    nearZ = 0.1f;

int SEGMENT = 36;

		}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//深度ステンシルバッファ作成

	m_pTextureView = NULL;



{

	UINT flags = 0;

		&m_pImmediateContext);

	ID3D11Texture2D* pBackBuffer;

	//Clean up our objects and quit

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		//User requests quit







{

			exit(1);

	scDesc.SampleDesc.Quality = 0;

	float    farZ = 100.0f;

			case SDLK_DOWN:

	ibDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

		}



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(idx.vertex_index);

				break;

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t tx =

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SAFE_RELEASE(m_pVertexShader);

		flags,



	m_Viewport.MaxDepth = 1.0f;



	for (const auto& shape : shapes)

	SDL_Quit();

	SDL_DestroyTexture(tex);

	}*/

void CD3DTest::Release()

	m_pImmediateContext = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	::GetClientRect(hwnd, &rect);



	vector<Vertex> vertexlist;

	irData.SysMemSlicePitch = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	WORD* pIList = new WORD[icount];



{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		&m_pImmediateContext);

				indexlist.push_back(idx.vertex_index);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pDevice,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	SAFE_RELEASE(m_pDevice);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		return hr;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	::GetClientRect(hwnd, &rect);

	}

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		delete[] pVList;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

		D3D11_SDK_VERSION,



	{

		KEY_PRESS_SURFACE_TOTAL

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				// access to vertex

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

HRESULT CD3DTest::Create(HWND hwnd)

				vertex.push_back(vertex_tmp);

int main(int, char**)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pIndexBuffer = NULL;





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//頂点バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	std::vector<tinyobj::shape_t> shapes;

	SDL_FreeSurface(suf);

			{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	WORD   icount = indexList.size();

	m_Viewport.MaxDepth = 1.0f;

				vertex.push_back(vertex_tmp);

				// access to vertex

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.Usage = D3D11_USAGE_DEFAULT;







	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	DXGI_SWAP_CHAIN_DESC scDesc;

}
	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vrData.SysMemSlicePitch = 0;

	pBackBuffer->Release();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pMatrixBuffer = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	D3D11_BUFFER_DESC ibDesc;

	auto& shapes = reader.GetShapes();



	vrData.SysMemSlicePitch = 0;

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





		size_t index_offset = 0;

#include <SDL.h>

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;





	cbDesc.MiscFlags = 0;

			}

	SAFE_RELEASE(m_pTexture);



	// Loop over shapes

	float    nearZ = 0.1f;

	SDL_FreeSurface(suf);

	m_pTexture = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

struct ConstantLightBuffer {

	vrData.pSysMem = &pVList[0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ConstantMaterial material; //物体の質感



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.SampleDesc.Count = 1;



using std::cout; using std::endl;

	m_pDepthStencilView = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))



	ID3D11Texture2D* pBackBuffer;

	scDesc.Windowed = TRUE;

	m_pSwapChain = NULL;



		&materials,

#ifdef _DEBUG

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



#include <iostream>

	m_VertexCount = 0;

	SDL_DestroyTexture(tex);

		R"(cube.obj)");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	/*



	if (FAILED(hr))



	SDL_DestroyTexture(tex);

/*

	m_Viewport.TopLeftX = 0;



{

		{

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_TOTAL

	txDesc.SampleDesc.Quality = 0;

		// Loop over faces(polygon)

			exit(1);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	txDesc.Height = rect.Height();



	ConstantMaterial material; //物体の質感

	if (!reader.Warning().empty())



void CD3DTest::Release()

	std::string inputfile = "test.obj";

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	cbDesc.StructureByteStride = 0;



{

			case SDLK_UP:

	auto& attrib = reader.GetAttrib();



	//Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	tinyobj::ObjReaderConfig reader_config;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_UP,

		}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



			{

			}

#include <SDL.h>

	irData.pSysMem = &pIList[0];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

struct ConstantMaterial {

	m_IndexCount = icount;

	SAFE_RELEASE(m_pTexture);

using std::cout; using std::endl;

	//vector<WORD> index_t;



CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	m_pImmediateContext = NULL;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

{

	SDL_DestroyWindow(win);

			case SDLK_UP:

		KEY_PRESS_SURFACE_LEFT,

	txDesc.ArraySize = 1;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	::GetClientRect(hwnd, &rect);

		{

	cbDesc.StructureByteStride = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	/*



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)

struct ConstantLight {



	SDL_DestroyRenderer(ren);

		return hr;





	cbDesc.StructureByteStride = 0;

	scDesc.Windowed = TRUE;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



#include "DirectXManager.h"

	}

	txDesc.Width = rect.Width();

	HRESULT              hr;

				tinyobj::real_t ty =

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		&shapes,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#include <SDL.h>

 * Lesson 1: Hello World!

struct ConstantLight {

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::CD3DTest()

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pIndexBuffer = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}

			exit(1);

	scDesc.SampleDesc.Quality = 0;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (!reader.ParseFromFile(inputfile, reader_config))



}

	pBackBuffer->Release();

	D3D11_SAMPLER_DESC smpDesc;

#include "DirectXManager.h"



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.StructureByteStride = 0;

#endif



	for (const auto& shape : shapes)

	bool ret = tinyobj::LoadObj(



CD3DTest::~CD3DTest()



	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

void CD3DTest::Release()

			case SDLK_LEFT:



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

		&shapes,

	m_pDepthStencilView = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		return 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

	tinyobj::ObjReaderConfig reader_config;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

		{







		&scDesc,



		{



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.SysMemPitch = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pLightBuffer);

			index_offset += num_vertices;



	delete[] pIList;

	//深度ステンシルバッファ作成



{

	if (FAILED(hr))

		exit(1);



	SAFE_RELEASE(m_pImmediateContext);

};

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pTexture = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.MiscFlags = 0;

	//vector<WORD> index_t;

	{

			index_offset += fv;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	UINT offsets = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	//定数バッファ作成

		//User presses a key

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	if (m_pImmediateContext)

		if (e.type == SDL_QUIT)



		KEY_PRESS_SURFACE_UP,





	while (SDL_PollEvent(&e) != 0)





	delete[] pIList;



	SDL_DestroyTexture(tex);

};

		{

CD3DTest::~CD3DTest()

struct ConstantLightBuffer {

	if (!reader.ParseFromFile(inputfile, reader_config))

HRESULT CD3DTest::Create(HWND hwnd)

	}

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	int     vcount = vertexlist.size();

	}

	vector<Vertex> vertexlist;

		size_t index_offset = 0;

struct ConstantMaterial {

	m_pMatrixBuffer = NULL;

	CRect                rect;



		KEY_PRESS_SURFACE_TOTAL



	std::vector<tinyobj::material_t> materials;



	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



				vertex.push_back(vertex_tmp);

	m_Viewport.TopLeftX = 0;







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

struct ConstantLightBuffer {

		flags,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_IMPLEMENTATION





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pIndexBuffer = NULL;

struct ConstantLightBuffer {

	txDesc.MiscFlags = 0;



	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

				WORD index = idx.vertex_index;



			exit(1);

CD3DTest::CD3DTest()

			for (size_t v = 0; v < fv; v++)

	m_pPixelShader = NULL;

		if (!reader.Error().empty())

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	D3D_FEATURE_LEVEL level;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	}

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_DOWN:

	SAFE_RELEASE(m_pSampler);

	std::string imagePath = "hello.bmp";

			{

#endif

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	vrData.pSysMem = &pVList[0];



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Vertex* pVList = new Vertex[vcount];



	// Loop over shapes

			for (size_t v = 0; v < num_vertices; v++)

};





	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	};

HRESULT CD3DTest::Create(HWND hwnd)



	}

	{

			exit(1);

int main(int, char**)



	XMFLOAT4X4 projection;

{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				vertex.push_back(vertex_tmp);



	SDL_Quit();

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.Windowed = TRUE;

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

	}

			default:

	cbDesc.MiscFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_UP:

 */

#endif

#include <iostream>

	SAFE_RELEASE(m_pDevice);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

	reader_config.mtl_search_path = "./"; // Path to material files





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User requests quit

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pMatrixBuffer);

};

		SDL_Delay(1000);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

CD3DTest::~CD3DTest()

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





			{

	cbDesc.CPUAccessFlags = 0;



	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.TopLeftX = 0;



	DXGI_SWAP_CHAIN_DESC scDesc;

		}

			{

};

#include <iostream>

	WORD* pIList = new WORD[icount];



	pBackBuffer->Release();

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files



	m_pDevice = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_DOWN:

	irData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_TOTAL

		cout << "SDL_INIT_ERROR" << endl;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderClear(ren);



	if (FAILED(hr))

	SDL_Event e;

		SDL_RenderPresent(ren);

};

CD3DTest::~CD3DTest()

		{

	XMFLOAT4 specular;          //反射(r,g,b)



	scDesc.Windowed = TRUE;



	{

		pIList[j] = indexList[j];

		return hr;



		return hr;

	while (SDL_PollEvent(&e) != 0)

	if (m_pImmediateContext)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_Viewport.MinDepth = 0.0f;



	float    fov = XMConvertToRadians(20.0f);

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.SampleDesc.Count = 1;

		exit(1);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pSampler);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		m_pImmediateContext->ClearState();

	irData.SysMemPitch = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_IndexCount = icount;





		return hr;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		pVList[i] = vertexlist[i];



		SDL_Delay(1000);

	m_pIndexBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	float    nearZ = 0.1f;

}

		else if (e.type == SDL_KEYDOWN)

	std::string error;



struct ConstantLight {

struct ConstantMatrixBuffer {

			case SDLK_UP:

				tinyobj::real_t tx =

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	bool ret = tinyobj::LoadObj(

int main(int, char**)

		1,

	if (FAILED(hr))



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		if (!ret)

	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.Width = rect.Width();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#endif





{





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





int main(int, char**)

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pRenderTargetView = NULL;



	}



	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		&error,

	m_pSwapChain = NULL;

	return;

		R"(cube.obj)");

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

/*



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	DXGI_SWAP_CHAIN_DESC scDesc;

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pIndexBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	{



		&m_pImmediateContext);

	};

	if (m_pImmediateContext)

	//Clean up our objects and quit

	if (FAILED(hr))



			}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pVertexShader = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pSwapChain->Present(0, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



#include "DirectXManager.h"

		KEY_PRESS_SURFACE_LEFT,

		&m_pDevice,

	SDL_Quit();



			index_offset += num_vertices;



	WORD   icount = indexList.size();

	txDesc.ArraySize = 1;

	if (FAILED(hr))

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);



	}

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		D3D_DRIVER_TYPE_HARDWARE,



	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		pLevels,

	vbDesc.MiscFlags = 0;



	m_pInputLayout = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();

	SDL_DestroyWindow(win);

	float    nearZ = 0.1f;

	m_pDevice = NULL;

			switch (e.key.keysym.sym)



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	WORD* pIList = new WORD[icount];



	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	vrData.pSysMem = &pVList[0];

	SDL_FreeSurface(bmp);

	dsDesc.Format = txDesc.Format;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

		}

	if (FAILED(hr))

#include <SDL.h>

	CRect                rect;

		return hr;

	SDL_DestroyTexture(tex);



		pVList[i] = vertexlist[i];

		&attrib,

	scDesc.BufferCount = 1;

	//頂点シェーダー生成

	D3D11_SUBRESOURCE_DATA irData;

struct ConstantLight {



	if (!reader.Warning().empty())

		pIList[j] = indexList[j];

	{



			}

		//User requests quit

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pTexture = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//頂点バッファ作成

	//頂点バッファ作成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	pBackBuffer->Release();

			{

	//深度ステンシルバッファ作成

			case SDLK_RIGHT:

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);







	txDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

/*

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_DestroyRenderer(ren);

}

		D3D11_SDK_VERSION,

		// Loop over faces(polygon)



	vector<WORD> indexList;

		&attrib,



		&scDesc,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

		{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	auto& shapes = reader.GetShapes();

		SDL_RenderClear(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_BUFFER_DESC cbDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];







			index_offset += fv;



	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pIndexBuffer);

	m_pTexture = NULL;

	Release();

	txDesc.CPUAccessFlags = 0;



	cbDesc.MiscFlags = 0;





	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyWindow(win);



	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	int     vcount = vertexlist.size();

#define TINYOBJLOADER_IMPLEMENTATION



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pTexture = NULL;

	m_pLightBuffer = NULL;

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pLightBuffer);

	//Key press surfaces constants

		flags,

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4         eyePos;   //視点座標





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

	SAFE_RELEASE(m_pIndexBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.MiscFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (int j = 0; j < icount; j++)

	ConstantLightBuffer clb;

	ZeroMemory(&txDesc, sizeof(txDesc));





	{



			//Select surfaces based on key press

	return hr;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return;

		SDL_RenderClear(ren);

	}

int main(int, char**)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.StructureByteStride = 0;

			//Select surfaces based on key press

	SAFE_RELEASE(m_pDevice);

void CD3DTest::Render()

	m_IndexCount = icount;

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	vrData.SysMemSlicePitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	cbDesc.CPUAccessFlags = 0;

	//Key press surfaces constants

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

{



		SDL_RenderClear(ren);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vrData.SysMemPitch = 0;



	cbDesc.MiscFlags = 0;

	}



	m_pRenderTargetView = NULL;

			//Select surfaces based on key press

	XMStoreFloat4(&clb.ambient, lightAmbient);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//定数バッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		pLevels,

	SDL_DestroyTexture(tex);

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//頂点シェーダー生成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



}

	ibDesc.MiscFlags = 0;

	//Clean up our objects and quit

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (!error.empty())

	vrData.SysMemSlicePitch = 0;

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D_FEATURE_LEVEL level;

 */

	//ビューポート設定

			// Loop over vertices in the face.

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pSampler);



		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	ibDesc.MiscFlags = 0;

		{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

 */

	}

	m_Viewport.TopLeftY = 0;

	return hr;



		&level,

			}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			}

	}

		return hr;

		&materials,





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





		NULL,







	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_FreeSurface(bmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;

	}

	bool ret = tinyobj::LoadObj(

	for (size_t s = 0; s < shapes.size(); s++)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	XMFLOAT4X4 world;

	SDL_DestroyRenderer(ren);



	XMFLOAT4X4 world;

	return 0;



	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferCount = 1;

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



#include <iostream>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pSampler);



	m_Viewport.Height = (FLOAT)rect.Height();







	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	m_pDevice = NULL;

}
				tinyobj::real_t ty =



	m_pInputLayout = NULL;

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

		return 1;

				break;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    fov = XMConvertToRadians(20.0f);

	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

	}

	m_pLightBuffer = NULL;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.CPUAccessFlags = 0;

	UINT offsets = 0;

	SDL_Quit();



	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D_FEATURE_LEVEL level;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}


	m_Viewport.TopLeftX = 0;

	cbDesc.MiscFlags = 0;



}

}



	if (m_pImmediateContext)

int main(int, char**)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	float    nearZ = 0.1f;

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//Vertex* pVList = new Vertex[vcount];

		return hr;

	for (const auto& shape : shapes)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	scDesc.BufferCount = 1;

};



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	while (SDL_PollEvent(&e) != 0)



	}



struct ConstantMaterial {

	Release();



				break;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyRenderer(ren);



		return 1;

		exit(1);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.OutputWindow = hwnd;

	m_Angle += XMConvertToRadians(1.0f);

				WORD index = idx.vertex_index;

}

	float    fov = XMConvertToRadians(20.0f);

			default:

	SAFE_RELEASE(m_pInputLayout);





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



{

	scDesc.SampleDesc.Count = 1;

	}

	};

			for (size_t v = 0; v < num_vertices; v++)

	vbDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA vrData;



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

}

	enum KeyPressSurfaces



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pLightBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pDevice);

				break;

	XMFLOAT4X4 world;

		}

	delete[] pIList;

	scDesc.Windowed = TRUE;

	}*/

	Release();



#include <SDL.h>

			}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	float    nearZ = 0.1f;

		D3D_DRIVER_TYPE_HARDWARE,



			index_offset += num_vertices;



	cbDesc.MiscFlags = 0;

			case SDLK_UP:

{





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	}

}

		if (!ret)

	scDesc.Windowed = TRUE;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pDepthStencilTexture);



	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferCount = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_FreeSurface(suf);

	{



using std::cout; using std::endl;

		return 1;

		{

#include <iostream>



		KEY_PRESS_SURFACE_RIGHT,

	float    farZ = 100.0f;



				break;

	txDesc.ArraySize = 1;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	Release();

	auto& materials = reader.GetMaterials();

	ConstantMaterial material; //物体の質感

	{

	}

	// Loop over shapes

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t ty =

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pPixelShader);

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	ibDesc.CPUAccessFlags = 0;

	//Create Index

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

		return hr;



				vertex.push_back(vertex_tmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&m_pImmediateContext);

		//User presses a key

				vertex.push_back(vertex_tmp);

		D3D11_SDK_VERSION,

				break;

		return hr;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



{



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_DOWN,

		pVList[i] = vertexlist[i];

	m_Viewport.MinDepth = 0.0f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.eyePos, eye);

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_TOTAL

			{

	irData.SysMemSlicePitch = 0;

	std::vector<tinyobj::material_t> materials;

			case SDLK_RIGHT:

	scDesc.BufferDesc.Height = rect.Height();



		return hr;



	{

	m_Viewport.Width = (FLOAT)rect.Width();

	{

	m_IndexCount = icount;

			case SDLK_UP:





	UINT offsets = 0;

	txDesc.MipLevels = 1;



		delete[] pIList;

	SDL_DestroyTexture(tex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

		// Loop over faces(polygon)

	SDL_DestroyRenderer(ren);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

}





		return 1;

	SAFE_RELEASE(m_pDepthStencilView);

CD3DTest::~CD3DTest()

			exit(1);

		pLevels,

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

			switch (e.key.keysym.sym)

	vrData.pSysMem = &pVList[0];

	//Clean up our objects and quit

	}*/

			exit(1);

	D3D11_SAMPLER_DESC smpDesc;

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pTexture);



	SAFE_RELEASE(m_pSampler);

			switch (e.key.keysym.sym)

		return 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				indexlist.push_back(index);

	irData.SysMemSlicePitch = 0;

	XMFLOAT4         eyePos;   //視点座標

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferCount = 1;

	SDL_DestroyRenderer(ren);



	SDL_DestroyRenderer(ren);

 * Lesson 1: Hello World!

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

	//vector<WORD> index_t;

				indexlist.push_back(index);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.SampleDesc.Quality = 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.StructureByteStride = 0;





	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//vector<WORD> index_t;

	if (!error.empty())

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float    nearZ = 0.1f;

		flags,

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

};



#include <SDL.h>

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.SampleDesc.Quality = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	auto& attrib = reader.GetAttrib();

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//定数バッファ作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_FreeSurface(bmp);

{

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_FreeSurface(suf);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_LEFT,

		&m_pImmediateContext);

#include <iostream>

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{



				indexlist.push_back(index);



	cbDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	vbDesc.StructureByteStride = 0;



		return hr;



		}

	//First we need to start up SDL, and make sure it went ok

		&materials,



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

};

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,



	reader_config.mtl_search_path = "./"; // Path to material files



	scDesc.BufferCount = 1;

	return 0;





	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		R"(cube.obj)");

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pMatrixBuffer);

	auto& materials = reader.GetMaterials();

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	auto& materials = reader.GetMaterials();

				break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Quit();

	int     vcount = vertexlist.size();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		cout << "SDL_INIT_ERROR" << endl;

};





	::GetClientRect(hwnd, &rect);

	m_pVertexBuffer = NULL;

		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;

		return hr;

			{

	UINT flags = 0;

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&m_pImmediateContext);

	SAFE_RELEASE(m_pRenderTargetView);

	//ピクセルシェーダー生成



	}

	m_pMatrixBuffer = NULL;



/*

	SAFE_RELEASE(m_pDevice);

	return 0;

		NULL,

		SDL_RenderPresent(ren);

				break;

	}*/

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//深度ステンシルバッファ作成





				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pIndexBuffer = NULL;

		size_t index_offset = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ID3D11Texture2D* pBackBuffer;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pIndexBuffer = NULL;

	Release();

		}

	cbDesc.CPUAccessFlags = 0;

	//インデックスバッファ作成



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_TOTAL

		//User requests quit

/*

	SDL_DestroyTexture(tex);

	m_pSampler = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		size_t index_offset = 0;

			exit(1);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



				tinyobj::real_t ty =

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);



	if (FAILED(hr))

	ConstantLightBuffer clb;

#include <SDL.h>





	::GetClientRect(hwnd, &rect);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

	ConstantLight    pntLight; //点光源

	vrData.SysMemPitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	D3D_FEATURE_LEVEL level;



	{



	m_Viewport.Width = (FLOAT)rect.Width();



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	irData.pSysMem = &pIList[0];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	// Loop over shapes

	{



		pIList[j] = indexList[j];

struct ConstantMatrixBuffer {



		return hr;

struct ConstantLight {

	cbDesc.MiscFlags = 0;

		// Loop over faces(polygon)



		&m_pDevice,

	SAFE_RELEASE(m_pDepthStencilTexture);



	vrData.SysMemPitch = 0;

	}*/

	SAFE_RELEASE(m_pDevice);

		SDL_RenderClear(ren);

	while (SDL_PollEvent(&e) != 0)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SDL_FreeSurface(bmp);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return 1;

			}

	SAFE_RELEASE(m_pLightBuffer);

		if (e.type == SDL_QUIT)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Key press surfaces constants



		SDL_RenderCopy(ren, tex, NULL, NULL);

CD3DTest::CD3DTest()

	cbDesc.MiscFlags = 0;

		exit(1);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Clean up our objects and quit





	SDL_FreeSurface(bmp);

	m_VertexCount = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



			// Loop over vertices in the face.

	txDesc.Width = rect.Width();

	SDL_DestroyTexture(tex);

	ibDesc.StructureByteStride = 0;

{

	XMFLOAT4X4 projection;

		return hr;

	SDL_Quit();

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4 ambient;           //環境(r,g,b)





	}

		return hr;



		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	}

		KEY_PRESS_SURFACE_DOWN,

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	m_VertexCount = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4X4 projection;

	{

	vrData.SysMemPitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&scDesc,

	SDL_Quit();

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);







	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//vector<Vertex> vertex_t;

		return hr;



		return 1;





				break;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}



struct ConstantLightBuffer {

	cbDesc.MiscFlags = 0;

				break;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

	auto& materials = reader.GetMaterials();

	m_pVertexShader = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		exit(1);

}

{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	::GetClientRect(hwnd, &rect);

	delete[] pIList;

	ConstantLightBuffer clb;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	SDL_FreeSurface(bmp);

			break;

	SAFE_RELEASE(m_pInputLayout);

	if (!reader.Warning().empty())

			switch (e.key.keysym.sym)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





		KEY_PRESS_SURFACE_RIGHT,

		size_t index_offset = 0;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	//頂点レイアウト作成



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ConstantMatrixBuffer cmb;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	HRESULT              hr;





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.StructureByteStride = 0;

		return hr;

	txDesc.CPUAccessFlags = 0;



	}



	//頂点バッファ作成

	scDesc.Windowed = TRUE;

				WORD index = idx.vertex_index;

		return hr;

		&attrib,

	txDesc.ArraySize = 1;

		pIList[j] = indexList[j];

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	//定数バッファ作成

{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ConstantLight    pntLight; //点光源



#define TINYOBJLOADER_IMPLEMENTATION

}

		KEY_PRESS_SURFACE_UP,

	Vertex* pVList = new Vertex[vcount];



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		}



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_VertexCount = 0;

		&level,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pVertexShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string error;

	pBackBuffer->Release();

		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4X4 projection;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pMatrixBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	auto& materials = reader.GetMaterials();

CD3DTest::CD3DTest()

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	}

			case SDLK_UP:

	ConstantLight    pntLight; //点光源

	m_pInputLayout = NULL;

	float    nearZ = 0.1f;

	SDL_Event e;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Event e;



			case SDLK_UP:



	m_pTexture = NULL;

	}



	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.CPUAccessFlags = 0;





	{

	ibDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

	//インデックスバッファ作成

	cbDesc.StructureByteStride = 0;

}



			index_offset += fv;

	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_Event e;

	{



		return hr;

}

	if (FAILED(hr))

#include "DirectXManager.h"

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_SUBRESOURCE_DATA irData;



	//vector<WORD> index_t;

#define TINYOBJLOADER_IMPLEMENTATION

int main(int, char**)

	bool ret = tinyobj::LoadObj(

		flags,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.OutputWindow = hwnd;

	};

	vrData.SysMemPitch = 0;

		// Loop over faces(polygon)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pTextureView = NULL;



	UINT strides = sizeof(Vertex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D_FEATURE_LEVEL level;

	LoadObj(vertexlist, indexList);

	//Clean up our objects and quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				break;

	SAFE_RELEASE(m_pLightBuffer);

		{



		return hr;



	Vertex* pVList = new Vertex[vcount];

struct ConstantMaterial {

		}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pIndexBuffer = NULL;

	//定数バッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



{

}



			case SDLK_UP:

	if (FAILED(hr))



	WORD   icount = indexList.size();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	SDL_FreeSurface(suf);



	Release();

				// access to vertex

{

				// access to vertex

				vertex.push_back(vertex_tmp);



struct ConstantMatrixBuffer {

#endif

		delete[] pIList;

		D3D11_SDK_VERSION,

	XMFLOAT4 pos;               //座標(x,y,z)

	return 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	SDL_FreeSurface(bmp);

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.MiscFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		{

	SDL_Quit();

	}

			case SDLK_RIGHT:

				indexlist.push_back(index);

		m_pImmediateContext->ClearState();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{



		NULL,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



#include <SDL.h>

	txDesc.Height = rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	ID3D11Texture2D* pBackBuffer;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	float    fov = XMConvertToRadians(20.0f);

	ID3D11Texture2D* pBackBuffer;

		{



	vbDesc.MiscFlags = 0;



	CRect                rect;

	}

	txDesc.SampleDesc.Count = 1;

	//vector<Vertex> vertex_t;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.MiscFlags = 0;



	Release();

	D3D11_SAMPLER_DESC smpDesc;

	m_Viewport.TopLeftY = 0;



				break;

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



}



	m_pPixelShader = NULL;



	};

	m_pIndexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	if (!reader.Warning().empty())

	scDesc.BufferDesc.Height = rect.Height();

	std::string imagePath = "hello.bmp";



	UINT flags = 0;

	//Create Index

	SAFE_RELEASE(m_pLightBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	m_IndexCount = icount;

}
	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);



	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	};

				break;

		return hr;

	auto& materials = reader.GetMaterials();

		return hr;

struct ConstantLight {

		if (!reader.Error().empty())

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	UINT offsets = 0;



	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



				vertex.push_back(vertex_tmp);

	enum KeyPressSurfaces

	std::string error;

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantMaterial {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



				break;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return hr;

				// access to vertex

				break;

		return hr;

	for (int i = 0; i < 3; i++)

	/*

				vertex.push_back(vertex_tmp);

	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		return hr;

	{

		{

struct ConstantLight {



		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyTexture(tex);

	return;

};

	if (FAILED(hr))

}
		pLevels,



	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		pIList[j] = indexList[j];

		//User requests quit

		SDL_RenderPresent(ren);

	LoadObj(vertexlist, indexList);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ty =

		SDL_RenderPresent(ren);

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

struct ConstantLight {

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





		SDL_RenderCopy(ren, tex, NULL, NULL);

	reader_config.mtl_search_path = "./"; // Path to material files

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

		SDL_Delay(1000);





		return hr;

	txDesc.Width = rect.Width();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	std::string inputfile = "test.obj";

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ConstantLight    pntLight; //点光源



		&scDesc,

	if (FAILED(hr))

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

void CD3DTest::Render()

	for (int j = 0; j < icount; j++)

CD3DTest::CD3DTest()



	if (!reader.Warning().empty())

CD3DTest::~CD3DTest()

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSampler);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				break;

	SDL_Quit();

		NULL,

	txDesc.Width = rect.Width();

#include <iostream>

				break;

		&error,

		{

};

		return 1;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pSampler = NULL;

	}

	ibDesc.MiscFlags = 0;

	int     vcount = vertexlist.size();

	if (FAILED(hr))

}

	txDesc.SampleDesc.Quality = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ConstantLight    pntLight; //点光源

	m_VertexCount = 0;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);



	if (FAILED(hr))

	txDesc.MiscFlags = 0;

	//定数バッファ作成



	delete[] pVList;

				indexlist.push_back(index);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyWindow(win);

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	auto& shapes = reader.GetShapes();

	}

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (const auto& shape : shapes)

				break;

	SAFE_RELEASE(m_pMatrixBuffer);



{

		&scDesc,

}

#endif

			{

		{

#include <iostream>

	//vector<Vertex> vertex_t;



	delete[] pVList;

	m_pTexture = NULL;

		SDL_Delay(1000);





	LoadObj(vertexlist, indexList);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	m_IndexCount = 0;

		D3D11_SDK_VERSION,

			{

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];


