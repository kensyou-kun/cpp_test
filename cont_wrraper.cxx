	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	ZeroMemory(&txDesc, sizeof(txDesc));

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pSwapChain);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_UP,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_SUBRESOURCE_DATA vrData;





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;





	XMFLOAT4X4 projection;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		&error,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.StructureByteStride = 0;

		return hr;



				break;



	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.TopLeftX = 0;



	ConstantLight    pntLight; //点光源



	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	return 0;

	SDL_DestroyTexture(tex);

		&shapes,

		return hr;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	txDesc.Width = rect.Width();

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

}



		return hr;

	//vector<WORD> index_t;

	m_pMatrixBuffer = NULL;

	float    nearZ = 0.1f;

		return hr;

		delete[] pIList;

	float    nearZ = 0.1f;

	m_pImmediateContext = NULL;

		&m_pSwapChain,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



#define TINYOBJLOADER_IMPLEMENTATION



{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)

	//ビューポート設定





	}

			}

	UINT strides = sizeof(Vertex);

	}

	//頂点レイアウト作成



	if (FAILED(hr))

{

	SAFE_RELEASE(m_pImmediateContext);

			}

	}

	//ピクセルシェーダー生成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

		SDL_Delay(1000);

			default:

		SDL_RenderClear(ren);

using std::cout; using std::endl;

	ibDesc.CPUAccessFlags = 0;

		//User requests quit

		&scDesc,

		m_pImmediateContext->ClearState();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	delete[] pIList;

		}



	UINT flags = 0;

	scDesc.Windowed = TRUE;

	}

{

		cout << "SDL_INIT_ERROR" << endl;

	{

	if (FAILED(hr))







		size_t index_offset = 0;

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Quit();



		D3D11_SDK_VERSION,

	//定数バッファ作成

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pDepthStencilTexture);

}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Key press surfaces constants

			case SDLK_DOWN:

	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

	//vector<Vertex> vertex_t;





	SAFE_RELEASE(m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferCount = 1;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		flags,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantMatrixBuffer cmb;

			{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				WORD index = idx.vertex_index;

	delete[] pIList;

{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



#include "DirectXManager.h"

struct ConstantMatrixBuffer {

			case SDLK_DOWN:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			//Select surfaces based on key press

	enum KeyPressSurfaces



int main(int, char**)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	std::string inputfile = "test.obj";

	{

};

{

	D3D11_BUFFER_DESC cbDesc;

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

 * Lesson 1: Hello World!

#endif



	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_Delay(1000);

	if (FAILED(hr))



	UINT offsets = 0;

	for (size_t s = 0; s < shapes.size(); s++)



	m_pInputLayout = NULL;

	return hr;

	//インデックスバッファ作成



	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				// access to vertex

	//頂点レイアウト作成

			//Select surfaces based on key press

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



#include <SDL.h>

	SDL_DestroyTexture(tex);

}

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4X4 world;

		&scDesc,

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	UINT strides = sizeof(Vertex);

	pBackBuffer->Release();

	delete[] pVList;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

		&error,



	cbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//深度ステンシルバッファ作成

	{



{

	irData.SysMemPitch = 0;

	//Vertex* pVList = new Vertex[vcount];





			case SDLK_UP:

};

		{

				indexlist.push_back(index);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&attrib,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	irData.SysMemSlicePitch = 0;

void CD3DTest::Release()

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	return 0;



	bool ret = tinyobj::LoadObj(

	irData.SysMemPitch = 0;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&materials,

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pRenderTargetView = NULL;

		delete[] pIList;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferCount = 1;



			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void CD3DTest::Render()

	m_pVertexBuffer = NULL;

	}



		//User presses a key

			default:



		KEY_PRESS_SURFACE_RIGHT,



				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemPitch = 0;

	D3D11_SAMPLER_DESC smpDesc;

				indexlist.push_back(idx.vertex_index);

	if (!error.empty())









}

	cbDesc.CPUAccessFlags = 0;

	SDL_Quit();



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press



	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Quality = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			break;

	}

	ConstantLight    pntLight; //点光源

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	}

		&m_pDevice,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	D3D11_BUFFER_DESC ibDesc;



		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		pVList[i] = vertexlist[i];

{



	XMStoreFloat4(&clb.ambient, lightAmbient);

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.StructureByteStride = 0;



	SDL_DestroyRenderer(ren);

			default:

	D3D11_BUFFER_DESC vbDesc;

				WORD index = idx.vertex_index;

		}

			case SDLK_RIGHT:

			}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SAFE_RELEASE(m_pDepthStencilView);

				break;

	m_pLightBuffer = NULL;

	SDL_DestroyRenderer(ren);



	cbDesc.MiscFlags = 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vrData.SysMemPitch = 0;



	D3D11_SUBRESOURCE_DATA irData;



	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pVertexShader);

	return hr;

	auto& shapes = reader.GetShapes();

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	int     vcount = vertexlist.size();

 * Lesson 1: Hello World!

	txDesc.SampleDesc.Count = 1;

	vrData.SysMemPitch = 0;

	XMFLOAT4X4 world;

	m_pSampler = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		pIList[j] = indexList[j];

	m_pSwapChain = NULL;

};

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;



	ibDesc.StructureByteStride = 0;

	return 0;

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.CPUAccessFlags = 0;

		&level,

				vertex.push_back(vertex_tmp);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			switch (e.key.keysym.sym)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

}
	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		//User presses a key

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	tinyobj::ObjReaderConfig reader_config;

 */



	SAFE_RELEASE(m_pDevice);



	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pRenderTargetView);

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_Delay(1000);

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pTexture);

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	delete[] pVList;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;



	//vector<Vertex> vertex_t;

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	Release();

		D3D11_SDK_VERSION,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





				// access to vertex



#define TINYOBJLOADER_IMPLEMENTATION

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.SampleDesc.Count = 1;



	XMFLOAT4X4 view;

	//頂点レイアウト作成



}

	ibDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4X4 view;

				break;

	for (int i = 0; i < 3; i++)

		return hr;



	{

	//vector<WORD> index_t;

				break;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

	auto& materials = reader.GetMaterials();



	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	vrData.pSysMem = &pVList[0];

	ConstantLightBuffer clb;

/*

	SAFE_RELEASE(m_pLightBuffer);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





void CD3DTest::Release()





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	std::vector<tinyobj::shape_t> shapes;



		if (!reader.Error().empty())

	ID3D11Texture2D* pBackBuffer;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

int SEGMENT = 36;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pRenderTargetView);

	Release();

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_SAMPLER_DESC smpDesc;

 */

		SDL_Delay(1000);

	int     vcount = vertexlist.size();

		//User requests quit

	{

	SAFE_RELEASE(m_pPixelShader);

	bool ret = tinyobj::LoadObj(

	//Create Index

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





		&shapes,

	DXGI_SWAP_CHAIN_DESC scDesc;

	//Create Index

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

			// Loop over vertices in the face.

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

	SDL_FreeSurface(suf);



	Release();

		if (!reader.Error().empty())



	}

	DXGI_SWAP_CHAIN_DESC scDesc;





	txDesc.ArraySize = 1;



	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);





HRESULT CD3DTest::Create(HWND hwnd)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::vector<tinyobj::shape_t> shapes;



				tinyobj::real_t ty =

			case SDLK_LEFT:

	WORD   icount = indexList.size();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		return hr;

};

	CRect                rect;



	irData.pSysMem = &pIList[0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

		SDL_RenderClear(ren);

				// access to vertex

		return hr;

	auto& attrib = reader.GetAttrib();



	m_pTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Render()

	DXGI_SWAP_CHAIN_DESC scDesc;

};

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



			case SDLK_RIGHT:

	Release();

		SDL_RenderPresent(ren);

	Vertex* pVList = new Vertex[vcount];

		&scDesc,

		KEY_PRESS_SURFACE_LEFT,



	auto& materials = reader.GetMaterials();

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTextureView);

	//テクスチャ読み込み

	scDesc.SampleDesc.Quality = 0;

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_LEFT,

		return hr;

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_RIGHT,

}

				indexlist.push_back(index);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pSampler = NULL;

	ibDesc.StructureByteStride = 0;

	//頂点バッファ作成



	//頂点レイアウト作成

	txDesc.Width = rect.Width();

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



#ifdef _DEBUG

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





		&scDesc,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_UP,

struct ConstantMatrixBuffer {

{

	m_pPixelShader = NULL;

{

			index_offset += fv;

			}

	//頂点シェーダー生成

		R"(cube.obj)");

	vbDesc.CPUAccessFlags = 0;



	UINT flags = 0;

	vrData.SysMemSlicePitch = 0;

	Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pDepthStencilTexture = NULL;

		}

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		}



	std::string inputfile = "test.obj";

	m_pDepthStencilView = NULL;

		}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.CPUAccessFlags = 0;



	return;

	while (SDL_PollEvent(&e) != 0)

	scDesc.BufferDesc.Width = rect.Width();

	{

		cout << "SDL_INIT_ERROR" << endl;

	auto& attrib = reader.GetAttrib();

	SDL_DestroyRenderer(ren);

	std::string inputfile = "test.obj";

using std::cout; using std::endl;

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	auto& materials = reader.GetMaterials();

	D3D11_BUFFER_DESC cbDesc;

		cout << "SDL_INIT_ERROR" << endl;





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		//User presses a key

	irData.SysMemPitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}*/

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	m_Viewport.Width = (FLOAT)rect.Width();

	{



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			// Loop over vertices in the face.



	m_pIndexBuffer = NULL;

	m_pVertexShader = NULL;

	}

{

	{

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Height = rect.Height();



	vrData.SysMemPitch = 0;

	vbDesc.MiscFlags = 0;

		&shapes,

	txDesc.Width = rect.Width();





		KEY_PRESS_SURFACE_RIGHT,

}

				// access to vertex

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	scDesc.SampleDesc.Count = 1;

		}

	std::vector<tinyobj::shape_t> shapes;

struct ConstantMatrixBuffer {



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	cbDesc.MiscFlags = 0;

			case SDLK_RIGHT:

		delete[] pIList;





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			break;



CD3DTest::CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}



int main(int, char**)

	m_Viewport.Width = (FLOAT)rect.Width();

int main(int, char**)

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);







	enum KeyPressSurfaces

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D_FEATURE_LEVEL level;

	//定数バッファ作成





			index_offset += num_vertices;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_TEXTURE2D_DESC txDesc;

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 ambient;           //環境(r,g,b)

			break;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	LoadObj(vertexlist, indexList);



	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

#include "DirectXManager.h"



		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	txDesc.CPUAccessFlags = 0;

	{



		{

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (int i = 0; i < 3; i++)

				vertex.push_back(vertex_tmp);

	m_pTextureView = NULL;

		&attrib,

				WORD index = idx.vertex_index;

	if (m_pImmediateContext)



	vbDesc.StructureByteStride = 0;

	//Clean up our objects and quit

		&attrib,



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

			break;

	SDL_DestroyRenderer(ren);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



using std::cout; using std::endl;

				break;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		}

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.Height = rect.Height();

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t ty =









	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			default:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//Create Index

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		SDL_RenderClear(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}



	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.MiscFlags = 0;

	{



{



}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SDL_Event e;

	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#include <SDL.h>

	ZeroMemory(&txDesc, sizeof(txDesc));

	}*/

	//First we need to start up SDL, and make sure it went ok



	m_Viewport.TopLeftY = 0;

	XMFLOAT4X4 view;



}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	Release();



	{

	for (size_t s = 0; s < shapes.size(); s++)

		&m_pImmediateContext);

				// access to vertex

	Release();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSwapChain->Present(0, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_DOWN:

	txDesc.SampleDesc.Count = 1;

	scDesc.SampleDesc.Quality = 0;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vector<Vertex> vertexlist;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyTexture(tex);

	//テクスチャ読み込み

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Quit();

{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		if (!reader.Error().empty())

	}

		//User requests quit

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

		pIList[j] = indexList[j];

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	auto& materials = reader.GetMaterials();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	cbDesc.MiscFlags = 0;

	SDL_DestroyRenderer(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

		size_t index_offset = 0;  // インデントのオフセット

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&level,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	for (const auto& shape : shapes)

	m_pDepthStencilView = NULL;

}

#include <iostream>

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	if (FAILED(hr))



	m_VertexCount = 0;

	//インデックスバッファ作成

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pSwapChain);

	//定数バッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.BufferCount = 1;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantLightBuffer {



	//頂点レイアウト作成

		exit(1);

		return hr;



			// Loop over vertices in the face.



		NULL,



	ibDesc.CPUAccessFlags = 0;

	HRESULT              hr;

 * Lesson 1: Hello World!

		&m_pDevice,



		KEY_PRESS_SURFACE_UP,

	SDL_Quit();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pTexture = NULL;

		D3D11_SDK_VERSION,



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	irData.SysMemPitch = 0;

	ConstantMatrixBuffer cmb;



	SAFE_RELEASE(m_pMatrixBuffer);

	}

				indexlist.push_back(index);

	UINT offsets = 0;



	m_IndexCount = icount;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.SampleDesc.Quality = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	return 0;

	m_pDepthStencilView = NULL;

	m_pTextureView = NULL;

#include <iostream>

#endif

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#ifdef _DEBUG

	scDesc.Windowed = TRUE;

}

	if (!error.empty())

		pVList[i] = vertexlist[i];

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	ConstantMatrixBuffer cmb;

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&error,

	return;



	vbDesc.MiscFlags = 0;

		1,

		m_pImmediateContext->ClearState();



		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		if (e.type == SDL_QUIT)

	if (!error.empty())



	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



			default:

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//ビューポート設定

	for (int i = 0; i < 3; i++)



	for (const auto& shape : shapes)

		pIList[j] = indexList[j];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#define TINYOBJLOADER_IMPLEMENTATION



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyRenderer(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_TOTAL

};

	dsDesc.Texture2D.MipSlice = 0;

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	//インデックスバッファ作成

		flags,

	}



				// access to vertex

	m_VertexCount = vcount;

	}

	//vector<WORD> index_t;

 */



	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	irData.SysMemSlicePitch = 0;

		return hr;

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

	LoadObj(vertexlist, indexList);



	{

		if (!ret)





using std::cout; using std::endl;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

			{

}
	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	UINT strides = sizeof(Vertex);

	float    nearZ = 0.1f;

		if (e.type == SDL_QUIT)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pTextureView = NULL;

				// access to vertex

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.eyePos, eye);

void CD3DTest::Render()

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		KEY_PRESS_SURFACE_RIGHT,



		{

	for (int j = 0; j < icount; j++)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderClear(ren);

	vbDesc.MiscFlags = 0;

};

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	SAFE_RELEASE(m_pVertexShader);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4X4 projection;

		//User presses a key

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 ambient;           //環境(r,g,b)

	WORD* pIList = new WORD[icount];

};

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#endif

	cbDesc.CPUAccessFlags = 0;

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	//定数バッファ作成

}

		pIList[j] = indexList[j];

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 view;

		{



}

	return;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

				// access to vertex

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				WORD index = idx.vertex_index;

}

	SAFE_RELEASE(m_pTextureView);

	}

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	tinyobj::ObjReaderConfig reader_config;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

			for (size_t v = 0; v < fv; v++)

};

	// Loop over shapes

	if (FAILED(hr))

	//Key press surfaces constants

	SDL_Quit();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;



			{

struct ConstantLight {

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.Width = rect.Width();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

				// access to vertex

		}

	scDesc.SampleDesc.Count = 1;

	{

	m_pTextureView = NULL;

	//vector<Vertex> vertex_t;

	{



			//Select surfaces based on key press

	{

		}

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	}

	}



		KEY_PRESS_SURFACE_UP,

	SDL_FreeSurface(bmp);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include "DirectXManager.h"

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_FreeSurface(bmp);

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

		if (!ret)

	vector<WORD> indexList;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	m_VertexCount = vcount;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))



	//Clean up our objects and quit





	ZeroMemory(&txDesc, sizeof(txDesc));





#endif

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#endif

		}

	std::string imagePath = "hello.bmp";

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 world;

	}



	//テクスチャ読み込み

				WORD index = idx.vertex_index;



	return 0;

	std::vector<tinyobj::material_t> materials;

	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.CPUAccessFlags = 0;

		return hr;

	SDL_Event e;

	txDesc.SampleDesc.Count = 1;

	D3D11_TEXTURE2D_DESC txDesc;

			}

				break;

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			index_offset += num_vertices;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{



	m_pSwapChain = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	XMStoreFloat4(&clb.eyePos, eye);

	}



	ConstantMaterial material; //物体の質感



	//ピクセルシェーダー生成

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& shapes = reader.GetShapes();



	vrData.pSysMem = &pVList[0];

}





	scDesc.OutputWindow = hwnd;

	ConstantLightBuffer clb;

	D3D_FEATURE_LEVEL level;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

{

	//Create Index



void CD3DTest::Render()

	HRESULT              hr;

	{



int main(int, char**)

			}

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReaderConfig reader_config;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	hr = D3D11CreateDeviceAndSwapChain(NULL,



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		D3D11_SDK_VERSION,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#include <SDL.h>



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.MiscFlags = 0;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	float    farZ = 100.0f;

		SDL_RenderPresent(ren);

	std::string error;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	txDesc.ArraySize = 1;



}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			exit(1);

	ibDesc.MiscFlags = 0;

				break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	dsDesc.Format = txDesc.Format;

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}
	m_pIndexBuffer = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//頂点バッファ作成

}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





				// access to vertex

	XMFLOAT4X4 world;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

		&m_pImmediateContext);

	txDesc.MiscFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

	auto& attrib = reader.GetAttrib();

	//Create Index

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&error,

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pPixelShader);

	//Vertex* pVList = new Vertex[vcount];

};



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	reader_config.mtl_search_path = "./"; // Path to material files

	m_VertexCount = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		flags,

}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&m_pSwapChain,

	txDesc.Width = rect.Width();



#include <SDL.h>

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC ibDesc;



	WORD   icount = indexList.size();

	SDL_Quit();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	UINT strides = sizeof(Vertex);

	tinyobj::attrib_t attrib;







	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&scDesc,

{

	Vertex* pVList = new Vertex[vcount];

	delete[] pVList;

	{

	Vertex* pVList = new Vertex[vcount];

	{

	XMFLOAT4         eyePos;   //視点座標



		KEY_PRESS_SURFACE_RIGHT,

struct ConstantMatrixBuffer {



	txDesc.Width = rect.Width();

	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4         eyePos;   //視点座標

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t tx =

		pVList[i] = vertexlist[i];

		D3D_DRIVER_TYPE_HARDWARE,

	}*/

	::ZeroMemory(&scDesc, sizeof(scDesc));

	Release();

			index_offset += num_vertices;

		R"(cube.obj)");

		{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	HRESULT              hr;

	bool ret = tinyobj::LoadObj(

			}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

int SEGMENT = 36;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	scDesc.SampleDesc.Count = 1;

	vrData.SysMemSlicePitch = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pDevice);

		return hr;

			}

	//深度ステンシルバッファ作成

	}



}

	{





		SDL_Delay(1000);



	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.SampleDesc.Quality = 0;

	return;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D11_SUBRESOURCE_DATA irData;





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantMaterial {

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&error,

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pVertexShader);



		}

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Height = rect.Height();









CD3DTest::CD3DTest()

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)





	{



		return hr;

		}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

			//Select surfaces based on key press



	}

	m_pDepthStencilView = NULL;



	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	ibDesc.StructureByteStride = 0;

			break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

};

 * Lesson 1: Hello World!

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	// Loop over shapes

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		pVList[i] = vertexlist[i];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))



	::ZeroMemory(&scDesc, sizeof(scDesc));

				WORD index = idx.vertex_index;

	//深度ステンシルバッファ作成

#ifdef _DEBUG

	//インデックスバッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Texture2D.MipSlice = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	auto& shapes = reader.GetShapes();

	SDL_DestroyTexture(tex);

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pDevice);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pTexture);

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))



};

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float    farZ = 100.0f;



		&scDesc,

		D3D_DRIVER_TYPE_HARDWARE,

				vertex.push_back(vertex_tmp);

	D3D11_TEXTURE2D_DESC txDesc;

	{

	}

	if (FAILED(hr))

			// Loop over vertices in the face.

	}

	{

		}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		m_pImmediateContext->ClearState();



	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	m_pDepthStencilView = NULL;

	m_pTextureView = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	pBackBuffer->Release();



	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

		}

	scDesc.BufferDesc.Height = rect.Height();

	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//ピクセルシェーダー生成

	SDL_Event e;

/*

	LoadObj(vertexlist, indexList);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.CPUAccessFlags = 0;

			exit(1);

	scDesc.Windowed = TRUE;

	return;

	SDL_DestroyTexture(tex);

#include <iostream>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		m_pImmediateContext->ClearState();

	SDL_DestroyRenderer(ren);

	D3D11_SUBRESOURCE_DATA vrData;



	// Loop over shapes

				WORD index = idx.vertex_index;

		delete[] pIList;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_DOWN,

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pSwapChain);

}

	}

	txDesc.Width = rect.Width();



	float    farZ = 100.0f;



	{

	};

	SDL_Quit();

		&error,

	irData.pSysMem = &pIList[0];

	{

		else if (e.type == SDL_KEYDOWN)



	cbDesc.StructureByteStride = 0;



	{



	m_Viewport.TopLeftY = 0;

	{



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



				indexlist.push_back(idx.vertex_index);

	if (!error.empty())

}



	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

			case SDLK_UP:

	SAFE_RELEASE(m_pLightBuffer);



			{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return 1;

		// Loop over faces(polygon)

	{

	scDesc.SampleDesc.Quality = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pImmediateContext);

}



				break;

	scDesc.SampleDesc.Count = 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

	txDesc.CPUAccessFlags = 0;

	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pIndexBuffer);





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pVertexShader);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

{

	}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

int main(int, char**)

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();



			// Loop over vertices in the face.

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			// Loop over vertices in the face.

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD   icount = indexList.size();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

		flags,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



			{

			// Loop over vertices in the face.



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			exit(1);

			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	ibDesc.MiscFlags = 0;

	m_Viewport.TopLeftX = 0;

			for (size_t v = 0; v < num_vertices; v++)

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



/*

	float    farZ = 100.0f;



	DXGI_SWAP_CHAIN_DESC scDesc;

{

			{

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



			case SDLK_RIGHT:



};

		{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	LoadObj(vertexlist, indexList);

	SDL_Quit();

	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	DXGI_SWAP_CHAIN_DESC scDesc;



		m_pImmediateContext->ClearState();

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	/*







	XMFLOAT4 specular;          //反射(r,g,b)

	std::vector<tinyobj::shape_t> shapes;

		}



		pLevels,





	{

		return hr;

	WORD   icount = indexList.size();

HRESULT CD3DTest::Create(HWND hwnd)



{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

		return hr;

	m_Viewport.MinDepth = 0.0f;



		{

	}





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

};

	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User requests quit

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				vertex.push_back(vertex_tmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			//Select surfaces based on key press

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		//User presses a key

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	XMFLOAT4         ambient;  //環境光(r,g,b)

		return 1;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMatrixBuffer cmb;

	m_pSwapChain = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;



	{

	txDesc.SampleDesc.Quality = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		pVList[i] = vertexlist[i];

	m_Viewport.MinDepth = 0.0f;

				vertex.push_back(vertex_tmp);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_Viewport.Width = (FLOAT)rect.Width();

#ifdef _DEBUG

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::attrib_t attrib;

		m_pImmediateContext->ClearState();

	txDesc.SampleDesc.Quality = 0;

				indexlist.push_back(idx.vertex_index);

	return 0;

		&scDesc,

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

		SDL_RenderPresent(ren);



	SDL_DestroyTexture(tex);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	pBackBuffer->Release();

	SDL_FreeSurface(suf);

	m_IndexCount = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Format = txDesc.Format;

	return;

	//定数バッファ作成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pRenderTargetView);

void CD3DTest::Render()

		}

	{

		return hr;





	if (FAILED(hr))

		return 1;



{

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	{

}

	txDesc.MiscFlags = 0;



	if (FAILED(hr))

			{

	delete[] pIList;







	scDesc.OutputWindow = hwnd;

	m_VertexCount = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)



		D3D11_SDK_VERSION,

		&error,

		else if (e.type == SDL_KEYDOWN)

	D3D11_BUFFER_DESC vbDesc;

	m_pDevice = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	::GetClientRect(hwnd, &rect);

	tinyobj::ObjReader reader;

	m_pSwapChain = NULL;

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	bool ret = tinyobj::LoadObj(

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 pos;               //座標(x,y,z)

	float    nearZ = 0.1f;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		1,

	for (int j = 0; j < icount; j++)

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pSwapChain);

	enum KeyPressSurfaces

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&shapes,



	//定数バッファ作成

	//頂点シェーダー生成

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_IndexCount = icount;

	/*

		}

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pDevice);

	{

	//Clean up our objects and quit

	delete[] pIList;



	XMFLOAT4 specular;          //反射(r,g,b)



	ConstantMatrixBuffer cmb;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))



	m_pIndexBuffer = NULL;

	D3D11_SUBRESOURCE_DATA vrData;



	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

		&attrib,

		{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pDevice = NULL;

#include <SDL.h>

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	flags |= D3D11_CREATE_DEVICE_DEBUG;

	for (size_t s = 0; s < shapes.size(); s++)

		pIList[j] = indexList[j];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//頂点レイアウト作成

{

		//User presses a key

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.BufferCount = 1;



	pBackBuffer->Release();

	}

	CRect                rect;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		&attrib,

			{



			break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{



		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		{

		D3D_DRIVER_TYPE_HARDWARE,

				break;

		return hr;

	m_VertexCount = 0;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_FreeSurface(bmp);



	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pVertexBuffer = NULL;

}





				indexlist.push_back(idx.vertex_index);

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点バッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pMatrixBuffer = NULL;

	{

				vertex.push_back(vertex_tmp);

	//First we need to start up SDL, and make sure it went ok



	ibDesc.StructureByteStride = 0;



	return 0;

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t ty =

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

	{



	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		}

				break;

	//First we need to start up SDL, and make sure it went ok

		return hr;

#include <SDL.h>

	{

	tinyobj::ObjReader reader;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;



				vertex.push_back(vertex_tmp);

		R"(cube.obj)");

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			break;

		&attrib,

	UINT flags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	tinyobj::ObjReader reader;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	UINT offsets = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			index_offset += num_vertices;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyWindow(win);

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantLight {

	{

		NULL,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			index_offset += num_vertices;



	XMFLOAT4         eyePos;   //視点座標

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         eyePos;   //視点座標



	{



		delete[] pIList;



	for (int i = 0; i < vcount; i++)



};

	{



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	if (FAILED(hr))

		return hr;







};

	WORD* pIList = new WORD[icount];

	m_pSwapChain->Present(0, 0);



	m_pSwapChain->Present(0, 0);

		return hr;

	auto& attrib = reader.GetAttrib();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4         ambient;  //環境光(r,g,b)

		delete[] pVList;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

struct ConstantMaterial {

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				WORD index = idx.vertex_index;

	txDesc.Height = rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.Width = rect.Width();

		D3D11_SDK_VERSION,

	scDesc.Windowed = TRUE;





	scDesc.SampleDesc.Count = 1;

	SDL_DestroyRenderer(ren);

			{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	irData.pSysMem = &pIList[0];

		delete[] pIList;

		KEY_PRESS_SURFACE_RIGHT,

		SDL_RenderClear(ren);

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float    fov = XMConvertToRadians(20.0f);

	std::string error;

		return hr;

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

	m_VertexCount = 0;

	delete[] pVList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.TopLeftX = 0;

	vbDesc.MiscFlags = 0;

	m_VertexCount = 0;

	cbDesc.CPUAccessFlags = 0;

	bool ret = tinyobj::LoadObj(



	reader_config.mtl_search_path = "./"; // Path to material files



{

	m_pRenderTargetView = NULL;

		//User presses a key

	m_pInputLayout = NULL;

			{



struct ConstantLight {



			case SDLK_DOWN:

	LoadObj(vertexlist, indexList);

			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = 0;





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				indexlist.push_back(index);



	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();



	SDL_FreeSurface(bmp);







#define TINYOBJLOADER_IMPLEMENTATION



		D3D11_SDK_VERSION,

	m_pIndexBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pInputLayout);

	//頂点レイアウト作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	m_Viewport.MinDepth = 0.0f;

	m_IndexCount = icount;

	tinyobj::attrib_t attrib;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;

using std::cout; using std::endl;

	}

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

};



	}

	SAFE_RELEASE(m_pMatrixBuffer);

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#include <iostream>

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

		if (e.type == SDL_QUIT)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

 * Lesson 1: Hello World!

		R"(cube.obj)");



	m_pPixelShader = NULL;

	}

	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::string imagePath = "hello.bmp";

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	SAFE_RELEASE(m_pImmediateContext);

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pLightBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				break;

	if (FAILED(hr))



	float    nearZ = 0.1f;

	auto& materials = reader.GetMaterials();



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext = NULL;

			{

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		return hr;

		delete[] pIList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			switch (e.key.keysym.sym)

		if (!ret)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			index_offset += num_vertices;

{

	XMFLOAT4X4 projection;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	{



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#ifdef _DEBUG

	return 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

struct ConstantLight {

	XMFLOAT4 pos;               //座標(x,y,z)

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	if (FAILED(hr))

	if (FAILED(hr))

	m_pTextureView = NULL;

	cbDesc.StructureByteStride = 0;



	XMFLOAT4X4 projection;

	ibDesc.StructureByteStride = 0;

	{

		D3D11_SDK_VERSION,

	CRect                rect;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))



	txDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;



 * Lesson 1: Hello World!

{

	std::string error;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		size_t index_offset = 0;

	cbDesc.MiscFlags = 0;



	D3D_FEATURE_LEVEL level;

	{

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{

	XMFLOAT4         eyePos;   //視点座標

{

		return hr;

	vrData.pSysMem = &pVList[0];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

		if (!reader.Error().empty())

	}



CD3DTest::~CD3DTest()

	cbDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		}

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;



		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	SAFE_RELEASE(m_pRenderTargetView);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vector<Vertex> vertexlist;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {





	vbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	Release();



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	for (const auto& shape : shapes)

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&shapes,

	m_IndexCount = icount;

	txDesc.SampleDesc.Quality = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	{

	/*

	tinyobj::ObjReader reader;

	m_pDepthStencilTexture = NULL;





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	SAFE_RELEASE(m_pTextureView);



	m_Viewport.TopLeftX = 0;



	{

	WORD   icount = indexList.size();

		return hr;



		//User presses a key

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pSwapChain);

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

		// Loop over faces(polygon)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pDevice = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

		}



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ibDesc.MiscFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftY = 0;

	{



	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	//First we need to start up SDL, and make sure it went ok



	tinyobj::ObjReader reader;

		size_t index_offset = 0;  // インデントのオフセット

	enum KeyPressSurfaces

		return hr;

		{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

		&shapes,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				indexlist.push_back(index);

	m_pInputLayout = NULL;

	m_Viewport.TopLeftY = 0;



	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReader reader;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pRenderTargetView = NULL;

			}



	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	std::vector<tinyobj::shape_t> shapes;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			{

int main(int, char**)

}



	cbDesc.StructureByteStride = 0;



			index_offset += fv;

	WORD* pIList = new WORD[icount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			case SDLK_RIGHT:

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pDepthStencilView);

			{

	//ピクセルシェーダー生成

}

	SAFE_RELEASE(m_pPixelShader);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





{



		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

	UINT flags = 0;

	scDesc.SampleDesc.Count = 1;

				break;



		return hr;

	m_pTextureView = NULL;

	m_pSwapChain = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				tinyobj::real_t ty =

				break;



	txDesc.CPUAccessFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vbDesc.MiscFlags = 0;

/*

	return hr;





			}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC cbDesc;

	ID3D11Texture2D* pBackBuffer;

	{

	}

	auto& shapes = reader.GetShapes();

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

		SDL_RenderPresent(ren);

	//テクスチャ読み込み

	float    fov = XMConvertToRadians(20.0f);

			case SDLK_RIGHT:

	//深度ステンシルバッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pDevice);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	vbDesc.StructureByteStride = 0;

		1,

	D3D11_SAMPLER_DESC smpDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

		D3D_DRIVER_TYPE_HARDWARE,



	SDL_Quit();



	return 0;

	scDesc.BufferDesc.Width = rect.Width();

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	}



	D3D11_BUFFER_DESC cbDesc;



	UINT offsets = 0;



				vertex.push_back(vertex_tmp);

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

	tinyobj::attrib_t attrib;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_LEFT,

			}



			for (size_t v = 0; v < fv; v++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	ibDesc.CPUAccessFlags = 0;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

using std::cout; using std::endl;

	m_pInputLayout = NULL;

	scDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pPixelShader);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pInputLayout = NULL;



	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

		}

		&shapes,

				indexlist.push_back(index);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//vector<WORD> index_t;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();



	D3D11_TEXTURE2D_DESC txDesc;

		pVList[i] = vertexlist[i];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.eyePos, eye);

	m_Viewport.Width = (FLOAT)rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTexture);



	auto& attrib = reader.GetAttrib();

			}







		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 specular;          //反射(r,g,b)



	SAFE_RELEASE(m_pRenderTargetView);

				vertex.push_back(vertex_tmp);

				break;

	//Clean up our objects and quit

	float    farZ = 100.0f;

	irData.SysMemPitch = 0;

	delete[] pVList;

	SDL_Quit();







	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	txDesc.SampleDesc.Quality = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	Release();

		SDL_Delay(1000);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			}

	m_Viewport.MaxDepth = 1.0f;

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

{

	XMFLOAT4X4 view;



				break;

	m_IndexCount = 0;

	cbDesc.StructureByteStride = 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



	}



		&level,

		return hr;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int i = 0; i < vcount; i++)

}


	SAFE_RELEASE(m_pSampler);

	LoadObj(vertexlist, indexList);



				WORD index = idx.vertex_index;



	if (!error.empty())

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pTextureView = NULL;

	ibDesc.CPUAccessFlags = 0;

		return hr;

{

		SDL_RenderClear(ren);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	//インデックスバッファ作成

		&m_pSwapChain,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;

}

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.OutputWindow = hwnd;

	m_Viewport.MaxDepth = 1.0f;

	m_pTextureView = NULL;

void CD3DTest::Release()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#include "DirectXManager.h"

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

HRESULT CD3DTest::Create(HWND hwnd)

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pVertexShader = NULL;

#include "DirectXManager.h"

	m_pImmediateContext = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//テクスチャ読み込み



	Vertex* pVList = new Vertex[vcount];

				break;

			break;

	}

}
	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.TopLeftX = 0;

	CRect                rect;

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <iostream>

			for (size_t v = 0; v < num_vertices; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

void CD3DTest::Release()

				tinyobj::real_t tx =

	ConstantMaterial material; //物体の質感

	m_Viewport.MaxDepth = 1.0f;

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			{

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_UP:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//vector<WORD> index_t;

	CRect                rect;

		}

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vrData.SysMemPitch = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	int     vcount = vertexlist.size();



	txDesc.CPUAccessFlags = 0;



	return;

	//テクスチャ読み込み

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pTexture);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





		return hr;

				indexlist.push_back(index);

	//Create Index

				break;

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))



	}

	SAFE_RELEASE(m_pDepthStencilView);

	}

void CD3DTest::Render()

		return hr;

		return hr;

	irData.SysMemSlicePitch = 0;



	//Key press surfaces constants

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		//User presses a key



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{

	m_pSwapChain->Present(0, 0);

			index_offset += fv;

	{

	//Key press surfaces constants

		&shapes,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pIndexBuffer);

	enum KeyPressSurfaces

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;



		&scDesc,

	SAFE_RELEASE(m_pImmediateContext);

		return 1;

	dsDesc.Format = txDesc.Format;

		&materials,



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}



				break;

	LoadObj(vertexlist, indexList);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.SampleDesc.Count = 1;

	tinyobj::attrib_t attrib;



	return;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			break;

		return hr;

	}

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

			for (size_t v = 0; v < num_vertices; v++)

			exit(1);

	{

		flags,

	if (!error.empty())

			{







			}

	SAFE_RELEASE(m_pRenderTargetView);

void CD3DTest::Render()

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pDepthStencilView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		SDL_Delay(1000);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





		1,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (int i = 0; i < 3; i++)

	return 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&error,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

	if (!reader.Warning().empty())

		}



	if (FAILED(hr))



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			{

	scDesc.SampleDesc.Quality = 0;

		&scDesc,



	m_pIndexBuffer = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	WORD   icount = indexList.size();

	SDL_DestroyWindow(win);

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	vector<Vertex> vertexlist;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.OutputWindow = hwnd;

};

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;



	m_pSwapChain = NULL;

	}

	if (FAILED(hr))

	if (FAILED(hr))



	ZeroMemory(&dsDesc, sizeof(dsDesc));



{

		else if (e.type == SDL_KEYDOWN)

			for (size_t v = 0; v < num_vertices; v++)

		&shapes,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

}

};

	scDesc.SampleDesc.Quality = 0;





	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.MiscFlags = 0;

		if (!reader.Error().empty())

	}

	txDesc.Width = rect.Width();

	m_IndexCount = icount;

		size_t index_offset = 0;

	m_VertexCount = 0;





	WORD   icount = indexList.size();

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& materials = reader.GetMaterials();

			default:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::ObjReaderConfig reader_config;

	for (const auto& shape : shapes)

		//User presses a key



		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 pos;               //座標(x,y,z)

	{

	SDL_DestroyWindow(win);

	{

	Vertex* pVList = new Vertex[vcount];

	m_IndexCount = icount;

	D3D_FEATURE_LEVEL level;



		return hr;

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	txDesc.CPUAccessFlags = 0;

	}

	m_pDepthStencilView = NULL;

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_IndexCount = 0;



	if (!reader.ParseFromFile(inputfile, reader_config))

 */

	{

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

};

	{

 * Lesson 1: Hello World!

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(bmp);



	m_pInputLayout = NULL;

	if (!error.empty())

			}

		SDL_Delay(1000);



		{

	m_pTexture = NULL;

	m_pInputLayout = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	//インデックスバッファ作成



	txDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	delete[] pIList;

	txDesc.Height = rect.Height();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	scDesc.OutputWindow = hwnd;

	scDesc.SampleDesc.Quality = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pTextureView);



{

	tinyobj::ObjReaderConfig reader_config;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantMatrixBuffer cmb;

	vbDesc.MiscFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		//User presses a key

CD3DTest::CD3DTest()

{

	SDL_Event e;

	//Key press surfaces constants

	std::string imagePath = "hello.bmp";

			case SDLK_UP:

			case SDLK_UP:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&level,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		1,



	SDL_DestroyRenderer(ren);

	float    farZ = 100.0f;

			break;

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;



{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}


			{



	SDL_DestroyWindow(win);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

struct ConstantLight {



	enum KeyPressSurfaces

	pBackBuffer->Release();

	m_IndexCount = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	WORD* pIList = new WORD[icount];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	Release();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&attrib,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::string error;







		{

	txDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC cbDesc;

};

#include <iostream>

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_DEFAULT,



	cbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(



	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}



	XMFLOAT4 attenuate;         //減衰(a,b,c)







	if (FAILED(hr))

	{

			{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(suf);



	txDesc.CPUAccessFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))





	m_pPixelShader = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

};

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDevice);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

 */

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	std::string error;

			}

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	//Clean up our objects and quit

		m_pImmediateContext->ClearState();

		return hr;

	irData.pSysMem = &pIList[0];

	irData.SysMemSlicePitch = 0;



	scDesc.BufferCount = 1;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_VertexCount = 0;

		size_t index_offset = 0;  // インデントのオフセット

		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include <iostream>



	return hr;

	SDL_DestroyWindow(win);

}

	ibDesc.CPUAccessFlags = 0;

	ConstantLight    pntLight; //点光源

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	irData.SysMemSlicePitch = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	for (int i = 0; i < 3; i++)

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&m_pDevice,



			case SDLK_LEFT:



};



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		KEY_PRESS_SURFACE_DOWN,

		return hr;

#include <SDL.h>

		return hr;

				// access to vertex

	scDesc.SampleDesc.Quality = 0;





		// Loop over faces(polygon)



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;

			{

		SDL_Delay(1000);

	}

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.StructureByteStride = 0;



	txDesc.SampleDesc.Quality = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.TopLeftY = 0;

	/*

	txDesc.MipLevels = 1;

	Release();

	m_pImmediateContext = NULL;







				// access to vertex

	SDL_FreeSurface(bmp);

	std::string inputfile = "test.obj";

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		{



	UINT flags = 0;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pTextureView);

	for (int j = 0; j < icount; j++)

		return hr;

{

			exit(1);

	txDesc.Height = rect.Height();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pVertexShader = NULL;

	m_pVertexBuffer = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	irData.SysMemPitch = 0;

	//頂点レイアウト作成

	//定数バッファ作成

	//定数バッファ作成



	delete[] pIList;

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	scDesc.SampleDesc.Count = 1;

 * Lesson 1: Hello World!

struct ConstantMatrixBuffer {

	}

	D3D11_BUFFER_DESC ibDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderPresent(ren);

	float    farZ = 100.0f;

	enum KeyPressSurfaces

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	ConstantMatrixBuffer cmb;

	SDL_Quit();

	vector<WORD> indexList;

		&scDesc,

		KEY_PRESS_SURFACE_UP,



	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

};

	m_pVertexBuffer = NULL;

		&scDesc,

	}

		return hr;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&m_pImmediateContext);

#define TINYOBJLOADER_IMPLEMENTATION

	ConstantLightBuffer clb;

	}

		&m_pImmediateContext);





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

		&m_pDevice,

	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	ibDesc.MiscFlags = 0;



		}

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SAFE_RELEASE(m_pPixelShader);

		if (!ret)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			// Loop over vertices in the face.

	auto& materials = reader.GetMaterials();

	//インデックスバッファ作成

	float    nearZ = 0.1f;



};

	m_Viewport.MinDepth = 0.0f;

	//vector<Vertex> vertex_t;

#include <SDL.h>

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	Release();

				break;

	XMFLOAT4X4 view;

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}

struct ConstantLightBuffer {

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pRenderTargetView);



	return 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			switch (e.key.keysym.sym)

	}

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	};

		pVList[i] = vertexlist[i];

	//頂点バッファ作成

	LoadObj(vertexlist, indexList);

	LoadObj(vertexlist, indexList);

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pSwapChain);

		{

	{

	scDesc.SampleDesc.Quality = 0;

	txDesc.SampleDesc.Quality = 0;

	m_pDevice = NULL;

			{

			case SDLK_RIGHT:

	XMFLOAT4X4 projection;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.MiscFlags = 0;

	scDesc.BufferCount = 1;

			exit(1);

};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}



			break;

		D3D11_SDK_VERSION,

	::ZeroMemory(&scDesc, sizeof(scDesc));

			index_offset += num_vertices;

	return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t ty =

	CRect                rect;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	delete[] pIList;

	SAFE_RELEASE(m_pTextureView);

	float    farZ = 100.0f;

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_SUBRESOURCE_DATA vrData;

		if (!reader.Error().empty())

			}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderClear(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				// access to vertex

		SDL_RenderPresent(ren);

		pLevels,

#ifdef _DEBUG

	for (int j = 0; j < icount; j++)

		pVList[i] = vertexlist[i];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	{

	CRect                rect;

	vrData.pSysMem = &pVList[0];



	UINT offsets = 0;

		D3D11_SDK_VERSION,

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	m_pRenderTargetView = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	}

	if (FAILED(hr))

		//User requests quit

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

				break;



	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pPixelShader = NULL;





		//User requests quit



{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	};



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

struct ConstantLightBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		flags,



		//User requests quit

{



#endif



	//深度ステンシルバッファ作成

	vector<Vertex> vertexlist;

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		flags,



		return hr;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4         eyePos;   //視点座標

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.CPUAccessFlags = 0;

	{

	for (int j = 0; j < icount; j++)



	XMStoreFloat4(&clb.eyePos, eye);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	m_IndexCount = icount;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_DestroyTexture(tex);



			index_offset += fv;

		&shapes,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//頂点バッファ作成

	ConstantMaterial material; //物体の質感

	m_Viewport.Width = (FLOAT)rect.Width();

	int     vcount = vertexlist.size();



	m_pPixelShader = NULL;

		}

	//テクスチャ読み込み

	SDL_FreeSurface(bmp);

		delete[] pVList;

	m_pVertexShader = NULL;

				// access to vertex

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	auto& attrib = reader.GetAttrib();

		}

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.Windowed = TRUE;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pPixelShader);

		}

	//Vertex* pVList = new Vertex[vcount];

		//User requests quit

		m_pImmediateContext->ClearState();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		SDL_RenderClear(ren);

	std::string error;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 world;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		SDL_RenderClear(ren);

}

	SAFE_RELEASE(m_pIndexBuffer);

	float    nearZ = 0.1f;

	}

			break;

	std::string error;



	//頂点レイアウト作成

	m_pMatrixBuffer = NULL;

	UINT strides = sizeof(Vertex);

	}

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_VertexCount = vcount;



	{



#include <iostream>

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				indexlist.push_back(idx.vertex_index);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		KEY_PRESS_SURFACE_DEFAULT,

	m_pPixelShader = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	enum KeyPressSurfaces

	for (int j = 0; j < icount; j++)

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.StructureByteStride = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pImmediateContext);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		size_t index_offset = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		{

	//深度ステンシルバッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

{



	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;



	cbDesc.MiscFlags = 0;

	D3D_FEATURE_LEVEL level;



	//ビューポート設定

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyRenderer(ren);

	txDesc.MiscFlags = 0;

	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	delete[] pVList;



		KEY_PRESS_SURFACE_LEFT,







	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Quit();





	if (FAILED(hr))

#include <iostream>

	vrData.SysMemPitch = 0;

	D3D11_BUFFER_DESC cbDesc;



	scDesc.SampleDesc.Count = 1;

int SEGMENT = 36;

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pLightBuffer);

CD3DTest::CD3DTest()

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



			index_offset += num_vertices;

	m_pVertexBuffer = NULL;



	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_BUFFER_DESC vbDesc;

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	if (FAILED(hr))

		&m_pDevice,

				vertex.push_back(vertex_tmp);

		&m_pImmediateContext);



				vertex.push_back(vertex_tmp);



		KEY_PRESS_SURFACE_UP,

		&attrib,

	SDL_FreeSurface(bmp);

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexShader = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA irData;



	std::vector<tinyobj::material_t> materials;









	//定数バッファ作成

		&m_pSwapChain,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.Windowed = TRUE;

		SDL_Delay(1000);

	cbDesc.StructureByteStride = 0;



		return 1;

		&attrib,

	SAFE_RELEASE(m_pVertexShader);

				break;

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	// Loop over shapes

	txDesc.Width = rect.Width();

			case SDLK_RIGHT:

	std::string inputfile = "test.obj";

		return hr;

 */

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//ビューポート設定

		{

	m_Viewport.MinDepth = 0.0f;



#ifdef _DEBUG

	{

	}



	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





		return hr;

		{

				break;

			break;

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ibDesc.CPUAccessFlags = 0;

	auto& materials = reader.GetMaterials();

		return hr;

			{

	}

	bool ret = tinyobj::LoadObj(

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_DOWN,

	txDesc.Height = rect.Height();





	m_pDepthStencilView = NULL;

			break;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_RIGHT:

struct ConstantMatrixBuffer {

	XMFLOAT4 pos;               //座標(x,y,z)



		return hr;

		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		{

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		SDL_RenderPresent(ren);

				vertex.push_back(vertex_tmp);

	m_VertexCount = 0;

				WORD index = idx.vertex_index;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	}

	m_pTextureView = NULL;

		&scDesc,

				break;

	UINT strides = sizeof(Vertex);

	SDL_DestroyWindow(win);



	std::vector<tinyobj::shape_t> shapes;

	tinyobj::ObjReaderConfig reader_config;



	Vertex* pVList = new Vertex[vcount];

	// Loop over shapes

			index_offset += fv;

	if (FAILED(hr))

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);



	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_Delay(1000);

	delete[] pVList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t ty =

	irData.SysMemSlicePitch = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		}

	SDL_DestroyRenderer(ren);

{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}

	scDesc.Windowed = TRUE;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pSampler = NULL;

		&m_pSwapChain,

};

	{



	//ビューポート設定

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	SAFE_RELEASE(m_pInputLayout);

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	UINT flags = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	SDL_DestroyRenderer(ren);

			int num_vertices = shape.mesh.num_face_vertices[f];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{

		return hr;

}

{

}



		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

		&error,

		if (!ret)



	};

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pRenderTargetView);



	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pDepthStencilTexture);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (m_pImmediateContext)

	m_pPixelShader = NULL;

	float    fov = XMConvertToRadians(20.0f);



	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	/*

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//vector<WORD> index_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//インデックスバッファ作成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	//定数バッファ作成

/*

	// Loop over shapes

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vector<WORD> indexList;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	txDesc.MipLevels = 1;

		if (!ret)



		}

	};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Event e;

	{

		KEY_PRESS_SURFACE_LEFT,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes

	m_pPixelShader = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index



			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_RIGHT,

	for (int i = 0; i < vcount; i++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		delete[] pVList;

	m_pRenderTargetView = NULL;

		return hr;

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	/*





struct ConstantMaterial {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float    farZ = 100.0f;

		{

	scDesc.OutputWindow = hwnd;

		return hr;

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	while (SDL_PollEvent(&e) != 0)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		// Loop over faces(polygon)

			case SDLK_LEFT:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_Delay(1000);

	WORD* pIList = new WORD[icount];



}

	::GetClientRect(hwnd, &rect);

	}

				tinyobj::real_t ty =

	SDL_FreeSurface(bmp);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	SDL_FreeSurface(bmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&materials,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

HRESULT CD3DTest::Create(HWND hwnd)

	m_pVertexBuffer = NULL;

	}

			switch (e.key.keysym.sym)

#define TINYOBJLOADER_IMPLEMENTATION

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Event e;

	{

	if (!reader.ParseFromFile(inputfile, reader_config))



	txDesc.Width = rect.Width();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)





	}

	txDesc.SampleDesc.Quality = 0;

using std::cout; using std::endl;

				WORD index = idx.vertex_index;



	{

	//頂点レイアウト作成



		return hr;

	};

	m_Viewport.MaxDepth = 1.0f;



	while (SDL_PollEvent(&e) != 0)

#endif

CD3DTest::~CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.OutputWindow = hwnd;

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	int     vcount = vertexlist.size();

	//深度ステンシルバッファ作成



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (!error.empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	float    nearZ = 0.1f;

				vertex.push_back(vertex_tmp);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	D3D_FEATURE_LEVEL level;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		KEY_PRESS_SURFACE_LEFT,

			index_offset += num_vertices;

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pDevice);



		else if (e.type == SDL_KEYDOWN)

HRESULT CD3DTest::Create(HWND hwnd)

	{

	m_IndexCount = icount;

	m_pRenderTargetView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	};

	WORD   icount = indexList.size();

	{

void CD3DTest::Render()

	int     vcount = vertexlist.size();

	XMFLOAT4X4 projection;

	XMFLOAT4X4 world;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

#include <SDL.h>

};

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

		exit(1);

	D3D11_BUFFER_DESC vbDesc;

struct ConstantMaterial {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))





	txDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			for (size_t v = 0; v < fv; v++)



		{

	delete[] pIList;



	return 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))



	// Loop over shapes





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_Delay(1000);

	m_IndexCount = icount;

		if (!reader.Error().empty())

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLight    pntLight; //点光源



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	};

	{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	delete[] pIList;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		R"(cube.obj)");

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D_FEATURE_LEVEL level;

	std::string error;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

};

	m_pDepthStencilView = NULL;

	if (FAILED(hr))





	{





	cbDesc.StructureByteStride = 0;

		if (!ret)

		&shapes,

	//vector<WORD> index_t;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vbDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pTextureView = NULL;

	scDesc.OutputWindow = hwnd;

	m_pIndexBuffer = NULL;

	UINT flags = 0;

	vbDesc.MiscFlags = 0;

	m_pVertexBuffer = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		{

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return 1;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);



	irData.pSysMem = &pIList[0];



	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	Release();

	Release();

		return hr;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferCount = 1;



};

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_FreeSurface(suf);

{

	m_pTexture = NULL;

	{

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			switch (e.key.keysym.sym)

{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_RIGHT,





	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	scDesc.BufferCount = 1;



};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}


				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SAMPLER_DESC smpDesc;

		SDL_Delay(1000);

	//Create Index

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

};



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		// Loop over faces(polygon)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			index_offset += num_vertices;

	ConstantLightBuffer clb;

	vbDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& shapes = reader.GetShapes();

	delete[] pIList;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	UINT strides = sizeof(Vertex);

	SDL_FreeSurface(bmp);

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	}

#ifdef _DEBUG

CD3DTest::CD3DTest()

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				vertex.push_back(vertex_tmp);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty =

		return hr;

	txDesc.SampleDesc.Count = 1;

		}

		{

	m_pPixelShader = NULL;

	m_pLightBuffer = NULL;

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	cbDesc.CPUAccessFlags = 0;



	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.SampleDesc.Quality = 0;



		D3D11_SDK_VERSION,

	m_pDevice = NULL;

	m_Viewport.TopLeftX = 0;



	//頂点レイアウト作成

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pPixelShader);



};

	float    fov = XMConvertToRadians(20.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//ピクセルシェーダー生成

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	return;

		m_pImmediateContext->ClearState();





	vector<WORD> indexList;





		SDL_RenderClear(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

#include <iostream>

		m_pImmediateContext->ClearState();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_Viewport.MinDepth = 0.0f;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <iostream>



};

			}

		return hr;

				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_UP,

	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		SDL_RenderClear(ren);

		&level,

	if (!reader.ParseFromFile(inputfile, reader_config))



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			int num_vertices = shape.mesh.num_face_vertices[f];

		cout << "SDL_INIT_ERROR" << endl;

	//Create Index

	UINT offsets = 0;

		return hr;

	WORD* pIList = new WORD[icount];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);



	{

	}

	m_pTextureView = NULL;

	pBackBuffer->Release();

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

	XMFLOAT4X4 world;

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pLightBuffer = NULL;

{

	reader_config.mtl_search_path = "./"; // Path to material files

			{

#include <SDL.h>

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	return 0;

		D3D11_SDK_VERSION,

	D3D11_SUBRESOURCE_DATA vrData;

		D3D11_SDK_VERSION,

	float    farZ = 100.0f;

	HRESULT              hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	};

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

				WORD index = idx.vertex_index;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SAMPLER_DESC smpDesc;

	Vertex* pVList = new Vertex[vcount];





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}





	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//Clean up our objects and quit

	XMFLOAT4 pos;               //座標(x,y,z)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			case SDLK_DOWN:

	//Create Index

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext = NULL;





	{

				WORD index = idx.vertex_index;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vrData.pSysMem = &pVList[0];

	m_pLightBuffer = NULL;



#endif

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;





			case SDLK_DOWN:



				break;

	txDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

#include <iostream>

				indexlist.push_back(index);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	SDL_Event e;

	}

};

		KEY_PRESS_SURFACE_UP,

	Release();

		KEY_PRESS_SURFACE_UP,

		NULL,

	{

			switch (e.key.keysym.sym)

			}

{

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pTexture);

		pVList[i] = vertexlist[i];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

				tinyobj::real_t tx =

	{

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//vector<Vertex> vertex_t;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

		return hr;

	::GetClientRect(hwnd, &rect);

	vector<WORD> indexList;

				tinyobj::real_t ty =

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pSampler = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		&m_pDevice,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (!reader.Warning().empty())



 */





	cbDesc.CPUAccessFlags = 0;

{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyWindow(win);

{

	float    nearZ = 0.1f;

	//Vertex* pVList = new Vertex[vcount];

	tinyobj::attrib_t attrib;

	float    fov = XMConvertToRadians(20.0f);







	txDesc.Width = rect.Width();

		return hr;



				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pTexture);

	if (!reader.Warning().empty())

		return hr;

	while (SDL_PollEvent(&e) != 0)

				// access to vertex



	XMFLOAT4 specular;          //反射(r,g,b)



			index_offset += fv;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_UP:

				WORD index = idx.vertex_index;

	}

	UINT offsets = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pDevice = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pRenderTargetView);

	enum KeyPressSurfaces

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	m_pPixelShader = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	int     vcount = vertexlist.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4X4 projection;

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





}
	txDesc.SampleDesc.Quality = 0;

	tinyobj::ObjReaderConfig reader_config;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				indexlist.push_back(index);

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

	std::vector<tinyobj::shape_t> shapes;

	int     vcount = vertexlist.size();

struct ConstantLight {



	txDesc.CPUAccessFlags = 0;

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()

				indexlist.push_back(index);

	}

		&error,

	UINT strides = sizeof(Vertex);

			case SDLK_LEFT:

	for (size_t s = 0; s < shapes.size(); s++)

}

#include "DirectXManager.h"

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	irData.SysMemPitch = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		}

	m_Viewport.MinDepth = 0.0f;





		&m_pDevice,

	m_Viewport.TopLeftY = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Height = rect.Height();



		//User requests quit

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{



	std::vector<tinyobj::material_t> materials;

#include <iostream>

	{

	D3D11_BUFFER_DESC ibDesc;

	txDesc.Width = rect.Width();

	//ビューポート設定

		}

};



	return 0;

	vbDesc.CPUAccessFlags = 0;

	return;

		if (!reader.Error().empty())

	//インデックスバッファ作成

int main(int, char**)

	auto& shapes = reader.GetShapes();

		exit(1);





		{

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferDesc.Width = rect.Width();

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

		{

	SAFE_RELEASE(m_pLightBuffer);

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

CD3DTest::CD3DTest()



	txDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

{

	m_pTexture = NULL;

		KEY_PRESS_SURFACE_TOTAL

		&m_pSwapChain,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);









				break;

	ConstantMatrixBuffer cmb;



	m_pIndexBuffer = NULL;

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	XMFLOAT4X4 view;

/*

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

CD3DTest::~CD3DTest()

	//Vertex* pVList = new Vertex[vcount];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_DestroyTexture(tex);

				break;





	{

		R"(cube.obj)");

	m_pImmediateContext = NULL;





HRESULT CD3DTest::Create(HWND hwnd)

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pVertexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

};

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

{





			index_offset += fv;

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	}*/

	std::vector<tinyobj::shape_t> shapes;

	m_pDepthStencilView = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

	//vector<Vertex> vertex_t;

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	UINT offsets = 0;



	}

		SDL_RenderClear(ren);



	}

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				// access to vertex

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT offsets = 0;

			// Loop over vertices in the face.

	SDL_Quit();

		KEY_PRESS_SURFACE_TOTAL

	::GetClientRect(hwnd, &rect);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit

#ifdef _DEBUG

		flags,

	SDL_DestroyTexture(tex);

	SDL_FreeSurface(bmp);

	{

	for (size_t s = 0; s < shapes.size(); s++)

	}

	cbDesc.MiscFlags = 0;

		pLevels,

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//インデックスバッファ作成

			switch (e.key.keysym.sym)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&level,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		delete[] pIList;

				// access to vertex

		return hr;

	m_IndexCount = 0;

		return 1;

		KEY_PRESS_SURFACE_UP,

	{

	m_pDevice = NULL;



	SAFE_RELEASE(m_pMatrixBuffer);

int main(int, char**)

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

#include <iostream>

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pPixelShader);

			case SDLK_UP:

	//Clean up our objects and quit

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pInputLayout);



	txDesc.MiscFlags = 0;

	{

	//定数バッファ作成

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += fv;



	txDesc.Height = rect.Height();

				break;



		m_pImmediateContext->ClearState();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		m_pImmediateContext->ClearState();

CD3DTest::CD3DTest()





	{



		return hr;

	cbDesc.StructureByteStride = 0;

	// Loop over shapes

#endif

				break;

{

	DXGI_SWAP_CHAIN_DESC scDesc;

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		R"(cube.obj)");



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;

};

	}

struct ConstantMaterial {

	if (FAILED(hr))

CD3DTest::CD3DTest()

	SDL_Quit();





	m_pMatrixBuffer = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	SAFE_RELEASE(m_pIndexBuffer);



			index_offset += fv;



struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_VertexCount = vcount;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Create Index



		cout << "SDL_INIT_ERROR" << endl;

	m_VertexCount = 0;

		{

	vrData.SysMemSlicePitch = 0;



		&m_pSwapChain,

	XMStoreFloat4(&clb.ambient, lightAmbient);



	std::vector<tinyobj::shape_t> shapes;



	}

	D3D11_BUFFER_DESC cbDesc;

		D3D_DRIVER_TYPE_HARDWARE,

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





struct ConstantLightBuffer {

	UINT flags = 0;

};

	m_IndexCount = 0;

		}

	ibDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		cout << "SDL_INIT_ERROR" << endl;

	SDL_FreeSurface(bmp);





	for (int j = 0; j < icount; j++)

	txDesc.MipLevels = 1;

	m_Viewport.MaxDepth = 1.0f;

		&m_pSwapChain,

	for (int j = 0; j < icount; j++)

	LoadObj(vertexlist, indexList);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				WORD index = idx.vertex_index;



		&level,

	SDL_DestroyTexture(tex);

				// access to vertex

	ConstantMatrixBuffer cmb;

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





	{

int main(int, char**)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_TOTAL

	}

	m_Viewport.Height = (FLOAT)rect.Height();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		pVList[i] = vertexlist[i];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	tinyobj::ObjReader reader;

	//頂点レイアウト作成

	}





	{



		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::string imagePath = "hello.bmp";

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

	txDesc.SampleDesc.Quality = 0;

		return hr;

}



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4X4 view;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#include <SDL.h>

		return hr;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

		{

	cbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.eyePos, eye);

	m_pDepthStencilTexture = NULL;

}

	vrData.SysMemSlicePitch = 0;

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			default:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			exit(1);

	pBackBuffer->Release();

		{

				indexlist.push_back(idx.vertex_index);

	CRect                rect;

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.StructureByteStride = 0;

#include <iostream>

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//ビューポート設定

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//定数バッファ作成



		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}
	auto& materials = reader.GetMaterials();

	auto& materials = reader.GetMaterials();

};

		return 1;

	//頂点シェーダー生成



			{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



{

	m_pMatrixBuffer = NULL;



	auto& materials = reader.GetMaterials();

	bool ret = tinyobj::LoadObj(

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pMatrixBuffer = NULL;


