	XMFLOAT4X4 world;

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return 1;

	return 0;

	m_pRenderTargetView = NULL;



	txDesc.Width = rect.Width();

	XMFLOAT4         eyePos;   //視点座標

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	ConstantLightBuffer clb;

	SDL_DestroyRenderer(ren);

}

	m_Viewport.TopLeftX = 0;

	SDL_Quit();

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//定数バッファ作成



	m_pInputLayout = NULL;

struct ConstantMatrixBuffer {

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 ambient;           //環境(r,g,b)

		}

	//ピクセルシェーダー生成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC ibDesc;

	dsDesc.Texture2D.MipSlice = 0;

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

#include "DirectXManager.h"

		&level,

	//Create Index

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	delete[] pIList;

		SDL_RenderClear(ren);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		1,

	{

				indexlist.push_back(index);

	ConstantLightBuffer clb;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;





		return 1;

#ifdef _DEBUG

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	for (int i = 0; i < vcount; i++)

	}*/

	{

		return hr;

			case SDLK_RIGHT:

	}

	txDesc.Height = rect.Height();

	//First we need to start up SDL, and make sure it went ok

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



};

	auto& shapes = reader.GetShapes();

	D3D11_SAMPLER_DESC smpDesc;



	{

	auto& shapes = reader.GetShapes();

	ID3D11Texture2D* pBackBuffer;

#define TINYOBJLOADER_IMPLEMENTATION



}

}
	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pVertexShader = NULL;

	return 0;

	{

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

		D3D_DRIVER_TYPE_HARDWARE,





	XMFLOAT4         ambient;  //環境光(r,g,b)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	bool ret = tinyobj::LoadObj(

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	WORD* pIList = new WORD[icount];

	for (int j = 0; j < icount; j++)



	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		if (!ret)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	irData.pSysMem = &pIList[0];

	LoadObj(vertexlist, indexList);

	if (!reader.Warning().empty())

	{



	SDL_DestroyWindow(win);

	tinyobj::ObjReaderConfig reader_config;

	m_VertexCount = vcount;



	}

		{

	}

	SAFE_RELEASE(m_pRenderTargetView);

		return 1;

	SAFE_RELEASE(m_pLightBuffer);

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pVertexShader = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pIndexBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	return hr;

	vbDesc.CPUAccessFlags = 0;

int SEGMENT = 36;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderPresent(ren);

		size_t index_offset = 0;

	tinyobj::attrib_t attrib;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//頂点バッファ作成

HRESULT CD3DTest::Create(HWND hwnd)

	::GetClientRect(hwnd, &rect);

	SDL_DestroyRenderer(ren);

	//テクスチャ読み込み

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	txDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				// access to vertex

			case SDLK_RIGHT:

		SDL_RenderPresent(ren);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





		return 1;

	{

	//インデックスバッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

	auto& shapes = reader.GetShapes();

	//頂点レイアウト作成

}

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftX = 0;

	pBackBuffer->Release();

	};

	if (FAILED(hr))

	{



	m_pRenderTargetView = NULL;



	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

	vrData.SysMemSlicePitch = 0;

	{

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点バッファ作成

		//User requests quit

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pLightBuffer);



	tinyobj::ObjReaderConfig reader_config;

};

		return hr;

	txDesc.ArraySize = 1;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pMatrixBuffer = NULL;

	SDL_Quit();

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	irData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderClear(ren);

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

HRESULT CD3DTest::Create(HWND hwnd)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_VertexCount = 0;

{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

				break;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

	//Clean up our objects and quit





	txDesc.Width = rect.Width();

{

	if (FAILED(hr))

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	// Loop over shapes

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	auto& materials = reader.GetMaterials();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

		pLevels,

		return hr;

int SEGMENT = 36;

CD3DTest::CD3DTest()

	auto& materials = reader.GetMaterials();

}

		return 1;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	return 0;

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (m_pImmediateContext)

	vector<WORD> indexList;

	//インデックスバッファ作成

struct ConstantMatrixBuffer {

struct ConstantLight {

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//定数バッファ作成

		KEY_PRESS_SURFACE_TOTAL

		return hr;







	int     vcount = vertexlist.size();

	cbDesc.CPUAccessFlags = 0;



	txDesc.SampleDesc.Count = 1;



		&level,

int main(int, char**)

#include <SDL.h>

	scDesc.SampleDesc.Count = 1;

{

	XMStoreFloat4(&clb.eyePos, eye);

	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.StructureByteStride = 0;



	m_pIndexBuffer = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	txDesc.Width = rect.Width();

	scDesc.SampleDesc.Count = 1;



	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t tx =

	m_pTexture = NULL;

	txDesc.MiscFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.TopLeftX = 0;

	{

	}





	int     vcount = vertexlist.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ibDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 pos;               //座標(x,y,z)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    farZ = 100.0f;

		cout << "SDL_INIT_ERROR" << endl;



	D3D11_BUFFER_DESC cbDesc;

};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pVertexShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t ty =

	m_pMatrixBuffer = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Quit();

}
	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	::GetClientRect(hwnd, &rect);





	for (int j = 0; j < icount; j++)

	//ピクセルシェーダー生成

			{

struct ConstantMatrixBuffer {

		return hr;

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;





	return 0;

		if (!ret)

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

			exit(1);

	cbDesc.MiscFlags = 0;







		}

	auto& attrib = reader.GetAttrib();

	m_pMatrixBuffer = NULL;

		&shapes,

		return hr;

		return 1;

		SDL_RenderPresent(ren);

	m_Angle += XMConvertToRadians(1.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	SAFE_RELEASE(m_pTexture);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;

	m_pSwapChain->Present(0, 0);

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pSwapChain,

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

{

	ibDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		KEY_PRESS_SURFACE_LEFT,

		KEY_PRESS_SURFACE_DEFAULT,





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pSwapChain,

	{



	D3D_FEATURE_LEVEL level;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		{

	UINT offsets = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.SampleDesc.Count = 1;



	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				indexlist.push_back(idx.vertex_index);

	{

	m_pVertexBuffer = NULL;

#ifdef _DEBUG

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{

				tinyobj::real_t tx =



		pLevels,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_LEFT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_IndexCount = icount;



	SAFE_RELEASE(m_pTexture);

	m_IndexCount = 0;

			switch (e.key.keysym.sym)



void CD3DTest::Render()

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





				tinyobj::real_t tx =

#include <iostream>

		&level,

	bool ret = tinyobj::LoadObj(

	}

{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string imagePath = "hello.bmp";

#include "DirectXManager.h"

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	vbDesc.MiscFlags = 0;



			// Loop over vertices in the face.

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//テクスチャ読み込み

	irData.SysMemSlicePitch = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

			}

	txDesc.ArraySize = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Event e;



	SDL_Quit();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DOWN,

	}

		&m_pSwapChain,

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;

		&m_pImmediateContext);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#include <SDL.h>

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.StructureByteStride = 0;

#endif

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};

		return hr;

			case SDLK_LEFT:

		&m_pDevice,

	SAFE_RELEASE(m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

CD3DTest::CD3DTest()

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	if (FAILED(hr))

	m_pSwapChain = NULL;

	for (int j = 0; j < icount; j++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				// access to vertex

	CRect                rect;

#ifdef _DEBUG

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	cbDesc.StructureByteStride = 0;

	ConstantMatrixBuffer cmb;



		SDL_RenderCopy(ren, tex, NULL, NULL);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	::GetClientRect(hwnd, &rect);

	m_VertexCount = 0;

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);



{

		return hr;

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.StructureByteStride = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	// Loop over shapes



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

struct ConstantMaterial {

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		m_pImmediateContext->ClearState();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			index_offset += num_vertices;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	SAFE_RELEASE(m_pSwapChain);

	UINT flags = 0;

	//テクスチャ読み込み

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;

	vrData.SysMemPitch = 0;

	if (FAILED(hr))

	m_pInputLayout = NULL;



{



				tinyobj::real_t ty =

	SDL_Event e;

		return hr;

		delete[] pVList;

	XMFLOAT4X4 world;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	LoadObj(vertexlist, indexList);



	tinyobj::ObjReaderConfig reader_config;

}



	Vertex* pVList = new Vertex[vcount];

	ibDesc.CPUAccessFlags = 0;

	m_pTexture = NULL;

		}



		SDL_RenderCopy(ren, tex, NULL, NULL);



	SDL_DestroyWindow(win);





CD3DTest::~CD3DTest()

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pVertexBuffer);

	}

	D3D11_BUFFER_DESC ibDesc;

				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_IndexCount = 0;

		return hr;

				// access to vertex

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	SAFE_RELEASE(m_pIndexBuffer);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pLightBuffer);

	Release();

		&m_pDevice,



		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



#include <iostream>

	txDesc.MiscFlags = 0;

	txDesc.Height = rect.Height();

	int     vcount = vertexlist.size();

	SDL_DestroyWindow(win);

	//Create Index

			case SDLK_RIGHT:

	txDesc.CPUAccessFlags = 0;





	//First we need to start up SDL, and make sure it went ok

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.MinDepth = 0.0f;

	for (int j = 0; j < icount; j++)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string error;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_Viewport.TopLeftX = 0;

	m_Viewport.TopLeftY = 0;

		//User presses a key

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.pSysMem = &pIList[0];

	m_IndexCount = 0;

};

	SDL_DestroyTexture(tex);

	SDL_DestroyWindow(win);

	{



	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::ObjReader reader;

	txDesc.CPUAccessFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ConstantLight    pntLight; //点光源

	m_pImmediateContext = NULL;

	txDesc.Height = rect.Height();

				break;



		if (!ret)

}

			{



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pPixelShader = NULL;

			}

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//Clean up our objects and quit

	m_Viewport.Height = (FLOAT)rect.Height();



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//テクスチャ読み込み

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	::GetClientRect(hwnd, &rect);

		}

				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_UP,

	{

#endif

		}

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	irData.SysMemPitch = 0;

	SDL_DestroyTexture(tex);

	SDL_DestroyWindow(win);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		pLevels,

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4X4 world;

	WORD   icount = indexList.size();



		{

				tinyobj::real_t tx =



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	::GetClientRect(hwnd, &rect);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		exit(1);

	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.BufferDesc.Width = rect.Width();



	SDL_Quit();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4X4 world;

		m_pImmediateContext->ClearState();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vrData.SysMemSlicePitch = 0;

	float    farZ = 100.0f;

	/*



	cbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_UP,



	vrData.pSysMem = &pVList[0];

		{

	return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	SAFE_RELEASE(m_pIndexBuffer);

	{

	m_Viewport.MinDepth = 0.0f;



	std::vector<tinyobj::shape_t> shapes;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b)

	ibDesc.StructureByteStride = 0;

		D3D_DRIVER_TYPE_HARDWARE,

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pSwapChain);

	{

		exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_FreeSurface(suf);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyTexture(tex);





	SAFE_RELEASE(m_pMatrixBuffer);



	XMFLOAT4 ambient;           //環境(r,g,b)



	m_VertexCount = vcount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			for (size_t v = 0; v < fv; v++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

		return hr;

				break;

	dsDesc.Format = txDesc.Format;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_TOTAL



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	for (int i = 0; i < 3; i++)

		pIList[j] = indexList[j];

	HRESULT              hr;

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;

	txDesc.Width = rect.Width();

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SAFE_RELEASE(m_pVertexShader);

	D3D11_SAMPLER_DESC smpDesc;

};

		SDL_RenderPresent(ren);





	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))



	txDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	auto& shapes = reader.GetShapes();

	}

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += num_vertices;

	return hr;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	LoadObj(vertexlist, indexList);

	//ビューポート設定



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	std::string imagePath = "hello.bmp";

	//ピクセルシェーダー生成

	LoadObj(vertexlist, indexList);

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.SampleDesc.Quality = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

#include <SDL.h>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		}



	m_pVertexBuffer = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pSampler = NULL;

	Release();

	txDesc.Height = rect.Height();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantLight    pntLight; //点光源

	ConstantMaterial material; //物体の質感

	scDesc.SampleDesc.Count = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//vector<Vertex> vertex_t;

}

#endif

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4X4 world;



	if (FAILED(hr))



	std::string inputfile = "test.obj";

	//First we need to start up SDL, and make sure it went ok



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//ピクセルシェーダー生成

	float    farZ = 100.0f;





	return 0;

	{



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			int num_vertices = shape.mesh.num_face_vertices[f];

	vbDesc.StructureByteStride = 0;





	D3D11_BUFFER_DESC ibDesc;



		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderPresent(ren);



	std::vector<tinyobj::material_t> materials;

	}

	m_pRenderTargetView = NULL;

};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pDepthStencilView);

}

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

				break;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))



	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

				tinyobj::real_t tx =

	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_UP,



{

	m_VertexCount = 0;

CD3DTest::CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderPresent(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	m_pVertexShader = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.Width = rect.Width();



	m_pSwapChain = NULL;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.MiscFlags = 0;

};



	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

};

	SAFE_RELEASE(m_pDevice);



	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDepthStencilTexture = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

	{

		&level,

	XMFLOAT4         ambient;  //環境光(r,g,b)





	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderClear(ren);



	std::vector<tinyobj::material_t> materials;

		//User presses a key

	D3D11_BUFFER_DESC ibDesc;

	HRESULT              hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4X4 view;

	if (!reader.Warning().empty())

	ID3D11Texture2D* pBackBuffer;

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Count = 1;

{

		KEY_PRESS_SURFACE_UP,

		&attrib,

			}

	m_IndexCount = 0;



		if (e.type == SDL_QUIT)

	cbDesc.CPUAccessFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.Texture2D.MipSlice = 0;

	std::string imagePath = "hello.bmp";

{

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pDepthStencilView = NULL;



	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pImmediateContext = NULL;

{

struct ConstantLight {

	txDesc.MipLevels = 1;

		// Loop over faces(polygon)

			case SDLK_DOWN:

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))









	if (!reader.ParseFromFile(inputfile, reader_config))

		{

	return;

	}

	if (m_pImmediateContext)

			}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				indexlist.push_back(index);

		return hr;

	m_pIndexBuffer = NULL;

#include <iostream>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_IndexCount = 0;

	m_Viewport.MaxDepth = 1.0f;

	m_pDepthStencilTexture = NULL;

			break;

};



		&m_pSwapChain,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





int SEGMENT = 36;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

	m_pPixelShader = NULL;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pDepthStencilView);

	}*/

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

struct ConstantMaterial {

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexBuffer);

	{



		if (!reader.Error().empty())

	m_Viewport.Width = (FLOAT)rect.Width();

		{





	ConstantMaterial material; //物体の質感

		flags,

	D3D11_BUFFER_DESC cbDesc;

		{





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<Vertex> vertex_t;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	return 0;

	//定数バッファ作成



	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pDevice);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	for (int i = 0; i < vcount; i++)





	XMFLOAT4 specular;          //反射(r,g,b)

	return 0;

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//Vertex* pVList = new Vertex[vcount];

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pPixelShader);

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	float    nearZ = 0.1f;



		exit(1);

				break;

	//Create Index

#ifdef _DEBUG



	std::string error;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pVertexShader = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pSampler);

	m_pRenderTargetView = NULL;



	irData.SysMemPitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

		exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#endif

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

	XMFLOAT4 specular;          //反射(r,g,b)



	//インデックスバッファ作成



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	enum KeyPressSurfaces





	SAFE_RELEASE(m_pMatrixBuffer);

		if (!ret)

	//Create Index

		return hr;

		}



		}



	{

#include <SDL.h>

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				vertex.push_back(vertex_tmp);

				tinyobj::real_t tx =

	::ZeroMemory(&scDesc, sizeof(scDesc));

		1,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//ビューポート設定

			}

		pLevels,

	ConstantLight    pntLight; //点光源

	XMStoreFloat4(&clb.eyePos, eye);

		&m_pDevice,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ibDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pLightBuffer);

	int     vcount = vertexlist.size();

	irData.SysMemPitch = 0;

#include <SDL.h>



	}

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//vector<Vertex> vertex_t;

	ConstantMaterial material; //物体の質感

	return 0;

int main(int, char**)

			case SDLK_DOWN:

		return hr;





				tinyobj::real_t tx =

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	// Loop over shapes

int main(int, char**)

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	cbDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&txDesc, sizeof(txDesc));



		return hr;

{

};

	scDesc.OutputWindow = hwnd;

	::GetClientRect(hwnd, &rect);

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);

	for (size_t s = 0; s < shapes.size(); s++)

			exit(1);

		1,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string error;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			break;

		SDL_Delay(1000);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

	//vector<WORD> index_t;

}
	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#ifdef _DEBUG

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		if (!reader.Error().empty())



		{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pTextureView = NULL;



	m_pDepthStencilView = NULL;

		pLevels,

	m_pRenderTargetView = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Quit();

	//Vertex* pVList = new Vertex[vcount];

		{

		return hr;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext = NULL;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



			exit(1);





		&m_pSwapChain,



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





			default:



			}



		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{

	UINT strides = sizeof(Vertex);

			{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return 1;

				// access to vertex

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return 0;





	XMFLOAT4 ambient;           //環境(r,g,b)

				// access to vertex



		return hr;

 */

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



{

	{

		{

	}

	vrData.SysMemPitch = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		{





		NULL,

				indexlist.push_back(idx.vertex_index);

	}

				vertex.push_back(vertex_tmp);

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

		flags,



		&m_pDevice,

		SDL_RenderClear(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	}

	{

				tinyobj::real_t tx =

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//vector<WORD> index_t;

			{

	vector<Vertex> vertexlist;

	m_pInputLayout = NULL;

	vbDesc.StructureByteStride = 0;



		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		D3D_DRIVER_TYPE_HARDWARE,

	}



};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	// Loop over shapes





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_Delay(1000);

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	SDL_DestroyRenderer(ren);

#include <iostream>

	return 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyWindow(win);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	D3D_FEATURE_LEVEL level;

	vrData.pSysMem = &pVList[0];

 */



		&materials,

			case SDLK_RIGHT:

	ConstantMatrixBuffer cmb;

		{

		KEY_PRESS_SURFACE_LEFT,

	//Clean up our objects and quit

	tinyobj::attrib_t attrib;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pVertexShader);

	m_IndexCount = icount;

			for (size_t v = 0; v < fv; v++)

	ConstantLight    pntLight; //点光源

	std::vector<tinyobj::shape_t> shapes;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	Release();

	std::string error;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		flags,

				tinyobj::real_t ty =

	std::vector<tinyobj::material_t> materials;

	m_IndexCount = 0;

		return hr;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <iostream>

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点シェーダー生成

				vertex.push_back(vertex_tmp);

	LoadObj(vertexlist, indexList);





		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_LEFT:

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pIndexBuffer = NULL;



		}

			exit(1);

		if (!ret)



	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	scDesc.BufferDesc.Width = rect.Width();

	float    fov = XMConvertToRadians(20.0f);



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

CD3DTest::CD3DTest()

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ConstantLight    pntLight; //点光源

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

			{







	SDL_DestroyWindow(win);

}
		SDL_Delay(1000);

};

	//vector<Vertex> vertex_t;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

int SEGMENT = 36;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			default:

};

	}

		delete[] pVList;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;



	SDL_Quit();

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	}*/

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_DestroyWindow(win);







	}

}



#ifdef _DEBUG

	UINT strides = sizeof(Vertex);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);



	cbDesc.StructureByteStride = 0;

	}

	//ピクセルシェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void CD3DTest::Render()



				vertex.push_back(vertex_tmp);

	{

				vertex.push_back(vertex_tmp);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			break;

	cbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pRenderTargetView = NULL;

	std::string error;

	{

	{

	Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)



	if (FAILED(hr))

	m_pLightBuffer = NULL;

	UINT flags = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

};



	m_VertexCount = vcount;

int main(int, char**)



		return 1;

	irData.pSysMem = &pIList[0];

	D3D11_TEXTURE2D_DESC txDesc;



		KEY_PRESS_SURFACE_RIGHT,



	for (int i = 0; i < vcount; i++)

	vrData.pSysMem = &pVList[0];



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_FreeSurface(suf);

	if (m_pImmediateContext)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantMaterial {

#include <SDL.h>

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pRenderTargetView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

		SDL_RenderPresent(ren);



		}

{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	delete[] pVList;

	return 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		{



	//Clean up our objects and quit

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//Vertex* pVList = new Vertex[vcount];



	D3D11_SUBRESOURCE_DATA irData;

	m_Viewport.MinDepth = 0.0f;

	}

	//テクスチャ読み込み

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ConstantLight    pntLight; //点光源

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.eyePos, eye);

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

}

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);



		KEY_PRESS_SURFACE_UP,

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			for (size_t v = 0; v < num_vertices; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		pLevels,



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDevice);

	m_pVertexShader = NULL;

		if (!reader.Error().empty())



		R"(cube.obj)");

		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_Delay(1000);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				WORD index = idx.vertex_index;

	SDL_Event e;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	delete[] pIList;

	//First we need to start up SDL, and make sure it went ok

	scDesc.SampleDesc.Quality = 0;

using std::cout; using std::endl;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int j = 0; j < icount; j++)



	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pTextureView = NULL;



	}



				// access to vertex

	LoadObj(vertexlist, indexList);

	::GetClientRect(hwnd, &rect);

	}

	m_pIndexBuffer = NULL;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	}



struct ConstantMatrixBuffer {

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 pos;               //座標(x,y,z)

};

		NULL,

	irData.pSysMem = &pIList[0];

			{



	D3D11_SUBRESOURCE_DATA irData;



	if (!reader.Warning().empty())

	//First we need to start up SDL, and make sure it went ok

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

};

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	std::string imagePath = "hello.bmp";



	if (FAILED(hr))

	}

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderClear(ren);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

		&attrib,

	m_pTexture = NULL;

	auto& attrib = reader.GetAttrib();

		{

	for (int i = 0; i < 3; i++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





	float    fov = XMConvertToRadians(20.0f);

		1,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	ibDesc.MiscFlags = 0;

	m_pLightBuffer = NULL;

	txDesc.SampleDesc.Count = 1;

	//Vertex* pVList = new Vertex[vcount];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	float    fov = XMConvertToRadians(20.0f);



	SAFE_RELEASE(m_pRenderTargetView);

	HRESULT              hr;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pSampler);

	auto& materials = reader.GetMaterials();

	//Create Index

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.ArraySize = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



{

	if (FAILED(hr))



#define TINYOBJLOADER_USE_MAPBOX_EARCUT







	vbDesc.CPUAccessFlags = 0;

}

	dsDesc.Format = txDesc.Format;



		}

 */



	txDesc.SampleDesc.Quality = 0;

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

	while (SDL_PollEvent(&e) != 0)

int main(int, char**)

		delete[] pIList;

	txDesc.MiscFlags = 0;

	SDL_FreeSurface(suf);

	D3D11_BUFFER_DESC ibDesc;

	auto& shapes = reader.GetShapes();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))



	/*

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SAFE_RELEASE(m_pInputLayout);

	return;

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



struct ConstantMatrixBuffer {

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//Create Index



				break;

		SDL_Delay(1000);





	Release();

		//User requests quit

	//深度ステンシルバッファ作成

};

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	irData.SysMemSlicePitch = 0;

				vertex.push_back(vertex_tmp);

	m_Viewport.MaxDepth = 1.0f;

CD3DTest::CD3DTest()

	LoadObj(vertexlist, indexList);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();



		{

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	m_Viewport.TopLeftY = 0;

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

struct ConstantLight {

	//ビューポート設定

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 pos;               //座標(x,y,z)

	::GetClientRect(hwnd, &rect);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	CRect                rect;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//First we need to start up SDL, and make sure it went ok

	/*



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//インデックスバッファ作成

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (m_pImmediateContext)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 pos;               //座標(x,y,z)

	// Loop over shapes

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

 */

		SDL_RenderClear(ren);

	return;

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);



int main(int, char**)

	SDL_DestroyTexture(tex);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyRenderer(ren);



int main(int, char**)

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pDevice,

	m_VertexCount = vcount;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		else if (e.type == SDL_KEYDOWN)

		return hr;

		return hr;

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	//深度ステンシルバッファ作成



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		SDL_RenderPresent(ren);

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 pos;               //座標(x,y,z)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

		&m_pSwapChain,

		NULL,

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	return hr;

	m_Viewport.TopLeftX = 0;

	m_pTextureView = NULL;



	XMFLOAT4X4 view;

			// Loop over vertices in the face.

				break;

		return hr;

	WORD* pIList = new WORD[icount];

};

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//First we need to start up SDL, and make sure it went ok



		{



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	ConstantMatrixBuffer cmb;

			case SDLK_DOWN:

	m_pSwapChain->Present(0, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	{

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			case SDLK_DOWN:

		&error,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

{

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	scDesc.BufferDesc.Width = rect.Width();

	m_pVertexShader = NULL;

			case SDLK_DOWN:

	std::string error;

	ibDesc.StructureByteStride = 0;

			{

void CD3DTest::Release()

	}

		KEY_PRESS_SURFACE_RIGHT,

	float    fov = XMConvertToRadians(20.0f);

	std::string imagePath = "hello.bmp";

	for (const auto& shape : shapes)

	std::string imagePath = "hello.bmp";

	cbDesc.MiscFlags = 0;

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_DOWN,



	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

	m_pRenderTargetView = NULL;





	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

int main(int, char**)



			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

CD3DTest::CD3DTest()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		pIList[j] = indexList[j];



	m_pSampler = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	m_IndexCount = icount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.Height = rect.Height();

			case SDLK_LEFT:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pInputLayout = NULL;



	//インデックスバッファ作成





	m_Viewport.Width = (FLOAT)rect.Width();



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_FreeSurface(bmp);

		return hr;

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	irData.SysMemPitch = 0;

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vrData.SysMemSlicePitch = 0;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_BUFFER_DESC cbDesc;

	vrData.pSysMem = &pVList[0];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			}



struct ConstantMaterial {

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



			}



	delete[] pVList;

		flags,

{

		}



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyWindow(win);

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_RIGHT:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

	std::string imagePath = "hello.bmp";

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





		// Loop over faces(polygon)

		size_t index_offset = 0;

	std::vector<tinyobj::material_t> materials;

		// Loop over faces(polygon)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		delete[] pVList;

}

		if (!reader.Error().empty())

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				indexlist.push_back(index);

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				vertex.push_back(vertex_tmp);

	return;

	//テクスチャ読み込み

	{

	scDesc.BufferCount = 1;

	};

	SDL_DestroyRenderer(ren);



	SDL_DestroyTexture(tex);

	if (m_pImmediateContext)



}

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t ty =

		SDL_RenderClear(ren);

	ibDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Clean up our objects and quit

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

	dsDesc.Format = txDesc.Format;

	D3D11_BUFFER_DESC ibDesc;

	m_IndexCount = icount;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pInputLayout);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点バッファ作成

				indexlist.push_back(idx.vertex_index);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	// Loop over shapes



	irData.SysMemPitch = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Event e;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//vector<WORD> index_t;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&m_pDevice,





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

#include <SDL.h>

	SDL_DestroyRenderer(ren);

	if (m_pImmediateContext)

void CD3DTest::Render()

			for (size_t v = 0; v < num_vertices; v++)





	WORD* pIList = new WORD[icount];

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	m_pSampler = NULL;

		pVList[i] = vertexlist[i];

	{



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{



	vbDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pInputLayout);

	m_pSampler = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		D3D11_SDK_VERSION,

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string inputfile = "test.obj";

				break;

	//頂点レイアウト作成





	vector<WORD> indexList;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pInputLayout = NULL;

struct ConstantMaterial {

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	}

	for (const auto& shape : shapes)

		size_t index_offset = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.CPUAccessFlags = 0;



#include "DirectXManager.h"



			{



	SAFE_RELEASE(m_pSwapChain);

				break;

			}

	cbDesc.MiscFlags = 0;



	{

	txDesc.Width = rect.Width();

	XMFLOAT4 pos;               //座標(x,y,z)

				break;

				// access to vertex

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.SampleDesc.Quality = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		else if (e.type == SDL_KEYDOWN)



				break;

	std::string error;

			}

	float    fov = XMConvertToRadians(20.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//Create Index

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



#ifdef _DEBUG

	vbDesc.MiscFlags = 0;

		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.CPUAccessFlags = 0;

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



HRESULT CD3DTest::Create(HWND hwnd)

	m_pLightBuffer = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Event e;

				WORD index = idx.vertex_index;

{

	SDL_DestroyTexture(tex);



/*

	bool ret = tinyobj::LoadObj(



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	D3D11_SUBRESOURCE_DATA irData;

		&level,

	{

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.SampleDesc.Quality = 0;

{

	{



	for (size_t s = 0; s < shapes.size(); s++)





	vrData.pSysMem = &pVList[0];

		//User requests quit

		&m_pSwapChain,

int SEGMENT = 36;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		delete[] pVList;

	ConstantLightBuffer clb;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	std::string imagePath = "hello.bmp";





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			case SDLK_DOWN:





			index_offset += num_vertices;

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

	{







	SDL_DestroyRenderer(ren);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

#endif

	ConstantLight    pntLight; //点光源

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}

			case SDLK_UP:

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(idx.vertex_index);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		KEY_PRESS_SURFACE_DOWN,

	ibDesc.CPUAccessFlags = 0;

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		if (!reader.Error().empty())

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

				indexlist.push_back(index);

	UINT strides = sizeof(Vertex);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.pSysMem = &pIList[0];

	UINT flags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			for (size_t v = 0; v < fv; v++)

			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_TOTAL

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

struct ConstantMaterial {

	m_pPixelShader = NULL;

			}

}



		delete[] pVList;

	return 0;

	{



	XMFLOAT4 pos;               //座標(x,y,z)

	//Vertex* pVList = new Vertex[vcount];



struct ConstantLight {

	SDL_DestroyTexture(tex);

}

			//Select surfaces based on key press

	//定数バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.StructureByteStride = 0;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	float    farZ = 100.0f;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				break;

	{



	{

	m_pDevice = NULL;

	std::string inputfile = "test.obj";

		&shapes,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&attrib,

	m_pIndexBuffer = NULL;

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

 * Lesson 1: Hello World!

	tinyobj::attrib_t attrib;

	for (int i = 0; i < vcount; i++)

	if (!reader.Warning().empty())

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pIndexBuffer);

		R"(cube.obj)");

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			for (size_t v = 0; v < fv; v++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

		cout << "SDL_INIT_ERROR" << endl;

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;



	{



};

	WORD   icount = indexList.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.SampleDesc.Count = 1;



	txDesc.Height = rect.Height();

	dsDesc.Texture2D.MipSlice = 0;

	for (int j = 0; j < icount; j++)

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

{

		return hr;



			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	txDesc.MipLevels = 1;

	//定数バッファ作成

				break;

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			switch (e.key.keysym.sym)

	//Key press surfaces constants



	SAFE_RELEASE(m_pImmediateContext);

			case SDLK_LEFT:

			//Select surfaces based on key press

	delete[] pVList;



	m_pTexture = NULL;

		&level,

		if (e.type == SDL_QUIT)



			case SDLK_LEFT:

	SAFE_RELEASE(m_pInputLayout);

	CRect                rect;

	if (!reader.Warning().empty())

{

	}



	m_IndexCount = icount;







		1,



	for (int j = 0; j < icount; j++)

};



	XMFLOAT4X4 projection;

}

	{

	dsDesc.Format = txDesc.Format;

	std::string inputfile = "test.obj";

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pLightBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4X4 view;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.MaxDepth = 1.0f;



int main(int, char**)

	::ZeroMemory(&scDesc, sizeof(scDesc));



		//User requests quit

		SDL_RenderPresent(ren);

	Release();

	m_pDepthStencilView = NULL;

	//テクスチャ読み込み

	//テクスチャ読み込み

	SAFE_RELEASE(m_pTexture);

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	txDesc.ArraySize = 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderPresent(ren);

			case SDLK_DOWN:

		return hr;



	SAFE_RELEASE(m_pRenderTargetView);

			exit(1);

	//Key press surfaces constants

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!reader.Error().empty())

	D3D11_SUBRESOURCE_DATA irData;

	std::string inputfile = "test.obj";

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	Release();

	m_Viewport.Width = (FLOAT)rect.Width();

		delete[] pIList;

		NULL,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pSwapChain->Present(0, 0);

	m_pLightBuffer = NULL;

	scDesc.Windowed = TRUE;

	m_Viewport.Height = (FLOAT)rect.Height();



	{

			}

HRESULT CD3DTest::Create(HWND hwnd)



		{



			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_DestroyWindow(win);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include <SDL.h>

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



			case SDLK_RIGHT:

struct ConstantMatrixBuffer {

	D3D11_SUBRESOURCE_DATA vrData;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

using std::cout; using std::endl;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

{



	m_pTexture = NULL;

	for (int i = 0; i < 3; i++)

	vrData.SysMemPitch = 0;

	//ピクセルシェーダー生成



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		&m_pSwapChain,

	};

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//ビューポート設定

	ConstantMaterial material; //物体の質感

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex





int SEGMENT = 36;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}



		KEY_PRESS_SURFACE_DOWN,

{

	SDL_DestroyWindow(win);

			{

	m_pDepthStencilTexture = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	if (FAILED(hr))

};



	//テクスチャ読み込み

	CRect                rect;

	Release();

	//テクスチャ読み込み

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		pLevels,

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.TopLeftY = 0;

	}

				WORD index = idx.vertex_index;



	m_pSwapChain->Present(0, 0);

{



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		//User presses a key

	::GetClientRect(hwnd, &rect);

	m_pVertexBuffer = NULL;

	D3D11_SAMPLER_DESC smpDesc;

			index_offset += fv;



	return 0;

		&level,



		SDL_RenderCopy(ren, tex, NULL, NULL);

		if (e.type == SDL_QUIT)



		{



{

	SAFE_RELEASE(m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.MiscFlags = 0;



	m_pSwapChain->Present(0, 0);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;



	m_VertexCount = vcount;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ibDesc.CPUAccessFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&materials,



		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	bool ret = tinyobj::LoadObj(

	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





		&error,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 ambient;           //環境(r,g,b)

		NULL,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	if (FAILED(hr))

{

			{

	for (int i = 0; i < 3; i++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.SampleDesc.Quality = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.StructureByteStride = 0;





		return hr;



	return 0;

	irData.SysMemPitch = 0;

	ibDesc.CPUAccessFlags = 0;

#include <iostream>

	SAFE_RELEASE(m_pDepthStencilView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//vector<WORD> index_t;





	CRect                rect;

	WORD* pIList = new WORD[icount];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMFLOAT4X4 view;

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	//定数バッファ作成

	{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& attrib = reader.GetAttrib();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	scDesc.BufferDesc.Width = rect.Width();

	m_IndexCount = icount;

		return hr;



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	auto& materials = reader.GetMaterials();

		{

	{

	txDesc.Width = rect.Width();

		}



	if (!error.empty())

	if (FAILED(hr))

	{

	SDL_Quit();

	//ビューポート設定

	m_pTextureView = NULL;



				vertex.push_back(vertex_tmp);



	float    farZ = 100.0f;



	vector<WORD> indexList;

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	dsDesc.Format = txDesc.Format;

	//定数バッファ作成

		}

			case SDLK_UP:

	auto& materials = reader.GetMaterials();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pTexture);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderClear(ren);

	D3D11_BUFFER_DESC ibDesc;

				// access to vertex

	D3D_FEATURE_LEVEL level;

	int     vcount = vertexlist.size();

	m_pMatrixBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 pos;               //座標(x,y,z)



	vbDesc.StructureByteStride = 0;

		return hr;

		//User presses a key

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantLight {



	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();





		return 1;

	txDesc.Width = rect.Width();

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				WORD index = idx.vertex_index;

			index_offset += fv;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	m_Viewport.MaxDepth = 1.0f;

		return hr;

			}

		KEY_PRESS_SURFACE_UP,





		KEY_PRESS_SURFACE_RIGHT,



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	dsDesc.Format = txDesc.Format;

		R"(cube.obj)");

			{

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_UP:

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		}

				break;





				break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		1,

		&materials,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4X4 world;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

}

		&m_pSwapChain,

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_IndexCount = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

void CD3DTest::Render()

#ifdef _DEBUG

	{



void CD3DTest::Release()

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

 */

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	for (int i = 0; i < vcount; i++)

	}

		return 1;

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ConstantLight    pntLight; //点光源

	m_pImmediateContext = NULL;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::string imagePath = "hello.bmp";



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_VertexCount = vcount;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	/*

	m_pVertexShader = NULL;

		R"(cube.obj)");

			//Select surfaces based on key press

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	}

	if (!reader.ParseFromFile(inputfile, reader_config))



				break;



				tinyobj::real_t tx =



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemSlicePitch = 0;

 */

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

			}

			for (size_t v = 0; v < fv; v++)



{

		return hr;

		&m_pSwapChain,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		if (!ret)

	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				WORD index = idx.vertex_index;

		delete[] pVList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

}



	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	if (FAILED(hr))

	Release();

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include <SDL.h>





{

				break;

		return hr;

				break;

	}

	{

}

		R"(cube.obj)");

	SDL_DestroyWindow(win);

	//頂点バッファ作成

	{

	{

	return 0;

	m_pPixelShader = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))



	enum KeyPressSurfaces

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pInputLayout);

	dsDesc.Texture2D.MipSlice = 0;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;


