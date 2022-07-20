};

	m_pTexture = NULL;



	SAFE_RELEASE(m_pImmediateContext);

	scDesc.BufferCount = 1;



		&shapes,

		}

	vrData.SysMemSlicePitch = 0;

	// Loop over shapes





		}

#ifdef _DEBUG

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SDL_DestroyWindow(win);

		SDL_RenderPresent(ren);

		{



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))



	scDesc.BufferCount = 1;

	//First we need to start up SDL, and make sure it went ok



	{



	m_Viewport.MinDepth = 0.0f;

	std::string inputfile = "test.obj";

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4X4 projection;



	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include "DirectXManager.h"







			{



			case SDLK_DOWN:





		SDL_Delay(1000);

	}

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_IndexCount = icount;

	//Key press surfaces constants

	SAFE_RELEASE(m_pTextureView);

};

			// Loop over vertices in the face.



	vrData.pSysMem = &pVList[0];

#ifdef _DEBUG

		delete[] pVList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_VertexCount = vcount;

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	ConstantMaterial material; //物体の質感

		&shapes,



		size_t index_offset = 0;  // インデントのオフセット

		R"(cube.obj)");

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_DestroyTexture(tex);

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pMatrixBuffer);

		{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	m_Viewport.TopLeftX = 0;

	return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





CD3DTest::~CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

struct ConstantLight {

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (int i = 0; i < 3; i++)

#include <iostream>

	scDesc.SampleDesc.Count = 1;

	return 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Quit();



	vector<WORD> indexList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

}

	}





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



 * Lesson 1: Hello World!

	ID3D11Texture2D* pBackBuffer;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		flags,

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	}

}

	{

		NULL,



}

	m_Viewport.TopLeftX = 0;







	Release();



				vertex.push_back(vertex_tmp);

struct ConstantLight {

	//頂点シェーダー生成

};

		m_pImmediateContext->ClearState();

		pLevels,



#include <SDL.h>

	D3D11_BUFFER_DESC vbDesc;

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	SDL_DestroyWindow(win);

};

	if (!reader.Warning().empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;



	if (FAILED(hr))

		return hr;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//インデックスバッファ作成

				break;

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	m_pSampler = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

			switch (e.key.keysym.sym)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		if (e.type == SDL_QUIT)



	ibDesc.StructureByteStride = 0;



	float    nearZ = 0.1f;

{

CD3DTest::~CD3DTest()

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	CRect                rect;

		return hr;

			}

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		}





	m_pPixelShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pDepthStencilTexture = NULL;

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pRenderTargetView);

}

		if (e.type == SDL_QUIT)

	for (const auto& shape : shapes)

	delete[] pIList;

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	delete[] pIList;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyRenderer(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.MiscFlags = 0;

		pIList[j] = indexList[j];



	m_pVertexBuffer = NULL;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	D3D11_SUBRESOURCE_DATA vrData;

		&scDesc,

	m_pPixelShader = NULL;



{

		SDL_Delay(1000);

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D11_BUFFER_DESC ibDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

}

	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pTextureView = NULL;

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	for (int i = 0; i < vcount; i++)

				break;



		return hr;



	if (!error.empty())

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pSwapChain);

	vrData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	//頂点バッファ作成



	UINT flags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&shapes,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//頂点バッファ作成

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;



	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		if (!ret)

		//User presses a key

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	return 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#include <SDL.h>

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.MiscFlags = 0;

		&error,



	::GetClientRect(hwnd, &rect);

	//Clean up our objects and quit





		NULL,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

		return hr;

	m_pImmediateContext = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

struct ConstantMatrixBuffer {

	//ビューポート設定

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	SDL_Quit();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.MiscFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		KEY_PRESS_SURFACE_DEFAULT,

			index_offset += num_vertices;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			case SDLK_RIGHT:

	D3D11_SAMPLER_DESC smpDesc;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pImmediateContext);

	D3D11_TEXTURE2D_DESC txDesc;



		else if (e.type == SDL_KEYDOWN)





	D3D_FEATURE_LEVEL level;

	m_pTexture = NULL;





	HRESULT              hr;

	ibDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;

	delete[] pIList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}*/

	if (!reader.ParseFromFile(inputfile, reader_config))

	std::vector<tinyobj::material_t> materials;

	m_Viewport.MaxDepth = 1.0f;

	scDesc.BufferCount = 1;

		pIList[j] = indexList[j];



	SAFE_RELEASE(m_pVertexShader);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			index_offset += num_vertices;

	return 0;

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.eyePos, eye);



	pBackBuffer->Release();

	//First we need to start up SDL, and make sure it went ok



#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferCount = 1;

	m_pTextureView = NULL;



			//Select surfaces based on key press

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//頂点シェーダー生成

	m_pIndexBuffer = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			{



{

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_FreeSurface(suf);

		return hr;



		else if (e.type == SDL_KEYDOWN)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.MaxDepth = 1.0f;

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	vector<WORD> indexList;

			case SDLK_LEFT:

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	return;

				tinyobj::real_t ty =

			case SDLK_DOWN:

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	}

};



			case SDLK_UP:





	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		KEY_PRESS_SURFACE_TOTAL

	txDesc.MiscFlags = 0;

	return 0;



	txDesc.SampleDesc.Quality = 0;



			//Select surfaces based on key press

#include <iostream>

	//ピクセルシェーダー生成

		delete[] pIList;

	WORD   icount = indexList.size();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{



	// Loop over shapes



	::GetClientRect(hwnd, &rect);

	m_IndexCount = icount;

	if (!error.empty())

	SDL_DestroyRenderer(ren);

			//Select surfaces based on key press

};



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			default:



/*

		D3D11_SDK_VERSION,

	txDesc.CPUAccessFlags = 0;

	ConstantLight    pntLight; //点光源

	vrData.SysMemSlicePitch = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	DXGI_SWAP_CHAIN_DESC scDesc;

void CD3DTest::Release()

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);





	cbDesc.MiscFlags = 0;

	std::string inputfile = "test.obj";

	UINT flags = 0;





	SDL_DestroyWindow(win);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		pLevels,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				// access to vertex



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		R"(cube.obj)");

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

		&materials,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

};

	DXGI_SWAP_CHAIN_DESC scDesc;

		if (e.type == SDL_QUIT)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		KEY_PRESS_SURFACE_TOTAL

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDevice);

	ConstantMatrixBuffer cmb;

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		pLevels,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				indexlist.push_back(idx.vertex_index);



	std::string imagePath = "hello.bmp";

	txDesc.SampleDesc.Count = 1;

	{

	{





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		delete[] pVList;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			break;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pTexture = NULL;

	//vector<WORD> index_t;



	delete[] pIList;

	D3D11_SUBRESOURCE_DATA vrData;

	UINT flags = 0;







	D3D11_TEXTURE2D_DESC txDesc;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		pVList[i] = vertexlist[i];

	SDL_DestroyWindow(win);

	{

		NULL,

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))



	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	}

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.Width = rect.Width();

	ibDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);



	scDesc.SampleDesc.Count = 1;

			case SDLK_UP:

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}





	m_Viewport.TopLeftX = 0;

	for (const auto& shape : shapes)

			case SDLK_LEFT:

CD3DTest::~CD3DTest()

	ConstantLightBuffer clb;

	if (FAILED(hr))

		return hr;

		1,

	};

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.ambient, lightAmbient);



	m_Angle += XMConvertToRadians(1.0f);

	ConstantLightBuffer clb;



		delete[] pVList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				indexlist.push_back(index);

		SDL_RenderClear(ren);



		{

	SAFE_RELEASE(m_pVertexShader);

int main(int, char**)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC ibDesc;

	SDL_FreeSurface(suf);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4         eyePos;   //視点座標

				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.StructureByteStride = 0;

			index_offset += num_vertices;

	Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//ピクセルシェーダー生成

	txDesc.Height = rect.Height();

		&scDesc,

	//頂点レイアウト作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.eyePos, eye);

			int num_vertices = shape.mesh.num_face_vertices[f];

	float    fov = XMConvertToRadians(20.0f);

	//ビューポート設定

int main(int, char**)

	m_Angle += XMConvertToRadians(1.0f);

	//First we need to start up SDL, and make sure it went ok

	//頂点バッファ作成



	m_pImmediateContext = NULL;

		{

	LoadObj(vertexlist, indexList);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	::ZeroMemory(&scDesc, sizeof(scDesc));

int main(int, char**)

	if (!reader.Warning().empty())

	vrData.SysMemSlicePitch = 0;

	scDesc.OutputWindow = hwnd;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&m_pSwapChain,

	ibDesc.StructureByteStride = 0;







	}

			//Select surfaces based on key press

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

	//Key press surfaces constants

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

	cbDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <SDL.h>



		cout << "SDL_INIT_ERROR" << endl;

		pLevels,

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	{

		{

	m_Viewport.TopLeftX = 0;

		SDL_Delay(1000);

		&scDesc,

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	CRect                rect;

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		KEY_PRESS_SURFACE_UP,

		if (e.type == SDL_QUIT)

#ifdef _DEBUG

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pSampler);

struct ConstantMaterial {



	SAFE_RELEASE(m_pVertexShader);

	float    farZ = 100.0f;

	}

	{

	D3D11_SUBRESOURCE_DATA irData;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		//User presses a key

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

		// Loop over faces(polygon)

			// Loop over vertices in the face.

	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);



	m_pInputLayout = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pTextureView = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	if (m_pImmediateContext)

		if (!reader.Error().empty())

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	//Key press surfaces constants

	txDesc.Height = rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



			case SDLK_LEFT:



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (const auto& shape : shapes)

	dsDesc.Format = txDesc.Format;

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		delete[] pVList;



	while (SDL_PollEvent(&e) != 0)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	for (int j = 0; j < icount; j++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&m_pSwapChain,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

		&scDesc,

#endif

	pBackBuffer->Release();

	vbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pVertexShader = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ConstantMatrixBuffer cmb;

	HRESULT              hr;

	SAFE_RELEASE(m_pTexture);

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Quit();

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.Width = (FLOAT)rect.Width();



	irData.SysMemPitch = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	txDesc.Width = rect.Width();

	SDL_Event e;

	XMFLOAT4X4 world;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Event e;



	auto& attrib = reader.GetAttrib();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (int j = 0; j < icount; j++)

	m_Viewport.Width = (FLOAT)rect.Width();

		{

		KEY_PRESS_SURFACE_UP,

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&materials,

	ConstantLightBuffer clb;





{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

}

	m_Viewport.TopLeftY = 0;

}



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				vertex.push_back(vertex_tmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



	if (!reader.ParseFromFile(inputfile, reader_config))

			index_offset += num_vertices;

		}



}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//Vertex* pVList = new Vertex[vcount];

	UINT strides = sizeof(Vertex);

	vrData.SysMemPitch = 0;



	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	irData.SysMemPitch = 0;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Release();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Quit();

	SAFE_RELEASE(m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;



	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		&m_pDevice,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pIndexBuffer = NULL;





				tinyobj::real_t tx =



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	HRESULT              hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

	txDesc.Width = rect.Width();

			}

	m_pImmediateContext = NULL;



	m_pSwapChain = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

			{

{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_pSwapChain->Present(0, 0);

		size_t index_offset = 0;  // インデントのオフセット

#ifdef _DEBUG

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	std::string inputfile = "test.obj";

				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4X4 view;

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

	//ピクセルシェーダー生成

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&m_pImmediateContext);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	WORD   icount = indexList.size();

	//Clean up our objects and quit

	dsDesc.Format = txDesc.Format;

	//頂点シェーダー生成

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pVertexBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

void CD3DTest::Render()

	SDL_Event e;

		{

	m_VertexCount = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	pBackBuffer->Release();

	D3D11_BUFFER_DESC ibDesc;

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		R"(cube.obj)");



	m_Viewport.TopLeftY = 0;

	float    farZ = 100.0f;

	m_pVertexBuffer = NULL;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	Release();

	SDL_Quit();

		KEY_PRESS_SURFACE_RIGHT,



	WORD* pIList = new WORD[icount];

	tinyobj::attrib_t attrib;

				WORD index = idx.vertex_index;

#include <SDL.h>

		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	ConstantLightBuffer clb;

				break;

				WORD index = idx.vertex_index;

	m_pSwapChain = NULL;







			{

		{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	D3D11_SUBRESOURCE_DATA irData;

#include "DirectXManager.h"

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		&m_pDevice,



	m_pSampler = NULL;

	std::vector<tinyobj::shape_t> shapes;

		&m_pDevice,

			case SDLK_UP:

		// Loop over faces(polygon)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (!reader.Error().empty())

	XMFLOAT4 specular;          //反射(r,g,b)

		{

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

	m_pPixelShader = NULL;

	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

void CD3DTest::Release()

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			default:

		return hr;

	irData.pSysMem = &pIList[0];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

				indexlist.push_back(index);



				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{

	SAFE_RELEASE(m_pVertexShader);





		{

	SDL_DestroyWindow(win);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		}

	SDL_FreeSurface(suf);

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	irData.pSysMem = &pIList[0];

		// Loop over faces(polygon)



	SAFE_RELEASE(m_pImmediateContext);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	XMFLOAT4X4 world;

		NULL,

	//深度ステンシルバッファ作成

			index_offset += fv;

		// Loop over faces(polygon)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	// Loop over shapes



		{

	SDL_DestroyTexture(tex);





{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pDepthStencilView = NULL;

	m_VertexCount = vcount;

	}

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//Vertex* pVList = new Vertex[vcount];

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

	for (const auto& shape : shapes)

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (size_t s = 0; s < shapes.size(); s++)

}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pVertexBuffer = NULL;

	vrData.pSysMem = &pVList[0];

	D3D11_SAMPLER_DESC smpDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderClear(ren);

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;



	SAFE_RELEASE(m_pVertexShader);

	m_pSwapChain = NULL;

	}

	Release();

		&m_pSwapChain,

	txDesc.Height = rect.Height();

	return 0;

void CD3DTest::Release()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	while (SDL_PollEvent(&e) != 0)

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				break;

	WORD   icount = indexList.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.MiscFlags = 0;

	CRect                rect;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

	m_pImmediateContext = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				break;

	SAFE_RELEASE(m_pDevice);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.ArraySize = 1;

				indexlist.push_back(index);

	SDL_FreeSurface(suf);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&error,





	LoadObj(vertexlist, indexList);



#define TINYOBJLOADER_IMPLEMENTATION

		}

	vrData.pSysMem = &pVList[0];

	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

#include <SDL.h>

	}

				tinyobj::real_t ty =

#include "DirectXManager.h"



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

struct ConstantLightBuffer {

	m_Viewport.TopLeftX = 0;

{



	ZeroMemory(&txDesc, sizeof(txDesc));

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.SampleDesc.Quality = 0;

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	// Loop over shapes



	return 0;

			case SDLK_LEFT:

	m_Viewport.Width = (FLOAT)rect.Width();

		delete[] pVList;





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.SampleDesc.Count = 1;

	vrData.SysMemSlicePitch = 0;

	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Count = 1;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

 * Lesson 1: Hello World!

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::string imagePath = "hello.bmp";



	}

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pDepthStencilView);

struct ConstantMatrixBuffer {



	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

};

	txDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	irData.pSysMem = &pIList[0];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;

	{

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMFLOAT4X4 world;

{

	SAFE_RELEASE(m_pVertexBuffer);

	{

	if (!reader.Warning().empty())

struct ConstantMatrixBuffer {

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

		1,

	if (FAILED(hr))

};

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

	scDesc.OutputWindow = hwnd;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		delete[] pVList;

			exit(1);

	m_pSampler = NULL;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	float    fov = XMConvertToRadians(20.0f);

	//テクスチャ読み込み

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_FreeSurface(bmp);

				indexlist.push_back(index);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		size_t index_offset = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	int     vcount = vertexlist.size();

}

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	m_IndexCount = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	for (const auto& shape : shapes)

	while (SDL_PollEvent(&e) != 0)

		size_t index_offset = 0;

	SAFE_RELEASE(m_pDevice);

};

		return hr;





	{

				indexlist.push_back(index);

{

			switch (e.key.keysym.sym)

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext = NULL;

	m_pDepthStencilView = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	CRect                rect;

	}

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.StructureByteStride = 0;

		&m_pSwapChain,

#include <iostream>

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Event e;

	XMFLOAT4X4 projection;

struct ConstantLight {

	ZeroMemory(&txDesc, sizeof(txDesc));

			case SDLK_RIGHT:

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ConstantMaterial material; //物体の質感

	m_pTexture = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (m_pImmediateContext)

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	}





	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

		NULL,

	ConstantMaterial material; //物体の質感



/*



	{

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





		return hr;

				break;

	SDL_Quit();

	m_pPixelShader = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDepthStencilTexture);

	ConstantLightBuffer clb;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	return 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Viewport.TopLeftX = 0;

	D3D_FEATURE_LEVEL level;

	if (!reader.Warning().empty())

		return hr;

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				// access to vertex

		KEY_PRESS_SURFACE_LEFT,



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_LEFT:

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_LEFT,

	UINT offsets = 0;

	cbDesc.CPUAccessFlags = 0;

			case SDLK_RIGHT:

	}

	scDesc.SampleDesc.Count = 1;

	WORD* pIList = new WORD[icount];



			for (size_t v = 0; v < fv; v++)

	return hr;

		&m_pImmediateContext);

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Viewport.Height = (FLOAT)rect.Height();



		return hr;

	SDL_DestroyRenderer(ren);

	//深度ステンシルバッファ作成

			case SDLK_LEFT:

	WORD* pIList = new WORD[icount];

		return hr;

void CD3DTest::Release()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			break;

	return 0;

		KEY_PRESS_SURFACE_UP,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLight    pntLight; //点光源





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//定数バッファ作成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		if (!ret)

		cout << "SDL_INIT_ERROR" << endl;

	ConstantMatrixBuffer cmb;

		pIList[j] = indexList[j];

	scDesc.SampleDesc.Count = 1;

		return 1;

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.StructureByteStride = 0;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pDepthStencilTexture = NULL;

void CD3DTest::Render()

	for (int i = 0; i < vcount; i++)

	int     vcount = vertexlist.size();

	{

}

	if (FAILED(hr))

		if (!ret)

			case SDLK_UP:

	SDL_Quit();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_RIGHT,

			index_offset += fv;



	SAFE_RELEASE(m_pLightBuffer);

	for (int i = 0; i < 3; i++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

}

	XMFLOAT4 pos;               //座標(x,y,z)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pVertexBuffer);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	pBackBuffer->Release();

	m_pSwapChain->Present(0, 0);

		&error,

		flags,

	ConstantLightBuffer clb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

				tinyobj::real_t ty =

	Release();

		return hr;

}

	if (FAILED(hr))



		&scDesc,

	SDL_Quit();

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	SAFE_RELEASE(m_pImmediateContext);



		&scDesc,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pLightBuffer = NULL;

};

		1,



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		R"(cube.obj)");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	UINT strides = sizeof(Vertex);





	SAFE_RELEASE(m_pLightBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);



	XMFLOAT4X4 projection;

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		pIList[j] = indexList[j];

	float    nearZ = 0.1f;

	}



		KEY_PRESS_SURFACE_RIGHT,



	D3D11_BUFFER_DESC cbDesc;

#include "DirectXManager.h"

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





{

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

		NULL,

}

				// access to vertex

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ConstantLight    pntLight; //点光源

	while (SDL_PollEvent(&e) != 0)

				WORD index = idx.vertex_index;

		}



	m_VertexCount = 0;



	UINT offsets = 0;

			// Loop over vertices in the face.

		flags,

	vbDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	return hr;

};

	}

		&materials,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vrData.SysMemPitch = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ConstantLight    pntLight; //点光源



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_BUFFER_DESC vbDesc;

	m_IndexCount = 0;

		// Loop over faces(polygon)

#include <iostream>

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		{

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pImmediateContext = NULL;



	delete[] pVList;

	delete[] pIList;

	SAFE_RELEASE(m_pDevice);

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

	};

			case SDLK_DOWN:

	SAFE_RELEASE(m_pVertexShader);

	auto& shapes = reader.GetShapes();

	cbDesc.StructureByteStride = 0;



		return hr;



	SDL_FreeSurface(bmp);

	while (SDL_PollEvent(&e) != 0)

	//vector<WORD> index_t;

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t ty =

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pVertexBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;







	//深度ステンシルバッファ作成

		&m_pImmediateContext);

struct ConstantMaterial {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SAFE_RELEASE(m_pDepthStencilTexture);

}

		return hr;

		return hr;

{

	}

	m_Viewport.MaxDepth = 1.0f;



		exit(1);

	float    nearZ = 0.1f;

	auto& materials = reader.GetMaterials();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.Height = (FLOAT)rect.Height();





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		m_pImmediateContext->ClearState();

	txDesc.MiscFlags = 0;



	txDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.eyePos, eye);

	if (!reader.ParseFromFile(inputfile, reader_config))

	{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

		{

		&m_pDevice,

	return hr;

	if (FAILED(hr))

			case SDLK_LEFT:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&error,

	//頂点シェーダー生成

	}*/

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.SampleDesc.Count = 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





{

	SAFE_RELEASE(m_pDepthStencilView);

{

struct ConstantMaterial {

	txDesc.MipLevels = 1;

		if (!reader.Error().empty())

		return hr;



	//定数バッファ作成

}



	delete[] pIList;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		delete[] pVList;

	m_pDepthStencilTexture = NULL;



				tinyobj::real_t ty =

	{

		SDL_RenderPresent(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT offsets = 0;



	for (int i = 0; i < 3; i++)

	SDL_DestroyTexture(tex);

		{

	scDesc.Windowed = TRUE;

	scDesc.SampleDesc.Count = 1;



	txDesc.Width = rect.Width();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < vcount; i++)

	scDesc.BufferDesc.Width = rect.Width();



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

			break;

	m_Angle += XMConvertToRadians(1.0f);

	//インデックスバッファ作成

	{



		// Loop over faces(polygon)

	SAFE_RELEASE(m_pDevice);

	//頂点バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		SDL_RenderPresent(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	SAFE_RELEASE(m_pVertexBuffer);

	/*

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReaderConfig reader_config;

			for (size_t v = 0; v < num_vertices; v++)

	m_pVertexBuffer = NULL;

	txDesc.Width = rect.Width();

	tinyobj::ObjReaderConfig reader_config;

	if (m_pImmediateContext)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	//ピクセルシェーダー生成

		SDL_RenderClear(ren);

		return hr;

		&attrib,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				WORD index = idx.vertex_index;

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_FreeSurface(suf);



	SAFE_RELEASE(m_pSwapChain);



	D3D11_TEXTURE2D_DESC txDesc;



	for (size_t s = 0; s < shapes.size(); s++)



};

	}





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 view;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	pBackBuffer->Release();

{

	}

	if (!reader.Warning().empty())

	txDesc.Width = rect.Width();

}



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_FreeSurface(suf);

	}



				WORD index = idx.vertex_index;

	ibDesc.CPUAccessFlags = 0;

	{

	txDesc.MipLevels = 1;

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				// access to vertex

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}





	auto& shapes = reader.GetShapes();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&m_pDevice,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int main(int, char**)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		{

	vbDesc.MiscFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	ConstantMaterial material; //物体の質感

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

#endif



struct ConstantMatrixBuffer {

		SDL_Delay(1000);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))



	ConstantMatrixBuffer cmb;

	return hr;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





void CD3DTest::Release()



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	delete[] pVList;

	txDesc.SampleDesc.Quality = 0;

		}

		KEY_PRESS_SURFACE_DEFAULT,

	pBackBuffer->Release();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vbDesc.MiscFlags = 0;



				indexlist.push_back(index);



int main(int, char**)

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{







	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	return hr;

				break;

	for (int i = 0; i < vcount; i++)

{

		//User requests quit

	cbDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

	m_pIndexBuffer = NULL;

	irData.pSysMem = &pIList[0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	HRESULT              hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{

	dsDesc.Texture2D.MipSlice = 0;

		{

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	int     vcount = vertexlist.size();

	float    nearZ = 0.1f;

		SDL_RenderClear(ren);





	// Loop over shapes

	XMStoreFloat4(&clb.eyePos, eye);

	std::vector<tinyobj::material_t> materials;

	irData.pSysMem = &pIList[0];

	ibDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

	{

	m_pSwapChain->Present(0, 0);









	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4X4 view;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pPixelShader);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT strides = sizeof(Vertex);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pInputLayout = NULL;



		if (e.type == SDL_QUIT)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

};

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	while (SDL_PollEvent(&e) != 0)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pDepthStencilTexture);

	enum KeyPressSurfaces

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		if (e.type == SDL_QUIT)

	XMFLOAT4 ambient;           //環境(r,g,b)





	};

	m_pRenderTargetView = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4         eyePos;   //視点座標



#include <iostream>

		&m_pImmediateContext);

	{

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	delete[] pVList;

	m_VertexCount = vcount;

			exit(1);

	D3D11_BUFFER_DESC ibDesc;

	WORD   icount = indexList.size();

		pIList[j] = indexList[j];

	}

	SDL_Quit();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	LoadObj(vertexlist, indexList);

			index_offset += fv;

				// access to vertex

	//テクスチャ読み込み

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				tinyobj::real_t ty =

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	HRESULT              hr;



}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{

	m_pSwapChain = NULL;

	{

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.eyePos, eye);

	dsDesc.Texture2D.MipSlice = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

		return hr;



	SDL_Event e;

	enum KeyPressSurfaces

		delete[] pIList;

		if (!reader.Error().empty())

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))



	}

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pDevice = NULL;

		return hr;

		&level,

		KEY_PRESS_SURFACE_RIGHT,





};

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

		pLevels,

	}

	}

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.MiscFlags = 0;

	m_pDepthStencilView = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

				vertex.push_back(vertex_tmp);

		if (!ret)

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pMatrixBuffer);

}



	::GetClientRect(hwnd, &rect);

		}

	SDL_Event e;



	pBackBuffer->Release();

	ibDesc.CPUAccessFlags = 0;

	std::string error;

		SDL_Delay(1000);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (!error.empty())

	XMFLOAT4 pos;               //座標(x,y,z)

	//定数バッファ作成

				indexlist.push_back(index);

	}

	m_pRenderTargetView = NULL;

	vbDesc.MiscFlags = 0;



				// access to vertex

		&error,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;

			exit(1);

	txDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pIndexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.MiscFlags = 0;

	auto& shapes = reader.GetShapes();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))



		{



};

	//頂点レイアウト作成

	if (!reader.Warning().empty())

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.CPUAccessFlags = 0;

	txDesc.Height = rect.Height();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



};



			case SDLK_RIGHT:

{

		SDL_Delay(1000);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

		}

	float    nearZ = 0.1f;





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&scDesc,



{

	std::vector<tinyobj::shape_t> shapes;



	std::string inputfile = "test.obj";



	CRect                rect;



			// Loop over vertices in the face.



		SDL_Delay(1000);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantLight {



}

		R"(cube.obj)");



{

	while (SDL_PollEvent(&e) != 0)

}

	scDesc.Windowed = TRUE;

	LoadObj(vertexlist, indexList);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	for (int i = 0; i < vcount; i++)



	// Loop over shapes

	cbDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	SAFE_RELEASE(m_pSampler);

	irData.SysMemPitch = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		NULL,



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	// Loop over shapes

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	}



	vector<WORD> indexList;

		return hr;

	if (FAILED(hr))

	/*

#include <SDL.h>

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pRenderTargetView = NULL;

		&m_pDevice,



	std::string error;

	txDesc.SampleDesc.Count = 1;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pVertexBuffer);

	//頂点シェーダー生成

	//頂点バッファ作成

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	return 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::string inputfile = "test.obj";



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				WORD index = idx.vertex_index;

			// Loop over vertices in the face.

		&error,

	scDesc.BufferCount = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			case SDLK_LEFT:

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

int SEGMENT = 36;

{



	D3D11_SUBRESOURCE_DATA vrData;



	ibDesc.StructureByteStride = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_IndexCount = icount;

	for (int i = 0; i < vcount; i++)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		exit(1);

#include "DirectXManager.h"

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& materials = reader.GetMaterials();

	{

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	tinyobj::ObjReader reader;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		pVList[i] = vertexlist[i];

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

int main(int, char**)

	}

	{

int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vector<Vertex> vertexlist;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pDepthStencilTexture);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.Windowed = TRUE;

using std::cout; using std::endl;



	}*/

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_UP,

		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		&materials,

	m_VertexCount = 0;

	return;

	m_pSampler = NULL;



	Release();

	float    farZ = 100.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4         eyePos;   //視点座標

		//User requests quit

int SEGMENT = 36;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	std::string inputfile = "test.obj";

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&m_pImmediateContext);

			}

		if (e.type == SDL_QUIT)

	std::vector<tinyobj::material_t> materials;

	}

	ConstantLight    pntLight; //点光源

			for (size_t v = 0; v < fv; v++)

	ibDesc.StructureByteStride = 0;

			}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	UINT strides = sizeof(Vertex);

	WORD* pIList = new WORD[icount];

	{

				break;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	Release();

		&shapes,

		&m_pDevice,

		}



		&shapes,



		if (!reader.Error().empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ConstantLight    pntLight; //点光源

};



};

	XMFLOAT4X4 projection;

		return hr;

	//Create Index

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD   icount = indexList.size();



	{

	m_pDepthStencilTexture = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	if (FAILED(hr))

	{

	}

	delete[] pVList;

		&m_pSwapChain,

	Release();

	float    nearZ = 0.1f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4X4 world;



	m_pLightBuffer = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();



		{



		SDL_Delay(1000);

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pPixelShader = NULL;



	txDesc.Width = rect.Width();

			case SDLK_LEFT:

#ifdef _DEBUG

		&error,

	vbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC vbDesc;

void CD3DTest::Render()





			int num_vertices = shape.mesh.num_face_vertices[f];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_UP:

			case SDLK_UP:

		SDL_RenderClear(ren);

	}

	}

		delete[] pIList;

struct ConstantMatrixBuffer {

	while (SDL_PollEvent(&e) != 0)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				WORD index = idx.vertex_index;

				// access to vertex

	vbDesc.MiscFlags = 0;





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

};

	SDL_DestroyRenderer(ren);

	return 0;

			// Loop over vertices in the face.

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4X4 world;

	ConstantMatrixBuffer cmb;



	return 0;

		KEY_PRESS_SURFACE_DOWN,

	float    farZ = 100.0f;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pTexture);



	txDesc.Height = rect.Height();



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pSwapChain = NULL;

	//頂点バッファ作成

	return 0;

	if (FAILED(hr))

	m_pSampler = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	reader_config.mtl_search_path = "./"; // Path to material files



				break;



	DXGI_SWAP_CHAIN_DESC scDesc;



	if (!error.empty())

	m_Angle += XMConvertToRadians(1.0f);

	}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		KEY_PRESS_SURFACE_TOTAL

		&error,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	SDL_Quit();

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pTextureView);

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	::GetClientRect(hwnd, &rect);



		}



	txDesc.Usage = D3D11_USAGE_DEFAULT;



};

	SAFE_RELEASE(m_pSwapChain);

	if (m_pImmediateContext)

		else if (e.type == SDL_KEYDOWN)

		return hr;

	{

};

	float    fov = XMConvertToRadians(20.0f);

				break;

		KEY_PRESS_SURFACE_UP,

			}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//ビューポート設定

	// Loop over shapes

	SDL_Quit();

	SDL_DestroyRenderer(ren);

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

#ifdef _DEBUG

	{

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

int main(int, char**)

	SAFE_RELEASE(m_pRenderTargetView);

int SEGMENT = 36;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

int main(int, char**)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		KEY_PRESS_SURFACE_LEFT,

	}



	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





		return hr;

	vbDesc.MiscFlags = 0;

			index_offset += num_vertices;

};

	XMFLOAT4 pos;               //座標(x,y,z)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//ビューポート設定

	m_Viewport.MinDepth = 0.0f;

	txDesc.SampleDesc.Count = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&level,

using std::cout; using std::endl;

#include <SDL.h>

	for (int i = 0; i < vcount; i++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

	m_pImmediateContext = NULL;

	std::string error;

	int     vcount = vertexlist.size();



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	//テクスチャ読み込み

	{

	}

	ConstantMatrixBuffer cmb;



		delete[] pIList;

	m_pImmediateContext = NULL;

		{

		m_pImmediateContext->ClearState();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

};

		&scDesc,

	auto& shapes = reader.GetShapes();

	std::string inputfile = "test.obj";

	//Key press surfaces constants

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	scDesc.OutputWindow = hwnd;

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		&m_pSwapChain,

	{

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			case SDLK_DOWN:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

	CRect                rect;

#ifdef _DEBUG

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#endif

	//頂点シェーダー生成

	}

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    farZ = 100.0f;

	txDesc.Height = rect.Height();



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}

	txDesc.Height = rect.Height();

	for (int j = 0; j < icount; j++)

	UINT flags = 0;

	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

 */

				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



		{



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemPitch = 0;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

	}

	if (!reader.Warning().empty())

		return hr;

		{

{

CD3DTest::CD3DTest()

	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (!error.empty())

	m_pSampler = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4X4 world;

struct ConstantLightBuffer {

	while (SDL_PollEvent(&e) != 0)

};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	m_Viewport.TopLeftY = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				// access to vertex

#include <SDL.h>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pSwapChain = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	D3D11_TEXTURE2D_DESC txDesc;

 */

		return hr;

		}

	SDL_Event e;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_IndexCount = icount;

	m_pDepthStencilView = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;



			exit(1);

}

	}

		//User requests quit

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



{

	scDesc.BufferDesc.Height = rect.Height();

	enum KeyPressSurfaces

	for (int i = 0; i < 3; i++)

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//vector<WORD> index_t;

		cout << "SDL_INIT_ERROR" << endl;



	m_Viewport.MaxDepth = 1.0f;

	D3D11_TEXTURE2D_DESC txDesc;





				break;

{



	if (FAILED(hr))

		// Loop over faces(polygon)

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pInputLayout);

			for (size_t v = 0; v < fv; v++)



};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	//ピクセルシェーダー生成



	m_Viewport.MaxDepth = 1.0f;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	//ビューポート設定

};

	return 0;



	m_VertexCount = vcount;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.MinDepth = 0.0f;



		//User presses a key





				vertex.push_back(vertex_tmp);

			}

	if (FAILED(hr))

	}





	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_UP,

	}

	scDesc.Windowed = TRUE;

		&m_pSwapChain,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	WORD* pIList = new WORD[icount];



	delete[] pVList;

	m_pIndexBuffer = NULL;



		return hr;



	SAFE_RELEASE(m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	scDesc.BufferDesc.Height = rect.Height();

#include "DirectXManager.h"

	m_pRenderTargetView = NULL;

	ConstantLightBuffer clb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D_DRIVER_TYPE_HARDWARE,



	{



		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pIndexBuffer = NULL;



};

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	txDesc.Width = rect.Width();



	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		SDL_RenderClear(ren);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pIndexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			for (size_t v = 0; v < num_vertices; v++)

	auto& shapes = reader.GetShapes();



	ID3D11Texture2D* pBackBuffer;

			switch (e.key.keysym.sym)

struct ConstantMatrixBuffer {

		{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#include <iostream>

	if (FAILED(hr))

		return hr;

		//User presses a key

	m_pLightBuffer = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	std::string error;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);







#define TINYOBJLOADER_IMPLEMENTATION

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	std::string inputfile = "test.obj";

	//vector<Vertex> vertex_t;

	for (int i = 0; i < 3; i++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//vector<Vertex> vertex_t;



#include <SDL.h>

	vector<Vertex> vertexlist;

	WORD* pIList = new WORD[icount];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pDepthStencilTexture);

	UINT offsets = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		}



	{

	auto& materials = reader.GetMaterials();





		return hr;

	//ビューポート設定

}

#include <SDL.h>

	return 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.OutputWindow = hwnd;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4X4 projection;

	}

	txDesc.SampleDesc.Quality = 0;

	vrData.SysMemSlicePitch = 0;

	}

	LoadObj(vertexlist, indexList);

void CD3DTest::Render()

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	vbDesc.MiscFlags = 0;



	}

			index_offset += num_vertices;

	reader_config.mtl_search_path = "./"; // Path to material files

	//Key press surfaces constants

		pIList[j] = indexList[j];

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pDevice);



	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

	{

	m_pVertexShader = NULL;

	cbDesc.CPUAccessFlags = 0;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

		return hr;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))



	if (!reader.ParseFromFile(inputfile, reader_config))



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}



#include <SDL.h>

	cbDesc.StructureByteStride = 0;





	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	D3D11_SUBRESOURCE_DATA irData;



	irData.SysMemSlicePitch = 0;

	}

		if (!reader.Error().empty())

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	int     vcount = vertexlist.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	enum KeyPressSurfaces



	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		}

		{

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_RIGHT,

			}

			for (size_t v = 0; v < num_vertices; v++)

	m_pInputLayout = NULL;

		return hr;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	m_pSwapChain->Present(0, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//深度ステンシルバッファ作成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

		return hr;



	scDesc.SampleDesc.Count = 1;



	}

	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	WORD* pIList = new WORD[icount];

	//テクスチャ読み込み

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{



struct ConstantLight {

struct ConstantMaterial {



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	float    farZ = 100.0f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_UP:

		SDL_Delay(1000);



	XMFLOAT4X4 view;

		&materials,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Vertex* pVList = new Vertex[vcount];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	D3D_FEATURE_LEVEL level;

				break;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLight    pntLight; //点光源

				tinyobj::real_t tx =

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	enum KeyPressSurfaces

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDevice);

	m_pDepthStencilView = NULL;

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	WORD   icount = indexList.size();



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

 * Lesson 1: Hello World!

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D11_TEXTURE2D_DESC txDesc;

				break;

		return hr;

	tinyobj::ObjReaderConfig reader_config;

	reader_config.mtl_search_path = "./"; // Path to material files

		if (e.type == SDL_QUIT)

#include <SDL.h>

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

	SDL_DestroyWindow(win);

	D3D_FEATURE_LEVEL level;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_RIGHT,

	::ZeroMemory(&scDesc, sizeof(scDesc));





				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	SDL_Event e;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.Height = rect.Height();

	m_pVertexBuffer = NULL;



	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

		SDL_Delay(1000);

		&materials,

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

	ibDesc.StructureByteStride = 0;

#include <SDL.h>

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	int     vcount = vertexlist.size();



{

	m_pLightBuffer = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			index_offset += fv;

	WORD* pIList = new WORD[icount];

			}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		}

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pVertexShader);



}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点バッファ作成

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

/*

		return hr;



	cbDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pIndexBuffer);

			{

	WORD* pIList = new WORD[icount];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantMaterial {

				indexlist.push_back(index);

	//インデックスバッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		{

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.SampleDesc.Quality = 0;

	{

	D3D_FEATURE_LEVEL level;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		delete[] pIList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	delete[] pVList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.MiscFlags = 0;

	//インデックスバッファ作成

			case SDLK_UP:

#include <SDL.h>

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (!error.empty())

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyWindow(win);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))



		&m_pSwapChain,

	XMFLOAT4 specular;          //反射(r,g,b)

				vertex.push_back(vertex_tmp);

	{

		if (!ret)



	if (!reader.ParseFromFile(inputfile, reader_config))

		pVList[i] = vertexlist[i];

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		//User requests quit

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pInputLayout = NULL;



		return hr;

	float    nearZ = 0.1f;

		&m_pSwapChain,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4         eyePos;   //視点座標

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_BUFFER_DESC cbDesc;

{

		}



		}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.SampleDesc.Count = 1;

		}

		SDL_RenderPresent(ren);



HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4         eyePos;   //視点座標

		&level,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMaterial {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<WORD> index_t;

	m_Viewport.Width = (FLOAT)rect.Width();



		return hr;

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	return 0;

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

		&shapes,

	/*

	//頂点レイアウト作成

		D3D_DRIVER_TYPE_HARDWARE,

		SDL_Delay(1000);

	scDesc.Windowed = TRUE;

			case SDLK_DOWN:

			}

	//頂点レイアウト作成



};

			exit(1);

	{

	SAFE_RELEASE(m_pLightBuffer);

	m_pTexture = NULL;

#include <SDL.h>

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderClear(ren);

	return 0;

#include <SDL.h>

		&scDesc,



{

	txDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	if (FAILED(hr))

			{



		//User presses a key

		&level,

	if (!reader.Warning().empty())

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		delete[] pIList;





	{

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.MiscFlags = 0;

	/*

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Quit();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	pBackBuffer->Release();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <iostream>

	auto& attrib = reader.GetAttrib();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_DOWN:

	if (FAILED(hr))

	{

 * Lesson 1: Hello World!

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		return hr;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		size_t index_offset = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}

	tinyobj::ObjReader reader;

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyWindow(win);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



#endif

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	}

	//定数バッファ作成

		m_pImmediateContext->ClearState();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	std::vector<tinyobj::shape_t> shapes;

};

	irData.pSysMem = &pIList[0];

#define TINYOBJLOADER_IMPLEMENTATION

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pTexture);



	vbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_IndexCount = icount;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ConstantLight    pntLight; //点光源

	D3D11_BUFFER_DESC vbDesc;

	SDL_FreeSurface(bmp);

	// Loop over shapes

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pSwapChain);

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pSwapChain);

{

		if (!reader.Error().empty())

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

			index_offset += num_vertices;

};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&level,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::string error;

		return hr;



	if (FAILED(hr))

#ifdef _DEBUG

}

	cbDesc.MiscFlags = 0;





	}

	std::vector<tinyobj::shape_t> shapes;

	}

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;  // インデントのオフセット



	tinyobj::attrib_t attrib;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

CD3DTest::~CD3DTest()



	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

			case SDLK_LEFT:

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	vbDesc.CPUAccessFlags = 0;

	if (!reader.Warning().empty())





	scDesc.SampleDesc.Count = 1;

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{



	m_pDepthStencilView = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pSwapChain = NULL;

}

	cbDesc.StructureByteStride = 0;



	XMFLOAT4X4 world;



	cbDesc.CPUAccessFlags = 0;

	irData.SysMemSlicePitch = 0;

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

	m_Viewport.TopLeftX = 0;

	Release();

	{

	ibDesc.StructureByteStride = 0;

	}

}

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

				break;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		&scDesc,



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_DOWN,

	ConstantLight    pntLight; //点光源

	// Loop over shapes

	SDL_DestroyTexture(tex);



	UINT strides = sizeof(Vertex);

	m_pVertexShader = NULL;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

		R"(cube.obj)");

	}



		return hr;

	UINT strides = sizeof(Vertex);

	//深度ステンシルバッファ作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}

{

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				indexlist.push_back(index);



	for (const auto& shape : shapes)

		if (!reader.Error().empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



			case SDLK_UP:

#include <iostream>



	XMFLOAT4 pos;               //座標(x,y,z)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	UINT strides = sizeof(Vertex);

	//First we need to start up SDL, and make sure it went ok



	XMFLOAT4X4 view;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_LEFT,

	return 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));



 */

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);



			int num_vertices = shape.mesh.num_face_vertices[f];

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pVertexBuffer);

	vector<Vertex> vertexlist;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pImmediateContext);





	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	{

	int     vcount = vertexlist.size();

	D3D11_SAMPLER_DESC smpDesc;

	float    fov = XMConvertToRadians(20.0f);

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

#include <iostream>

	//頂点バッファ作成

		return hr;

	txDesc.SampleDesc.Quality = 0;

	if (m_pImmediateContext)

	m_pVertexShader = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

};

	for (int i = 0; i < 3; i++)

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t ty =

	scDesc.BufferCount = 1;

	std::vector<tinyobj::material_t> materials;

#endif

		NULL,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA irData;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				// access to vertex

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_TEXTURE2D_DESC txDesc;

		{

	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pSampler);

	Release();

		KEY_PRESS_SURFACE_UP,

				WORD index = idx.vertex_index;

	XMFLOAT4X4 view;

	scDesc.Windowed = TRUE;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	UINT flags = 0;



			case SDLK_DOWN:

};





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyRenderer(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;







	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			switch (e.key.keysym.sym)



 * Lesson 1: Hello World!



}





				vertex.push_back(vertex_tmp);



		m_pImmediateContext->ClearState();

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





		pIList[j] = indexList[j];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ZeroMemory(&txDesc, sizeof(txDesc));

			}

	irData.SysMemSlicePitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&scDesc,

		&shapes,





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pTexture = NULL;

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D11_BUFFER_DESC vbDesc;

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.Width = rect.Width();



	SAFE_RELEASE(m_pDevice);

	}

	scDesc.OutputWindow = hwnd;

	irData.SysMemPitch = 0;





	reader_config.mtl_search_path = "./"; // Path to material files



	txDesc.ArraySize = 1;

	cbDesc.StructureByteStride = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.MiscFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

};

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





};

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	{



		&m_pSwapChain,

				vertex.push_back(vertex_tmp);

	D3D11_SUBRESOURCE_DATA vrData;



			switch (e.key.keysym.sym)

	XMFLOAT4X4 world;

		return 1;

	SDL_DestroyWindow(win);

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include "DirectXManager.h"

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}

	m_pTexture = NULL;

	irData.pSysMem = &pIList[0];

				// access to vertex



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);







		delete[] pVList;

		KEY_PRESS_SURFACE_RIGHT,



	m_pTexture = NULL;

			}

	{

				tinyobj::real_t tx =



}

};

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.StructureByteStride = 0;

	txDesc.ArraySize = 1;



	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

 * Lesson 1: Hello World!

			exit(1);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];







#include <iostream>

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pSwapChain->Present(0, 0);

	D3D11_TEXTURE2D_DESC txDesc;

using std::cout; using std::endl;





		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	auto& attrib = reader.GetAttrib();

	scDesc.SampleDesc.Count = 1;

int SEGMENT = 36;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{

		&attrib,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < 3; i++)

	UINT offsets = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#include "DirectXManager.h"







		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];





	XMFLOAT4X4 world;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		&m_pImmediateContext);

int main(int, char**)

		SDL_Delay(1000);





		SDL_RenderCopy(ren, tex, NULL, NULL);



};

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_IndexCount = 0;





	SAFE_RELEASE(m_pDevice);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pSampler = NULL;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			default:

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	return hr;

	//定数バッファ作成



	m_pSwapChain->Present(0, 0);



				break;





}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemPitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pLightBuffer);





	//頂点レイアウト作成

	SAFE_RELEASE(m_pSwapChain);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{





	int     vcount = vertexlist.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_UP:

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				vertex.push_back(vertex_tmp);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pTexture = NULL;

	m_pSwapChain->Present(0, 0);



	D3D11_BUFFER_DESC cbDesc;



		&m_pImmediateContext);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}



};

	m_pRenderTargetView = NULL;

	SDL_DestroyRenderer(ren);

	Release();

	m_pIndexBuffer = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



#include <SDL.h>

		size_t index_offset = 0;  // インデントのオフセット



HRESULT CD3DTest::Create(HWND hwnd)



		KEY_PRESS_SURFACE_LEFT,

	UINT offsets = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_LEFT:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		{

	//定数バッファ作成

	enum KeyPressSurfaces

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_VertexCount = vcount;

	txDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

			}

	float    fov = XMConvertToRadians(20.0f);

		if (!ret)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::vector<tinyobj::material_t> materials;

				break;



struct ConstantMaterial {

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

};

		size_t index_offset = 0;

	}

	cbDesc.StructureByteStride = 0;

		{

				break;

}

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pDepthStencilView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	HRESULT              hr;

		if (e.type == SDL_QUIT)

		KEY_PRESS_SURFACE_TOTAL

		}



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include "DirectXManager.h"

	return 0;

	//定数バッファ作成

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	};

	{

	return 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			case SDLK_UP:





	SDL_DestroyWindow(win);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pVertexShader);

void CD3DTest::Release()

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pTextureView);

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

{

	if (FAILED(hr))

	//vector<WORD> index_t;

	cbDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

	return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.ArraySize = 1;

		&m_pImmediateContext);

	XMFLOAT4         eyePos;   //視点座標

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		{

		&m_pImmediateContext);

		{

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

			}

		}



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//定数バッファ作成



	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pSwapChain = NULL;

CD3DTest::~CD3DTest()



	reader_config.mtl_search_path = "./"; // Path to material files

	//Create Index



	SDL_DestroyWindow(win);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pVertexShader);

	UINT offsets = 0;

CD3DTest::CD3DTest()

			case SDLK_LEFT:

		SDL_Delay(1000);

	//Clean up our objects and quit

	m_pTextureView = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderPresent(ren);

	txDesc.MipLevels = 1;

			switch (e.key.keysym.sym)

CD3DTest::CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_TEXTURE2D_DESC txDesc;

	auto& shapes = reader.GetShapes();

struct ConstantLightBuffer {

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ID3D11Texture2D* pBackBuffer;



	reader_config.mtl_search_path = "./"; // Path to material files

	{

		{

	XMFLOAT4 pos;               //座標(x,y,z)



		SDL_RenderClear(ren);

#include <SDL.h>

	//頂点レイアウト作成

#include <iostream>

			}

	//Key press surfaces constants

	D3D_FEATURE_LEVEL level;



	std::string imagePath = "hello.bmp";

	delete[] pIList;

	}

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.OutputWindow = hwnd;

				break;

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (int j = 0; j < icount; j++)





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		{

	m_Viewport.TopLeftY = 0;

	std::string imagePath = "hello.bmp";



#include <SDL.h>

	ibDesc.CPUAccessFlags = 0;

	float    farZ = 100.0f;

		if (!reader.Error().empty())

			case SDLK_LEFT:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (!reader.Warning().empty())

	//頂点バッファ作成



	m_pVertexBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

		// Loop over faces(polygon)

	{

		exit(1);

	for (const auto& shape : shapes)

	scDesc.BufferCount = 1;

		return hr;

	WORD* pIList = new WORD[icount];

	scDesc.Windowed = TRUE;

	D3D_FEATURE_LEVEL level;

	m_pPixelShader = NULL;



struct ConstantMatrixBuffer {

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vbDesc.CPUAccessFlags = 0;







		pLevels,



	WORD   icount = indexList.size();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{



struct ConstantLightBuffer {

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Quit();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <iostream>

	XMFLOAT4X4 view;

	::GetClientRect(hwnd, &rect);

	delete[] pIList;

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyRenderer(ren);



	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&shapes,

	}

	WORD* pIList = new WORD[icount];

	}*/

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Angle += XMConvertToRadians(1.0f);

				// access to vertex

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderClear(ren);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	//定数バッファ作成

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	auto& attrib = reader.GetAttrib();

		return hr;

	auto& attrib = reader.GetAttrib();

};

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	{

		KEY_PRESS_SURFACE_RIGHT,

	vrData.SysMemSlicePitch = 0;

		return hr;

	//vector<WORD> index_t;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

}


