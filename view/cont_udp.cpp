	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;



	//テクスチャ読み込み

	m_pDepthStencilView = NULL;

		// Loop over faces(polygon)



				WORD index = idx.vertex_index;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ConstantMaterial material; //物体の質感

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

using std::cout; using std::endl;

	std::string imagePath = "hello.bmp";

struct ConstantLightBuffer {

	m_Viewport.TopLeftY = 0;

	UINT strides = sizeof(Vertex);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.StructureByteStride = 0;

	D3D11_SAMPLER_DESC smpDesc;

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	reader_config.mtl_search_path = "./"; // Path to material files





	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

		NULL,



	DXGI_SWAP_CHAIN_DESC scDesc;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	std::string imagePath = "hello.bmp";

	//テクスチャ読み込み

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

	auto& attrib = reader.GetAttrib();

	cbDesc.MiscFlags = 0;

#include <SDL.h>





		&m_pImmediateContext);



		//User presses a key

	D3D11_SUBRESOURCE_DATA vrData;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	m_pVertexBuffer = NULL;

	/*

		KEY_PRESS_SURFACE_DEFAULT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&error,

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





		1,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyWindow(win);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}

	D3D11_SAMPLER_DESC smpDesc;

	return 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			// Loop over vertices in the face.

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	for (const auto& shape : shapes)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

	if (FAILED(hr))



	vrData.SysMemPitch = 0;

	};

	SDL_DestroyWindow(win);

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t ty =



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		if (e.type == SDL_QUIT)

	{

}



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	ZeroMemory(&txDesc, sizeof(txDesc));

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Width = rect.Width();

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	return 0;

	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pVertexBuffer);



	m_VertexCount = vcount;



		{

	m_pTexture = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	LoadObj(vertexlist, indexList);

	//定数バッファ作成

	m_Viewport.MinDepth = 0.0f;

	m_pDevice = NULL;

#include "DirectXManager.h"

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#include "DirectXManager.h"

	if (m_pImmediateContext)

	//vector<WORD> index_t;

	delete[] pVList;

	for (int i = 0; i < vcount; i++)

	txDesc.MiscFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				// access to vertex



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	vrData.SysMemPitch = 0;

 */



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pSampler);

			{



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))



		R"(cube.obj)");

				// access to vertex

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		return hr;

	D3D11_BUFFER_DESC ibDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	//テクスチャ読み込み





	};

{

	m_pVertexShader = NULL;

	tinyobj::ObjReaderConfig reader_config;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pInputLayout);

		//User requests quit

#include <SDL.h>

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		pLevels,

 * Lesson 1: Hello World!

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.MinDepth = 0.0f;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



}
struct ConstantLightBuffer {



			}

		&m_pImmediateContext);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

	auto& attrib = reader.GetAttrib();

	cbDesc.StructureByteStride = 0;

	}



{

	irData.pSysMem = &pIList[0];

#include "DirectXManager.h"

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//深度ステンシルバッファ作成

		{

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

		&m_pSwapChain,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);







	m_pMatrixBuffer = NULL;

	auto& attrib = reader.GetAttrib();



	m_pMatrixBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.pSysMem = &pVList[0];

	txDesc.MipLevels = 1;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4X4 projection;

	//深度ステンシルバッファ作成

void CD3DTest::Render()

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//頂点レイアウト作成



		KEY_PRESS_SURFACE_DEFAULT,

		return hr;



	SDL_DestroyWindow(win);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

	vbDesc.MiscFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			case SDLK_DOWN:

	m_pDepthStencilView = NULL;



	{

	}

	}



#include <SDL.h>

	scDesc.SampleDesc.Quality = 0;

	}

	txDesc.SampleDesc.Count = 1;

struct ConstantLight {

	m_Viewport.MaxDepth = 1.0f;

		return hr;



#include <SDL.h>



#include <iostream>



				indexlist.push_back(index);

	UINT strides = sizeof(Vertex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	D3D11_BUFFER_DESC ibDesc;

			exit(1);

	float    fov = XMConvertToRadians(20.0f);

				indexlist.push_back(index);

{

	txDesc.ArraySize = 1;

	ConstantLightBuffer clb;



		NULL,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		{

	if (m_pImmediateContext)



	//vector<WORD> index_t;

	//頂点バッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	ConstantMaterial material; //物体の質感

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

using std::cout; using std::endl;



	{

	WORD* pIList = new WORD[icount];

	//頂点レイアウト作成

	m_pVertexBuffer = NULL;

	m_pInputLayout = NULL;

	m_Viewport.TopLeftY = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//Create Index

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	delete[] pVList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Clean up our objects and quit

	if (FAILED(hr))

				// access to vertex

	m_pSampler = NULL;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ty =



	WORD   icount = indexList.size();

	int     vcount = vertexlist.size();

int main(int, char**)



	if (!reader.ParseFromFile(inputfile, reader_config))

};

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = 0;

	SDL_Quit();

	D3D11_TEXTURE2D_DESC txDesc;

	UINT offsets = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pSwapChain->Present(0, 0);

		return hr;

				vertex.push_back(vertex_tmp);

			{

				WORD index = idx.vertex_index;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}
	scDesc.BufferCount = 1;

	vbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&shapes,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		KEY_PRESS_SURFACE_UP,

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





		KEY_PRESS_SURFACE_DOWN,

	SDL_DestroyTexture(tex);



	XMFLOAT4 ambient;           //環境(r,g,b)

		pLevels,



	int     vcount = vertexlist.size();

	for (int j = 0; j < icount; j++)

	SDL_DestroyWindow(win);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDepthStencilView);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

#include "DirectXManager.h"

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	cbDesc.CPUAccessFlags = 0;

};

			case SDLK_DOWN:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

void CD3DTest::Release()

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		flags,

		1,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pDepthStencilTexture = NULL;

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D11_SDK_VERSION,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//ピクセルシェーダー生成

		return hr;

	SDL_DestroyRenderer(ren);

	while (SDL_PollEvent(&e) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pVertexShader = NULL;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#define TINYOBJLOADER_IMPLEMENTATION

CD3DTest::~CD3DTest()







	m_pRenderTargetView = NULL;



	//深度ステンシルバッファ作成

	auto& shapes = reader.GetShapes();

	//vector<Vertex> vertex_t;

		if (!reader.Error().empty())

		if (!ret)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	if (!reader.ParseFromFile(inputfile, reader_config))

	}



	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

}

		{

			}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		}

	txDesc.SampleDesc.Quality = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	enum KeyPressSurfaces

	//ピクセルシェーダー生成

				indexlist.push_back(idx.vertex_index);

	m_pDepthStencilTexture = NULL;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

int main(int, char**)



		SDL_Delay(1000);

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	float    nearZ = 0.1f;

		D3D_DRIVER_TYPE_HARDWARE,

	//インデックスバッファ作成



{



	m_pSwapChain->Present(0, 0);

			break;



	m_VertexCount = 0;

	if (!error.empty())



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pPixelShader);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	float    aspect = m_Viewport.Width / m_Viewport.Height;

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



			case SDLK_RIGHT:



	SAFE_RELEASE(m_pSwapChain);

	ibDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

	ConstantLight    pntLight; //点光源

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string imagePath = "hello.bmp";

struct ConstantMatrixBuffer {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

		return hr;

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pImmediateContext);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



{

		KEY_PRESS_SURFACE_RIGHT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//vector<Vertex> vertex_t;

}



	}

				// access to vertex





				WORD index = idx.vertex_index;

	{



	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pSampler);

	D3D11_SAMPLER_DESC smpDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

 */

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Quit();

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (!reader.ParseFromFile(inputfile, reader_config))



		//User presses a key



	m_pDepthStencilTexture = NULL;

 * Lesson 1: Hello World!



		&materials,

	m_Viewport.MinDepth = 0.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			}

	for (int i = 0; i < 3; i++)

	m_pTextureView = NULL;



	}

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

int main(int, char**)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	txDesc.ArraySize = 1;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&scDesc,

	SAFE_RELEASE(m_pImmediateContext);

	m_pDepthStencilTexture = NULL;

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pIList;

	XMFLOAT4         eyePos;   //視点座標

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	/*

	m_Viewport.TopLeftX = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,

	scDesc.SampleDesc.Count = 1;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	/*

		//User presses a key

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	Vertex* pVList = new Vertex[vcount];

			case SDLK_DOWN:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		NULL,

				indexlist.push_back(idx.vertex_index);

	//ピクセルシェーダー生成

			for (size_t v = 0; v < fv; v++)

		return hr;



				break;

	enum KeyPressSurfaces

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		}



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	vrData.SysMemPitch = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



				break;

	UINT offsets = 0;

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//vector<WORD> index_t;

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 ambient;           //環境(r,g,b)

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (m_pImmediateContext)



	SDL_FreeSurface(suf);

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!reader.Warning().empty())

	m_pTextureView = NULL;



			for (size_t v = 0; v < num_vertices; v++)

			{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (!reader.Warning().empty())

				break;

			default:

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			break;

	SDL_DestroyRenderer(ren);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	WORD* pIList = new WORD[icount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;



		&m_pImmediateContext);

				break;

	ConstantMatrixBuffer cmb;



	//テクスチャ読み込み

	XMFLOAT4         eyePos;   //視点座標

{

			case SDLK_UP:



	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pVertexBuffer);

	std::string inputfile = "test.obj";

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	return hr;

	m_Viewport.TopLeftY = 0;

	}

		D3D_DRIVER_TYPE_HARDWARE,

{



	int     vcount = vertexlist.size();

{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4         eyePos;   //視点座標

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}*/



	m_pDepthStencilTexture = NULL;

#include "DirectXManager.h"

#define TINYOBJLOADER_IMPLEMENTATION

		NULL,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

 * Lesson 1: Hello World!

		return hr;

	scDesc.OutputWindow = hwnd;





			case SDLK_LEFT:

	D3D11_TEXTURE2D_DESC txDesc;

		R"(cube.obj)");

	m_VertexCount = 0;



	}

	txDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

		}

	{

				indexlist.push_back(index);

				tinyobj::real_t tx =

	std::vector<tinyobj::material_t> materials;





	CRect                rect;

	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





#include <iostream>

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	delete[] pVList;

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;



	m_Viewport.Height = (FLOAT)rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&scDesc,

	SDL_DestroyTexture(tex);

	vrData.pSysMem = &pVList[0];



	m_pDepthStencilTexture = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	auto& materials = reader.GetMaterials();

		}

	auto& shapes = reader.GetShapes();

#include <iostream>

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))



	//Vertex* pVList = new Vertex[vcount];



	m_IndexCount = icount;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	txDesc.MiscFlags = 0;

	m_pDevice = NULL;

 * Lesson 1: Hello World!

	SDL_Event e;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	UINT strides = sizeof(Vertex);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ConstantMaterial material; //物体の質感

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&m_pImmediateContext);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//定数バッファ作成

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.CPUAccessFlags = 0;



void CD3DTest::Render()



			//Select surfaces based on key press

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			for (size_t v = 0; v < fv; v++)



	vrData.pSysMem = &pVList[0];



	D3D11_BUFFER_DESC ibDesc;

	vbDesc.MiscFlags = 0;

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

 */



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

int main(int, char**)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	m_pDevice = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				indexlist.push_back(index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	WORD   icount = indexList.size();

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantLightBuffer {

	//テクスチャ読み込み

		flags,







				vertex.push_back(vertex_tmp);

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D_FEATURE_LEVEL level;

	if (!error.empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		else if (e.type == SDL_KEYDOWN)

		&m_pSwapChain,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	Release();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

using std::cout; using std::endl;



	SAFE_RELEASE(m_pDepthStencilTexture);

struct ConstantMatrixBuffer {



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		//User requests quit

{

	{

	ibDesc.StructureByteStride = 0;

		size_t index_offset = 0;  // インデントのオフセット

int main(int, char**)

	ID3D11Texture2D* pBackBuffer;

		{

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		NULL,



		pVList[i] = vertexlist[i];





	txDesc.MipLevels = 1;

				break;



	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		&materials,

		return hr;

		&m_pDevice,



	}

	D3D11_BUFFER_DESC cbDesc;



	//インデックスバッファ作成



{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





		//User presses a key

	cbDesc.CPUAccessFlags = 0;

		{

	SDL_DestroyRenderer(ren);





	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

	//ピクセルシェーダー生成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

HRESULT CD3DTest::Create(HWND hwnd)



	m_pPixelShader = NULL;

			//Select surfaces based on key press

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyRenderer(ren);

	std::string error;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	UINT offsets = 0;

	{

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ConstantLight    pntLight; //点光源

	}

		if (e.type == SDL_QUIT)

	}

	tinyobj::ObjReader reader;

		{

		KEY_PRESS_SURFACE_DOWN,



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ID3D11Texture2D* pBackBuffer;



				tinyobj::real_t ty =

		SDL_RenderCopy(ren, tex, NULL, NULL);

};



{

	if (FAILED(hr))

	}*/



	SDL_DestroyWindow(win);

{



	WORD   icount = indexList.size();

	txDesc.MiscFlags = 0;

		1,



		pIList[j] = indexList[j];





int main(int, char**)





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	DXGI_SWAP_CHAIN_DESC scDesc;

		pVList[i] = vertexlist[i];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.TopLeftX = 0;

	ibDesc.CPUAccessFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	reader_config.mtl_search_path = "./"; // Path to material files



	SAFE_RELEASE(m_pLightBuffer);



				WORD index = idx.vertex_index;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

int main(int, char**)

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.MiscFlags = 0;

	ConstantLightBuffer clb;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		else if (e.type == SDL_KEYDOWN)

		{

	Release();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

	m_Angle += XMConvertToRadians(1.0f);

				break;





	{

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				WORD index = idx.vertex_index;

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.MiscFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	CRect                rect;

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;

		return hr;

		return 1;

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	};

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点バッファ作成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pIndexBuffer);

				break;

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pDevice);

		SDL_RenderPresent(ren);

int SEGMENT = 36;

	//頂点バッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Quit();

	reader_config.mtl_search_path = "./"; // Path to material files

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#include <SDL.h>

	scDesc.SampleDesc.Count = 1;

{

	auto& shapes = reader.GetShapes();

int main(int, char**)

				WORD index = idx.vertex_index;

}



	for (int i = 0; i < vcount; i++)

	LoadObj(vertexlist, indexList);

{

	m_VertexCount = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	HRESULT              hr;



			//Select surfaces based on key press

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ID3D11Texture2D* pBackBuffer;

		NULL,

	scDesc.BufferDesc.Height = rect.Height();



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ibDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				break;

	m_Viewport.MinDepth = 0.0f;

		&materials,

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&m_pDevice,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//vector<WORD> index_t;

	enum KeyPressSurfaces





	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vector<WORD> indexList;

	m_pDepthStencilTexture = NULL;

		{

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

struct ConstantLight {

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.SampleDesc.Quality = 0;





	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pSwapChain);

	m_IndexCount = 0;



	txDesc.MipLevels = 1;



void CD3DTest::Release()

				break;

};



	SAFE_RELEASE(m_pVertexShader);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		}

		KEY_PRESS_SURFACE_DOWN,

		}

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

				break;

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (m_pImmediateContext)



		R"(cube.obj)");



	SAFE_RELEASE(m_pTextureView);

	{

	m_IndexCount = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



CD3DTest::CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pTextureView);



	if (FAILED(hr))

	SDL_FreeSurface(bmp);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ibDesc.CPUAccessFlags = 0;

		&materials,



	//インデックスバッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantLight {

	vbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

		&m_pDevice,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.SampleDesc.Count = 1;

	m_pDepthStencilView = NULL;



	if (FAILED(hr))

				// access to vertex

		}

	SDL_Quit();

struct ConstantLightBuffer {

	std::string inputfile = "test.obj";

	m_pRenderTargetView = NULL;



	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.SampleDesc.Quality = 0;

		//User requests quit

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	auto& materials = reader.GetMaterials();

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		if (!reader.Error().empty())

		return hr;

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.StructureByteStride = 0;

		return hr;



	{

				WORD index = idx.vertex_index;

	SDL_Event e;







	txDesc.Width = rect.Width();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderPresent(ren);

	dsDesc.Texture2D.MipSlice = 0;

	m_pSwapChain = NULL;

	if (FAILED(hr))

};

	}

	if (FAILED(hr))

		return hr;

	}

int main(int, char**)

	cbDesc.StructureByteStride = 0;



	UINT strides = sizeof(Vertex);



		SDL_RenderClear(ren);

	ConstantMaterial material; //物体の質感



	if (FAILED(hr))

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 projection;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Count = 1;

	m_pTexture = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

		return hr;

CD3DTest::~CD3DTest()

		}



		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantLightBuffer clb;

			{

 * Lesson 1: Hello World!

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLight    pntLight; //点光源

	irData.SysMemSlicePitch = 0;

 * Lesson 1: Hello World!





	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&error,

	}

using std::cout; using std::endl;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_Viewport.Height = (FLOAT)rect.Height();







	}*/

	SAFE_RELEASE(m_pTextureView);

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	}



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<WORD> index_t;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	LoadObj(vertexlist, indexList);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pMatrixBuffer);

	ibDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				vertex.push_back(vertex_tmp);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



{

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pTexture = NULL;

		}

	//vector<Vertex> vertex_t;

		SDL_RenderPresent(ren);

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			// Loop over vertices in the face.

			for (size_t v = 0; v < fv; v++)

	vbDesc.StructureByteStride = 0;



		//User requests quit

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	UINT strides = sizeof(Vertex);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			case SDLK_DOWN:



		size_t index_offset = 0;  // インデントのオフセット





			case SDLK_DOWN:

		pLevels,

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}
	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MipLevels = 1;

		}

	m_pPixelShader = NULL;

		SDL_RenderPresent(ren);

	SDL_DestroyWindow(win);

	XMFLOAT4 specular;          //反射(r,g,b)

	{

#endif



	reader_config.mtl_search_path = "./"; // Path to material files



 */

}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





			case SDLK_UP:



		SDL_Delay(1000);

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	Release();

	enum KeyPressSurfaces

	SDL_Event e;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.SampleDesc.Count = 1;

	{

{

	bool ret = tinyobj::LoadObj(



		else if (e.type == SDL_KEYDOWN)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Release();

	m_pMatrixBuffer = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4X4 world;

	{



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		if (!ret)

	}*/

	LoadObj(vertexlist, indexList);

	Release();

	SAFE_RELEASE(m_pImmediateContext);

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

 * Lesson 1: Hello World!

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	//テクスチャ読み込み

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	//vector<WORD> index_t;

	txDesc.SampleDesc.Quality = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

HRESULT CD3DTest::Create(HWND hwnd)

	tinyobj::attrib_t attrib;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Angle += XMConvertToRadians(1.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vrData.SysMemSlicePitch = 0;

	float    nearZ = 0.1f;

	//ビューポート設定

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			{

	SAFE_RELEASE(m_pDevice);

			}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pSampler);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

};

void CD3DTest::Release()



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyTexture(tex);

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))



		flags,

	SDL_DestroyTexture(tex);

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 pos;               //座標(x,y,z)

}
		{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



}

			default:

	if (!error.empty())

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vector<Vertex> vertexlist;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{



	XMFLOAT4 pos;               //座標(x,y,z)

		}

			//Select surfaces based on key press

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Vertex* pVList = new Vertex[vcount];

	}

	//Create Index

				tinyobj::real_t ty =

		&m_pSwapChain,



	SDL_FreeSurface(suf);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//頂点シェーダー生成



struct ConstantMatrixBuffer {

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

 */

		R"(cube.obj)");

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

CD3DTest::CD3DTest()

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_TOTAL

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&level,

	LoadObj(vertexlist, indexList);

	m_Viewport.TopLeftX = 0;



		}

	return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

 */

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;







	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		pIList[j] = indexList[j];

	vrData.SysMemPitch = 0;

	if (FAILED(hr))

			}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pDepthStencilTexture = NULL;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	//頂点レイアウト作成



}

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		}

		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	}*/



			index_offset += num_vertices;

	Release();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			index_offset += num_vertices;



	txDesc.MipLevels = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

 * Lesson 1: Hello World!



	m_pSampler = NULL;

			case SDLK_LEFT:





		D3D11_SDK_VERSION,

			case SDLK_RIGHT:

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		delete[] pVList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{



		{

	SAFE_RELEASE(m_pTextureView);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include <iostream>

		R"(cube.obj)");



	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		KEY_PRESS_SURFACE_DOWN,

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

	//Key press surfaces constants

		}

	}*/

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	{

	m_pSampler = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);



		//User requests quit

CD3DTest::CD3DTest()

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

 */

	}*/



		{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{







	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}

	//Clean up our objects and quit

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pLightBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		delete[] pVList;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

}

		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);



				// access to vertex

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		D3D_DRIVER_TYPE_HARDWARE,

	vrData.SysMemPitch = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.BufferDesc.Height = rect.Height();

			// Loop over vertices in the face.

	}*/

	XMFLOAT4X4 projection;

	m_VertexCount = 0;

	/*

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA vrData;

		return 1;

	std::string imagePath = "hello.bmp";

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {



			{

		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::vector<tinyobj::material_t> materials;

		if (!reader.Error().empty())

	m_pTextureView = NULL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//頂点バッファ作成

		return hr;

	WORD* pIList = new WORD[icount];

				// access to vertex



	m_pSwapChain = NULL;

	WORD* pIList = new WORD[icount];

			switch (e.key.keysym.sym)

	}

	if (FAILED(hr))



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vrData.SysMemPitch = 0;

	if (FAILED(hr))



	ibDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;





struct ConstantMatrixBuffer {

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<Vertex> vertex_t;

	//テクスチャ読み込み



}

	m_pLightBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantLightBuffer clb;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

int main(int, char**)

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4X4 projection;



	XMFLOAT4 pos;               //座標(x,y,z)

		pVList[i] = vertexlist[i];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//ピクセルシェーダー生成





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;  // インデントのオフセット



	SAFE_RELEASE(m_pDevice);

	XMFLOAT4X4 world;

	reader_config.mtl_search_path = "./"; // Path to material files

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		// Loop over faces(polygon)

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.MiscFlags = 0;

		return hr;

				tinyobj::real_t ty =

	{

			{

	//ピクセルシェーダー生成



	m_VertexCount = 0;

	{

	txDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA irData;

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_Viewport.Width = (FLOAT)rect.Width();

		if (!reader.Error().empty())

		SDL_RenderClear(ren);

		return hr;

	if (FAILED(hr))



	XMStoreFloat4(&clb.eyePos, eye);

		&m_pImmediateContext);

	dsDesc.Texture2D.MipSlice = 0;

	{



	m_Viewport.MaxDepth = 1.0f;

	UINT offsets = 0;

	vector<WORD> indexList;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyRenderer(ren);



		cout << "SDL_INIT_ERROR" << endl;



	m_pIndexBuffer = NULL;

		KEY_PRESS_SURFACE_RIGHT,

	Release();

			exit(1);

	return 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//定数バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	}



	}

	vrData.SysMemSlicePitch = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		}

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				WORD index = idx.vertex_index;



	ZeroMemory(&txDesc, sizeof(txDesc));

	//vector<Vertex> vertex_t;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderClear(ren);

	SDL_Quit();

{







			}

		NULL,

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		//User presses a key

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				break;

	SAFE_RELEASE(m_pInputLayout);

};

		}

	txDesc.MipLevels = 1;

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pSwapChain->Present(0, 0);

	m_pSampler = NULL;

	XMFLOAT4X4 view;





	vector<Vertex> vertexlist;



		pIList[j] = indexList[j];

	WORD* pIList = new WORD[icount];

	SDL_Quit();

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

				indexlist.push_back(index);

	m_pSampler = NULL;

	//深度ステンシルバッファ作成

	//インデックスバッファ作成



	ibDesc.StructureByteStride = 0;

	txDesc.ArraySize = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		m_pImmediateContext->ClearState();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		//User presses a key



				break;

	D3D11_SUBRESOURCE_DATA vrData;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		}

	cbDesc.StructureByteStride = 0;

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4X4 view;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,

	//テクスチャ読み込み

	ConstantLightBuffer clb;

	delete[] pVList;

		return hr;

	}

	}*/





	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string error;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pVertexShader = NULL;

struct ConstantMaterial {

	};



	tinyobj::ObjReader reader;

	m_VertexCount = vcount;

	Release();



{

	//頂点レイアウト作成

		exit(1);



	Release();

	m_Viewport.TopLeftY = 0;

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	}

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	txDesc.ArraySize = 1;

			{

	m_pSwapChain->Present(0, 0);

		1,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			exit(1);



		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.pSysMem = &pIList[0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.CPUAccessFlags = 0;

	ConstantMatrixBuffer cmb;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pVertexShader = NULL;

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		return hr;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	LoadObj(vertexlist, indexList);

	float    farZ = 100.0f;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)





			//Select surfaces based on key press

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				indexlist.push_back(index);

	SDL_FreeSurface(bmp);

	D3D11_TEXTURE2D_DESC txDesc;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

	SAFE_RELEASE(m_pDepthStencilView);

	ibDesc.CPUAccessFlags = 0;

	bool ret = tinyobj::LoadObj(

	return hr;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return 1;

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	cbDesc.MiscFlags = 0;



	{

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	irData.SysMemSlicePitch = 0;

using std::cout; using std::endl;

		SDL_RenderCopy(ren, tex, NULL, NULL);





{



CD3DTest::~CD3DTest()

	if (FAILED(hr))

			case SDLK_LEFT:

	//頂点シェーダー生成



{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	Release();

				tinyobj::real_t tx =



#include <SDL.h>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		pVList[i] = vertexlist[i];

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	UINT strides = sizeof(Vertex);



	m_pSampler = NULL;





	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	irData.pSysMem = &pIList[0];

#include <SDL.h>

	if (FAILED(hr))

void CD3DTest::Release()

			default:

	if (FAILED(hr))

void CD3DTest::Render()

	if (FAILED(hr))

			break;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_SUBRESOURCE_DATA irData;



		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}



		return hr;

	if (FAILED(hr))



	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		NULL,

			{

	}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pIndexBuffer = NULL;

	}

	{

		&error,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		pVList[i] = vertexlist[i];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_pSwapChain = NULL;

	if (m_pImmediateContext)

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		}

	}

	m_pTexture = NULL;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	};

		SDL_RenderPresent(ren);



			switch (e.key.keysym.sym)

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

			}



	// Loop over shapes

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.Windowed = TRUE;

	vrData.pSysMem = &pVList[0];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	m_Viewport.MinDepth = 0.0f;



	while (SDL_PollEvent(&e) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

};

{

int SEGMENT = 36;

void CD3DTest::Render()

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pTextureView);

	}

				break;

};



	{

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.MiscFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&error,

	if (FAILED(hr))



		pVList[i] = vertexlist[i];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		exit(1);

				break;



			for (size_t v = 0; v < fv; v++)

	m_pVertexBuffer = NULL;

	//深度ステンシルバッファ作成

	cbDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <SDL.h>

	std::string error;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pInputLayout);

	ConstantLight    pntLight; //点光源

	m_VertexCount = vcount;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			{

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	ibDesc.CPUAccessFlags = 0;

{

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::GetClientRect(hwnd, &rect);

				break;



	//First we need to start up SDL, and make sure it went ok

struct ConstantLight {

	m_Viewport.Height = (FLOAT)rect.Height();









	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	float    nearZ = 0.1f;



	if (FAILED(hr))



		if (e.type == SDL_QUIT)

/*

			index_offset += fv;

struct ConstantLightBuffer {

	D3D11_BUFFER_DESC vbDesc;

{

			//Select surfaces based on key press

		m_pImmediateContext->ClearState();

		}

	scDesc.OutputWindow = hwnd;

};

void CD3DTest::Render()

			{

	txDesc.SampleDesc.Quality = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		return hr;

struct ConstantLightBuffer {



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





		pIList[j] = indexList[j];



}

};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





		return hr;



	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



CD3DTest::~CD3DTest()



	//テクスチャ読み込み

	for (int j = 0; j < icount; j++)

	for (int i = 0; i < vcount; i++)

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

CD3DTest::CD3DTest()





	D3D_FEATURE_LEVEL level;

	XMFLOAT4X4 view;

	m_pTextureView = NULL;

	/*

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		delete[] pIList;

	}*/

#include "DirectXManager.h"

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vbDesc.StructureByteStride = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		{



	auto& materials = reader.GetMaterials();

		return hr;

};





	{

	vrData.pSysMem = &pVList[0];

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pIndexBuffer);



	UINT offsets = 0;

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.MinDepth = 0.0f;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			for (size_t v = 0; v < num_vertices; v++)



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.MiscFlags = 0;

		{



	HRESULT              hr;

		KEY_PRESS_SURFACE_RIGHT,



	m_Viewport.TopLeftY = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

		&materials,

		&m_pImmediateContext);

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.eyePos, eye);



	vrData.SysMemSlicePitch = 0;

	float    nearZ = 0.1f;

		{

	XMFLOAT4         eyePos;   //視点座標

		&scDesc,

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.MiscFlags = 0;



		return hr;

{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	SAFE_RELEASE(m_pVertexShader);

	ibDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;

	{

		KEY_PRESS_SURFACE_LEFT,

	m_Angle += XMConvertToRadians(1.0f);

	{

		R"(cube.obj)");



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pSwapChain);

#ifdef _DEBUG

	delete[] pIList;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.Height = rect.Height();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (m_pImmediateContext)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			default:

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//定数バッファ作成

	{

	Release();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

		size_t index_offset = 0;



	delete[] pIList;

	scDesc.BufferCount = 1;

	//深度ステンシルバッファ作成

				break;

	SAFE_RELEASE(m_pTextureView);



		KEY_PRESS_SURFACE_RIGHT,



	m_Angle += XMConvertToRadians(1.0f);

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.OutputWindow = hwnd;

	ibDesc.MiscFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



{

	cbDesc.CPUAccessFlags = 0;

		}



		&materials,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&shapes,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4         ambient;  //環境光(r,g,b)


