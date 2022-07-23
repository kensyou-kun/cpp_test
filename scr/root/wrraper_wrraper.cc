				break;

	D3D11_BUFFER_DESC cbDesc;

};

	D3D11_SUBRESOURCE_DATA vrData;

	int     vcount = vertexlist.size();

	D3D11_SUBRESOURCE_DATA irData;

	tinyobj::ObjReaderConfig reader_config;

		}

		&scDesc,

	scDesc.BufferCount = 1;

	//Clean up our objects and quit

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



			case SDLK_UP:

	if (m_pImmediateContext)



	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		exit(1);

	scDesc.BufferDesc.Width = rect.Width();

	float    farZ = 100.0f;





	XMFLOAT4X4 projection;

	{

	m_Viewport.TopLeftX = 0;

#include <SDL.h>

	int     vcount = vertexlist.size();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//テクスチャ読み込み

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pLightBuffer = NULL;

	m_pTextureView = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	for (int i = 0; i < 3; i++)

	SDL_DestroyRenderer(ren);

	m_pVertexShader = NULL;

	//頂点シェーダー生成

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4X4 world;

			int num_vertices = shape.mesh.num_face_vertices[f];

	vbDesc.CPUAccessFlags = 0;



		//User presses a key

	SDL_DestroyTexture(tex);

	/*



	enum KeyPressSurfaces

	m_Viewport.TopLeftY = 0;

#include <SDL.h>

		return hr;

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDepthStencilView);

	//ビューポート設定

		size_t index_offset = 0;

	auto& materials = reader.GetMaterials();

}



	}

		return hr;

		}



	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pIndexBuffer);



			case SDLK_DOWN:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	SDL_DestroyWindow(win);

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;

		return hr;

		1,

{

	UINT flags = 0;

	m_Viewport.MinDepth = 0.0f;

{

	reader_config.mtl_search_path = "./"; // Path to material files





	SAFE_RELEASE(m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	m_VertexCount = 0;

};

	cbDesc.StructureByteStride = 0;

		D3D11_SDK_VERSION,

		//User presses a key

};



	}

				tinyobj::real_t tx =

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (m_pImmediateContext)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	/*

		D3D11_SDK_VERSION,

	m_pVertexBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	//Create Index

			{



		if (e.type == SDL_QUIT)

{

	vrData.SysMemPitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	int     vcount = vertexlist.size();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	std::string inputfile = "test.obj";

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pSwapChain);

	irData.SysMemPitch = 0;

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pTexture = NULL;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Quit();





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_DOWN,

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



#include <SDL.h>

		&level,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}



	XMFLOAT4         ambient;  //環境光(r,g,b)

			// Loop over vertices in the face.

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pSampler);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	WORD* pIList = new WORD[icount];

	UINT offsets = 0;

	if (FAILED(hr))



}
				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&shapes,

			case SDLK_UP:



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return;

	m_pRenderTargetView = NULL;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyTexture(tex);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		pVList[i] = vertexlist[i];



	scDesc.BufferCount = 1;



	// Loop over shapes

		return hr;

		return hr;

			default:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

};

	SDL_DestroyRenderer(ren);



		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_RIGHT,

	ConstantMatrixBuffer cmb;

	//Clean up our objects and quit

	txDesc.ArraySize = 1;

{

}

CD3DTest::CD3DTest()

{





{

	m_pDepthStencilView = NULL;

	dsDesc.Format = txDesc.Format;

}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}





struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pTexture);

};

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pVertexBuffer);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

 * Lesson 1: Hello World!

		pVList[i] = vertexlist[i];

	m_Viewport.TopLeftY = 0;







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <SDL.h>

		R"(cube.obj)");

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#include <SDL.h>

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		size_t index_offset = 0;  // インデントのオフセット



		SDL_Delay(1000);

	float    nearZ = 0.1f;

	m_VertexCount = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

CD3DTest::~CD3DTest()

				tinyobj::real_t ty =

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

		return hr;

	scDesc.BufferCount = 1;



			}

	irData.pSysMem = &pIList[0];

	SDL_Quit();

		delete[] pIList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ID3D11Texture2D* pBackBuffer;

			index_offset += num_vertices;

	ConstantLightBuffer clb;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDevice);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		D3D11_SDK_VERSION,



{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	::GetClientRect(hwnd, &rect);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	cbDesc.MiscFlags = 0;



	}

}

	{

	UINT strides = sizeof(Vertex);

	D3D11_SUBRESOURCE_DATA irData;

	std::vector<tinyobj::material_t> materials;

		//User requests quit

	vbDesc.CPUAccessFlags = 0;

		return hr;

	}

	//インデックスバッファ作成

	D3D11_SUBRESOURCE_DATA irData;

		{

		&scDesc,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Count = 1;

	WORD   icount = indexList.size();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	D3D11_TEXTURE2D_DESC txDesc;





	delete[] pIList;

			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

};

		return hr;

	SDL_Event e;

		exit(1);

		&attrib,

	if (FAILED(hr))

	{

	ibDesc.MiscFlags = 0;

	if (!reader.Warning().empty())

	{



struct ConstantLightBuffer {

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

			break;

	XMFLOAT4X4 view;

using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok







	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



				break;



	D3D11_BUFFER_DESC vbDesc;

		D3D11_SDK_VERSION,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&error,

				// access to vertex

	HRESULT              hr;









	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4X4 projection;

CD3DTest::~CD3DTest()

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void CD3DTest::Render()

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		SDL_Delay(1000);

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

struct ConstantLight {

	//vector<WORD> index_t;

#define TINYOBJLOADER_IMPLEMENTATION

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vector<Vertex> vertexlist;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}

	}

	SDL_FreeSurface(suf);

	Release();

}
	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

			}

/*

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

#include "DirectXManager.h"

#define TINYOBJLOADER_IMPLEMENTATION

		{

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ZeroMemory(&txDesc, sizeof(txDesc));

	Vertex* pVList = new Vertex[vcount];

	{



	m_VertexCount = 0;

			exit(1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	HRESULT              hr;

	LoadObj(vertexlist, indexList);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4         eyePos;   //視点座標

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		if (e.type == SDL_QUIT)

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

	dsDesc.Texture2D.MipSlice = 0;

	{

	}

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



			case SDLK_DOWN:

		delete[] pVList;

		if (e.type == SDL_QUIT)



	m_pLightBuffer = NULL;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//テクスチャ読み込み

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pDevice);

		//User requests quit

	cbDesc.StructureByteStride = 0;

{

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				break;

	//テクスチャ読み込み

	SAFE_RELEASE(m_pPixelShader);

	SDL_DestroyRenderer(ren);

		1,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}



	XMFLOAT4X4 view;

	m_Viewport.MaxDepth = 1.0f;

using std::cout; using std::endl;

		return hr;

		SDL_Delay(1000);

		m_pImmediateContext->ClearState();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.StructureByteStride = 0;



			}

				WORD index = idx.vertex_index;

	auto& attrib = reader.GetAttrib();

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				vertex.push_back(vertex_tmp);

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	};

	D3D11_SUBRESOURCE_DATA irData;



	m_pInputLayout = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



				vertex.push_back(vertex_tmp);

/*

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 view;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4X4 world;



	::GetClientRect(hwnd, &rect);

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	txDesc.MiscFlags = 0;



		return hr;

	vrData.SysMemSlicePitch = 0;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))



	std::string inputfile = "test.obj";







	D3D11_SUBRESOURCE_DATA vrData;

		SDL_Delay(1000);

	SDL_DestroyRenderer(ren);

	m_pSampler = NULL;

		SDL_Delay(1000);

#ifdef _DEBUG

		return hr;

	cbDesc.StructureByteStride = 0;

};

	SAFE_RELEASE(m_pVertexShader);

	if (m_pImmediateContext)

				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



}

		&m_pSwapChain,

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);



	XMFLOAT4X4 projection;

	delete[] pVList;

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4         eyePos;   //視点座標



	float    fov = XMConvertToRadians(20.0f);

}


	m_pDepthStencilView = NULL;

	if (FAILED(hr))

			switch (e.key.keysym.sym)

		if (e.type == SDL_QUIT)

	ConstantMatrixBuffer cmb;

		// Loop over faces(polygon)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		flags,



	}

				break;

		return hr;

		return 1;

	std::string inputfile = "test.obj";



{

		flags,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.MiscFlags = 0;

	SDL_FreeSurface(bmp);

		return 1;



	CRect                rect;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferCount = 1;

struct ConstantLight {

}

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ibDesc.CPUAccessFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pSwapChain);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

int main(int, char**)

	ConstantMatrixBuffer cmb;





	ConstantLightBuffer clb;

HRESULT CD3DTest::Create(HWND hwnd)



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	UINT strides = sizeof(Vertex);



		&materials,

		D3D11_SDK_VERSION,

}

{

		}



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pVertexShader);

{

	HRESULT              hr;



				indexlist.push_back(index);

	D3D11_BUFFER_DESC vbDesc;

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pLightBuffer);

	//頂点レイアウト作成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	// Loop over shapes

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDevice);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	Release();

				tinyobj::real_t ty =

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	int     vcount = vertexlist.size();

				tinyobj::real_t ty =

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pPixelShader);

		&m_pDevice,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.StructureByteStride = 0;

#include <SDL.h>

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pImmediateContext);

	//テクスチャ読み込み

}



	SDL_DestroyRenderer(ren);

				// access to vertex

	cbDesc.CPUAccessFlags = 0;

	return 0;



	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

				// access to vertex

	scDesc.BufferCount = 1;





	if (FAILED(hr))

	//vector<WORD> index_t;

			{

	//vector<WORD> index_t;

		return hr;

			exit(1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		D3D11_SDK_VERSION,

	if (FAILED(hr))

struct ConstantLightBuffer {

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

	{

}

	m_IndexCount = 0;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Event e;

	//ピクセルシェーダー生成

		return hr;

				vertex.push_back(vertex_tmp);



		{

};

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pDepthStencilTexture);

		// Loop over faces(polygon)

		return hr;

struct ConstantLight {

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		size_t index_offset = 0;





	{

	CRect                rect;

	D3D11_BUFFER_DESC vbDesc;

	{



			for (size_t v = 0; v < fv; v++)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext = NULL;

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.ArraySize = 1;





		}

	::ZeroMemory(&scDesc, sizeof(scDesc));



	//vector<Vertex> vertex_t;

	XMFLOAT4X4 world;

	}

	m_pPixelShader = NULL;

	m_pSwapChain->Present(0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vrData.SysMemPitch = 0;

	UINT flags = 0;

	for (int j = 0; j < icount; j++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}



		{

	D3D11_SUBRESOURCE_DATA vrData;

{



	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	D3D_FEATURE_LEVEL level;

	m_pVertexShader = NULL;

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	WORD* pIList = new WORD[icount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







	{

				break;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t tx =



		KEY_PRESS_SURFACE_LEFT,

	m_IndexCount = 0;

	}

	D3D11_BUFFER_DESC cbDesc;

	SDL_FreeSurface(bmp);

	m_VertexCount = vcount;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	}

{

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pRenderTargetView = NULL;



	if (FAILED(hr))

	m_pInputLayout = NULL;



	}

	SAFE_RELEASE(m_pDevice);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_DOWN,

int main(int, char**)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pTexture);

HRESULT CD3DTest::Create(HWND hwnd)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		}

			case SDLK_UP:

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return 1;

	if (!reader.ParseFromFile(inputfile, reader_config))

	}



	m_Angle += XMConvertToRadians(1.0f);

	UINT flags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			}

};



	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



int SEGMENT = 36;

int SEGMENT = 36;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

};

	m_Viewport.Height = (FLOAT)rect.Height();

		{

	m_pImmediateContext = NULL;

	enum KeyPressSurfaces

				vertex.push_back(vertex_tmp);

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pSampler);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	XMFLOAT4X4 world;



	scDesc.SampleDesc.Quality = 0;



			{

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pDevice);



	m_pSwapChain->Present(0, 0);

	vbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderPresent(ren);

	if (!error.empty())

		1,

			switch (e.key.keysym.sym)

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

		&scDesc,

				break;

	scDesc.BufferDesc.Height = rect.Height();

		if (e.type == SDL_QUIT)

		NULL,

	SDL_Event e;

		&error,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);





#include <SDL.h>



{

/*

		{

}

	scDesc.OutputWindow = hwnd;

			}

	return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.Width = rect.Width();

	m_IndexCount = icount;

		}



			case SDLK_RIGHT:

	vbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;



	//頂点レイアウト作成

	{

	m_pDevice = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_UP:

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pImmediateContext);

	{

	m_pSwapChain = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		if (e.type == SDL_QUIT)

	SDL_Quit();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	for (int i = 0; i < 3; i++)

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				vertex.push_back(vertex_tmp);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//ピクセルシェーダー生成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	if (!error.empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







	std::string error;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

#include <iostream>

	auto& attrib = reader.GetAttrib();

};

	//Clean up our objects and quit



		delete[] pVList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			break;

		KEY_PRESS_SURFACE_RIGHT,

				break;

{

	m_Viewport.Width = (FLOAT)rect.Width();



	std::string error;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string error;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		}

	for (const auto& shape : shapes)

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pLightBuffer);

	//Create Index

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	ZeroMemory(&txDesc, sizeof(txDesc));

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.MiscFlags = 0;





	::GetClientRect(hwnd, &rect);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pPixelShader = NULL;



		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))







				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pIndexBuffer);

using std::cout; using std::endl;

};

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_SUBRESOURCE_DATA vrData;

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			//Select surfaces based on key press

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_RenderClear(ren);

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	cbDesc.StructureByteStride = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	if (!reader.ParseFromFile(inputfile, reader_config))







	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	return;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDevice);

	txDesc.ArraySize = 1;

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		size_t index_offset = 0;  // インデントのオフセット

				vertex.push_back(vertex_tmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		pVList[i] = vertexlist[i];


