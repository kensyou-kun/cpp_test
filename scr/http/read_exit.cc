	cbDesc.StructureByteStride = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::string imagePath = "hello.bmp";

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 pos;               //座標(x,y,z)

 */

	std::string error;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

		{



		}

	dsDesc.Texture2D.MipSlice = 0;

HRESULT CD3DTest::Create(HWND hwnd)

#include "DirectXManager.h"



CD3DTest::CD3DTest()

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

#endif

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.eyePos, eye);



		&level,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pSampler);

		//User presses a key

			case SDLK_LEFT:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_IndexCount = icount;

		&m_pImmediateContext);



	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

		return hr;





			}

	UINT flags = 0;

	dsDesc.Format = txDesc.Format;



/*

				WORD index = idx.vertex_index;

	vbDesc.MiscFlags = 0;



	m_pPixelShader = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	for (int i = 0; i < vcount; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pPixelShader);

		return hr;



{



	//vector<WORD> index_t;

	if (FAILED(hr))

	enum KeyPressSurfaces

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.OutputWindow = hwnd;

			case SDLK_RIGHT:

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	std::vector<tinyobj::material_t> materials;

		return 1;



			index_offset += num_vertices;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

	vector<Vertex> vertexlist;



	txDesc.ArraySize = 1;



	//定数バッファ作成

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	float    aspect = m_Viewport.Width / m_Viewport.Height;



				break;





	}

	UINT offsets = 0;

	ibDesc.CPUAccessFlags = 0;

	return 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	auto& shapes = reader.GetShapes();

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)







				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	std::vector<tinyobj::shape_t> shapes;

{

int main(int, char**)

	SDL_Event e;



int SEGMENT = 36;

};

	dsDesc.Format = txDesc.Format;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	int     vcount = vertexlist.size();

	m_pVertexShader = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_VertexCount = 0;

		return hr;

struct ConstantLightBuffer {

		return hr;

	ConstantLightBuffer clb;

	irData.SysMemSlicePitch = 0;

	std::string imagePath = "hello.bmp";



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pDevice);



	if (!reader.Warning().empty())







	//First we need to start up SDL, and make sure it went ok

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderClear(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#endif

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	{

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			case SDLK_DOWN:





	WORD* pIList = new WORD[icount];

}

		m_pImmediateContext->ClearState();

	D3D11_BUFFER_DESC vbDesc;



				indexlist.push_back(index);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

#include <iostream>



	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//vector<Vertex> vertex_t;

		SDL_RenderPresent(ren);

		{

	cbDesc.MiscFlags = 0;



	txDesc.Height = rect.Height();

	m_pDepthStencilView = NULL;

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))



			exit(1);



		SDL_RenderClear(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



};

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pVertexBuffer);

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pPixelShader);



	D3D11_SUBRESOURCE_DATA irData;

		if (e.type == SDL_QUIT)

	XMFLOAT4 pos;               //座標(x,y,z)

	auto& attrib = reader.GetAttrib();



		{

}

	m_VertexCount = vcount;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pTextureView);

	scDesc.SampleDesc.Quality = 0;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;

	return;

#ifdef _DEBUG

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DOWN,

	int     vcount = vertexlist.size();

		SDL_RenderPresent(ren);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		&materials,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 world;



	ID3D11Texture2D* pBackBuffer;

	std::string error;

	D3D11_SUBRESOURCE_DATA vrData;



		R"(cube.obj)");

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyWindow(win);

#include <SDL.h>

		m_pImmediateContext->ClearState();



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	// Loop over shapes



			//Select surfaces based on key press

	m_Viewport.Width = (FLOAT)rect.Width();



	}



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_Angle += XMConvertToRadians(1.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantMatrixBuffer {





		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	};

				WORD index = idx.vertex_index;

				// access to vertex

	cbDesc.CPUAccessFlags = 0;

	std::string error;

	/*

	/*

	txDesc.CPUAccessFlags = 0;

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_IndexCount = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;



	SDL_FreeSurface(suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		// Loop over faces(polygon)

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

struct ConstantLight {

	}

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.CPUAccessFlags = 0;



		&materials,

	if (FAILED(hr))





		&m_pImmediateContext);





		KEY_PRESS_SURFACE_TOTAL

		KEY_PRESS_SURFACE_TOTAL

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_IndexCount = icount;

	delete[] pIList;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{





				// access to vertex



	txDesc.SampleDesc.Count = 1;

		&m_pSwapChain,

	m_pVertexShader = NULL;

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&scDesc,

	for (size_t s = 0; s < shapes.size(); s++)

	//Clean up our objects and quit

	vbDesc.StructureByteStride = 0;

	m_VertexCount = vcount;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 world;

	if (FAILED(hr))

	{

#ifdef _DEBUG

	XMFLOAT4X4 world;

		exit(1);

	vbDesc.StructureByteStride = 0;

	ConstantMaterial material; //物体の質感

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//Clean up our objects and quit

	vbDesc.StructureByteStride = 0;

{

	};



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

struct ConstantMatrixBuffer {

struct ConstantMaterial {

	ibDesc.CPUAccessFlags = 0;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		1,

CD3DTest::~CD3DTest()



	scDesc.BufferCount = 1;

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyRenderer(ren);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	txDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				break;

}

		delete[] pVList;

	tinyobj::attrib_t attrib;



				break;

		}

		cout << "SDL_INIT_ERROR" << endl;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <iostream>



	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	cbDesc.MiscFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

}

	}



				indexlist.push_back(index);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return 0;

		return hr;

		pIList[j] = indexList[j];

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

		&m_pDevice,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	if (FAILED(hr))

		pIList[j] = indexList[j];







	m_pInputLayout = NULL;

	m_pDevice = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.CPUAccessFlags = 0;





	SAFE_RELEASE(m_pIndexBuffer);



	std::string error;



			for (size_t v = 0; v < num_vertices; v++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		&shapes,

	m_pImmediateContext = NULL;

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//頂点バッファ作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;





		&m_pDevice,



	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

		pVList[i] = vertexlist[i];



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	auto& shapes = reader.GetShapes();

}

	UINT offsets = 0;

		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	m_pIndexBuffer = NULL;

	SDL_FreeSurface(suf);

	scDesc.OutputWindow = hwnd;

	delete[] pIList;

	//頂点バッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

			break;

		NULL,

				// access to vertex



	UINT flags = 0;

	D3D11_BUFFER_DESC ibDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		{

		return hr;

	//vector<WORD> index_t;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



			case SDLK_DOWN:

			{

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <SDL.h>





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.pSysMem = &pVList[0];

		return 1;

	SAFE_RELEASE(m_pTexture);

	return 0;

	//ピクセルシェーダー生成

		pIList[j] = indexList[j];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}



#include <SDL.h>

	m_pVertexShader = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		{



				break;



		D3D11_SDK_VERSION,

	m_pSwapChain = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

};

	m_pDevice = NULL;





		}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

		flags,

struct ConstantLight {



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

			break;

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4X4 world;

		&attrib,

	std::string imagePath = "hello.bmp";

	dsDesc.Format = txDesc.Format;

			}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_pRenderTargetView = NULL;

			}

	m_pVertexBuffer = NULL;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	dsDesc.Format = txDesc.Format;

	D3D11_TEXTURE2D_DESC txDesc;

	irData.SysMemSlicePitch = 0;

{

	ibDesc.StructureByteStride = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.Height = (FLOAT)rect.Height();

		}

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Create Index

	for (int j = 0; j < icount; j++)



		exit(1);

	scDesc.SampleDesc.Count = 1;

CD3DTest::~CD3DTest()

struct ConstantLightBuffer {

	D3D11_TEXTURE2D_DESC txDesc;

}
	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);



	auto& attrib = reader.GetAttrib();

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



			switch (e.key.keysym.sym)

	m_pVertexShader = NULL;

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

		SDL_Delay(1000);

};

	//Create Index



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_VertexCount = 0;

		&m_pImmediateContext);

	Release();

	SAFE_RELEASE(m_pTexture);

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

			case SDLK_LEFT:

			case SDLK_DOWN:

	}

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//頂点バッファ作成

	m_pRenderTargetView = NULL;

	m_pDepthStencilView = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				tinyobj::real_t tx =



	tinyobj::ObjReaderConfig reader_config;

#include "DirectXManager.h"







				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_TEXTURE2D_DESC txDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}



	for (const auto& shape : shapes)

	UINT flags = 0;

	}

	D3D_FEATURE_LEVEL level;

	m_pMatrixBuffer = NULL;

	if (!reader.Warning().empty())

				// access to vertex

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

#include <iostream>

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

void CD3DTest::Render()

			switch (e.key.keysym.sym)

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

		else if (e.type == SDL_KEYDOWN)

		R"(cube.obj)");



#include <SDL.h>

	//First we need to start up SDL, and make sure it went ok

	D3D11_TEXTURE2D_DESC txDesc;

		{

	scDesc.BufferCount = 1;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);



#include <SDL.h>

				vertex.push_back(vertex_tmp);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pSwapChain);

		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//Vertex* pVList = new Vertex[vcount];

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			case SDLK_RIGHT:

	return;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		//User requests quit

				tinyobj::real_t ty =

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		{

	//Create Index

				break;



	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			{

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))



	//vector<WORD> index_t;

	txDesc.Usage = D3D11_USAGE_DEFAULT;





void CD3DTest::Release()

 * Lesson 1: Hello World!

	m_pSwapChain->Present(0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

	D3D11_BUFFER_DESC cbDesc;

int main(int, char**)



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pTextureView);

		&error,

				// access to vertex

	Release();

		&scDesc,

#include "DirectXManager.h"



{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



	ZeroMemory(&txDesc, sizeof(txDesc));

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//定数バッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#define TINYOBJLOADER_IMPLEMENTATION

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	float    farZ = 100.0f;

	cbDesc.CPUAccessFlags = 0;

		if (!ret)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.StructureByteStride = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_RIGHT:





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	cbDesc.StructureByteStride = 0;

		pLevels,

	::GetClientRect(hwnd, &rect);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	return 0;

	}





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pDevice = NULL;

		}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{

	//Create Index

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	pBackBuffer->Release();



	m_IndexCount = 0;

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//ビューポート設定

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

		NULL,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			{

			}

 * Lesson 1: Hello World!

{

	txDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_SUBRESOURCE_DATA irData;

	//ビューポート設定

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			case SDLK_DOWN:

	if (FAILED(hr))

	if (FAILED(hr))

	}

	tinyobj::ObjReader reader;

	SDL_DestroyTexture(tex);

	//vector<Vertex> vertex_t;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D_FEATURE_LEVEL level;





	if (!error.empty())

		return hr;

			switch (e.key.keysym.sym)

 * Lesson 1: Hello World!

	irData.pSysMem = &pIList[0];

	vrData.pSysMem = &pVList[0];



}

	cbDesc.StructureByteStride = 0;



		{

	SAFE_RELEASE(m_pIndexBuffer);

	std::string inputfile = "test.obj";



	tinyobj::ObjReader reader;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			}

}

	SAFE_RELEASE(m_pPixelShader);

	txDesc.MiscFlags = 0;



	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int SEGMENT = 36;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

		return hr;

	SDL_Quit();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

	XMFLOAT4X4 projection;









			}

	SDL_DestroyWindow(win);

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			for (size_t v = 0; v < num_vertices; v++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

	ConstantLightBuffer clb;

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ConstantMatrixBuffer cmb;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_FreeSurface(suf);

	}

		1,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				vertex.push_back(vertex_tmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	CRect                rect;

		return hr;

	m_pRenderTargetView = NULL;



	ConstantMaterial material; //物体の質感

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_DestroyTexture(tex);

	SDL_Quit();

		}

		KEY_PRESS_SURFACE_DOWN,



	txDesc.Width = rect.Width();

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.eyePos, eye);

	flags |= D3D11_CREATE_DEVICE_DEBUG;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pTexture = NULL;

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_DestroyRenderer(ren);

}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pDevice = NULL;

	auto& shapes = reader.GetShapes();

{

	vrData.pSysMem = &pVList[0];

/*

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		NULL,

	auto& shapes = reader.GetShapes();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			}



		return hr;



	return 0;

	SDL_Quit();

	scDesc.Windowed = TRUE;



	{

			{

	CRect                rect;

	while (SDL_PollEvent(&e) != 0)

{

		return hr;



	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext = NULL;

	scDesc.Windowed = TRUE;

{

		return hr;

	if (FAILED(hr))

}



	Release();

		pLevels,

	irData.SysMemSlicePitch = 0;



		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

void CD3DTest::Release()



		&m_pImmediateContext);

	float    farZ = 100.0f;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		KEY_PRESS_SURFACE_LEFT,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			int num_vertices = shape.mesh.num_face_vertices[f];

	//Clean up our objects and quit

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

		return hr;

}

	m_pDepthStencilTexture = NULL;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

	m_IndexCount = icount;

#define TINYOBJLOADER_IMPLEMENTATION

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_RenderClear(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

	UINT flags = 0;

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

			index_offset += num_vertices;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//ビューポート設定



			}

	pBackBuffer->Release();

	SAFE_RELEASE(m_pImmediateContext);

	ConstantMaterial material; //物体の質感

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

		//User requests quit

	reader_config.mtl_search_path = "./"; // Path to material files

	::GetClientRect(hwnd, &rect);

				vertex.push_back(vertex_tmp);

int main(int, char**)



	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pVertexShader = NULL;





#include <iostream>

	D3D11_BUFFER_DESC vbDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	irData.SysMemSlicePitch = 0;

		SDL_RenderClear(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		if (!reader.Error().empty())

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderPresent(ren);

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_FreeSurface(suf);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		&attrib,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Height = rect.Height();

		// Loop over faces(polygon)

			//Select surfaces based on key press

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}



#include <iostream>

	scDesc.SampleDesc.Count = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		{

		return 1;

	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



};

				tinyobj::real_t tx =

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		return hr;

			{

	m_pVertexShader = NULL;

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

 */

int SEGMENT = 36;

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	D3D11_SAMPLER_DESC smpDesc;

	}

	if (FAILED(hr))



	ConstantLight    pntLight; //点光源

		SDL_Delay(1000);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	{

		m_pImmediateContext->ClearState();

			case SDLK_DOWN:

	m_pDepthStencilView = NULL;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pTexture);



	//インデックスバッファ作成



	scDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	delete[] pIList;

	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_TOTAL

			case SDLK_DOWN:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.Windowed = TRUE;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				// access to vertex

	ConstantLightBuffer clb;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pVertexBuffer = NULL;

	//vector<Vertex> vertex_t;

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.MiscFlags = 0;

	bool ret = tinyobj::LoadObj(

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLight {

	SDL_DestroyRenderer(ren);



		size_t index_offset = 0;  // インデントのオフセット

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pPixelShader);



		KEY_PRESS_SURFACE_TOTAL

			switch (e.key.keysym.sym)



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();



	SAFE_RELEASE(m_pMatrixBuffer);

	D3D11_SAMPLER_DESC smpDesc;









	irData.SysMemPitch = 0;

	//ビューポート設定

	UINT offsets = 0;

				break;

		&m_pImmediateContext);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (!reader.Warning().empty())

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			index_offset += num_vertices;

	txDesc.SampleDesc.Count = 1;



		KEY_PRESS_SURFACE_TOTAL

			{

struct ConstantMatrixBuffer {

	ibDesc.CPUAccessFlags = 0;

	vrData.SysMemSlicePitch = 0;

};

	if (!reader.Warning().empty())

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	m_pRenderTargetView = NULL;

		delete[] pVList;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

	{

	UINT strides = sizeof(Vertex);

				indexlist.push_back(idx.vertex_index);

	scDesc.BufferCount = 1;

	m_pInputLayout = NULL;

}


	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

	D3D11_SUBRESOURCE_DATA irData;



	vbDesc.MiscFlags = 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		cout << "SDL_INIT_ERROR" << endl;

CD3DTest::~CD3DTest()

	//頂点バッファ作成

			// Loop over vertices in the face.

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	UINT flags = 0;

		&attrib,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		&scDesc,

			default:



		//User presses a key

	SDL_FreeSurface(suf);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SAFE_RELEASE(m_pIndexBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//定数バッファ作成



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

	}





		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	vbDesc.StructureByteStride = 0;

	}

	cbDesc.CPUAccessFlags = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

		pVList[i] = vertexlist[i];



		&shapes,

				tinyobj::real_t ty =

	{

	return 0;

			// Loop over vertices in the face.

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		return hr;

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	auto& shapes = reader.GetShapes();

	}

	Vertex* pVList = new Vertex[vcount];

		return hr;

	ibDesc.CPUAccessFlags = 0;

	txDesc.CPUAccessFlags = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				break;

		return hr;

				// access to vertex

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyTexture(tex);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//頂点レイアウト作成

		if (e.type == SDL_QUIT)

		D3D11_SDK_VERSION,

 * Lesson 1: Hello World!

	m_Viewport.TopLeftY = 0;

	tinyobj::ObjReader reader;

	{

#endif

		pVList[i] = vertexlist[i];

	ConstantMaterial material; //物体の質感

	//テクスチャ読み込み

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&scDesc,

		{

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);





	if (FAILED(hr))

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

	SDL_Event e;

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 specular;          //反射(r,g,b)



			}

		//User requests quit

		if (!ret)

				break;

		1,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	// Loop over shapes

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferCount = 1;

}

#include <SDL.h>



/*

	m_pTextureView = NULL;



			}

		return hr;

	float    fov = XMConvertToRadians(20.0f);



			{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < vcount; i++)

		delete[] pIList;







	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

struct ConstantMatrixBuffer {

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	};

		{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	return hr;

			{

		{



	SDL_FreeSurface(bmp);

	m_pSwapChain->Present(0, 0);

	SDL_DestroyRenderer(ren);



	}



	::ZeroMemory(&scDesc, sizeof(scDesc));

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pVertexShader);

	m_VertexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_Angle += XMConvertToRadians(1.0f);

	// Loop over shapes

	SAFE_RELEASE(m_pSwapChain);

	SDL_Quit();

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Quit();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pVertexShader);

	//頂点シェーダー生成





	dsDesc.Format = txDesc.Format;



				break;

	for (int j = 0; j < icount; j++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT offsets = 0;

	SDL_Event e;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	std::string error;

	txDesc.ArraySize = 1;

	}

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

CD3DTest::CD3DTest()

			case SDLK_RIGHT:



	ConstantLightBuffer clb;

	//インデックスバッファ作成

	cbDesc.CPUAccessFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SDL_DestroyTexture(tex);

#include "DirectXManager.h"

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Quit();

	vrData.pSysMem = &pVList[0];

	m_pTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



			}

		KEY_PRESS_SURFACE_RIGHT,

	m_VertexCount = vcount;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

	tinyobj::ObjReader reader;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			{

	m_pPixelShader = NULL;

				// access to vertex

			index_offset += num_vertices;



	}



	SAFE_RELEASE(m_pRenderTargetView);

	m_pDepthStencilTexture = NULL;

	ConstantMaterial material; //物体の質感

	if (!reader.Warning().empty())

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	m_pDevice = NULL;



		&materials,

	{

			switch (e.key.keysym.sym)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int j = 0; j < icount; j++)

		&shapes,

	m_pVertexShader = NULL;



CD3DTest::~CD3DTest()

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	ConstantMatrixBuffer cmb;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pTextureView = NULL;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//vector<WORD> index_t;

				break;

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Quit();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		flags,

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_DOWN,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	tinyobj::ObjReaderConfig reader_config;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_LEFT,

	UINT strides = sizeof(Vertex);

};

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.SampleDesc.Quality = 0;

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	UINT flags = 0;

			case SDLK_RIGHT:

	//インデックスバッファ作成

#include <iostream>



	XMStoreFloat4(&clb.eyePos, eye);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_BUFFER_DESC vbDesc;



struct ConstantMaterial {

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	::GetClientRect(hwnd, &rect);

	tinyobj::ObjReaderConfig reader_config;

	ZeroMemory(&txDesc, sizeof(txDesc));





	if (FAILED(hr))

struct ConstantLightBuffer {

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		return hr;

		&materials,

		//User requests quit

{

	}

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += num_vertices;

{

	//テクスチャ読み込み

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (size_t s = 0; s < shapes.size(); s++)

	DXGI_SWAP_CHAIN_DESC scDesc;



		m_pImmediateContext->ClearState();

using std::cout; using std::endl;

		delete[] pIList;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pPixelShader);

	m_pSwapChain = NULL;

	{

	//Clean up our objects and quit

	ConstantMatrixBuffer cmb;

		return hr;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//Clean up our objects and quit

	tinyobj::attrib_t attrib;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pInputLayout);



	tinyobj::ObjReader reader;

}

	{

void CD3DTest::Release()

	//頂点シェーダー生成

	m_pDepthStencilTexture = NULL;

	m_IndexCount = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pIndexBuffer = NULL;

	}*/

	if (FAILED(hr))

	vector<Vertex> vertexlist;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pSampler);



	SAFE_RELEASE(m_pPixelShader);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (!reader.Error().empty())

	ID3D11Texture2D* pBackBuffer;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&m_pDevice,

	txDesc.SampleDesc.Quality = 0;

	//深度ステンシルバッファ作成





		return hr;



	m_pImmediateContext = NULL;

	for (const auto& shape : shapes)

		&shapes,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{



	m_pPixelShader = NULL;

	m_pSwapChain->Present(0, 0);

	}



#include <iostream>







	}

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	//テクスチャ読み込み



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		if (!ret)

}

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

};



	vbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

	m_IndexCount = icount;

				WORD index = idx.vertex_index;

	HRESULT              hr;

	SAFE_RELEASE(m_pInputLayout);

	bool ret = tinyobj::LoadObj(

	cbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::GetClientRect(hwnd, &rect);

				WORD index = idx.vertex_index;

/*

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	bool ret = tinyobj::LoadObj(

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pTexture);

{



	if (FAILED(hr))

		{

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTexture);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





		&m_pImmediateContext);

		}

int main(int, char**)

}
	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	int     vcount = vertexlist.size();

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <SDL.h>



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	SAFE_RELEASE(m_pDepthStencilView);

	{

	SAFE_RELEASE(m_pDevice);



	}

		else if (e.type == SDL_KEYDOWN)

		//User presses a key

		return hr;

		{

	float    farZ = 100.0f;





	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	CRect                rect;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.MiscFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				indexlist.push_back(index);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(suf);



	SDL_DestroyWindow(win);



		&error,

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#include <iostream>

	SDL_DestroyRenderer(ren);

		return hr;

	cbDesc.MiscFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	}

		delete[] pIList;



			break;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	m_Viewport.MinDepth = 0.0f;

		//User requests quit

				indexlist.push_back(idx.vertex_index);

	m_pTextureView = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantMaterial {

{





		return hr;

	//頂点レイアウト作成

		delete[] pIList;

};

				tinyobj::real_t ty =

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//vector<WORD> index_t;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

{

	m_Angle += XMConvertToRadians(1.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t tx =

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			}

		else if (e.type == SDL_KEYDOWN)

	SDL_Event e;

}


			}

	//Clean up our objects and quit

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	dsDesc.Format = txDesc.Format;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_DestroyTexture(tex);

		&m_pSwapChain,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		&m_pSwapChain,

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4X4 view;

};

	scDesc.BufferDesc.Height = rect.Height();

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			//Select surfaces based on key press





		SDL_Delay(1000);

	}



				break;

				vertex.push_back(vertex_tmp);

	float    farZ = 100.0f;

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		1,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pIndexBuffer);

	dsDesc.Format = txDesc.Format;



	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			switch (e.key.keysym.sym)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.MiscFlags = 0;

			// Loop over vertices in the face.

		SDL_Delay(1000);



		return hr;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pSwapChain);

		pVList[i] = vertexlist[i];

		SDL_RenderCopy(ren, tex, NULL, NULL);

			{

			}

	scDesc.SampleDesc.Quality = 0;

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);

		exit(1);

	irData.SysMemSlicePitch = 0;



	//vector<WORD> index_t;

	auto& attrib = reader.GetAttrib();

		pLevels,

		KEY_PRESS_SURFACE_DEFAULT,

			{

	txDesc.SampleDesc.Quality = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vector<WORD> indexList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	SAFE_RELEASE(m_pRenderTargetView);





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderClear(ren);

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//First we need to start up SDL, and make sure it went ok

			}

int main(int, char**)

		&shapes,

	//First we need to start up SDL, and make sure it went ok

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}

	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_UP,

	WORD   icount = indexList.size();



	m_pTextureView = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//vector<WORD> index_t;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

#include <SDL.h>





		{

	for (int i = 0; i < 3; i++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点シェーダー生成



	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	tinyobj::ObjReader reader;

		&m_pDevice,

	m_pSampler = NULL;

	std::string imagePath = "hello.bmp";

		}

	if (!error.empty())

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_VertexCount = 0;

			switch (e.key.keysym.sym)

	XMFLOAT4 ambient;           //環境(r,g,b)

		&m_pDevice,

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.MaxDepth = 1.0f;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.Windowed = TRUE;

	XMFLOAT4 pos;               //座標(x,y,z)





int SEGMENT = 36;



	SAFE_RELEASE(m_pDevice);

}

	scDesc.SampleDesc.Count = 1;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vrData.SysMemPitch = 0;

	{

		size_t index_offset = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	HRESULT              hr;

{



				break;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	irData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_LEFT,

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_FreeSurface(suf);

}

	};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::vector<tinyobj::material_t> materials;

	}

		}

	XMFLOAT4         eyePos;   //視点座標

	SDL_Quit();



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	UINT flags = 0;

	vector<WORD> indexList;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_IndexCount = 0;

	XMFLOAT4         eyePos;   //視点座標





			case SDLK_DOWN:

	/*

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		&m_pSwapChain,



	scDesc.SampleDesc.Count = 1;

				indexlist.push_back(idx.vertex_index);



	Vertex* pVList = new Vertex[vcount];

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<WORD> indexList;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



		&m_pImmediateContext);

		1,

	//頂点シェーダー生成

	ConstantMatrixBuffer cmb;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		1,

	//Vertex* pVList = new Vertex[vcount];

	tinyobj::ObjReaderConfig reader_config;





		KEY_PRESS_SURFACE_UP,

				// access to vertex



		D3D11_SDK_VERSION,

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

CD3DTest::~CD3DTest()

#endif

			for (size_t v = 0; v < num_vertices; v++)



	m_Viewport.TopLeftX = 0;

struct ConstantMaterial {



	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	};

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		flags,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	for (const auto& shape : shapes)

				break;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		if (e.type == SDL_QUIT)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pIndexBuffer);

	//ピクセルシェーダー生成

}

};

		//User presses a key

	SDL_FreeSurface(bmp);

	cbDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

			// Loop over vertices in the face.

	}

	WORD* pIList = new WORD[icount];

	{

	if (FAILED(hr))

struct ConstantMatrixBuffer {

	if (m_pImmediateContext)

	{



	std::string inputfile = "test.obj";

	m_pDepthStencilTexture = NULL;



		pLevels,

	if (FAILED(hr))



	m_Viewport.MinDepth = 0.0f;

			switch (e.key.keysym.sym)

struct ConstantLight {

struct ConstantMatrixBuffer {

		return hr;

		{

		&scDesc,

	//vector<Vertex> vertex_t;

		SDL_Delay(1000);



			for (size_t v = 0; v < num_vertices; v++)

	HRESULT              hr;

	SDL_DestroyRenderer(ren);



		}

	m_Viewport.TopLeftY = 0;

			switch (e.key.keysym.sym)

	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	ConstantMaterial material; //物体の質感

	m_pRenderTargetView = NULL;

	}

	Vertex* pVList = new Vertex[vcount];



				indexlist.push_back(index);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

	scDesc.BufferCount = 1;

	enum KeyPressSurfaces

	//インデックスバッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pDepthStencilView = NULL;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			default:

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D_FEATURE_LEVEL level;

	vrData.SysMemSlicePitch = 0;

};

	ConstantMatrixBuffer cmb;

	}

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < num_vertices; v++)

		}



	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		&error,

	XMFLOAT4X4 world;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pSwapChain = NULL;



	auto& attrib = reader.GetAttrib();



		SDL_RenderPresent(ren);

		return hr;

	{

	}

		//User requests quit

	scDesc.Windowed = TRUE;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = vcount;

	scDesc.Windowed = TRUE;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{



	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderPresent(ren);

	std::string inputfile = "test.obj";

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&attrib,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	//頂点シェーダー生成

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}
struct ConstantMatrixBuffer {

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	m_pRenderTargetView = NULL;

		return hr;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//ピクセルシェーダー生成

	XMFLOAT4X4 world;



	txDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	vector<WORD> indexList;

	cbDesc.CPUAccessFlags = 0;

		&scDesc,

	UINT strides = sizeof(Vertex);

	D3D11_SAMPLER_DESC smpDesc;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



#include <SDL.h>



	m_Viewport.Height = (FLOAT)rect.Height();

using std::cout; using std::endl;

	txDesc.Height = rect.Height();



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC cbDesc;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		if (!ret)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Width = rect.Width();

	m_pVertexShader = NULL;

	pBackBuffer->Release();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_DOWN,





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	SAFE_RELEASE(m_pImmediateContext);

	m_pPixelShader = NULL;

		}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

	//ビューポート設定

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ConstantLightBuffer clb;

		{

		&scDesc,

using std::cout; using std::endl;







				tinyobj::real_t ty =

}

void CD3DTest::Render()

	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_SUBRESOURCE_DATA irData;

				indexlist.push_back(index);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

		{

			{

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

CD3DTest::CD3DTest()

	//インデックスバッファ作成

	//Clean up our objects and quit

	LoadObj(vertexlist, indexList);

		&attrib,

	::GetClientRect(hwnd, &rect);

	}

	}

	if (FAILED(hr))

			exit(1);

			break;



	WORD   icount = indexList.size();

			// Loop over vertices in the face.

	if (FAILED(hr))

			}



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.Height = (FLOAT)rect.Height();

void CD3DTest::Release()

		m_pImmediateContext->ClearState();

int main(int, char**)

		delete[] pVList;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

	SDL_DestroyRenderer(ren);

	txDesc.MipLevels = 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_FreeSurface(bmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);



	SDL_DestroyRenderer(ren);

};

	txDesc.MiscFlags = 0;

	m_pTextureView = NULL;

	m_pInputLayout = NULL;

				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

};

	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				WORD index = idx.vertex_index;

	}

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.Windowed = TRUE;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			case SDLK_LEFT:

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		if (e.type == SDL_QUIT)

		KEY_PRESS_SURFACE_DOWN,

		&shapes,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				// access to vertex

		{

	float    nearZ = 0.1f;

	XMFLOAT4 specular;          //反射(r,g,b)

	return 0;

			for (size_t v = 0; v < num_vertices; v++)

}

				// access to vertex







	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}



	SAFE_RELEASE(m_pSampler);

	{

	//頂点レイアウト作成

	SDL_DestroyWindow(win);

	Vertex* pVList = new Vertex[vcount];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//インデックスバッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC ibDesc;

#include <iostream>





		size_t index_offset = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	for (int j = 0; j < icount; j++)

	txDesc.MipLevels = 1;

		R"(cube.obj)");





			default:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pVertexBuffer = NULL;



		&m_pSwapChain,

	UINT strides = sizeof(Vertex);

struct ConstantLight {

			{

	SAFE_RELEASE(m_pImmediateContext);



	{

	m_pPixelShader = NULL;

		if (e.type == SDL_QUIT)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pImmediateContext);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{



	m_pIndexBuffer = NULL;

	for (int i = 0; i < vcount; i++)

	}*/

	m_pSwapChain->Present(0, 0);



		1,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_DEFAULT,

	UINT strides = sizeof(Vertex);

	//頂点シェーダー生成

	SDL_DestroyRenderer(ren);

}

	}*/

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			//Select surfaces based on key press



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	return;

	tinyobj::ObjReader reader;

	{

		&m_pDevice,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (const auto& shape : shapes)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 projection;

	m_Viewport.TopLeftY = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t ty =

		delete[] pIList;

		&m_pDevice,



				break;

	irData.SysMemSlicePitch = 0;

		SDL_Delay(1000);





	float    farZ = 100.0f;



	cbDesc.StructureByteStride = 0;





				vertex.push_back(vertex_tmp);

	m_pPixelShader = NULL;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include "DirectXManager.h"

				vertex.push_back(vertex_tmp);



	//深度ステンシルバッファ作成

	txDesc.Height = rect.Height();

	m_pPixelShader = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain->Present(0, 0);

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

 */

	if (!error.empty())

	float    farZ = 100.0f;



	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyTexture(tex);

		return hr;

}



		R"(cube.obj)");

{

};

	SAFE_RELEASE(m_pVertexShader);

	SDL_FreeSurface(bmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	tinyobj::ObjReaderConfig reader_config;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SAFE_RELEASE(m_pVertexShader);

		{

	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 attenuate;         //減衰(a,b,c)

void CD3DTest::Render()

	}

	m_VertexCount = vcount;

 * Lesson 1: Hello World!

	::GetClientRect(hwnd, &rect);

		size_t index_offset = 0;

		m_pImmediateContext->ClearState();

}

	SDL_DestroyRenderer(ren);



	//Create Index

	tinyobj::ObjReaderConfig reader_config;

		&m_pImmediateContext);

	{

	float    nearZ = 0.1f;

		D3D_DRIVER_TYPE_HARDWARE,

	//深度ステンシルバッファ作成

	float    nearZ = 0.1f;

	SDL_Quit();

				WORD index = idx.vertex_index;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	m_pRenderTargetView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.pSysMem = &pVList[0];

		return hr;

	std::vector<tinyobj::shape_t> shapes;

			}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

#include <iostream>

int SEGMENT = 36;

{

};

{



int main(int, char**)

		if (!ret)

	vbDesc.StructureByteStride = 0;



		else if (e.type == SDL_KEYDOWN)

	//インデックスバッファ作成

	}

	ibDesc.CPUAccessFlags = 0;

		return hr;





		{

	XMFLOAT4X4 projection;

	Release();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vbDesc.CPUAccessFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.MiscFlags = 0;

	vrData.SysMemSlicePitch = 0;

		pVList[i] = vertexlist[i];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))



	SDL_DestroyWindow(win);

		1,

			case SDLK_DOWN:

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.SysMemPitch = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	enum KeyPressSurfaces

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vrData.SysMemPitch = 0;

};





		else if (e.type == SDL_KEYDOWN)

	{



	}



	cbDesc.MiscFlags = 0;

		// Loop over faces(polygon)



	txDesc.CPUAccessFlags = 0;

			{

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pMatrixBuffer);



	delete[] pVList;

	txDesc.ArraySize = 1;

		size_t index_offset = 0;

		return hr;



{

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderClear(ren);

	HRESULT              hr;

void CD3DTest::Render()

	SDL_FreeSurface(suf);

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

	return;

	vbDesc.MiscFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

		delete[] pVList;

		SDL_Delay(1000);

	if (FAILED(hr))

		SDL_Delay(1000);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_VertexCount = vcount;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		if (!ret)

		1,

		// Loop over faces(polygon)

	XMFLOAT4X4 world;

	m_IndexCount = icount;





	std::vector<tinyobj::shape_t> shapes;

	return 0;

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		cout << "SDL_INIT_ERROR" << endl;

		delete[] pIList;

	if (FAILED(hr))





	}

	}

	Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	SDL_DestroyRenderer(ren);

			case SDLK_LEFT:

				indexlist.push_back(index);

				indexlist.push_back(index);

	m_pDepthStencilView = NULL;

struct ConstantMaterial {

};

	SDL_FreeSurface(suf);



	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	/*



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pSampler);





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 specular;          //反射(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	SAFE_RELEASE(m_pTexture);

{

	enum KeyPressSurfaces

}

}





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (const auto& shape : shapes)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pDepthStencilView = NULL;

	pBackBuffer->Release();

	m_IndexCount = 0;

	if (FAILED(hr))

	m_IndexCount = 0;

		// Loop over faces(polygon)

		return hr;





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

		SDL_RenderClear(ren);

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&level,





			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

		SDL_Delay(1000);

struct ConstantLight {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

		else if (e.type == SDL_KEYDOWN)

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	reader_config.mtl_search_path = "./"; // Path to material files

				vertex.push_back(vertex_tmp);

				break;

		size_t index_offset = 0;

	if (!error.empty())

	m_pSwapChain->Present(0, 0);

			index_offset += fv;



	//Vertex* pVList = new Vertex[vcount];

int SEGMENT = 36;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

struct ConstantMaterial {

	//深度ステンシルバッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;



	{

		}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::shape_t> shapes;

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				indexlist.push_back(idx.vertex_index);

	std::string imagePath = "hello.bmp";

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

};

	auto& attrib = reader.GetAttrib();

	dsDesc.Format = txDesc.Format;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4         eyePos;   //視点座標

			{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			index_offset += fv;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		delete[] pIList;



		return 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&level,

			//Select surfaces based on key press

	m_pTexture = NULL;

	delete[] pVList;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		SDL_RenderClear(ren);

	ibDesc.StructureByteStride = 0;



		m_pImmediateContext->ClearState();

	return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	cbDesc.MiscFlags = 0;

	m_pSampler = NULL;

}

	}

	m_pInputLayout = NULL;

	m_pSwapChain->Present(0, 0);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Create Index

	{



	cbDesc.MiscFlags = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	//テクスチャ読み込み

	m_pMatrixBuffer = NULL;

	{

	txDesc.Height = rect.Height();

	m_pDepthStencilTexture = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

		}

		pVList[i] = vertexlist[i];



		pIList[j] = indexList[j];

	SDL_DestroyTexture(tex);

};

	UINT strides = sizeof(Vertex);

	return 0;

		if (e.type == SDL_QUIT)

			case SDLK_UP:

#include <SDL.h>

#include <iostream>



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



struct ConstantMatrixBuffer {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	vrData.pSysMem = &pVList[0];

				break;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.Width = rect.Width();



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	dsDesc.Texture2D.MipSlice = 0;

	{

	if (FAILED(hr))

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pLightBuffer);

		return hr;



struct ConstantLight {

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_DEFAULT,

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	enum KeyPressSurfaces





	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMatrixBuffer cmb;

	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_RIGHT,

		return hr;



			for (size_t v = 0; v < num_vertices; v++)

	//Clean up our objects and quit

	m_pSwapChain = NULL;



	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_VertexCount = vcount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_RenderPresent(ren);

	{

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	D3D_FEATURE_LEVEL level;

		}

		&error,

	CRect                rect;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

		&scDesc,



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		{

		&shapes,



	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_DOWN,

	pBackBuffer->Release();



	D3D11_TEXTURE2D_DESC txDesc;

		1,

struct ConstantMaterial {



	cbDesc.MiscFlags = 0;



	D3D11_SUBRESOURCE_DATA irData;



	m_pSwapChain = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	//頂点レイアウト作成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	}

	m_pDepthStencilView = NULL;

		return hr;

			}

	ConstantMatrixBuffer cmb;

		delete[] pVList;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_UP,

#ifdef _DEBUG

	return hr;

{



	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		}







	SDL_Quit();



	while (SDL_PollEvent(&e) != 0)



	for (int j = 0; j < icount; j++)



		// Loop over faces(polygon)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





int main(int, char**)



	cbDesc.CPUAccessFlags = 0;

	//ピクセルシェーダー生成

	for (int i = 0; i < 3; i++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.Windowed = TRUE;



	std::string error;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_IndexCount = icount;

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.SampleDesc.Quality = 0;

		pVList[i] = vertexlist[i];

		return hr;



	D3D11_BUFFER_DESC cbDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pDepthStencilTexture = NULL;



	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		pVList[i] = vertexlist[i];

			}





				WORD index = idx.vertex_index;

	if (FAILED(hr))

	if (!reader.Warning().empty())

	//vector<WORD> index_t;



	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット



		return hr;





	tinyobj::attrib_t attrib;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (e.type == SDL_QUIT)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		}



		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{



				WORD index = idx.vertex_index;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pSwapChain = NULL;

	scDesc.SampleDesc.Count = 1;

}

	int     vcount = vertexlist.size();

	for (int i = 0; i < 3; i++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		pIList[j] = indexList[j];





	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

}



		return hr;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

int SEGMENT = 36;

	LoadObj(vertexlist, indexList);

int SEGMENT = 36;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

#include <iostream>

	D3D11_SUBRESOURCE_DATA irData;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			switch (e.key.keysym.sym)

	{

	vrData.SysMemSlicePitch = 0;

	cbDesc.MiscFlags = 0;

	}



};

	m_pLightBuffer = NULL;

		return hr;

	D3D_FEATURE_LEVEL level;

	SDL_DestroyWindow(win);

	irData.pSysMem = &pIList[0];



		pVList[i] = vertexlist[i];



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		D3D11_SDK_VERSION,



	vrData.pSysMem = &pVList[0];

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_TEXTURE2D_DESC txDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;



	SAFE_RELEASE(m_pMatrixBuffer);



	m_Viewport.TopLeftX = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		KEY_PRESS_SURFACE_DEFAULT,

		if (e.type == SDL_QUIT)

	m_IndexCount = icount;

	m_pPixelShader = NULL;





				indexlist.push_back(idx.vertex_index);

	irData.pSysMem = &pIList[0];





				tinyobj::real_t tx =

			case SDLK_RIGHT:

	//Key press surfaces constants

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	txDesc.SampleDesc.Quality = 0;



{

	m_pMatrixBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pVertexBuffer = NULL;

		{

		return hr;

	}

void CD3DTest::Render()

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pDevice);

	if (!reader.ParseFromFile(inputfile, reader_config))

	}*/

	auto& materials = reader.GetMaterials();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



void CD3DTest::Render()

	//頂点レイアウト作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}





		{

	txDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))



 * Lesson 1: Hello World!



		1,



void CD3DTest::Release()

		delete[] pIList;

		return hr;

	if (FAILED(hr))

				// access to vertex

	txDesc.MipLevels = 1;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	//First we need to start up SDL, and make sure it went ok

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pSampler);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.OutputWindow = hwnd;

 */

		exit(1);

	{

	if (FAILED(hr))



	delete[] pIList;



	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain->Present(0, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;

struct ConstantMatrixBuffer {

	auto& materials = reader.GetMaterials();

	cbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		return hr;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	for (size_t s = 0; s < shapes.size(); s++)

			index_offset += num_vertices;



		&materials,

	m_pRenderTargetView = NULL;

	txDesc.MiscFlags = 0;

			case SDLK_DOWN:

	bool ret = tinyobj::LoadObj(

				break;

		delete[] pVList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		pIList[j] = indexList[j];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	ConstantMatrixBuffer cmb;

	auto& materials = reader.GetMaterials();

		SDL_RenderPresent(ren);

	txDesc.CPUAccessFlags = 0;





				break;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&materials,

	Release();

	m_pSwapChain->Present(0, 0);

	return;



	if (FAILED(hr))

struct ConstantMaterial {

	//ビューポート設定

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			case SDLK_RIGHT:



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

		return hr;

	//インデックスバッファ作成

		{

	std::vector<tinyobj::material_t> materials;

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.eyePos, eye);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

 */

				// access to vertex

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			break;

	for (const auto& shape : shapes)



	if (FAILED(hr))



};

	if (FAILED(hr))



	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& materials = reader.GetMaterials();

		SDL_RenderClear(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	delete[] pIList;

};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	enum KeyPressSurfaces

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	txDesc.CPUAccessFlags = 0;

		return hr;



	irData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_UP,

	for (int j = 0; j < icount; j++)

		{



	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	m_Viewport.TopLeftX = 0;

	//Key press surfaces constants

	if (FAILED(hr))

		&m_pDevice,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

struct ConstantMatrixBuffer {

	m_pSwapChain->Present(0, 0);

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	int     vcount = vertexlist.size();

	SDL_DestroyWindow(win);

			index_offset += fv;

	SAFE_RELEASE(m_pMatrixBuffer);

		delete[] pIList;





	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

			}

				// access to vertex



	SDL_DestroyWindow(win);

		SDL_Delay(1000);



	bool ret = tinyobj::LoadObj(

	{

	m_VertexCount = vcount;

	ConstantMatrixBuffer cmb;

			case SDLK_DOWN:

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	float    farZ = 100.0f;

#include <SDL.h>

		&m_pImmediateContext);

	//vector<WORD> index_t;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				break;

#include "DirectXManager.h"

	UINT strides = sizeof(Vertex);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.CPUAccessFlags = 0;

		return hr;



	vrData.pSysMem = &pVList[0];

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			index_offset += fv;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

 */

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				// access to vertex

		return hr;

		&m_pSwapChain,

	vrData.SysMemPitch = 0;

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

		KEY_PRESS_SURFACE_DEFAULT,

		}



	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	return 0;

		&shapes,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		//User presses a key



	vrData.pSysMem = &pVList[0];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

	std::string inputfile = "test.obj";

	D3D11_SUBRESOURCE_DATA vrData;

	m_pDepthStencilView = NULL;

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pVertexBuffer = NULL;

				vertex.push_back(vertex_tmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	tinyobj::attrib_t attrib;

	D3D11_BUFFER_DESC cbDesc;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		&level,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pPixelShader);

				vertex.push_back(vertex_tmp);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		if (!reader.Error().empty())

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.BufferCount = 1;

			// Loop over vertices in the face.

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	tinyobj::ObjReader reader;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	if (FAILED(hr))



	ZeroMemory(&txDesc, sizeof(txDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);







	{

void CD3DTest::Release()

	dsDesc.Format = txDesc.Format;

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDevice);

	txDesc.MiscFlags = 0;

{



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		delete[] pVList;



	vector<Vertex> vertexlist;



	ibDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;



		{

				break;

	SDL_DestroyWindow(win);

				tinyobj::real_t ty =

	SDL_DestroyTexture(tex);



	cbDesc.CPUAccessFlags = 0;

		return hr;





		//User requests quit

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		}





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ibDesc.StructureByteStride = 0;



	std::string imagePath = "hello.bmp";

				// access to vertex

	if (FAILED(hr))

	}

		return hr;

	{



int main(int, char**)

	}

	vrData.SysMemSlicePitch = 0;

	//Clean up our objects and quit

		return hr;

	txDesc.SampleDesc.Count = 1;

}

	//頂点シェーダー生成

	txDesc.ArraySize = 1;

		&shapes,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.MinDepth = 0.0f;

	txDesc.MiscFlags = 0;

	scDesc.BufferCount = 1;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





			case SDLK_RIGHT:

				break;



	UINT strides = sizeof(Vertex);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_FreeSurface(suf);

	UINT offsets = 0;

	ConstantLight    pntLight; //点光源

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		exit(1);

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferCount = 1;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_FreeSurface(suf);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

};

CD3DTest::~CD3DTest()





	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderClear(ren);



		KEY_PRESS_SURFACE_DOWN,



{

	std::string inputfile = "test.obj";



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	UINT offsets = 0;

	m_pDepthStencilTexture = NULL;

	}

			{

	pBackBuffer->Release();

			for (size_t v = 0; v < fv; v++)

		}

	m_pTexture = NULL;



	if (FAILED(hr))



	{

	return hr;

	return hr;



		return hr;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)



				vertex.push_back(vertex_tmp);

	ConstantLightBuffer clb;

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

			}

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_DestroyWindow(win);

	scDesc.OutputWindow = hwnd;

		&m_pSwapChain,



	vbDesc.CPUAccessFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	m_pIndexBuffer = NULL;

	m_pDepthStencilTexture = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	vector<WORD> indexList;



		}

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.TopLeftY = 0;

		cout << "SDL_INIT_ERROR" << endl;

		return hr;



	XMFLOAT4 ambient;           //環境(r,g,b)



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

int SEGMENT = 36;

	//Clean up our objects and quit

	ConstantMatrixBuffer cmb;

	ibDesc.CPUAccessFlags = 0;

}

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	Vertex* pVList = new Vertex[vcount];

	HRESULT              hr;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

		KEY_PRESS_SURFACE_DEFAULT,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}*/



{

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				WORD index = idx.vertex_index;

		return hr;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Event e;

		delete[] pIList;

	scDesc.BufferCount = 1;

	tinyobj::ObjReaderConfig reader_config;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;



	ConstantLightBuffer clb;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	for (const auto& shape : shapes)

	}

	int     vcount = vertexlist.size();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	int     vcount = vertexlist.size();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	vector<Vertex> vertexlist;

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	irData.SysMemPitch = 0;



		KEY_PRESS_SURFACE_DOWN,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	irData.SysMemSlicePitch = 0;



	bool ret = tinyobj::LoadObj(

	std::string imagePath = "hello.bmp";

	SDL_FreeSurface(bmp);



		if (!ret)

		return hr;

	// Loop over shapes

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferCount = 1;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{





	ibDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//インデックスバッファ作成

		SDL_RenderPresent(ren);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += num_vertices;



	UINT offsets = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//First we need to start up SDL, and make sure it went ok



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok

		R"(cube.obj)");

		size_t index_offset = 0;  // インデントのオフセット

#endif





	ibDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	m_VertexCount = 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))



	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;

int main(int, char**)





{



	vrData.SysMemSlicePitch = 0;

		{

		{



		cout << "SDL_INIT_ERROR" << endl;

		return 1;



		D3D11_SDK_VERSION,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		{



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	reader_config.mtl_search_path = "./"; // Path to material files



	for (int i = 0; i < 3; i++)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				WORD index = idx.vertex_index;

		delete[] pIList;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//Key press surfaces constants

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//Clean up our objects and quit

		delete[] pVList;

	//頂点レイアウト作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		KEY_PRESS_SURFACE_UP,

		&scDesc,

		D3D11_SDK_VERSION,



	UINT flags = 0;

				// access to vertex



	{

	SDL_DestroyWindow(win);





	//頂点バッファ作成

		delete[] pIList;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		&level,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			switch (e.key.keysym.sym)

	return;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			case SDLK_DOWN:

	CRect                rect;

	UINT offsets = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	//Create Index





		if (e.type == SDL_QUIT)

	float    farZ = 100.0f;



	vrData.SysMemSlicePitch = 0;



		NULL,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





		pIList[j] = indexList[j];

	D3D11_SUBRESOURCE_DATA vrData;



	scDesc.Windowed = TRUE;

			{

	}

	}

	if (m_pImmediateContext)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.CPUAccessFlags = 0;



	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	cbDesc.CPUAccessFlags = 0;

		return hr;

	/*

	scDesc.OutputWindow = hwnd;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_IndexCount = icount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_RIGHT,



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pMatrixBuffer);



			}

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftX = 0;

#include <SDL.h>

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);







	SAFE_RELEASE(m_pMatrixBuffer);

	{

	{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&m_pDevice,

	{

	//ビューポート設定

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	D3D11_TEXTURE2D_DESC txDesc;

struct ConstantMatrixBuffer {

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		delete[] pVList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	tinyobj::ObjReaderConfig reader_config;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D_FEATURE_LEVEL level;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain = NULL;

	ConstantMaterial material; //物体の質感

				tinyobj::real_t ty =





	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_Viewport.Height = (FLOAT)rect.Height();





	if (FAILED(hr))

			case SDLK_RIGHT:

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&m_pImmediateContext);

	//Key press surfaces constants

	}

	m_Viewport.TopLeftY = 0;



int SEGMENT = 36;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_FreeSurface(suf);

			// Loop over vertices in the face.

		{

	WORD   icount = indexList.size();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.SampleDesc.Quality = 0;

	txDesc.Height = rect.Height();



		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	m_VertexCount = 0;

	m_pSwapChain = NULL;

	XMFLOAT4X4 view;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pInputLayout);

	D3D11_BUFFER_DESC ibDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	{

	//定数バッファ作成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

	scDesc.SampleDesc.Count = 1;



	ibDesc.StructureByteStride = 0;

			// Loop over vertices in the face.

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pTexture);

	scDesc.BufferDesc.Width = rect.Width();



		//User presses a key



void CD3DTest::Release()

	m_pTexture = NULL;

	std::vector<tinyobj::material_t> materials;

		{

	if (FAILED(hr))

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			default:

			break;

		&level,

	}

				break;

				// access to vertex

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&materials,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			switch (e.key.keysym.sym)

		pVList[i] = vertexlist[i];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

};





	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		m_pImmediateContext->ClearState();

	m_pDevice = NULL;

				// access to vertex

	//頂点レイアウト作成



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			// Loop over vertices in the face.



	if (FAILED(hr))

int main(int, char**)

 * Lesson 1: Hello World!

	scDesc.BufferDesc.Width = rect.Width();



			// Loop over vertices in the face.

	enum KeyPressSurfaces

		// Loop over faces(polygon)

	Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D11_BUFFER_DESC vbDesc;

#include <iostream>

	scDesc.SampleDesc.Count = 1;







	while (SDL_PollEvent(&e) != 0)

				vertex.push_back(vertex_tmp);

				break;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





		SDL_RenderPresent(ren);

	SDL_FreeSurface(bmp);

	return;

		exit(1);

	SAFE_RELEASE(m_pMatrixBuffer);



	ibDesc.MiscFlags = 0;

			default:

	delete[] pIList;

	enum KeyPressSurfaces

	cbDesc.MiscFlags = 0;





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pTextureView = NULL;



			exit(1);

	ConstantLight    pntLight; //点光源

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pInputLayout);



	}

	txDesc.CPUAccessFlags = 0;

	CRect                rect;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		{

		exit(1);



	cbDesc.StructureByteStride = 0;



			{

	SAFE_RELEASE(m_pInputLayout);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{



		{

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.TopLeftX = 0;

/*

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);



		return hr;

			}

		SDL_RenderCopy(ren, tex, NULL, NULL);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}



	txDesc.ArraySize = 1;

		SDL_RenderClear(ren);

		exit(1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_DEFAULT,

				break;

			index_offset += fv;

	SDL_DestroyRenderer(ren);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pSwapChain->Present(0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	CRect                rect;

	}

		D3D_DRIVER_TYPE_HARDWARE,

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pIndexBuffer);



	scDesc.Windowed = TRUE;

	enum KeyPressSurfaces

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		SDL_RenderClear(ren);



	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

using std::cout; using std::endl;

	SAFE_RELEASE(m_pSampler);



		1,

/*

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//vector<Vertex> vertex_t;

	SDL_DestroyRenderer(ren);

			index_offset += num_vertices;

	for (const auto& shape : shapes)



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

	m_pSampler = NULL;

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pTextureView = NULL;



		1,

	}

		return hr;

	{

	for (size_t s = 0; s < shapes.size(); s++)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!error.empty())

	ibDesc.StructureByteStride = 0;

int SEGMENT = 36;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#include <iostream>

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&m_pDevice,

	vbDesc.StructureByteStride = 0;

			{

		if (!reader.Error().empty())

int main(int, char**)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

CD3DTest::CD3DTest()

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_SAMPLER_DESC smpDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

int main(int, char**)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyTexture(tex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	std::string error;

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				break;

	m_pImmediateContext = NULL;

		return hr;

	float    nearZ = 0.1f;

#endif

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.BufferDesc.Width = rect.Width();

	{

	D3D11_BUFFER_DESC ibDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pTexture = NULL;

#include "DirectXManager.h"

using std::cout; using std::endl;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	float    farZ = 100.0f;

	m_Viewport.Width = (FLOAT)rect.Width();

{

	}

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			for (size_t v = 0; v < num_vertices; v++)

{

	irData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Width = rect.Width();

	//Vertex* pVList = new Vertex[vcount];



	m_pMatrixBuffer = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();





	scDesc.BufferDesc.Height = rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DEFAULT,



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		D3D11_SDK_VERSION,



	WORD* pIList = new WORD[icount];

		}

		//User presses a key

	m_pVertexBuffer = NULL;

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;



	int     vcount = vertexlist.size();

	Release();



	delete[] pVList;

	XMFLOAT4X4 projection;

	m_pIndexBuffer = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		KEY_PRESS_SURFACE_LEFT,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	std::vector<tinyobj::shape_t> shapes;

			int num_vertices = shape.mesh.num_face_vertices[f];



				break;

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_LEFT,

		{

	SAFE_RELEASE(m_pRenderTargetView);

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 view;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

using std::cout; using std::endl;

		exit(1);

	//テクスチャ読み込み

			default:



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{





		&materials,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	HRESULT              hr;

	if (FAILED(hr))

CD3DTest::CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

	D3D11_BUFFER_DESC cbDesc;

	SDL_DestroyTexture(tex);

	D3D11_BUFFER_DESC vbDesc;

	}*/



	ConstantLight    pntLight; //点光源

				break;

	SAFE_RELEASE(m_pLightBuffer);

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantLight {



		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	irData.pSysMem = &pIList[0];

		&m_pDevice,



	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

{

		&materials,

	UINT offsets = 0;

	txDesc.SampleDesc.Quality = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pPixelShader);

			{

	auto& shapes = reader.GetShapes();

#include "DirectXManager.h"

	std::string error;



	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void CD3DTest::Render()

			break;

			switch (e.key.keysym.sym)

	cbDesc.CPUAccessFlags = 0;



		&attrib,

		return hr;



};

	//インデックスバッファ作成

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_SUBRESOURCE_DATA irData;

	LoadObj(vertexlist, indexList);



	int     vcount = vertexlist.size();



	}

	ibDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

	m_pInputLayout = NULL;

	m_pSwapChain->Present(0, 0);

		}

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				indexlist.push_back(index);



				WORD index = idx.vertex_index;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#ifdef _DEBUG

 */

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDevice);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

/*

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D_FEATURE_LEVEL level;

			}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				indexlist.push_back(index);

		return hr;

	tinyobj::ObjReader reader;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	ID3D11Texture2D* pBackBuffer;

	//Create Index



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//定数バッファ作成

{

	D3D11_SUBRESOURCE_DATA irData;

	{

		{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4X4 view;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.StructureByteStride = 0;



	//テクスチャ読み込み

	/*

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;



	for (int i = 0; i < 3; i++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_SAMPLER_DESC smpDesc;



				vertex.push_back(vertex_tmp);



	// Loop over shapes

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ConstantLight    pntLight; //点光源

CD3DTest::CD3DTest()



				break;



	m_Viewport.MaxDepth = 1.0f;





	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += fv;

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string imagePath = "hello.bmp";

using std::cout; using std::endl;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Quality = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	return hr;

	int     vcount = vertexlist.size();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		size_t index_offset = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	Release();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

{

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	auto& materials = reader.GetMaterials();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	dsDesc.Format = txDesc.Format;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&level,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		SDL_Delay(1000);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	scDesc.OutputWindow = hwnd;

			}

	{

	txDesc.ArraySize = 1;

	{

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

		if (!ret)

{

}

	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))



	{

	std::string inputfile = "test.obj";



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	UINT strides = sizeof(Vertex);

			}



	bool ret = tinyobj::LoadObj(

	//深度ステンシルバッファ作成

	irData.pSysMem = &pIList[0];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4X4 view;

	XMFLOAT4         eyePos;   //視点座標



		pIList[j] = indexList[j];

				// access to vertex

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_Viewport.Width = (FLOAT)rect.Width();

#include <SDL.h>



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				break;

			case SDLK_UP:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



#include <iostream>

	D3D11_TEXTURE2D_DESC txDesc;

	float    nearZ = 0.1f;

				indexlist.push_back(idx.vertex_index);

			index_offset += fv;

		{

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

int SEGMENT = 36;

	scDesc.BufferCount = 1;

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vrData.pSysMem = &pVList[0];

		else if (e.type == SDL_KEYDOWN)

		size_t index_offset = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

void CD3DTest::Release()

	m_pSampler = NULL;

			for (size_t v = 0; v < num_vertices; v++)

int SEGMENT = 36;

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	{



	CRect                rect;

	std::vector<tinyobj::shape_t> shapes;

	{

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	tinyobj::ObjReaderConfig reader_config;

{

	};

	}

	UINT strides = sizeof(Vertex);



	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pMatrixBuffer);

	{









	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//Clean up our objects and quit

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (int j = 0; j < icount; j++)

	SDL_Event e;

{

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

 */

	ZeroMemory(&dsDesc, sizeof(dsDesc));



int SEGMENT = 36;

	D3D11_TEXTURE2D_DESC txDesc;



	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	//Create Index

	m_IndexCount = icount;

		pIList[j] = indexList[j];





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return 1;

	SAFE_RELEASE(m_pDevice);





				break;

int SEGMENT = 36;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pSampler);

	scDesc.Windowed = TRUE;

		1,

	{

			{

	UINT strides = sizeof(Vertex);

int main(int, char**)

	SAFE_RELEASE(m_pSampler);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};







	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pInputLayout);

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	m_pSwapChain = NULL;

	cbDesc.StructureByteStride = 0;

}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t tx =

};

CD3DTest::CD3DTest()

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMStoreFloat4(&clb.ambient, lightAmbient);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pLightBuffer = NULL;



	while (SDL_PollEvent(&e) != 0)

		if (e.type == SDL_QUIT)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vrData.pSysMem = &pVList[0];



	m_pLightBuffer = NULL;

		&shapes,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	Release();





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&m_pImmediateContext);

		1,

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))



	{

		return hr;

		&materials,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	};

			index_offset += num_vertices;

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}





	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	//テクスチャ読み込み

			{



		SDL_Delay(1000);

int SEGMENT = 36;

	m_pInputLayout = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pSampler);

int main(int, char**)

	}

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			// Loop over vertices in the face.

	m_Angle += XMConvertToRadians(1.0f);

	{



		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	scDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.ArraySize = 1;

	//Key press surfaces constants

	//深度ステンシルバッファ作成



		NULL,

	m_Viewport.Width = (FLOAT)rect.Width();

		if (!reader.Error().empty())



				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

}

				break;

		&error,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];











	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		SDL_RenderClear(ren);





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}





	delete[] pIList;



	txDesc.ArraySize = 1;

	XMFLOAT4X4 view;

	LoadObj(vertexlist, indexList);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	enum KeyPressSurfaces

	//インデックスバッファ作成

				break;

	txDesc.MipLevels = 1;

		// Loop over faces(polygon)

	ibDesc.CPUAccessFlags = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		D3D11_SDK_VERSION,



	XMFLOAT4X4 world;

CD3DTest::~CD3DTest()

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyTexture(tex);

	{

		pLevels,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pLightBuffer);

			break;

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		exit(1);

		}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	//Create Index

	m_pTextureView = NULL;

	std::vector<tinyobj::shape_t> shapes;

			//Select surfaces based on key press

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

	{





		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Viewport.TopLeftY = 0;

		return hr;

				break;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pSampler = NULL;

	//ピクセルシェーダー生成



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pDepthStencilView = NULL;

		{

	SAFE_RELEASE(m_pSampler);



	irData.pSysMem = &pIList[0];

	{

	enum KeyPressSurfaces

	{

	SDL_FreeSurface(suf);

	{

{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_RIGHT,

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;





	if (!reader.Warning().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];







	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantLight {

CD3DTest::~CD3DTest()

int main(int, char**)

	txDesc.Height = rect.Height();



	m_pMatrixBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	SAFE_RELEASE(m_pImmediateContext);



	auto& attrib = reader.GetAttrib();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

};

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	return hr;

		1,

	return 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			case SDLK_DOWN:

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pImmediateContext);



		return hr;

	m_Viewport.TopLeftY = 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		&level,

	//頂点バッファ作成

struct ConstantLight {

	SAFE_RELEASE(m_pVertexBuffer);

	m_pTexture = NULL;

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pTexture = NULL;

	txDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&m_pDevice,

{

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	D3D11_SAMPLER_DESC smpDesc;

	m_pDepthStencilView = NULL;

				WORD index = idx.vertex_index;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#ifdef _DEBUG

		return hr;

		1,

	SAFE_RELEASE(m_pPixelShader);

		//User requests quit

	}

			}

	if (FAILED(hr))

				break;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		//User presses a key

	{





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//深度ステンシルバッファ作成

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.OutputWindow = hwnd;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	dsDesc.Format = txDesc.Format;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

	ibDesc.StructureByteStride = 0;

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	bool ret = tinyobj::LoadObj(

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_Delay(1000);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vector<Vertex> vertexlist;





	if (!error.empty())

		}

	irData.SysMemSlicePitch = 0;

	}

	m_IndexCount = icount;

}

	SDL_Quit();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				break;

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			//Select surfaces based on key press



	//テクスチャ読み込み

	SAFE_RELEASE(m_pLightBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Create Index



#ifdef _DEBUG

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	scDesc.BufferCount = 1;

	XMFLOAT4 pos;               //座標(x,y,z)

using std::cout; using std::endl;

	if (m_pImmediateContext)

	{

	std::string inputfile = "test.obj";

	txDesc.SampleDesc.Quality = 0;

	/*

		return hr;



	UINT offsets = 0;

			}

		m_pImmediateContext->ClearState();

	auto& attrib = reader.GetAttrib();

	ConstantMatrixBuffer cmb;



	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t tx =

	{

		&m_pSwapChain,

	if (!reader.ParseFromFile(inputfile, reader_config))



void CD3DTest::Release()

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	delete[] pIList;

	txDesc.Height = rect.Height();



	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Angle += XMConvertToRadians(1.0f);

	//ピクセルシェーダー生成



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

				indexlist.push_back(index);

	}

		&m_pImmediateContext);

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	HRESULT              hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			// Loop over vertices in the face.

		return hr;

struct ConstantMaterial {

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	UINT flags = 0;

	//ビューポート設定



	if (m_pImmediateContext)

		delete[] pIList;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

				WORD index = idx.vertex_index;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	CRect                rect;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			{

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.SysMemPitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

};

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pTextureView);

			case SDLK_LEFT:



	return;

		D3D11_SDK_VERSION,

	m_Viewport.TopLeftX = 0;

	float    farZ = 100.0f;

{



		return hr;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	D3D11_SUBRESOURCE_DATA irData;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderPresent(ren);

	vector<Vertex> vertexlist;

};

struct ConstantLight {



				vertex.push_back(vertex_tmp);



	cbDesc.StructureByteStride = 0;

			for (size_t v = 0; v < num_vertices; v++)

	SDL_DestroyWindow(win);







	m_pRenderTargetView = NULL;

	if (FAILED(hr))



	txDesc.CPUAccessFlags = 0;

				// access to vertex



			default:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_IndexCount = icount;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	UINT offsets = 0;

	auto& materials = reader.GetMaterials();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext = NULL;

		}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

		delete[] pIList;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_Delay(1000);



		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_UP:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	m_pSwapChain = NULL;


