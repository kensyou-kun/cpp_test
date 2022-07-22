

	txDesc.Width = rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		//User requests quit

	{

			case SDLK_LEFT:

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	while (SDL_PollEvent(&e) != 0)



	SDL_Event e;



	if (FAILED(hr))

	{



		&level,

		SDL_RenderClear(ren);





			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&level,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			}

	float    nearZ = 0.1f;



	UINT offsets = 0;

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	std::string error;

	vector<Vertex> vertexlist;

				indexlist.push_back(index);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.ArraySize = 1;



			{

	SAFE_RELEASE(m_pRenderTargetView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	//頂点レイアウト作成



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.MiscFlags = 0;

	std::string inputfile = "test.obj";

 * Lesson 1: Hello World!

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderClear(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::vector<tinyobj::material_t> materials;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	return 0;

	cbDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();

	//vector<WORD> index_t;

	if (FAILED(hr))



	D3D11_BUFFER_DESC vbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	vrData.pSysMem = &pVList[0];

};



		&m_pImmediateContext);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))



#include <iostream>

{

	D3D11_SUBRESOURCE_DATA irData;

		SDL_RenderPresent(ren);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string inputfile = "test.obj";

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4X4 world;

			case SDLK_RIGHT:

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.CPUAccessFlags = 0;

	{

		{

void CD3DTest::Render()



	XMFLOAT4 pos;               //座標(x,y,z)

			{

 */

	m_Angle += XMConvertToRadians(1.0f);

struct ConstantLightBuffer {

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	{

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		//User requests quit



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pIndexBuffer);

			default:

	cbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	{

				break;

	UINT offsets = 0;

{

			exit(1);

	SDL_DestroyWindow(win);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferDesc.Height = rect.Height();

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_TOTAL

			index_offset += num_vertices;

		pLevels,

	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

		cout << "SDL_INIT_ERROR" << endl;

{

			}

		pIList[j] = indexList[j];

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pSampler = NULL;

	for (int i = 0; i < 3; i++)

	//vector<Vertex> vertex_t;

using std::cout; using std::endl;

				tinyobj::real_t tx =

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		else if (e.type == SDL_KEYDOWN)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.SampleDesc.Count = 1;

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	}



	auto& shapes = reader.GetShapes();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

			case SDLK_LEFT:

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);







/*



#include <SDL.h>

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vbDesc.CPUAccessFlags = 0;

	for (int j = 0; j < icount; j++)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pLightBuffer = NULL;

}

	m_Viewport.Height = (FLOAT)rect.Height();

			exit(1);

}
	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	//インデックスバッファ作成



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pTextureView);

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

 */

	XMFLOAT4         eyePos;   //視点座標



	cbDesc.StructureByteStride = 0;

	::GetClientRect(hwnd, &rect);



int main(int, char**)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	UINT flags = 0;

struct ConstantLightBuffer {

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_SUBRESOURCE_DATA irData;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;



	scDesc.Windowed = TRUE;

	irData.SysMemSlicePitch = 0;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);

	dsDesc.Format = txDesc.Format;





	float    fov = XMConvertToRadians(20.0f);



		&m_pDevice,

	dsDesc.Format = txDesc.Format;

	{

int main(int, char**)



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		else if (e.type == SDL_KEYDOWN)



	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	{

				indexlist.push_back(idx.vertex_index);

		R"(cube.obj)");



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_FreeSurface(bmp);

		&error,

	vrData.SysMemPitch = 0;

}

	{

				indexlist.push_back(index);

	//深度ステンシルバッファ作成

HRESULT CD3DTest::Create(HWND hwnd)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t tx =

struct ConstantLight {

	//Key press surfaces constants

	SDL_FreeSurface(bmp);

	};

void CD3DTest::Render()



	enum KeyPressSurfaces



		&materials,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&scDesc,

				break;

	vbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

struct ConstantMaterial {

	m_pInputLayout = NULL;

		if (!reader.Error().empty())

	//インデックスバッファ作成

	scDesc.SampleDesc.Quality = 0;

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

		&attrib,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (m_pImmediateContext)



	SDL_DestroyRenderer(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include <iostream>



	tinyobj::ObjReaderConfig reader_config;

				break;

	SAFE_RELEASE(m_pMatrixBuffer);

	//頂点レイアウト作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	}

	SDL_Quit();



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			for (size_t v = 0; v < fv; v++)

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//定数バッファ作成

	//vector<Vertex> vertex_t;

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#ifdef _DEBUG

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	//Clean up our objects and quit



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

};

};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		NULL,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			{

	SAFE_RELEASE(m_pVertexBuffer);



}

	D3D11_SUBRESOURCE_DATA vrData;

	if (!reader.Warning().empty())

HRESULT CD3DTest::Create(HWND hwnd)

	tinyobj::ObjReaderConfig reader_config;

	for (int i = 0; i < 3; i++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::string imagePath = "hello.bmp";

	D3D11_SUBRESOURCE_DATA irData;



				break;



	scDesc.BufferCount = 1;

	txDesc.MipLevels = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT offsets = 0;

	enum KeyPressSurfaces

		size_t index_offset = 0;  // インデントのオフセット

	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	//深度ステンシルバッファ作成

	m_VertexCount = vcount;

			index_offset += fv;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_VertexCount = vcount;





#include <iostream>

{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		delete[] pIList;

		delete[] pVList;

		SDL_Delay(1000);

	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_DEFAULT,

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}

 */





 */

		SDL_RenderClear(ren);

	SDL_DestroyTexture(tex);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyWindow(win);



		{



	m_pDepthStencilView = NULL;

/*

	for (int i = 0; i < 3; i++)

		&attrib,



	XMFLOAT4X4 view;

	if (!reader.ParseFromFile(inputfile, reader_config))

			for (size_t v = 0; v < num_vertices; v++)



		return hr;

		return 1;

		SDL_RenderClear(ren);

	if (!reader.Warning().empty())

	m_pDepthStencilTexture = NULL;



	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	auto& shapes = reader.GetShapes();

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_FreeSurface(bmp);



				tinyobj::real_t tx =

	float    nearZ = 0.1f;

	scDesc.OutputWindow = hwnd;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//頂点レイアウト作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		R"(cube.obj)");

#include "DirectXManager.h"

	txDesc.MipLevels = 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_VertexCount = 0;

			}



	std::string inputfile = "test.obj";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantMaterial material; //物体の質感

	}

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

void CD3DTest::Render()

			}

	}

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		&m_pDevice,



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL



 * Lesson 1: Hello World!

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::~CD3DTest()

	scDesc.BufferCount = 1;



		pLevels,



}

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	for (int j = 0; j < icount; j++)



		&materials,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{



	//頂点レイアウト作成

	HRESULT              hr;

	//インデックスバッファ作成

	::GetClientRect(hwnd, &rect);

				break;

	m_pIndexBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	pBackBuffer->Release();

	SDL_Quit();

	return;

	vector<Vertex> vertexlist;



	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pVertexShader);





	//頂点バッファ作成

void CD3DTest::Release()

	{

			case SDLK_UP:

	SDL_Quit();

	m_VertexCount = vcount;





	XMFLOAT4 pos;               //座標(x,y,z)



	cbDesc.MiscFlags = 0;

{

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	bool ret = tinyobj::LoadObj(

	tinyobj::attrib_t attrib;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (!reader.Warning().empty())

	return hr;





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC cbDesc;

				break;

	Vertex* pVList = new Vertex[vcount];

	for (int j = 0; j < icount; j++)



	LoadObj(vertexlist, indexList);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	txDesc.ArraySize = 1;





	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}





	XMFLOAT4X4 world;



	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 world;

		&materials,



	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_TOTAL



		return hr;

	m_pSwapChain = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

		&m_pSwapChain,



	m_pTexture = NULL;

	txDesc.ArraySize = 1;



	m_IndexCount = 0;

	m_pDepthStencilTexture = NULL;

{

	D3D11_BUFFER_DESC vbDesc;



			{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

int main(int, char**)

		return hr;

			break;

	D3D11_BUFFER_DESC ibDesc;

}





	SDL_DestroyRenderer(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



				// access to vertex

		D3D_DRIVER_TYPE_HARDWARE,

	tinyobj::ObjReaderConfig reader_config;

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	for (const auto& shape : shapes)







	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

{

	if (!error.empty())

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Quit();

	return;

/*

};





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	txDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pTexture);

		return hr;

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vrData.pSysMem = &pVList[0];

};

	ID3D11Texture2D* pBackBuffer;

		return hr;

		&attrib,

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_Viewport.MinDepth = 0.0f;

	float    nearZ = 0.1f;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

 * Lesson 1: Hello World!

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//インデックスバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		return 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.MaxDepth = 1.0f;



		pIList[j] = indexList[j];

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		{

				// access to vertex

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_Viewport.TopLeftX = 0;



		return hr;

	SDL_DestroyTexture(tex);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

int SEGMENT = 36;



	{

	}*/

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		return hr;

		if (!reader.Error().empty())

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.BufferCount = 1;

	SDL_DestroyRenderer(ren);

	vrData.SysMemPitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

struct ConstantLight {

	//インデックスバッファ作成

	D3D11_BUFFER_DESC vbDesc;

	m_Viewport.Width = (FLOAT)rect.Width();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_Viewport.MaxDepth = 1.0f;

	//頂点レイアウト作成

	m_pDevice = NULL;



		{



		R"(cube.obj)");

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (m_pImmediateContext)

#include "DirectXManager.h"



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();

		&shapes,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	cbDesc.MiscFlags = 0;

			break;



		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Quality = 0;

		&shapes,

		return hr;

{

	delete[] pIList;

	CRect                rect;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes

	m_Viewport.MaxDepth = 1.0f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	std::string inputfile = "test.obj";

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#endif





	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

using std::cout; using std::endl;

	m_pLightBuffer = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_DestroyWindow(win);

using std::cout; using std::endl;

		KEY_PRESS_SURFACE_TOTAL

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				WORD index = idx.vertex_index;

		&error,

	}

};

	m_pIndexBuffer = NULL;





	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	//深度ステンシルバッファ作成

			default:

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#include <iostream>

	XMFLOAT4X4 world;

	}



	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	txDesc.SampleDesc.Quality = 0;

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	::GetClientRect(hwnd, &rect);

		}



	delete[] pVList;

	scDesc.Windowed = TRUE;



	vbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

	return;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

	while (SDL_PollEvent(&e) != 0)



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D_FEATURE_LEVEL level;

		{

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

struct ConstantLightBuffer {

		if (e.type == SDL_QUIT)

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pPixelShader);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	{



	scDesc.SampleDesc.Count = 1;



#endif



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	delete[] pVList;

	cbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	std::string error;



	txDesc.ArraySize = 1;

	SDL_Quit();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			case SDLK_LEFT:

	//頂点バッファ作成

	D3D11_BUFFER_DESC ibDesc;

	enum KeyPressSurfaces

	m_IndexCount = 0;







	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemPitch = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}



		else if (e.type == SDL_KEYDOWN)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

	return 0;







		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};

			case SDLK_LEFT:

	for (int j = 0; j < icount; j++)

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t ty =

	//vector<WORD> index_t;



	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	cbDesc.StructureByteStride = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#endif

	SAFE_RELEASE(m_pTextureView);





	scDesc.BufferCount = 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	SAFE_RELEASE(m_pSwapChain);

}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4         eyePos;   //視点座標

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pDepthStencilView);



		return 1;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		{

			{

		&shapes,



};

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pRenderTargetView);

		{

	XMFLOAT4X4 projection;

		}

		return hr;

	}

	ibDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	::GetClientRect(hwnd, &rect);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

		flags,

	m_pSampler = NULL;

	SDL_Quit();

	m_pImmediateContext = NULL;

}

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pSwapChain);

	vector<Vertex> vertexlist;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ConstantMaterial material; //物体の質感

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





int main(int, char**)

	SDL_DestroyRenderer(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	auto& attrib = reader.GetAttrib();

	m_VertexCount = 0;

	txDesc.Height = rect.Height();



			{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}
			case SDLK_RIGHT:

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pDepthStencilView = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.Height = (FLOAT)rect.Height();



	cbDesc.MiscFlags = 0;

		pVList[i] = vertexlist[i];



		return hr;

			default:

	//ピクセルシェーダー生成

			}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pRenderTargetView);

#ifdef _DEBUG

	{



		return hr;

{

	m_pIndexBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	HRESULT              hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&m_pDevice,

				tinyobj::real_t ty =

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		delete[] pVList;

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files





			{



}

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



			{



	// Loop over shapes

	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			switch (e.key.keysym.sym)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





		// Loop over faces(polygon)

	ConstantLight    pntLight; //点光源

			default:

			{

	}

	D3D11_SUBRESOURCE_DATA irData;

			case SDLK_UP:

	txDesc.SampleDesc.Quality = 0;

			}

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t ty =

struct ConstantLightBuffer {

	LoadObj(vertexlist, indexList);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

}

{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		if (!ret)

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		{



			{



	SDL_DestroyTexture(tex);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		delete[] pVList;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		flags,

			default:

		&materials,

			index_offset += num_vertices;

	//頂点シェーダー生成

			case SDLK_UP:

int main(int, char**)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

			index_offset += num_vertices;

	float    fov = XMConvertToRadians(20.0f);

	//ビューポート設定

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	UINT flags = 0;



	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_TOTAL

	//頂点シェーダー生成



	m_pSampler = NULL;

	{

	//vector<Vertex> vertex_t;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	txDesc.MipLevels = 1;



using std::cout; using std::endl;

		if (e.type == SDL_QUIT)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSampler);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pDevice = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

}



	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



			int num_vertices = shape.mesh.num_face_vertices[f];



 * Lesson 1: Hello World!

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	for (int i = 0; i < vcount; i++)

	//テクスチャ読み込み

	for (size_t s = 0; s < shapes.size(); s++)

		&materials,

		pLevels,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//深度ステンシルバッファ作成

	m_Viewport.MaxDepth = 1.0f;

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		exit(1);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

CD3DTest::~CD3DTest()

		pLevels,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantMaterial {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

	{

	while (SDL_PollEvent(&e) != 0)

	//深度ステンシルバッファ作成

	m_pSampler = NULL;

		&m_pSwapChain,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}



 */

 * Lesson 1: Hello World!

	m_pIndexBuffer = NULL;

};

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyWindow(win);

	Vertex* pVList = new Vertex[vcount];

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pTexture);

	//深度ステンシルバッファ作成

		return hr;

	scDesc.SampleDesc.Count = 1;

int main(int, char**)

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::vector<tinyobj::shape_t> shapes;

			case SDLK_LEFT:

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				// access to vertex

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_BUFFER_DESC vbDesc;



				vertex.push_back(vertex_tmp);



		cout << "SDL_INIT_ERROR" << endl;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

}

{

	cbDesc.MiscFlags = 0;

#include <iostream>

 */

		SDL_RenderPresent(ren);

	Release();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		//User requests quit

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <iostream>

	{



	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.CPUAccessFlags = 0;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	reader_config.mtl_search_path = "./"; // Path to material files

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pPixelShader);

	D3D11_BUFFER_DESC ibDesc;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.CPUAccessFlags = 0;



	std::vector<tinyobj::material_t> materials;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Clean up our objects and quit

	SAFE_RELEASE(m_pMatrixBuffer);

		}

	irData.SysMemPitch = 0;

	delete[] pVList;

		return 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	ConstantLight    pntLight; //点光源

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&materials,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			//Select surfaces based on key press

	SAFE_RELEASE(m_pRenderTargetView);

	ibDesc.CPUAccessFlags = 0;

	ConstantLightBuffer clb;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{



#include <iostream>

struct ConstantLight {

	//Clean up our objects and quit

	if (FAILED(hr))

				// access to vertex

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&error,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	}

	//頂点バッファ作成

	XMFLOAT4X4 world;

	}

HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.TopLeftY = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			for (size_t v = 0; v < fv; v++)

		{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;

	vbDesc.MiscFlags = 0;

	m_IndexCount = icount;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



#endif

		{

	ibDesc.CPUAccessFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

		D3D11_SDK_VERSION,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	// Loop over shapes

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SAFE_RELEASE(m_pLightBuffer);



	std::vector<tinyobj::shape_t> shapes;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	tinyobj::ObjReaderConfig reader_config;

	}

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	D3D11_SUBRESOURCE_DATA irData;

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D_FEATURE_LEVEL level;

void CD3DTest::Release()

	WORD* pIList = new WORD[icount];

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.MinDepth = 0.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    fov = XMConvertToRadians(20.0f);

	tinyobj::ObjReaderConfig reader_config;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_UP,





{

		return hr;

	m_pRenderTargetView = NULL;

	SDL_Quit();

}


		1,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//ビューポート設定

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDevice);

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.MinDepth = 0.0f;



	for (size_t s = 0; s < shapes.size(); s++)

	::GetClientRect(hwnd, &rect);

	D3D11_BUFFER_DESC ibDesc;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		size_t index_offset = 0;  // インデントのオフセット

	Vertex* pVList = new Vertex[vcount];

	tinyobj::ObjReaderConfig reader_config;



	cbDesc.MiscFlags = 0;



			{

	delete[] pVList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.BufferDesc.Height = rect.Height();

	CRect                rect;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

}



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			// Loop over vertices in the face.

		}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_pVertexBuffer = NULL;

	ConstantMatrixBuffer cmb;

	bool ret = tinyobj::LoadObj(

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&error,

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferDesc.Height = rect.Height();

	//Key press surfaces constants

		//User presses a key

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferCount = 1;

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pIndexBuffer = NULL;





	m_Viewport.MaxDepth = 1.0f;

		}



	SAFE_RELEASE(m_pSwapChain);



		SDL_Delay(1000);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	for (int j = 0; j < icount; j++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_TOTAL

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

			switch (e.key.keysym.sym)



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	for (int i = 0; i < 3; i++)



	m_pVertexShader = NULL;

};

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);



	while (SDL_PollEvent(&e) != 0)

	m_pMatrixBuffer = NULL;

			switch (e.key.keysym.sym)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.Format = txDesc.Format;





	XMFLOAT4X4 projection;

				break;

		&m_pSwapChain,



	WORD   icount = indexList.size();



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pSampler);



	if (m_pImmediateContext)

	LoadObj(vertexlist, indexList);

	m_Viewport.Width = (FLOAT)rect.Width();

	}

	m_pPixelShader = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



{

			case SDLK_UP:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	irData.pSysMem = &pIList[0];

	for (int i = 0; i < vcount; i++)

	m_pDepthStencilTexture = NULL;



	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	{

	if (FAILED(hr))

			default:

	}*/

		SDL_Delay(1000);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}



	ConstantMatrixBuffer cmb;

	m_Viewport.Height = (FLOAT)rect.Height();

	ConstantLight    pntLight; //点光源

	//深度ステンシルバッファ作成

	std::string imagePath = "hello.bmp";



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}

			// Loop over vertices in the face.

	XMFLOAT4 ambient;           //環境(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	CRect                rect;

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

HRESULT CD3DTest::Create(HWND hwnd)

	std::vector<tinyobj::shape_t> shapes;

	ConstantLightBuffer clb;

	delete[] pVList;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilView);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

CD3DTest::~CD3DTest()



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA irData;

		{

		R"(cube.obj)");

	scDesc.Windowed = TRUE;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

		SDL_RenderPresent(ren);



	//頂点バッファ作成

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

	UINT strides = sizeof(Vertex);

		if (e.type == SDL_QUIT)

		return hr;

	}

		return hr;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	Vertex* pVList = new Vertex[vcount];



	m_pPixelShader = NULL;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);

	SDL_Event e;

		return hr;

			}

			index_offset += num_vertices;

{

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	Vertex* pVList = new Vertex[vcount];

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	for (const auto& shape : shapes)

	m_pIndexBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		exit(1);

		return hr;



		SDL_RenderPresent(ren);

	return 0;

	return 0;

	dsDesc.Format = txDesc.Format;

	scDesc.BufferCount = 1;



	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



};

		&m_pImmediateContext);

	vbDesc.StructureByteStride = 0;

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;



		&level,



		return hr;



	{

	m_pSwapChain = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	std::vector<tinyobj::material_t> materials;

	return;

	SDL_DestroyTexture(tex);

int SEGMENT = 36;

	SAFE_RELEASE(m_pTexture);



		&m_pDevice,

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vrData.SysMemPitch = 0;

	std::string error;

}

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		exit(1);

	std::vector<tinyobj::material_t> materials;

	ibDesc.MiscFlags = 0;



	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//テクスチャ読み込み

	ID3D11Texture2D* pBackBuffer;



		{

	WORD* pIList = new WORD[icount];

		{

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

int SEGMENT = 36;





	};

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	WORD* pIList = new WORD[icount];

{

{

			int num_vertices = shape.mesh.num_face_vertices[f];



	vbDesc.MiscFlags = 0;

		return hr;

		return hr;





		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderCopy(ren, tex, NULL, NULL);





	//頂点バッファ作成

/*

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		KEY_PRESS_SURFACE_DOWN,

struct ConstantMatrixBuffer {



	SAFE_RELEASE(m_pImmediateContext);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		&materials,



	SDL_Quit();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vector<WORD> indexList;

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.StructureByteStride = 0;

	std::vector<tinyobj::shape_t> shapes;

	enum KeyPressSurfaces

	return;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		pVList[i] = vertexlist[i];

	Release();

{

	{

	//ビューポート設定

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	tinyobj::ObjReader reader;



			case SDLK_RIGHT:

	SDL_DestroyRenderer(ren);

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	dsDesc.Format = txDesc.Format;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	tinyobj::attrib_t attrib;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	CRect                rect;



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SAFE_RELEASE(m_pVertexShader);

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	auto& attrib = reader.GetAttrib();

			default:

#define TINYOBJLOADER_IMPLEMENTATION

		R"(cube.obj)");



				break;





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pIList;

	m_pDevice = NULL;



/*

		SDL_RenderPresent(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

		//User presses a key

		&scDesc,



	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Quit();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	//頂点レイアウト作成

			switch (e.key.keysym.sym)

{

};

	while (SDL_PollEvent(&e) != 0)

	scDesc.Windowed = TRUE;

	if (FAILED(hr))



	std::string error;

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_BUFFER_DESC ibDesc;

{

		{

	vbDesc.StructureByteStride = 0;







	scDesc.BufferDesc.Width = rect.Width();

	{

		flags,

		return hr;

		flags,

	// Loop over shapes



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);







	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	HRESULT              hr;

	scDesc.BufferCount = 1;

				break;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

#ifdef _DEBUG

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.SampleDesc.Count = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

	m_Angle += XMConvertToRadians(1.0f);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ty =

	vector<Vertex> vertexlist;



	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

			for (size_t v = 0; v < fv; v++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pTexture = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			case SDLK_RIGHT:

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

			int num_vertices = shape.mesh.num_face_vertices[f];

{

	SAFE_RELEASE(m_pTextureView);



	txDesc.MipLevels = 1;

		return hr;

	tinyobj::ObjReader reader;

				break;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pDevice = NULL;

	std::vector<tinyobj::shape_t> shapes;

{

	{



}

				vertex.push_back(vertex_tmp);

	vrData.SysMemPitch = 0;

		SDL_RenderPresent(ren);

		delete[] pVList;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	//ビューポート設定

			{

	{

	return 0;

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

	m_pTexture = NULL;

	m_pSwapChain->Present(0, 0);

#endif

int main(int, char**)

	vector<WORD> indexList;

#include <SDL.h>

		pVList[i] = vertexlist[i];





			case SDLK_LEFT:

	vbDesc.MiscFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			//Select surfaces based on key press

	{



	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.Width = rect.Width();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))







{

	vrData.SysMemPitch = 0;



	m_pVertexShader = NULL;

		return hr;

				WORD index = idx.vertex_index;





	D3D11_SUBRESOURCE_DATA irData;

	ConstantLightBuffer clb;

	txDesc.SampleDesc.Count = 1;

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SDL_DestroyTexture(tex);





HRESULT CD3DTest::Create(HWND hwnd)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	auto& attrib = reader.GetAttrib();


