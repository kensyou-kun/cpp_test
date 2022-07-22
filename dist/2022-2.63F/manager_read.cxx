		return hr;

		return hr;

	CRect                rect;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	}*/

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		flags,

	m_Viewport.TopLeftX = 0;

			case SDLK_LEFT:



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pDevice);

	float    farZ = 100.0f;

	//頂点シェーダー生成

		R"(cube.obj)");

	return;

{

	//定数バッファ作成





			}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += fv;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	SAFE_RELEASE(m_pSwapChain);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				// access to vertex

		size_t index_offset = 0;

	//Clean up our objects and quit

		&m_pSwapChain,



	WORD   icount = indexList.size();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	tinyobj::ObjReaderConfig reader_config;

		&m_pDevice,

		NULL,







	SDL_Event e;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	UINT flags = 0;

#include "DirectXManager.h"

	SAFE_RELEASE(m_pLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;



	SDL_Event e;

{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	return 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;





 */



	UINT offsets = 0;

		KEY_PRESS_SURFACE_DOWN,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	SAFE_RELEASE(m_pInputLayout);



		&scDesc,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pSwapChain);

	}

	txDesc.ArraySize = 1;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		pLevels,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{

	txDesc.MipLevels = 1;

#include <iostream>





using std::cout; using std::endl;



		flags,

{

	//First we need to start up SDL, and make sure it went ok



		KEY_PRESS_SURFACE_LEFT,

	::ZeroMemory(&scDesc, sizeof(scDesc));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_FreeSurface(suf);

#include <iostream>

	tinyobj::attrib_t attrib;

}



	HRESULT              hr;

	vector<Vertex> vertexlist;

		&materials,

	m_Angle += XMConvertToRadians(1.0f);

	m_pSwapChain->Present(0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	auto& attrib = reader.GetAttrib();

	cbDesc.StructureByteStride = 0;

	{

	}



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	}





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

		KEY_PRESS_SURFACE_UP,

	m_pPixelShader = NULL;

	/*

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Quit();

	//頂点シェーダー生成

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Quit();



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	dsDesc.Texture2D.MipSlice = 0;

	irData.pSysMem = &pIList[0];

		R"(cube.obj)");

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

CD3DTest::CD3DTest()

	//ビューポート設定

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return hr;

	ID3D11Texture2D* pBackBuffer;

	//頂点レイアウト作成

		{

	auto& shapes = reader.GetShapes();

	{



	HRESULT              hr;

	for (int j = 0; j < icount; j++)

			}



	vbDesc.MiscFlags = 0;

	};

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexShader);

		&level,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}

			default:



		return hr;

		{

	XMStoreFloat4(&clb.eyePos, eye);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files





	Release();

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	std::string imagePath = "hello.bmp";

		delete[] pVList;

	m_pInputLayout = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	if (FAILED(hr))

int main(int, char**)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

	XMFLOAT4X4 world;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_TOTAL



CD3DTest::~CD3DTest()

	m_IndexCount = icount;

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	UINT flags = 0;

}

	/*

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	XMFLOAT4 specular;          //反射(r,g,b)





	scDesc.OutputWindow = hwnd;

	SDL_FreeSurface(suf);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				break;





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&shapes,



#include <iostream>

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Clean up our objects and quit



	//ビューポート設定

	SDL_Quit();

	}

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pIndexBuffer = NULL;

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_RIGHT,



		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		D3D11_SDK_VERSION,

	m_Viewport.MaxDepth = 1.0f;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	m_pMatrixBuffer = NULL;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	HRESULT              hr;

};



		return hr;



	}



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string imagePath = "hello.bmp";





	ibDesc.CPUAccessFlags = 0;

		delete[] pIList;

	m_Viewport.MaxDepth = 1.0f;



	D3D11_SUBRESOURCE_DATA irData;

	//vector<WORD> index_t;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//vector<WORD> index_t;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	m_pSwapChain = NULL;

		return hr;

		return hr;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	// Loop over shapes



	SAFE_RELEASE(m_pMatrixBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Height = rect.Height();

	}

	}

	SAFE_RELEASE(m_pVertexShader);



	tinyobj::ObjReaderConfig reader_config;

			case SDLK_UP:

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

#include "DirectXManager.h"

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		R"(cube.obj)");

	scDesc.OutputWindow = hwnd;

CD3DTest::~CD3DTest()

	bool ret = tinyobj::LoadObj(

	//vector<Vertex> vertex_t;

	scDesc.Windowed = TRUE;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.Windowed = TRUE;

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {



	{

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

		pLevels,

	SAFE_RELEASE(m_pMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantMatrixBuffer {

				// access to vertex

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		}

	SAFE_RELEASE(m_pSampler);

	LoadObj(vertexlist, indexList);

	txDesc.CPUAccessFlags = 0;

			//Select surfaces based on key press

	{

	while (SDL_PollEvent(&e) != 0)

	vrData.pSysMem = &pVList[0];



	SDL_Quit();



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_FreeSurface(bmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	LoadObj(vertexlist, indexList);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.SampleDesc.Count = 1;

		size_t index_offset = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderPresent(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();



	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pVertexBuffer);

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	SDL_Event e;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		&attrib,

				WORD index = idx.vertex_index;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		if (!reader.Error().empty())

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#ifdef _DEBUG

				vertex.push_back(vertex_tmp);

		&m_pDevice,



				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	//深度ステンシルバッファ作成

int main(int, char**)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	std::string error;

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pVertexShader);

	vector<Vertex> vertexlist;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		{

	m_Viewport.TopLeftX = 0;



		}



	//Create Index

		return hr;

		flags,



	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pSwapChain);



	irData.SysMemPitch = 0;





using std::cout; using std::endl;



	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Event e;

		&attrib,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pSwapChain->Present(0, 0);

	irData.SysMemSlicePitch = 0;



		SDL_RenderClear(ren);



	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <SDL.h>



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4X4 world;

}
	if (m_pImmediateContext)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ID3D11Texture2D* pBackBuffer;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	int     vcount = vertexlist.size();

#ifdef _DEBUG

	SDL_FreeSurface(bmp);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			case SDLK_UP:

	if (FAILED(hr))



	m_pDevice = NULL;



	irData.SysMemPitch = 0;

	}

		return hr;

		&materials,



int main(int, char**)

	vrData.SysMemPitch = 0;

		&scDesc,

	auto& shapes = reader.GetShapes();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	std::vector<tinyobj::shape_t> shapes;



	vector<WORD> indexList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		m_pImmediateContext->ClearState();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_Delay(1000);



		return hr;

			case SDLK_LEFT:





		SDL_Delay(1000);

			}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pVertexShader);

	std::vector<tinyobj::material_t> materials;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ConstantMatrixBuffer cmb;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

struct ConstantLight {

	if (FAILED(hr))

		//User requests quit

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (int j = 0; j < icount; j++)

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t ty =

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Format = txDesc.Format;



	SDL_FreeSurface(suf);

	scDesc.BufferDesc.Height = rect.Height();

 * Lesson 1: Hello World!

	irData.SysMemPitch = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		m_pImmediateContext->ClearState();

	while (SDL_PollEvent(&e) != 0)

	UINT flags = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		exit(1);

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.SampleDesc.Quality = 0;

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		KEY_PRESS_SURFACE_UP,

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	std::string inputfile = "test.obj";

	txDesc.MiscFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

		else if (e.type == SDL_KEYDOWN)

	return;

	tinyobj::ObjReaderConfig reader_config;

		&scDesc,

	ConstantMatrixBuffer cmb;

	for (int i = 0; i < vcount; i++)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	tinyobj::ObjReader reader;





	XMFLOAT4 pos;               //座標(x,y,z)

void CD3DTest::Release()

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.Height = rect.Height();

	XMFLOAT4 ambient;           //環境(r,g,b)

				indexlist.push_back(idx.vertex_index);





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





		KEY_PRESS_SURFACE_DEFAULT,

	std::string inputfile = "test.obj";

	LoadObj(vertexlist, indexList);

			//Select surfaces based on key press



	WORD   icount = indexList.size();

		{

	ConstantLight    pntLight; //点光源

	scDesc.Windowed = TRUE;

		D3D11_SDK_VERSION,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//テクスチャ読み込み

void CD3DTest::Release()

#include <SDL.h>

	//vector<WORD> index_t;

		return hr;

		}

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	Release();

	m_Viewport.MinDepth = 0.0f;

		&level,

	SDL_Event e;

/*

	tinyobj::attrib_t attrib;

		&materials,

	/*

	//頂点レイアウト作成

	scDesc.OutputWindow = hwnd;

HRESULT CD3DTest::Create(HWND hwnd)

		&materials,

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pTexture);

		SDL_RenderPresent(ren);



	};



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



struct ConstantLight {

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 pos;               //座標(x,y,z)



#include <iostream>

	if (FAILED(hr))

	vector<WORD> indexList;

		}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pLightBuffer);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

		{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	m_VertexCount = 0;

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);

	while (SDL_PollEvent(&e) != 0)

struct ConstantMaterial {

	UINT flags = 0;

				break;

	if (!error.empty())

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

};

		return hr;

	cbDesc.MiscFlags = 0;



	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 ambient;           //環境(r,g,b)





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				indexlist.push_back(index);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		}

	cbDesc.StructureByteStride = 0;

			}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		SDL_Delay(1000);

	//vector<Vertex> vertex_t;



	dsDesc.Texture2D.MipSlice = 0;

	//Clean up our objects and quit

			break;



	scDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_UP,

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantMatrixBuffer {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

}


	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





};

	m_Viewport.TopLeftY = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			//Select surfaces based on key press

			{

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;  // インデントのオフセット

		// Loop over faces(polygon)

	m_pDevice = NULL;

		return hr;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Width = rect.Width();

	cbDesc.MiscFlags = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

 */

	m_pSampler = NULL;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

	m_pIndexBuffer = NULL;



struct ConstantLight {

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//インデックスバッファ作成

	Vertex* pVList = new Vertex[vcount];

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	};

		size_t index_offset = 0;  // インデントのオフセット

		pIList[j] = indexList[j];



	for (int i = 0; i < 3; i++)

				tinyobj::real_t ty =



	}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

struct ConstantLightBuffer {

}





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.MaxDepth = 1.0f;

		SDL_RenderClear(ren);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	int     vcount = vertexlist.size();

	auto& materials = reader.GetMaterials();

	vrData.pSysMem = &pVList[0];

			}



	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//頂点バッファ作成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pImmediateContext);

	{

		return hr;

{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	while (SDL_PollEvent(&e) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 world;

}



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (FAILED(hr))





	m_pMatrixBuffer = NULL;

	scDesc.BufferDesc.Width = rect.Width();

{



	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyRenderer(ren);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pVertexShader);



}

				indexlist.push_back(idx.vertex_index);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		// Loop over faces(polygon)



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	::GetClientRect(hwnd, &rect);

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return hr;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	WORD* pIList = new WORD[icount];

	m_pDepthStencilView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (int j = 0; j < icount; j++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			}

 */

			//Select surfaces based on key press

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	dsDesc.Format = txDesc.Format;

using std::cout; using std::endl;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_RenderPresent(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	{

				WORD index = idx.vertex_index;

	//頂点レイアウト作成

	return 0;

	HRESULT              hr;

	{



	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	std::string inputfile = "test.obj";

			}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		flags,

	if (!error.empty())



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.CPUAccessFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	LoadObj(vertexlist, indexList);



	float    nearZ = 0.1f;

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t ty =

		return hr;

	SDL_DestroyWindow(win);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	float    nearZ = 0.1f;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	std::string imagePath = "hello.bmp";

			case SDLK_DOWN:

#include "DirectXManager.h"

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&m_pImmediateContext);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		{

 */

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		KEY_PRESS_SURFACE_TOTAL



	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_Viewport.MaxDepth = 1.0f;

#include <iostream>

	float    farZ = 100.0f;

#include "DirectXManager.h"

		KEY_PRESS_SURFACE_UP,



	SDL_Quit();

	while (SDL_PollEvent(&e) != 0)



		D3D_DRIVER_TYPE_HARDWARE,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}

	SDL_DestroyWindow(win);

	/*

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	for (int j = 0; j < icount; j++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





				break;

		SDL_Delay(1000);

	vrData.SysMemPitch = 0;



	XMFLOAT4X4 projection;

		&materials,

	ConstantMatrixBuffer cmb;

	D3D11_BUFFER_DESC ibDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.ArraySize = 1;

		&m_pDevice,

	m_Viewport.MaxDepth = 1.0f;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pTextureView);

#include <SDL.h>



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

/*

		R"(cube.obj)");





		SDL_RenderClear(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t ty =

	//Key press surfaces constants



	{

	m_VertexCount = vcount;

	dsDesc.Format = txDesc.Format;

	m_pLightBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pLightBuffer);

	vrData.pSysMem = &pVList[0];

	txDesc.CPUAccessFlags = 0;

	std::string imagePath = "hello.bmp";



			index_offset += num_vertices;

				indexlist.push_back(idx.vertex_index);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

struct ConstantLightBuffer {





	m_Viewport.TopLeftY = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

		{

	//ビューポート設定

		pVList[i] = vertexlist[i];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.MiscFlags = 0;

	m_pVertexShader = NULL;

	}*/

	}

		size_t index_offset = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	if (!reader.Warning().empty())

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

		if (e.type == SDL_QUIT)

	//テクスチャ読み込み

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    nearZ = 0.1f;

	cbDesc.MiscFlags = 0;

			case SDLK_UP:

int SEGMENT = 36;



	SDL_Quit();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			int num_vertices = shape.mesh.num_face_vertices[f];

	//テクスチャ読み込み

		exit(1);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//vector<Vertex> vertex_t;

	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyTexture(tex);

		return 1;

			index_offset += num_vertices;



		SDL_RenderClear(ren);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		pLevels,

	std::string inputfile = "test.obj";





};

		&attrib,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(bmp);

	{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderClear(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	if (FAILED(hr))

	{

	{

struct ConstantLightBuffer {



		if (!reader.Error().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vector<Vertex> vertexlist;

	cbDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSampler = NULL;

		return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		m_pImmediateContext->ClearState();

	scDesc.BufferCount = 1;

				WORD index = idx.vertex_index;



	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pIList[j] = indexList[j];

	LoadObj(vertexlist, indexList);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pIndexBuffer = NULL;

	m_pVertexBuffer = NULL;



}
	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	HRESULT              hr;

{

	txDesc.Width = rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//テクスチャ読み込み

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_LEFT:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::vector<tinyobj::shape_t> shapes;

	m_pSwapChain->Present(0, 0);





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//インデックスバッファ作成

	ConstantLight    pntLight; //点光源





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	delete[] pVList;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				indexlist.push_back(index);

};

};

		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		D3D11_SDK_VERSION,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DEFAULT,







	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantMaterial material; //物体の質感

		pVList[i] = vertexlist[i];

	std::string error;

void CD3DTest::Render()

	ConstantMaterial material; //物体の質感

		return hr;

	SDL_FreeSurface(suf);



		return hr;

	return 0;

	XMStoreFloat4(&clb.eyePos, eye);

{

	{

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pInputLayout);

	WORD   icount = indexList.size();



#define TINYOBJLOADER_IMPLEMENTATION

	for (int i = 0; i < vcount; i++)



				// access to vertex

	cbDesc.MiscFlags = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pDepthStencilView = NULL;





	vrData.pSysMem = &pVList[0];

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pMatrixBuffer);





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	SAFE_RELEASE(m_pTexture);



		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t ty =



	SDL_Quit();



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		if (!ret)



		D3D_DRIVER_TYPE_HARDWARE,



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&level,

			case SDLK_RIGHT:

	{

	SAFE_RELEASE(m_pTexture);



struct ConstantMatrixBuffer {



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//First we need to start up SDL, and make sure it went ok

		return hr;



{

				indexlist.push_back(idx.vertex_index);

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				indexlist.push_back(idx.vertex_index);



	SDL_DestroyRenderer(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//頂点バッファ作成

				break;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	SAFE_RELEASE(m_pMatrixBuffer);



	dsDesc.Texture2D.MipSlice = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 view;

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		//User requests quit

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

		// Loop over faces(polygon)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	//Create Index

}

	ConstantMatrixBuffer cmb;

	//Clean up our objects and quit

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;



using std::cout; using std::endl;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (!error.empty())

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pDepthStencilView);

	m_pSampler = NULL;

				// access to vertex

	SAFE_RELEASE(m_pLightBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);


