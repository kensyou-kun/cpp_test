	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

		{

			{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	auto& materials = reader.GetMaterials();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include "DirectXManager.h"

	XMFLOAT4 specular;          //反射(r,g,b)



	D3D11_TEXTURE2D_DESC txDesc;

	vbDesc.MiscFlags = 0;

		{





	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	float    nearZ = 0.1f;

void CD3DTest::Render()

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantMaterial {

	D3D11_SUBRESOURCE_DATA irData;



	XMFLOAT4         ambient;  //環境光(r,g,b)

struct ConstantMatrixBuffer {

		pLevels,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;

	if (FAILED(hr))

	{

{

	m_pDepthStencilTexture = NULL;

		if (!ret)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

		pVList[i] = vertexlist[i];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

};

				break;

	UINT strides = sizeof(Vertex);

		size_t index_offset = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	auto& shapes = reader.GetShapes();



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (!error.empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ConstantLightBuffer clb;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;



	vrData.SysMemPitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pDevice);

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



 * Lesson 1: Hello World!



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pSampler = NULL;

/*



}

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	m_pVertexShader = NULL;

struct ConstantLight {

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pRenderTargetView = NULL;





	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	UINT strides = sizeof(Vertex);

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_UP,

	irData.SysMemSlicePitch = 0;

		&error,

	vector<WORD> indexList;



		}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	}

		size_t index_offset = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

		D3D11_SDK_VERSION,

		flags,

	for (const auto& shape : shapes)

#define TINYOBJLOADER_IMPLEMENTATION

		// Loop over faces(polygon)

	m_pInputLayout = NULL;





	if (FAILED(hr))

	if (FAILED(hr))

#include "DirectXManager.h"

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

};

	txDesc.MipLevels = 1;

	m_pImmediateContext = NULL;



			case SDLK_DOWN:

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTexture);

		R"(cube.obj)");

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

CD3DTest::~CD3DTest()

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	for (int i = 0; i < 3; i++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	tinyobj::ObjReader reader;

	D3D11_BUFFER_DESC cbDesc;

	vbDesc.CPUAccessFlags = 0;

	CRect                rect;

	cbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SAFE_RELEASE(m_pDepthStencilView);

#include <iostream>

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);

struct ConstantLight {

		delete[] pVList;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	cbDesc.StructureByteStride = 0;



	XMFLOAT4X4 view;

		D3D11_SDK_VERSION,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.MaxDepth = 1.0f;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

	}

	scDesc.BufferDesc.Width = rect.Width();

	enum KeyPressSurfaces

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			index_offset += num_vertices;

	float    nearZ = 0.1f;

				tinyobj::real_t ty =

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.MipLevels = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			for (size_t v = 0; v < fv; v++)

				break;

		}

		return hr;





	UINT offsets = 0;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SDL_Quit();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	return 0;

		{

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

	return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	}







			index_offset += num_vertices;

	}



		&scDesc,

	txDesc.SampleDesc.Count = 1;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	::GetClientRect(hwnd, &rect);

	m_Viewport.TopLeftY = 0;

	//Clean up our objects and quit

{

			{

	m_VertexCount = vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

/*

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		// Loop over faces(polygon)

	D3D11_BUFFER_DESC ibDesc;

	vrData.SysMemPitch = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_IndexCount = icount;



			case SDLK_RIGHT:

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.MiscFlags = 0;

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	//vector<WORD> index_t;

		}

	}

	{

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	LoadObj(vertexlist, indexList);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



			case SDLK_LEFT:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_SUBRESOURCE_DATA irData;

			index_offset += num_vertices;



		&level,

		D3D_DRIVER_TYPE_HARDWARE,



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pDevice = NULL;

		{

	m_IndexCount = icount;

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pIndexBuffer);



	dsDesc.Format = txDesc.Format;

	ConstantLightBuffer clb;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	D3D11_SUBRESOURCE_DATA irData;

	// Loop over shapes

	auto& materials = reader.GetMaterials();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			// Loop over vertices in the face.

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_Viewport.Width = (FLOAT)rect.Width();



		&m_pSwapChain,

	{

		1,

void CD3DTest::Render()

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

		return hr;

	ConstantLightBuffer clb;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&materials,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		if (e.type == SDL_QUIT)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



	cbDesc.MiscFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	m_pDevice = NULL;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

		pVList[i] = vertexlist[i];

	if (FAILED(hr))

	return;

				break;

	D3D11_SUBRESOURCE_DATA vrData;



struct ConstantLight {

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;



			case SDLK_DOWN:

using std::cout; using std::endl;

	XMFLOAT4 ambient;           //環境(r,g,b)

		}

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderPresent(ren);

}

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pInputLayout);

{

	SAFE_RELEASE(m_pInputLayout);

	D3D11_SAMPLER_DESC smpDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	reader_config.mtl_search_path = "./"; // Path to material files

			case SDLK_RIGHT:

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

 */

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				indexlist.push_back(index);

				break;

	int     vcount = vertexlist.size();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

				indexlist.push_back(idx.vertex_index);

	};

	return 0;

	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantMaterial material; //物体の質感



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			case SDLK_RIGHT:



	D3D11_SUBRESOURCE_DATA vrData;

	m_pMatrixBuffer = NULL;



	m_Viewport.MaxDepth = 1.0f;

		if (!reader.Error().empty())

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;





	cbDesc.CPUAccessFlags = 0;

		flags,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&materials,

	{

		flags,

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

			case SDLK_LEFT:

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pInputLayout);



	delete[] pIList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pDevice = NULL;



	return 0;

	scDesc.BufferDesc.Height = rect.Height();

	{

		return hr;

	if (!reader.Warning().empty())

		pLevels,

using std::cout; using std::endl;





	dsDesc.Format = txDesc.Format;

}

	//頂点バッファ作成

	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& materials = reader.GetMaterials();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pDepthStencilView);

		exit(1);

	D3D_FEATURE_LEVEL level;



	SAFE_RELEASE(m_pDevice);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pPixelShader = NULL;

{

/*

	}

	if (!error.empty())





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::string inputfile = "test.obj";

	//頂点バッファ作成

	XMFLOAT4X4 world;

	txDesc.Width = rect.Width();

	D3D11_SUBRESOURCE_DATA irData;



	CRect                rect;



	D3D11_BUFFER_DESC ibDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	dsDesc.Format = txDesc.Format;

			switch (e.key.keysym.sym)

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferDesc.Width = rect.Width();

{

	scDesc.BufferDesc.Height = rect.Height();



	ZeroMemory(&dsDesc, sizeof(dsDesc));



		}

	WORD   icount = indexList.size();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_IndexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	irData.pSysMem = &pIList[0];

	scDesc.BufferDesc.Width = rect.Width();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}

struct ConstantMaterial {

	scDesc.SampleDesc.Quality = 0;

	scDesc.SampleDesc.Quality = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	int     vcount = vertexlist.size();

	{

	SAFE_RELEASE(m_pSwapChain);

	SDL_Quit();



	if (FAILED(hr))

	{

	std::string imagePath = "hello.bmp";

	ibDesc.MiscFlags = 0;

		if (!reader.Error().empty())





	XMFLOAT4 pos;               //座標(x,y,z)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyTexture(tex);

	{



	cbDesc.MiscFlags = 0;





	if (!reader.ParseFromFile(inputfile, reader_config))

	dsDesc.Texture2D.MipSlice = 0;

			case SDLK_RIGHT:

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				indexlist.push_back(index);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	int     vcount = vertexlist.size();

	std::vector<tinyobj::material_t> materials;



	enum KeyPressSurfaces



	scDesc.BufferDesc.Width = rect.Width();



	SDL_DestroyWindow(win);

		// Loop over faces(polygon)

	};

	//深度ステンシルバッファ作成

		size_t index_offset = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Key press surfaces constants

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.ArraySize = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	for (const auto& shape : shapes)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	};

int SEGMENT = 36;

 * Lesson 1: Hello World!



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <SDL.h>



		delete[] pIList;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_LEFT,

		KEY_PRESS_SURFACE_RIGHT,



{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//深度ステンシルバッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				WORD index = idx.vertex_index;



	for (int i = 0; i < 3; i++)

			// Loop over vertices in the face.



	if (FAILED(hr))

	{

	m_Viewport.TopLeftY = 0;

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

struct ConstantMaterial {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

int main(int, char**)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

			int num_vertices = shape.mesh.num_face_vertices[f];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	delete[] pIList;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

	//頂点バッファ作成

	//First we need to start up SDL, and make sure it went ok

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	irData.pSysMem = &pIList[0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pRenderTargetView = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.Format = txDesc.Format;

	m_IndexCount = 0;

}

				break;

	//ビューポート設定

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&m_pImmediateContext);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return 1;

#include "DirectXManager.h"

				// access to vertex

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	{

}

		return hr;

int main(int, char**)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;

	m_VertexCount = 0;

	SDL_DestroyRenderer(ren);

	txDesc.Height = rect.Height();

	for (int i = 0; i < 3; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	D3D_FEATURE_LEVEL level;

		return hr;



	//定数バッファ作成

#define TINYOBJLOADER_IMPLEMENTATION





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pSampler = NULL;

	if (FAILED(hr))



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	UINT flags = 0;

		if (e.type == SDL_QUIT)



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

		return hr;





	while (SDL_PollEvent(&e) != 0)

			for (size_t v = 0; v < num_vertices; v++)

	scDesc.BufferCount = 1;



	LoadObj(vertexlist, indexList);

			//Select surfaces based on key press

	SDL_Quit();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&level,

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

void CD3DTest::Release()

	XMFLOAT4 specular;          //反射(r,g,b)

	m_VertexCount = 0;

		if (e.type == SDL_QUIT)

			{



	txDesc.SampleDesc.Quality = 0;

{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				WORD index = idx.vertex_index;

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Release();



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Viewport.MinDepth = 0.0f;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	scDesc.OutputWindow = hwnd;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pIndexBuffer);

	//頂点バッファ作成

	{

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pLightBuffer);







	txDesc.Width = rect.Width();





	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		SDL_RenderClear(ren);

			switch (e.key.keysym.sym)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	LoadObj(vertexlist, indexList);

	scDesc.SampleDesc.Quality = 0;

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pInputLayout);



		&shapes,

	SAFE_RELEASE(m_pDevice);

	for (int j = 0; j < icount; j++)

	D3D11_BUFFER_DESC vbDesc;

	txDesc.CPUAccessFlags = 0;

	/*

	XMFLOAT4X4 projection;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

struct ConstantLight {

				// access to vertex

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D11_SUBRESOURCE_DATA vrData;



	{

	m_VertexCount = 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



			case SDLK_DOWN:

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	D3D11_SAMPLER_DESC smpDesc;

using std::cout; using std::endl;



		SDL_RenderPresent(ren);

	ibDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;



 * Lesson 1: Hello World!

	dsDesc.Format = txDesc.Format;

		delete[] pVList;

	scDesc.Windowed = TRUE;

	return hr;

	if (FAILED(hr))

	if (FAILED(hr))

			exit(1);



void CD3DTest::Render()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				tinyobj::real_t tx =

	std::string inputfile = "test.obj";



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.SampleDesc.Count = 1;

	std::vector<tinyobj::material_t> materials;



void CD3DTest::Release()

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pIndexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

CD3DTest::~CD3DTest()

		}

void CD3DTest::Render()

	while (SDL_PollEvent(&e) != 0)

			case SDLK_LEFT:

	{

			{



	SDL_DestroyTexture(tex);

			{

	//Key press surfaces constants

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



#include <SDL.h>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemPitch = 0;

	//Create Index

	ConstantLightBuffer clb;

	if (!reader.Warning().empty())



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		KEY_PRESS_SURFACE_RIGHT,

		{

	{



		return hr;

#ifdef _DEBUG

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t ty =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&m_pDevice,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_BUFFER_DESC vbDesc;



#endif



struct ConstantLightBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				indexlist.push_back(idx.vertex_index);

	SDL_DestroyRenderer(ren);



	irData.pSysMem = &pIList[0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <SDL.h>

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pSampler);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pSampler);

	WORD* pIList = new WORD[icount];

		m_pImmediateContext->ClearState();

	return 0;

		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Release()

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#include <SDL.h>



	//First we need to start up SDL, and make sure it went ok

{

	return 0;

		}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			index_offset += num_vertices;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



#include "DirectXManager.h"

using std::cout; using std::endl;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		if (!reader.Error().empty())

void CD3DTest::Render()

	dsDesc.Format = txDesc.Format;





	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	for (int i = 0; i < vcount; i++)

	XMFLOAT4 specular;          //反射(r,g,b)



 */

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

		return hr;

void CD3DTest::Release()

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



		return hr;

	scDesc.Windowed = TRUE;

	return hr;

		}

	{



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	enum KeyPressSurfaces



	scDesc.SampleDesc.Quality = 0;

	//Vertex* pVList = new Vertex[vcount];

{

	cbDesc.CPUAccessFlags = 0;

	}

{

struct ConstantLight {

	std::string error;

	}

	D3D11_BUFFER_DESC cbDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vrData.SysMemSlicePitch = 0;

	m_pTextureView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		return hr;

	if (FAILED(hr))

	txDesc.MiscFlags = 0;



		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#include <iostream>

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	// Loop over shapes

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.TopLeftX = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}*/

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

		return hr;

	cbDesc.MiscFlags = 0;

	}

#include <iostream>



};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		}

	{





	{

			case SDLK_RIGHT:

		}

		SDL_Delay(1000);

		{

	{



	txDesc.Height = rect.Height();

 */



	ConstantMaterial material; //物体の質感

	ConstantLight    pntLight; //点光源



int SEGMENT = 36;

	//vector<WORD> index_t;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (!error.empty())

	vrData.SysMemSlicePitch = 0;

	{

	}

	SDL_Quit();

		}

		}

#include <iostream>



	m_Angle += XMConvertToRadians(1.0f);



	m_VertexCount = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_BUFFER_DESC vbDesc;

	Vertex* pVList = new Vertex[vcount];

	};

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.SampleDesc.Quality = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.ambient, lightAmbient);

{



#endif

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//vector<WORD> index_t;

	SDL_DestroyTexture(tex);

	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC cbDesc;

		SDL_Delay(1000);

	if (m_pImmediateContext)

				break;



	vrData.pSysMem = &pVList[0];



		return hr;

	};

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	while (SDL_PollEvent(&e) != 0)

		}

	D3D11_BUFFER_DESC vbDesc;

				break;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += num_vertices;





	SDL_Event e;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pDepthStencilView = NULL;

	scDesc.SampleDesc.Count = 1;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

}

	irData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

using std::cout; using std::endl;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			// Loop over vertices in the face.

	m_pImmediateContext = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pDepthStencilView);



{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		if (!reader.Error().empty())



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pTextureView);

		{

	if (FAILED(hr))

	float    farZ = 100.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));







				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

			default:

	SAFE_RELEASE(m_pVertexShader);

CD3DTest::CD3DTest()

			{

	m_pRenderTargetView = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				vertex.push_back(vertex_tmp);

void CD3DTest::Release()

	{

	cbDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	reader_config.mtl_search_path = "./"; // Path to material files



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pVertexShader = NULL;

	m_pRenderTargetView = NULL;

				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		//User presses a key

	vrData.SysMemPitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//頂点バッファ作成

			}

	m_Angle += XMConvertToRadians(1.0f);



		return 1;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_BUFFER_DESC cbDesc;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<WORD> indexList;

	tinyobj::attrib_t attrib;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Width = (FLOAT)rect.Width();

#include <iostream>

	m_IndexCount = icount;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_LEFT,



	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



				break;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				// access to vertex

		return hr;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.MiscFlags = 0;

		&materials,

	//vector<WORD> index_t;

		pIList[j] = indexList[j];

	cbDesc.CPUAccessFlags = 0;











	XMStoreFloat4(&clb.material.specular, materialSpecular);





		&m_pSwapChain,





		SDL_RenderClear(ren);



	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

	m_pInputLayout = NULL;



	if (!error.empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//ピクセルシェーダー生成

	if (!reader.Warning().empty())

{

		size_t index_offset = 0;

	SAFE_RELEASE(m_pImmediateContext);

	ZeroMemory(&txDesc, sizeof(txDesc));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain->Present(0, 0);







			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	while (SDL_PollEvent(&e) != 0)

	cbDesc.StructureByteStride = 0;

	if (!reader.Warning().empty())

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	CRect                rect;

	ConstantLight    pntLight; //点光源

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLightBuffer clb;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	{

	SAFE_RELEASE(m_pDepthStencilView);

	std::string imagePath = "hello.bmp";



	CRect                rect;

CD3DTest::~CD3DTest()

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



			break;

	std::vector<tinyobj::material_t> materials;

				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		{



				break;

	SDL_DestroyTexture(tex);

	for (int i = 0; i < vcount; i++)



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//Vertex* pVList = new Vertex[vcount];

	D3D_FEATURE_LEVEL level;

	vbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

		return hr;

				break;

CD3DTest::~CD3DTest()



HRESULT CD3DTest::Create(HWND hwnd)





	m_pInputLayout = NULL;



		{

	WORD   icount = indexList.size();

	ID3D11Texture2D* pBackBuffer;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pPixelShader = NULL;

	SDL_FreeSurface(suf);

	{

		return hr;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		delete[] pIList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::string imagePath = "hello.bmp";

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Quit();

	if (FAILED(hr))

			case SDLK_RIGHT:

		if (!ret)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	ConstantLightBuffer clb;

};



				vertex.push_back(vertex_tmp);

	ConstantMatrixBuffer cmb;



		return 1;



	SAFE_RELEASE(m_pInputLayout);

		{

	txDesc.SampleDesc.Quality = 0;

	while (SDL_PollEvent(&e) != 0)





		return hr;

	if (FAILED(hr))

}

			case SDLK_DOWN:





	{

	SDL_FreeSurface(bmp);



void CD3DTest::Release()



		NULL,

	m_pInputLayout = NULL;

				break;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				// access to vertex





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	scDesc.BufferDesc.Width = rect.Width();

struct ConstantMaterial {

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_UP,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			case SDLK_LEFT:

	m_pInputLayout = NULL;

		return hr;

	ConstantLightBuffer clb;

	irData.SysMemSlicePitch = 0;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	ibDesc.MiscFlags = 0;

		return hr;

		}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			switch (e.key.keysym.sym)



	cbDesc.CPUAccessFlags = 0;



	for (const auto& shape : shapes)

	txDesc.SampleDesc.Quality = 0;



	txDesc.Height = rect.Height();



		&attrib,

	ConstantLightBuffer clb;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.StructureByteStride = 0;

	SDL_Quit();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		KEY_PRESS_SURFACE_LEFT,

{

	{

	}

				break;

			index_offset += num_vertices;

		//User presses a key

	/*

	}

	txDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	tinyobj::ObjReaderConfig reader_config;



	Release();

	//定数バッファ作成



	}

		}



		pLevels,

		pLevels,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pPixelShader = NULL;

	}

		{

	for (const auto& shape : shapes)

		{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	m_Angle += XMConvertToRadians(1.0f);

struct ConstantLightBuffer {



	float    fov = XMConvertToRadians(20.0f);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		delete[] pVList;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.Format = txDesc.Format;

	txDesc.MiscFlags = 0;

	Release();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))





	float    fov = XMConvertToRadians(20.0f);

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.Height = rect.Height();



#include <SDL.h>

	for (int j = 0; j < icount; j++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			case SDLK_UP:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	}



	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			}



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pLightBuffer = NULL;

	//vector<WORD> index_t;



	m_pMatrixBuffer = NULL;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	SAFE_RELEASE(m_pRenderTargetView);

	}

};

	cbDesc.CPUAccessFlags = 0;

	WORD   icount = indexList.size();

	std::vector<tinyobj::material_t> materials;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA irData;

		return 1;

		SDL_RenderPresent(ren);

	SDL_Event e;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pIndexBuffer = NULL;



			case SDLK_RIGHT:

	std::vector<tinyobj::shape_t> shapes;

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	//深度ステンシルバッファ作成

		size_t index_offset = 0;

{



struct ConstantLightBuffer {

	m_pMatrixBuffer = NULL;

		&m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.Width = (FLOAT)rect.Width();



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	while (SDL_PollEvent(&e) != 0)

}


{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				break;

		return hr;

	m_Viewport.TopLeftX = 0;



	irData.SysMemSlicePitch = 0;

	return 0;

#ifdef _DEBUG

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		&m_pImmediateContext);

	SAFE_RELEASE(m_pVertexShader);

int main(int, char**)

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_LEFT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4X4 world;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	m_pDepthStencilTexture = NULL;



	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		pVList[i] = vertexlist[i];



int SEGMENT = 36;

	SDL_DestroyWindow(win);

		{

		NULL,

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pImmediateContext);

	vrData.pSysMem = &pVList[0];

};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	ConstantLight    pntLight; //点光源

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			index_offset += fv;



	float    fov = XMConvertToRadians(20.0f);



	txDesc.Height = rect.Height();



}

/*

	}

		&scDesc,

struct ConstantMaterial {







		//User presses a key



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (m_pImmediateContext)

	vbDesc.CPUAccessFlags = 0;

	m_IndexCount = 0;

	m_pSwapChain->Present(0, 0);

	return hr;







	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);







struct ConstantMatrixBuffer {

	DXGI_SWAP_CHAIN_DESC scDesc;

			case SDLK_LEFT:

	m_pLightBuffer = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_UP,

		return 1;

	m_Viewport.TopLeftY = 0;



	if (FAILED(hr))





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}



		exit(1);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_DestroyWindow(win);

	{

#include <iostream>

			}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	return hr;

}

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

		D3D11_SDK_VERSION,



}

				break;

	m_IndexCount = icount;

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_UP,

#define TINYOBJLOADER_IMPLEMENTATION

		&m_pSwapChain,

				tinyobj::real_t ty =

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D_FEATURE_LEVEL level;

	}

	{

				// access to vertex

struct ConstantMatrixBuffer {

	m_pPixelShader = NULL;



	//vector<Vertex> vertex_t;

	SDL_Quit();

	SDL_Event e;



	D3D11_BUFFER_DESC vbDesc;

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SAFE_RELEASE(m_pIndexBuffer);

		delete[] pIList;

int SEGMENT = 36;

{

#include <SDL.h>

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    farZ = 100.0f;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	D3D11_SUBRESOURCE_DATA vrData;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pDepthStencilTexture);

		1,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		}

	SDL_DestroyTexture(tex);

	m_pTexture = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				vertex.push_back(vertex_tmp);





	m_pSwapChain->Present(0, 0);

	XMFLOAT4X4 world;



	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();



HRESULT CD3DTest::Create(HWND hwnd)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



{



	irData.SysMemSlicePitch = 0;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

struct ConstantLightBuffer {

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	//Key press surfaces constants

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include <SDL.h>

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

struct ConstantMaterial {

	txDesc.SampleDesc.Count = 1;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Create Index

 * Lesson 1: Hello World!

	//テクスチャ読み込み



	txDesc.Height = rect.Height();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	}

	txDesc.SampleDesc.Count = 1;

			switch (e.key.keysym.sym)

	ConstantLight    pntLight; //点光源

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantMaterial material; //物体の質感





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	//vector<Vertex> vertex_t;

	tinyobj::ObjReader reader;

		delete[] pIList;

				WORD index = idx.vertex_index;

		&scDesc,

	return 0;

	m_Viewport.TopLeftY = 0;

CD3DTest::~CD3DTest()

	//Create Index

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

{



	}

	scDesc.OutputWindow = hwnd;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_DestroyRenderer(ren);

	m_pSampler = NULL;

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pMatrixBuffer);

	if (m_pImmediateContext)

	if (FAILED(hr))

/*

	//テクスチャ読み込み

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	CRect                rect;







{

			case SDLK_DOWN:

	cbDesc.CPUAccessFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				vertex.push_back(vertex_tmp);

			}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC ibDesc;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.Windowed = TRUE;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_Angle += XMConvertToRadians(1.0f);

				break;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_SAMPLER_DESC smpDesc;

	HRESULT              hr;



		}

		&level,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.MinDepth = 0.0f;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.OutputWindow = hwnd;

		{

		{

	m_IndexCount = 0;

	//ビューポート設定

			case SDLK_RIGHT:

	for (int i = 0; i < 3; i++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Release();

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMFLOAT4         eyePos;   //視点座標

{





		//User presses a key

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//Create Index

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

	scDesc.OutputWindow = hwnd;

#include <iostream>

		pVList[i] = vertexlist[i];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	tinyobj::ObjReaderConfig reader_config;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4X4 view;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		pIList[j] = indexList[j];



void CD3DTest::Release()



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	UINT offsets = 0;



	//定数バッファ作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		D3D11_SDK_VERSION,

	{



		//User requests quit

		return hr;



			//Select surfaces based on key press

	XMFLOAT4 specular;          //反射(r,g,b)





		1,

	txDesc.MipLevels = 1;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	HRESULT              hr;

	D3D_FEATURE_LEVEL level;

	}



				WORD index = idx.vertex_index;





	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

int main(int, char**)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		KEY_PRESS_SURFACE_UP,

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		KEY_PRESS_SURFACE_DOWN,

		return 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pImmediateContext);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		else if (e.type == SDL_KEYDOWN)

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pImmediateContext);

				indexlist.push_back(index);



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	}*/



				indexlist.push_back(idx.vertex_index);

	m_pSwapChain->Present(0, 0);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	tinyobj::attrib_t attrib;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4         eyePos;   //視点座標



int main(int, char**)



	//ビューポート設定

		size_t index_offset = 0;  // インデントのオフセット

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット



		KEY_PRESS_SURFACE_LEFT,

		if (!reader.Error().empty())

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

		}

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		if (!reader.Error().empty())

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (!ret)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				// access to vertex



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

			// Loop over vertices in the face.

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	if (FAILED(hr))

		R"(cube.obj)");



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D_FEATURE_LEVEL level;

	m_pLightBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_DestroyWindow(win);

	m_pSwapChain = NULL;

	{

};

	if (FAILED(hr))

	vector<WORD> indexList;

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pLightBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	tinyobj::ObjReader reader;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	{

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	Release();

	/*

		D3D11_SDK_VERSION,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			switch (e.key.keysym.sym)

			// Loop over vertices in the face.

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

HRESULT CD3DTest::Create(HWND hwnd)

		&m_pDevice,

	SDL_DestroyTexture(tex);



	//First we need to start up SDL, and make sure it went ok



	m_pVertexShader = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		NULL,

	{

	tinyobj::attrib_t attrib;





				// access to vertex

	Release();

		return hr;



		flags,

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)



}

	txDesc.ArraySize = 1;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	irData.pSysMem = &pIList[0];

				break;

CD3DTest::~CD3DTest()

	Release();

	D3D11_SAMPLER_DESC smpDesc;

	m_pRenderTargetView = NULL;

		if (!ret)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		if (!reader.Error().empty())

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_VertexCount = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pTextureView = NULL;

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

	vector<Vertex> vertexlist;

{

		if (!reader.Error().empty())



		//User requests quit

int main(int, char**)

		KEY_PRESS_SURFACE_UP,

	}

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_Viewport.TopLeftX = 0;

	dsDesc.Texture2D.MipSlice = 0;



	cbDesc.CPUAccessFlags = 0;

	{

{

	if (FAILED(hr))

		SDL_RenderClear(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	txDesc.MipLevels = 1;



		1,

	if (FAILED(hr))

	if (m_pImmediateContext)

		1,

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pTexture);

		}

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 view;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SDL_FreeSurface(bmp);

	delete[] pIList;

	dsDesc.Format = txDesc.Format;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}

 */

	SAFE_RELEASE(m_pTextureView);



}

		&error,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		SDL_Delay(1000);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{

void CD3DTest::Release()

				break;



			{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		SDL_RenderPresent(ren);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (m_pImmediateContext)

	float    fov = XMConvertToRadians(20.0f);

/*

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DOWN,

	Vertex* pVList = new Vertex[vcount];

	//Create Index

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



int SEGMENT = 36;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





		SDL_RenderClear(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	txDesc.Height = rect.Height();

		&error,





		//User presses a key

	scDesc.OutputWindow = hwnd;

	if (!error.empty())

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





int main(int, char**)



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pTexture);

	m_pSwapChain = NULL;

#define TINYOBJLOADER_IMPLEMENTATION



	m_IndexCount = icount;

			case SDLK_RIGHT:

	//頂点バッファ作成

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	Release();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pPixelShader);

	float    nearZ = 0.1f;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;





	}

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))



	txDesc.Width = rect.Width();

struct ConstantLightBuffer {

	ID3D11Texture2D* pBackBuffer;

	Release();

		exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		SDL_RenderPresent(ren);

	{

	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

{

	m_pDepthStencilTexture = NULL;

		&m_pSwapChain,

		&m_pDevice,



	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				break;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

	m_IndexCount = 0;

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 projection;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_FreeSurface(bmp);

	WORD* pIList = new WORD[icount];

	m_pPixelShader = NULL;

	cbDesc.MiscFlags = 0;

};

		return hr;

	std::string imagePath = "hello.bmp";

	//深度ステンシルバッファ作成

		return hr;

	//Clean up our objects and quit

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.eyePos, eye);

				break;

		}

	SDL_DestroyTexture(tex);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	}

	SDL_DestroyRenderer(ren);

	ibDesc.CPUAccessFlags = 0;



		return 1;

	vector<WORD> indexList;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





	txDesc.Width = rect.Width();

	//インデックスバッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return 1;



	//Key press surfaces constants

	std::vector<tinyobj::shape_t> shapes;



			// Loop over vertices in the face.

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);







		return hr;





	irData.SysMemPitch = 0;

		&materials,



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);



		cout << "SDL_INIT_ERROR" << endl;

	txDesc.CPUAccessFlags = 0;

	txDesc.MiscFlags = 0;

		exit(1);



		delete[] pVList;



	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_UP,

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		else if (e.type == SDL_KEYDOWN)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//定数バッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (int i = 0; i < vcount; i++)

	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyWindow(win);



using std::cout; using std::endl;

			break;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))



	}

		delete[] pIList;

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	float    nearZ = 0.1f;

				break;



	scDesc.BufferDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL level;







	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t tx =



	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderPresent(ren);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		// Loop over faces(polygon)



	{



		}

	cbDesc.CPUAccessFlags = 0;

				// access to vertex

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.MiscFlags = 0;

	std::string error;

		pIList[j] = indexList[j];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

{



		//User presses a key

		m_pImmediateContext->ClearState();



		R"(cube.obj)");

				vertex.push_back(vertex_tmp);

	m_Viewport.MaxDepth = 1.0f;

	m_Angle += XMConvertToRadians(1.0f);

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4X4 view;

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

	m_VertexCount = 0;



	}

	SAFE_RELEASE(m_pVertexBuffer);



			index_offset += num_vertices;

	cbDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	};

	txDesc.Height = rect.Height();

	};

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.Windowed = TRUE;

			exit(1);

	//First we need to start up SDL, and make sure it went ok

	reader_config.mtl_search_path = "./"; // Path to material files

	float    nearZ = 0.1f;

		if (!ret)



	if (FAILED(hr))

		delete[] pIList;

struct ConstantMaterial {

		SDL_RenderClear(ren);

	delete[] pVList;

	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.MaxDepth = 1.0f;

	m_pDepthStencilTexture = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	};

#include "DirectXManager.h"

			case SDLK_UP:

				tinyobj::real_t ty =

}


	m_Angle += XMConvertToRadians(1.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)





		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			{

				// access to vertex

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& materials = reader.GetMaterials();

		return hr;

		}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pVertexShader);



struct ConstantLight {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	tinyobj::attrib_t attrib;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pTexture = NULL;



	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Event e;

	Release();

	XMFLOAT4 specular;          //反射(r,g,b)

}


	}

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

			index_offset += num_vertices;

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO != 0))

CD3DTest::~CD3DTest()



	SAFE_RELEASE(m_pTexture);

	m_Angle += XMConvertToRadians(1.0f);

		&error,

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ID3D11Texture2D* pBackBuffer;

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.SampleDesc.Count = 1;

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		size_t index_offset = 0;  // インデントのオフセット



	SAFE_RELEASE(m_pDevice);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	//vector<Vertex> vertex_t;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext = NULL;

	auto& materials = reader.GetMaterials();



	SAFE_RELEASE(m_pImmediateContext);

{

				WORD index = idx.vertex_index;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantMaterial material; //物体の質感

CD3DTest::~CD3DTest()



	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <iostream>

	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);

	WORD* pIList = new WORD[icount];

			switch (e.key.keysym.sym)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};



			exit(1);

	scDesc.SampleDesc.Quality = 0;

	}

	m_pRenderTargetView = NULL;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_VertexCount = 0;

	cbDesc.StructureByteStride = 0;

	//Create Index

	//頂点レイアウト作成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		KEY_PRESS_SURFACE_UP,

		if (e.type == SDL_QUIT)

	SDL_FreeSurface(suf);

	for (int j = 0; j < icount; j++)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

 * Lesson 1: Hello World!

		delete[] pVList;

	{

			//Select surfaces based on key press

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		KEY_PRESS_SURFACE_UP,

}

	enum KeyPressSurfaces

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_LEFT,

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



CD3DTest::~CD3DTest()

	if (FAILED(hr))



	if (!reader.ParseFromFile(inputfile, reader_config))

	float    nearZ = 0.1f;

		{



	cbDesc.MiscFlags = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	irData.SysMemSlicePitch = 0;

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//vector<WORD> index_t;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

 * Lesson 1: Hello World!

	return hr;

		}

	return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<WORD> index_t;

				WORD index = idx.vertex_index;

CD3DTest::~CD3DTest()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_FreeSurface(suf);

	scDesc.Windowed = TRUE;

}
	m_pSwapChain->Present(0, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::vector<tinyobj::material_t> materials;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ConstantLight    pntLight; //点光源

	{



	}

			default:

CD3DTest::~CD3DTest()

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pDepthStencilView = NULL;

	txDesc.MiscFlags = 0;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//ピクセルシェーダー生成

		pLevels,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	}

	dsDesc.Format = txDesc.Format;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	ibDesc.StructureByteStride = 0;

	m_pDevice = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pDepthStencilView);

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}



			case SDLK_LEFT:

	for (int j = 0; j < icount; j++)

	SDL_DestroyWindow(win);



};

		{



	m_pLightBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

	};

	XMFLOAT4X4 world;

	{

		&m_pSwapChain,





	auto& materials = reader.GetMaterials();



	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	for (int j = 0; j < icount; j++)

	//Clean up our objects and quit



	ConstantMaterial material; //物体の質感

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//定数バッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain->Present(0, 0);

	//Key press surfaces constants

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

	::GetClientRect(hwnd, &rect);

	txDesc.CPUAccessFlags = 0;

			}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//頂点バッファ作成

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.Width = rect.Width();

			exit(1);

	WORD   icount = indexList.size();

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	UINT offsets = 0;

	::GetClientRect(hwnd, &rect);

		&materials,

	//vector<WORD> index_t;

	{

	std::string inputfile = "test.obj";

{

	std::string inputfile = "test.obj";

			}



	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pDepthStencilView);

		m_pImmediateContext->ClearState();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		}

	for (const auto& shape : shapes)

	{

	m_Viewport.Width = (FLOAT)rect.Width();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (m_pImmediateContext)

		size_t index_offset = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				// access to vertex

	vbDesc.MiscFlags = 0;

}
	if (FAILED(hr))

	m_pLightBuffer = NULL;

	SDL_DestroyWindow(win);





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	enum KeyPressSurfaces

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	txDesc.MipLevels = 1;

	vector<WORD> indexList;

	}





	int     vcount = vertexlist.size();

	ConstantMaterial material; //物体の質感

	//頂点シェーダー生成

	{

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	std::string error;

	m_pTextureView = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



}

	if (m_pImmediateContext)

	//深度ステンシルバッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4(&clb.ambient, lightAmbient);



			{

	vector<Vertex> vertexlist;



	cbDesc.StructureByteStride = 0;

	m_pDevice = NULL;

		{

	{

		&m_pImmediateContext);

	if (FAILED(hr))

	std::string inputfile = "test.obj";

	XMFLOAT4X4 world;



	int     vcount = vertexlist.size();

	m_Angle += XMConvertToRadians(1.0f);

		&materials,

	dsDesc.Format = txDesc.Format;



	m_pMatrixBuffer = NULL;

	cbDesc.CPUAccessFlags = 0;

	::GetClientRect(hwnd, &rect);

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		{



}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	m_IndexCount = 0;



	if (FAILED(hr))





	{

	SAFE_RELEASE(m_pTexture);



		}

#endif

	UINT offsets = 0;

				tinyobj::real_t ty =

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SAFE_RELEASE(m_pMatrixBuffer);

	auto& shapes = reader.GetShapes();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.MiscFlags = 0;

	}



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	/*

		flags,

	// Loop over shapes

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	SAFE_RELEASE(m_pDevice);

struct ConstantLight {

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pRenderTargetView = NULL;

		return hr;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		cout << "SDL_INIT_ERROR" << endl;



};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

}



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& materials = reader.GetMaterials();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	if (!reader.Warning().empty())

	for (int i = 0; i < 3; i++)

		SDL_RenderClear(ren);

}

	}

	if (FAILED(hr))

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

	// Loop over shapes

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		{

	//深度ステンシルバッファ作成

			exit(1);





	m_pPixelShader = NULL;



	tinyobj::attrib_t attrib;

		//User presses a key

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

		{







	vrData.SysMemSlicePitch = 0;

	}



		NULL,



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4 pos;               //座標(x,y,z)

	return;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			}

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	}

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pVertexShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderPresent(ren);



	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.eyePos, eye);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

				break;

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pSwapChain);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		// Loop over faces(polygon)

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	UINT offsets = 0;



	float    nearZ = 0.1f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.Format = txDesc.Format;





#define TINYOBJLOADER_IMPLEMENTATION



	int     vcount = vertexlist.size();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//ビューポート設定

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pDepthStencilTexture);



			}

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



			}

 */

	D3D11_TEXTURE2D_DESC txDesc;



	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	SAFE_RELEASE(m_pIndexBuffer);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



{

	XMFLOAT4X4 projection;

		&m_pDevice,

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_Viewport.MinDepth = 0.0f;

	//頂点シェーダー生成

	//Clean up our objects and quit



			}

		return hr;



		return hr;

	tinyobj::ObjReaderConfig reader_config;

}

		}

	{

		if (!ret)

			}

#ifdef _DEBUG

	Vertex* pVList = new Vertex[vcount];

{

		return hr;

};

		&m_pDevice,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}



	}

	return hr;

		delete[] pIList;

struct ConstantMatrixBuffer {



		&level,

	float    nearZ = 0.1f;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int j = 0; j < icount; j++)

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

	m_pMatrixBuffer = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	tinyobj::ObjReaderConfig reader_config;

#include <iostream>





	cbDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	//Key press surfaces constants





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	m_pSwapChain->Present(0, 0);

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.SampleDesc.Count = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MiscFlags = 0;

		&m_pImmediateContext);

		{

		SDL_RenderClear(ren);

	cbDesc.StructureByteStride = 0;

	//ピクセルシェーダー生成

		if (!ret)

using std::cout; using std::endl;

	}

		pVList[i] = vertexlist[i];

	scDesc.Windowed = TRUE;

	ConstantLightBuffer clb;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vector<WORD> indexList;

				// access to vertex

	return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	std::string error;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			default:





		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	SAFE_RELEASE(m_pDepthStencilTexture);



	dsDesc.Texture2D.MipSlice = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	std::vector<tinyobj::shape_t> shapes;

			for (size_t v = 0; v < num_vertices; v++)

	m_pVertexShader = NULL;

		D3D11_SDK_VERSION,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pSampler);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	float    farZ = 100.0f;

		SDL_RenderClear(ren);

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.MinDepth = 0.0f;

	if (!reader.Warning().empty())



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	Release();

	m_pLightBuffer = NULL;

	return 0;

				WORD index = idx.vertex_index;

#ifdef _DEBUG

	cbDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

		if (!reader.Error().empty())

	txDesc.MiscFlags = 0;

	//Create Index

	Vertex* pVList = new Vertex[vcount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	for (const auto& shape : shapes)

			{

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pPixelShader = NULL;



		SDL_RenderPresent(ren);

		SDL_RenderPresent(ren);

		&scDesc,

};

{

			exit(1);

	irData.pSysMem = &pIList[0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.MiscFlags = 0;





struct ConstantMaterial {

	}

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Quit();

	D3D11_TEXTURE2D_DESC txDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	txDesc.SampleDesc.Quality = 0;

		return 1;

}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	cbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//定数バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&scDesc,



			break;

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	bool ret = tinyobj::LoadObj(

		else if (e.type == SDL_KEYDOWN)

		return hr;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))





	SAFE_RELEASE(m_pTextureView);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#ifdef _DEBUG

#endif

	//vector<Vertex> vertex_t;

	SDL_DestroyWindow(win);



		pLevels,

};



	if (FAILED(hr))



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

		&attrib,

	pBackBuffer->Release();

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

 * Lesson 1: Hello World!

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.MiscFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_DestroyRenderer(ren);

	txDesc.MiscFlags = 0;

	}

		KEY_PRESS_SURFACE_LEFT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		D3D_DRIVER_TYPE_HARDWARE,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pVertexBuffer);

	vrData.SysMemSlicePitch = 0;

		size_t index_offset = 0;  // インデントのオフセット



	float    farZ = 100.0f;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	vrData.SysMemSlicePitch = 0;

	std::string imagePath = "hello.bmp";



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.CPUAccessFlags = 0;

	m_pDevice = NULL;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		flags,

	UINT offsets = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_pPixelShader = NULL;

	float    fov = XMConvertToRadians(20.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyRenderer(ren);

#endif

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pRenderTargetView = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	m_pSwapChain = NULL;

	if (!reader.Warning().empty())

		//User requests quit

		NULL,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.MipLevels = 1;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		if (!reader.Error().empty())

#include "DirectXManager.h"

	m_pInputLayout = NULL;

}

	XMFLOAT4X4 view;

 */



	{





	txDesc.Height = rect.Height();

				break;

		m_pImmediateContext->ClearState();

		//User presses a key

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				break;

	SDL_Quit();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	//Key press surfaces constants

	}

			break;

	SDL_Quit();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&shapes,

	txDesc.ArraySize = 1;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	ConstantLightBuffer clb;

	float    farZ = 100.0f;

	tinyobj::ObjReader reader;

		pLevels,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		return hr;

	txDesc.SampleDesc.Count = 1;

	Vertex* pVList = new Vertex[vcount];

struct ConstantMaterial {

	m_pDepthStencilView = NULL;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

int main(int, char**)

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	return 0;



		D3D11_SDK_VERSION,

	{

struct ConstantMaterial {

	tinyobj::attrib_t attrib;

	WORD   icount = indexList.size();

		//User presses a key

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

				break;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSwapChain = NULL;





	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	WORD* pIList = new WORD[icount];





	//Clean up our objects and quit

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

CD3DTest::CD3DTest()

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		// Loop over faces(polygon)

				tinyobj::real_t tx =

	//頂点バッファ作成

	LoadObj(vertexlist, indexList);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.MiscFlags = 0;

	return 0;

	float    farZ = 100.0f;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Event e;

		cout << "SDL_INIT_ERROR" << endl;



	SDL_DestroyWindow(win);

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pDevice);



	return 0;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_UP,

		return hr;

	}

		&shapes,



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		NULL,



	Release();



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	auto& shapes = reader.GetShapes();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.StructureByteStride = 0;

	float    farZ = 100.0f;

	txDesc.MiscFlags = 0;

				indexlist.push_back(index);

	XMFLOAT4X4 view;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_VertexCount = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	std::string error;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

};

	}

 */

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		else if (e.type == SDL_KEYDOWN)

 * Lesson 1: Hello World!

	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_DOWN,

	vrData.SysMemSlicePitch = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			index_offset += num_vertices;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

	}

			//Select surfaces based on key press

			case SDLK_DOWN:

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (!reader.Warning().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}



	SAFE_RELEASE(m_pTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC ibDesc;

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

	m_pDepthStencilView = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	vbDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		// Loop over faces(polygon)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		flags,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			}



{

	D3D11_BUFFER_DESC cbDesc;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext = NULL;

			case SDLK_UP:

		{

struct ConstantLight {







	ibDesc.MiscFlags = 0;

	m_Viewport.TopLeftY = 0;





	if (FAILED(hr))

	m_pSampler = NULL;

		KEY_PRESS_SURFACE_DOWN,





#endif

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			}

	D3D11_SUBRESOURCE_DATA vrData;

	{

	vbDesc.StructureByteStride = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	}

	txDesc.MiscFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

				vertex.push_back(vertex_tmp);

		return hr;

		return 1;

		SDL_RenderPresent(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		// Loop over faces(polygon)

	m_pVertexShader = NULL;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	}

};

		return hr;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	UINT strides = sizeof(Vertex);

{

{

#ifdef _DEBUG

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



HRESULT CD3DTest::Create(HWND hwnd)

 */

{





	SAFE_RELEASE(m_pTexture);

	scDesc.OutputWindow = hwnd;



	for (int i = 0; i < 3; i++)



	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





{

			}

		KEY_PRESS_SURFACE_DEFAULT,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	auto& shapes = reader.GetShapes();



		return hr;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pSampler);

		return hr;

			case SDLK_RIGHT:

int main(int, char**)

	m_pVertexShader = NULL;

	std::vector<tinyobj::shape_t> shapes;

	//インデックスバッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;



	HRESULT              hr;

	for (int j = 0; j < icount; j++)

 * Lesson 1: Hello World!

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				// access to vertex

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	if (FAILED(hr))

			{



CD3DTest::CD3DTest()

		size_t index_offset = 0;

		return hr;



	txDesc.Width = rect.Width();

			for (size_t v = 0; v < num_vertices; v++)

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	txDesc.MiscFlags = 0;

	m_IndexCount = 0;

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);



	}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			// Loop over vertices in the face.

	if (!reader.ParseFromFile(inputfile, reader_config))

	WORD   icount = indexList.size();

CD3DTest::CD3DTest()

			index_offset += fv;

	//定数バッファ作成

	//頂点シェーダー生成

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSampler = NULL;

			for (size_t v = 0; v < fv; v++)

	}

	ibDesc.MiscFlags = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.StructureByteStride = 0;

	m_pTexture = NULL;

	//Key press surfaces constants





{

	vbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;



	SAFE_RELEASE(m_pVertexBuffer);

	{

HRESULT CD3DTest::Create(HWND hwnd)

		m_pImmediateContext->ClearState();

			exit(1);



				// access to vertex

			//Select surfaces based on key press

		&materials,

	}

	m_IndexCount = icount;



	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Quit();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Clean up our objects and quit

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			// Loop over vertices in the face.

				// access to vertex

	m_VertexCount = 0;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pIndexBuffer = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	//頂点レイアウト作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		if (!ret)

		if (!ret)

				tinyobj::real_t ty =

		1,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		pIList[j] = indexList[j];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilTexture = NULL;

	if (m_pImmediateContext)

	m_pSwapChain = NULL;

	D3D11_BUFFER_DESC cbDesc;



	UINT strides = sizeof(Vertex);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);


