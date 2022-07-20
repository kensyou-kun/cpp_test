





	m_Viewport.MinDepth = 0.0f;

	m_pPixelShader = NULL;

 */

	int     vcount = vertexlist.size();

		delete[] pIList;







		//User presses a key





				tinyobj::real_t tx =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.SysMemSlicePitch = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

};

		pVList[i] = vertexlist[i];

		if (!reader.Error().empty())

	m_pSwapChain->Present(0, 0);

	//頂点シェーダー生成

	//深度ステンシルバッファ作成

{

	SDL_FreeSurface(suf);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		size_t index_offset = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pMatrixBuffer);

	//Clean up our objects and quit

	bool ret = tinyobj::LoadObj(

	vbDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL level;

	}

	txDesc.MipLevels = 1;

		else if (e.type == SDL_KEYDOWN)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.MiscFlags = 0;



	m_pMatrixBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				break;

	D3D_FEATURE_LEVEL level;

	ConstantMatrixBuffer cmb;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pPixelShader);

		m_pImmediateContext->ClearState();

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	enum KeyPressSurfaces

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標

	vector<WORD> indexList;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 specular;          //反射(r,g,b)

	float    fov = XMConvertToRadians(20.0f);

	ibDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

int SEGMENT = 36;

		KEY_PRESS_SURFACE_RIGHT,

				break;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_RenderClear(ren);

				vertex.push_back(vertex_tmp);

	auto& shapes = reader.GetShapes();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	vector<Vertex> vertexlist;

	if (FAILED(hr))

		if (!reader.Error().empty())

				WORD index = idx.vertex_index;



		&materials,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	{

		return 1;

			{

		return hr;



		{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}





		SDL_RenderClear(ren);

		&shapes,

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_VertexCount = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pVertexBuffer);

int SEGMENT = 36;



	ibDesc.MiscFlags = 0;

	txDesc.MipLevels = 1;

	vector<Vertex> vertexlist;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_Angle += XMConvertToRadians(1.0f);

	{

				// access to vertex

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantLightBuffer {

	//Vertex* pVList = new Vertex[vcount];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		NULL,



		KEY_PRESS_SURFACE_RIGHT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pSwapChain->Present(0, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_DestroyTexture(tex);

	}

	vbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			exit(1);





	m_pTextureView = NULL;

		SDL_RenderClear(ren);

{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//Clean up our objects and quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





				indexlist.push_back(index);

		pVList[i] = vertexlist[i];

	XMFLOAT4         eyePos;   //視点座標

	ConstantMatrixBuffer cmb;

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftX = 0;

			index_offset += num_vertices;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

		{



				break;

	m_pIndexBuffer = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



};



	m_pTexture = NULL;

		}

	scDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		exit(1);



				// access to vertex

	txDesc.MipLevels = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				// access to vertex

	SDL_Quit();

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		// Loop over faces(polygon)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	cbDesc.CPUAccessFlags = 0;

 */

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		flags,



}

{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

{

	SAFE_RELEASE(m_pImmediateContext);

}

	m_pSwapChain->Present(0, 0);

	m_pInputLayout = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#include <iostream>

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	reader_config.mtl_search_path = "./"; // Path to material files

	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	irData.SysMemSlicePitch = 0;

int main(int, char**)

	scDesc.BufferDesc.Width = rect.Width();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;

	m_pDevice = NULL;

	tinyobj::ObjReaderConfig reader_config;

	m_pRenderTargetView = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	vbDesc.MiscFlags = 0;

	scDesc.BufferCount = 1;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pDepthStencilView = NULL;

			case SDLK_RIGHT:

	float    farZ = 100.0f;





	XMFLOAT4         eyePos;   //視点座標



	float    nearZ = 0.1f;



	return 0;

		delete[] pVList;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	delete[] pIList;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	CRect                rect;

		//User presses a key

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include "DirectXManager.h"

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return;

				break;

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		D3D11_SDK_VERSION,

	//インデックスバッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Quit();

				// access to vertex

	WORD   icount = indexList.size();

				indexlist.push_back(index);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	tinyobj::ObjReader reader;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		return hr;

		delete[] pIList;

		m_pImmediateContext->ClearState();

	//頂点シェーダー生成

	txDesc.MiscFlags = 0;

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include "DirectXManager.h"

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//Clean up our objects and quit

		&error,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				vertex.push_back(vertex_tmp);

	int     vcount = vertexlist.size();

	//深度ステンシルバッファ作成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&level,

#ifdef _DEBUG



	if (FAILED(hr))





	D3D11_SUBRESOURCE_DATA irData;

		size_t index_offset = 0;

	delete[] pIList;

int main(int, char**)

	// Loop over shapes



	if (FAILED(hr))

			case SDLK_UP:

	m_pInputLayout = NULL;

}

	std::vector<tinyobj::material_t> materials;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

struct ConstantLight {



		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{



	SDL_DestroyRenderer(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	};

	vbDesc.MiscFlags = 0;

		return 1;



	txDesc.SampleDesc.Count = 1;

struct ConstantMatrixBuffer {

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

		if (!ret)

	if (FAILED(hr))



		return hr;

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ConstantMatrixBuffer cmb;

	//Vertex* pVList = new Vertex[vcount];







	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_RenderPresent(ren);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

CD3DTest::~CD3DTest()

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	if (!error.empty())

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			index_offset += fv;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_VertexCount = 0;

	pBackBuffer->Release();



	SDL_DestroyTexture(tex);

	while (SDL_PollEvent(&e) != 0)



	//Vertex* pVList = new Vertex[vcount];

#include "DirectXManager.h"

	delete[] pVList;

	m_VertexCount = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.eyePos, eye);

int SEGMENT = 36;



	SAFE_RELEASE(m_pDevice);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&scDesc,

	SDL_DestroyTexture(tex);

		&m_pDevice,

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

		cout << "SDL_INIT_ERROR" << endl;



	UINT flags = 0;

		&m_pImmediateContext);

			}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 pos;               //座標(x,y,z)

};

	UINT flags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_UP:

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{

	return;



	m_Viewport.TopLeftX = 0;

	{

	/*

				break;

		return hr;



int main(int, char**)

			// Loop over vertices in the face.

	txDesc.SampleDesc.Count = 1;



	m_pLightBuffer = NULL;

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_DestroyTexture(tex);

	if (!error.empty())

	WORD   icount = indexList.size();

	scDesc.BufferCount = 1;

	cbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)

	vector<WORD> indexList;

}
	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pDepthStencilTexture);

	}

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	SDL_DestroyTexture(tex);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.TopLeftX = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pVertexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pLightBuffer = NULL;

	}

		}



				break;

	bool ret = tinyobj::LoadObj(





	if (SDL_Init(SDL_INIT_VIDEO != 0))





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

}

	{

	m_pVertexBuffer = NULL;

	std::string inputfile = "test.obj";

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

int SEGMENT = 36;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

	//インデックスバッファ作成

	std::string error;

	txDesc.Height = rect.Height();

{

void CD3DTest::Render()







		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	scDesc.BufferCount = 1;

				// access to vertex

		}

	{

#include <SDL.h>

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

			break;

		}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				vertex.push_back(vertex_tmp);

		&shapes,

	if (!error.empty())

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	std::string imagePath = "hello.bmp";

	//頂点バッファ作成

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_Delay(1000);

	{

	::GetClientRect(hwnd, &rect);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

	ConstantLightBuffer clb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = vcount;

	float    farZ = 100.0f;



	std::vector<tinyobj::material_t> materials;

		m_pImmediateContext->ClearState();



			index_offset += fv;



	cbDesc.CPUAccessFlags = 0;



				vertex.push_back(vertex_tmp);

	//ビューポート設定

	m_Viewport.MinDepth = 0.0f;



void CD3DTest::Release()

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	if (!error.empty())

	txDesc.Height = rect.Height();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	vbDesc.MiscFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyTexture(tex);

	scDesc.SampleDesc.Count = 1;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

void CD3DTest::Render()

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void CD3DTest::Render()

{

	//vector<Vertex> vertex_t;



	m_pTexture = NULL;

	vbDesc.CPUAccessFlags = 0;

{



	Vertex* pVList = new Vertex[vcount];



		delete[] pIList;



	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.CPUAccessFlags = 0;



	for (int j = 0; j < icount; j++)

				indexlist.push_back(index);

		}



	for (int j = 0; j < icount; j++)

	m_Viewport.TopLeftX = 0;



				indexlist.push_back(index);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];







		SDL_RenderPresent(ren);

	float    nearZ = 0.1f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{

	cbDesc.CPUAccessFlags = 0;

	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	vbDesc.MiscFlags = 0;

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;

	SDL_FreeSurface(bmp);



		delete[] pIList;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::string error;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		if (!ret)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

		KEY_PRESS_SURFACE_DOWN,

CD3DTest::CD3DTest()

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <iostream>

	std::string error;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



void CD3DTest::Release()

	if (FAILED(hr))

			}

		&level,

	XMStoreFloat4(&clb.ambient, lightAmbient);

			switch (e.key.keysym.sym)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_Delay(1000);

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	for (const auto& shape : shapes)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	txDesc.MiscFlags = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			{

	if (m_pImmediateContext)



	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pRenderTargetView = NULL;

	CRect                rect;

	m_pImmediateContext = NULL;

	//ピクセルシェーダー生成





	vrData.SysMemPitch = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

		&attrib,

	SAFE_RELEASE(m_pDepthStencilTexture);

		exit(1);



	SDL_DestroyWindow(win);

			}



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点レイアウト作成

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	if (FAILED(hr))

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pTextureView = NULL;

	//定数バッファ作成

	SDL_DestroyRenderer(ren);

				// access to vertex

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

			case SDLK_DOWN:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

#define TINYOBJLOADER_IMPLEMENTATION

struct ConstantLight {



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	WORD   icount = indexList.size();

	Release();

	//First we need to start up SDL, and make sure it went ok

	m_pRenderTargetView = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	m_Viewport.TopLeftY = 0;

	}

			// Loop over vertices in the face.

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

#include <iostream>

		return hr;

		KEY_PRESS_SURFACE_DOWN,

			{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	float    farZ = 100.0f;

	//Clean up our objects and quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

	ibDesc.StructureByteStride = 0;

/*

	{



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.SampleDesc.Count = 1;



	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pMatrixBuffer);

{

	::ZeroMemory(&scDesc, sizeof(scDesc));



struct ConstantMatrixBuffer {

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			}

	scDesc.BufferDesc.Width = rect.Width();

		{

	m_IndexCount = icount;

	vrData.pSysMem = &pVList[0];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}



			{

	D3D11_SUBRESOURCE_DATA vrData;

#include <SDL.h>

	for (int j = 0; j < icount; j++)

	UINT flags = 0;



			index_offset += fv;

	std::string inputfile = "test.obj";

	XMFLOAT4X4 projection;



		return hr;

			for (size_t v = 0; v < num_vertices; v++)



	std::vector<tinyobj::shape_t> shapes;

		return hr;

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pDevice = NULL;



#include <SDL.h>

		return hr;



		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.MinDepth = 0.0f;

};

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&m_pDevice,



	/*

		{

{

	XMFLOAT4X4 world;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

				vertex.push_back(vertex_tmp);

	vrData.SysMemPitch = 0;

	}



	vbDesc.MiscFlags = 0;

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t tx =

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	bool ret = tinyobj::LoadObj(



	vrData.pSysMem = &pVList[0];

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pPixelShader = NULL;

		return hr;

	irData.SysMemSlicePitch = 0;

	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pDepthStencilView = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	delete[] pIList;

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&attrib,





	m_pDepthStencilTexture = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.SampleDesc.Count = 1;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}
CD3DTest::CD3DTest()

		&error,

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	CRect                rect;

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pSwapChain);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

	SDL_DestroyTexture(tex);

	int     vcount = vertexlist.size();

	txDesc.MipLevels = 1;







	D3D11_BUFFER_DESC ibDesc;

	txDesc.Width = rect.Width();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	std::string error;

	UINT flags = 0;

	pBackBuffer->Release();



				tinyobj::real_t ty =

		size_t index_offset = 0;  // インデントのオフセット

	vrData.SysMemSlicePitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			case SDLK_RIGHT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pInputLayout = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pTextureView);

};

	Vertex* pVList = new Vertex[vcount];



	for (const auto& shape : shapes)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	txDesc.MipLevels = 1;

	tinyobj::attrib_t attrib;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//vector<WORD> index_t;



	D3D11_SUBRESOURCE_DATA vrData;

	for (int j = 0; j < icount; j++)

};

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

			case SDLK_RIGHT:





	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);



	m_pDepthStencilTexture = NULL;

	m_pSwapChain->Present(0, 0);

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantLight {

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.MiscFlags = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		exit(1);

#include "DirectXManager.h"



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}



	ConstantLight    pntLight; //点光源

	ibDesc.CPUAccessFlags = 0;

			{

				indexlist.push_back(index);

	return;

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pDevice);

	m_VertexCount = 0;

	m_pVertexBuffer = NULL;

#endif

	//深度ステンシルバッファ作成

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

			case SDLK_LEFT:

	m_pDepthStencilTexture = NULL;

{

		}

	vrData.SysMemPitch = 0;

	}



	if (!reader.ParseFromFile(inputfile, reader_config))

	dsDesc.Texture2D.MipSlice = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Format = txDesc.Format;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			index_offset += num_vertices;

{

	cbDesc.StructureByteStride = 0;

		&level,

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);



	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	for (int i = 0; i < 3; i++)

	m_VertexCount = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ConstantLightBuffer clb;

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilView = NULL;

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	auto& attrib = reader.GetAttrib();





	WORD   icount = indexList.size();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pSwapChain->Present(0, 0);

	};

		&m_pSwapChain,

		delete[] pVList;

	}



	dsDesc.Format = txDesc.Format;

	{



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string error;

			default:



	//Create Index

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.CPUAccessFlags = 0;

		exit(1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	::GetClientRect(hwnd, &rect);







	auto& materials = reader.GetMaterials();

			}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pMatrixBuffer = NULL;

	m_pIndexBuffer = NULL;

	XMFLOAT4X4 view;



	m_pIndexBuffer = NULL;

			break;



	m_pSwapChain = NULL;

	{

	return hr;

	scDesc.BufferCount = 1;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

void CD3DTest::Render()

		//User presses a key

	::GetClientRect(hwnd, &rect);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 */

		D3D11_SDK_VERSION,

	tinyobj::attrib_t attrib;



	/*

	SAFE_RELEASE(m_pTexture);

	vrData.pSysMem = &pVList[0];



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&scDesc,



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	SAFE_RELEASE(m_pPixelShader);

	{

	scDesc.BufferDesc.Height = rect.Height();







	delete[] pIList;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		cout << "SDL_INIT_ERROR" << endl;

		&scDesc,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#include <SDL.h>

	m_IndexCount = icount;

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vrData.SysMemPitch = 0;

			//Select surfaces based on key press

	float    fov = XMConvertToRadians(20.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D_FEATURE_LEVEL level;

	ibDesc.MiscFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			default:

	/*

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_DEFAULT,

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	//Clean up our objects and quit

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReaderConfig reader_config;

		// Loop over faces(polygon)

	SDL_FreeSurface(bmp);

			for (size_t v = 0; v < fv; v++)





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

		m_pImmediateContext->ClearState();

		&shapes,

	SAFE_RELEASE(m_pSwapChain);

		return hr;

			// Loop over vertices in the face.

		m_pImmediateContext->ClearState();



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ConstantLight    pntLight; //点光源

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);



void CD3DTest::Release()



	//テクスチャ読み込み

	m_pDepthStencilTexture = NULL;

	m_Viewport.TopLeftX = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//Create Index

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_FreeSurface(bmp);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_BUFFER_DESC vbDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}



	cbDesc.StructureByteStride = 0;

	scDesc.BufferCount = 1;



};

	if (FAILED(hr))

			case SDLK_DOWN:

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

CD3DTest::~CD3DTest()



	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyRenderer(ren);

		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_DEFAULT,

		//User requests quit

/*

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	for (const auto& shape : shapes)

	SDL_Event e;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pIndexBuffer = NULL;

	ConstantMaterial material; //物体の質感

		pIList[j] = indexList[j];

	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			for (size_t v = 0; v < fv; v++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		{

	tinyobj::ObjReaderConfig reader_config;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	float    nearZ = 0.1f;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ConstantLight    pntLight; //点光源

	if (!error.empty())



	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		&m_pSwapChain,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&m_pImmediateContext);

	return 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pVertexShader);



	SDL_FreeSurface(suf);

	HRESULT              hr;

	tinyobj::ObjReaderConfig reader_config;







	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}

};

	scDesc.BufferDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	::GetClientRect(hwnd, &rect);

	UINT flags = 0;

		SDL_RenderClear(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

		1,

	Release();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	tinyobj::attrib_t attrib;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.MiscFlags = 0;

	//定数バッファ作成

int main(int, char**)

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.TopLeftY = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pTextureView = NULL;



	cbDesc.StructureByteStride = 0;

		}









			}

{





	if (!error.empty())

			for (size_t v = 0; v < num_vertices; v++)

	}

	//Key press surfaces constants

			default:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ibDesc.StructureByteStride = 0;



	XMFLOAT4         ambient;  //環境光(r,g,b)

		&scDesc,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.ArraySize = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	{

	}

		flags,

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		size_t index_offset = 0;



	SAFE_RELEASE(m_pRenderTargetView);

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.CPUAccessFlags = 0;

		return 1;



#ifdef _DEBUG

	{

	m_IndexCount = icount;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	if (FAILED(hr))

			{

		pVList[i] = vertexlist[i];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	for (const auto& shape : shapes)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//vector<Vertex> vertex_t;

	//ピクセルシェーダー生成

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	HRESULT              hr;

};

	m_Viewport.Height = (FLOAT)rect.Height();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <SDL.h>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ibDesc.CPUAccessFlags = 0;

{

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyTexture(tex);

void CD3DTest::Release()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//定数バッファ作成

	reader_config.mtl_search_path = "./"; // Path to material files





		&error,



	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderPresent(ren);







	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t ty =

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t tx =







		if (e.type == SDL_QUIT)



	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pPixelShader);

	m_pPixelShader = NULL;

	float    farZ = 100.0f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ibDesc.CPUAccessFlags = 0;

	return;



				tinyobj::real_t tx =

	{

	ConstantLight    pntLight; //点光源



HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

	cbDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;



}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

};

	}

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pDevice);



	SDL_DestroyTexture(tex);

				vertex.push_back(vertex_tmp);

	//Vertex* pVList = new Vertex[vcount];



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	Release();

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		if (!reader.Error().empty())

	scDesc.Windowed = TRUE;

	cbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	//Create Index

void CD3DTest::Release()



	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pVertexShader = NULL;

			{

	irData.SysMemSlicePitch = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Quit();

struct ConstantLight {

	};

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

};

		if (e.type == SDL_QUIT)

{



			}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		1,





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				vertex.push_back(vertex_tmp);

#include <iostream>

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	tinyobj::attrib_t attrib;

}



	if (FAILED(hr))





int main(int, char**)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pImmediateContext);

		return 1;





		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.CPUAccessFlags = 0;



	return 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			{

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	ibDesc.StructureByteStride = 0;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vrData.SysMemSlicePitch = 0;

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.Height = (FLOAT)rect.Height();

/*

	txDesc.MiscFlags = 0;



#include <iostream>

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	scDesc.SampleDesc.Quality = 0;

		1,

};

	m_Viewport.TopLeftX = 0;

#include <iostream>

	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

				tinyobj::real_t tx =

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	std::vector<tinyobj::material_t> materials;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vbDesc.CPUAccessFlags = 0;

		return 1;

	{

	if (!reader.Warning().empty())

	scDesc.OutputWindow = hwnd;

	txDesc.MipLevels = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

CD3DTest::~CD3DTest()

	std::vector<tinyobj::material_t> materials;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_VertexCount = 0;

	vrData.SysMemSlicePitch = 0;

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//ビューポート設定

	D3D11_TEXTURE2D_DESC txDesc;



		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	UINT flags = 0;

	{

	XMFLOAT4 ambient;           //環境(r,g,b)





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vector<Vertex> vertexlist;

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pIndexBuffer);



	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_VertexCount = vcount;

	ConstantMaterial material; //物体の質感



	SDL_DestroyWindow(win);



	scDesc.SampleDesc.Quality = 0;



void CD3DTest::Release()

			{

	return;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		SDL_Delay(1000);

{

	txDesc.ArraySize = 1;

			default:

	if (FAILED(hr))

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	WORD   icount = indexList.size();

		return 1;

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	SDL_DestroyRenderer(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4         eyePos;   //視点座標

				break;

		KEY_PRESS_SURFACE_TOTAL

	m_pDepthStencilView = NULL;

		if (!reader.Error().empty())



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pSwapChain);

			for (size_t v = 0; v < fv; v++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//vector<WORD> index_t;

		SDL_Delay(1000);

		return hr;

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	for (int i = 0; i < vcount; i++)

		&m_pDevice,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





		if (!ret)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	Release();



			}

	delete[] pIList;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		pLevels,

	//ビューポート設定

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	HRESULT              hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		if (e.type == SDL_QUIT)

			{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyWindow(win);

		pVList[i] = vertexlist[i];

				tinyobj::real_t ty =

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#ifdef _DEBUG

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pTextureView = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

};

	{





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			// Loop over vertices in the face.

		size_t index_offset = 0;  // インデントのオフセット

	delete[] pIList;

			case SDLK_DOWN:



	txDesc.ArraySize = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	::ZeroMemory(&scDesc, sizeof(scDesc));



	//頂点レイアウト作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	//First we need to start up SDL, and make sure it went ok

	m_VertexCount = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_FreeSurface(suf);

	//First we need to start up SDL, and make sure it went ok

	cbDesc.StructureByteStride = 0;



	ID3D11Texture2D* pBackBuffer;

		{

		NULL,

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_DOWN:

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.ParseFromFile(inputfile, reader_config))

{

	D3D11_SAMPLER_DESC smpDesc;



		size_t index_offset = 0;

	XMFLOAT4         eyePos;   //視点座標

	vbDesc.MiscFlags = 0;

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftY = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pImmediateContext);

#ifdef _DEBUG

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	/*

{

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				WORD index = idx.vertex_index;

	irData.SysMemPitch = 0;

	m_pPixelShader = NULL;



	HRESULT              hr;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.MiscFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

HRESULT CD3DTest::Create(HWND hwnd)





#include <SDL.h>

		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	::GetClientRect(hwnd, &rect);

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		{

		KEY_PRESS_SURFACE_RIGHT,



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		// Loop over faces(polygon)



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.MinDepth = 0.0f;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pDevice,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#endif

	vector<WORD> indexList;



	pBackBuffer->Release();



	if (FAILED(hr))

	{

		KEY_PRESS_SURFACE_TOTAL

	return 0;

	WORD* pIList = new WORD[icount];

	D3D_FEATURE_LEVEL level;

	{

	//ピクセルシェーダー生成

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

 */

	{



	cbDesc.StructureByteStride = 0;

	m_Viewport.MaxDepth = 1.0f;

		&attrib,

};

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

				break;

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_FreeSurface(bmp);

}



}

};

	m_pImmediateContext = NULL;

	//ビューポート設定

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	vector<Vertex> vertexlist;

	if (!reader.Warning().empty())

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





struct ConstantMatrixBuffer {

	{



	for (const auto& shape : shapes)

	scDesc.OutputWindow = hwnd;





		KEY_PRESS_SURFACE_UP,

}





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.MiscFlags = 0;



	scDesc.Windowed = TRUE;





using std::cout; using std::endl;

		return hr;

	SAFE_RELEASE(m_pSwapChain);

	vector<WORD> indexList;

				break;

	//First we need to start up SDL, and make sure it went ok



	m_pDepthStencilView = NULL;

		return hr;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float    fov = XMConvertToRadians(20.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	auto& attrib = reader.GetAttrib();



	//頂点レイアウト作成

				break;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;



	}

};

 * Lesson 1: Hello World!

				WORD index = idx.vertex_index;



		R"(cube.obj)");

		&shapes,

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	m_VertexCount = vcount;



	SAFE_RELEASE(m_pLightBuffer);

	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

	m_pVertexBuffer = NULL;

	delete[] pIList;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pVertexShader = NULL;



void CD3DTest::Render()

	XMFLOAT4X4 projection;

int main(int, char**)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;

	vector<Vertex> vertexlist;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	vector<WORD> indexList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pMatrixBuffer = NULL;



		&materials,

	m_IndexCount = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	{

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Event e;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 specular;          //反射(r,g,b)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





			}



		exit(1);

	enum KeyPressSurfaces

	vrData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty =



	WORD* pIList = new WORD[icount];

	return 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.ArraySize = 1;

	cbDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;

		1,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SUBRESOURCE_DATA vrData;

	LoadObj(vertexlist, indexList);

		// Loop over faces(polygon)



	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

	m_pDepthStencilTexture = NULL;

		return 1;

	SAFE_RELEASE(m_pTextureView);

#include <iostream>







	//深度ステンシルバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.StructureByteStride = 0;

	//頂点バッファ作成

	txDesc.SampleDesc.Quality = 0;

	if (!reader.Warning().empty())

}

struct ConstantLightBuffer {

				WORD index = idx.vertex_index;

	//ビューポート設定

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		pVList[i] = vertexlist[i];

struct ConstantMaterial {



}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t tx =

		{

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);

	XMFLOAT4         eyePos;   //視点座標

	while (SDL_PollEvent(&e) != 0)



	m_pDepthStencilTexture = NULL;

	std::string error;

	dsDesc.Texture2D.MipSlice = 0;

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDevice);



				break;

		return hr;

		return hr;

	int     vcount = vertexlist.size();

		&level,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		// Loop over faces(polygon)

{

	while (SDL_PollEvent(&e) != 0)



	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		//User presses a key



	ibDesc.ByteWidth = sizeof(WORD) * icount;

#define TINYOBJLOADER_IMPLEMENTATION

		R"(cube.obj)");





			exit(1);

		&attrib,

	scDesc.BufferDesc.Height = rect.Height();

	delete[] pIList;



				break;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftX = 0;

	m_Viewport.MinDepth = 0.0f;



				indexlist.push_back(index);

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			for (size_t v = 0; v < num_vertices; v++)

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    farZ = 100.0f;

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



		return 1;

	std::string error;



	cbDesc.MiscFlags = 0;

	Release();

	SAFE_RELEASE(m_pIndexBuffer);

	UINT offsets = 0;

	txDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pDepthStencilView);



	{

				break;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));



		return hr;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	HRESULT              hr;

	SAFE_RELEASE(m_pSampler);

	ibDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Release();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

}

		{





	//ピクセルシェーダー生成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





struct ConstantMatrixBuffer {

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&attrib,

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{





	scDesc.Windowed = TRUE;

	m_pVertexBuffer = NULL;

	//頂点レイアウト作成

	reader_config.mtl_search_path = "./"; // Path to material files





		}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				WORD index = idx.vertex_index;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

/*



		size_t index_offset = 0;  // インデントのオフセット



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		if (!reader.Error().empty())

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

HRESULT CD3DTest::Create(HWND hwnd)

};

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		return hr;

	HRESULT              hr;

	tinyobj::ObjReader reader;

void CD3DTest::Release()

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	m_VertexCount = vcount;

	if (!reader.Warning().empty())

	m_pSampler = NULL;

			default:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pVertexBuffer = NULL;

		&m_pDevice,

}

			default:

	m_pSwapChain = NULL;

		return hr;



	m_Viewport.MinDepth = 0.0f;

	m_Viewport.MaxDepth = 1.0f;

	SDL_FreeSurface(bmp);

			default:

	return 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pVertexShader);

	m_pPixelShader = NULL;

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pDepthStencilView);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ConstantMaterial material; //物体の質感



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



			switch (e.key.keysym.sym)



		1,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_DOWN:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ConstantMaterial material; //物体の質感

	delete[] pIList;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	delete[] pIList;



	{

	//テクスチャ読み込み

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Viewport.TopLeftX = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			exit(1);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

		&m_pSwapChain,

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	SAFE_RELEASE(m_pSwapChain);

		&materials,



{

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.ArraySize = 1;

		&attrib,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



}





	float    fov = XMConvertToRadians(20.0f);

	//ピクセルシェーダー生成

	if (!error.empty())

	XMFLOAT4 pos;               //座標(x,y,z)





	WORD   icount = indexList.size();



	{

struct ConstantLight {

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexShader = NULL;

	auto& shapes = reader.GetShapes();



		//User presses a key

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

/*

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Create Index

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantMaterial {

				vertex.push_back(vertex_tmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMFLOAT4         eyePos;   //視点座標

{

	if (!error.empty())

	return hr;

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 ambient;           //環境(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.MinDepth = 0.0f;



	m_pVertexBuffer = NULL;





		return hr;

	D3D11_BUFFER_DESC vbDesc;



		pLevels,

	SDL_DestroyTexture(tex);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		else if (e.type == SDL_KEYDOWN)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//インデックスバッファ作成

		NULL,

int SEGMENT = 36;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

 */

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//定数バッファ作成

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



}
	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderClear(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pDepthStencilView);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//ピクセルシェーダー生成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	dsDesc.Format = txDesc.Format;

	txDesc.MiscFlags = 0;

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))



	//ビューポート設定

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.ParseFromFile(inputfile, reader_config))

		else if (e.type == SDL_KEYDOWN)

		&m_pSwapChain,

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;



	//定数バッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);



};

	auto& attrib = reader.GetAttrib();

#include "DirectXManager.h"

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pLightBuffer);

		pIList[j] = indexList[j];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	LoadObj(vertexlist, indexList);

	std::string error;

		&m_pSwapChain,

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pPixelShader);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;





	cbDesc.StructureByteStride = 0;





	for (int j = 0; j < icount; j++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



{

	m_Viewport.TopLeftX = 0;

	scDesc.OutputWindow = hwnd;

	{

	SAFE_RELEASE(m_pIndexBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	tinyobj::ObjReader reader;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_UP,

{

				indexlist.push_back(index);

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];









{



	{



	dsDesc.Texture2D.MipSlice = 0;

	ConstantMatrixBuffer cmb;

				break;

	{

	CRect                rect;

{

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	m_VertexCount = 0;

	vbDesc.MiscFlags = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

	m_pLightBuffer = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderPresent(ren);





	txDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.SysMemSlicePitch = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	m_pVertexBuffer = NULL;

			index_offset += fv;

	if (m_pImmediateContext)

	if (FAILED(hr))





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	Vertex* pVList = new Vertex[vcount];

	//定数バッファ作成

			case SDLK_DOWN:

		1,

		&level,

		SDL_Delay(1000);

}

		SDL_RenderPresent(ren);



	auto& attrib = reader.GetAttrib();



	m_pDevice = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#ifdef _DEBUG

	m_pTexture = NULL;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		delete[] pVList;

			{

	if (FAILED(hr))

		flags,

	ConstantMatrixBuffer cmb;

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	m_pTexture = NULL;

	LoadObj(vertexlist, indexList);

	m_pDepthStencilTexture = NULL;

	//Clean up our objects and quit

	std::string imagePath = "hello.bmp";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	WORD   icount = indexList.size();

			}

		SDL_RenderPresent(ren);

	SDL_DestroyWindow(win);

	for (int i = 0; i < vcount; i++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

			default:



CD3DTest::CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

		R"(cube.obj)");

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderClear(ren);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		SDL_RenderPresent(ren);

				tinyobj::real_t tx =





	std::vector<tinyobj::shape_t> shapes;

	{

	m_pDevice = NULL;

		flags,

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&error,

				break;

	m_pDevice = NULL;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pInputLayout);

{

		return hr;

	return 0;

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		flags,

#ifdef _DEBUG

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext = NULL;

};

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	// Loop over shapes

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

	//ビューポート設定

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	CRect                rect;

		flags,

		// Loop over faces(polygon)





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	}*/



int SEGMENT = 36;

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

 * Lesson 1: Hello World!

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				vertex.push_back(vertex_tmp);

			index_offset += fv;

	SDL_FreeSurface(bmp);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	CRect                rect;


