		&shapes,

	WORD* pIList = new WORD[icount];



			break;



	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	ibDesc.MiscFlags = 0;

		exit(1);

CD3DTest::~CD3DTest()

		&shapes,

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))



	{

	}

	XMFLOAT4X4 projection;

struct ConstantLight {

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		return hr;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	delete[] pIList;

			case SDLK_UP:

		pVList[i] = vertexlist[i];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

	SDL_DestroyTexture(tex);

	ibDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		if (!reader.Error().empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderPresent(ren);



		pIList[j] = indexList[j];



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	for (const auto& shape : shapes)

	//頂点シェーダー生成

	SAFE_RELEASE(m_pPixelShader);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}



void CD3DTest::Release()

		R"(cube.obj)");

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D_FEATURE_LEVEL level;

struct ConstantMaterial {

}

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&shapes,



		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<Vertex> vertexlist;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		pIList[j] = indexList[j];

	vbDesc.MiscFlags = 0;

#include <SDL.h>

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	//頂点バッファ作成

			for (size_t v = 0; v < fv; v++)

		{

		&error,

	{



	cbDesc.MiscFlags = 0;



{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;

void CD3DTest::Render()



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



{



	SDL_DestroyWindow(win);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	for (size_t s = 0; s < shapes.size(); s++)

	m_pLightBuffer = NULL;

		pVList[i] = vertexlist[i];

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

	}

	m_Viewport.Height = (FLOAT)rect.Height();



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_DOWN:

#include "DirectXManager.h"

#define TINYOBJLOADER_IMPLEMENTATION

	WORD* pIList = new WORD[icount];

{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.StructureByteStride = 0;

	m_pVertexShader = NULL;

	ConstantMatrixBuffer cmb;

	m_pLightBuffer = NULL;

	ConstantMatrixBuffer cmb;

		1,

	DXGI_SWAP_CHAIN_DESC scDesc;





	irData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;









	auto& attrib = reader.GetAttrib();

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		NULL,

				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 view;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				WORD index = idx.vertex_index;

	//ビューポート設定



 * Lesson 1: Hello World!

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;



		D3D_DRIVER_TYPE_HARDWARE,

	std::string imagePath = "hello.bmp";

#include <iostream>

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	WORD* pIList = new WORD[icount];

		return hr;

			for (size_t v = 0; v < fv; v++)

		{

	cbDesc.StructureByteStride = 0;

	::GetClientRect(hwnd, &rect);

	float    farZ = 100.0f;

		}

		SDL_RenderClear(ren);

}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4X4 world;

	//ピクセルシェーダー生成

	auto& shapes = reader.GetShapes();

	ID3D11Texture2D* pBackBuffer;



	m_pPixelShader = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderClear(ren);



{

	m_pMatrixBuffer = NULL;

	m_pDepthStencilView = NULL;

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		R"(cube.obj)");

	scDesc.SampleDesc.Count = 1;





		return hr;

#include <SDL.h>



	ZeroMemory(&dsDesc, sizeof(dsDesc));



{



	cbDesc.MiscFlags = 0;

	m_pDepthStencilTexture = NULL;

		if (!reader.Error().empty())

		return hr;



	int     vcount = vertexlist.size();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		cout << "SDL_INIT_ERROR" << endl;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.SampleDesc.Count = 1;





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点レイアウト作成

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	if (FAILED(hr))

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		1,

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	m_pInputLayout = NULL;



	auto& shapes = reader.GetShapes();



	SDL_FreeSurface(suf);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ibDesc.MiscFlags = 0;

			{

			break;



		&attrib,

	DXGI_SWAP_CHAIN_DESC scDesc;



		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	reader_config.mtl_search_path = "./"; // Path to material files

		&level,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

	if (!error.empty())

	{

	SAFE_RELEASE(m_pDepthStencilView);









	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		// Loop over faces(polygon)

/*

	delete[] pVList;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;



}
		pIList[j] = indexList[j];

	tinyobj::attrib_t attrib;







}

	if (FAILED(hr))

	{

	//頂点バッファ作成

	D3D11_BUFFER_DESC ibDesc;



				// access to vertex

		return hr;

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;



	SDL_DestroyRenderer(ren);

		size_t index_offset = 0;  // インデントのオフセット



	SAFE_RELEASE(m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Quit();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	irData.SysMemPitch = 0;

		return hr;

	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

		{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

				// access to vertex

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pMatrixBuffer);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ConstantMaterial material; //物体の質感

	flags |= D3D11_CREATE_DEVICE_DEBUG;



void CD3DTest::Release()

	UINT strides = sizeof(Vertex);

		}

	//テクスチャ読み込み



	if (FAILED(hr))

	UINT offsets = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;



			{

	SAFE_RELEASE(m_pTexture);





	return 0;

void CD3DTest::Release()

	DXGI_SWAP_CHAIN_DESC scDesc;



	//定数バッファ作成

			index_offset += fv;

	};



	enum KeyPressSurfaces

	std::string imagePath = "hello.bmp";

		flags,



	m_pLightBuffer = NULL;

};

			case SDLK_DOWN:



	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pDevice);

		SDL_RenderClear(ren);





	}

		else if (e.type == SDL_KEYDOWN)

	tinyobj::attrib_t attrib;



}



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pInputLayout);

	tinyobj::ObjReader reader;

#include <iostream>

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	DXGI_SWAP_CHAIN_DESC scDesc;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.MinDepth = 0.0f;

	//頂点シェーダー生成



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMFLOAT4 pos;               //座標(x,y,z)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_BUFFER_DESC ibDesc;

		//User requests quit

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vector<Vertex> vertexlist;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

				tinyobj::real_t ty =

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

using std::cout; using std::endl;

	SDL_Quit();

	XMFLOAT4X4 world;

	m_pSwapChain = NULL;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		delete[] pIList;

	txDesc.ArraySize = 1;

	{

	if (FAILED(hr))



		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pVertexBuffer);

CD3DTest::~CD3DTest()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	HRESULT              hr;

#include "DirectXManager.h"

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SAFE_RELEASE(m_pImmediateContext);



	//Clean up our objects and quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.SampleDesc.Quality = 0;

	Release();

	//Create Index

		return hr;

	cbDesc.MiscFlags = 0;

			exit(1);

	for (int j = 0; j < icount; j++)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	//Clean up our objects and quit

struct ConstantMaterial {

		&materials,



	m_IndexCount = icount;



	//Vertex* pVList = new Vertex[vcount];



	m_pSwapChain = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Create Index

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}





	scDesc.BufferCount = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyRenderer(ren);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	HRESULT              hr;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pTexture);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		KEY_PRESS_SURFACE_DOWN,



		&shapes,

	scDesc.Windowed = TRUE;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vrData.SysMemSlicePitch = 0;

		return hr;

				WORD index = idx.vertex_index;

}



			}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.MiscFlags = 0;

	//vector<Vertex> vertex_t;

	m_pInputLayout = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

}

			break;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_SAMPLER_DESC smpDesc;

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		delete[] pIList;

		KEY_PRESS_SURFACE_DOWN,

	}

	SAFE_RELEASE(m_pImmediateContext);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	};

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.Height = (FLOAT)rect.Height();

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_UP:

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pTextureView);

	tinyobj::ObjReaderConfig reader_config;

		size_t index_offset = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



			}



		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		KEY_PRESS_SURFACE_LEFT,



	return 0;



{

 */

		&attrib,



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pVertexShader);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		}

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	{



	txDesc.SampleDesc.Count = 1;

	CRect                rect;

		return hr;

	while (SDL_PollEvent(&e) != 0)

		KEY_PRESS_SURFACE_DEFAULT,

		if (e.type == SDL_QUIT)

		return hr;

	{







		pVList[i] = vertexlist[i];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.MiscFlags = 0;

		return hr;

	scDesc.BufferDesc.Height = rect.Height();





		pIList[j] = indexList[j];

	if (FAILED(hr))



	m_pPixelShader = NULL;

		NULL,

	vrData.SysMemPitch = 0;





	if (FAILED(hr))

	}*/



				indexlist.push_back(index);





	vrData.SysMemSlicePitch = 0;

		&scDesc,



	D3D_FEATURE_LEVEL level;

struct ConstantLight {

	XMFLOAT4X4 world;

				indexlist.push_back(index);





			for (size_t v = 0; v < fv; v++)

	XMFLOAT4X4 world;

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pInputLayout);



			case SDLK_UP:

		SDL_RenderPresent(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_Delay(1000);

	reader_config.mtl_search_path = "./"; // Path to material files

	dsDesc.Format = txDesc.Format;



		SDL_Delay(1000);





	UINT offsets = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

{

			index_offset += num_vertices;

				tinyobj::real_t ty =

				break;

	CRect                rect;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vrData.pSysMem = &pVList[0];



		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ID3D11Texture2D* pBackBuffer;





	if (FAILED(hr))

				break;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4X4 world;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.OutputWindow = hwnd;

	UINT flags = 0;

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 projection;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			//Select surfaces based on key press

	if (FAILED(hr))

	m_pDevice = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx =

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&level,

	}



	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pIndexBuffer);



	}

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		KEY_PRESS_SURFACE_LEFT,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	UINT strides = sizeof(Vertex);

	SDL_FreeSurface(suf);



	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.MiscFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Count = 1;

int SEGMENT = 36;



	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.eyePos, eye);

	}



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	if (m_pImmediateContext)

using std::cout; using std::endl;

	}





		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//定数バッファ作成





	m_Viewport.MinDepth = 0.0f;

		{



	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

{

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

		&m_pDevice,

int main(int, char**)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

};



		&m_pSwapChain,



	float    fov = XMConvertToRadians(20.0f);

	{

		return hr;



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

void CD3DTest::Release()

	//頂点バッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	float    farZ = 100.0f;

	XMFLOAT4X4 world;

	m_pLightBuffer = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.SampleDesc.Count = 1;



	//Clean up our objects and quit

#ifdef _DEBUG

{







			switch (e.key.keysym.sym)

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	irData.SysMemSlicePitch = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//Create Index



		&shapes,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	}

	bool ret = tinyobj::LoadObj(



	m_pTexture = NULL;

	SDL_FreeSurface(bmp);

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.ArraySize = 1;

#endif

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

	float    fov = XMConvertToRadians(20.0f);

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Width = rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	XMFLOAT4X4 view;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

		}

	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





{

}


	m_pDepthStencilTexture = NULL;

};



		exit(1);

	m_pVertexBuffer = NULL;



	m_Viewport.MinDepth = 0.0f;

	{

	//頂点シェーダー生成

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.TopLeftX = 0;

		delete[] pIList;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pRenderTargetView);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pSwapChain = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

#include <SDL.h>

	irData.pSysMem = &pIList[0];



		delete[] pIList;

	{

		return hr;

	auto& attrib = reader.GetAttrib();

CD3DTest::~CD3DTest()

				indexlist.push_back(index);

		&m_pDevice,

		return 1;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

};

	m_pInputLayout = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;



	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



void CD3DTest::Render()



	if (FAILED(hr))

	delete[] pVList;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	SAFE_RELEASE(m_pInputLayout);

	}

	if (FAILED(hr))

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	//定数バッファ作成



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	}

	ZeroMemory(&txDesc, sizeof(txDesc));



	if (m_pImmediateContext)

		SDL_RenderPresent(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//インデックスバッファ作成

{

};



	for (int i = 0; i < vcount; i++)

		else if (e.type == SDL_KEYDOWN)

	//頂点シェーダー生成

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	return 0;





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pDepthStencilView = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			{

	return hr;



		&level,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

#ifdef _DEBUG

	m_pRenderTargetView = NULL;



		SDL_RenderClear(ren);

	m_pDepthStencilView = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&level,





	dsDesc.Texture2D.MipSlice = 0;

CD3DTest::~CD3DTest()

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.eyePos, eye);

	irData.pSysMem = &pIList[0];

			case SDLK_RIGHT:

		SDL_Delay(1000);

	if (!reader.Warning().empty())

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

{

	if (!error.empty())

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

			// Loop over vertices in the face.

	SDL_DestroyWindow(win);

	CRect                rect;

	std::string inputfile = "test.obj";

		&m_pSwapChain,

	ID3D11Texture2D* pBackBuffer;

	HRESULT              hr;

	SDL_DestroyRenderer(ren);

	for (const auto& shape : shapes)

int main(int, char**)

	}

	LoadObj(vertexlist, indexList);

			break;

			// Loop over vertices in the face.

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		NULL,

	ConstantLightBuffer clb;

	m_pVertexBuffer = NULL;

	ibDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::string imagePath = "hello.bmp";











{

	cbDesc.StructureByteStride = 0;

	}

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	scDesc.BufferDesc.Height = rect.Height();



		KEY_PRESS_SURFACE_TOTAL

			// Loop over vertices in the face.

		delete[] pIList;

};

	SDL_DestroyWindow(win);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_FreeSurface(bmp);

}

	SAFE_RELEASE(m_pImmediateContext);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_FreeSurface(suf);

			}

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_FreeSurface(suf);

HRESULT CD3DTest::Create(HWND hwnd)





	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		}

	if (FAILED(hr))

	}

}



				tinyobj::real_t tx =

				break;

				// access to vertex





	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	//vector<WORD> index_t;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

	ConstantMatrixBuffer cmb;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;

	auto& shapes = reader.GetShapes();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    nearZ = 0.1f;



	SDL_DestroyTexture(tex);

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ID3D11Texture2D* pBackBuffer;

		KEY_PRESS_SURFACE_UP,

				WORD index = idx.vertex_index;

				break;

		else if (e.type == SDL_KEYDOWN)

		m_pImmediateContext->ClearState();

};

	txDesc.SampleDesc.Quality = 0;

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);







	txDesc.Height = rect.Height();

	//Clean up our objects and quit

			case SDLK_UP:

	std::vector<tinyobj::material_t> materials;

		SDL_RenderClear(ren);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pPixelShader = NULL;

	m_pSwapChain->Present(0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);







	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	HRESULT              hr;

			for (size_t v = 0; v < num_vertices; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#include <iostream>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.MiscFlags = 0;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

	/*

	D3D11_TEXTURE2D_DESC txDesc;

		&attrib,

	m_pSampler = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	LoadObj(vertexlist, indexList);

		&level,

struct ConstantLight {



	scDesc.OutputWindow = hwnd;



	SAFE_RELEASE(m_pTexture);

	m_pInputLayout = NULL;

	bool ret = tinyobj::LoadObj(

	m_pVertexShader = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&m_pDevice,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vrData.pSysMem = &pVList[0];

CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_TOTAL

		return hr;

		exit(1);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	tinyobj::ObjReaderConfig reader_config;

	{

}



	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

	vbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;



	}

		SDL_Delay(1000);

			{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	WORD* pIList = new WORD[icount];

		return hr;

	{

			// Loop over vertices in the face.





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_DEFAULT,



		return hr;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

int SEGMENT = 36;

	//頂点バッファ作成

		flags,

{

{

				// access to vertex

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain->Present(0, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ConstantLightBuffer clb;

		if (!ret)

	ConstantMaterial material; //物体の質感

	D3D11_BUFFER_DESC ibDesc;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pDevice = NULL;

	SDL_FreeSurface(suf);

	m_VertexCount = 0;



	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pLightBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.SysMemSlicePitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");







	XMFLOAT4 pos;               //座標(x,y,z)





	txDesc.MiscFlags = 0;







	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string inputfile = "test.obj";

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_VertexCount = 0;

	vrData.pSysMem = &pVList[0];







			for (size_t v = 0; v < fv; v++)

	}

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.SampleDesc.Quality = 0;

			}

	SAFE_RELEASE(m_pPixelShader);





	//深度ステンシルバッファ作成

		return hr;

};

				vertex.push_back(vertex_tmp);

			}

			exit(1);

	//Clean up our objects and quit

		return hr;

	m_Viewport.TopLeftX = 0;

	std::vector<tinyobj::shape_t> shapes;



	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 projection;

		exit(1);









	ConstantLightBuffer clb;

	XMFLOAT4X4 world;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	irData.SysMemSlicePitch = 0;

	D3D11_SAMPLER_DESC smpDesc;



	m_pInputLayout = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include <iostream>

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

			for (size_t v = 0; v < fv; v++)

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

			{

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ibDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			{

};

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	//頂点レイアウト作成

			for (size_t v = 0; v < fv; v++)

	{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

};

		&shapes,

	tinyobj::attrib_t attrib;

			case SDLK_LEFT:

	cbDesc.StructureByteStride = 0;

};



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		if (e.type == SDL_QUIT)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}



		&error,

	float    fov = XMConvertToRadians(20.0f);

	m_pVertexBuffer = NULL;

	}

	dsDesc.Format = txDesc.Format;

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_BUFFER_DESC ibDesc;

	for (int i = 0; i < vcount; i++)



	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

struct ConstantMatrixBuffer {

			}



	if (FAILED(hr))



	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			default:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

	txDesc.MiscFlags = 0;

	{

	m_pVertexBuffer = NULL;

}

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	//頂点シェーダー生成

	txDesc.MiscFlags = 0;

	ibDesc.StructureByteStride = 0;

int main(int, char**)

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.TopLeftY = 0;

	m_Viewport.TopLeftY = 0;





		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Quality = 0;

{



			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

		&materials,

	if (FAILED(hr))

		return hr;



	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLightBuffer {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

/*

		pIList[j] = indexList[j];

	for (size_t s = 0; s < shapes.size(); s++)





#include <iostream>

	::ZeroMemory(&scDesc, sizeof(scDesc));



		&error,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

/*





	auto& shapes = reader.GetShapes();



	SDL_FreeSurface(suf);

	//頂点シェーダー生成

	m_pPixelShader = NULL;

	std::vector<tinyobj::material_t> materials;

			case SDLK_RIGHT:

	m_VertexCount = 0;



	m_VertexCount = 0;



		&attrib,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





		return hr;

				break;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

	m_Viewport.Width = (FLOAT)rect.Width();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pInputLayout = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	for (const auto& shape : shapes)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)





	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pVertexBuffer = NULL;



		//User presses a key

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//vector<Vertex> vertex_t;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ConstantLightBuffer clb;

	m_pSwapChain = NULL;

			case SDLK_UP:

	m_pVertexShader = NULL;

		&scDesc,





	txDesc.Width = rect.Width();

		&scDesc,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			break;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC cbDesc;

	pBackBuffer->Release();

	SDL_DestroyTexture(tex);

	{

			{





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

struct ConstantLightBuffer {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_DestroyRenderer(ren);

		{

			int num_vertices = shape.mesh.num_face_vertices[f];



	irData.SysMemPitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		NULL,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	cbDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	float    nearZ = 0.1f;

	for (const auto& shape : shapes)

	return hr;

		D3D_DRIVER_TYPE_HARDWARE,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	std::string error;

#include <iostream>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			default:

		SDL_Delay(1000);







	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

int SEGMENT = 36;



	return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_SAMPLER_DESC smpDesc;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pTextureView = NULL;

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	}

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				WORD index = idx.vertex_index;

	if (!reader.ParseFromFile(inputfile, reader_config))

	//Clean up our objects and quit

	if (FAILED(hr))

				tinyobj::real_t tx =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{



	irData.pSysMem = &pIList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&attrib,

{

		}

		KEY_PRESS_SURFACE_LEFT,

		if (!ret)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 view;



		return hr;

		NULL,

}

struct ConstantLightBuffer {



	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

		SDL_RenderClear(ren);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Quit();

	pBackBuffer->Release();



	SAFE_RELEASE(m_pInputLayout);

}



	if (!reader.ParseFromFile(inputfile, reader_config))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

	int     vcount = vertexlist.size();



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			for (size_t v = 0; v < num_vertices; v++)



 */



		D3D11_SDK_VERSION,

	//テクスチャ読み込み

	txDesc.CPUAccessFlags = 0;

	/*

	vrData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		if (e.type == SDL_QUIT)

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

	{

		&shapes,

				break;

		size_t index_offset = 0;

	//ビューポート設定

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//テクスチャ読み込み

	tinyobj::ObjReader reader;

#ifdef _DEBUG



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		KEY_PRESS_SURFACE_UP,

	return 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

		&m_pImmediateContext);

	txDesc.SampleDesc.Quality = 0;

			switch (e.key.keysym.sym)



	pBackBuffer->Release();

			{



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	}

	}



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);







		m_pImmediateContext->ClearState();

	ConstantLight    pntLight; //点光源

	SDL_Quit();

			}

	{



	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4         ambient;  //環境光(r,g,b)



		return hr;

		NULL,

		}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		pVList[i] = vertexlist[i];



	if (FAILED(hr))

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 view;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}
	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

/*

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

			for (size_t v = 0; v < fv; v++)

				break;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	Release();



	}

	for (int j = 0; j < icount; j++)





	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	std::string error;

	vbDesc.CPUAccessFlags = 0;



			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderClear(ren);

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	if (FAILED(hr))

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

	return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::vector<tinyobj::material_t> materials;

	SDL_DestroyTexture(tex);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4X4 view;



		return hr;

	//vector<WORD> index_t;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	LoadObj(vertexlist, indexList);

using std::cout; using std::endl;

	//Clean up our objects and quit

	SAFE_RELEASE(m_pSampler);



}

		SDL_RenderPresent(ren);

	SDL_FreeSurface(bmp);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//Vertex* pVList = new Vertex[vcount];

	m_VertexCount = vcount;

		}

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			default:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_LEFT,



	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	{

		&m_pDevice,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pDepthStencilTexture = NULL;

	m_pInputLayout = NULL;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Viewport.Height = (FLOAT)rect.Height();



		m_pImmediateContext->ClearState();



#include <SDL.h>

	float    nearZ = 0.1f;

 */

			int num_vertices = shape.mesh.num_face_vertices[f];

		pIList[j] = indexList[j];



{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//vector<WORD> index_t;





				indexlist.push_back(index);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_RenderPresent(ren);

			case SDLK_LEFT:

		&error,

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	vbDesc.StructureByteStride = 0;

	return 0;

	{

			{

		//User requests quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDepthStencilView = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

	m_pMatrixBuffer = NULL;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	bool ret = tinyobj::LoadObj(

			case SDLK_LEFT:



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (int j = 0; j < icount; j++)

				vertex.push_back(vertex_tmp);

	//Create Index

	reader_config.mtl_search_path = "./"; // Path to material files

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#include <SDL.h>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				WORD index = idx.vertex_index;

				indexlist.push_back(index);



		return hr;

}


				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;





	//深度ステンシルバッファ作成

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pSampler);

		return hr;



	HRESULT              hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	delete[] pVList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				WORD index = idx.vertex_index;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	CRect                rect;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Release()

struct ConstantMatrixBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		// Loop over faces(polygon)



		delete[] pVList;

			{

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_IndexCount = 0;

		pVList[i] = vertexlist[i];

		{





	txDesc.CPUAccessFlags = 0;

	/*

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4         eyePos;   //視点座標

#include <iostream>

}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



 * Lesson 1: Hello World!

	//頂点レイアウト作成



	m_pDepthStencilView = NULL;

	m_Viewport.TopLeftX = 0;

	//ピクセルシェーダー生成

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

HRESULT CD3DTest::Create(HWND hwnd)



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_Delay(1000);

	//Clean up our objects and quit

	txDesc.MiscFlags = 0;

	UINT offsets = 0;

	ConstantLight    pntLight; //点光源

				tinyobj::real_t tx =

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#include <SDL.h>

		&m_pImmediateContext);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.SampleDesc.Count = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#ifdef _DEBUG



	auto& materials = reader.GetMaterials();

	CRect                rect;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}
	{



		{

				break;

	auto& shapes = reader.GetShapes();



}



	vrData.SysMemPitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#ifdef _DEBUG

	vrData.SysMemPitch = 0;

	m_pImmediateContext = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (!error.empty())

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t tx =





		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//Create Index

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vector<Vertex> vertexlist;



		&m_pSwapChain,

{

int SEGMENT = 36;

	tinyobj::ObjReaderConfig reader_config;



}

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	irData.pSysMem = &pIList[0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pTexture);



	Vertex* pVList = new Vertex[vcount];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		// Loop over faces(polygon)

	int     vcount = vertexlist.size();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.SampleDesc.Count = 1;

	{

		&attrib,

	SDL_DestroyWindow(win);

		return hr;

	m_VertexCount = 0;

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;





		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;





	}

	if (!reader.ParseFromFile(inputfile, reader_config))



		if (!ret)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (!error.empty())

	m_pPixelShader = NULL;



	if (FAILED(hr))

		NULL,

	int     vcount = vertexlist.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	dsDesc.Format = txDesc.Format;

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    nearZ = 0.1f;

	for (size_t s = 0; s < shapes.size(); s++)

	D3D11_SAMPLER_DESC smpDesc;

				break;

	m_IndexCount = icount;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

struct ConstantLight {

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

}

struct ConstantLight {

		flags,

	cbDesc.StructureByteStride = 0;

		// Loop over faces(polygon)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTexture = NULL;

	vrData.SysMemPitch = 0;

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pDevice = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//深度ステンシルバッファ作成



		KEY_PRESS_SURFACE_DEFAULT,



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

#include "DirectXManager.h"

	return 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



}

	delete[] pVList;

{

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	UINT flags = 0;

	SAFE_RELEASE(m_pTexture);

	//定数バッファ作成



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_DestroyRenderer(ren);

	Release();

			exit(1);

	m_pTextureView = NULL;

int main(int, char**)

struct ConstantMatrixBuffer {

				indexlist.push_back(index);



	if (!reader.ParseFromFile(inputfile, reader_config))



};





	SDL_Quit();



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pSwapChain);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.MinDepth = 0.0f;



	//頂点シェーダー生成

			}

	txDesc.SampleDesc.Quality = 0;

	{

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;



CD3DTest::~CD3DTest()

	cbDesc.StructureByteStride = 0;

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderPresent(ren);

	UINT flags = 0;

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&m_pImmediateContext);

				// access to vertex

	//頂点シェーダー生成

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

		if (!reader.Error().empty())

{







{

#include <iostream>

	m_pPixelShader = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Clean up our objects and quit

	auto& attrib = reader.GetAttrib();

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pLightBuffer = NULL;

		if (e.type == SDL_QUIT)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		{

	txDesc.MipLevels = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

	for (const auto& shape : shapes)

	/*

	int     vcount = vertexlist.size();



	SAFE_RELEASE(m_pIndexBuffer);

	float    fov = XMConvertToRadians(20.0f);

		}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.MiscFlags = 0;

		return hr;

				vertex.push_back(vertex_tmp);

				vertex.push_back(vertex_tmp);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	auto& shapes = reader.GetShapes();

	XMFLOAT4 pos;               //座標(x,y,z)



		return hr;



		flags,

};

};

	{

	m_VertexCount = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.Windowed = TRUE;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.SysMemPitch = 0;

	vrData.SysMemPitch = 0;



	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.SampleDesc.Quality = 0;

	}

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Quit();

	while (SDL_PollEvent(&e) != 0)

	auto& attrib = reader.GetAttrib();

		return hr;

	}

	}

		&error,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

{

		SDL_RenderClear(ren);

		return 1;

#define TINYOBJLOADER_IMPLEMENTATION

	return;



struct ConstantMatrixBuffer {



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SAFE_RELEASE(m_pDevice);

	m_pVertexBuffer = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}

{

	float    fov = XMConvertToRadians(20.0f);



		{



		return hr;

{

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	WORD* pIList = new WORD[icount];

		R"(cube.obj)");



	{



		KEY_PRESS_SURFACE_LEFT,







	if (FAILED(hr))

	}*/



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//テクスチャ読み込み

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.CPUAccessFlags = 0;





	scDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_DOWN,



		// Loop over faces(polygon)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string imagePath = "hello.bmp";

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			for (size_t v = 0; v < num_vertices; v++)

			index_offset += num_vertices;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

				tinyobj::real_t ty =

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	D3D11_TEXTURE2D_DESC txDesc;

			break;



};

		if (!ret)

		KEY_PRESS_SURFACE_LEFT,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}*/

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 view;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



struct ConstantLightBuffer {

		exit(1);

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		D3D11_SDK_VERSION,

	D3D11_BUFFER_DESC ibDesc;

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4X4 world;

	m_pTextureView = NULL;

	}

	SDL_DestroyRenderer(ren);

	{

			default:

	//頂点シェーダー生成

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pInputLayout = NULL;

	WORD* pIList = new WORD[icount];

		return hr;

		SDL_RenderClear(ren);



		pIList[j] = indexList[j];

	UINT flags = 0;





	{



	//深度ステンシルバッファ作成

				// access to vertex



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		if (e.type == SDL_QUIT)



		// Loop over faces(polygon)

	SDL_DestroyWindow(win);

	float    nearZ = 0.1f;



		&error,

	m_pTextureView = NULL;

	float    nearZ = 0.1f;

			int num_vertices = shape.mesh.num_face_vertices[f];

	tinyobj::ObjReaderConfig reader_config;

	}

	m_VertexCount = 0;





	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::material_t> materials;

	delete[] pIList;

	ConstantMatrixBuffer cmb;



	scDesc.SampleDesc.Quality = 0;

	ibDesc.CPUAccessFlags = 0;

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pDepthStencilView);

}

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}



	m_pSampler = NULL;



};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyRenderer(ren);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

using std::cout; using std::endl;

	//定数バッファ作成

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;







	XMStoreFloat4(&clb.ambient, lightAmbient);

	vector<Vertex> vertexlist;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	//Create Index

	XMStoreFloat4(&clb.eyePos, eye);

	//Clean up our objects and quit

	}

	auto& attrib = reader.GetAttrib();



	SAFE_RELEASE(m_pDepthStencilView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	ConstantLight    pntLight; //点光源

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

	ConstantLightBuffer clb;

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.eyePos, eye);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				vertex.push_back(vertex_tmp);

#include <SDL.h>

	//頂点シェーダー生成

	auto& materials = reader.GetMaterials();

	{

	{

	delete[] pVList;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

			case SDLK_UP:



	HRESULT              hr;

	WORD   icount = indexList.size();



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pVertexShader = NULL;

	ConstantLightBuffer clb;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	dsDesc.Texture2D.MipSlice = 0;

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.ambient, lightAmbient);



		&materials,





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

using std::cout; using std::endl;

		{

	{



		return hr;

	vector<WORD> indexList;

				tinyobj::real_t tx =

		}

	cbDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;

			case SDLK_DOWN:

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		delete[] pVList;



		return hr;



		//User presses a key

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

	float    nearZ = 0.1f;

		return hr;

		KEY_PRESS_SURFACE_DOWN,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ID3D11Texture2D* pBackBuffer;

int main(int, char**)

		return 1;

	m_pSampler = NULL;

	m_pRenderTargetView = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vector<Vertex> vertexlist;

	m_Viewport.TopLeftY = 0;



	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (!reader.Warning().empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pDevice = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



			}

	auto& materials = reader.GetMaterials();

	txDesc.Height = rect.Height();





	vbDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return hr;

	//テクスチャ読み込み

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	{

	return hr;



		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		SDL_RenderPresent(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				indexlist.push_back(idx.vertex_index);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <iostream>

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = vcount;

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	//定数バッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

}

	XMFLOAT4X4 view;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SUBRESOURCE_DATA irData;

		return hr;



			}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_RIGHT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

		if (!ret)

		return hr;







}



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			index_offset += fv;

void CD3DTest::Render()

	XMFLOAT4X4 world;



	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

struct ConstantLightBuffer {

	if (!error.empty())

	txDesc.SampleDesc.Quality = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		cout << "SDL_INIT_ERROR" << endl;



		m_pImmediateContext->ClearState();

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include <iostream>

	//インデックスバッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&error,

	UINT offsets = 0;

	m_pVertexShader = NULL;

	if (FAILED(hr))

	m_pTextureView = NULL;

			exit(1);



CD3DTest::~CD3DTest()

struct ConstantLight {

	{

	m_pLightBuffer = NULL;



	{

	ibDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

			{

		//User presses a key



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	irData.SysMemPitch = 0;

	m_pTexture = NULL;

	{



	ConstantMatrixBuffer cmb;

	txDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL level;

#include <SDL.h>

				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





			default:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.pSysMem = &pIList[0];

	//Vertex* pVList = new Vertex[vcount];



		1,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	txDesc.MiscFlags = 0;

				break;

	XMFLOAT4X4 world;

CD3DTest::~CD3DTest()

	//vector<WORD> index_t;

	if (!reader.ParseFromFile(inputfile, reader_config))

	irData.SysMemSlicePitch = 0;



	//インデックスバッファ作成

{

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t tx =



	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);









	txDesc.SampleDesc.Quality = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

using std::cout; using std::endl;



	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		KEY_PRESS_SURFACE_TOTAL



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				break;

	/*

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	int     vcount = vertexlist.size();

				// access to vertex



{



		return hr;

	SDL_DestroyTexture(tex);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;



		flags,

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_Viewport.MaxDepth = 1.0f;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Quit();

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_LEFT,

	D3D11_BUFFER_DESC vbDesc;

};

	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pSwapChain);

	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_DOWN,

{

	SDL_Event e;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

			exit(1);

	scDesc.SampleDesc.Quality = 0;

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	auto& shapes = reader.GetShapes();



	for (const auto& shape : shapes)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&m_pDevice,

void CD3DTest::Release()

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pDevice);



				vertex.push_back(vertex_tmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

using std::cout; using std::endl;

				break;

		&level,



#ifdef _DEBUG

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&scDesc,

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	//First we need to start up SDL, and make sure it went ok

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pSampler);

		return hr;

	}



				tinyobj::real_t ty =

	WORD* pIList = new WORD[icount];

		//User presses a key



	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	HRESULT              hr;

	ibDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み



	SDL_DestroyRenderer(ren);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			switch (e.key.keysym.sym)



}

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pImmediateContext);

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		KEY_PRESS_SURFACE_LEFT,

		return hr;

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		flags,

	}

		pVList[i] = vertexlist[i];



		pLevels,

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Height = rect.Height();

	irData.SysMemPitch = 0;





	auto& shapes = reader.GetShapes();



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//vector<WORD> index_t;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_BUFFER_DESC vbDesc;

	m_IndexCount = icount;



	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include <SDL.h>

	for (const auto& shape : shapes)

	if (!reader.Warning().empty())

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Event e;

			for (size_t v = 0; v < num_vertices; v++)

/*

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

		SDL_RenderClear(ren);

{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	irData.pSysMem = &pIList[0];



	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



struct ConstantMaterial {

	/*

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//深度ステンシルバッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	return 0;

#define TINYOBJLOADER_IMPLEMENTATION

	WORD* pIList = new WORD[icount];

void CD3DTest::Render()

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

 * Lesson 1: Hello World!



	{

		1,

	std::string error;

				indexlist.push_back(idx.vertex_index);

{

{







	vector<WORD> indexList;

	m_pLightBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{



	m_Viewport.Width = (FLOAT)rect.Width();

	m_Viewport.Width = (FLOAT)rect.Width();

}
	m_pDepthStencilView = NULL;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.CPUAccessFlags = 0;

	/*

	m_pImmediateContext = NULL;



	XMFLOAT4 ambient;           //環境(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	auto& shapes = reader.GetShapes();

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	irData.SysMemSlicePitch = 0;

	}*/



		if (e.type == SDL_QUIT)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		if (e.type == SDL_QUIT)

		&m_pSwapChain,

/*





		return hr;

		return hr;

		KEY_PRESS_SURFACE_LEFT,

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

		if (!ret)

		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	irData.pSysMem = &pIList[0];

		}

	m_Viewport.Width = (FLOAT)rect.Width();

		delete[] pIList;

	SAFE_RELEASE(m_pDevice);

	cbDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderPresent(ren);

		&level,



	for (int j = 0; j < icount; j++)



	enum KeyPressSurfaces

#define TINYOBJLOADER_IMPLEMENTATION

	if (!error.empty())

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	CRect                rect;

	//定数バッファ作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_DestroyRenderer(ren);

	cbDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))



	m_pVertexShader = NULL;

{

	}



	SAFE_RELEASE(m_pMatrixBuffer);

	irData.SysMemSlicePitch = 0;

				vertex.push_back(vertex_tmp);

	XMFLOAT4 specular;          //反射(r,g,b)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			case SDLK_LEFT:

	if (FAILED(hr))



	//頂点バッファ作成

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];



	XMFLOAT4         ambient;  //環境光(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pDevice = NULL;

		D3D11_SDK_VERSION,

		return 1;

	m_IndexCount = icount;



	ZeroMemory(&txDesc, sizeof(txDesc));

			int num_vertices = shape.mesh.num_face_vertices[f];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4         eyePos;   //視点座標





	vbDesc.MiscFlags = 0;



	for (int i = 0; i < 3; i++)

		&m_pImmediateContext);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#ifdef _DEBUG

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

	WORD* pIList = new WORD[icount];

struct ConstantLight {

	if (FAILED(hr))

int main(int, char**)

		m_pImmediateContext->ClearState();



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	float    fov = XMConvertToRadians(20.0f);

{



	{

	SDL_Event e;

	m_Viewport.MinDepth = 0.0f;

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pTexture);



	m_pSwapChain->Present(0, 0);



				// access to vertex

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		NULL,

}
				break;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

		// Loop over faces(polygon)

	for (int i = 0; i < vcount; i++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	UINT flags = 0;

	m_pDevice = NULL;

	XMFLOAT4X4 world;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	CRect                rect;





	SAFE_RELEASE(m_pRenderTargetView);

		cout << "SDL_INIT_ERROR" << endl;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pIndexBuffer);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

			{

	m_pLightBuffer = NULL;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	Release();

	SDL_Quit();



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		pVList[i] = vertexlist[i];







	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMStoreFloat4(&clb.ambient, lightAmbient);







	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pVertexShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	irData.pSysMem = &pIList[0];





	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&shapes,

	SAFE_RELEASE(m_pSampler);

		1,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	pBackBuffer->Release();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

};

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点レイアウト作成

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		D3D_DRIVER_TYPE_HARDWARE,

		delete[] pVList;

	SAFE_RELEASE(m_pRenderTargetView);



		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	// Loop over shapes

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		//User presses a key

	SDL_DestroyTexture(tex);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



{

	{



	SDL_DestroyWindow(win);

		&materials,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	WORD   icount = indexList.size();

		size_t index_offset = 0;  // インデントのオフセット

	ConstantMatrixBuffer cmb;

		}

	m_pSwapChain = NULL;



	{

	}

	m_Viewport.TopLeftY = 0;

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pImmediateContext);

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#endif

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}*/

	m_pImmediateContext = NULL;



	m_pSwapChain = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	std::string imagePath = "hello.bmp";

	for (size_t s = 0; s < shapes.size(); s++)

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyWindow(win);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//ビューポート設定

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//vector<WORD> index_t;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.TopLeftX = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//深度ステンシルバッファ作成



	m_pDepthStencilView = NULL;

				break;

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.ArraySize = 1;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//深度ステンシルバッファ作成

	}



		R"(cube.obj)");

	ConstantLightBuffer clb;

			exit(1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.CPUAccessFlags = 0;

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	if (FAILED(hr))





	std::string imagePath = "hello.bmp";

	}

		if (!reader.Error().empty())

	//Vertex* pVList = new Vertex[vcount];

		}

		&level,



	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string error;

	for (int i = 0; i < vcount; i++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;





	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_UP,

			index_offset += num_vertices;

	m_IndexCount = 0;

	{

	SAFE_RELEASE(m_pDepthStencilView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLightBuffer {

		return hr;

				break;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



struct ConstantMaterial {

		}

	m_pDepthStencilTexture = NULL;

			default:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

struct ConstantLightBuffer {

			{

	//定数バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//Key press surfaces constants

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyRenderer(ren);

	std::vector<tinyobj::shape_t> shapes;

			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.ambient, lightAmbient);

HRESULT CD3DTest::Create(HWND hwnd)



	{

	txDesc.Height = rect.Height();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	bool ret = tinyobj::LoadObj(

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点バッファ作成

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	bool ret = tinyobj::LoadObj(



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#include <iostream>

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pImmediateContext);

		// Loop over faces(polygon)

{

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		&materials,

		&shapes,

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

 */

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

int main(int, char**)

}

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	return 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#include <SDL.h>

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	SDL_DestroyWindow(win);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

struct ConstantLight {

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSampler = NULL;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

		else if (e.type == SDL_KEYDOWN)

int SEGMENT = 36;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

	return hr;

{



	for (const auto& shape : shapes)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_DestroyRenderer(ren);

			case SDLK_DOWN:

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pDevice,

	ZeroMemory(&txDesc, sizeof(txDesc));



		// Loop over faces(polygon)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				// access to vertex



	enum KeyPressSurfaces



	SDL_Quit();

	}

		SDL_RenderClear(ren);

		if (!ret)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (const auto& shape : shapes)

			{

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_IndexCount = icount;

	{

int main(int, char**)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				break;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		D3D_DRIVER_TYPE_HARDWARE,

		}

		exit(1);

		return hr;

	//深度ステンシルバッファ作成

			case SDLK_UP:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	CRect                rect;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		flags,

	if (m_pImmediateContext)

	scDesc.Windowed = TRUE;



	//頂点バッファ作成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	std::string error;

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pSampler = NULL;

	m_pRenderTargetView = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





}

	};

	scDesc.BufferDesc.Width = rect.Width();

	while (SDL_PollEvent(&e) != 0)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}





	SDL_Quit();

	{

	irData.pSysMem = &pIList[0];



		size_t index_offset = 0;

	{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.Height = rect.Height();



				// access to vertex



	WORD* pIList = new WORD[icount];

	m_pPixelShader = NULL;

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	{



	::GetClientRect(hwnd, &rect);

	m_pDepthStencilView = NULL;

	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 view;

	ibDesc.MiscFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_RIGHT:

	UINT flags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <SDL.h>

struct ConstantLight {

	SAFE_RELEASE(m_pImmediateContext);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



}



	std::string inputfile = "test.obj";

/*

 * Lesson 1: Hello World!

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.CPUAccessFlags = 0;

	Release();

		// Loop over faces(polygon)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		// Loop over faces(polygon)

		size_t index_offset = 0;  // インデントのオフセット

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pRenderTargetView);

	ConstantMatrixBuffer cmb;







	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pSwapChain->Present(0, 0);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//vector<WORD> index_t;



		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Quit();

	cbDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pVertexBuffer);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		KEY_PRESS_SURFACE_UP,

		&m_pSwapChain,



	auto& shapes = reader.GetShapes();



{

	//頂点バッファ作成

	ibDesc.StructureByteStride = 0;





		KEY_PRESS_SURFACE_LEFT,



	m_IndexCount = icount;

	UINT offsets = 0;

				break;





		size_t index_offset = 0;  // インデントのオフセット

	UINT strides = sizeof(Vertex);





	bool ret = tinyobj::LoadObj(

	auto& attrib = reader.GetAttrib();

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		pIList[j] = indexList[j];

		return hr;

	if (FAILED(hr))

	SDL_Quit();

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

		1,

	pBackBuffer->Release();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	tinyobj::attrib_t attrib;

	ZeroMemory(&txDesc, sizeof(txDesc));

		{

};

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	//ピクセルシェーダー生成

	if (m_pImmediateContext)

	m_pSampler = NULL;

	D3D11_SAMPLER_DESC smpDesc;

	m_pDevice = NULL;

	SAFE_RELEASE(m_pDevice);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_RIGHT,

			index_offset += fv;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <iostream>

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D11_SAMPLER_DESC smpDesc;

		cout << "SDL_INIT_ERROR" << endl;



#endif

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pTextureView);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pTexture);

	//頂点バッファ作成

	SDL_DestroyTexture(tex);

	XMFLOAT4X4 view;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

		return 1;

	delete[] pIList;

	}

	m_pTexture = NULL;

				vertex.push_back(vertex_tmp);



		}

#include <SDL.h>

{

	m_IndexCount = icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		// Loop over faces(polygon)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

		}

	return;

		delete[] pIList;

	//Create Index

	//深度ステンシルバッファ作成

		1,



	std::string imagePath = "hello.bmp";





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4         eyePos;   //視点座標

#include <iostream>

		KEY_PRESS_SURFACE_DOWN,



		&shapes,

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

};

	vector<Vertex> vertexlist;

	if (FAILED(hr))

{

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pInputLayout);

	m_IndexCount = icount;

		NULL,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		{



void CD3DTest::Release()



				tinyobj::real_t ty =

			}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		else if (e.type == SDL_KEYDOWN)



	XMStoreFloat4(&clb.ambient, lightAmbient);

#ifdef _DEBUG

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

		{

}

	std::vector<tinyobj::shape_t> shapes;

	D3D11_TEXTURE2D_DESC txDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t ty =

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{



	SAFE_RELEASE(m_pVertexBuffer);



		return hr;

		&attrib,

	dsDesc.Format = txDesc.Format;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	for (const auto& shape : shapes)

	vrData.SysMemPitch = 0;

	D3D11_BUFFER_DESC ibDesc;

	m_pIndexBuffer = NULL;



	SDL_DestroyRenderer(ren);

	for (int i = 0; i < vcount; i++)

	if (!error.empty())

		KEY_PRESS_SURFACE_DEFAULT,

			break;

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		cout << "SDL_INIT_ERROR" << endl;

				indexlist.push_back(index);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pRenderTargetView = NULL;



	//Clean up our objects and quit

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	txDesc.MipLevels = 1;

	tinyobj::attrib_t attrib;



	m_pVertexBuffer = NULL;

		m_pImmediateContext->ClearState();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.eyePos, eye);

	}

		return hr;

	WORD   icount = indexList.size();



	m_pDevice = NULL;

	SDL_Quit();

	m_pDevice = NULL;

	SDL_Event e;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#include <iostream>

	dsDesc.Texture2D.MipSlice = 0;



				indexlist.push_back(idx.vertex_index);

CD3DTest::~CD3DTest()

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	SAFE_RELEASE(m_pDevice);

	D3D11_BUFFER_DESC cbDesc;

		&m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.CPUAccessFlags = 0;

			// Loop over vertices in the face.

	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pInputLayout = NULL;

int SEGMENT = 36;



				vertex.push_back(vertex_tmp);

			}

	auto& shapes = reader.GetShapes();







{

		flags,

	irData.SysMemPitch = 0;

		&attrib,



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pSwapChain = NULL;

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	UINT strides = sizeof(Vertex);

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pPixelShader);

	//Clean up our objects and quit

	SDL_DestroyRenderer(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

		1,

	D3D11_TEXTURE2D_DESC txDesc;

	CRect                rect;



	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

		R"(cube.obj)");

	SAFE_RELEASE(m_pSampler);

	{

};

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

/*

	dsDesc.Texture2D.MipSlice = 0;



	m_Viewport.Height = (FLOAT)rect.Height();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D_FEATURE_LEVEL level;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	};



	m_pTexture = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

#ifdef _DEBUG

		{

	//テクスチャ読み込み

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

struct ConstantMatrixBuffer {

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_Delay(1000);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_LEFT,

	txDesc.Height = rect.Height();

	Vertex* pVList = new Vertex[vcount];

		//User presses a key

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		KEY_PRESS_SURFACE_DEFAULT,

	dsDesc.Format = txDesc.Format;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 specular;          //反射(r,g,b)



		R"(cube.obj)");

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

void CD3DTest::Render()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pIndexBuffer);





{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				break;

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderClear(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

	return 0;

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			for (size_t v = 0; v < fv; v++)

			switch (e.key.keysym.sym)

#ifdef _DEBUG

void CD3DTest::Render()

	scDesc.BufferDesc.Width = rect.Width();



	Release();

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//Create Index



	m_VertexCount = vcount;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SDL_FreeSurface(suf);

	//First we need to start up SDL, and make sure it went ok

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(suf);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	if (FAILED(hr))

		// Loop over faces(polygon)

	SDL_DestroyTexture(tex);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				indexlist.push_back(index);

	std::string inputfile = "test.obj";

	::GetClientRect(hwnd, &rect);

	{

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (size_t s = 0; s < shapes.size(); s++)

		//User presses a key

			{

	{

			case SDLK_LEFT:

	{



struct ConstantLight {





	WORD   icount = indexList.size();

	cbDesc.CPUAccessFlags = 0;

	m_pSwapChain = NULL;

	m_Viewport.MinDepth = 0.0f;



	SAFE_RELEASE(m_pTextureView);

	}*/

}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		pIList[j] = indexList[j];







			//Select surfaces based on key press

	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点レイアウト作成

	::GetClientRect(hwnd, &rect);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

	dsDesc.Format = txDesc.Format;

	XMFLOAT4X4 projection;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()

	}

			// Loop over vertices in the face.

	WORD   icount = indexList.size();



	tinyobj::ObjReader reader;



	//Clean up our objects and quit

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.CPUAccessFlags = 0;

#include <iostream>

	dsDesc.Format = txDesc.Format;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.StructureByteStride = 0;

	{

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string inputfile = "test.obj";

	ConstantLightBuffer clb;

		delete[] pIList;

				vertex.push_back(vertex_tmp);

			index_offset += num_vertices;

	D3D11_TEXTURE2D_DESC txDesc;



	SAFE_RELEASE(m_pTexture);

	std::string error;

	cbDesc.MiscFlags = 0;

	for (int i = 0; i < vcount; i++)



	//深度ステンシルバッファ作成

	//vector<Vertex> vertex_t;

				vertex.push_back(vertex_tmp);

		{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			{

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pDevice);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		else if (e.type == SDL_KEYDOWN)

		{

		R"(cube.obj)");

		return hr;



	}

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	WORD* pIList = new WORD[icount];

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	D3D11_SUBRESOURCE_DATA vrData;



	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pVertexShader);

	SDL_Quit();

	SDL_Event e;

				// access to vertex



#include <iostream>

		KEY_PRESS_SURFACE_DEFAULT,



	SDL_DestroyRenderer(ren);

	{

	scDesc.BufferDesc.Width = rect.Width();

{

	vrData.SysMemPitch = 0;

	SDL_Quit();



	XMStoreFloat4(&clb.eyePos, eye);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_FreeSurface(bmp);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//vector<WORD> index_t;

		}

			// Loop over vertices in the face.

	if (m_pImmediateContext)

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_DOWN,

	HRESULT              hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

	DXGI_SWAP_CHAIN_DESC scDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pDevice = NULL;

			//Select surfaces based on key press



	irData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

}

		//User requests quit

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

/*

			{



			break;

	}

			{

	auto& attrib = reader.GetAttrib();

		SDL_RenderClear(ren);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.TopLeftY = 0;



		1,



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	UINT flags = 0;





	{

};

	UINT strides = sizeof(Vertex);

	{



			// Loop over vertices in the face.

void CD3DTest::Render()

	while (SDL_PollEvent(&e) != 0)



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		if (!ret)

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)



		return hr;

		return hr;

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC vbDesc;

void CD3DTest::Release()

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	if (FAILED(hr))

	if (!reader.Warning().empty())

	m_pTexture = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			case SDLK_LEFT:

	{

}
	scDesc.SampleDesc.Count = 1;

	//Key press surfaces constants

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



int SEGMENT = 36;



		}



		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

		KEY_PRESS_SURFACE_LEFT,

void CD3DTest::Release()



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





using std::cout; using std::endl;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyWindow(win);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	if (FAILED(hr))

				// access to vertex

	SDL_Quit();

	SDL_FreeSurface(bmp);

	Release();

	m_pTextureView = NULL;





		{

};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderClear(ren);

	txDesc.MiscFlags = 0;

	}

	//テクスチャ読み込み

	D3D11_TEXTURE2D_DESC txDesc;

		m_pImmediateContext->ClearState();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.Height = rect.Height();

		//User presses a key

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	auto& materials = reader.GetMaterials();

	auto& shapes = reader.GetShapes();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pVertexBuffer = NULL;

				indexlist.push_back(idx.vertex_index);





	HRESULT              hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

		return hr;

	}

				tinyobj::real_t ty =



struct ConstantLightBuffer {

	vrData.SysMemPitch = 0;

	D3D11_BUFFER_DESC ibDesc;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	auto& shapes = reader.GetShapes();

	for (int i = 0; i < 3; i++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		pVList[i] = vertexlist[i];





	XMFLOAT4 pos;               //座標(x,y,z)



	SAFE_RELEASE(m_pSampler);



		size_t index_offset = 0;

	vector<WORD> indexList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;



		delete[] pVList;

	vrData.pSysMem = &pVList[0];



	//Vertex* pVList = new Vertex[vcount];

	{

	Release();

		return hr;





	// Loop over shapes

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

int SEGMENT = 36;

		&materials,

		return 1;

				break;





			{

		SDL_Delay(1000);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	bool ret = tinyobj::LoadObj(

	ConstantMaterial material; //物体の質感

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	tinyobj::ObjReader reader;

	Vertex* pVList = new Vertex[vcount];

	WORD   icount = indexList.size();

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		//User requests quit

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pLightBuffer = NULL;



#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

int SEGMENT = 36;

	SDL_DestroyRenderer(ren);

}



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pVertexShader = NULL;

	}

	SAFE_RELEASE(m_pPixelShader);

		delete[] pVList;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SAFE_RELEASE(m_pVertexShader);



	txDesc.Width = rect.Width();



		exit(1);

		exit(1);

		&error,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.CPUAccessFlags = 0;

	return 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];



		}

	SDL_DestroyRenderer(ren);

	{

		KEY_PRESS_SURFACE_UP,

		return hr;

};

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

		pVList[i] = vertexlist[i];

		&m_pImmediateContext);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	vrData.SysMemSlicePitch = 0;





	LoadObj(vertexlist, indexList);

};

	// Loop over shapes

	}

	SDL_DestroyTexture(tex);

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#ifdef _DEBUG

		SDL_Delay(1000);

	}

#include <iostream>





		D3D11_SDK_VERSION,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//テクスチャ読み込み

			for (size_t v = 0; v < num_vertices; v++)

				vertex.push_back(vertex_tmp);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			for (size_t v = 0; v < fv; v++)

struct ConstantLightBuffer {

{

	// Loop over shapes

	pBackBuffer->Release();



	//頂点レイアウト作成

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyRenderer(ren);

	vbDesc.MiscFlags = 0;



	float    nearZ = 0.1f;

	m_pImmediateContext = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



}

	};



	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				WORD index = idx.vertex_index;

void CD3DTest::Release()

		SDL_RenderClear(ren);



			index_offset += num_vertices;

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pTextureView);

	for (int j = 0; j < icount; j++)

				break;

	{

		}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vrData.SysMemSlicePitch = 0;

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			}



		m_pImmediateContext->ClearState();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	auto& shapes = reader.GetShapes();

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	auto& materials = reader.GetMaterials();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			break;

	txDesc.Width = rect.Width();



				break;

	bool ret = tinyobj::LoadObj(

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_IndexCount = icount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		return hr;

	XMFLOAT4X4 projection;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{

		pVList[i] = vertexlist[i];

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pMatrixBuffer);

int SEGMENT = 36;

		SDL_RenderClear(ren);

	txDesc.SampleDesc.Count = 1;



	//インデックスバッファ作成

	vector<WORD> indexList;

		&m_pSwapChain,

int main(int, char**)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		exit(1);

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

struct ConstantLightBuffer {

	ibDesc.ByteWidth = sizeof(WORD) * icount;



			for (size_t v = 0; v < num_vertices; v++)



	WORD* pIList = new WORD[icount];

	m_pDevice = NULL;



	m_IndexCount = icount;

	// Loop over shapes



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		{

{

	UINT offsets = 0;

	XMFLOAT4         eyePos;   //視点座標

				break;



	{

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDevice = NULL;

	m_pRenderTargetView = NULL;

	pBackBuffer->Release();

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return 1;

		&level,

		}

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pDevice);

		return hr;





		return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.ArraySize = 1;

	m_pSwapChain->Present(0, 0);

	std::string inputfile = "test.obj";



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}



	//Vertex* pVList = new Vertex[vcount];

			}

		NULL,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



{

	std::vector<tinyobj::material_t> materials;



	m_pDevice = NULL;



		return hr;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);







	//頂点レイアウト作成



	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

				// access to vertex

#endif

			case SDLK_RIGHT:

#include <iostream>

{

	// Loop over shapes





	tinyobj::attrib_t attrib;

		&m_pImmediateContext);







	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_RIGHT:



	{

				// access to vertex

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC vbDesc;

	WORD   icount = indexList.size();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//頂点レイアウト作成

		//User requests quit



				// access to vertex

	SAFE_RELEASE(m_pMatrixBuffer);

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

};

	}

	SAFE_RELEASE(m_pTexture);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

	m_pDepthStencilTexture = NULL;



	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pSampler = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pTexture);

	SDL_Event e;

			{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.MiscFlags = 0;

	//インデックスバッファ作成

	if (m_pImmediateContext)

	XMFLOAT4X4 world;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	dsDesc.Texture2D.MipSlice = 0;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			}

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;



 * Lesson 1: Hello World!

	for (int j = 0; j < icount; j++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	txDesc.SampleDesc.Quality = 0;

	auto& attrib = reader.GetAttrib();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pInputLayout = NULL;



		}

	Vertex* pVList = new Vertex[vcount];

	std::string error;

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;

	m_pVertexBuffer = NULL;





	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};



			}

struct ConstantLight {

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pDevice = NULL;

	LoadObj(vertexlist, indexList);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		{

{



	SAFE_RELEASE(m_pMatrixBuffer);

	for (int j = 0; j < icount; j++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	WORD* pIList = new WORD[icount];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t ty =

		&attrib,

	m_pInputLayout = NULL;

	{

struct ConstantMatrixBuffer {

	txDesc.MipLevels = 1;

	std::string inputfile = "test.obj";

			exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;



	{

			case SDLK_DOWN:

		delete[] pIList;

			exit(1);



	if (FAILED(hr))





	}



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_Delay(1000);

};



	auto& shapes = reader.GetShapes();

	std::string imagePath = "hello.bmp";



		return hr;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	HRESULT              hr;

		KEY_PRESS_SURFACE_RIGHT,

		SDL_RenderClear(ren);

	SDL_DestroyWindow(win);

	//vector<Vertex> vertex_t;

				WORD index = idx.vertex_index;



	vrData.SysMemSlicePitch = 0;



	{

	return;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_LEFT:

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}







	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;

	m_pImmediateContext = NULL;

	tinyobj::ObjReader reader;



	m_pMatrixBuffer = NULL;

		SDL_RenderClear(ren);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	// Loop over shapes

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	//ビューポート設定

		SDL_Delay(1000);

			{





	txDesc.SampleDesc.Count = 1;

	txDesc.Height = rect.Height();

	cbDesc.StructureByteStride = 0;

				// access to vertex

		&m_pSwapChain,

	{

	{

		}



	vbDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (!error.empty())

				WORD index = idx.vertex_index;



	m_pSampler = NULL;

 */

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_DestroyRenderer(ren);

				break;



	if (FAILED(hr))





	m_pRenderTargetView = NULL;

	SDL_DestroyRenderer(ren);



	scDesc.SampleDesc.Count = 1;

			}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	UINT offsets = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#endif





	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	WORD   icount = indexList.size();

	cbDesc.MiscFlags = 0;

	ibDesc.StructureByteStride = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);



/*

	if (FAILED(hr))

	UINT flags = 0;

	if (FAILED(hr))

{

	float    nearZ = 0.1f;



	ConstantMatrixBuffer cmb;

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_BUFFER_DESC cbDesc;

	if (!error.empty())

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantLightBuffer {

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pSampler);







	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>

	SDL_Event e;

	if (m_pImmediateContext)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDepthStencilView = NULL;

	if (!error.empty())

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//vector<Vertex> vertex_t;

	cbDesc.StructureByteStride = 0;

		D3D_DRIVER_TYPE_HARDWARE,

		D3D11_SDK_VERSION,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vector<WORD> indexList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

 */

	Release();



	m_pSwapChain = NULL;

	CRect                rect;



	std::vector<tinyobj::material_t> materials;

	}

	if (!error.empty())

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pSwapChain->Present(0, 0);

	CRect                rect;

			case SDLK_LEFT:

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	pBackBuffer->Release();



	SAFE_RELEASE(m_pTextureView);



				WORD index = idx.vertex_index;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{



	//頂点レイアウト作成

		1,



struct ConstantMaterial {

	//インデックスバッファ作成

	irData.pSysMem = &pIList[0];

				break;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;

	//頂点レイアウト作成



	auto& materials = reader.GetMaterials();

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pMatrixBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;







	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.eyePos, eye);

		&shapes,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pInputLayout);

		R"(cube.obj)");



		D3D11_SDK_VERSION,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Quit();

	m_pInputLayout = NULL;

	{

	m_pMatrixBuffer = NULL;

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	std::vector<tinyobj::shape_t> shapes;

{



		return hr;



	SAFE_RELEASE(m_pSampler);

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//ビューポート設定

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ibDesc.StructureByteStride = 0;

		if (!ret)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//頂点バッファ作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_IndexCount = icount;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string inputfile = "test.obj";

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	DXGI_SWAP_CHAIN_DESC scDesc;



			{

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	txDesc.SampleDesc.Count = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	float    farZ = 100.0f;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	irData.pSysMem = &pIList[0];

	for (int i = 0; i < 3; i++)

				tinyobj::real_t ty =

	float    farZ = 100.0f;

		SDL_RenderPresent(ren);

}

	HRESULT              hr;

		&materials,

			case SDLK_LEFT:

			for (size_t v = 0; v < num_vertices; v++)

		&attrib,

		SDL_RenderPresent(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

		return hr;

	enum KeyPressSurfaces

				tinyobj::real_t tx =

	txDesc.MiscFlags = 0;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	Vertex* pVList = new Vertex[vcount];

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pMatrixBuffer);

		}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	D3D_FEATURE_LEVEL level;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			case SDLK_LEFT:

			}



	return 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//ビューポート設定

		pVList[i] = vertexlist[i];

	if (!error.empty())

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		1,

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



#endif

/*



			case SDLK_DOWN:

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	float    nearZ = 0.1f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D_FEATURE_LEVEL level;

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_IndexCount = icount;

	WORD   icount = indexList.size();



	scDesc.BufferDesc.Height = rect.Height();



	SAFE_RELEASE(m_pMatrixBuffer);

	{

	XMFLOAT4X4 world;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

		{

	for (int j = 0; j < icount; j++)



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{

	Release();

	scDesc.OutputWindow = hwnd;



	SAFE_RELEASE(m_pInputLayout);

	}

	m_IndexCount = 0;

	SDL_DestroyWindow(win);

	vrData.pSysMem = &pVList[0];



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//vector<Vertex> vertex_t;

	for (int j = 0; j < icount; j++)

	std::vector<tinyobj::shape_t> shapes;

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.ambient, lightAmbient);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		}

	}

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		pLevels,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

			{

	{

	ibDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		&shapes,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(index);



		}

		return hr;

				vertex.push_back(vertex_tmp);

	irData.SysMemSlicePitch = 0;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return;

		return 1;

	Vertex* pVList = new Vertex[vcount];

	}



		SDL_RenderPresent(ren);







	{

		}



	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	//Create Index

		size_t index_offset = 0;  // インデントのオフセット

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pDevice);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_UP,



int main(int, char**)

	m_pMatrixBuffer = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string error;





		NULL,

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pMatrixBuffer);

		return 1;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





		1,

		else if (e.type == SDL_KEYDOWN)

		{

#include <SDL.h>



	cbDesc.MiscFlags = 0;

	//ピクセルシェーダー生成

	::GetClientRect(hwnd, &rect);

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_IndexCount = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

			{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.MipLevels = 1;



			case SDLK_UP:

	if (m_pImmediateContext)



void CD3DTest::Render()



	auto& attrib = reader.GetAttrib();



		&materials,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_IndexCount = 0;

	D3D11_BUFFER_DESC ibDesc;


