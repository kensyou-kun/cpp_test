	if (FAILED(hr))

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		if (!ret)

	SAFE_RELEASE(m_pTexture);

	D3D11_SUBRESOURCE_DATA irData;



		KEY_PRESS_SURFACE_RIGHT,

/*

int SEGMENT = 36;

		return hr;

CD3DTest::CD3DTest()

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





#ifdef _DEBUG



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_SAMPLER_DESC smpDesc;



		}

#include "DirectXManager.h"

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyTexture(tex);

		//User requests quit





	XMStoreFloat4(&clb.material.specular, materialSpecular);

#define TINYOBJLOADER_IMPLEMENTATION

	D3D_FEATURE_LEVEL level;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void CD3DTest::Release()

	}

	{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



}

		R"(cube.obj)");



	m_pTextureView = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

		}





		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	// Loop over shapes

		&scDesc,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pVList[i] = vertexlist[i];



		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::vector<tinyobj::shape_t> shapes;

}



struct ConstantMatrixBuffer {

		&level,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}

	SAFE_RELEASE(m_pVertexBuffer);

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pVertexBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.MiscFlags = 0;

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		KEY_PRESS_SURFACE_LEFT,



	m_pSampler = NULL;

	float    farZ = 100.0f;

	XMFLOAT4         eyePos;   //視点座標



				tinyobj::real_t ty =



	tinyobj::ObjReaderConfig reader_config;



	Vertex* pVList = new Vertex[vcount];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	//Clean up our objects and quit

		D3D11_SDK_VERSION,

	m_VertexCount = 0;

	UINT offsets = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	int     vcount = vertexlist.size();

		cout << "SDL_INIT_ERROR" << endl;







		return hr;

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));





	}

	SAFE_RELEASE(m_pSampler);



		&level,



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//vector<WORD> index_t;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		if (!ret)

	m_VertexCount = vcount;



	/*

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

}

			{

{



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::string error;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



			default:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferCount = 1;



		if (!reader.Error().empty())

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		pIList[j] = indexList[j];

	m_pImmediateContext = NULL;

	{

	//テクスチャ読み込み

	float    fov = XMConvertToRadians(20.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	Release();



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	WORD* pIList = new WORD[icount];



				tinyobj::real_t tx =

	vbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Count = 1;



		pLevels,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	WORD   icount = indexList.size();



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vrData.SysMemSlicePitch = 0;

	SDL_DestroyWindow(win);

		D3D_DRIVER_TYPE_HARDWARE,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		{

	txDesc.MiscFlags = 0;

	std::string imagePath = "hello.bmp";





	auto& attrib = reader.GetAttrib();

		&level,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			// Loop over vertices in the face.

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



{

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC ibDesc;



	SAFE_RELEASE(m_pIndexBuffer);



CD3DTest::CD3DTest()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	auto& attrib = reader.GetAttrib();



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4X4 world;

	}

	}

		{

	txDesc.Height = rect.Height();

	//頂点シェーダー生成

		&m_pImmediateContext);

			default:

			switch (e.key.keysym.sym)

	//ピクセルシェーダー生成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				indexlist.push_back(index);

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		KEY_PRESS_SURFACE_UP,

		}

	cbDesc.StructureByteStride = 0;

#include <iostream>

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	};



				tinyobj::real_t tx =

	scDesc.SampleDesc.Quality = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pVertexShader);

#include <iostream>

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;



#define TINYOBJLOADER_IMPLEMENTATION

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

		else if (e.type == SDL_KEYDOWN)

	txDesc.MiscFlags = 0;

				break;

	SDL_DestroyWindow(win);

#include <iostream>

using std::cout; using std::endl;



	scDesc.BufferDesc.Width = rect.Width();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//頂点バッファ作成

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			case SDLK_RIGHT:

		//User presses a key

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderClear(ren);

	vrData.SysMemSlicePitch = 0;

	m_pTextureView = NULL;



	XMStoreFloat4(&clb.eyePos, eye);



{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	for (int j = 0; j < icount; j++)

 * Lesson 1: Hello World!

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.MiscFlags = 0;

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMFLOAT4X4 world;

				break;

		SDL_RenderClear(ren);

		&m_pDevice,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_DOWN:

	m_VertexCount = 0;

	m_pVertexBuffer = NULL;



		D3D11_SDK_VERSION,

	//Clean up our objects and quit



		{

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	LoadObj(vertexlist, indexList);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		{

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pSampler);

	int     vcount = vertexlist.size();





	//テクスチャ読み込み

			default:

		//User presses a key

		}

		{

	dsDesc.Format = txDesc.Format;

	m_pSampler = NULL;



	//頂点バッファ作成

	m_pIndexBuffer = NULL;

				WORD index = idx.vertex_index;

	{

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		KEY_PRESS_SURFACE_TOTAL



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	Release();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_Quit();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pIndexBuffer);



	return;

		exit(1);

	ConstantLightBuffer clb;

	m_VertexCount = vcount;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(bmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	Vertex* pVList = new Vertex[vcount];

	WORD* pIList = new WORD[icount];

struct ConstantMatrixBuffer {

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	//ビューポート設定

CD3DTest::CD3DTest()

	m_Viewport.TopLeftX = 0;



	vbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	return hr;

	// Loop over shapes



		&shapes,

using std::cout; using std::endl;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_Viewport.MaxDepth = 1.0f;

		&m_pDevice,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vector<Vertex> vertexlist;



	D3D11_BUFFER_DESC ibDesc;





	m_Viewport.TopLeftX = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantMaterial {

}

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;





	txDesc.Width = rect.Width();

	cbDesc.StructureByteStride = 0;

			index_offset += fv;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

};

	SAFE_RELEASE(m_pRenderTargetView);

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.SampleDesc.Count = 1;

}





		exit(1);

		return hr;

		&materials,



	/*

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_TEXTURE2D_DESC txDesc;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



	Release();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	XMFLOAT4X4 view;



		flags,

		&materials,

	m_Viewport.TopLeftY = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

 * Lesson 1: Hello World!

	//vector<Vertex> vertex_t;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&error,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



int main(int, char**)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



 * Lesson 1: Hello World!

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	if (!error.empty())

using std::cout; using std::endl;

	CRect                rect;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	return;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	scDesc.OutputWindow = hwnd;





	m_Viewport.Height = (FLOAT)rect.Height();



		SDL_RenderCopy(ren, tex, NULL, NULL);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void CD3DTest::Release()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pTextureView);

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//ピクセルシェーダー生成

		//User presses a key

		return 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



struct ConstantLight {

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{

		exit(1);

	m_pRenderTargetView = NULL;



	if (FAILED(hr))

	}

struct ConstantLight {

			{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			break;

		&shapes,

	SDL_DestroyRenderer(ren);

		&m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

using std::cout; using std::endl;

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			index_offset += fv;





				break;

	D3D11_BUFFER_DESC cbDesc;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#endif

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pSampler = NULL;

	ibDesc.StructureByteStride = 0;

	//Key press surfaces constants



	{

	/*

				// access to vertex



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	//Key press surfaces constants

	m_Viewport.TopLeftY = 0;

	scDesc.BufferDesc.Height = rect.Height();

	m_pDevice = NULL;

		&scDesc,

	//ピクセルシェーダー生成

	if (FAILED(hr))



	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext = NULL;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_UP:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				tinyobj::real_t ty =

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

}

	txDesc.Height = rect.Height();

		SDL_Delay(1000);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_Viewport.TopLeftX = 0;



				WORD index = idx.vertex_index;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantLight {

	dsDesc.Texture2D.MipSlice = 0;

#endif

	//vector<WORD> index_t;

	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	float    farZ = 100.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		{

	{

	SDL_DestroyWindow(win);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC ibDesc;

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.eyePos, eye);



	vrData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;

			default:



struct ConstantLightBuffer {

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pSwapChain->Present(0, 0);

	//Clean up our objects and quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

HRESULT CD3DTest::Create(HWND hwnd)

	irData.SysMemPitch = 0;

struct ConstantMaterial {

	}

	vector<Vertex> vertexlist;

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//頂点レイアウト作成

	//深度ステンシルバッファ作成

		if (e.type == SDL_QUIT)

		&materials,



	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vector<Vertex> vertexlist;

	cbDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

		&materials,

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//Key press surfaces constants

	SAFE_RELEASE(m_pVertexShader);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



}


				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		KEY_PRESS_SURFACE_TOTAL

}



		return hr;

			default:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	pBackBuffer->Release();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	Release();

int main(int, char**)

struct ConstantLight {

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	UINT offsets = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//First we need to start up SDL, and make sure it went ok

	//ピクセルシェーダー生成

	m_VertexCount = vcount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vbDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

int SEGMENT = 36;

	SAFE_RELEASE(m_pDevice);



	std::vector<tinyobj::shape_t> shapes;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				indexlist.push_back(index);

		&attrib,

	if (FAILED(hr))

	{

		KEY_PRESS_SURFACE_DEFAULT,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

		return hr;

	if (FAILED(hr))



			case SDLK_RIGHT:

	SAFE_RELEASE(m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_DOWN,

		pVList[i] = vertexlist[i];



	m_pRenderTargetView = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.ArraySize = 1;

				tinyobj::real_t tx =

		NULL,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

				break;

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			default:

	vector<Vertex> vertexlist;

				// access to vertex

	SAFE_RELEASE(m_pDevice);

		}

	txDesc.Width = rect.Width();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pRenderTargetView);

	{





	}

			index_offset += num_vertices;

		size_t index_offset = 0;

	std::vector<tinyobj::material_t> materials;

			for (size_t v = 0; v < num_vertices; v++)





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_Delay(1000);





	vector<WORD> indexList;

	ConstantMatrixBuffer cmb;

	txDesc.ArraySize = 1;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	irData.pSysMem = &pIList[0];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	Release();

	pBackBuffer->Release();

#include "DirectXManager.h"

		&error,

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	txDesc.ArraySize = 1;

		SDL_Delay(1000);

struct ConstantLightBuffer {

				// access to vertex

		1,

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	m_pLightBuffer = NULL;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	vector<WORD> indexList;



	vrData.pSysMem = &pVList[0];

		if (!ret)

		1,



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

		&m_pImmediateContext);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

				vertex.push_back(vertex_tmp);

	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.Width = rect.Width();

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_IndexCount = 0;

	scDesc.OutputWindow = hwnd;

	WORD* pIList = new WORD[icount];



				vertex.push_back(vertex_tmp);



				indexlist.push_back(index);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

		R"(cube.obj)");

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MinDepth = 0.0f;

	return hr;

		return hr;

		return hr;

	::GetClientRect(hwnd, &rect);



	m_pSwapChain = NULL;

			//Select surfaces based on key press

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};

#include "DirectXManager.h"



		SDL_RenderPresent(ren);

		SDL_RenderPresent(ren);

	txDesc.Height = rect.Height();

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	for (int i = 0; i < vcount; i++)

}

	SDL_FreeSurface(bmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pSampler);

{

	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4X4 projection;

	//Clean up our objects and quit



	D3D11_BUFFER_DESC cbDesc;

HRESULT CD3DTest::Create(HWND hwnd)

}
	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pMatrixBuffer = NULL;

	D3D11_SAMPLER_DESC smpDesc;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	return;



	ConstantLight    pntLight; //点光源

	m_pIndexBuffer = NULL;

	// Loop over shapes



		else if (e.type == SDL_KEYDOWN)

	dsDesc.Format = txDesc.Format;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	return;

	HRESULT              hr;

	//頂点バッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Quit();

	scDesc.Windowed = TRUE;

	{

	XMFLOAT4X4 view;

	float    farZ = 100.0f;

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

};

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	m_pSampler = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	int     vcount = vertexlist.size();



	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.BufferCount = 1;

	cbDesc.StructureByteStride = 0;

	irData.SysMemSlicePitch = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	HRESULT              hr;

				break;



	WORD   icount = indexList.size();

		SDL_RenderClear(ren);

}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_TOTAL

	vrData.pSysMem = &pVList[0];

	scDesc.OutputWindow = hwnd;

int main(int, char**)

	for (int i = 0; i < vcount; i++)



	auto& shapes = reader.GetShapes();

	txDesc.SampleDesc.Quality = 0;

	UINT strides = sizeof(Vertex);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	int     vcount = vertexlist.size();

		{

	if (FAILED(hr))

	}

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t tx =

	vbDesc.CPUAccessFlags = 0;

	Release();

	//定数バッファ作成

	tinyobj::ObjReader reader;

				WORD index = idx.vertex_index;

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//Key press surfaces constants

	UINT strides = sizeof(Vertex);

	bool ret = tinyobj::LoadObj(

	return;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

	std::string error;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	bool ret = tinyobj::LoadObj(

	m_pIndexBuffer = NULL;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4X4 view;

				WORD index = idx.vertex_index;

	cbDesc.MiscFlags = 0;

};



		return hr;

	dsDesc.Format = txDesc.Format;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC vbDesc;

	}

		//User requests quit

 */

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.MipLevels = 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			exit(1);

	pBackBuffer->Release();

	m_pMatrixBuffer = NULL;

	m_pMatrixBuffer = NULL;

		delete[] pVList;



	D3D11_SUBRESOURCE_DATA vrData;

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		return hr;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	D3D11_BUFFER_DESC cbDesc;



		if (e.type == SDL_QUIT)

				vertex.push_back(vertex_tmp);

	UINT strides = sizeof(Vertex);

				vertex.push_back(vertex_tmp);

	}

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	scDesc.Windowed = TRUE;

		return hr;



		delete[] pVList;

		if (e.type == SDL_QUIT)

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//定数バッファ作成

	cbDesc.StructureByteStride = 0;

	{

	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);

	SDL_Quit();

CD3DTest::CD3DTest()

	{

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	ConstantLightBuffer clb;

	}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



{

			}



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vrData.SysMemSlicePitch = 0;

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	UINT offsets = 0;

		//User requests quit



	scDesc.OutputWindow = hwnd;

	Release();

{



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

struct ConstantLightBuffer {

		&level,

	::GetClientRect(hwnd, &rect);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_DestroyRenderer(ren);

CD3DTest::CD3DTest()

	m_pRenderTargetView = NULL;

	m_pInputLayout = NULL;



{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	irData.SysMemSlicePitch = 0;



		SDL_RenderClear(ren);

	tinyobj::attrib_t attrib;



	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

			index_offset += num_vertices;

		pLevels,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	};

	m_VertexCount = vcount;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		&attrib,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

struct ConstantMatrixBuffer {

	//頂点バッファ作成

	if (FAILED(hr))

		&m_pImmediateContext);

	m_pVertexShader = NULL;

/*

		&materials,

}



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.CPUAccessFlags = 0;

	vector<Vertex> vertexlist;

}
	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);



		return hr;





#define TINYOBJLOADER_IMPLEMENTATION

	SDL_DestroyRenderer(ren);

	SDL_Event e;

	std::string inputfile = "test.obj";



	WORD   icount = indexList.size();

	vrData.SysMemPitch = 0;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_Viewport.Width = (FLOAT)rect.Width();

	if (!error.empty())

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	for (const auto& shape : shapes)

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_IndexCount = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{



	m_Viewport.Height = (FLOAT)rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC ibDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&m_pImmediateContext);

			exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_IndexCount = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.CPUAccessFlags = 0;



HRESULT CD3DTest::Create(HWND hwnd)





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.MaxDepth = 1.0f;

		delete[] pVList;

	std::string inputfile = "test.obj";

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	}

		pIList[j] = indexList[j];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	tinyobj::ObjReaderConfig reader_config;

		1,

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pDepthStencilTexture);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{

	m_IndexCount = icount;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_DOWN,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	delete[] pVList;

	if (FAILED(hr))





		&error,

	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{



	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};





	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		SDL_RenderPresent(ren);



	if (!reader.Warning().empty())

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#ifdef _DEBUG

	scDesc.BufferCount = 1;

}

		else if (e.type == SDL_KEYDOWN)

	m_pVertexBuffer = NULL;

		if (!ret)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

void CD3DTest::Render()

	D3D11_BUFFER_DESC cbDesc;

	CRect                rect;

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





			for (size_t v = 0; v < fv; v++)





	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vector<WORD> indexList;

	{

	m_pDevice = NULL;

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				vertex.push_back(vertex_tmp);







				// access to vertex



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.SampleDesc.Count = 1;

	m_Angle += XMConvertToRadians(1.0f);

	auto& materials = reader.GetMaterials();

			index_offset += num_vertices;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		KEY_PRESS_SURFACE_TOTAL





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//テクスチャ読み込み

	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);



	//Clean up our objects and quit

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	D3D11_SUBRESOURCE_DATA irData;



}

	return 0;

	ConstantLightBuffer clb;

		SDL_Delay(1000);



	D3D11_BUFFER_DESC vbDesc;

	txDesc.ArraySize = 1;



			index_offset += fv;

	scDesc.OutputWindow = hwnd;

	vbDesc.StructureByteStride = 0;

		}



	m_Viewport.MinDepth = 0.0f;

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		return hr;



		return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pDevice);

#include <iostream>

 * Lesson 1: Hello World!

	auto& materials = reader.GetMaterials();

	vector<Vertex> vertexlist;

	vbDesc.StructureByteStride = 0;

	std::vector<tinyobj::material_t> materials;

	SDL_DestroyWindow(win);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//First we need to start up SDL, and make sure it went ok

{

		return hr;

	XMFLOAT4X4 projection;

				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	CRect                rect;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (!reader.Warning().empty())

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	}

	dsDesc.Format = txDesc.Format;

{

		if (e.type == SDL_QUIT)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				vertex.push_back(vertex_tmp);

	m_pVertexShader = NULL;

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Width = rect.Width();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty =





				break;

	D3D11_BUFFER_DESC ibDesc;

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_SAMPLER_DESC smpDesc;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SDL_DestroyWindow(win);

				break;

		&materials,

	//Clean up our objects and quit

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.BufferDesc.Height = rect.Height();

struct ConstantLightBuffer {

	CRect                rect;

	txDesc.CPUAccessFlags = 0;

#include <iostream>

	m_Viewport.MaxDepth = 1.0f;

}



			index_offset += fv;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//定数バッファ作成

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_FreeSurface(bmp);

	m_pSampler = NULL;

	return 0;



int SEGMENT = 36;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_DestroyWindow(win);

		&m_pImmediateContext);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

};

	if (!reader.Warning().empty())

struct ConstantMaterial {

void CD3DTest::Release()

	reader_config.mtl_search_path = "./"; // Path to material files



	m_Viewport.TopLeftX = 0;

		return hr;

		pVList[i] = vertexlist[i];

	{

};



	return 0;

void CD3DTest::Render()

	if (m_pImmediateContext)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pDepthStencilTexture);

	/*

	SDL_DestroyTexture(tex);

	for (const auto& shape : shapes)





				vertex.push_back(vertex_tmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pIndexBuffer = NULL;

	SDL_DestroyWindow(win);

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pTexture);

				WORD index = idx.vertex_index;



	for (int i = 0; i < 3; i++)

{

	if (FAILED(hr))

		if (!reader.Error().empty())

	cbDesc.CPUAccessFlags = 0;

	std::string imagePath = "hello.bmp";

				WORD index = idx.vertex_index;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





		&scDesc,

	std::string inputfile = "test.obj";

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pDevice);

	m_pSwapChain->Present(0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDevice = NULL;



				vertex.push_back(vertex_tmp);

	if (!error.empty())



		{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_LEFT:

	{

		{

	m_IndexCount = icount;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&error,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	SDL_DestroyTexture(tex);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantLight {

			index_offset += fv;

void CD3DTest::Release()

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_FreeSurface(suf);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.MiscFlags = 0;

			case SDLK_DOWN:



		return hr;

	XMStoreFloat4(&clb.eyePos, eye);





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	ConstantLight    pntLight; //点光源

		&m_pSwapChain,



	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&m_pSwapChain,

			{

	{

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_pTexture = NULL;

	// Loop over shapes



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User presses a key

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}



	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_TOTAL

void CD3DTest::Release()

}
	WORD* pIList = new WORD[icount];

		return hr;

	vbDesc.CPUAccessFlags = 0;

int main(int, char**)



		&attrib,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	//First we need to start up SDL, and make sure it went ok

{

	}

			{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	reader_config.mtl_search_path = "./"; // Path to material files

	vrData.pSysMem = &pVList[0];



			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			break;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.BufferDesc.Height = rect.Height();





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_DestroyRenderer(ren);

	D3D11_SAMPLER_DESC smpDesc;

{





};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC ibDesc;



		&level,

	XMFLOAT4 specular;          //反射(r,g,b)



	//Vertex* pVList = new Vertex[vcount];

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//vector<WORD> index_t;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pMatrixBuffer = NULL;

		SDL_RenderPresent(ren);

#ifdef _DEBUG



}

		pIList[j] = indexList[j];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





		cout << "SDL_INIT_ERROR" << endl;

		KEY_PRESS_SURFACE_LEFT,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_TOTAL

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

		&materials,

	float    farZ = 100.0f;

	ConstantMatrixBuffer cmb;



	ibDesc.MiscFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

		size_t index_offset = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

struct ConstantMatrixBuffer {



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.StructureByteStride = 0;

#include "DirectXManager.h"

		m_pImmediateContext->ClearState();

			default:

	scDesc.SampleDesc.Quality = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	scDesc.BufferDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

void CD3DTest::Render()

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantLightBuffer {



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

int main(int, char**)

	ConstantLightBuffer clb;

	//Create Index

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//First we need to start up SDL, and make sure it went ok

	ConstantLightBuffer clb;

			exit(1);



		KEY_PRESS_SURFACE_DOWN,

	}

		delete[] pIList;

	std::string error;



	m_Viewport.TopLeftY = 0;

	auto& materials = reader.GetMaterials();

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

using std::cout; using std::endl;

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

			case SDLK_DOWN:

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ConstantLight    pntLight; //点光源

};



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		{

	m_pDepthStencilView = NULL;

				// access to vertex

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	auto& attrib = reader.GetAttrib();

		return hr;

};

	cbDesc.StructureByteStride = 0;

	m_pVertexShader = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

void CD3DTest::Render()

	//First we need to start up SDL, and make sure it went ok

	return 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



};

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		pIList[j] = indexList[j];

	m_pDevice = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		m_pImmediateContext->ClearState();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSampler);





	if (FAILED(hr))

	irData.SysMemPitch = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

struct ConstantMaterial {

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//vector<WORD> index_t;

}

		return hr;

	//Clean up our objects and quit

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pLightBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_SUBRESOURCE_DATA irData;

	m_pVertexBuffer = NULL;

	SDL_DestroyTexture(tex);



};

			case SDLK_RIGHT:

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&level,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	irData.SysMemSlicePitch = 0;

	WORD* pIList = new WORD[icount];

#include <iostream>



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	Release();

	enum KeyPressSurfaces

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

CD3DTest::CD3DTest()

	{

 * Lesson 1: Hello World!

		KEY_PRESS_SURFACE_TOTAL

	auto& shapes = reader.GetShapes();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		pVList[i] = vertexlist[i];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_SAMPLER_DESC smpDesc;



		return hr;



	m_pSwapChain = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		// Loop over faces(polygon)

#endif

}

		&error,

	for (int i = 0; i < vcount; i++)

int main(int, char**)

				break;

	}

	{



	//頂点レイアウト作成



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			{



{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_UP:

	XMFLOAT4 ambient;           //環境(r,g,b)

	WORD* pIList = new WORD[icount];

void CD3DTest::Render()

	float    fov = XMConvertToRadians(20.0f);

CD3DTest::CD3DTest()

	irData.pSysMem = &pIList[0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.Height = rect.Height();

	m_pIndexBuffer = NULL;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

		{

		&scDesc,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Event e;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



}

		KEY_PRESS_SURFACE_DEFAULT,

		pLevels,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			default:

		&scDesc,

struct ConstantMatrixBuffer {



		D3D11_SDK_VERSION,

	SDL_DestroyTexture(tex);

	//Key press surfaces constants

	}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	return 0;

	m_Angle += XMConvertToRadians(1.0f);

	//頂点バッファ作成

	txDesc.CPUAccessFlags = 0;

	HRESULT              hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.MiscFlags = 0;



	m_pTexture = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



			exit(1);

	D3D11_BUFFER_DESC ibDesc;



			case SDLK_RIGHT:

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//テクスチャ読み込み

		}

	D3D11_BUFFER_DESC cbDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			{

	{

void CD3DTest::Release()

struct ConstantMaterial {

	return;

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	cbDesc.MiscFlags = 0;

	for (int i = 0; i < vcount; i++)

#include <SDL.h>

	m_pVertexShader = NULL;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

			case SDLK_LEFT:

	{



	//頂点バッファ作成



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&level,

	//First we need to start up SDL, and make sure it went ok

	m_Viewport.MaxDepth = 1.0f;

		else if (e.type == SDL_KEYDOWN)

	auto& shapes = reader.GetShapes();

	m_Viewport.MinDepth = 0.0f;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;

	ID3D11Texture2D* pBackBuffer;

	ibDesc.MiscFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			int num_vertices = shape.mesh.num_face_vertices[f];



		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

struct ConstantLightBuffer {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		{

	CRect                rect;

#include <SDL.h>

				WORD index = idx.vertex_index;

	m_pLightBuffer = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	enum KeyPressSurfaces





				vertex.push_back(vertex_tmp);

};

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





		pLevels,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;



	auto& materials = reader.GetMaterials();

	m_Viewport.TopLeftY = 0;

	D3D11_SUBRESOURCE_DATA vrData;



	m_Viewport.Height = (FLOAT)rect.Height();

	//Clean up our objects and quit

};



	for (const auto& shape : shapes)

	auto& attrib = reader.GetAttrib();



}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;

	for (const auto& shape : shapes)



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_UP,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))



		SDL_RenderPresent(ren);

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSwapChain->Present(0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

	SDL_DestroyTexture(tex);

	txDesc.MipLevels = 1;

			{

	if (FAILED(hr))

	m_pInputLayout = NULL;

	ConstantMaterial material; //物体の質感

	m_pDepthStencilView = NULL;

	}

	::GetClientRect(hwnd, &rect);



	//Create Index

	tinyobj::attrib_t attrib;

#include <SDL.h>



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	m_pDevice = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	D3D11_BUFFER_DESC vbDesc;

	txDesc.ArraySize = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	reader_config.mtl_search_path = "./"; // Path to material files



		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pSampler);

#ifdef _DEBUG

	bool ret = tinyobj::LoadObj(

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		D3D11_SDK_VERSION,





	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pInputLayout);

	auto& shapes = reader.GetShapes();



			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

			case SDLK_UP:

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pInputLayout);



	cbDesc.StructureByteStride = 0;

	}

	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		else if (e.type == SDL_KEYDOWN)

	while (SDL_PollEvent(&e) != 0)

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext = NULL;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

			switch (e.key.keysym.sym)





	D3D11_SUBRESOURCE_DATA irData;

		}



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		KEY_PRESS_SURFACE_DOWN,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		NULL,

		&shapes,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			case SDLK_DOWN:

	if (m_pImmediateContext)

	dsDesc.Format = txDesc.Format;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}*/

	Release();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

void CD3DTest::Release()

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{



	dsDesc.Format = txDesc.Format;

		{

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_UP,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vrData.SysMemPitch = 0;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pIndexBuffer);

	{



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!error.empty())

	LoadObj(vertexlist, indexList);

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		exit(1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_FreeSurface(suf);

#ifdef _DEBUG

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点シェーダー生成

};

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	UINT flags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&scDesc,

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	UINT strides = sizeof(Vertex);

		if (!ret)

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

};

	SDL_Event e;

	SAFE_RELEASE(m_pRenderTargetView);

	//ビューポート設定

	D3D11_TEXTURE2D_DESC txDesc;

	pBackBuffer->Release();

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	enum KeyPressSurfaces

	}

	ConstantLight    pntLight; //点光源

	delete[] pVList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	SAFE_RELEASE(m_pDevice);

			// Loop over vertices in the face.

	}*/

		return hr;

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

#include <iostream>

	SAFE_RELEASE(m_pDepthStencilTexture);

/*

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.MiscFlags = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

{

	XMFLOAT4X4 world;

	m_pPixelShader = NULL;

				vertex.push_back(vertex_tmp);

		&materials,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	Release();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Create Index



	m_pIndexBuffer = NULL;

 */





{

	XMFLOAT4X4 view;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

struct ConstantLight {

	SDL_Event e;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#include <iostream>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	float    aspect = m_Viewport.Width / m_Viewport.Height;



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		&attrib,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

	m_Viewport.MaxDepth = 1.0f;



	scDesc.BufferCount = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t ty =



	//ビューポート設定

	//頂点シェーダー生成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_RenderPresent(ren);

	{

	D3D_FEATURE_LEVEL level;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 pos;               //座標(x,y,z)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantMatrixBuffer cmb;

	return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	txDesc.Usage = D3D11_USAGE_DEFAULT;





{

	ConstantMatrixBuffer cmb;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

			switch (e.key.keysym.sym)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			// Loop over vertices in the face.

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDevice = NULL;

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 pos;               //座標(x,y,z)

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pVertexBuffer);



	SDL_FreeSurface(suf);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

void CD3DTest::Release()

#endif

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_FreeSurface(bmp);

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t ty =



	//深度ステンシルバッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			switch (e.key.keysym.sym)

		&attrib,

	m_IndexCount = icount;



void CD3DTest::Render()

	if (FAILED(hr))





		SDL_RenderPresent(ren);

	enum KeyPressSurfaces

		return hr;

{

	{

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pSwapChain->Present(0, 0);

			{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

		size_t index_offset = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderPresent(ren);

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4X4 world;

	XMFLOAT4X4 projection;

	{



	{

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

HRESULT CD3DTest::Create(HWND hwnd)

	DXGI_SWAP_CHAIN_DESC scDesc;

				break;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	irData.pSysMem = &pIList[0];

		R"(cube.obj)");

		size_t index_offset = 0;

	m_pTextureView = NULL;

	}

		//User requests quit

}

		delete[] pVList;

	m_pVertexShader = NULL;

			case SDLK_DOWN:

}



	}

	txDesc.ArraySize = 1;

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.ArraySize = 1;

	if (FAILED(hr))



		NULL,

	SAFE_RELEASE(m_pRenderTargetView);

	WORD* pIList = new WORD[icount];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	}*/

	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b)



	scDesc.Windowed = TRUE;

			for (size_t v = 0; v < fv; v++)

HRESULT CD3DTest::Create(HWND hwnd)

	while (SDL_PollEvent(&e) != 0)

	irData.SysMemPitch = 0;





		SDL_RenderPresent(ren);

using std::cout; using std::endl;

 */

	}*/

		KEY_PRESS_SURFACE_UP,

		delete[] pVList;



		}

int main(int, char**)

struct ConstantMaterial {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pRenderTargetView = NULL;



		KEY_PRESS_SURFACE_RIGHT,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pSampler = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	{

#include <SDL.h>

	//vector<WORD> index_t;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			case SDLK_RIGHT:

			switch (e.key.keysym.sym)





#include "DirectXManager.h"

				break;

	m_VertexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	{

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

/*

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			case SDLK_DOWN:

	delete[] pIList;

	SDL_Event e;

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.SampleDesc.Count = 1;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	m_Viewport.TopLeftX = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.BufferDesc.Height = rect.Height();

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4X4 world;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int i = 0; i < 3; i++)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

		return hr;

	{

	m_IndexCount = icount;

{

	SAFE_RELEASE(m_pPixelShader);

			{

	m_pSwapChain->Present(0, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//vector<WORD> index_t;

	return 0;

	std::string inputfile = "test.obj";

	ConstantMatrixBuffer cmb;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);

	vrData.SysMemSlicePitch = 0;

void CD3DTest::Release()

	XMStoreFloat4(&clb.eyePos, eye);

	Release();

	UINT flags = 0;

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_FreeSurface(suf);

	for (int i = 0; i < 3; i++)





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

};

	txDesc.Height = rect.Height();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#include <SDL.h>

			int num_vertices = shape.mesh.num_face_vertices[f];

		}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DOWN,

		if (e.type == SDL_QUIT)

		pIList[j] = indexList[j];

	vbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	m_Viewport.TopLeftX = 0;

int main(int, char**)

		else if (e.type == SDL_KEYDOWN)

	for (int j = 0; j < icount; j++)

	scDesc.SampleDesc.Count = 1;

	{

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

 */

		return hr;

	if (FAILED(hr))

			index_offset += fv;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	enum KeyPressSurfaces

	txDesc.MipLevels = 1;

	XMFLOAT4X4 view;

		D3D_DRIVER_TYPE_HARDWARE,

	}

	SDL_DestroyWindow(win);

		return 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))

	tinyobj::ObjReader reader;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.MiscFlags = 0;

	//インデックスバッファ作成

			for (size_t v = 0; v < fv; v++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

#include "DirectXManager.h"

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



struct ConstantMaterial {

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				WORD index = idx.vertex_index;



				vertex.push_back(vertex_tmp);

	m_pSampler = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.MinDepth = 0.0f;

	return hr;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

CD3DTest::~CD3DTest()

	//頂点シェーダー生成

	txDesc.Height = rect.Height();

	auto& materials = reader.GetMaterials();

	SDL_FreeSurface(bmp);









void CD3DTest::Render()

	XMFLOAT4         eyePos;   //視点座標

	WORD* pIList = new WORD[icount];

		}

				indexlist.push_back(idx.vertex_index);

			switch (e.key.keysym.sym)

		return hr;

		{



	delete[] pIList;

	//Create Index

	}



	std::string error;

			}

		exit(1);



	vbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				vertex.push_back(vertex_tmp);

	cbDesc.MiscFlags = 0;

		{

	};

		&materials,

};

			default:

				WORD index = idx.vertex_index;



	};

	//頂点バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext = NULL;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_VertexCount = 0;

		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	delete[] pIList;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

int main(int, char**)



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	float    farZ = 100.0f;

int SEGMENT = 36;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		flags,



}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//インデックスバッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//Vertex* pVList = new Vertex[vcount];



#include <SDL.h>

	vector<Vertex> vertexlist;

	vrData.SysMemSlicePitch = 0;

	//Key press surfaces constants



				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::CD3DTest()

	vbDesc.MiscFlags = 0;

		return hr;

		flags,

	//頂点バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

using std::cout; using std::endl;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

				break;

	SAFE_RELEASE(m_pDevice);

			for (size_t v = 0; v < num_vertices; v++)

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyRenderer(ren);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	while (SDL_PollEvent(&e) != 0)

	CRect                rect;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (!error.empty())

		if (!ret)

	cbDesc.CPUAccessFlags = 0;

	}

		exit(1);



	D3D11_SUBRESOURCE_DATA irData;

				// access to vertex

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;

	SAFE_RELEASE(m_pMatrixBuffer);

}

	XMFLOAT4 specular;          //反射(r,g,b)

	{

{

	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

}

	SDL_DestroyRenderer(ren);



		&m_pSwapChain,

	SAFE_RELEASE(m_pPixelShader);

	vrData.SysMemSlicePitch = 0;

	cbDesc.CPUAccessFlags = 0;

	m_pRenderTargetView = NULL;

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		R"(cube.obj)");

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



#include <SDL.h>

				vertex.push_back(vertex_tmp);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (!ret)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vbDesc.StructureByteStride = 0;

	m_pIndexBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_Viewport.Height = (FLOAT)rect.Height();

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	auto& shapes = reader.GetShapes();



	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



{



	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Render()

};

	SAFE_RELEASE(m_pDevice);

		R"(cube.obj)");



	if (m_pImmediateContext)

	txDesc.SampleDesc.Quality = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

}

	SDL_Quit();



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    nearZ = 0.1f;

#include <iostream>

	D3D11_BUFFER_DESC ibDesc;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

	m_pDevice = NULL;

	}*/

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

		&materials,

	ConstantLightBuffer clb;

	{

	{

	float    farZ = 100.0f;



	WORD* pIList = new WORD[icount];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			case SDLK_RIGHT:

		KEY_PRESS_SURFACE_DEFAULT,

	// Loop over shapes

	}

	SDL_DestroyTexture(tex);

		}

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	UINT offsets = 0;

int main(int, char**)

				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//vector<Vertex> vertex_t;

	m_pTextureView = NULL;

	Release();

	//定数バッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_TOTAL

		return 1;

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

	vrData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Height = rect.Height();

	return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

CD3DTest::~CD3DTest()

		flags,

	XMStoreFloat4(&clb.eyePos, eye);

	std::vector<tinyobj::shape_t> shapes;



}



	if (m_pImmediateContext)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	tinyobj::attrib_t attrib;

	SDL_FreeSurface(suf);

#include <iostream>

	ibDesc.MiscFlags = 0;



	{



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//ピクセルシェーダー生成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}
		SDL_RenderClear(ren);

		SDL_RenderClear(ren);

		else if (e.type == SDL_KEYDOWN)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	// Loop over shapes

#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		KEY_PRESS_SURFACE_TOTAL

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SDL_Event e;

	SAFE_RELEASE(m_pDevice);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_VertexCount = 0;

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



CD3DTest::~CD3DTest()

		SDL_Delay(1000);

	vector<WORD> indexList;

	{



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

			}



#endif

	}

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];







	scDesc.OutputWindow = hwnd;

	ibDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	ConstantLight    pntLight; //点光源

	float    fov = XMConvertToRadians(20.0f);

	int     vcount = vertexlist.size();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

	{





	txDesc.CPUAccessFlags = 0;





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		pVList[i] = vertexlist[i];

	SDL_FreeSurface(bmp);

		&attrib,



	XMFLOAT4X4 projection;

	m_pVertexShader = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#ifdef _DEBUG

#define TINYOBJLOADER_IMPLEMENTATION

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	ConstantMatrixBuffer cmb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	SAFE_RELEASE(m_pSampler);

	{

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantLightBuffer clb;

		1,

	D3D_FEATURE_LEVEL level;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			}

		KEY_PRESS_SURFACE_DOWN,

	ibDesc.MiscFlags = 0;

	{

	if (!error.empty())

	return;

}

	ConstantLight    pntLight; //点光源

			case SDLK_LEFT:

	vrData.SysMemPitch = 0;

		}

				break;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//深度ステンシルバッファ作成

	pBackBuffer->Release();

	tinyobj::ObjReaderConfig reader_config;

		}

	//Key press surfaces constants

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderPresent(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pSampler = NULL;

	m_pVertexBuffer = NULL;

		//User requests quit

	::GetClientRect(hwnd, &rect);

		&m_pImmediateContext);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	irData.pSysMem = &pIList[0];

			exit(1);



		pLevels,

		if (e.type == SDL_QUIT)

	scDesc.BufferDesc.Width = rect.Width();

		// Loop over faces(polygon)

	SDL_DestroyTexture(tex);



	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	ConstantLight    pntLight; //点光源

	{

		1,



	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 projection;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		if (!ret)

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			}

int SEGMENT = 36;

		}

				vertex.push_back(vertex_tmp);

	{

	D3D11_BUFFER_DESC cbDesc;

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	auto& attrib = reader.GetAttrib();

			}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext = NULL;

	{



		KEY_PRESS_SURFACE_DEFAULT,

#include <iostream>

				indexlist.push_back(idx.vertex_index);

	vbDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<Vertex> vertex_t;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_DestroyTexture(tex);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}
	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

		// Loop over faces(polygon)



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	txDesc.MipLevels = 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		pVList[i] = vertexlist[i];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	bool ret = tinyobj::LoadObj(



{

		m_pImmediateContext->ClearState();

{

		&scDesc,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;



	//頂点バッファ作成

	SAFE_RELEASE(m_pTexture);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

using std::cout; using std::endl;



		&m_pImmediateContext);



			//Select surfaces based on key press

		if (!ret)

	};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	auto& shapes = reader.GetShapes();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{



			//Select surfaces based on key press

 */

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.BufferDesc.Width = rect.Width();

	{

	D3D11_SAMPLER_DESC smpDesc;









	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))



CD3DTest::~CD3DTest()

			index_offset += fv;

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];



	vector<WORD> indexList;

	if (FAILED(hr))



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int i = 0; i < vcount; i++)





	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;



	CRect                rect;



int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

		&attrib,

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Height = (FLOAT)rect.Height();

		}

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

using std::cout; using std::endl;





	m_pSampler = NULL;

}

		}

	SAFE_RELEASE(m_pMatrixBuffer);



	std::string inputfile = "test.obj";

	float    farZ = 100.0f;







	XMFLOAT4         ambient;  //環境光(r,g,b)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;

	m_pIndexBuffer = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (!error.empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;









	for (int i = 0; i < 3; i++)

	ConstantLightBuffer clb;

	Vertex* pVList = new Vertex[vcount];



#include <SDL.h>

	vbDesc.StructureByteStride = 0;

		//User requests quit

	}

		return 1;

	return;

		KEY_PRESS_SURFACE_UP,

#include <iostream>



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.MaxDepth = 1.0f;

	scDesc.SampleDesc.Count = 1;

int SEGMENT = 36;

			exit(1);

		SDL_RenderPresent(ren);

	m_VertexCount = vcount;

	{

				vertex.push_back(vertex_tmp);

	}

		&m_pDevice,

	delete[] pIList;

struct ConstantLight {



	std::vector<tinyobj::material_t> materials;

	txDesc.SampleDesc.Quality = 0;



#include <SDL.h>

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&scDesc,

int main(int, char**)



	//vector<Vertex> vertex_t;



#include <SDL.h>

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//Key press surfaces constants

int main(int, char**)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

int main(int, char**)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//定数バッファ作成



	m_pSwapChain->Present(0, 0);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_IndexCount = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



{



		}

{

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

		{

	UINT flags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.MiscFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		D3D11_SDK_VERSION,

/*



	m_pTexture = NULL;

	CRect                rect;

	ConstantMatrixBuffer cmb;

		{

			//Select surfaces based on key press

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{

	SAFE_RELEASE(m_pLightBuffer);



struct ConstantMatrixBuffer {



		}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			for (size_t v = 0; v < fv; v++)

	ZeroMemory(&txDesc, sizeof(txDesc));

		D3D11_SDK_VERSION,

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

		m_pImmediateContext->ClearState();

	D3D11_BUFFER_DESC cbDesc;



{

		return hr;

	SAFE_RELEASE(m_pInputLayout);

	//Key press surfaces constants

#include <SDL.h>

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;



	//インデックスバッファ作成

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SAFE_RELEASE(m_pDevice);

	}

	SDL_Event e;

	std::string error;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

#include <iostream>

int SEGMENT = 36;

		flags,

/*

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	//テクスチャ読み込み

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferDesc.Width = rect.Width();



			index_offset += fv;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Key press surfaces constants

	dsDesc.Texture2D.MipSlice = 0;

	m_pDepthStencilTexture = NULL;

	auto& attrib = reader.GetAttrib();



	LoadObj(vertexlist, indexList);



	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!error.empty())

}



	m_pDevice = NULL;

	//頂点バッファ作成

	m_pSwapChain = NULL;

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



			//Select surfaces based on key press

	XMFLOAT4 specular;          //反射(r,g,b)



	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	//頂点レイアウト作成

	SAFE_RELEASE(m_pMatrixBuffer);

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return 1;

	m_pDevice = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//ピクセルシェーダー生成

	//Vertex* pVList = new Vertex[vcount];

	D3D11_SUBRESOURCE_DATA vrData;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		return hr;

	WORD* pIList = new WORD[icount];



		if (!ret)

		{



	SAFE_RELEASE(m_pLightBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//深度ステンシルバッファ作成

	if (FAILED(hr))

			case SDLK_RIGHT:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			case SDLK_LEFT:

		KEY_PRESS_SURFACE_DOWN,

	}

	ibDesc.MiscFlags = 0;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pTexture);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}



	txDesc.SampleDesc.Quality = 0;

	}

#include <SDL.h>

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_DEFAULT,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//頂点レイアウト作成

	return 0;

			default:

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	m_pSwapChain->Present(0, 0);

	m_Viewport.MinDepth = 0.0f;



	m_IndexCount = icount;



	m_pInputLayout = NULL;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

{

void CD3DTest::Render()

			index_offset += fv;



			{

	WORD* pIList = new WORD[icount];



	m_pSwapChain = NULL;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



}

		m_pImmediateContext->ClearState();



	for (const auto& shape : shapes)

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	cbDesc.MiscFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.CPUAccessFlags = 0;

			index_offset += fv;

	txDesc.MiscFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	LoadObj(vertexlist, indexList);

	for (int i = 0; i < 3; i++)

		SDL_RenderClear(ren);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.StructureByteStride = 0;

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

#define TINYOBJLOADER_IMPLEMENTATION

#endif

	SAFE_RELEASE(m_pRenderTargetView);

		1,





		&level,



		SDL_RenderClear(ren);

			default:

	SAFE_RELEASE(m_pDevice);

	cbDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;



	SDL_DestroyRenderer(ren);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	//vector<Vertex> vertex_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//Clean up our objects and quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			// Loop over vertices in the face.

		return hr;

			//Select surfaces based on key press

	/*

			}

		return hr;

	m_pSwapChain->Present(0, 0);



	if (!reader.ParseFromFile(inputfile, reader_config))

	Release();

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_DOWN,

	vrData.pSysMem = &pVList[0];



{





	//深度ステンシルバッファ作成

	}

	if (FAILED(hr))

		&scDesc,

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pSwapChain);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&m_pDevice,

#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;





	}*/

	//頂点シェーダー生成



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

HRESULT CD3DTest::Create(HWND hwnd)

	}

		return hr;

	if (FAILED(hr))



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	delete[] pIList;

	txDesc.SampleDesc.Quality = 0;

	vector<WORD> indexList;

		if (e.type == SDL_QUIT)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

			{



		NULL,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		&m_pImmediateContext);

	SAFE_RELEASE(m_pTextureView);

		return hr;

	m_VertexCount = vcount;

		pVList[i] = vertexlist[i];

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//vector<Vertex> vertex_t;

#include <SDL.h>

	if (!error.empty())

		}

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	pBackBuffer->Release();



			case SDLK_LEFT:



	irData.pSysMem = &pIList[0];







	UINT flags = 0;

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (m_pImmediateContext)

	float    nearZ = 0.1f;



	if (!reader.ParseFromFile(inputfile, reader_config))

			{



	SAFE_RELEASE(m_pImmediateContext);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			for (size_t v = 0; v < fv; v++)

	cbDesc.CPUAccessFlags = 0;



	//vector<Vertex> vertex_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	std::vector<tinyobj::shape_t> shapes;

	scDesc.OutputWindow = hwnd;

	::GetClientRect(hwnd, &rect);

	Vertex* pVList = new Vertex[vcount];

	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pSwapChain = NULL;

	SDL_Quit();

	auto& shapes = reader.GetShapes();

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

CD3DTest::CD3DTest()

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



int main(int, char**)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSwapChain);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

HRESULT CD3DTest::Create(HWND hwnd)

	vrData.SysMemPitch = 0;

	cbDesc.MiscFlags = 0;





	m_VertexCount = 0;

	CRect                rect;

}

{

	m_Viewport.Height = (FLOAT)rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	vrData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

		&error,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



{



		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pSampler = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Quit();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

	LoadObj(vertexlist, indexList);

	WORD   icount = indexList.size();

	ID3D11Texture2D* pBackBuffer;

#ifdef _DEBUG

	vrData.SysMemSlicePitch = 0;

		}

	cbDesc.CPUAccessFlags = 0;

}



	if (FAILED(hr))

int main(int, char**)

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);



	//First we need to start up SDL, and make sure it went ok

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t tx =

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

}



	m_Viewport.MinDepth = 0.0f;

		KEY_PRESS_SURFACE_TOTAL

	scDesc.SampleDesc.Quality = 0;



#define TINYOBJLOADER_IMPLEMENTATION

			// Loop over vertices in the face.



	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		D3D11_SDK_VERSION,

	txDesc.MipLevels = 1;

		//User presses a key

	SAFE_RELEASE(m_pDepthStencilTexture);





	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	float    nearZ = 0.1f;

			//Select surfaces based on key press

	XMFLOAT4X4 view;

	{

	D3D11_BUFFER_DESC ibDesc;







	auto& materials = reader.GetMaterials();

	SDL_Quit();

	{

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

	dsDesc.Texture2D.MipSlice = 0;

	{

	UINT offsets = 0;

	SDL_Quit();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

struct ConstantLightBuffer {

	pBackBuffer->Release();

struct ConstantMaterial {

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;

	if (m_pImmediateContext)

	{

	D3D11_BUFFER_DESC ibDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pPixelShader = NULL;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

{

struct ConstantLight {



	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	XMFLOAT4 ambient;           //環境(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

		delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};



	//ビューポート設定

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			case SDLK_DOWN:





	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	Release();

	/*

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		// Loop over faces(polygon)



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		1,



	vbDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DEFAULT,

	WORD   icount = indexList.size();

	{

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_BUFFER_DESC vbDesc;

	HRESULT              hr;

}

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.Width = rect.Width();



struct ConstantMatrixBuffer {



	SDL_Quit();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

int SEGMENT = 36;

	vrData.pSysMem = &pVList[0];



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	D3D11_BUFFER_DESC cbDesc;

	txDesc.SampleDesc.Quality = 0;

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	delete[] pVList;

	cbDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	tinyobj::attrib_t attrib;



		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_VertexCount = 0;

#include <iostream>

			}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pMatrixBuffer);



	vbDesc.MiscFlags = 0;

	scDesc.BufferCount = 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	irData.SysMemSlicePitch = 0;

	//Key press surfaces constants

	delete[] pVList;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





		m_pImmediateContext->ClearState();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vrData.SysMemSlicePitch = 0;

	}

	scDesc.SampleDesc.Quality = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		flags,

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Release()

		&m_pImmediateContext);



	ConstantLightBuffer clb;

}
	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(bmp);

	//Key press surfaces constants

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D_FEATURE_LEVEL level;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{





	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    nearZ = 0.1f;

HRESULT CD3DTest::Create(HWND hwnd)

			}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//深度ステンシルバッファ作成

	vrData.SysMemPitch = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pDevice);

	{

	vrData.SysMemSlicePitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pSwapChain->Present(0, 0);

	//深度ステンシルバッファ作成





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

using std::cout; using std::endl;

	{

}

	auto& materials = reader.GetMaterials();

	ConstantMatrixBuffer cmb;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			for (size_t v = 0; v < num_vertices; v++)

	//インデックスバッファ作成

			{

	enum KeyPressSurfaces

}

	{




