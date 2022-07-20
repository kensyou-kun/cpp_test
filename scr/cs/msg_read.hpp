	}

	m_VertexCount = 0;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext = NULL;

	//Create Index

		pVList[i] = vertexlist[i];

	scDesc.OutputWindow = hwnd;

			switch (e.key.keysym.sym)

}
			case SDLK_UP:

}

	}



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





}

		return hr;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

		&materials,

			}



{

		KEY_PRESS_SURFACE_TOTAL

	// Loop over shapes

				WORD index = idx.vertex_index;

				break;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		1,

	reader_config.mtl_search_path = "./"; // Path to material files

	//Create Index

	cbDesc.MiscFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_Delay(1000);

	}

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	{



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			// Loop over vertices in the face.

	if (!reader.Warning().empty())



	txDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_UP,

		return hr;

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.SampleDesc.Count = 1;



	std::vector<tinyobj::shape_t> shapes;

		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			for (size_t v = 0; v < fv; v++)

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ibDesc.StructureByteStride = 0;



	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D_FEATURE_LEVEL level;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

 */





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

#include "DirectXManager.h"

	dsDesc.Texture2D.MipSlice = 0;

			{



			for (size_t v = 0; v < fv; v++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			{



	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pTextureView);

	pBackBuffer->Release();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		if (e.type == SDL_QUIT)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			break;

	if (FAILED(hr))

		}

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	Release();



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			// Loop over vertices in the face.

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

			{

		delete[] pVList;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	return;

{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		&materials,

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			index_offset += num_vertices;

	Release();



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.TopLeftY = 0;

		}

	irData.SysMemSlicePitch = 0;

	float    fov = XMConvertToRadians(20.0f);

struct ConstantMaterial {

	SAFE_RELEASE(m_pDepthStencilTexture);

	tinyobj::ObjReaderConfig reader_config;

	reader_config.mtl_search_path = "./"; // Path to material files

		pVList[i] = vertexlist[i];

	irData.SysMemPitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_DestroyWindow(win);

	for (int i = 0; i < vcount; i++)

#include <SDL.h>

		else if (e.type == SDL_KEYDOWN)

		flags,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pIndexBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	auto& materials = reader.GetMaterials();

		//User requests quit

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

				WORD index = idx.vertex_index;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantMaterial {





	}





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&materials,

	m_pTexture = NULL;

	txDesc.SampleDesc.Count = 1;



	{

		return hr;

	ibDesc.StructureByteStride = 0;

			break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	Release();





	bool ret = tinyobj::LoadObj(



	m_Angle += XMConvertToRadians(1.0f);

	}

		pLevels,

	if (!reader.Warning().empty())

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

	tinyobj::attrib_t attrib;

	D3D11_BUFFER_DESC vbDesc;

	int     vcount = vertexlist.size();

	irData.pSysMem = &pIList[0];

	float    nearZ = 0.1f;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		}

				tinyobj::real_t tx =

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	float    fov = XMConvertToRadians(20.0f);

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.SampleDesc.Quality = 0;



		}

CD3DTest::~CD3DTest()

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

HRESULT CD3DTest::Create(HWND hwnd)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

		}

};

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexBuffer);

	{

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

		flags,









	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

		{



				break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);





	SAFE_RELEASE(m_pDevice);

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pIndexBuffer);

	m_pPixelShader = NULL;

	float    farZ = 100.0f;

	irData.SysMemSlicePitch = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	std::string error;

		}

				break;

		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				WORD index = idx.vertex_index;

		&m_pDevice,

	D3D11_BUFFER_DESC ibDesc;

	Vertex* pVList = new Vertex[vcount];

	m_VertexCount = vcount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&m_pDevice,

	dsDesc.Format = txDesc.Format;

	m_pTexture = NULL;

	while (SDL_PollEvent(&e) != 0)

	scDesc.BufferDesc.Width = rect.Width();

		delete[] pIList;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	for (size_t s = 0; s < shapes.size(); s++)

	ConstantMatrixBuffer cmb;

		delete[] pVList;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;



	m_VertexCount = vcount;

void CD3DTest::Release()

	SAFE_RELEASE(m_pSwapChain);

		SDL_RenderClear(ren);

		return hr;

	{

			case SDLK_UP:

{

	HRESULT              hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void CD3DTest::Release()

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMFLOAT4 specular;          //反射(r,g,b)





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vector<WORD> indexList;

		pVList[i] = vertexlist[i];

	if (!error.empty())

		exit(1);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		if (e.type == SDL_QUIT)

int SEGMENT = 36;

struct ConstantLight {

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_BUFFER_DESC vbDesc;

	std::string imagePath = "hello.bmp";



			exit(1);

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		delete[] pVList;

	vector<WORD> indexList;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	//頂点シェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			exit(1);

	m_pTextureView = NULL;

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	for (int i = 0; i < vcount; i++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	while (SDL_PollEvent(&e) != 0)

CD3DTest::~CD3DTest()

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	LoadObj(vertexlist, indexList);

	for (const auto& shape : shapes)

	m_pPixelShader = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4X4 world;





		&m_pSwapChain,



	SAFE_RELEASE(m_pTextureView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string inputfile = "test.obj";

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

		//User presses a key

				WORD index = idx.vertex_index;





	m_IndexCount = icount;

{

		SDL_RenderClear(ren);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.Width = rect.Width();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	std::string imagePath = "hello.bmp";



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	D3D11_SAMPLER_DESC smpDesc;



	for (int i = 0; i < vcount; i++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.SampleDesc.Count = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//ビューポート設定

{

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float    fov = XMConvertToRadians(20.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}



 */

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			exit(1);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

		{

			for (size_t v = 0; v < num_vertices; v++)

	while (SDL_PollEvent(&e) != 0)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

 */



	}





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

 */

	{



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vbDesc.StructureByteStride = 0;

		&scDesc,

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 pos;               //座標(x,y,z)

	ConstantLightBuffer clb;

int main(int, char**)

#include <SDL.h>

	XMFLOAT4         ambient;  //環境光(r,g,b)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&txDesc, sizeof(txDesc));

	dsDesc.Texture2D.MipSlice = 0;

	std::vector<tinyobj::material_t> materials;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_Viewport.TopLeftX = 0;

		1,

		SDL_RenderCopy(ren, tex, NULL, NULL);



{

{

	m_IndexCount = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	return 0;

#endif

	m_Viewport.TopLeftX = 0;

				vertex.push_back(vertex_tmp);

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		exit(1);





	m_pImmediateContext = NULL;

	bool ret = tinyobj::LoadObj(

		return hr;



	XMStoreFloat4(&clb.ambient, lightAmbient);



	SAFE_RELEASE(m_pSampler);

	}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::ObjReaderConfig reader_config;



}


		return hr;

	ConstantLightBuffer clb;

CD3DTest::~CD3DTest()

	m_pSampler = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		if (!reader.Error().empty())

#ifdef _DEBUG

	m_Angle += XMConvertToRadians(1.0f);

	m_pPixelShader = NULL;

	tinyobj::ObjReader reader;



	m_pDepthStencilView = NULL;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	};



	return 0;

	m_pSampler = NULL;

	HRESULT              hr;

				indexlist.push_back(index);

#endif



		{

#endif

		return hr;

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pTextureView = NULL;

	{

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	bool ret = tinyobj::LoadObj(



	delete[] pVList;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	delete[] pIList;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (m_pImmediateContext)

	Vertex* pVList = new Vertex[vcount];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string error;

		&materials,

#endif



};

	m_pDevice = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			default:



	UINT strides = sizeof(Vertex);

		return hr;

	m_pSwapChain = NULL;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pSampler);

		SDL_RenderClear(ren);

	txDesc.SampleDesc.Quality = 0;

CD3DTest::CD3DTest()

		exit(1);

		{

	DXGI_SWAP_CHAIN_DESC scDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		//User requests quit

		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&attrib,

	txDesc.Height = rect.Height();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

 */

	{

	m_pVertexBuffer = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.TopLeftX = 0;

		if (!ret)

using std::cout; using std::endl;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

void CD3DTest::Release()



		}

	tinyobj::attrib_t attrib;

		{

 */

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_DOWN:

		&m_pDevice,



	m_pTexture = NULL;

}



#include "DirectXManager.h"

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vector<Vertex> vertexlist;





		&m_pDevice,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Height = rect.Height();



		{

	}

	{

		flags,



			{



	while (SDL_PollEvent(&e) != 0)

		pIList[j] = indexList[j];

		&m_pSwapChain,

		return hr;



	//頂点レイアウト作成

	m_Viewport.TopLeftX = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			case SDLK_RIGHT:

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	return 0;

		D3D11_SDK_VERSION,

				break;

		return hr;

		return hr;

			{

int main(int, char**)

		KEY_PRESS_SURFACE_RIGHT,

				WORD index = idx.vertex_index;

	m_IndexCount = 0;





			{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ConstantMatrixBuffer cmb;

	m_pDepthStencilView = NULL;

	D3D11_BUFFER_DESC ibDesc;

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);



#include <iostream>

	std::string error;

	if (FAILED(hr))

	//インデックスバッファ作成



	m_pTexture = NULL;

	m_pVertexBuffer = NULL;

		//User presses a key

	SDL_FreeSurface(bmp);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	UINT flags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	for (int i = 0; i < vcount; i++)

#include <iostream>

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	if (FAILED(hr))



}

	tinyobj::ObjReader reader;

		return hr;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		size_t index_offset = 0;  // インデントのオフセット

	::ZeroMemory(&scDesc, sizeof(scDesc));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyRenderer(ren);

		return 1;



	std::string imagePath = "hello.bmp";



	//頂点バッファ作成

{

	return 0;

			}



	for (int j = 0; j < icount; j++)

{



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

};

		NULL,

	enum KeyPressSurfaces

	HRESULT              hr;

	SDL_FreeSurface(suf);



	D3D11_SUBRESOURCE_DATA vrData;

		delete[] pIList;

	{

	SAFE_RELEASE(m_pIndexBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

				break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string imagePath = "hello.bmp";



	}

	XMFLOAT4X4 view;

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	std::vector<tinyobj::shape_t> shapes;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	{

	UINT flags = 0;

	if (!reader.Warning().empty())

		SDL_Delay(1000);

	txDesc.MipLevels = 1;

	SDL_DestroyTexture(tex);

	cbDesc.MiscFlags = 0;

		&level,

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderPresent(ren);

		D3D_DRIVER_TYPE_HARDWARE,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

		&m_pSwapChain,



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#endif

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			index_offset += num_vertices;

	m_pPixelShader = NULL;

		&m_pSwapChain,

		&m_pDevice,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	//頂点バッファ作成



	//Vertex* pVList = new Vertex[vcount];



	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_Delay(1000);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

/*

	::ZeroMemory(&scDesc, sizeof(scDesc));

		&attrib,

		&m_pSwapChain,



	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pLightBuffer);

	}

	ConstantMaterial material; //物体の質感

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

#include <SDL.h>

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_IndexCount = icount;

CD3DTest::CD3DTest()

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.ArraySize = 1;

	//Create Index

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		size_t index_offset = 0;  // インデントのオフセット

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)



CD3DTest::CD3DTest()



	dsDesc.Texture2D.MipSlice = 0;

	//テクスチャ読み込み

	// Loop over shapes

		KEY_PRESS_SURFACE_LEFT,



	float    fov = XMConvertToRadians(20.0f);

	UINT strides = sizeof(Vertex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)





CD3DTest::CD3DTest()

struct ConstantLightBuffer {

#define TINYOBJLOADER_IMPLEMENTATION

		pVList[i] = vertexlist[i];

	XMFLOAT4         eyePos;   //視点座標

	}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

				tinyobj::real_t ty =

		exit(1);

	while (SDL_PollEvent(&e) != 0)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

	if (!error.empty())

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_TEXTURE2D_DESC txDesc;

	float    fov = XMConvertToRadians(20.0f);



	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



struct ConstantLightBuffer {

	DXGI_SWAP_CHAIN_DESC scDesc;

#endif





	m_pIndexBuffer = NULL;

	UINT offsets = 0;

	//テクスチャ読み込み

	scDesc.SampleDesc.Quality = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pTextureView);

	m_pTexture = NULL;

	std::string imagePath = "hello.bmp";

CD3DTest::CD3DTest()

	{



		return hr;

	}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ConstantLight    pntLight; //点光源

		KEY_PRESS_SURFACE_TOTAL

				break;

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}





	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	}

#ifdef _DEBUG



{

	::GetClientRect(hwnd, &rect);

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;



	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

				break;



				indexlist.push_back(index);

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	ConstantLightBuffer clb;







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

};

	auto& materials = reader.GetMaterials();

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(index);

	UINT flags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pPixelShader);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_DestroyTexture(tex);



	m_pVertexBuffer = NULL;

		}

	//定数バッファ作成

	{

		m_pImmediateContext->ClearState();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Key press surfaces constants



#include <SDL.h>

{

	// Loop over shapes

	SDL_DestroyRenderer(ren);

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantMatrixBuffer cmb;

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderPresent(ren);

	tinyobj::ObjReaderConfig reader_config;

	m_Angle += XMConvertToRadians(1.0f);



	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pTexture);

				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		pIList[j] = indexList[j];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



CD3DTest::CD3DTest()

int main(int, char**)

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))



	vrData.SysMemSlicePitch = 0;

				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

		D3D11_SDK_VERSION,

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		// Loop over faces(polygon)

	}



{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

		{

		return hr;

		size_t index_offset = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_DestroyWindow(win);

			}

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{



	SDL_DestroyRenderer(ren);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.CPUAccessFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pInputLayout = NULL;

	ibDesc.MiscFlags = 0;



	ConstantLightBuffer clb;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	tinyobj::attrib_t attrib;

	//深度ステンシルバッファ作成





	return 0;

	CRect                rect;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;



	return;

		}

	if (FAILED(hr))

		exit(1);



		&m_pSwapChain,

	for (int i = 0; i < 3; i++)

void CD3DTest::Render()

	{



		if (e.type == SDL_QUIT)

		R"(cube.obj)");





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	if (m_pImmediateContext)



		pVList[i] = vertexlist[i];

{

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	float    farZ = 100.0f;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vrData.pSysMem = &pVList[0];



		m_pImmediateContext->ClearState();

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



};

		pVList[i] = vertexlist[i];





	cbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC ibDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_Viewport.Width = (FLOAT)rect.Width();

		&error,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

void CD3DTest::Release()

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	{





};

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.MiscFlags = 0;

	return hr;

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	UINT strides = sizeof(Vertex);

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};



		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			for (size_t v = 0; v < num_vertices; v++)

	pBackBuffer->Release();



struct ConstantMaterial {

{

			index_offset += fv;

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&level,

	int     vcount = vertexlist.size();



}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	std::string error;

		flags,

				tinyobj::real_t tx =

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.eyePos, eye);

#ifdef _DEBUG



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderPresent(ren);

 * Lesson 1: Hello World!

#include <SDL.h>

struct ConstantMaterial {

		{

	}



	UINT flags = 0;

	SDL_FreeSurface(bmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

		&attrib,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

int main(int, char**)

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,



	tinyobj::attrib_t attrib;

		//User requests quit

			for (size_t v = 0; v < num_vertices; v++)

	m_pDevice = NULL;

	{



		&m_pSwapChain,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	LoadObj(vertexlist, indexList);

CD3DTest::CD3DTest()



	SAFE_RELEASE(m_pSwapChain);

};

	vbDesc.StructureByteStride = 0;



	m_Viewport.TopLeftX = 0;

	tinyobj::ObjReaderConfig reader_config;

		return hr;

		SDL_RenderClear(ren);



	auto& shapes = reader.GetShapes();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	auto& attrib = reader.GetAttrib();





		R"(cube.obj)");

				break;









	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	pBackBuffer->Release();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	WORD* pIList = new WORD[icount];

			int num_vertices = shape.mesh.num_face_vertices[f];







	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		flags,

	D3D11_BUFFER_DESC vbDesc;



	scDesc.BufferCount = 1;

using std::cout; using std::endl;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	bool ret = tinyobj::LoadObj(



			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	scDesc.SampleDesc.Quality = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pDevice,



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{

		}

struct ConstantMatrixBuffer {

	std::string inputfile = "test.obj";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Quit();

	}

	vector<WORD> indexList;

	//インデックスバッファ作成

				indexlist.push_back(index);

			default:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyTexture(tex);

};



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

int SEGMENT = 36;

	//頂点レイアウト作成

	std::string inputfile = "test.obj";

		}





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	{

	//インデックスバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

{



	for (int i = 0; i < vcount; i++)



		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);



		return hr;

	enum KeyPressSurfaces

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}



	SAFE_RELEASE(m_pTextureView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	XMStoreFloat4(&clb.ambient, lightAmbient);



				vertex.push_back(vertex_tmp);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		cout << "SDL_INIT_ERROR" << endl;



				// access to vertex

#include <iostream>

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMFLOAT4 diffuse;           //拡散(r,g,b)

int main(int, char**)



	WORD   icount = indexList.size();

			}

int SEGMENT = 36;

			break;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.SampleDesc.Quality = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ibDesc.MiscFlags = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		}

#include <iostream>

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	m_pDevice = NULL;

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.Windowed = TRUE;

	irData.SysMemSlicePitch = 0;

			break;

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		delete[] pVList;

	m_VertexCount = 0;

	scDesc.BufferCount = 1;





	vrData.SysMemPitch = 0;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.pSysMem = &pVList[0];

	irData.pSysMem = &pIList[0];



		SDL_RenderClear(ren);

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

		//User requests quit

	//テクスチャ読み込み

	}

	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&shapes,

			for (size_t v = 0; v < num_vertices; v++)

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

	ConstantMatrixBuffer cmb;

	D3D_FEATURE_LEVEL level;

	if (!reader.ParseFromFile(inputfile, reader_config))

	float    fov = XMConvertToRadians(20.0f);

		return 1;

		SDL_RenderClear(ren);

int main(int, char**)



				tinyobj::real_t ty =

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	std::vector<tinyobj::shape_t> shapes;



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	XMFLOAT4X4 view;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		//User requests quit



			case SDLK_LEFT:

	ConstantMatrixBuffer cmb;

	SDL_FreeSurface(suf);

	delete[] pIList;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ibDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

		size_t index_offset = 0;

				break;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

		delete[] pVList;

		else if (e.type == SDL_KEYDOWN)





	bool ret = tinyobj::LoadObj(

	if (m_pImmediateContext)



{



				vertex.push_back(vertex_tmp);

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	WORD* pIList = new WORD[icount];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	reader_config.mtl_search_path = "./"; // Path to material files

		// Loop over faces(polygon)

		return hr;

		&error,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_IndexCount = icount;



	return hr;



		&m_pImmediateContext);

{

 * Lesson 1: Hello World!



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.SysMemPitch = 0;

				tinyobj::real_t tx =

				tinyobj::real_t tx =

	std::string error;



	SAFE_RELEASE(m_pImmediateContext);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	SAFE_RELEASE(m_pDevice);

		1,

	for (int i = 0; i < vcount; i++)



	m_pVertexBuffer = NULL;

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_pDepthStencilView = NULL;

			}



			//Select surfaces based on key press

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		//User requests quit



	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_pVertexShader = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

void CD3DTest::Release()

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		&level,

	::GetClientRect(hwnd, &rect);



}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//頂点レイアウト作成

				break;

	}

CD3DTest::~CD3DTest()

	cbDesc.MiscFlags = 0;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTextureView = NULL;





	//深度ステンシルバッファ作成

	}

#include "DirectXManager.h"

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			// Loop over vertices in the face.

	}*/







	std::vector<tinyobj::material_t> materials;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//vector<WORD> index_t;

	txDesc.ArraySize = 1;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	XMFLOAT4X4 projection;

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

		&m_pSwapChain,

		&m_pImmediateContext);

		{

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	std::vector<tinyobj::material_t> materials;

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

			exit(1);

	ZeroMemory(&txDesc, sizeof(txDesc));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			default:

	XMFLOAT4 specular;          //反射(r,g,b)





		return hr;



	scDesc.BufferCount = 1;

			int num_vertices = shape.mesh.num_face_vertices[f];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{



	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	irData.pSysMem = &pIList[0];



	scDesc.BufferCount = 1;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pSampler);

	m_pVertexBuffer = NULL;



	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

		D3D_DRIVER_TYPE_HARDWARE,

	auto& attrib = reader.GetAttrib();



}







	delete[] pVList;



	D3D11_SUBRESOURCE_DATA irData;

	dsDesc.Format = txDesc.Format;

		m_pImmediateContext->ClearState();

	//vector<WORD> index_t;

	UINT offsets = 0;

	auto& shapes = reader.GetShapes();

		return hr;



struct ConstantMatrixBuffer {

		SDL_RenderClear(ren);



	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pPixelShader);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	XMFLOAT4X4 view;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pIndexBuffer = NULL;

				break;

		SDL_Delay(1000);

	m_pIndexBuffer = NULL;

	pBackBuffer->Release();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string inputfile = "test.obj";

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

		SDL_RenderPresent(ren);

	{

struct ConstantMaterial {



	}

	WORD* pIList = new WORD[icount];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	DXGI_SWAP_CHAIN_DESC scDesc;



				tinyobj::real_t ty =

		cout << "SDL_INIT_ERROR" << endl;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	while (SDL_PollEvent(&e) != 0)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.MiscFlags = 0;



	scDesc.BufferDesc.Width = rect.Width();

}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ID3D11Texture2D* pBackBuffer;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Quality = 0;

	m_pTexture = NULL;

				WORD index = idx.vertex_index;

int main(int, char**)



	dsDesc.Texture2D.MipSlice = 0;

			// Loop over vertices in the face.



	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pRenderTargetView);



	m_pRenderTargetView = NULL;

};





};

	m_VertexCount = vcount;

			exit(1);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.Windowed = TRUE;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::vector<tinyobj::material_t> materials;

		return hr;

	SAFE_RELEASE(m_pTextureView);



struct ConstantLight {



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pTextureView);



	SAFE_RELEASE(m_pTexture);



		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

struct ConstantLightBuffer {

			case SDLK_DOWN:

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

				indexlist.push_back(idx.vertex_index);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pSampler);

	return;

	XMFLOAT4 specular;          //反射(r,g,b)







		SDL_RenderClear(ren);

	m_pSwapChain = NULL;

	m_pTextureView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}
	reader_config.mtl_search_path = "./"; // Path to material files

{

	Vertex* pVList = new Vertex[vcount];



		KEY_PRESS_SURFACE_TOTAL

		{

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return 0;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		SDL_RenderPresent(ren);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	txDesc.Height = rect.Height();

		return 1;

	}

{

void CD3DTest::Release()

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

			switch (e.key.keysym.sym)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}





}

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;





	SDL_Quit();

	ConstantMatrixBuffer cmb;

	Release();

	::GetClientRect(hwnd, &rect);

			{

	{

	HRESULT              hr;

		pLevels,



	std::string error;

			exit(1);

	{



	XMFLOAT4X4 view;

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pDevice);

			case SDLK_LEFT:

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pPixelShader);

	Release();

			case SDLK_UP:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pRenderTargetView = NULL;

	SDL_Event e;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



int main(int, char**)

				break;



	cbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pDevice = NULL;

		1,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ConstantMatrixBuffer cmb;

	m_pMatrixBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	/*

	if (FAILED(hr))

{

	{

	CRect                rect;

	{

	};

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pDepthStencilView);

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		else if (e.type == SDL_KEYDOWN)

	//頂点シェーダー生成

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_DestroyTexture(tex);

	vbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Count = 1;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

			exit(1);



{

			case SDLK_RIGHT:

	return 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	ConstantMatrixBuffer cmb;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	//インデックスバッファ作成

		return hr;

		SDL_Delay(1000);





			break;

	D3D_FEATURE_LEVEL level;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	std::string error;

	for (int j = 0; j < icount; j++)

}



	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();





	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//vector<WORD> index_t;



	ZeroMemory(&txDesc, sizeof(txDesc));

void CD3DTest::Release()

		&level,

	m_pSwapChain = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vrData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

	}

	LoadObj(vertexlist, indexList);

		{

	m_Viewport.MinDepth = 0.0f;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			{

			case SDLK_RIGHT:

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_FreeSurface(suf);



	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	WORD   icount = indexList.size();

		&scDesc,

		KEY_PRESS_SURFACE_RIGHT,

	m_pInputLayout = NULL;

#include <iostream>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

{

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

HRESULT CD3DTest::Create(HWND hwnd)

		&m_pSwapChain,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		}

		SDL_RenderClear(ren);

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		D3D11_SDK_VERSION,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include <SDL.h>



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



		delete[] pVList;

	SDL_DestroyRenderer(ren);

	scDesc.SampleDesc.Count = 1;

		delete[] pVList;





	vbDesc.StructureByteStride = 0;

			//Select surfaces based on key press

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pImmediateContext);

	delete[] pIList;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//頂点バッファ作成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//Clean up our objects and quit

	{

	cbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



				tinyobj::real_t ty =

		}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Count = 1;

	{

	irData.SysMemSlicePitch = 0;



	LoadObj(vertexlist, indexList);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		&m_pDevice,





		&scDesc,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

		return hr;

		return hr;

				tinyobj::real_t ty =

	}

			{

#define TINYOBJLOADER_IMPLEMENTATION

	auto& attrib = reader.GetAttrib();

void CD3DTest::Render()



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&m_pImmediateContext);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.BufferDesc.Height = rect.Height();

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4         eyePos;   //視点座標

	//頂点レイアウト作成

	scDesc.BufferDesc.Height = rect.Height();

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pPixelShader);

	}

		{

};

CD3DTest::CD3DTest()

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#endif

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	//頂点レイアウト作成

	XMFLOAT4         eyePos;   //視点座標

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

HRESULT CD3DTest::Create(HWND hwnd)



			case SDLK_LEFT:

	m_pSwapChain->Present(0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			{

 */

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		KEY_PRESS_SURFACE_LEFT,

	std::vector<tinyobj::shape_t> shapes;



	txDesc.CPUAccessFlags = 0;

	{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	std::string error;



	SDL_FreeSurface(suf);

	//vector<Vertex> vertex_t;

		return hr;

	HRESULT              hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	//深度ステンシルバッファ作成



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	WORD   icount = indexList.size();

struct ConstantMaterial {

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			default:

	}

	SAFE_RELEASE(m_pVertexBuffer);



	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

		R"(cube.obj)");

	LoadObj(vertexlist, indexList);



	return 0;

	}



	scDesc.BufferDesc.Height = rect.Height();

	//頂点バッファ作成

CD3DTest::~CD3DTest()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{



	UINT offsets = 0;

	if (FAILED(hr))



	SAFE_RELEASE(m_pInputLayout);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#endif

	irData.SysMemSlicePitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



int main(int, char**)

	ibDesc.CPUAccessFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Key press surfaces constants

	if (FAILED(hr))

				break;

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	/*

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pDevice,

	vector<Vertex> vertexlist;

	{

	//vector<WORD> index_t;



		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		NULL,

CD3DTest::~CD3DTest()

#ifdef _DEBUG

#include <iostream>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantLight {

	{

			{

	txDesc.MipLevels = 1;

	cbDesc.MiscFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//テクスチャ読み込み

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

		}

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	WORD   icount = indexList.size();

};

		{





	m_pTexture = NULL;

	XMFLOAT4X4 projection;



{

	std::vector<tinyobj::shape_t> shapes;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL

			default:

		return hr;



	m_pSwapChain = NULL;

}
	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



			}



}

	SAFE_RELEASE(m_pSwapChain);

	irData.pSysMem = &pIList[0];

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;

{

	std::string inputfile = "test.obj";

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	vector<Vertex> vertexlist;

				break;

	SDL_DestroyRenderer(ren);

	{



	m_pDepthStencilView = NULL;

	return 0;

	SDL_DestroyRenderer(ren);





		return hr;

	m_IndexCount = 0;

	if (FAILED(hr))

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

struct ConstantMatrixBuffer {

	return 0;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

				indexlist.push_back(index);

		{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyTexture(tex);

		}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vrData.pSysMem = &pVList[0];

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_LEFT,

	vrData.SysMemPitch = 0;

	delete[] pIList;



	m_pVertexShader = NULL;



	SDL_DestroyTexture(tex);



		SDL_RenderCopy(ren, tex, NULL, NULL);



	cbDesc.MiscFlags = 0;

	XMFLOAT4X4 projection;

	dsDesc.Texture2D.MipSlice = 0;

	LoadObj(vertexlist, indexList);



	D3D11_SAMPLER_DESC smpDesc;









				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_LEFT,

				break;





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			}

		//User requests quit

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#ifdef _DEBUG

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				// access to vertex

{



	m_pVertexShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

 * Lesson 1: Hello World!

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_SAMPLER_DESC smpDesc;

	dsDesc.Format = txDesc.Format;

	D3D_FEATURE_LEVEL level;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

		size_t index_offset = 0;  // インデントのオフセット

		delete[] pIList;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				indexlist.push_back(index);

	enum KeyPressSurfaces

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	txDesc.SampleDesc.Count = 1;



	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	D3D11_BUFFER_DESC vbDesc;

		pLevels,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	std::string error;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&m_pImmediateContext);

	SAFE_RELEASE(m_pTextureView);

	UINT flags = 0;

	m_pSampler = NULL;

	std::string imagePath = "hello.bmp";

			index_offset += num_vertices;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	irData.SysMemSlicePitch = 0;

		}

	if (FAILED(hr))



	ConstantMatrixBuffer cmb;

	m_Viewport.MaxDepth = 1.0f;

		&error,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		delete[] pIList;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			}



			default:

		return hr;

	//Clean up our objects and quit

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.TopLeftX = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.Windowed = TRUE;

	SDL_DestroyRenderer(ren);

int SEGMENT = 36;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感







	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	m_VertexCount = vcount;



	SDL_DestroyTexture(tex);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

HRESULT CD3DTest::Create(HWND hwnd)

struct ConstantLight {

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{





	{

		{

	m_pTextureView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.MiscFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);



	vrData.pSysMem = &pVList[0];

	ibDesc.StructureByteStride = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 view;

	SDL_DestroyRenderer(ren);

#ifdef _DEBUG

	m_pPixelShader = NULL;



	}

	if (FAILED(hr))

				break;

		{

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pPixelShader);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <SDL.h>

int main(int, char**)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_Viewport.Width = (FLOAT)rect.Width();



			default:

	if (FAILED(hr))

			//Select surfaces based on key press

	hr = D3D11CreateDeviceAndSwapChain(NULL,





	for (int i = 0; i < vcount; i++)

	txDesc.Height = rect.Height();

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4         eyePos;   //視点座標

	float    nearZ = 0.1f;

	irData.pSysMem = &pIList[0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pMatrixBuffer = NULL;

	cbDesc.MiscFlags = 0;

			case SDLK_RIGHT:

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.MiscFlags = 0;



	XMFLOAT4X4 world;

	ConstantMatrixBuffer cmb;

		return hr;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pIndexBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		pVList[i] = vertexlist[i];

	{

	XMFLOAT4X4 world;

		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;

	{



		return hr;

	D3D_FEATURE_LEVEL level;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	for (const auto& shape : shapes)



				break;

	if (FAILED(hr))

		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{



	scDesc.OutputWindow = hwnd;

				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;

	m_pMatrixBuffer = NULL;



	}

	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces

	//Create Index

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t ty =

	vector<Vertex> vertexlist;



	{



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4X4 projection;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			}





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	// Loop over shapes

	m_pTexture = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	WORD* pIList = new WORD[icount];



				vertex.push_back(vertex_tmp);

	if (!reader.Warning().empty())

	{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pSampler);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	for (int i = 0; i < 3; i++)

	cbDesc.MiscFlags = 0;

struct ConstantMaterial {

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pSampler = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	::ZeroMemory(&scDesc, sizeof(scDesc));



};

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&attrib,

			break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pPixelShader = NULL;





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_BUFFER_DESC vbDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pTexture = NULL;

		size_t index_offset = 0;

	{

		&error,

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	SDL_DestroyRenderer(ren);

	SDL_FreeSurface(suf);



	//Key press surfaces constants

	if (!reader.ParseFromFile(inputfile, reader_config))

			{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);



}

	scDesc.OutputWindow = hwnd;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4 specular;          //反射(r,g,b)

			case SDLK_UP:



			{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			{

	SAFE_RELEASE(m_pMatrixBuffer);

	float    farZ = 100.0f;

				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

		KEY_PRESS_SURFACE_DOWN,

{

		return hr;

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pDevice);



		}

}

	}





		D3D11_SDK_VERSION,

	SDL_DestroyRenderer(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ビューポート設定

void CD3DTest::Render()

	//vector<WORD> index_t;

int SEGMENT = 36;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

int SEGMENT = 36;

	m_pDevice = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

	}

};

				indexlist.push_back(index);

	//インデックスバッファ作成

	XMFLOAT4X4 world;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	delete[] pVList;

	SDL_Quit();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string error;

	cbDesc.StructureByteStride = 0;

			{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Quit();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.TopLeftX = 0;

	m_pTexture = NULL;

		{

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	vrData.SysMemSlicePitch = 0;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			}

	//ピクセルシェーダー生成

	m_pInputLayout = NULL;

	D3D11_SUBRESOURCE_DATA vrData;



	SAFE_RELEASE(m_pTexture);



	vbDesc.MiscFlags = 0;

	irData.SysMemPitch = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.MiscFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferCount = 1;

#include <iostream>

	cbDesc.CPUAccessFlags = 0;

	while (SDL_PollEvent(&e) != 0)



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))





	vbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.SysMemPitch = 0;

			case SDLK_UP:

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.CPUAccessFlags = 0;

	txDesc.CPUAccessFlags = 0;



	m_pVertexShader = NULL;

			case SDLK_UP:

	cbDesc.StructureByteStride = 0;

		&level,

	Release();

	D3D11_SUBRESOURCE_DATA irData;

	m_Viewport.MaxDepth = 1.0f;

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.MaxDepth = 1.0f;

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	SDL_FreeSurface(suf);

		return hr;

#endif

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))





				break;

HRESULT CD3DTest::Create(HWND hwnd)



	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4X4 projection;

	//インデックスバッファ作成

	//Key press surfaces constants

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





			// Loop over vertices in the face.



			// Loop over vertices in the face.

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;

		SDL_RenderPresent(ren);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return 1;



	for (int i = 0; i < vcount; i++)

				break;

	}

		&m_pDevice,

/*

	SAFE_RELEASE(m_pVertexBuffer);

	if (!reader.Warning().empty())









	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	CRect                rect;

	SAFE_RELEASE(m_pIndexBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyRenderer(ren);

}


	SAFE_RELEASE(m_pRenderTargetView);

	}

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pInputLayout);

	scDesc.SampleDesc.Count = 1;

/*

{

		KEY_PRESS_SURFACE_RIGHT,

	float    fov = XMConvertToRadians(20.0f);

	delete[] pIList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

	WORD   icount = indexList.size();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	txDesc.Height = rect.Height();



				break;

	for (size_t s = 0; s < shapes.size(); s++)



	D3D11_SUBRESOURCE_DATA irData;

		{

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	vbDesc.StructureByteStride = 0;



		}

		&error,



{

	SAFE_RELEASE(m_pRenderTargetView);

	UINT flags = 0;

	irData.SysMemPitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//Clean up our objects and quit

	if (!error.empty())

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	WORD* pIList = new WORD[icount];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		}



	};

	vrData.pSysMem = &pVList[0];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_SUBRESOURCE_DATA vrData;

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

		if (!reader.Error().empty())

		if (!ret)

	txDesc.SampleDesc.Quality = 0;



{

	if (FAILED(hr))

	m_VertexCount = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	while (SDL_PollEvent(&e) != 0)

	m_pInputLayout = NULL;

	UINT flags = 0;

		SDL_RenderPresent(ren);



		}

			case SDLK_RIGHT:

		SDL_RenderCopy(ren, tex, NULL, NULL);

#include "DirectXManager.h"

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		flags,



	m_pSampler = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	CRect                rect;

	{

	{

};

		return hr;

	txDesc.ArraySize = 1;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		if (e.type == SDL_QUIT)

int main(int, char**)

	m_pPixelShader = NULL;



	std::vector<tinyobj::material_t> materials;



	m_Angle += XMConvertToRadians(1.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	//Vertex* pVList = new Vertex[vcount];

				// access to vertex

		SDL_RenderClear(ren);

	for (int i = 0; i < vcount; i++)

	m_pInputLayout = NULL;

		&m_pSwapChain,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	for (const auto& shape : shapes)

	if (FAILED(hr))

	float    farZ = 100.0f;



			default:

		&scDesc,

};

	auto& attrib = reader.GetAttrib();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::vector<tinyobj::material_t> materials;





			index_offset += num_vertices;

	m_pImmediateContext = NULL;

		exit(1);

	}



{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pDepthStencilTexture = NULL;

		flags,

	return;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4X4 view;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				indexlist.push_back(index);

void CD3DTest::Release()

	cbDesc.StructureByteStride = 0;



		SDL_RenderClear(ren);

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	SAFE_RELEASE(m_pSampler);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//First we need to start up SDL, and make sure it went ok

	float    farZ = 100.0f;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		{

			case SDLK_LEFT:

	{

				tinyobj::real_t ty =

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//テクスチャ読み込み







	cbDesc.MiscFlags = 0;

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		size_t index_offset = 0;

	}

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		&attrib,

	vbDesc.StructureByteStride = 0;

		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	while (SDL_PollEvent(&e) != 0)

	if (m_pImmediateContext)



}

	SDL_DestroyTexture(tex);

	m_IndexCount = 0;

	SAFE_RELEASE(m_pInputLayout);

		delete[] pIList;

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);



	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferCount = 1;

	txDesc.Height = rect.Height();

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		1,

	vbDesc.StructureByteStride = 0;

#include <SDL.h>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_FreeSurface(suf);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return 1;

				// access to vertex

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	delete[] pVList;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.Windowed = TRUE;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	UINT strides = sizeof(Vertex);

	m_pDevice = NULL;

	cbDesc.CPUAccessFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	{

	vector<WORD> indexList;

{

	cbDesc.CPUAccessFlags = 0;

	txDesc.ArraySize = 1;

	m_pIndexBuffer = NULL;

{

	vector<Vertex> vertexlist;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.CPUAccessFlags = 0;

	}



			{

	{

	SDL_Event e;

		&level,

	tinyobj::attrib_t attrib;



	txDesc.SampleDesc.Quality = 0;



	XMFLOAT4X4 world;





		size_t index_offset = 0;  // インデントのオフセット

		//User requests quit

	for (int i = 0; i < vcount; i++)

			for (size_t v = 0; v < fv; v++)

	/*

#define TINYOBJLOADER_IMPLEMENTATION



				// access to vertex



void CD3DTest::Render()

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vector<Vertex> vertexlist;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		flags,

	m_pSwapChain = NULL;



			//Select surfaces based on key press

struct ConstantMatrixBuffer {

	scDesc.BufferDesc.Width = rect.Width();

			int num_vertices = shape.mesh.num_face_vertices[f];

		NULL,

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		SDL_RenderClear(ren);

	vector<WORD> indexList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

		D3D_DRIVER_TYPE_HARDWARE,



};



CD3DTest::~CD3DTest()

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_VertexCount = vcount;



	XMFLOAT4X4 projection;



	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.Width = rect.Width();

	vector<WORD> indexList;





	if (FAILED(hr))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

};

		return hr;

		pLevels,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (!error.empty())

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

			// Loop over vertices in the face.

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pLightBuffer);



	m_Viewport.MaxDepth = 1.0f;



		}

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	auto& shapes = reader.GetShapes();

	//First we need to start up SDL, and make sure it went ok

			case SDLK_LEFT:

		}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.BufferCount = 1;

		return hr;

	XMFLOAT4X4 world;

				// access to vertex

{







	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

void CD3DTest::Render()

	vrData.SysMemPitch = 0;



	DXGI_SWAP_CHAIN_DESC scDesc;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC cbDesc;



	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		R"(cube.obj)");

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//深度ステンシルバッファ作成

	vbDesc.MiscFlags = 0;

				break;

	SDL_DestroyWindow(win);

	UINT offsets = 0;

	SAFE_RELEASE(m_pImmediateContext);

	ConstantMatrixBuffer cmb;

		return hr;

#endif

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_TEXTURE2D_DESC txDesc;



	if (FAILED(hr))

		return hr;

		&m_pDevice,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		KEY_PRESS_SURFACE_RIGHT,

	SDL_Quit();

	m_pTextureView = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	m_pVertexShader = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	if (!error.empty())

	irData.pSysMem = &pIList[0];

using std::cout; using std::endl;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (!error.empty())



	}*/



	//頂点レイアウト作成

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pVList;

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();

	dsDesc.Format = txDesc.Format;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	Release();

	//頂点レイアウト作成



		pLevels,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

 * Lesson 1: Hello World!

	ConstantLightBuffer clb;

	//頂点レイアウト作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.CPUAccessFlags = 0;

		// Loop over faces(polygon)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

	reader_config.mtl_search_path = "./"; // Path to material files

	ConstantLightBuffer clb;

	tinyobj::ObjReader reader;

	XMFLOAT4 specular;          //反射(r,g,b)



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//vector<Vertex> vertex_t;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_IndexCount = 0;

	txDesc.MiscFlags = 0;

	std::string error;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//頂点バッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

{

}

		&scDesc,

	if (FAILED(hr))



		delete[] pVList;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	m_pVertexShader = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pRenderTargetView = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	//頂点バッファ作成

	return 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	SAFE_RELEASE(m_pSwapChain);

	}

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;



	//Key press surfaces constants

void CD3DTest::Release()

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pImmediateContext);

int main(int, char**)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

	LoadObj(vertexlist, indexList);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pPixelShader = NULL;

}

			exit(1);

		&level,



			index_offset += fv;

	CRect                rect;

		SDL_Delay(1000);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_DOWN,





	ZeroMemory(&dsDesc, sizeof(dsDesc));

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pIndexBuffer = NULL;

	if (FAILED(hr))



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

};

	}



		&level,

	m_Viewport.TopLeftY = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	SDL_DestroyRenderer(ren);



	tinyobj::ObjReader reader;

	{

	m_pSwapChain = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

void CD3DTest::Release()







	};



	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		{

	m_Viewport.Height = (FLOAT)rect.Height();



	return hr;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





			}

	reader_config.mtl_search_path = "./"; // Path to material files

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pTexture);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pSampler);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	irData.SysMemSlicePitch = 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 specular;          //反射(r,g,b)





			// Loop over vertices in the face.

CD3DTest::CD3DTest()



	{

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	UINT flags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();





		SDL_Delay(1000);

	SDL_DestroyWindow(win);

#endif

	auto& attrib = reader.GetAttrib();

	//テクスチャ読み込み

	{

	ibDesc.CPUAccessFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

			case SDLK_UP:

	{

int main(int, char**)

	SDL_DestroyWindow(win);

	}



				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	Vertex* pVList = new Vertex[vcount];

	D3D11_BUFFER_DESC cbDesc;

	m_VertexCount = 0;



	}

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				vertex.push_back(vertex_tmp);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	/*

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

				break;

	}

	cbDesc.CPUAccessFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ピクセルシェーダー生成

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.CPUAccessFlags = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

{

	m_pTextureView = NULL;

	{

		NULL,

		return hr;

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



 * Lesson 1: Hello World!

#include <SDL.h>

	txDesc.MipLevels = 1;



	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pTextureView);

}

	vector<WORD> indexList;

		delete[] pVList;

			}

	// Loop over shapes





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	for (int i = 0; i < 3; i++)

			exit(1);

CD3DTest::CD3DTest()

	//頂点シェーダー生成

int SEGMENT = 36;

		//User requests quit

	if (!error.empty())

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		flags,

	Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	Release();









				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



			case SDLK_RIGHT:

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);



	scDesc.BufferCount = 1;

		else if (e.type == SDL_KEYDOWN)

		return 1;

				vertex.push_back(vertex_tmp);

				break;

	SAFE_RELEASE(m_pSwapChain);





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4         eyePos;   //視点座標

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ID3D11Texture2D* pBackBuffer;

#include <iostream>

	SAFE_RELEASE(m_pSampler);

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};



 */

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

}

		KEY_PRESS_SURFACE_DEFAULT,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

};

}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pSampler);

}

	SAFE_RELEASE(m_pImmediateContext);



	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!error.empty())

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pTexture);

	::GetClientRect(hwnd, &rect);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	// Loop over shapes

		1,

				// access to vertex

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				// access to vertex



		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pLightBuffer);

	int     vcount = vertexlist.size();

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	m_Viewport.Width = (FLOAT)rect.Width();



	UINT flags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			break;

		return hr;

			case SDLK_DOWN:

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ID3D11Texture2D* pBackBuffer;

	tinyobj::ObjReader reader;

	//定数バッファ作成





}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

	m_pPixelShader = NULL;

{

	tinyobj::ObjReader reader;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyRenderer(ren);

	m_pTextureView = NULL;

	SDL_DestroyTexture(tex);

	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_RIGHT,

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDepthStencilView);



	XMFLOAT4 pos;               //座標(x,y,z)


