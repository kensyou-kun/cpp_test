	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	};



	return 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pVertexShader);



	UINT flags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 */

#define TINYOBJLOADER_IMPLEMENTATION



	vrData.SysMemSlicePitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,

	m_pVertexShader = NULL;

}

{

	while (SDL_PollEvent(&e) != 0)

#include "DirectXManager.h"

	{

	delete[] pIList;

	m_VertexCount = vcount;

using std::cout; using std::endl;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	vector<WORD> indexList;

	SDL_Event e;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		m_pImmediateContext->ClearState();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

void CD3DTest::Release()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

	};

	::GetClientRect(hwnd, &rect);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	tinyobj::ObjReader reader;

int main(int, char**)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;





		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	return;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

	m_pTextureView = NULL;

		return hr;



	float    fov = XMConvertToRadians(20.0f);



	txDesc.SampleDesc.Quality = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pMatrixBuffer = NULL;



		{

	m_pLightBuffer = NULL;

	SDL_DestroyTexture(tex);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pTexture);



struct ConstantMaterial {

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Quit();



	LoadObj(vertexlist, indexList);

/*

struct ConstantLightBuffer {

		}

	irData.SysMemPitch = 0;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.CPUAccessFlags = 0;

struct ConstantMaterial {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	int     vcount = vertexlist.size();

	//深度ステンシルバッファ作成

	WORD   icount = indexList.size();



		D3D11_SDK_VERSION,



	if (!reader.Warning().empty())

 * Lesson 1: Hello World!

		pIList[j] = indexList[j];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.SampleDesc.Quality = 0;

	{

		return hr;





	std::vector<tinyobj::material_t> materials;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//Key press surfaces constants

	SDL_DestroyTexture(tex);

	cbDesc.MiscFlags = 0;

	/*

		SDL_Delay(1000);

		&error,

	m_pDevice = NULL;

	Release();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	//ピクセルシェーダー生成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	UINT flags = 0;

		return hr;

	//Vertex* pVList = new Vertex[vcount];

	UINT offsets = 0;

	}

		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&shapes,

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pMatrixBuffer);



	std::string inputfile = "test.obj";

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_TOTAL

	m_Angle += XMConvertToRadians(1.0f);

				indexlist.push_back(idx.vertex_index);



	D3D11_SUBRESOURCE_DATA irData;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	UINT strides = sizeof(Vertex);

	SDL_Event e;

		{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	delete[] pIList;





	cbDesc.StructureByteStride = 0;



			int num_vertices = shape.mesh.num_face_vertices[f];



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	for (const auto& shape : shapes)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	Release();

	m_pLightBuffer = NULL;



	txDesc.SampleDesc.Quality = 0;

	enum KeyPressSurfaces

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	return;

struct ConstantLightBuffer {

	//頂点レイアウト作成

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	tinyobj::ObjReaderConfig reader_config;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



			//Select surfaces based on key press

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		&scDesc,



{



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pDepthStencilTexture = NULL;

				break;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//頂点レイアウト作成

};



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Height = rect.Height();

		}











				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				WORD index = idx.vertex_index;

#include <SDL.h>



	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDevice);

	m_VertexCount = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



	{



	if (!reader.Warning().empty())

	if (FAILED(hr))

#include <SDL.h>

			for (size_t v = 0; v < num_vertices; v++)



		return 1;

	m_pPixelShader = NULL;

	std::string inputfile = "test.obj";

		}

	ConstantLight    pntLight; //点光源



{

	while (SDL_PollEvent(&e) != 0)

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	m_pInputLayout = NULL;

	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	tinyobj::ObjReader reader;

	return;

			for (size_t v = 0; v < fv; v++)

CD3DTest::~CD3DTest()

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	WORD   icount = indexList.size();

 * Lesson 1: Hello World!



	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pInputLayout);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

			exit(1);

			for (size_t v = 0; v < fv; v++)

	//定数バッファ作成

	tinyobj::ObjReaderConfig reader_config;

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



			exit(1);

};

	SAFE_RELEASE(m_pSwapChain);

		m_pImmediateContext->ClearState();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	//頂点レイアウト作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;

	for (int i = 0; i < 3; i++)

	//テクスチャ読み込み

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))



	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



{



	pBackBuffer->Release();

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pIndexBuffer = NULL;



				WORD index = idx.vertex_index;

	float    farZ = 100.0f;

			int num_vertices = shape.mesh.num_face_vertices[f];



		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pLightBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.SampleDesc.Quality = 0;

				indexlist.push_back(idx.vertex_index);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

int main(int, char**)

			case SDLK_LEFT:

				vertex.push_back(vertex_tmp);

		return hr;

	m_pDepthStencilView = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

		pIList[j] = indexList[j];

		SDL_RenderClear(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 ambient;           //環境(r,g,b)

	return;

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			for (size_t v = 0; v < fv; v++)

		}

				vertex.push_back(vertex_tmp);

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.SampleDesc.Count = 1;

	dsDesc.Format = txDesc.Format;

	CRect                rect;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点バッファ作成



	SDL_DestroyTexture(tex);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_IndexCount = 0;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_DestroyWindow(win);

		delete[] pIList;

	tinyobj::ObjReaderConfig reader_config;

	vector<WORD> indexList;

		}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	UINT offsets = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		delete[] pVList;



	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.Height = (FLOAT)rect.Height();

struct ConstantLightBuffer {

};

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		//User requests quit

	//テクスチャ読み込み

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	txDesc.Height = rect.Height();



		KEY_PRESS_SURFACE_UP,



	if (FAILED(hr))

		pIList[j] = indexList[j];

	ConstantMaterial material; //物体の質感

		SDL_Delay(1000);

	if (FAILED(hr))

	Release();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	for (int i = 0; i < vcount; i++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	txDesc.SampleDesc.Count = 1;

	SDL_DestroyTexture(tex);



	//vector<Vertex> vertex_t;

	delete[] pIList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				break;

		R"(cube.obj)");



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ibDesc.CPUAccessFlags = 0;



				tinyobj::real_t tx =

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	XMFLOAT4X4 projection;

	D3D_FEATURE_LEVEL level;

/*



{

		pIList[j] = indexList[j];

int main(int, char**)

		SDL_RenderClear(ren);



	//頂点レイアウト作成



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		flags,

				vertex.push_back(vertex_tmp);

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SAFE_RELEASE(m_pSwapChain);



{



			//Select surfaces based on key press

		if (!reader.Error().empty())

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferCount = 1;



		SDL_RenderCopy(ren, tex, NULL, NULL);

		return 1;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		size_t index_offset = 0;

	if (m_pImmediateContext)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.TopLeftY = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	ibDesc.StructureByteStride = 0;

}

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

	m_Viewport.TopLeftX = 0;

	dsDesc.Texture2D.MipSlice = 0;

		return 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4X4 view;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

			case SDLK_UP:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

using std::cout; using std::endl;

	auto& shapes = reader.GetShapes();

/*

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	return 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	cbDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



struct ConstantMatrixBuffer {

		&m_pDevice,



				break;

};

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pSwapChain);



	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	return 0;



		//User presses a key

	SAFE_RELEASE(m_pSampler);

CD3DTest::~CD3DTest()



	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pSampler);

		return hr;

}

	txDesc.ArraySize = 1;

};

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;



		{

	SAFE_RELEASE(m_pDepthStencilView);

		// Loop over faces(polygon)



	SAFE_RELEASE(m_pSwapChain);

				break;

		SDL_RenderClear(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,







			case SDLK_DOWN:

}



	tinyobj::ObjReaderConfig reader_config;

		KEY_PRESS_SURFACE_LEFT,

	m_pTexture = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.CPUAccessFlags = 0;



	//vector<WORD> index_t;

	//頂点レイアウト作成



		{





	m_pSampler = NULL;

#include "DirectXManager.h"

				// access to vertex

int SEGMENT = 36;

	return;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

				WORD index = idx.vertex_index;

	ConstantLight    pntLight; //点光源

				break;



				tinyobj::real_t ty =

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pSwapChain = NULL;

	UINT strides = sizeof(Vertex);

	}

		D3D_DRIVER_TYPE_HARDWARE,

	pBackBuffer->Release();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;



}

{

	//テクスチャ読み込み

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



CD3DTest::~CD3DTest()



	{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

		{



	return 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Key press surfaces constants

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	WORD   icount = indexList.size();



		}

}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pIndexBuffer);

}



	}

		exit(1);



		size_t index_offset = 0;  // インデントのオフセット

	ConstantMatrixBuffer cmb;

	SDL_Event e;

	m_pTexture = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;



/*

	SAFE_RELEASE(m_pImmediateContext);

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pTextureView);



	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

		cout << "SDL_INIT_ERROR" << endl;

};

	vrData.pSysMem = &pVList[0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//頂点バッファ作成

	if (FAILED(hr))

			case SDLK_UP:

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Vertex* pVList = new Vertex[vcount];



	}

		D3D_DRIVER_TYPE_HARDWARE,

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vector<Vertex> vertexlist;



	m_pTextureView = NULL;



	}

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	m_pSampler = NULL;



	enum KeyPressSurfaces

	m_pSwapChain = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_DestroyRenderer(ren);

	}

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.MiscFlags = 0;

		&m_pImmediateContext);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	}



				indexlist.push_back(index);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

void CD3DTest::Release()

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&level,

			case SDLK_UP:

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	irData.SysMemSlicePitch = 0;



		D3D_DRIVER_TYPE_HARDWARE,

	return;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		&m_pSwapChain,



	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.StructureByteStride = 0;

	}



{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.CPUAccessFlags = 0;



		size_t index_offset = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	UINT offsets = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.BufferCount = 1;

			}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		m_pImmediateContext->ClearState();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	if (FAILED(hr))



{

	int     vcount = vertexlist.size();

	{

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pRenderTargetView);

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	auto& attrib = reader.GetAttrib();

			}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pRenderTargetView);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			}

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pLightBuffer);

}
 */

	vbDesc.StructureByteStride = 0;

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	for (int j = 0; j < icount; j++)

		{



		&materials,



	SDL_DestroyTexture(tex);

				break;

#ifdef _DEBUG

		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

	for (int j = 0; j < icount; j++)





CD3DTest::CD3DTest()

	if (FAILED(hr))

				tinyobj::real_t ty =

	XMFLOAT4X4 projection;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::string error;

	txDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;

struct ConstantLightBuffer {

		if (!reader.Error().empty())

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

		if (!reader.Error().empty())

{

	{

using std::cout; using std::endl;

	m_pTexture = NULL;

	m_pSwapChain->Present(0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			}

}

	m_VertexCount = vcount;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pImmediateContext);

	vbDesc.CPUAccessFlags = 0;

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pVertexBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

			switch (e.key.keysym.sym)

#ifdef _DEBUG

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	// Loop over shapes

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

	}

	{





			{

				break;



	{

				tinyobj::real_t tx =



	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_RIGHT,

	}*/

int SEGMENT = 36;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{





	m_Viewport.TopLeftY = 0;



	SAFE_RELEASE(m_pSwapChain);

			index_offset += fv;

		KEY_PRESS_SURFACE_DEFAULT,

	UINT strides = sizeof(Vertex);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			break;

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			break;

		{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))



		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

int main(int, char**)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMFLOAT4X4 world;

		{



		return hr;

	if (FAILED(hr))

/*



		}

	XMFLOAT4X4 projection;

struct ConstantMatrixBuffer {

			for (size_t v = 0; v < num_vertices; v++)



			case SDLK_RIGHT:

	}





		return hr;

	}

	auto& shapes = reader.GetShapes();

		{

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_UP,

	//深度ステンシルバッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pVertexBuffer = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	if (FAILED(hr))

#ifdef _DEBUG

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		else if (e.type == SDL_KEYDOWN)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pVertexBuffer = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	dsDesc.Texture2D.MipSlice = 0;

			index_offset += num_vertices;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.BufferCount = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



struct ConstantLightBuffer {



		SDL_RenderPresent(ren);



		size_t index_offset = 0;

}

	m_Viewport.TopLeftX = 0;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	LoadObj(vertexlist, indexList);

	//vector<Vertex> vertex_t;

	vrData.pSysMem = &pVList[0];

void CD3DTest::Release()

	};

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.Height = rect.Height();

				break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	vector<WORD> indexList;

	Vertex* pVList = new Vertex[vcount];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	}

#include "DirectXManager.h"

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		exit(1);

	m_Angle += XMConvertToRadians(1.0f);



				// access to vertex

}
	ConstantLightBuffer clb;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Release();

	tinyobj::ObjReader reader;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	delete[] pVList;

			switch (e.key.keysym.sym)

		}

	SAFE_RELEASE(m_pSwapChain);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	ConstantMaterial material; //物体の質感

				indexlist.push_back(index);



#include <SDL.h>

	scDesc.BufferDesc.Height = rect.Height();

#endif

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

}



	XMStoreFloat4(&clb.eyePos, eye);

		&scDesc,

		exit(1);

				// access to vertex

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	UINT strides = sizeof(Vertex);



	if (!error.empty())



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		flags,



		&m_pDevice,

			case SDLK_UP:

				indexlist.push_back(idx.vertex_index);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//インデックスバッファ作成



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	{



	vrData.pSysMem = &pVList[0];



				tinyobj::real_t ty =

	ID3D11Texture2D* pBackBuffer;

	if (!error.empty())

			}

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.SampleDesc.Count = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilView = NULL;

		pIList[j] = indexList[j];

	vector<WORD> indexList;

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	CRect                rect;

			//Select surfaces based on key press

		NULL,

	SAFE_RELEASE(m_pTexture);

	tinyobj::attrib_t attrib;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>



	m_IndexCount = 0;

}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;

	auto& shapes = reader.GetShapes();

	scDesc.SampleDesc.Count = 1;





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ID3D11Texture2D* pBackBuffer;

	//Key press surfaces constants

	m_pLightBuffer = NULL;

	if (FAILED(hr))

		1,

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.Width = rect.Width();



	m_pSwapChain->Present(0, 0);

	txDesc.CPUAccessFlags = 0;

 */

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pSampler = NULL;

				break;



		KEY_PRESS_SURFACE_UP,

CD3DTest::~CD3DTest()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyTexture(tex);

		{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



			{

	m_pLightBuffer = NULL;

		m_pImmediateContext->ClearState();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (!reader.Warning().empty())



	SDL_DestroyTexture(tex);

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderClear(ren);

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

			index_offset += fv;

				indexlist.push_back(idx.vertex_index);

	//Key press surfaces constants



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (!error.empty())

	{

	pBackBuffer->Release();

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



void CD3DTest::Release()

	DXGI_SWAP_CHAIN_DESC scDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	HRESULT              hr;

		&scDesc,



		NULL,



struct ConstantLight {





	vbDesc.MiscFlags = 0;





				tinyobj::real_t ty =

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SDL_DestroyRenderer(ren);

	m_pDepthStencilTexture = NULL;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

	dsDesc.Texture2D.MipSlice = 0;

			exit(1);

	auto& attrib = reader.GetAttrib();





		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC cbDesc;



}

		delete[] pVList;

};

		if (!ret)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



			switch (e.key.keysym.sym)

	irData.pSysMem = &pIList[0];





	if (m_pImmediateContext)

	vbDesc.CPUAccessFlags = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&error,

		SDL_RenderClear(ren);

		return hr;

	if (FAILED(hr))

{



	m_Viewport.TopLeftX = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (!reader.Warning().empty())

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	WORD   icount = indexList.size();

{

}





		}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			for (size_t v = 0; v < fv; v++)

	irData.SysMemSlicePitch = 0;

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MinDepth = 0.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pRenderTargetView = NULL;



 */

	//深度ステンシルバッファ作成

	delete[] pVList;

			case SDLK_DOWN:



		&materials,

		{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	ConstantLightBuffer clb;

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

		&attrib,

			exit(1);

			default:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {



	for (size_t s = 0; s < shapes.size(); s++)

		//User presses a key

	if (FAILED(hr))

	WORD   icount = indexList.size();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



			// Loop over vertices in the face.

};

	if (FAILED(hr))



		return hr;

CD3DTest::CD3DTest()





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//vector<Vertex> vertex_t;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	{

	Vertex* pVList = new Vertex[vcount];



using std::cout; using std::endl;

	UINT strides = sizeof(Vertex);

	}*/

	//定数バッファ作成

			index_offset += fv;

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

struct ConstantLightBuffer {

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	auto& attrib = reader.GetAttrib();

	{

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



				break;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_VertexCount = 0;

		pVList[i] = vertexlist[i];

	m_pRenderTargetView = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMFLOAT4 specular;          //反射(r,g,b)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

int main(int, char**)

	//テクスチャ読み込み

	scDesc.BufferDesc.Height = rect.Height();

	Release();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	vector<Vertex> vertexlist;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



			for (size_t v = 0; v < fv; v++)

	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyWindow(win);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.MiscFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



}
	Release();

	//First we need to start up SDL, and make sure it went ok

				WORD index = idx.vertex_index;

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		R"(cube.obj)");

void CD3DTest::Render()

	for (int j = 0; j < icount; j++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//Create Index

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	for (int i = 0; i < 3; i++)

		NULL,

				tinyobj::real_t ty =

	{

	vrData.SysMemPitch = 0;

	irData.SysMemSlicePitch = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//Create Index

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_LEFT,

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	WORD   icount = indexList.size();

	txDesc.ArraySize = 1;

	//定数バッファ作成

		NULL,

 */

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pTexture = NULL;

	m_Viewport.TopLeftY = 0;

	irData.pSysMem = &pIList[0];

		pVList[i] = vertexlist[i];

	m_IndexCount = icount;



	m_pIndexBuffer = NULL;

	SDL_Quit();

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;

	std::vector<tinyobj::shape_t> shapes;

		size_t index_offset = 0;

#include <SDL.h>

				break;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT offsets = 0;

#include <iostream>

			case SDLK_RIGHT:



		exit(1);

		delete[] pIList;



{



	if (FAILED(hr))

CD3DTest::CD3DTest()



	XMStoreFloat4(&clb.ambient, lightAmbient);

	//頂点レイアウト作成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pSwapChain);

};

	m_IndexCount = 0;

	enum KeyPressSurfaces

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	WORD* pIList = new WORD[icount];

	ID3D11Texture2D* pBackBuffer;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.Height = rect.Height();

		SDL_Delay(1000);



	//テクスチャ読み込み





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{

	ConstantLightBuffer clb;





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{

	{

#include <iostream>

	tinyobj::ObjReader reader;



	SAFE_RELEASE(m_pIndexBuffer);



	XMFLOAT4 ambient;           //環境(r,g,b)





	UINT strides = sizeof(Vertex);





	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pTexture = NULL;

};



}



	tinyobj::ObjReader reader;

	dsDesc.Texture2D.MipSlice = 0;

struct ConstantLightBuffer {



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		if (e.type == SDL_QUIT)



	//頂点バッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				break;

int main(int, char**)

		cout << "SDL_INIT_ERROR" << endl;



	}

		pVList[i] = vertexlist[i];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pRenderTargetView);

}

	bool ret = tinyobj::LoadObj(

			exit(1);

	m_Viewport.TopLeftY = 0;



		SDL_Delay(1000);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//ビューポート設定

		}

	m_pImmediateContext = NULL;

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.Width = rect.Width();

	for (size_t s = 0; s < shapes.size(); s++)

#endif

	m_pMatrixBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	//頂点バッファ作成

			{

	tinyobj::ObjReader reader;

	enum KeyPressSurfaces

	CRect                rect;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ConstantLight    pntLight; //点光源



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4X4 view;





	m_pMatrixBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		if (!reader.Error().empty())

	scDesc.BufferDesc.Height = rect.Height();

	while (SDL_PollEvent(&e) != 0)

	txDesc.CPUAccessFlags = 0;



	for (size_t s = 0; s < shapes.size(); s++)



	CRect                rect;

		&m_pImmediateContext);

			exit(1);

{

	scDesc.SampleDesc.Count = 1;

			case SDLK_UP:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		{

	m_pDepthStencilView = NULL;

	return 0;

	Vertex* pVList = new Vertex[vcount];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::vector<tinyobj::material_t> materials;





	m_pDevice = NULL;

			for (size_t v = 0; v < num_vertices; v++)





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	{



	vbDesc.MiscFlags = 0;

		return hr;

	UINT strides = sizeof(Vertex);

void CD3DTest::Render()

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		NULL,

	//ビューポート設定



			int num_vertices = shape.mesh.num_face_vertices[f];

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_IndexCount = 0;

	ibDesc.StructureByteStride = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	auto& shapes = reader.GetShapes();

		size_t index_offset = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

			//Select surfaces based on key press

			// Loop over vertices in the face.

	txDesc.MipLevels = 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

#include <SDL.h>

				// access to vertex

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	SDL_FreeSurface(bmp);

{

	SAFE_RELEASE(m_pVertexBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

				vertex.push_back(vertex_tmp);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&shapes,

	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);







	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

			index_offset += fv;

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))





	}

			}

	}

	SDL_DestroyWindow(win);

	SDL_FreeSurface(suf);

	m_Viewport.MinDepth = 0.0f;

	cbDesc.MiscFlags = 0;



	if (FAILED(hr))





	m_pIndexBuffer = NULL;

				tinyobj::real_t ty =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vrData.pSysMem = &pVList[0];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;

	if (FAILED(hr))

	// Loop over shapes

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_Viewport.MaxDepth = 1.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#include <SDL.h>

#include "DirectXManager.h"

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SAFE_RELEASE(m_pVertexBuffer);

			default:

	m_Viewport.TopLeftX = 0;

	{

};

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		else if (e.type == SDL_KEYDOWN)

	m_pDevice = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_RenderClear(ren);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	Release();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::string inputfile = "test.obj";

	HRESULT              hr;

	XMFLOAT4X4 world;

	ConstantMaterial material; //物体の質感

		SDL_RenderClear(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	WORD   icount = indexList.size();







	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

	vector<WORD> indexList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		if (!ret)

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



			exit(1);

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	delete[] pIList;

				// access to vertex

	XMStoreFloat4(&clb.ambient, lightAmbient);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				// access to vertex

	vbDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	txDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//vector<Vertex> vertex_t;



	scDesc.BufferDesc.Height = rect.Height();



	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

		return hr;

	m_pMatrixBuffer = NULL;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	for (int j = 0; j < icount; j++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	cbDesc.StructureByteStride = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	tinyobj::attrib_t attrib;

		&shapes,



			case SDLK_LEFT:

	SDL_FreeSurface(bmp);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			for (size_t v = 0; v < fv; v++)

		&level,

	SDL_FreeSurface(bmp);

	ConstantLight    pntLight; //点光源

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#ifdef _DEBUG

		&error,

	if (FAILED(hr))

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			exit(1);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

	HRESULT              hr;



		{



		{

	SAFE_RELEASE(m_pImmediateContext);





	vector<WORD> indexList;

}

	m_pRenderTargetView = NULL;



	XMFLOAT4X4 view;





	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pPixelShader);

	m_pSwapChain->Present(0, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	for (int j = 0; j < icount; j++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		&m_pImmediateContext);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&shapes,

	HRESULT              hr;







		return hr;

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			{

	if (FAILED(hr))



	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pPixelShader);







/*

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	CRect                rect;

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pSampler);

			case SDLK_RIGHT:

				vertex.push_back(vertex_tmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		pIList[j] = indexList[j];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pLightBuffer);

		D3D11_SDK_VERSION,

	ID3D11Texture2D* pBackBuffer;

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.Format = txDesc.Format;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		exit(1);



	{

			index_offset += num_vertices;

	ConstantLight    pntLight; //点光源

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 world;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 view;

};

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_RIGHT:

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			index_offset += num_vertices;



		pIList[j] = indexList[j];

		}

	{



		&attrib,



	ConstantLight    pntLight; //点光源

	D3D11_BUFFER_DESC cbDesc;

	m_pVertexBuffer = NULL;



	vbDesc.CPUAccessFlags = 0;

#include <SDL.h>

	{

		return hr;

	m_pIndexBuffer = NULL;

#include <iostream>

	m_VertexCount = vcount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pTexture);

	m_Viewport.Height = (FLOAT)rect.Height();



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

				break;

			exit(1);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	vrData.pSysMem = &pVList[0];



		{

		KEY_PRESS_SURFACE_UP,

		SDL_RenderClear(ren);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)



#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string imagePath = "hello.bmp";

			case SDLK_UP:

	SAFE_RELEASE(m_pInputLayout);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ConstantLightBuffer clb;

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

CD3DTest::~CD3DTest()

	m_Viewport.Width = (FLOAT)rect.Width();

		{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&scDesc,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_Viewport.Width = (FLOAT)rect.Width();

		&shapes,

struct ConstantMatrixBuffer {

	pBackBuffer->Release();



	//vector<Vertex> vertex_t;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;



	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pTexture);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		//User presses a key

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#include <SDL.h>

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	scDesc.SampleDesc.Quality = 0;

	for (size_t s = 0; s < shapes.size(); s++)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	tinyobj::attrib_t attrib;

			}



	m_pVertexBuffer = NULL;

				// access to vertex

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			// Loop over vertices in the face.

	{

	SDL_FreeSurface(bmp);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			{

};



#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_Delay(1000);

	if (FAILED(hr))



	{

{

	D3D11_BUFFER_DESC ibDesc;

			index_offset += fv;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_TEXTURE2D_DESC txDesc;

	tinyobj::ObjReaderConfig reader_config;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& attrib = reader.GetAttrib();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<WORD> indexList;

	txDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_UP,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!error.empty())

	m_Viewport.TopLeftY = 0;

		KEY_PRESS_SURFACE_UP,

				vertex.push_back(vertex_tmp);

	scDesc.OutputWindow = hwnd;







	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vrData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_UP,

	for (int j = 0; j < icount; j++)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			{



	SDL_Quit();

				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_TOTAL





			// Loop over vertices in the face.

	cbDesc.StructureByteStride = 0;

	ibDesc.StructureByteStride = 0;

	m_pPixelShader = NULL;

	ConstantLightBuffer clb;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//ピクセルシェーダー生成

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t ty =

	m_pDevice = NULL;



		&shapes,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	m_pVertexShader = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		cout << "SDL_INIT_ERROR" << endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}



		KEY_PRESS_SURFACE_TOTAL

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

				vertex.push_back(vertex_tmp);





		if (e.type == SDL_QUIT)

	CRect                rect;

	{

	vector<Vertex> vertexlist;







	std::string error;

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Event e;



	ConstantLight    pntLight; //点光源

	for (int i = 0; i < 3; i++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	}

	UINT strides = sizeof(Vertex);



{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&level,

#include <iostream>

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

			switch (e.key.keysym.sym)

			default:

	cbDesc.CPUAccessFlags = 0;

}

}

	m_pDevice = NULL;



	SDL_Quit();

	if (FAILED(hr))

		SDL_RenderClear(ren);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{

			// Loop over vertices in the face.

		R"(cube.obj)");

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);



	m_Viewport.MinDepth = 0.0f;

		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	CRect                rect;

		size_t index_offset = 0;  // インデントのオフセット

	tinyobj::ObjReaderConfig reader_config;

	scDesc.BufferDesc.Height = rect.Height();

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{

void CD3DTest::Render()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	return 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	std::string imagePath = "hello.bmp";

	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	{

		return hr;



 */

	m_Viewport.Width = (FLOAT)rect.Width();

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))





};

	for (int i = 0; i < 3; i++)



	UINT offsets = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



	{



	cbDesc.CPUAccessFlags = 0;



	if (!reader.ParseFromFile(inputfile, reader_config))

	auto& shapes = reader.GetShapes();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			case SDLK_DOWN:

	SAFE_RELEASE(m_pSampler);

		NULL,



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	tinyobj::attrib_t attrib;

	}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pIndexBuffer);

			}

	int     vcount = vertexlist.size();

{

#ifdef _DEBUG

 */

	//ピクセルシェーダー生成

	ibDesc.StructureByteStride = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    nearZ = 0.1f;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			}

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;





using std::cout; using std::endl;

	SDL_DestroyRenderer(ren);

	m_pPixelShader = NULL;

		}

			index_offset += fv;

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.OutputWindow = hwnd;





		}

		return hr;

				vertex.push_back(vertex_tmp);



	// Loop over shapes

	UINT offsets = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	ibDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		SDL_Delay(1000);

 */

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;







		else if (e.type == SDL_KEYDOWN)

	return;

		SDL_Delay(1000);

		// Loop over faces(polygon)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

		{

	{

		pVList[i] = vertexlist[i];

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyTexture(tex);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				break;



		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.CPUAccessFlags = 0;



	irData.SysMemPitch = 0;

	//Clean up our objects and quit



		SDL_RenderClear(ren);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4X4 view;

	//定数バッファ作成

{

	//Vertex* pVList = new Vertex[vcount];

	std::string inputfile = "test.obj";

	D3D11_TEXTURE2D_DESC txDesc;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyTexture(tex);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		if (!ret)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&attrib,

		if (!ret)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemPitch = 0;

{

			}

	for (const auto& shape : shapes)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pIndexBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		//User presses a key

			int num_vertices = shape.mesh.num_face_vertices[f];



	return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pDevice = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//vector<Vertex> vertex_t;

				indexlist.push_back(index);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

			{

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;



				vertex.push_back(vertex_tmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//頂点シェーダー生成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Event e;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

struct ConstantMaterial {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_DestroyRenderer(ren);

}
		return hr;

	LoadObj(vertexlist, indexList);

	//ピクセルシェーダー生成

	HRESULT              hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	m_pIndexBuffer = NULL;

	D3D_FEATURE_LEVEL level;



	D3D11_TEXTURE2D_DESC txDesc;





		{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;



	UINT strides = sizeof(Vertex);



			for (size_t v = 0; v < num_vertices; v++)

				// access to vertex

	{

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pImmediateContext);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))



	float    fov = XMConvertToRadians(20.0f);

#include <iostream>

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{



	m_pVertexShader = NULL;





	}

	XMFLOAT4X4 view;

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))



	SDL_FreeSurface(bmp);

}



	m_pRenderTargetView = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	}

	//頂点バッファ作成



		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	LoadObj(vertexlist, indexList);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pInputLayout);

{



{

	WORD   icount = indexList.size();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 view;

#include "DirectXManager.h"

	float    fov = XMConvertToRadians(20.0f);

		&scDesc,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		if (e.type == SDL_QUIT)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);



}



	::GetClientRect(hwnd, &rect);

		}

		D3D_DRIVER_TYPE_HARDWARE,

	irData.SysMemPitch = 0;

	vector<Vertex> vertexlist;



	cbDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)





		{

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_IndexCount = icount;

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D_FEATURE_LEVEL level;



	m_pVertexShader = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

using std::cout; using std::endl;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		pVList[i] = vertexlist[i];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.MiscFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				vertex.push_back(vertex_tmp);

		&m_pDevice,

	SDL_DestroyTexture(tex);



	for (int i = 0; i < vcount; i++)

	D3D11_BUFFER_DESC ibDesc;



	{

	D3D11_BUFFER_DESC cbDesc;

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SAFE_RELEASE(m_pLightBuffer);

	bool ret = tinyobj::LoadObj(



	ibDesc.MiscFlags = 0;





				vertex.push_back(vertex_tmp);

		D3D11_SDK_VERSION,

	m_pSampler = NULL;

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}



			case SDLK_DOWN:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&error,

		m_pImmediateContext->ClearState();

		&shapes,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pDevice = NULL;

	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))

	Release();

		D3D11_SDK_VERSION,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}

	m_pTextureView = NULL;

			case SDLK_LEFT:

	CRect                rect;





	SDL_Quit();

	}

	ID3D11Texture2D* pBackBuffer;

		D3D11_SDK_VERSION,

int main(int, char**)

	irData.SysMemSlicePitch = 0;

	std::string error;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_IndexCount = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



				break;

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pTextureView);



	{



			// Loop over vertices in the face.



		&level,





		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.ambient, lightAmbient);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	return 0;

	return 0;

{

	ibDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext = NULL;

	}

				break;

void CD3DTest::Render()

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pSampler = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}



				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}



		SDL_RenderClear(ren);

		return hr;



		pLevels,

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	SDL_DestroyTexture(tex);

	vbDesc.StructureByteStride = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

		return 1;

		return hr;

	//インデックスバッファ作成

{

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_RIGHT:



	irData.SysMemPitch = 0;

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

{

	return 0;

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

CD3DTest::CD3DTest()



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	m_pTextureView = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



				WORD index = idx.vertex_index;

		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{



	for (const auto& shape : shapes)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	irData.SysMemSlicePitch = 0;

	}

{

	if (!error.empty())

		&error,







		//User presses a key

	{

	txDesc.Width = rect.Width();

{

	vrData.SysMemPitch = 0;

/*

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.pSysMem = &pVList[0];



				vertex.push_back(vertex_tmp);





	SDL_FreeSurface(suf);

	};

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Quit();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	}

	// Loop over shapes

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4X4 view;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_RIGHT,

	DXGI_SWAP_CHAIN_DESC scDesc;

	irData.SysMemSlicePitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int j = 0; j < icount; j++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

				tinyobj::real_t tx =

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



{

	SAFE_RELEASE(m_pVertexShader);

		if (!reader.Error().empty())



		cout << "SDL_INIT_ERROR" << endl;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	for (int i = 0; i < vcount; i++)



	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_RIGHT,

	UINT flags = 0;

		m_pImmediateContext->ClearState();



	txDesc.MipLevels = 1;

		&shapes,

	}

	SAFE_RELEASE(m_pRenderTargetView);

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	tinyobj::attrib_t attrib;





	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ID3D11Texture2D* pBackBuffer;



		&attrib,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pIndexBuffer);

		}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	WORD   icount = indexList.size();

#include <SDL.h>

	if (FAILED(hr))

	m_pInputLayout = NULL;

	scDesc.BufferCount = 1;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	WORD   icount = indexList.size();

	::GetClientRect(hwnd, &rect);

	while (SDL_PollEvent(&e) != 0)



	for (int i = 0; i < vcount; i++)

		&error,

		if (e.type == SDL_QUIT)

	m_VertexCount = 0;

	m_IndexCount = icount;

	m_pPixelShader = NULL;

{

			break;

	m_pVertexShader = NULL;

	{

		&m_pSwapChain,

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		{





	ibDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)

	//頂点シェーダー生成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	for (int i = 0; i < 3; i++)





int main(int, char**)

	m_pDevice = NULL;

		&error,

	::GetClientRect(hwnd, &rect);

	txDesc.CPUAccessFlags = 0;

		return hr;

			}

			{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

	ID3D11Texture2D* pBackBuffer;

		&shapes,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pMatrixBuffer = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!reader.Warning().empty())

	cbDesc.StructureByteStride = 0;

	};

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	vector<WORD> indexList;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		if (e.type == SDL_QUIT)

{



	XMFLOAT4X4 world;

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.MiscFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pRenderTargetView = NULL;

	m_IndexCount = 0;

	}

#include <iostream>



#include <SDL.h>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#ifdef _DEBUG

	SDL_DestroyWindow(win);

		}

#include <SDL.h>

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			default:

	std::vector<tinyobj::material_t> materials;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#include <SDL.h>

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Texture2D.MipSlice = 0;

	ConstantLightBuffer clb;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;



				break;

	}

		KEY_PRESS_SURFACE_DOWN,

	{







	cbDesc.StructureByteStride = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

		&level,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				indexlist.push_back(index);

	vbDesc.CPUAccessFlags = 0;

int main(int, char**)

			for (size_t v = 0; v < fv; v++)

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	UINT strides = sizeof(Vertex);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	ibDesc.StructureByteStride = 0;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.BufferDesc.Width = rect.Width();

	}

		return hr;



struct ConstantMaterial {

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				indexlist.push_back(index);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			for (size_t v = 0; v < num_vertices; v++)

#ifdef _DEBUG

	vbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			{

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			case SDLK_LEFT:

		return hr;

	txDesc.SampleDesc.Count = 1;



	vbDesc.MiscFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	//Clean up our objects and quit



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	tinyobj::ObjReader reader;



		&materials,

	scDesc.Windowed = TRUE;

	{

	m_Viewport.Width = (FLOAT)rect.Width();







	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		else if (e.type == SDL_KEYDOWN)

			for (size_t v = 0; v < num_vertices; v++)

	m_pTextureView = NULL;

			default:

		1,

	SAFE_RELEASE(m_pTextureView);

	{



	// Loop over shapes

	std::string imagePath = "hello.bmp";

		delete[] pIList;

	SDL_FreeSurface(bmp);

	{

			}

	ZeroMemory(&txDesc, sizeof(txDesc));

	//インデックスバッファ作成

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))



	SAFE_RELEASE(m_pTextureView);

	{

			index_offset += num_vertices;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

	}



	m_pVertexBuffer = NULL;

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_IndexCount = 0;



		KEY_PRESS_SURFACE_DEFAULT,



		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				// access to vertex

	m_pSwapChain = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	UINT flags = 0;

	// Loop over shapes

				indexlist.push_back(index);

			}

	UINT offsets = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&materials,

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_FreeSurface(suf);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float    fov = XMConvertToRadians(20.0f);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	std::string inputfile = "test.obj";

	m_pTextureView = NULL;

	D3D11_BUFFER_DESC vbDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDepthStencilView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	txDesc.MipLevels = 1;



}

	for (int i = 0; i < vcount; i++)





			//Select surfaces based on key press

	scDesc.OutputWindow = hwnd;

		&shapes,

	if (FAILED(hr))

#include <iostream>



	//ピクセルシェーダー生成

void CD3DTest::Render()

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pLightBuffer = NULL;

	if (FAILED(hr))

		SDL_Delay(1000);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		1,

	//頂点レイアウト作成

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;





}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.Height = rect.Height();



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ピクセルシェーダー生成

		1,

		D3D_DRIVER_TYPE_HARDWARE,

	ID3D11Texture2D* pBackBuffer;

	}

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.SampleDesc.Quality = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_UP:

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			{

	scDesc.BufferCount = 1;

		{



	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

		// Loop over faces(polygon)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (int j = 0; j < icount; j++)

	SDL_FreeSurface(suf);



HRESULT CD3DTest::Create(HWND hwnd)

	WORD   icount = indexList.size();

};

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		flags,

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::string imagePath = "hello.bmp";

	m_pTextureView = NULL;

	int     vcount = vertexlist.size();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	/*

	txDesc.Usage = D3D11_USAGE_DEFAULT;





	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	m_pVertexShader = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

		pVList[i] = vertexlist[i];

	m_pImmediateContext = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				indexlist.push_back(index);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_Delay(1000);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Angle += XMConvertToRadians(1.0f);



				// access to vertex

		KEY_PRESS_SURFACE_LEFT,

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_TOTAL

		&materials,

			case SDLK_RIGHT:

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

	}





		return hr;

CD3DTest::~CD3DTest()

	m_pVertexBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SDL_Event e;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			default:

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include <SDL.h>

{

	std::string inputfile = "test.obj";



	ID3D11Texture2D* pBackBuffer;

int SEGMENT = 36;

	::ZeroMemory(&scDesc, sizeof(scDesc));



};

	m_Viewport.TopLeftY = 0;

};

	{



		{

		pLevels,





	XMStoreFloat4(&clb.eyePos, eye);

	vector<Vertex> vertexlist;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

				break;

void CD3DTest::Release()

			index_offset += num_vertices;



		1,



	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	};

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	//vector<Vertex> vertex_t;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pDevice);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	for (int i = 0; i < 3; i++)

	SDL_DestroyRenderer(ren);



};

}
	{

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		&m_pSwapChain,





{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pSampler);

	txDesc.Height = rect.Height();

struct ConstantMatrixBuffer {

			for (size_t v = 0; v < fv; v++)

	auto& shapes = reader.GetShapes();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!error.empty())

		return hr;

	m_Viewport.MinDepth = 0.0f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#ifdef _DEBUG

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#include <SDL.h>

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.MiscFlags = 0;

				// access to vertex

	WORD* pIList = new WORD[icount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pDepthStencilTexture = NULL;

				indexlist.push_back(idx.vertex_index);

	ibDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

 * Lesson 1: Hello World!

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.SampleDesc.Count = 1;

	// Loop over shapes



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&error,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		exit(1);

	cbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vbDesc.StructureByteStride = 0;

	HRESULT              hr;



		D3D11_SDK_VERSION,

	m_Viewport.MaxDepth = 1.0f;

				WORD index = idx.vertex_index;

#include "DirectXManager.h"

	UINT flags = 0;





	CRect                rect;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (m_pImmediateContext)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				indexlist.push_back(idx.vertex_index);



	//Vertex* pVList = new Vertex[vcount];

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pSampler);

	//vector<WORD> index_t;

	{

	//ピクセルシェーダー生成

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDepthStencilView = NULL;







	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

		{

	if (FAILED(hr))



	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDepthStencilView = NULL;



	}

	//テクスチャ読み込み

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	irData.SysMemPitch = 0;

	Release();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pSwapChain = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



			case SDLK_UP:

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

 */

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//ビューポート設定

	txDesc.Height = rect.Height();



		delete[] pIList;







	ConstantMaterial material; //物体の質感

	ConstantLightBuffer clb;

	UINT flags = 0;



}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

HRESULT CD3DTest::Create(HWND hwnd)

	return 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

	//First we need to start up SDL, and make sure it went ok







	vector<WORD> indexList;



	}





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Vertex* pVList = new Vertex[vcount];

	{





		delete[] pVList;



	D3D11_BUFFER_DESC ibDesc;



	irData.SysMemSlicePitch = 0;

		}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	enum KeyPressSurfaces

	{





		&error,

struct ConstantLight {



	if (FAILED(hr))

	{

		delete[] pVList;

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//頂点シェーダー生成



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (m_pImmediateContext)

{

			{

	{



	m_pVertexShader = NULL;

	SDL_DestroyWindow(win);

	enum KeyPressSurfaces

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;



		pVList[i] = vertexlist[i];

		&scDesc,

	XMStoreFloat4(&clb.eyePos, eye);

			for (size_t v = 0; v < fv; v++)



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.MiscFlags = 0;

void CD3DTest::Render()





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

{

	SDL_DestroyRenderer(ren);

		R"(cube.obj)");

	delete[] pVList;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pSwapChain->Present(0, 0);

	m_pSwapChain = NULL;

	{

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_FreeSurface(bmp);



	SAFE_RELEASE(m_pLightBuffer);



	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		{

	D3D11_SUBRESOURCE_DATA vrData;

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pTextureView);





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	auto& materials = reader.GetMaterials();

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			{

	m_Viewport.Height = (FLOAT)rect.Height();

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexBuffer);

		size_t index_offset = 0;

		SDL_Delay(1000);

	m_IndexCount = 0;

	//インデックスバッファ作成





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		D3D11_SDK_VERSION,



	vector<WORD> indexList;

	m_Viewport.TopLeftX = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pIList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_RIGHT,



}
{



	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.ArraySize = 1;

	{



	return 0;

		return 1;

		pIList[j] = indexList[j];

	bool ret = tinyobj::LoadObj(



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

			exit(1);

};



	m_Viewport.MaxDepth = 1.0f;

		pLevels,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (int i = 0; i < 3; i++)

}

	//vector<WORD> index_t;

	m_Angle += XMConvertToRadians(1.0f);

		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

	{

				WORD index = idx.vertex_index;

		cout << "SDL_INIT_ERROR" << endl;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 projection;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	vector<WORD> indexList;

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	/*

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				break;

	//頂点シェーダー生成

		pVList[i] = vertexlist[i];

	std::string inputfile = "test.obj";

	XMFLOAT4X4 world;

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.StructureByteStride = 0;

				break;





		return hr;

		&m_pSwapChain,





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (int i = 0; i < vcount; i++)

void CD3DTest::Release()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_FreeSurface(bmp);

{



			case SDLK_LEFT:

struct ConstantMaterial {

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			}

	txDesc.ArraySize = 1;

	ibDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		//User presses a key

	if (m_pImmediateContext)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.eyePos, eye);

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		D3D_DRIVER_TYPE_HARDWARE,



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void CD3DTest::Render()

	scDesc.BufferCount = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

#define TINYOBJLOADER_IMPLEMENTATION

CD3DTest::CD3DTest()

		//User presses a key

	UINT flags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;







		}

#include <iostream>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4         eyePos;   //視点座標



		&m_pSwapChain,

CD3DTest::CD3DTest()

struct ConstantMaterial {

};

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	return 0;

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_VertexCount = vcount;

	SDL_FreeSurface(suf);

	for (size_t s = 0; s < shapes.size(); s++)

	pBackBuffer->Release();

	float    fov = XMConvertToRadians(20.0f);

	pBackBuffer->Release();

				break;

	}

		else if (e.type == SDL_KEYDOWN)

	m_pSwapChain = NULL;

	vector<Vertex> vertexlist;

	float    farZ = 100.0f;

	auto& materials = reader.GetMaterials();

{

	m_Viewport.MaxDepth = 1.0f;

	SDL_Quit();

	{

		R"(cube.obj)");

	XMFLOAT4         eyePos;   //視点座標

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		KEY_PRESS_SURFACE_RIGHT,

			}



	SDL_DestroyTexture(tex);

	cbDesc.StructureByteStride = 0;

		}

			index_offset += fv;

	txDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//ピクセルシェーダー生成

				break;

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4X4 world;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.eyePos, eye);



	CRect                rect;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantMaterial {

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pRenderTargetView);

	Vertex* pVList = new Vertex[vcount];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

	m_IndexCount = 0;

	cbDesc.StructureByteStride = 0;

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SDL_Event e;

#include <SDL.h>

	vrData.pSysMem = &pVList[0];

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

		return hr;

		return 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			}



	ConstantLight    pntLight; //点光源

	}

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDevice = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_BUFFER_DESC vbDesc;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			// Loop over vertices in the face.

				WORD index = idx.vertex_index;

		pVList[i] = vertexlist[i];



	//テクスチャ読み込み

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	for (const auto& shape : shapes)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyWindow(win);

		SDL_Delay(1000);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//頂点シェーダー生成

	D3D11_BUFFER_DESC cbDesc;



struct ConstantLightBuffer {

	}

}

	m_Viewport.TopLeftY = 0;

				break;

		{

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	SDL_DestroyRenderer(ren);

		NULL,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	scDesc.Windowed = TRUE;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



{

	m_Viewport.Height = (FLOAT)rect.Height();

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4X4 projection;

		if (e.type == SDL_QUIT)

			case SDLK_LEFT:

	UINT flags = 0;



	float    farZ = 100.0f;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();

int SEGMENT = 36;

	if (!reader.ParseFromFile(inputfile, reader_config))





		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//頂点シェーダー生成

	scDesc.BufferDesc.Height = rect.Height();

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&scDesc,

	if (m_pImmediateContext)

	auto& materials = reader.GetMaterials();



	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	while (SDL_PollEvent(&e) != 0)

	//vector<Vertex> vertex_t;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t tx =

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_UP,

	for (int i = 0; i < vcount; i++)

	return 0;

			index_offset += num_vertices;

		return hr;

	if (FAILED(hr))

	{

	float    farZ = 100.0f;

	{

			index_offset += fv;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		if (e.type == SDL_QUIT)

	CRect                rect;

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	irData.SysMemPitch = 0;

	vbDesc.StructureByteStride = 0;

		}



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_SAMPLER_DESC smpDesc;

	float    fov = XMConvertToRadians(20.0f);

	return 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyRenderer(ren);

	SDL_DestroyTexture(tex);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	auto& shapes = reader.GetShapes();

	delete[] pVList;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		KEY_PRESS_SURFACE_DEFAULT,

struct ConstantMatrixBuffer {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		}



			exit(1);

		size_t index_offset = 0;



	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

int main(int, char**)

	vrData.SysMemSlicePitch = 0;



	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	enum KeyPressSurfaces

	cbDesc.MiscFlags = 0;

};

	::ZeroMemory(&scDesc, sizeof(scDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		return hr;

#include <iostream>

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//First we need to start up SDL, and make sure it went ok

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.eyePos, eye);

#include <SDL.h>

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	enum KeyPressSurfaces



#include "DirectXManager.h"



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

int main(int, char**)

	SAFE_RELEASE(m_pLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.MiscFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				// access to vertex

	std::vector<tinyobj::shape_t> shapes;

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (int i = 0; i < vcount; i++)

			{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ConstantMaterial material; //物体の質感

}

	txDesc.ArraySize = 1;

	D3D_FEATURE_LEVEL level;

		&m_pSwapChain,

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		NULL,

	//Vertex* pVList = new Vertex[vcount];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		D3D11_SDK_VERSION,



	XMFLOAT4         eyePos;   //視点座標

	for (int i = 0; i < 3; i++)

		{

		return hr;

		R"(cube.obj)");

	Release();

struct ConstantLight {

	float    farZ = 100.0f;

		flags,

	ibDesc.CPUAccessFlags = 0;

	{





struct ConstantLightBuffer {

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pImmediateContext);

	return 0;



	cbDesc.CPUAccessFlags = 0;



	m_pIndexBuffer = NULL;

	//テクスチャ読み込み





		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	if (FAILED(hr))

				indexlist.push_back(index);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	WORD   icount = indexList.size();

	pBackBuffer->Release();

	int     vcount = vertexlist.size();

			{

	vbDesc.CPUAccessFlags = 0;

		return hr;

		&materials,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

};

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

}



	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	m_pVertexBuffer = NULL;

	}*/

#include "DirectXManager.h"

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	UINT flags = 0;

	m_VertexCount = 0;

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		R"(cube.obj)");



}

	m_pIndexBuffer = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	std::vector<tinyobj::shape_t> shapes;



		delete[] pVList;

	m_IndexCount = 0;

	if (FAILED(hr))





	for (const auto& shape : shapes)





	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	CRect                rect;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			case SDLK_LEFT:

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.pSysMem = &pIList[0];

	// Loop over shapes

	m_Viewport.Height = (FLOAT)rect.Height();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	dsDesc.Texture2D.MipSlice = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	SDL_DestroyWindow(win);

};

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_DEFAULT,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//頂点レイアウト作成

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				WORD index = idx.vertex_index;

		exit(1);

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点バッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SAFE_RELEASE(m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

	//頂点シェーダー生成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.MiscFlags = 0;

	std::string imagePath = "hello.bmp";

	Release();

	SAFE_RELEASE(m_pPixelShader);

				break;



	//First we need to start up SDL, and make sure it went ok

	txDesc.ArraySize = 1;

	{

{



	}

			{

	//Create Index

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		}

			switch (e.key.keysym.sym)

	m_Viewport.TopLeftY = 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	scDesc.BufferCount = 1;

				// access to vertex

}





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += fv;

	if (FAILED(hr))

	m_pSampler = NULL;

		{

	Release();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	m_Angle += XMConvertToRadians(1.0f);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&m_pImmediateContext);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			// Loop over vertices in the face.

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	LoadObj(vertexlist, indexList);



			}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_DOWN,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				break;

		// Loop over faces(polygon)

	m_Viewport.Width = (FLOAT)rect.Width();



	vbDesc.MiscFlags = 0;

	{

		else if (e.type == SDL_KEYDOWN)

	//vector<WORD> index_t;

	if (m_pImmediateContext)

			{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4X4 projection;







	SAFE_RELEASE(m_pRenderTargetView);

	return;

{



			{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);





	txDesc.Width = rect.Width();



	{

	SDL_DestroyRenderer(ren);

	m_pRenderTargetView = NULL;

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!reader.Warning().empty())



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.ArraySize = 1;



struct ConstantLightBuffer {

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);

	float    farZ = 100.0f;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];

	scDesc.SampleDesc.Count = 1;

	m_pInputLayout = NULL;

		&scDesc,

			case SDLK_RIGHT:

	//vector<Vertex> vertex_t;

				tinyobj::real_t tx =

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		size_t index_offset = 0;  // インデントのオフセット



};

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	for (int i = 0; i < 3; i++)



	m_IndexCount = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_BUFFER_DESC cbDesc;



		if (!reader.Error().empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	delete[] pIList;

 */

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		exit(1);

	delete[] pIList;

	//ビューポート設定

	while (SDL_PollEvent(&e) != 0)

		SDL_Delay(1000);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4X4 projection;

	enum KeyPressSurfaces

	UINT strides = sizeof(Vertex);



	D3D11_BUFFER_DESC cbDesc;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pVertexShader = NULL;

	float    farZ = 100.0f;

}

		flags,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

{



	{

			{

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<Vertex> vertexlist;



	SDL_Quit();

	Release();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_Viewport.MinDepth = 0.0f;



	{

	D3D11_BUFFER_DESC cbDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	return 0;

		SDL_RenderClear(ren);



	ConstantMaterial material; //物体の質感

			case SDLK_DOWN:

		// Loop over faces(polygon)



	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	pBackBuffer->Release();





	SDL_FreeSurface(bmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	CRect                rect;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		exit(1);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

		return hr;



		&m_pDevice,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))

		&error,

	m_Viewport.MaxDepth = 1.0f;

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         eyePos;   //視点座標

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vrData.SysMemPitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		pLevels,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	float    farZ = 100.0f;

		exit(1);

	if (FAILED(hr))



			switch (e.key.keysym.sym)





{

		1,

}

	m_Viewport.Height = (FLOAT)rect.Height();

	};

	reader_config.mtl_search_path = "./"; // Path to material files

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&error,

	/*

				break;

			}

	if (SDL_Init(SDL_INIT_VIDEO != 0))



			break;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_UP:



			}

	m_VertexCount = vcount;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				vertex.push_back(vertex_tmp);





		{



	for (int j = 0; j < icount; j++)

	//ビューポート設定

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	if (FAILED(hr))

		}

	SDL_Event e;

		// Loop over faces(polygon)

	ConstantLight    pntLight; //点光源

	tinyobj::ObjReaderConfig reader_config;





	if (FAILED(hr))









	//Create Index

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	UINT strides = sizeof(Vertex);

	vbDesc.StructureByteStride = 0;

	}

		&attrib,

	ConstantMaterial material; //物体の質感

			for (size_t v = 0; v < fv; v++)



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::string error;

	XMFLOAT4X4 view;

	CRect                rect;

	m_pDepthStencilView = NULL;

		//User presses a key

	scDesc.BufferDesc.Width = rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

}

}



				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		m_pImmediateContext->ClearState();

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SDL_DestroyWindow(win);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_BUFFER_DESC ibDesc;

int main(int, char**)

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

int SEGMENT = 36;

		}

	{

	ID3D11Texture2D* pBackBuffer;

	vbDesc.CPUAccessFlags = 0;



	m_Viewport.TopLeftX = 0;





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_DestroyWindow(win);

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			case SDLK_LEFT:

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(bmp);



	//ピクセルシェーダー生成

		return hr;

	m_pVertexShader = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pRenderTargetView = NULL;

	SDL_DestroyRenderer(ren);

int main(int, char**)

	}

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 view;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

		return hr;



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}*/



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;



	cbDesc.StructureByteStride = 0;



	SDL_Quit();



struct ConstantLight {

			for (size_t v = 0; v < fv; v++)

	SAFE_RELEASE(m_pImmediateContext);

		{

	scDesc.BufferCount = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

int main(int, char**)

	vector<Vertex> vertexlist;



				break;

	cbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4         eyePos;   //視点座標

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.StructureByteStride = 0;

	}





	}

	if (FAILED(hr))



	}



	D3D11_SAMPLER_DESC smpDesc;

		{

	D3D_FEATURE_LEVEL level;



	return;

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#include "DirectXManager.h"

struct ConstantLightBuffer {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		{

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.StructureByteStride = 0;

	int     vcount = vertexlist.size();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

};



		SDL_Delay(1000);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	scDesc.OutputWindow = hwnd;



}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				// access to vertex

		SDL_RenderClear(ren);



		KEY_PRESS_SURFACE_DOWN,

		return hr;

	{

				break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}



	SAFE_RELEASE(m_pTexture);

	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pSampler = NULL;

	if (m_pImmediateContext)

		return hr;

	UINT offsets = 0;

	delete[] pIList;





		SDL_RenderClear(ren);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vrData.SysMemPitch = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pDevice);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pPixelShader);

				break;



	/*



		pLevels,

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





{

	m_VertexCount = vcount;



	m_Viewport.MaxDepth = 1.0f;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&error,

	UINT flags = 0;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

	if (FAILED(hr))

	CRect                rect;

	D3D_FEATURE_LEVEL level;



		KEY_PRESS_SURFACE_TOTAL

		return hr;

		&m_pSwapChain,

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&shapes,

	float    nearZ = 0.1f;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

int SEGMENT = 36;

	scDesc.SampleDesc.Count = 1;

			{

#endif

	auto& shapes = reader.GetShapes();

			{

	SAFE_RELEASE(m_pDepthStencilTexture);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{







struct ConstantMaterial {

	for (int j = 0; j < icount; j++)

	/*

			index_offset += num_vertices;

	SAFE_RELEASE(m_pMatrixBuffer);

	for (const auto& shape : shapes)

		return hr;

	//頂点レイアウト作成

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

	std::string imagePath = "hello.bmp";

				indexlist.push_back(idx.vertex_index);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		flags,

	m_IndexCount = 0;

	SAFE_RELEASE(m_pInputLayout);

	//ビューポート設定

	};



	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

	scDesc.BufferCount = 1;

		delete[] pIList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&m_pSwapChain,

			switch (e.key.keysym.sym)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	{





	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	ConstantLightBuffer clb;

				break;



	txDesc.ArraySize = 1;

		else if (e.type == SDL_KEYDOWN)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyWindow(win);

	int     vcount = vertexlist.size();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

using std::cout; using std::endl;

HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



#ifdef _DEBUG

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//定数バッファ作成

		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_UP,



	m_IndexCount = icount;

}

			exit(1);

	scDesc.SampleDesc.Count = 1;

	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vector<Vertex> vertexlist;

		size_t index_offset = 0;

	}

				break;





int main(int, char**)

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//vector<Vertex> vertex_t;



#include <iostream>



	}



				tinyobj::real_t ty =



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//Create Index

	UINT offsets = 0;



	SAFE_RELEASE(m_pDepthStencilTexture);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//Key press surfaces constants



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&shapes,

			for (size_t v = 0; v < num_vertices; v++)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_SAMPLER_DESC smpDesc;

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

#include <SDL.h>

	//定数バッファ作成

	//深度ステンシルバッファ作成

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_FreeSurface(suf);



	};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;







	float    nearZ = 0.1f;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (const auto& shape : shapes)

	if (FAILED(hr))

			// Loop over vertices in the face.

	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (size_t s = 0; s < shapes.size(); s++)



	cbDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pImmediateContext);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			}

	if (FAILED(hr))

			}

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

int main(int, char**)

	m_pPixelShader = NULL;

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pLightBuffer);



	m_pTexture = NULL;

	float    fov = XMConvertToRadians(20.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	SDL_DestroyRenderer(ren);

	D3D_FEATURE_LEVEL level;

		SDL_RenderPresent(ren);

	//テクスチャ読み込み

	//頂点シェーダー生成

				break;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_FreeSurface(suf);

	m_IndexCount = 0;

	//First we need to start up SDL, and make sure it went ok

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Height = rect.Height();

		return hr;

	irData.SysMemPitch = 0;


