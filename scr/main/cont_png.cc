	ConstantLight    pntLight; //点光源



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			default:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		//User requests quit





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderClear(ren);



	XMFLOAT4 pos;               //座標(x,y,z)

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.CPUAccessFlags = 0;

	CRect                rect;

		return hr;

		&scDesc,

	{

	return;

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

		&m_pDevice,

	//Vertex* pVList = new Vertex[vcount];





	{

				tinyobj::real_t ty =

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	ibDesc.ByteWidth = sizeof(WORD) * icount;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	txDesc.ArraySize = 1;

		return hr;

void CD3DTest::Render()

	{

	//First we need to start up SDL, and make sure it went ok

	txDesc.MiscFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::CD3DTest()

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	DXGI_SWAP_CHAIN_DESC scDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	Release();

	delete[] pVList;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	for (int i = 0; i < 3; i++)

		SDL_RenderPresent(ren);

			{

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pSwapChain,

	m_pLightBuffer = NULL;



	SAFE_RELEASE(m_pVertexShader);

}
	ibDesc.StructureByteStride = 0;

	return;

	if (FAILED(hr))



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//インデックスバッファ作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&m_pImmediateContext);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4X4 projection;

		return hr;



};

		&m_pSwapChain,

	XMFLOAT4 pos;               //座標(x,y,z)

	std::vector<tinyobj::shape_t> shapes;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

		}

	}



	ConstantMatrixBuffer cmb;

}

	WORD   icount = indexList.size();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{



#ifdef _DEBUG

	pBackBuffer->Release();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.StructureByteStride = 0;

struct ConstantMaterial {

	//定数バッファ作成

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (int j = 0; j < icount; j++)

	m_VertexCount = 0;

		SDL_Delay(1000);

		R"(cube.obj)");

	m_pDevice = NULL;

	HRESULT              hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Height = rect.Height();

	m_Viewport.TopLeftX = 0;

		m_pImmediateContext->ClearState();



	//インデックスバッファ作成



			}

	{

		return hr;

	LoadObj(vertexlist, indexList);



	{

	tinyobj::ObjReader reader;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

HRESULT CD3DTest::Create(HWND hwnd)

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

			switch (e.key.keysym.sym)

		R"(cube.obj)");

		return hr;

using std::cout; using std::endl;

	ID3D11Texture2D* pBackBuffer;

		&m_pDevice,

	return hr;

		}

		if (e.type == SDL_QUIT)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pMatrixBuffer = NULL;





		}



	//vector<WORD> index_t;

	for (int j = 0; j < icount; j++)

	};





				WORD index = idx.vertex_index;

		//User presses a key

};

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	pBackBuffer->Release();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

struct ConstantLight {

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//Create Index

	SDL_DestroyTexture(tex);

};

	vbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));



		return hr;

	{



	SDL_DestroyRenderer(ren);



	//Clean up our objects and quit

		SDL_RenderPresent(ren);



		//User presses a key

	m_pIndexBuffer = NULL;





	XMFLOAT4 attenuate;         //減衰(a,b,c)

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

{

/*

	return 0;

	//ビューポート設定

				// access to vertex

				break;

	UINT flags = 0;

	for (int i = 0; i < vcount; i++)

	//Vertex* pVList = new Vertex[vcount];

			{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.SampleDesc.Quality = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//Key press surfaces constants



	}



	m_Viewport.Width = (FLOAT)rect.Width();

	return 0;

	{





	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pPixelShader);

			index_offset += num_vertices;

};

#include <iostream>

	scDesc.SampleDesc.Count = 1;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.SampleDesc.Count = 1;

}
	XMFLOAT4X4 view;



	m_VertexCount = 0;

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	//頂点シェーダー生成





		&m_pImmediateContext);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Angle += XMConvertToRadians(1.0f);

				vertex.push_back(vertex_tmp);

	LoadObj(vertexlist, indexList);

				// access to vertex



	{

	std::string inputfile = "test.obj";

		&error,

	XMFLOAT4 specular;          //反射(r,g,b)

		D3D11_SDK_VERSION,

	vector<WORD> indexList;

	}

		&m_pImmediateContext);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	if (!reader.Warning().empty())

	UINT strides = sizeof(Vertex);

			index_offset += fv;

	//vector<WORD> index_t;

	int     vcount = vertexlist.size();

	irData.pSysMem = &pIList[0];

			case SDLK_UP:

	//頂点バッファ作成



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}



	cbDesc.StructureByteStride = 0;



	::GetClientRect(hwnd, &rect);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pVertexShader = NULL;

	{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				indexlist.push_back(idx.vertex_index);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return 0;

		if (!reader.Error().empty())

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	//vector<Vertex> vertex_t;

		&m_pSwapChain,



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		pIList[j] = indexList[j];



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;

	//頂点シェーダー生成

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyTexture(tex);

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

using std::cout; using std::endl;

	SDL_DestroyRenderer(ren);

	}





			break;



	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

	{

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return;



struct ConstantMatrixBuffer {

		return hr;

			default:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			{

		}

	SAFE_RELEASE(m_pRenderTargetView);

		&m_pImmediateContext);

	{

	std::string inputfile = "test.obj";

	scDesc.BufferCount = 1;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pImmediateContext);

{

	bool ret = tinyobj::LoadObj(

void CD3DTest::Render()

	cbDesc.MiscFlags = 0;

	//頂点レイアウト作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





}

		KEY_PRESS_SURFACE_TOTAL

	float    nearZ = 0.1f;

	m_pImmediateContext = NULL;

	m_pMatrixBuffer = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	SAFE_RELEASE(m_pTexture);

	cbDesc.StructureByteStride = 0;

	{



	return 0;

	SAFE_RELEASE(m_pDepthStencilTexture);



	WORD   icount = indexList.size();

	vbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (!error.empty())

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//ビューポート設定







				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_DEFAULT,



	SDL_FreeSurface(bmp);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pDevice = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	HRESULT              hr;

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				tinyobj::real_t tx =

#define TINYOBJLOADER_IMPLEMENTATION



	SAFE_RELEASE(m_pSwapChain);

	std::string inputfile = "test.obj";

	{



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//vector<WORD> index_t;

	{



	//深度ステンシルバッファ作成

		SDL_RenderClear(ren);



		return hr;

{

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.MinDepth = 0.0f;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{



	SDL_DestroyWindow(win);

		pIList[j] = indexList[j];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Height = rect.Height();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pVertexBuffer);

	Vertex* pVList = new Vertex[vcount];

	scDesc.BufferCount = 1;

#ifdef _DEBUG

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}



	}



	}



	vbDesc.MiscFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(suf);

	{

	m_Viewport.Width = (FLOAT)rect.Width();

};

	SAFE_RELEASE(m_pInputLayout);



			{

	SAFE_RELEASE(m_pVertexBuffer);

	m_pDevice = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4X4 world;

		{

	vbDesc.StructureByteStride = 0;

	{



				indexlist.push_back(idx.vertex_index);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

	}

	//深度ステンシルバッファ作成

	m_pMatrixBuffer = NULL;

	txDesc.ArraySize = 1;



	::ZeroMemory(&scDesc, sizeof(scDesc));



		&materials,



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

 * Lesson 1: Hello World!





int main(int, char**)



		D3D11_SDK_VERSION,



	m_pVertexShader = NULL;



	WORD* pIList = new WORD[icount];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_UP:

}

}
	XMFLOAT4X4 view;



	int     vcount = vertexlist.size();

using std::cout; using std::endl;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_TOTAL

		delete[] pVList;

				vertex.push_back(vertex_tmp);

		return hr;

				WORD index = idx.vertex_index;





	WORD   icount = indexList.size();

	//テクスチャ読み込み

		return hr;

	{

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



#include <SDL.h>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

};

	return 0;

struct ConstantMatrixBuffer {

}

#include <iostream>

		&attrib,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderClear(ren);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4         eyePos;   //視点座標

	m_pDepthStencilView = NULL;

	Vertex* pVList = new Vertex[vcount];

	reader_config.mtl_search_path = "./"; // Path to material files

		size_t index_offset = 0;  // インデントのオフセット

};

	}

		pIList[j] = indexList[j];

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_SUBRESOURCE_DATA irData;





	m_Viewport.TopLeftX = 0;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

}





		&m_pSwapChain,

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <iostream>

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vector<WORD> indexList;

	SDL_DestroyTexture(tex);

	if (!reader.Warning().empty())

	ibDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//ビューポート設定

	UINT strides = sizeof(Vertex);

	HRESULT              hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{





#ifdef _DEBUG

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pIList[j] = indexList[j];

		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyRenderer(ren);

	return hr;

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	{



		size_t index_offset = 0;  // インデントのオフセット

	}*/

	auto& materials = reader.GetMaterials();

		{

	vrData.SysMemSlicePitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.Width = rect.Width();



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}
	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	}

				break;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_DOWN:





	txDesc.ArraySize = 1;

		if (!reader.Error().empty())

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	SAFE_RELEASE(m_pDepthStencilView);

	SDL_DestroyTexture(tex);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	UINT flags = 0;

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			index_offset += num_vertices;

	//Key press surfaces constants

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

	//テクスチャ読み込み

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			default:

	vbDesc.MiscFlags = 0;

			//Select surfaces based on key press

			index_offset += num_vertices;

		//User requests quit

	XMStoreFloat4(&clb.ambient, lightAmbient);

			index_offset += fv;

	ZeroMemory(&txDesc, sizeof(txDesc));

	//テクスチャ読み込み

		return hr;

	scDesc.BufferCount = 1;

	SDL_DestroyWindow(win);

		return hr;

int main(int, char**)

struct ConstantMaterial {

	ZeroMemory(&txDesc, sizeof(txDesc));

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		// Loop over faces(polygon)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

{

	SDL_Quit();

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_LEFT,



		return hr;













		1,

	if (FAILED(hr))

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pSwapChain);

CD3DTest::~CD3DTest()

	//ビューポート設定

	vector<Vertex> vertexlist;

			default:

	scDesc.SampleDesc.Count = 1;

	//頂点レイアウト作成

}

{



	m_pDepthStencilView = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_VertexCount = vcount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderClear(ren);



	//vector<Vertex> vertex_t;

		{

	cbDesc.CPUAccessFlags = 0;





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	ConstantLightBuffer clb;

	if (FAILED(hr))

	return;





	SAFE_RELEASE(m_pDevice);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			for (size_t v = 0; v < fv; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

		{

	auto& shapes = reader.GetShapes();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	/*

	}

	//インデックスバッファ作成

	//ビューポート設定

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成



	LoadObj(vertexlist, indexList);



	irData.pSysMem = &pIList[0];

	ZeroMemory(&txDesc, sizeof(txDesc));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pRenderTargetView);

		{

#include "DirectXManager.h"

	SAFE_RELEASE(m_pDepthStencilView);





	SAFE_RELEASE(m_pSampler);

	{

	return;

	m_IndexCount = icount;



	return;



	return 0;



	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	D3D11_SUBRESOURCE_DATA vrData;

#include <iostream>

		if (!reader.Error().empty())

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&m_pImmediateContext);

		pVList[i] = vertexlist[i];



	auto& attrib = reader.GetAttrib();

			{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_Delay(1000);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				indexlist.push_back(idx.vertex_index);

		return hr;

		// Loop over faces(polygon)

		delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilView);

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pSwapChain);

	D3D11_TEXTURE2D_DESC txDesc;

			{

	if (FAILED(hr))

};

	txDesc.CPUAccessFlags = 0;





	auto& materials = reader.GetMaterials();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&attrib,

	//ビューポート設定

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	}

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.MaxDepth = 1.0f;

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	dsDesc.Format = txDesc.Format;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

{

	if (!reader.Warning().empty())

	//Clean up our objects and quit



	SAFE_RELEASE(m_pMatrixBuffer);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		&m_pImmediateContext);

		&scDesc,

	}

	if (!reader.Warning().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.Windowed = TRUE;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		{



		&level,

	vbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	/*

		KEY_PRESS_SURFACE_DEFAULT,

#include "DirectXManager.h"

	m_pSampler = NULL;

{

				tinyobj::real_t tx =

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{



	return 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(bmp);

 * Lesson 1: Hello World!

	cbDesc.StructureByteStride = 0;



		return hr;

struct ConstantLightBuffer {

	Vertex* pVList = new Vertex[vcount];



		SDL_RenderClear(ren);

		return hr;

	LoadObj(vertexlist, indexList);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	scDesc.SampleDesc.Count = 1;

			for (size_t v = 0; v < fv; v++)

	int     vcount = vertexlist.size();



			for (size_t v = 0; v < fv; v++)



	m_pVertexShader = NULL;







	SDL_DestroyRenderer(ren);



	LoadObj(vertexlist, indexList);

		delete[] pIList;

			// Loop over vertices in the face.

	m_pSwapChain->Present(0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string imagePath = "hello.bmp";

			default:

	}

	ConstantLight    pntLight; //点光源

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			index_offset += num_vertices;

			{

		&error,



			index_offset += fv;

		delete[] pVList;

	m_pVertexShader = NULL;



	{



	txDesc.MiscFlags = 0;

/*





	std::string error;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	vrData.SysMemSlicePitch = 0;

	{



	{

	irData.pSysMem = &pIList[0];

			//Select surfaces based on key press

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	if (FAILED(hr))

		delete[] pIList;

	reader_config.mtl_search_path = "./"; // Path to material files

	//Clean up our objects and quit

	txDesc.Width = rect.Width();

		m_pImmediateContext->ClearState();

void CD3DTest::Release()

	//Key press surfaces constants

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			for (size_t v = 0; v < num_vertices; v++)

			default:

	if (!error.empty())



	auto& attrib = reader.GetAttrib();

				WORD index = idx.vertex_index;

	ConstantLight    pntLight; //点光源



	m_Viewport.TopLeftX = 0;

	return 0;

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_RIGHT,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	//頂点バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_LEFT:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;







	tinyobj::ObjReader reader;



{

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pDevice);

	std::string inputfile = "test.obj";

int main(int, char**)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pLightBuffer);



	m_pSampler = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;  // インデントのオフセット

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&level,

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pDepthStencilView);

}

	//First we need to start up SDL, and make sure it went ok

		}

		}



	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	int     vcount = vertexlist.size();

	std::string inputfile = "test.obj";

	//Create Index

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		return hr;

	irData.pSysMem = &pIList[0];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

/*

	tinyobj::attrib_t attrib;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	}

}

	Vertex* pVList = new Vertex[vcount];

	for (int i = 0; i < vcount; i++)

struct ConstantMatrixBuffer {

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

};



	for (const auto& shape : shapes)



		// Loop over faces(polygon)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	SDL_Quit();

				break;



		SDL_RenderClear(ren);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.TopLeftX = 0;

	WORD   icount = indexList.size();

	HRESULT              hr;

/*

	SAFE_RELEASE(m_pTextureView);

		&attrib,

		&level,

	D3D11_TEXTURE2D_DESC txDesc;

	/*



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};







	XMStoreFloat4(&clb.material.specular, materialSpecular);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.MinDepth = 0.0f;

	m_pRenderTargetView = NULL;



	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	ConstantLightBuffer clb;

	//vector<Vertex> vertex_t;

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pSwapChain = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTextureView = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pVertexShader = NULL;

#include <SDL.h>

		R"(cube.obj)");



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

		if (!reader.Error().empty())

	{



	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	WORD   icount = indexList.size();





	auto& attrib = reader.GetAttrib();



void CD3DTest::Release()

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		}

	XMFLOAT4 specular;          //反射(r,g,b)

			case SDLK_DOWN:





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	if (FAILED(hr))

		return hr;

	m_IndexCount = icount;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

struct ConstantLight {

	//ビューポート設定

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

int main(int, char**)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

			case SDLK_RIGHT:

			break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	irData.pSysMem = &pIList[0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#ifdef _DEBUG

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	UINT flags = 0;

		pVList[i] = vertexlist[i];



			for (size_t v = 0; v < num_vertices; v++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			int num_vertices = shape.mesh.num_face_vertices[f];

struct ConstantMatrixBuffer {



	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	m_pRenderTargetView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//ピクセルシェーダー生成

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

		pVList[i] = vertexlist[i];

#endif

				vertex.push_back(vertex_tmp);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	::GetClientRect(hwnd, &rect);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	auto& attrib = reader.GetAttrib();

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//定数バッファ作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	return hr;

	ConstantMatrixBuffer cmb;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			int num_vertices = shape.mesh.num_face_vertices[f];



	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (m_pImmediateContext)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		}



	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//定数バッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	return 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4X4 projection;

	ibDesc.CPUAccessFlags = 0;

	for (int j = 0; j < icount; j++)

	}

		return hr;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	for (int i = 0; i < vcount; i++)

	std::string error;

	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	for (int i = 0; i < 3; i++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.Windowed = TRUE;

{

	}

	if (FAILED(hr))

{

	UINT flags = 0;

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pVertexBuffer);

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		size_t index_offset = 0;  // インデントのオフセット



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

				tinyobj::real_t tx =

	//頂点レイアウト作成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	SAFE_RELEASE(m_pImmediateContext);

		return hr;



	m_pPixelShader = NULL;





	m_Viewport.MaxDepth = 1.0f;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	::GetClientRect(hwnd, &rect);

		if (!reader.Error().empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	/*

{





		m_pImmediateContext->ClearState();

			{

	pBackBuffer->Release();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//Key press surfaces constants

		}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//頂点バッファ作成

	cbDesc.MiscFlags = 0;

struct ConstantMaterial {

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				vertex.push_back(vertex_tmp);

		{

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#ifdef _DEBUG

	ibDesc.CPUAccessFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			exit(1);

	cbDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

}

	{



	{

	m_VertexCount = 0;

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};

	if (FAILED(hr))

			}

	{

			{



	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		{



	while (SDL_PollEvent(&e) != 0)

/*

		return 1;

	}

		&m_pSwapChain,



	m_pSwapChain = NULL;

				// access to vertex

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DEFAULT,

};

	ID3D11Texture2D* pBackBuffer;



	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);



	//First we need to start up SDL, and make sure it went ok



		R"(cube.obj)");

	tinyobj::ObjReaderConfig reader_config;

		return hr;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		}



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	return 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pIndexBuffer = NULL;

		exit(1);

		D3D_DRIVER_TYPE_HARDWARE,



	m_pInputLayout = NULL;

	return;

	return;

	SDL_DestroyWindow(win);



	ibDesc.MiscFlags = 0;

		else if (e.type == SDL_KEYDOWN)



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				break;

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.BufferCount = 1;

				vertex.push_back(vertex_tmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.SampleDesc.Quality = 0;

void CD3DTest::Release()





	//vector<Vertex> vertex_t;

	vbDesc.StructureByteStride = 0;

			index_offset += fv;

		SDL_RenderClear(ren);

				WORD index = idx.vertex_index;

		&error,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

}
	ibDesc.CPUAccessFlags = 0;

				break;

		return hr;



	SDL_FreeSurface(bmp);

	}

	XMFLOAT4X4 world;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pTextureView = NULL;

		m_pImmediateContext->ClearState();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	txDesc.MiscFlags = 0;

	m_VertexCount = 0;

	ibDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

void CD3DTest::Render()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{



struct ConstantMaterial {

	m_IndexCount = icount;

{





	//頂点シェーダー生成

		SDL_Delay(1000);

	for (const auto& shape : shapes)



	{

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	m_VertexCount = vcount;

		pLevels,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	Release();

	enum KeyPressSurfaces

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	//頂点バッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Release();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ConstantMatrixBuffer cmb;

	dsDesc.Texture2D.MipSlice = 0;

	m_pPixelShader = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

		//User requests quit

		}



				break;

	SAFE_RELEASE(m_pPixelShader);

		&shapes,





	::GetClientRect(hwnd, &rect);

HRESULT CD3DTest::Create(HWND hwnd)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		//User presses a key

		{



		return hr;

	m_pRenderTargetView = NULL;

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		delete[] pVList;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#endif



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	WORD* pIList = new WORD[icount];

#include <SDL.h>

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pDepthStencilView = NULL;

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vrData.SysMemPitch = 0;

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

int main(int, char**)

				indexlist.push_back(index);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			//Select surfaces based on key press





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.MiscFlags = 0;

	if (!reader.Warning().empty())

			//Select surfaces based on key press



	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	CRect                rect;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		if (!reader.Error().empty())

	//Clean up our objects and quit

	ConstantLightBuffer clb;

	irData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftY = 0;

		flags,

		pIList[j] = indexList[j];

		}

	D3D11_BUFFER_DESC vbDesc;

		return 1;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_FreeSurface(suf);

	m_pDevice = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

#ifdef _DEBUG



		//User requests quit

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	m_pTexture = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			// Loop over vertices in the face.

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

		KEY_PRESS_SURFACE_TOTAL

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#ifdef _DEBUG

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

		return 1;



	ConstantMatrixBuffer cmb;

	UINT strides = sizeof(Vertex);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		delete[] pIList;

};

}

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	auto& shapes = reader.GetShapes();





	WORD* pIList = new WORD[icount];

		SDL_Delay(1000);

	SDL_DestroyWindow(win);

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ConstantMaterial material; //物体の質感



	D3D11_BUFFER_DESC vbDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	int     vcount = vertexlist.size();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string error;





	ConstantMatrixBuffer cmb;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	Vertex* pVList = new Vertex[vcount];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))



	ConstantLight    pntLight; //点光源





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

				vertex.push_back(vertex_tmp);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

struct ConstantMaterial {



		KEY_PRESS_SURFACE_DOWN,



				indexlist.push_back(index);









void CD3DTest::Release()

	irData.SysMemSlicePitch = 0;

	SDL_FreeSurface(suf);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		m_pImmediateContext->ClearState();

	}

	};

		KEY_PRESS_SURFACE_UP,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::attrib_t attrib;

	if (FAILED(hr))



	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pVertexBuffer);

	m_IndexCount = 0;



struct ConstantLight {

				break;

		SDL_RenderPresent(ren);

			// Loop over vertices in the face.

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	HRESULT              hr;





	{

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				vertex.push_back(vertex_tmp);





		return hr;

	{



struct ConstantLightBuffer {





	vbDesc.MiscFlags = 0;

{

	/*

		SDL_RenderClear(ren);

				indexlist.push_back(index);

	ZeroMemory(&txDesc, sizeof(txDesc));



	txDesc.Width = rect.Width();

	}

int SEGMENT = 36;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::attrib_t attrib;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;







	m_pDevice = NULL;

	//定数バッファ作成

	tinyobj::attrib_t attrib;







	ConstantLight    pntLight; //点光源

struct ConstantMaterial {

#endif

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

		delete[] pVList;

	}

	//ピクセルシェーダー生成

		return hr;

	txDesc.MipLevels = 1;

	m_IndexCount = 0;

	SAFE_RELEASE(m_pDepthStencilView);

		if (!ret)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//ビューポート設定

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	//Clean up our objects and quit

			switch (e.key.keysym.sym)



	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	UINT offsets = 0;





	m_pSwapChain = NULL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::CD3DTest()

	cbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	auto& shapes = reader.GetShapes();



	vbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

		&level,



	SAFE_RELEASE(m_pLightBuffer);

#include "DirectXManager.h"

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}



	if (!reader.Warning().empty())

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;





				vertex.push_back(vertex_tmp);

	m_pSwapChain->Present(0, 0);

		return hr;

	m_pTextureView = NULL;

#include <SDL.h>

	vbDesc.MiscFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

		}

	cbDesc.CPUAccessFlags = 0;

struct ConstantMaterial {

	return 0;

}

	//vector<WORD> index_t;

	//定数バッファ作成

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			exit(1);

	if (FAILED(hr))



	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_BUFFER_DESC cbDesc;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	for (size_t s = 0; s < shapes.size(); s++)



int SEGMENT = 36;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_BUFFER_DESC cbDesc;

	m_IndexCount = icount;

	{



	ibDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;

	vrData.SysMemPitch = 0;

		return hr;

	ibDesc.CPUAccessFlags = 0;

	Vertex* pVList = new Vertex[vcount];



		D3D11_SDK_VERSION,



				vertex.push_back(vertex_tmp);

	m_pMatrixBuffer = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

				// access to vertex





	{



				break;

#include <iostream>

struct ConstantLight {

	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	D3D11_BUFFER_DESC ibDesc;



		return hr;

	auto& shapes = reader.GetShapes();

	m_Viewport.MinDepth = 0.0f;

	return 0;

	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

			}

		//User requests quit

	while (SDL_PollEvent(&e) != 0)



				WORD index = idx.vertex_index;



void CD3DTest::Release()

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Render()











	txDesc.SampleDesc.Quality = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				break;

		return hr;

	}

	//First we need to start up SDL, and make sure it went ok



		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.eyePos, eye);

{

	m_pMatrixBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

		{

				tinyobj::real_t tx =

	HRESULT              hr;

	irData.SysMemPitch = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pTexture = NULL;

		m_pImmediateContext->ClearState();

		&attrib,

	std::string inputfile = "test.obj";



	D3D11_SUBRESOURCE_DATA vrData;

	return;

	m_pRenderTargetView = NULL;

	if (FAILED(hr))



		&m_pDevice,

	ibDesc.CPUAccessFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.MipLevels = 1;



	if (FAILED(hr))



	irData.pSysMem = &pIList[0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	reader_config.mtl_search_path = "./"; // Path to material files

	Vertex* pVList = new Vertex[vcount];

	pBackBuffer->Release();

	//頂点バッファ作成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



			default:

	}



	//インデックスバッファ作成

		&m_pSwapChain,





#ifdef _DEBUG

	SAFE_RELEASE(m_pIndexBuffer);





			{

	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;

	XMStoreFloat4(&clb.eyePos, eye);

	auto& attrib = reader.GetAttrib();

		else if (e.type == SDL_KEYDOWN)

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4X4 projection;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	//ビューポート設定

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

};

	{

			{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	float    farZ = 100.0f;

#ifdef _DEBUG

		}

	cbDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t ty =

	std::string error;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

		//User presses a key

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	UINT flags = 0;

	irData.SysMemSlicePitch = 0;

struct ConstantLight {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_RenderPresent(ren);

		{

		return 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		exit(1);



				// access to vertex

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.StructureByteStride = 0;

		exit(1);

				vertex.push_back(vertex_tmp);



	irData.SysMemSlicePitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

};

	if (!error.empty())

	txDesc.Width = rect.Width();

	m_pLightBuffer = NULL;

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	D3D11_TEXTURE2D_DESC txDesc;

	for (int i = 0; i < 3; i++)

		&level,

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4X4 world;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		KEY_PRESS_SURFACE_TOTAL

		SDL_Delay(1000);





	vector<Vertex> vertexlist;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&shapes,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_BUFFER_DESC vbDesc;

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.CPUAccessFlags = 0;

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		D3D11_SDK_VERSION,

	for (int j = 0; j < icount; j++)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	LoadObj(vertexlist, indexList);

			{

	ConstantLight    pntLight; //点光源

		SDL_RenderClear(ren);

	vrData.SysMemSlicePitch = 0;

	}

#ifdef _DEBUG

	{

		SDL_RenderClear(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	bool ret = tinyobj::LoadObj(





	if (FAILED(hr))

	tinyobj::ObjReader reader;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			case SDLK_UP:

}



	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

struct ConstantMatrixBuffer {

		{



	SDL_Quit();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4         eyePos;   //視点座標



	SDL_DestroyTexture(tex);

		if (e.type == SDL_QUIT)

		return 1;



		size_t index_offset = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	D3D11_BUFFER_DESC vbDesc;

	dsDesc.Texture2D.MipSlice = 0;

	irData.SysMemPitch = 0;

	D3D11_BUFFER_DESC ibDesc;

	ibDesc.StructureByteStride = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		{







	D3D_FEATURE_LEVEL level;

	ibDesc.MiscFlags = 0;



	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	cbDesc.CPUAccessFlags = 0;



void CD3DTest::Render()

using std::cout; using std::endl;

		return 1;

				WORD index = idx.vertex_index;



#define TINYOBJLOADER_IMPLEMENTATION



	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.CPUAccessFlags = 0;

	{

				tinyobj::real_t tx =

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_TOTAL

	m_pSampler = NULL;

	HRESULT              hr;

	std::vector<tinyobj::material_t> materials;





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			default:

	m_pIndexBuffer = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	return;

				indexlist.push_back(idx.vertex_index);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_UP:

		return hr;

	m_Viewport.TopLeftY = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

 */



	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SDL_DestroyWindow(win);



	m_VertexCount = 0;

#include <SDL.h>

	SAFE_RELEASE(m_pIndexBuffer);

	m_pIndexBuffer = NULL;

	ibDesc.StructureByteStride = 0;



	m_pRenderTargetView = NULL;

	vbDesc.MiscFlags = 0;

		return 1;

	SDL_Event e;



	auto& attrib = reader.GetAttrib();



	std::string imagePath = "hello.bmp";

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

	for (int i = 0; i < vcount; i++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (m_pImmediateContext)

{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.TopLeftY = 0;

	scDesc.Windowed = TRUE;

	}





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



		KEY_PRESS_SURFACE_UP,

	vbDesc.CPUAccessFlags = 0;

		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_Viewport.MaxDepth = 1.0f;

	if (m_pImmediateContext)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))



	{

	std::string imagePath = "hello.bmp";

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	float    farZ = 100.0f;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pLightBuffer);



	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		}

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	for (int i = 0; i < 3; i++)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];











	vrData.SysMemPitch = 0;

			index_offset += num_vertices;

	//深度ステンシルバッファ作成

	}

 * Lesson 1: Hello World!

			{

		&m_pSwapChain,

	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;

	m_pSampler = NULL;



	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

HRESULT CD3DTest::Create(HWND hwnd)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

CD3DTest::~CD3DTest()





	vector<Vertex> vertexlist;

	delete[] pVList;

}
	m_pDevice = NULL;



		return hr;

	SAFE_RELEASE(m_pVertexBuffer);



	ibDesc.StructureByteStride = 0;



};

	return 0;

			{

	m_VertexCount = 0;



	SAFE_RELEASE(m_pVertexShader);

		exit(1);

}

	m_VertexCount = 0;

	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vrData.SysMemPitch = 0;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pImmediateContext);

			default:

	vbDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;



		&level,



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);

				vertex.push_back(vertex_tmp);

		&m_pImmediateContext);

	delete[] pVList;

	}

void CD3DTest::Release()

	LoadObj(vertexlist, indexList);









	//ビューポート設定



	m_pMatrixBuffer = NULL;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



}



	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

}



	{

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;



	bool ret = tinyobj::LoadObj(

	//Vertex* pVList = new Vertex[vcount];

			case SDLK_DOWN:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	cbDesc.StructureByteStride = 0;

	::GetClientRect(hwnd, &rect);

		return hr;

				indexlist.push_back(index);



	txDesc.Usage = D3D11_USAGE_DEFAULT;



	for (const auto& shape : shapes)

			int num_vertices = shape.mesh.num_face_vertices[f];

	return 0;

			index_offset += fv;

	}



#ifdef _DEBUG

/*

	irData.SysMemPitch = 0;

	D3D_FEATURE_LEVEL level;

				WORD index = idx.vertex_index;



			switch (e.key.keysym.sym)

		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += fv;

	//First we need to start up SDL, and make sure it went ok

		}



	{



	txDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			case SDLK_RIGHT:

	D3D11_SAMPLER_DESC smpDesc;

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	delete[] pIList;

			default:

	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pIndexBuffer);

	{

	ID3D11Texture2D* pBackBuffer;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SDL_Quit();

	scDesc.BufferDesc.Width = rect.Width();



	return 0;

	XMFLOAT4         eyePos;   //視点座標

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.MiscFlags = 0;

	vbDesc.CPUAccessFlags = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	UINT strides = sizeof(Vertex);

			case SDLK_DOWN:



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	irData.SysMemSlicePitch = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	Release();

#include <SDL.h>

		delete[] pIList;

struct ConstantMatrixBuffer {



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			}

	auto& shapes = reader.GetShapes();

	m_Viewport.MinDepth = 0.0f;

		D3D11_SDK_VERSION,

	std::vector<tinyobj::material_t> materials;



	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

		{

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

	//ビューポート設定

	XMStoreFloat4(&clb.eyePos, eye);

 * Lesson 1: Hello World!

void CD3DTest::Render()

	ibDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int i = 0; i < vcount; i++)

		}

	m_pDevice = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	bool ret = tinyobj::LoadObj(

	ConstantMaterial material; //物体の質感

	Release();

	int     vcount = vertexlist.size();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include <iostream>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				// access to vertex

	ConstantMatrixBuffer cmb;



	txDesc.SampleDesc.Quality = 0;

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pLightBuffer);

		SDL_Delay(1000);

	Vertex* pVList = new Vertex[vcount];

	vrData.SysMemPitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

/*





	SDL_Quit();



	std::string error;

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	CRect                rect;

				break;

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	SDL_DestroyTexture(tex);

			//Select surfaces based on key press

	SDL_Event e;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		if (!reader.Error().empty())

#endif

	SDL_Quit();

	//定数バッファ作成

	vrData.SysMemPitch = 0;

	m_pVertexShader = NULL;

			}

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pRenderTargetView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	};

	m_pSampler = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	tinyobj::attrib_t attrib;

{

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pTextureView = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_DOWN,



			//Select surfaces based on key press

	{

		return hr;



		&scDesc,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ty =

	vrData.SysMemPitch = 0;

		{

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	{

				break;

	D3D11_SUBRESOURCE_DATA vrData;

}
		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	float    farZ = 100.0f;

	vector<WORD> indexList;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

};

		&scDesc,

	{

		size_t index_offset = 0;



	cbDesc.StructureByteStride = 0;

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_DestroyRenderer(ren);

			for (size_t v = 0; v < fv; v++)

	UINT offsets = 0;

	irData.pSysMem = &pIList[0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	delete[] pIList;

	//頂点レイアウト作成

	::GetClientRect(hwnd, &rect);

	D3D11_BUFFER_DESC ibDesc;

	{

	return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyTexture(tex);

}

	SDL_Event e;

	return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += fv;

		delete[] pVList;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		delete[] pIList;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	//Clean up our objects and quit



 */

	m_pDepthStencilTexture = NULL;

CD3DTest::~CD3DTest()



	m_pSwapChain = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

struct ConstantLight {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	pBackBuffer->Release();

		//User requests quit

			default:

	txDesc.MipLevels = 1;

			case SDLK_RIGHT:



				indexlist.push_back(index);

				break;

				WORD index = idx.vertex_index;

		if (e.type == SDL_QUIT)

	//ピクセルシェーダー生成



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	delete[] pVList;



CD3DTest::CD3DTest()

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			switch (e.key.keysym.sym)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			case SDLK_RIGHT:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		pVList[i] = vertexlist[i];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	HRESULT              hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string inputfile = "test.obj";


