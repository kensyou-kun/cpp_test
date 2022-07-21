

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	SAFE_RELEASE(m_pRenderTargetView);

struct ConstantMatrixBuffer {

			}

	WORD   icount = indexList.size();

	bool ret = tinyobj::LoadObj(



int SEGMENT = 36;



	//ビューポート設定

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pPixelShader = NULL;



		KEY_PRESS_SURFACE_LEFT,

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.BufferCount = 1;

	m_Viewport.MinDepth = 0.0f;

	D3D11_BUFFER_DESC ibDesc;

	txDesc.Width = rect.Width();



				tinyobj::real_t tx =

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	scDesc.BufferCount = 1;

{



	m_Viewport.Width = (FLOAT)rect.Width();

};

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	HRESULT              hr;



	SAFE_RELEASE(m_pTextureView);

	ConstantMatrixBuffer cmb;

		return hr;

	tinyobj::attrib_t attrib;



};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&m_pSwapChain,

	m_Viewport.Height = (FLOAT)rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;









		{

		&m_pImmediateContext);

	}

}

				indexlist.push_back(idx.vertex_index);

#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	{





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pPixelShader = NULL;



	}

		&error,

	D3D11_SUBRESOURCE_DATA vrData;

int main(int, char**)

	if (FAILED(hr))



	scDesc.OutputWindow = hwnd;

	if (!reader.Warning().empty())

		cout << "SDL_INIT_ERROR" << endl;

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    nearZ = 0.1f;

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4X4 world;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		KEY_PRESS_SURFACE_DEFAULT,

 * Lesson 1: Hello World!

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	pBackBuffer->Release();



			index_offset += num_vertices;



	//頂点レイアウト作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	if (!reader.ParseFromFile(inputfile, reader_config))

			switch (e.key.keysym.sym)



	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.Width = (FLOAT)rect.Width();

{





	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		if (!reader.Error().empty())

	if (FAILED(hr))

	//Clean up our objects and quit

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD* pIList = new WORD[icount];

	ibDesc.MiscFlags = 0;

	m_VertexCount = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

};

CD3DTest::~CD3DTest()

		&m_pImmediateContext);

	//Create Index

	m_VertexCount = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





		cout << "SDL_INIT_ERROR" << endl;



		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	::GetClientRect(hwnd, &rect);

	DXGI_SWAP_CHAIN_DESC scDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;



	Release();

{

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

#ifdef _DEBUG

 */

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Height = rect.Height();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	delete[] pVList;



		&m_pImmediateContext);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

		return hr;



		SDL_Delay(1000);

	SAFE_RELEASE(m_pTexture);

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_UP,

	LoadObj(vertexlist, indexList);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&m_pDevice,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		pLevels,

			// Loop over vertices in the face.

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				break;



	//テクスチャ読み込み

			exit(1);

	if (FAILED(hr))

	//Create Index

void CD3DTest::Render()

			exit(1);

	SDL_DestroyWindow(win);

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyRenderer(ren);

	CRect                rect;

			//Select surfaces based on key press

	txDesc.Height = rect.Height();



		if (!ret)

	vbDesc.StructureByteStride = 0;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantLightBuffer clb;

	//Create Index

using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

/*

};

	XMFLOAT4 attenuate;         //減衰(a,b,c)

int main(int, char**)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::ObjReader reader;

	for (int j = 0; j < icount; j++)

	}

			{

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.StructureByteStride = 0;

	enum KeyPressSurfaces

		flags,









	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//テクスチャ読み込み

	m_pSampler = NULL;



	m_VertexCount = vcount;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				vertex.push_back(vertex_tmp);





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.SysMemPitch = 0;

	if (FAILED(hr))

			// Loop over vertices in the face.



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexShader);



		return hr;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4X4 view;

	if (FAILED(hr))

			}

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pLightBuffer);

	vrData.SysMemPitch = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	Release();

	}

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#include <iostream>

	scDesc.BufferDesc.Width = rect.Width();

		{

	SDL_DestroyWindow(win);

	m_pDevice = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				vertex.push_back(vertex_tmp);

	return;

		cout << "SDL_INIT_ERROR" << endl;



	//頂点レイアウト作成

				// access to vertex

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		return 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.MipLevels = 1;

	m_pTexture = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pSwapChain = NULL;



void CD3DTest::Render()

	//定数バッファ作成

	m_VertexCount = 0;

		return hr;

		return hr;

	/*

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

int main(int, char**)

	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pSampler);



	};

	D3D11_SUBRESOURCE_DATA vrData;

		&shapes,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_DestroyTexture(tex);



				vertex.push_back(vertex_tmp);

	return 0;

	}

	delete[] pVList;

}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t tx =

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	SDL_DestroyTexture(tex);

			{

	pBackBuffer->Release();





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	XMFLOAT4X4 view;

	{

				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//Create Index

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//ビューポート設定

	}



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





		&attrib,

	//頂点バッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;





	SDL_DestroyWindow(win);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	int     vcount = vertexlist.size();

	SDL_Quit();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pSwapChain = NULL;

			index_offset += fv;



	m_VertexCount = vcount;

HRESULT CD3DTest::Create(HWND hwnd)

	vector<WORD> indexList;

			//Select surfaces based on key press

		return hr;

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMFLOAT4X4 view;

		return hr;

		//User presses a key

#include <SDL.h>

	ID3D11Texture2D* pBackBuffer;

int SEGMENT = 36;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	SAFE_RELEASE(m_pRenderTargetView);

	//vector<Vertex> vertex_t;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	SDL_DestroyRenderer(ren);

	{

	{

	std::vector<tinyobj::material_t> materials;

	m_pSwapChain->Present(0, 0);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

			// Loop over vertices in the face.

	std::vector<tinyobj::material_t> materials;

	cbDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.MiscFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

				indexlist.push_back(index);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点シェーダー生成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SDL_FreeSurface(suf);

	//テクスチャ読み込み

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_IndexCount = icount;

	m_VertexCount = vcount;

	if (FAILED(hr))

			break;



	if (FAILED(hr))



	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pTextureView);



	SDL_DestroyRenderer(ren);





	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pSampler);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		pVList[i] = vertexlist[i];

	//Create Index





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.SampleDesc.Count = 1;

		&level,

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//深度ステンシルバッファ作成



	m_pVertexBuffer = NULL;

	SDL_FreeSurface(bmp);

	//ピクセルシェーダー生成

int main(int, char**)



	}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_DOWN:



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		size_t index_offset = 0;

	auto& materials = reader.GetMaterials();

			for (size_t v = 0; v < fv; v++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

};

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	auto& shapes = reader.GetShapes();





	m_pDepthStencilView = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	irData.pSysMem = &pIList[0];

HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_TEXTURE2D_DESC txDesc;

	//ピクセルシェーダー生成

	if (FAILED(hr))

				WORD index = idx.vertex_index;



	{

	{

	bool ret = tinyobj::LoadObj(

	tinyobj::attrib_t attrib;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&m_pImmediateContext);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.ArraySize = 1;



	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();



	ibDesc.MiscFlags = 0;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



using std::cout; using std::endl;

		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Quit();

	{

		SDL_Delay(1000);

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	return 0;

		KEY_PRESS_SURFACE_LEFT,

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	enum KeyPressSurfaces

	if (!error.empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		{

	if (FAILED(hr))

			//Select surfaces based on key press

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&shapes,



	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyRenderer(ren);

#include <SDL.h>

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

		SDL_RenderCopy(ren, tex, NULL, NULL);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	XMFLOAT4X4 projection;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

 */

	m_Viewport.Height = (FLOAT)rect.Height();

			index_offset += fv;





	SAFE_RELEASE(m_pInputLayout);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (!reader.Warning().empty())

			for (size_t v = 0; v < num_vertices; v++)

	m_pDepthStencilTexture = NULL;

	SDL_DestroyTexture(tex);

	//Clean up our objects and quit

	if (FAILED(hr))

		//User presses a key





	cbDesc.CPUAccessFlags = 0;

			}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& attrib = reader.GetAttrib();





		D3D11_SDK_VERSION,

	{

	m_Angle += XMConvertToRadians(1.0f);

		{

	{

	m_pSwapChain->Present(0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&scDesc,

		KEY_PRESS_SURFACE_DEFAULT,

	m_pSampler = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return 1;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&m_pImmediateContext);

	txDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;

}

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.MaxDepth = 1.0f;

	auto& materials = reader.GetMaterials();

};

	//インデックスバッファ作成



	txDesc.Height = rect.Height();

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4         eyePos;   //視点座標

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_FreeSurface(bmp);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	tinyobj::ObjReader reader;

		}

	m_Viewport.MaxDepth = 1.0f;

			{

		flags,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;





		return hr;

	m_VertexCount = vcount;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&materials,

		size_t index_offset = 0;  // インデントのオフセット

	{



			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

#ifdef _DEBUG



		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#endif

			case SDLK_RIGHT:



	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			index_offset += fv;



		return hr;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



#include "DirectXManager.h"

	txDesc.SampleDesc.Quality = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&scDesc,

{



		&level,

	{



	SAFE_RELEASE(m_pSwapChain);

	ConstantMatrixBuffer cmb;

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.MipLevels = 1;

		pVList[i] = vertexlist[i];

	txDesc.SampleDesc.Count = 1;

	m_pSwapChain->Present(0, 0);

		SDL_RenderClear(ren);

		&attrib,

				// access to vertex



	m_VertexCount = vcount;

};

				break;

	if (FAILED(hr))

	//インデックスバッファ作成

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

			case SDLK_LEFT:



	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				vertex.push_back(vertex_tmp);

	std::string error;

	//Key press surfaces constants



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	//頂点レイアウト作成

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Clean up our objects and quit

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;





	m_Viewport.TopLeftY = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&m_pImmediateContext);

		if (!reader.Error().empty())



				indexlist.push_back(index);



	if (!reader.Warning().empty())

			index_offset += num_vertices;

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t tx =

	D3D11_BUFFER_DESC ibDesc;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



}



		SDL_RenderCopy(ren, tex, NULL, NULL);

		cout << "SDL_INIT_ERROR" << endl;

			case SDLK_RIGHT:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



			{

		R"(cube.obj)");

		pIList[j] = indexList[j];

	SDL_Quit();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,





			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pMatrixBuffer = NULL;

	{

	std::vector<tinyobj::shape_t> shapes;

	::GetClientRect(hwnd, &rect);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

	float    farZ = 100.0f;

	delete[] pVList;

				WORD index = idx.vertex_index;



	scDesc.BufferDesc.Width = rect.Width();



	{



			case SDLK_RIGHT:

	m_pSwapChain = NULL;

	}

	vrData.SysMemPitch = 0;

	Vertex* pVList = new Vertex[vcount];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&materials,

	m_pImmediateContext = NULL;

int main(int, char**)

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		pIList[j] = indexList[j];

		delete[] pVList;

	m_pDevice = NULL;

		return 1;



	if (!reader.Warning().empty())

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_pDepthStencilView = NULL;



	vector<Vertex> vertexlist;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

			}

	D3D_FEATURE_LEVEL level;

	m_pPixelShader = NULL;

	m_pVertexShader = NULL;



	SDL_DestroyTexture(tex);









		return hr;

			case SDLK_RIGHT:

		if (!ret)

	ConstantLightBuffer clb;





void CD3DTest::Release()

			case SDLK_RIGHT:

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vbDesc.CPUAccessFlags = 0;

	txDesc.ArraySize = 1;

			}

	delete[] pVList;



		delete[] pVList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

	txDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_UP,

	}

	irData.SysMemSlicePitch = 0;



	if (!error.empty())

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::vector<tinyobj::material_t> materials;

		pIList[j] = indexList[j];

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.BufferCount = 1;

	m_pRenderTargetView = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	};

	m_pSampler = NULL;



	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	irData.SysMemSlicePitch = 0;

				break;

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

 */





	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_Delay(1000);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	auto& materials = reader.GetMaterials();

				tinyobj::real_t tx =

}

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

}



	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	dsDesc.Format = txDesc.Format;

	D3D11_TEXTURE2D_DESC txDesc;

	}

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pVertexBuffer = NULL;

	Release();

	D3D11_BUFFER_DESC cbDesc;

	m_pMatrixBuffer = NULL;

	//定数バッファ作成





	m_pDepthStencilView = NULL;

		&shapes,

	{

				break;



		&m_pDevice,

	SAFE_RELEASE(m_pPixelShader);



	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyTexture(tex);

	m_pVertexShader = NULL;



	std::string inputfile = "test.obj";

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	HRESULT              hr;

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Event e;

	m_pSwapChain->Present(0, 0);

		&attrib,





	WORD   icount = indexList.size();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pIndexBuffer);

	UINT flags = 0;



		KEY_PRESS_SURFACE_RIGHT,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}





	if (FAILED(hr))



	dsDesc.Format = txDesc.Format;

	SDL_DestroyTexture(tex);

	m_pDevice = NULL;

	m_pIndexBuffer = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pIndexBuffer = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	bool ret = tinyobj::LoadObj(

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	cbDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		{

	}

	cbDesc.StructureByteStride = 0;

		return hr;

 */

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vrData.pSysMem = &pVList[0];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	//vector<WORD> index_t;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pInputLayout);

	//vector<Vertex> vertex_t;

	}



			case SDLK_DOWN:

	//vector<WORD> index_t;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return 0;

	SAFE_RELEASE(m_pLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemPitch = 0;

	SDL_DestroyRenderer(ren);

		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pDepthStencilView);

				WORD index = idx.vertex_index;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//ピクセルシェーダー生成

	m_Viewport.Width = (FLOAT)rect.Width();

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	SAFE_RELEASE(m_pVertexShader);

	D3D11_TEXTURE2D_DESC txDesc;

	std::vector<tinyobj::shape_t> shapes;

				break;

		// Loop over faces(polygon)

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pPixelShader);

		//User requests quit

		}

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

};

CD3DTest::~CD3DTest()

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

{

	D3D11_BUFFER_DESC ibDesc;

		D3D11_SDK_VERSION,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.Height = rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		else if (e.type == SDL_KEYDOWN)



	if (FAILED(hr))

				break;

		return hr;

	irData.SysMemPitch = 0;

	dsDesc.Format = txDesc.Format;

		&scDesc,



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

#include <iostream>

	vrData.SysMemPitch = 0;

	ibDesc.StructureByteStride = 0;



				indexlist.push_back(index);

	SAFE_RELEASE(m_pVertexShader);

	UINT strides = sizeof(Vertex);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	//vector<WORD> index_t;

	//深度ステンシルバッファ作成

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pDepthStencilView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

void CD3DTest::Render()

		SDL_RenderPresent(ren);

	for (const auto& shape : shapes)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	pBackBuffer->Release();

	{

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



			case SDLK_DOWN:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	irData.pSysMem = &pIList[0];

	}

int main(int, char**)

		SDL_RenderClear(ren);

				indexlist.push_back(index);





		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	//テクスチャ読み込み

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		1,

	}

	SAFE_RELEASE(m_pInputLayout);

	m_IndexCount = icount;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pTextureView = NULL;

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pSwapChain);

	};

{



	m_pVertexBuffer = NULL;

	WORD   icount = indexList.size();

	irData.SysMemPitch = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))



	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		return hr;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_Viewport.MaxDepth = 1.0f;

	bool ret = tinyobj::LoadObj(

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::~CD3DTest()

		return hr;



		return hr;

	vector<Vertex> vertexlist;

	if (FAILED(hr))



	SDL_Quit();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&m_pDevice,

	DXGI_SWAP_CHAIN_DESC scDesc;

	for (int i = 0; i < 3; i++)

int SEGMENT = 36;

	SDL_DestroyWindow(win);

	UINT offsets = 0;

		if (!ret)

	UINT offsets = 0;

	}

{

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	LoadObj(vertexlist, indexList);

{

	reader_config.mtl_search_path = "./"; // Path to material files



		SDL_Delay(1000);

			}

		KEY_PRESS_SURFACE_RIGHT,





	{

	if (FAILED(hr))

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	std::string imagePath = "hello.bmp";

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



struct ConstantLight {



	vrData.pSysMem = &pVList[0];



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	delete[] pVList;

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}



using std::cout; using std::endl;

	if (FAILED(hr))

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	while (SDL_PollEvent(&e) != 0)

				indexlist.push_back(index);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&materials,



	SAFE_RELEASE(m_pLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			for (size_t v = 0; v < fv; v++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.SampleDesc.Count = 1;

#include <iostream>

	{

	cbDesc.CPUAccessFlags = 0;

		NULL,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_UP,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexShader);

 * Lesson 1: Hello World!

		SDL_RenderPresent(ren);



	{

	tinyobj::attrib_t attrib;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





	}





	XMFLOAT4X4 world;



	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

 * Lesson 1: Hello World!

		return 1;



{

	//First we need to start up SDL, and make sure it went ok

	{

 */

};

		1,

	ConstantMaterial material; //物体の質感

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//定数バッファ作成



	XMFLOAT4 pos;               //座標(x,y,z)

			}

		return 1;

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	//インデックスバッファ作成

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	float    fov = XMConvertToRadians(20.0f);

	D3D11_SUBRESOURCE_DATA irData;



	{

	enum KeyPressSurfaces

	vrData.SysMemPitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyWindow(win);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			index_offset += num_vertices;

{







	::GetClientRect(hwnd, &rect);

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			case SDLK_UP:

	SDL_Quit();



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_Delay(1000);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;







	m_pIndexBuffer = NULL;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	/*

	}

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	if (FAILED(hr))

			{

 * Lesson 1: Hello World!



	txDesc.CPUAccessFlags = 0;

			default:

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}

	XMFLOAT4 pos;               //座標(x,y,z)

		KEY_PRESS_SURFACE_UP,

		{

			for (size_t v = 0; v < fv; v++)

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_UP,

	//Key press surfaces constants



 * Lesson 1: Hello World!

	}



	Vertex* pVList = new Vertex[vcount];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	m_pPixelShader = NULL;

	std::string inputfile = "test.obj";



			switch (e.key.keysym.sym)

CD3DTest::CD3DTest()

	UINT offsets = 0;

	{

			break;

	//ビューポート設定

	//インデックスバッファ作成

	for (int j = 0; j < icount; j++)

	for (size_t s = 0; s < shapes.size(); s++)

	vrData.SysMemSlicePitch = 0;

			}



	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DOWN,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_DEFAULT,

	{

			case SDLK_DOWN:

	//vector<Vertex> vertex_t;

	}

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	Release();

		return hr;



		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			case SDLK_LEFT:

	XMFLOAT4         eyePos;   //視点座標

	SDL_Quit();

		return hr;



	txDesc.Width = rect.Width();

	m_pPixelShader = NULL;



	for (int j = 0; j < icount; j++)

};





struct ConstantMatrixBuffer {



	Release();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	D3D11_BUFFER_DESC vbDesc;

			index_offset += num_vertices;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

#include <iostream>



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//頂点シェーダー生成

}

			case SDLK_DOWN:

	float    fov = XMConvertToRadians(20.0f);

{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

			for (size_t v = 0; v < fv; v++)



				WORD index = idx.vertex_index;

		return hr;



	m_pInputLayout = NULL;

	txDesc.MiscFlags = 0;

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	while (SDL_PollEvent(&e) != 0)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&attrib,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pMatrixBuffer);

	auto& materials = reader.GetMaterials();

struct ConstantMaterial {

	scDesc.SampleDesc.Count = 1;

	m_Viewport.Width = (FLOAT)rect.Width();



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		exit(1);

	return hr;

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



int SEGMENT = 36;

	XMStoreFloat4(&clb.ambient, lightAmbient);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4X4 view;

	XMFLOAT4X4 projection;

			exit(1);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	if (FAILED(hr))

struct ConstantMaterial {

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Angle += XMConvertToRadians(1.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

		1,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vector<WORD> indexList;

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	}



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	std::string imagePath = "hello.bmp";

	txDesc.MiscFlags = 0;



	}

	SDL_Event e;

				// access to vertex

		KEY_PRESS_SURFACE_UP,

	while (SDL_PollEvent(&e) != 0)

}

			case SDLK_DOWN:

		}

	D3D11_SUBRESOURCE_DATA vrData;



	float    farZ = 100.0f;

#include <SDL.h>

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//頂点レイアウト作成

				break;

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	XMFLOAT4X4 projection;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_DestroyTexture(tex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//ビューポート設定

#include <iostream>

	SDL_DestroyWindow(win);

	cbDesc.StructureByteStride = 0;

			//Select surfaces based on key press



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))



	{

	for (size_t s = 0; s < shapes.size(); s++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			index_offset += fv;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	m_IndexCount = 0;

	int     vcount = vertexlist.size();



				WORD index = idx.vertex_index;

void CD3DTest::Render()



}

			exit(1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				break;

}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pRenderTargetView);

	for (size_t s = 0; s < shapes.size(); s++)

		if (e.type == SDL_QUIT)



 * Lesson 1: Hello World!

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//ビューポート設定

		return hr;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	// Loop over shapes

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

	if (FAILED(hr))



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		D3D11_SDK_VERSION,



		&m_pImmediateContext);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//Create Index

	SAFE_RELEASE(m_pDepthStencilView);

	tinyobj::ObjReader reader;

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pSwapChain,

	bool ret = tinyobj::LoadObj(

	std::string error;

		{

	UINT strides = sizeof(Vertex);

{

	return 0;

	for (size_t s = 0; s < shapes.size(); s++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		flags,

		SDL_RenderPresent(ren);

		pLevels,

		KEY_PRESS_SURFACE_LEFT,



	m_pSampler = NULL;

	cbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pTextureView);

	m_pIndexBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	if (m_pImmediateContext)

		KEY_PRESS_SURFACE_LEFT,

	if (!error.empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//Create Index



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}*/



	m_pDevice = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			case SDLK_UP:

};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.ambient, lightAmbient);





		}

	m_pTextureView = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	HRESULT              hr;

	txDesc.SampleDesc.Count = 1;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4 pos;               //座標(x,y,z)

	//Clean up our objects and quit

		{



	SAFE_RELEASE(m_pRenderTargetView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

	};

	for (int j = 0; j < icount; j++)

				tinyobj::real_t tx =

		{



	SDL_DestroyTexture(tex);

 */

			//Select surfaces based on key press

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	}*/

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	if (FAILED(hr))



	XMFLOAT4         eyePos;   //視点座標

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_RenderPresent(ren);

struct ConstantLightBuffer {



	std::string imagePath = "hello.bmp";

			{

				indexlist.push_back(index);

	auto& shapes = reader.GetShapes();



		return hr;

	WORD* pIList = new WORD[icount];

		}



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		SDL_RenderPresent(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

			// Loop over vertices in the face.



	vector<WORD> indexList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC ibDesc;

	SDL_FreeSurface(bmp);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pInputLayout);

			for (size_t v = 0; v < num_vertices; v++)

#include <SDL.h>

	{

	m_VertexCount = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

				break;

	txDesc.SampleDesc.Quality = 0;

#endif

	m_pDevice = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.pSysMem = &pIList[0];

	txDesc.SampleDesc.Quality = 0;

{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}

	std::string inputfile = "test.obj";

		m_pImmediateContext->ClearState();

	UINT strides = sizeof(Vertex);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	txDesc.MipLevels = 1;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&scDesc,

	pBackBuffer->Release();



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string inputfile = "test.obj";

		SDL_RenderPresent(ren);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{



}

	HRESULT              hr;

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSwapChain = NULL;

	m_VertexCount = vcount;

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_DestroyRenderer(ren);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	SDL_FreeSurface(suf);

	Vertex* pVList = new Vertex[vcount];

	// Loop over shapes

		}

	Release();



	//テクスチャ読み込み

				WORD index = idx.vertex_index;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.ambient, lightAmbient);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ConstantLight    pntLight; //点光源

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pDepthStencilTexture);

	}

	}

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_RenderPresent(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



}

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	Release();

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_VertexCount = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	CRect                rect;



	return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			exit(1);

	if (FAILED(hr))

	/*

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			exit(1);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ID3D11Texture2D* pBackBuffer;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//ピクセルシェーダー生成

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}*/

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			default:



	std::vector<tinyobj::shape_t> shapes;

	{





		{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pIndexBuffer = NULL;

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC vbDesc;

	txDesc.MiscFlags = 0;

/*



		SDL_Delay(1000);

				// access to vertex

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



{



	{

	return hr;



	m_pDepthStencilView = NULL;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	Vertex* pVList = new Vertex[vcount];

		{

		&shapes,

	ConstantLightBuffer clb;



{

	SAFE_RELEASE(m_pDepthStencilTexture);

			}

		SDL_Delay(1000);

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	m_pTextureView = NULL;

	//定数バッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pDevice = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilView = NULL;

	for (const auto& shape : shapes)

	m_pVertexBuffer = NULL;



	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pInputLayout);

	m_pTextureView = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	m_pLightBuffer = NULL;

		SDL_Delay(1000);

	scDesc.BufferCount = 1;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);



	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilView = NULL;

	D3D11_BUFFER_DESC cbDesc;

	// Loop over shapes

}

		if (!reader.Error().empty())

	m_pIndexBuffer = NULL;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	ibDesc.StructureByteStride = 0;

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_DEFAULT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

	enum KeyPressSurfaces

	m_pTexture = NULL;

		D3D11_SDK_VERSION,

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

#include <iostream>

}


	for (const auto& shape : shapes)

	m_Viewport.Width = (FLOAT)rect.Width();

	Release();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	}



	std::vector<tinyobj::shape_t> shapes;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{



	{

	//Clean up our objects and quit

	while (SDL_PollEvent(&e) != 0)

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.eyePos, eye);

	ID3D11Texture2D* pBackBuffer;

	{

	cbDesc.CPUAccessFlags = 0;

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	m_pDepthStencilView = NULL;

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemPitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.SampleDesc.Quality = 0;

	vrData.pSysMem = &pVList[0];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{





	D3D_FEATURE_LEVEL level;



	if (FAILED(hr))

void CD3DTest::Release()

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	float    farZ = 100.0f;

	auto& shapes = reader.GetShapes();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				vertex.push_back(vertex_tmp);



	WORD* pIList = new WORD[icount];



		}



 */

		if (!reader.Error().empty())

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	D3D11_SUBRESOURCE_DATA vrData;

	float    farZ = 100.0f;



	float    fov = XMConvertToRadians(20.0f);

	bool ret = tinyobj::LoadObj(

	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Count = 1;

	}

		return hr;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderPresent(ren);

	{

			int num_vertices = shape.mesh.num_face_vertices[f];



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

	XMFLOAT4X4 view;

		return 1;

		return hr;

	m_pDepthStencilView = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pTexture = NULL;

			//Select surfaces based on key press



	SAFE_RELEASE(m_pDepthStencilTexture);

	dsDesc.Format = txDesc.Format;

	float    farZ = 100.0f;

	if (FAILED(hr))



		if (!ret)

	bool ret = tinyobj::LoadObj(



		}



	tinyobj::ObjReader reader;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

			{



	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			// Loop over vertices in the face.



};



	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	}

			case SDLK_RIGHT:



	tinyobj::ObjReaderConfig reader_config;

	auto& materials = reader.GetMaterials();

HRESULT CD3DTest::Create(HWND hwnd)







				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//First we need to start up SDL, and make sure it went ok

		if (!ret)

	D3D11_TEXTURE2D_DESC txDesc;

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::ObjReaderConfig reader_config;

		//User presses a key

		return 1;

	}*/

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	tinyobj::ObjReader reader;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.StructureByteStride = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.CPUAccessFlags = 0;

		pLevels,

		{

struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			{

{

	CRect                rect;

	}

	SAFE_RELEASE(m_pLightBuffer);

				break;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

		exit(1);





	for (const auto& shape : shapes)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				WORD index = idx.vertex_index;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

		&m_pSwapChain,

	{

	CRect                rect;

		SDL_RenderClear(ren);

		// Loop over faces(polygon)



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		exit(1);

	if (FAILED(hr))





			}



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		//User requests quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Quit();

	tinyobj::ObjReader reader;

	{

	tinyobj::ObjReader reader;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	irData.SysMemSlicePitch = 0;

	}

	vector<WORD> indexList;

	tinyobj::ObjReader reader;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	for (int i = 0; i < vcount; i++)





	}



	txDesc.SampleDesc.Quality = 0;

	m_pSampler = NULL;

	if (FAILED(hr))

		if (!ret)

#include <SDL.h>

	m_IndexCount = 0;







	SDL_DestroyRenderer(ren);

	auto& shapes = reader.GetShapes();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&m_pSwapChain,



	m_Angle += XMConvertToRadians(1.0f);



		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				// access to vertex

	SAFE_RELEASE(m_pInputLayout);

		NULL,

	UINT flags = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		if (!ret)

	int     vcount = vertexlist.size();

		m_pImmediateContext->ClearState();

	//頂点バッファ作成

	m_VertexCount = 0;



CD3DTest::~CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (!reader.Warning().empty())

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_SAMPLER_DESC smpDesc;

/*

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pInputLayout = NULL;

void CD3DTest::Release()





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];







	if (FAILED(hr))

		//User requests quit

		// Loop over faces(polygon)



/*



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	//Create Index

	m_pSwapChain = NULL;

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.ArraySize = 1;

	XMFLOAT4X4 world;

	XMFLOAT4         eyePos;   //視点座標

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;







	}

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pIndexBuffer);

#endif

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	m_pVertexBuffer = NULL;

	{

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferDesc.Width = rect.Width();

				break;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		NULL,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();

			}

	D3D11_BUFFER_DESC ibDesc;

	auto& attrib = reader.GetAttrib();

	{

	{

	pBackBuffer->Release();

			{

}
	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	std::string inputfile = "test.obj";



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::ObjReaderConfig reader_config;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		D3D11_SDK_VERSION,

	{

		if (!ret)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL



	auto& attrib = reader.GetAttrib();



	m_pSampler = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Quit();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

	vbDesc.StructureByteStride = 0;

	WORD* pIList = new WORD[icount];

	std::string inputfile = "test.obj";

		&m_pSwapChain,

		if (!reader.Error().empty())

	txDesc.MipLevels = 1;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	pBackBuffer->Release();



	txDesc.ArraySize = 1;

}

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;

	}*/

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vector<Vertex> vertexlist;

	WORD* pIList = new WORD[icount];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;



	for (int i = 0; i < 3; i++)



		&level,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//Create Index





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





	SDL_DestroyTexture(tex);

		else if (e.type == SDL_KEYDOWN)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	return 0;

	for (int i = 0; i < 3; i++)

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	LoadObj(vertexlist, indexList);







	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	tinyobj::ObjReader reader;





	cbDesc.CPUAccessFlags = 0;

	ConstantLight    pntLight; //点光源

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	int     vcount = vertexlist.size();







			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t ty =

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyTexture(tex);



		KEY_PRESS_SURFACE_DOWN,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	for (int j = 0; j < icount; j++)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyRenderer(ren);

	ibDesc.CPUAccessFlags = 0;

			exit(1);

	scDesc.OutputWindow = hwnd;

	m_pTexture = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{



		&shapes,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	for (size_t s = 0; s < shapes.size(); s++)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	return hr;

		&materials,





		if (!reader.Error().empty())

				indexlist.push_back(index);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



#include <iostream>

		KEY_PRESS_SURFACE_DOWN,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	ConstantLightBuffer clb;

	m_pImmediateContext = NULL;

	XMFLOAT4X4 projection;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.Windowed = TRUE;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	::GetClientRect(hwnd, &rect);

	float    farZ = 100.0f;

		{

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	WORD* pIList = new WORD[icount];

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



int main(int, char**)







		return hr;



				break;

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



#define TINYOBJLOADER_IMPLEMENTATION

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

int main(int, char**)

{



	Release();



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

};

				break;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&error,



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pInputLayout);

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				break;

		KEY_PRESS_SURFACE_DOWN,

			}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				break;

	{

#include "DirectXManager.h"

	//Create Index

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	for (int i = 0; i < vcount; i++)

	m_pSwapChain->Present(0, 0);

		//User presses a key



	tinyobj::ObjReader reader;

#endif



	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			break;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		size_t index_offset = 0;  // インデントのオフセット







	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	if (!error.empty())

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&attrib,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	auto& materials = reader.GetMaterials();

	vector<WORD> indexList;

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{



	std::string error;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	::GetClientRect(hwnd, &rect);

	txDesc.CPUAccessFlags = 0;

	SDL_Quit();

		return hr;

using std::cout; using std::endl;

	//インデックスバッファ作成



#ifdef _DEBUG

	m_pRenderTargetView = NULL;

	for (const auto& shape : shapes)



			case SDLK_DOWN:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

int main(int, char**)

				WORD index = idx.vertex_index;

{

	m_pTexture = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}
	SDL_DestroyTexture(tex);

#include <SDL.h>

			default:



			for (size_t v = 0; v < num_vertices; v++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderPresent(ren);

struct ConstantMatrixBuffer {

		return 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	return 0;

	}

}

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.Windowed = TRUE;

#define TINYOBJLOADER_IMPLEMENTATION

struct ConstantMaterial {

};

	m_pIndexBuffer = NULL;

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		&error,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Render()



};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

				break;

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4         eyePos;   //視点座標

		&materials,

	LoadObj(vertexlist, indexList);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		return hr;

};

	for (int i = 0; i < 3; i++)

	XMFLOAT4X4 world;

	SDL_Quit();

		SDL_RenderPresent(ren);

				tinyobj::real_t ty =

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pIndexBuffer = NULL;

			case SDLK_DOWN:

	XMFLOAT4X4 projection;



	vector<WORD> indexList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		{



	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	while (SDL_PollEvent(&e) != 0)

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4         eyePos;   //視点座標

	dsDesc.Format = txDesc.Format;



	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pMatrixBuffer = NULL;

		SDL_RenderClear(ren);

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

		&scDesc,



	ConstantMaterial material; //物体の質感

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{



		&attrib,



};



	ConstantMaterial material; //物体の質感



	if (!reader.Warning().empty())

	m_pSampler = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Quit();

	Vertex* pVList = new Vertex[vcount];

CD3DTest::~CD3DTest()

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vbDesc.MiscFlags = 0;

	m_pVertexBuffer = NULL;



	ConstantMatrixBuffer cmb;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MiscFlags = 0;



	/*



		//User requests quit



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	UINT offsets = 0;

		if (e.type == SDL_QUIT)

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

			{

		SDL_RenderClear(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];







	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	auto& shapes = reader.GetShapes();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			case SDLK_DOWN:

	for (int j = 0; j < icount; j++)

void CD3DTest::Render()

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pDevice = NULL;





CD3DTest::CD3DTest()

	txDesc.Height = rect.Height();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

				WORD index = idx.vertex_index;

	ConstantLight    pntLight; //点光源

	vector<Vertex> vertexlist;

			{

	irData.SysMemSlicePitch = 0;

			// Loop over vertices in the face.





	if (m_pImmediateContext)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReaderConfig reader_config;

struct ConstantLight {

	cbDesc.MiscFlags = 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	m_IndexCount = 0;

	//Create Index

#endif

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	Vertex* pVList = new Vertex[vcount];

				break;



	D3D11_BUFFER_DESC cbDesc;

				break;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		NULL,

			case SDLK_DOWN:

		&m_pSwapChain,



	scDesc.SampleDesc.Quality = 0;

			case SDLK_RIGHT:

CD3DTest::CD3DTest()



	enum KeyPressSurfaces

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pSwapChain);

	};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		&error,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);

	dsDesc.Format = txDesc.Format;

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_FreeSurface(suf);

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//vector<WORD> index_t;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}



}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	scDesc.SampleDesc.Quality = 0;

	vector<WORD> indexList;

#ifdef _DEBUG

		return hr;

	//Clean up our objects and quit

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	WORD* pIList = new WORD[icount];



	if (m_pImmediateContext)

		1,

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantMaterial material; //物体の質感





	tinyobj::ObjReaderConfig reader_config;

	m_pSwapChain = NULL;







	WORD* pIList = new WORD[icount];

int main(int, char**)

	txDesc.SampleDesc.Count = 1;

	{

		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;

	{

		if (e.type == SDL_QUIT)

	SDL_Quit();

	return 0;





	m_pTexture = NULL;

	{

		1,

	SDL_DestroyRenderer(ren);

	ID3D11Texture2D* pBackBuffer;

struct ConstantMaterial {

		&attrib,

	m_IndexCount = icount;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







	auto& attrib = reader.GetAttrib();

int SEGMENT = 36;

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pInputLayout);

				break;

}

		}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		{

	scDesc.Windowed = TRUE;

struct ConstantLight {

struct ConstantMaterial {





		&error,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pTexture = NULL;

	XMFLOAT4X4 projection;

		return 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	float    farZ = 100.0f;

	//vector<WORD> index_t;

	}

	tinyobj::ObjReaderConfig reader_config;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& attrib = reader.GetAttrib();

	//Vertex* pVList = new Vertex[vcount];

	auto& shapes = reader.GetShapes();

{





	ibDesc.StructureByteStride = 0;

	{

			{

		return hr;

	// Loop over shapes

	vrData.pSysMem = &pVList[0];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	vector<Vertex> vertexlist;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	{

	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

};

		SDL_RenderClear(ren);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLight    pntLight; //点光源

			exit(1);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		return hr;

	m_pDevice = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

		exit(1);

		flags,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantMatrixBuffer cmb;

			case SDLK_RIGHT:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		&m_pSwapChain,

	cbDesc.StructureByteStride = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



{



	m_pTextureView = NULL;

		return hr;

	m_Viewport.TopLeftY = 0;

	SDL_Quit();





	}



		// Loop over faces(polygon)

	dsDesc.Texture2D.MipSlice = 0;

	scDesc.BufferDesc.Width = rect.Width();

			{

#endif

				WORD index = idx.vertex_index;



				indexlist.push_back(index);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	if (FAILED(hr))

		exit(1);

	}

	SAFE_RELEASE(m_pLightBuffer);

		&m_pImmediateContext);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	bool ret = tinyobj::LoadObj(

	return hr;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

 */

	if (m_pImmediateContext)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	::GetClientRect(hwnd, &rect);

	m_IndexCount = 0;

	vector<WORD> indexList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	m_pTexture = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t ty =

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	txDesc.Height = rect.Height();

	}



	for (size_t s = 0; s < shapes.size(); s++)

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	float    nearZ = 0.1f;

	if (FAILED(hr))

void CD3DTest::Release()

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			index_offset += fv;

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	bool ret = tinyobj::LoadObj(

			case SDLK_UP:

	{

	Vertex* pVList = new Vertex[vcount];

	m_VertexCount = 0;

	irData.pSysMem = &pIList[0];

	ConstantMatrixBuffer cmb;

	txDesc.ArraySize = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)



		D3D11_SDK_VERSION,

	std::string imagePath = "hello.bmp";

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}



			// Loop over vertices in the face.

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&error,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

int main(int, char**)

}


		KEY_PRESS_SURFACE_UP,

	m_pDepthStencilTexture = NULL;

#include <iostream>

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	XMStoreFloat4(&clb.ambient, lightAmbient);



	//Key press surfaces constants

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

};

	::ZeroMemory(&scDesc, sizeof(scDesc));





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_BUFFER_DESC ibDesc;

	delete[] pVList;

	SAFE_RELEASE(m_pTextureView);

	return;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;



	if (!reader.ParseFromFile(inputfile, reader_config))







	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	Release();



		KEY_PRESS_SURFACE_RIGHT,



	std::string inputfile = "test.obj";

	cbDesc.CPUAccessFlags = 0;

		delete[] pIList;

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		pLevels,

	}

	ConstantMaterial material; //物体の質感

		else if (e.type == SDL_KEYDOWN)

}

	SDL_Event e;

	scDesc.SampleDesc.Count = 1;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

struct ConstantLight {

			// Loop over vertices in the face.

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	DXGI_SWAP_CHAIN_DESC scDesc;

	WORD* pIList = new WORD[icount];

		}

	return 0;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.MiscFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			for (size_t v = 0; v < num_vertices; v++)

	}



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pMatrixBuffer);

			{

		if (!ret)

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))





	float    farZ = 100.0f;



	txDesc.SampleDesc.Quality = 0;

		flags,

	//頂点レイアウト作成

CD3DTest::CD3DTest()

	irData.SysMemSlicePitch = 0;

			{

		KEY_PRESS_SURFACE_DEFAULT,

	m_pMatrixBuffer = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		{



	Release();

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&error,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		}

	cbDesc.CPUAccessFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

	{

	m_pDepthStencilView = NULL;

		{

		pLevels,

	vector<WORD> indexList;





	Release();

	ibDesc.StructureByteStride = 0;

	m_pDepthStencilView = NULL;

	//First we need to start up SDL, and make sure it went ok

{

struct ConstantMaterial {

	{

	Release();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4X4 projection;

	return;



	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.MiscFlags = 0;

	m_pPixelShader = NULL;

		}

	{

			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_RenderClear(ren);

	//深度ステンシルバッファ作成



	}



	SDL_FreeSurface(suf);

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SDL_Quit();

	scDesc.BufferCount = 1;

	txDesc.CPUAccessFlags = 0;

		return hr;

			default:

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//頂点バッファ作成

	XMFLOAT4X4 world;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

	std::string error;



			default:

		SDL_RenderPresent(ren);

		{

		&level,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.ArraySize = 1;

				// access to vertex

		SDL_Delay(1000);

	SAFE_RELEASE(m_pPixelShader);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	float    fov = XMConvertToRadians(20.0f);

	pBackBuffer->Release();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





		KEY_PRESS_SURFACE_DEFAULT,

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_SUBRESOURCE_DATA irData;

	auto& attrib = reader.GetAttrib();



			default:

		return hr;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (m_pImmediateContext)

	tinyobj::ObjReaderConfig reader_config;

	SDL_Event e;

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.Height = (FLOAT)rect.Height();

	::GetClientRect(hwnd, &rect);

	cbDesc.CPUAccessFlags = 0;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

 */

	Vertex* pVList = new Vertex[vcount];







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



HRESULT CD3DTest::Create(HWND hwnd)

};

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (m_pImmediateContext)

	m_IndexCount = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;







	CRect                rect;

	scDesc.Windowed = TRUE;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4X4 view;

	m_pTextureView = NULL;

}



	//ピクセルシェーダー生成



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}*/

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.StructureByteStride = 0;

{

	/*

	ConstantMatrixBuffer cmb;

{

	txDesc.SampleDesc.Count = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

#ifdef _DEBUG

	cbDesc.MiscFlags = 0;

	{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





		return hr;

		return hr;





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

	m_pDepthStencilView = NULL;

	//深度ステンシルバッファ作成

	SDL_DestroyTexture(tex);





	SAFE_RELEASE(m_pInputLayout);





	for (int i = 0; i < vcount; i++)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	m_pDevice = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	m_Viewport.MinDepth = 0.0f;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	return hr;

		&level,

	irData.SysMemSlicePitch = 0;

			{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	txDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

	irData.SysMemSlicePitch = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	dsDesc.Format = txDesc.Format;



				WORD index = idx.vertex_index;



	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#include <iostream>

			switch (e.key.keysym.sym)



};







	SAFE_RELEASE(m_pDevice);

		return hr;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



{

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

	SDL_Quit();

				break;

	if (FAILED(hr))



		}

	SAFE_RELEASE(m_pMatrixBuffer);





			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_FreeSurface(bmp);

	D3D11_SUBRESOURCE_DATA irData;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pVertexShader = NULL;

		SDL_Delay(1000);



	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_pPixelShader = NULL;

#include <SDL.h>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.Windowed = TRUE;

};

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.StructureByteStride = 0;



		if (e.type == SDL_QUIT)



#include <iostream>



	//頂点シェーダー生成

	std::string error;

	scDesc.Windowed = TRUE;

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.StructureByteStride = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pPixelShader);



	}*/

	scDesc.BufferDesc.Width = rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string imagePath = "hello.bmp";

	UINT offsets = 0;

{





	}

	//Create Index

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;

}

	{

	SAFE_RELEASE(m_pVertexShader);

	{

	//頂点バッファ作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				WORD index = idx.vertex_index;

	WORD* pIList = new WORD[icount];

		1,

			{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.MiscFlags = 0;

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	float    nearZ = 0.1f;

#endif

	XMFLOAT4X4 projection;

	if (FAILED(hr))

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	bool ret = tinyobj::LoadObj(



struct ConstantLight {

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

		if (!ret)





		{

	std::string error;

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	irData.pSysMem = &pIList[0];

	m_pSwapChain = NULL;

	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	m_pDepthStencilView = NULL;





	{

	if (!reader.ParseFromFile(inputfile, reader_config))

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyRenderer(ren);

};

	txDesc.SampleDesc.Quality = 0;



	UINT flags = 0;

	for (int i = 0; i < vcount; i++)

	std::vector<tinyobj::shape_t> shapes;



		return hr;

#include "DirectXManager.h"



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

	SDL_FreeSurface(bmp);

	auto& attrib = reader.GetAttrib();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		pIList[j] = indexList[j];

	//テクスチャ読み込み

		D3D11_SDK_VERSION,



	XMStoreFloat4(&clb.ambient, lightAmbient);

	// Loop over shapes

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	float    nearZ = 0.1f;

		{



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			case SDLK_DOWN:

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		&scDesc,

	SDL_DestroyTexture(tex);

	dsDesc.Format = txDesc.Format;

	};

	scDesc.SampleDesc.Count = 1;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyTexture(tex);

	int     vcount = vertexlist.size();



{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vbDesc.MiscFlags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <iostream>

	m_VertexCount = vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			{

struct ConstantLight {

	scDesc.BufferDesc.Height = rect.Height();

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Quit();

	SDL_DestroyWindow(win);



	if (FAILED(hr))

{







	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4         eyePos;   //視点座標

	//vector<Vertex> vertex_t;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

}

CD3DTest::~CD3DTest()





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



{

	txDesc.CPUAccessFlags = 0;

	};

		KEY_PRESS_SURFACE_TOTAL

	};

			for (size_t v = 0; v < num_vertices; v++)

#include "DirectXManager.h"

	SAFE_RELEASE(m_pInputLayout);

	reader_config.mtl_search_path = "./"; // Path to material files

		1,



	enum KeyPressSurfaces

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::string inputfile = "test.obj";

	for (int j = 0; j < icount; j++)

{

		return hr;

	cbDesc.CPUAccessFlags = 0;



			//Select surfaces based on key press

				tinyobj::real_t tx =

	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_LEFT,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		if (!ret)

	ConstantMatrixBuffer cmb;

			}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantMatrixBuffer {

	cbDesc.MiscFlags = 0;

			exit(1);

	m_Viewport.TopLeftY = 0;

}

	m_Viewport.MinDepth = 0.0f;

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				break;

			case SDLK_DOWN:

	//深度ステンシルバッファ作成

	txDesc.MipLevels = 1;

	}

			case SDLK_LEFT:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pLightBuffer);

			{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	for (int j = 0; j < icount; j++)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	::GetClientRect(hwnd, &rect);

	auto& shapes = reader.GetShapes();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	std::string inputfile = "test.obj";

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pVertexShader);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#endif

		pIList[j] = indexList[j];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	if (m_pImmediateContext)



}

		SDL_Delay(1000);

	scDesc.Windowed = TRUE;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}



	XMStoreFloat4(&clb.eyePos, eye);

			for (size_t v = 0; v < fv; v++)



	SDL_FreeSurface(bmp);

{

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pTexture);

			case SDLK_UP:

	while (SDL_PollEvent(&e) != 0)

		R"(cube.obj)");

		if (!ret)

}

	D3D11_BUFFER_DESC ibDesc;



	vrData.SysMemSlicePitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))



	WORD* pIList = new WORD[icount];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4X4 view;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.eyePos, eye);

			break;

#include <SDL.h>







	//頂点シェーダー生成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.MipLevels = 1;



	pBackBuffer->Release();

	if (m_pImmediateContext)

		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_LEFT,



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_pMatrixBuffer = NULL;

	//vector<WORD> index_t;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

/*





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.SampleDesc.Count = 1;

	UINT flags = 0;

	cbDesc.CPUAccessFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				vertex.push_back(vertex_tmp);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ConstantLight    pntLight; //点光源

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <iostream>

		}

	//深度ステンシルバッファ作成

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	UINT flags = 0;

				// access to vertex

	vbDesc.StructureByteStride = 0;

	ibDesc.StructureByteStride = 0;

	{



}



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ibDesc.CPUAccessFlags = 0;





			}

	SAFE_RELEASE(m_pPixelShader);

}

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);







	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	// Loop over shapes



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			exit(1);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	irData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

			index_offset += fv;

	if (FAILED(hr))



	XMFLOAT4X4 world;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&m_pSwapChain,

				break;

	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

		return hr;



	Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

void CD3DTest::Render()

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

	}

{

	}

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	tinyobj::ObjReader reader;

}



		&materials,

	std::vector<tinyobj::material_t> materials;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Clean up our objects and quit



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pTexture = NULL;

			case SDLK_RIGHT:

	std::string imagePath = "hello.bmp";

				vertex.push_back(vertex_tmp);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vbDesc.CPUAccessFlags = 0;

	}

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





}

	std::vector<tinyobj::shape_t> shapes;





		R"(cube.obj)");

	{

		&m_pImmediateContext);

	ConstantLightBuffer clb;

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#include <SDL.h>

{

	irData.pSysMem = &pIList[0];



		return hr;

		if (!reader.Error().empty())

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pLightBuffer);



		return 1;

		SDL_RenderClear(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string inputfile = "test.obj";

				vertex.push_back(vertex_tmp);

};





				WORD index = idx.vertex_index;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		//User presses a key



	vrData.SysMemPitch = 0;

			// Loop over vertices in the face.

}

};



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	CRect                rect;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	m_VertexCount = vcount;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//定数バッファ作成

	m_IndexCount = icount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

int main(int, char**)

	//インデックスバッファ作成

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		{

	delete[] pIList;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_DestroyRenderer(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

struct ConstantLightBuffer {



	m_Viewport.TopLeftY = 0;

	std::string imagePath = "hello.bmp";

{

	SAFE_RELEASE(m_pVertexBuffer);

	float    farZ = 100.0f;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pDevice = NULL;

		if (e.type == SDL_QUIT)

			}

	m_Viewport.TopLeftX = 0;

			exit(1);

	float    nearZ = 0.1f;

		SDL_RenderClear(ren);

		return hr;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Quit();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		// Loop over faces(polygon)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	auto& shapes = reader.GetShapes();

	{

	txDesc.MiscFlags = 0;

	UINT flags = 0;

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

			{

		delete[] pIList;

	scDesc.BufferCount = 1;

	//First we need to start up SDL, and make sure it went ok

	//Create Index

	Release();

};

	}

	cbDesc.StructureByteStride = 0;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		D3D11_SDK_VERSION,

		SDL_Delay(1000);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



#include <iostream>

	XMFLOAT4X4 projection;

{

	m_pLightBuffer = NULL;

	vrData.SysMemPitch = 0;



	LoadObj(vertexlist, indexList);

	irData.SysMemPitch = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			//Select surfaces based on key press



		KEY_PRESS_SURFACE_RIGHT,

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pImmediateContext);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			for (size_t v = 0; v < fv; v++)

	}





int SEGMENT = 36;

		}



	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))



	ibDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);



		pIList[j] = indexList[j];

	UINT strides = sizeof(Vertex);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	float    farZ = 100.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&attrib,

	while (SDL_PollEvent(&e) != 0)

}

		}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//テクスチャ読み込み

	vrData.SysMemPitch = 0;



	Release();

	SAFE_RELEASE(m_pDepthStencilView);

	m_pPixelShader = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	UINT flags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};



	{

	{

			//Select surfaces based on key press

		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	for (int j = 0; j < icount; j++)

		pVList[i] = vertexlist[i];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferCount = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		1,



	ID3D11Texture2D* pBackBuffer;

using std::cout; using std::endl;

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);









	//Key press surfaces constants

 * Lesson 1: Hello World!

		&materials,

	cbDesc.StructureByteStride = 0;

	auto& shapes = reader.GetShapes();



	irData.SysMemPitch = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

	XMFLOAT4X4 view;

			// Loop over vertices in the face.

	irData.SysMemSlicePitch = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.MiscFlags = 0;

	}*/





		KEY_PRESS_SURFACE_DEFAULT,

	m_pInputLayout = NULL;

};



	m_pInputLayout = NULL;

				break;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);

	LoadObj(vertexlist, indexList);

using std::cout; using std::endl;

{

		&scDesc,

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pPixelShader);

#include <SDL.h>

	ID3D11Texture2D* pBackBuffer;

#include <iostream>

	vrData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

}

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





		{



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);

		pIList[j] = indexList[j];

	m_pDepthStencilTexture = NULL;

	{

	txDesc.SampleDesc.Quality = 0;

	vector<Vertex> vertexlist;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

	if (FAILED(hr))



	std::string inputfile = "test.obj";

		return hr;

	if (FAILED(hr))

		1,

	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.CPUAccessFlags = 0;

	vbDesc.StructureByteStride = 0;



	return;

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

				indexlist.push_back(idx.vertex_index);

			default:

	vbDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

	for (int i = 0; i < 3; i++)

		&materials,

		if (!reader.Error().empty())

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				break;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	if (m_pImmediateContext)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.BufferDesc.Height = rect.Height();

	{



	SAFE_RELEASE(m_pVertexShader);

	m_pIndexBuffer = NULL;



	//Vertex* pVList = new Vertex[vcount];

	{

	m_pIndexBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.SampleDesc.Quality = 0;

	}

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pImmediateContext);

			}

	if (!reader.Warning().empty())

	for (int i = 0; i < 3; i++)

	XMFLOAT4 ambient;           //環境(r,g,b)

};



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		pLevels,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

			int num_vertices = shape.mesh.num_face_vertices[f];

		pLevels,

		return 1;

	if (!reader.Warning().empty())

	UINT flags = 0;

		&level,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	LoadObj(vertexlist, indexList);

}

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_Viewport.TopLeftX = 0;

		}

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

 */

#include <iostream>



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	//First we need to start up SDL, and make sure it went ok



	XMFLOAT4X4 projection;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

				indexlist.push_back(idx.vertex_index);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{

	if (m_pImmediateContext)

		}

		return hr;

	scDesc.SampleDesc.Count = 1;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

}
		&level,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;



		&shapes,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



{

	cbDesc.StructureByteStride = 0;

	}

		KEY_PRESS_SURFACE_UP,

		}

	//Key press surfaces constants

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMFLOAT4X4 projection;







				vertex.push_back(vertex_tmp);

				tinyobj::real_t ty =

	D3D11_SUBRESOURCE_DATA irData;

		return hr;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.SampleDesc.Count = 1;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{

		delete[] pVList;



	std::string inputfile = "test.obj";

	scDesc.SampleDesc.Quality = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

#endif

	WORD   icount = indexList.size();



	D3D11_BUFFER_DESC cbDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		}

		{







	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			}

struct ConstantLight {

	m_pImmediateContext = NULL;

{

			}



				tinyobj::real_t tx =

	D3D11_SAMPLER_DESC smpDesc;

	WORD* pIList = new WORD[icount];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pTexture);

	SDL_DestroyTexture(tex);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		exit(1);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		D3D_DRIVER_TYPE_HARDWARE,

	m_pSwapChain->Present(0, 0);

	Release();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				indexlist.push_back(index);

		//User requests quit



{

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

struct ConstantLightBuffer {

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

#include <SDL.h>

		//User presses a key

				break;

	enum KeyPressSurfaces

	std::string error;

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

{



void CD3DTest::Render()



		if (e.type == SDL_QUIT)

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_IndexCount = 0;

	/*



		&level,

		}



	if (FAILED(hr))

	UINT flags = 0;

	SDL_DestroyWindow(win);

void CD3DTest::Render()

	m_Viewport.TopLeftY = 0;

	D3D11_BUFFER_DESC cbDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_TOTAL



	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



{

	Release();

			for (size_t v = 0; v < fv; v++)

using std::cout; using std::endl;



	//Key press surfaces constants

	delete[] pIList;

	LoadObj(vertexlist, indexList);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

		return 1;

struct ConstantMatrixBuffer {



		1,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		&attrib,

	//テクスチャ読み込み



	m_Viewport.TopLeftX = 0;

	scDesc.SampleDesc.Count = 1;



	txDesc.Height = rect.Height();

			{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

	SDL_DestroyRenderer(ren);



				break;

	//定数バッファ作成

	irData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

	//Create Index

	}

	ibDesc.CPUAccessFlags = 0;



		pVList[i] = vertexlist[i];

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float    fov = XMConvertToRadians(20.0f);

	}

	m_pTexture = NULL;

	return;

	for (const auto& shape : shapes)

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				break;

	m_pSwapChain->Present(0, 0);

	pBackBuffer->Release();

	{

			}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (!reader.Warning().empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//vector<Vertex> vertex_t;

	m_pTextureView = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	scDesc.SampleDesc.Quality = 0;

	float    nearZ = 0.1f;

	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		KEY_PRESS_SURFACE_UP,

		if (e.type == SDL_QUIT)

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				tinyobj::real_t tx =

struct ConstantLightBuffer {

	m_Viewport.MinDepth = 0.0f;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	std::string error;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.SampleDesc.Quality = 0;



	pBackBuffer->Release();

	m_IndexCount = 0;

			switch (e.key.keysym.sym)





	SDL_DestroyWindow(win);

		flags,

	D3D11_SUBRESOURCE_DATA irData;

			case SDLK_RIGHT:

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pPixelShader);





	m_Viewport.TopLeftX = 0;

	irData.SysMemPitch = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	D3D11_SUBRESOURCE_DATA vrData;



	UINT strides = sizeof(Vertex);

	ConstantLight    pntLight; //点光源

		return hr;

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ConstantMatrixBuffer cmb;

		return hr;

		else if (e.type == SDL_KEYDOWN)

}

				break;

		if (!reader.Error().empty())

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pTexture = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<WORD> index_t;

	m_pLightBuffer = NULL;

	SDL_Event e;

	LoadObj(vertexlist, indexList);

		{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//ピクセルシェーダー生成

	//ビューポート設定

			switch (e.key.keysym.sym)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&error,





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.Texture2D.MipSlice = 0;

	ibDesc.MiscFlags = 0;

	UINT flags = 0;

	// Loop over shapes



	//定数バッファ作成

	SAFE_RELEASE(m_pVertexShader);

	/*

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	LoadObj(vertexlist, indexList);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (const auto& shape : shapes)



CD3DTest::~CD3DTest()

	//ビューポート設定

			exit(1);

	SAFE_RELEASE(m_pTexture);

{

	//Clean up our objects and quit

}

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

			// Loop over vertices in the face.



HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pDevice);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pImmediateContext);

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	pBackBuffer->Release();

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Release()

	//Create Index

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		//User requests quit

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	D3D11_SUBRESOURCE_DATA irData;

	vbDesc.StructureByteStride = 0;

{

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

		size_t index_offset = 0;

		delete[] pVList;

struct ConstantLightBuffer {

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			case SDLK_RIGHT:



}
				vertex.push_back(vertex_tmp);



	{

	txDesc.SampleDesc.Count = 1;

	Release();

	SDL_DestroyRenderer(ren);

};

};

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext = NULL;

	vrData.SysMemPitch = 0;

	std::string imagePath = "hello.bmp";



	SDL_FreeSurface(suf);

				tinyobj::real_t tx =

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))



	auto& materials = reader.GetMaterials();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		KEY_PRESS_SURFACE_TOTAL

		&attrib,

struct ConstantLight {

#include "DirectXManager.h"

		flags,

	SDL_DestroyRenderer(ren);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	std::string inputfile = "test.obj";

	}

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.ArraySize = 1;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				vertex.push_back(vertex_tmp);

			{

				break;

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pMatrixBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		SDL_Delay(1000);

	//Clean up our objects and quit

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}



#endif

		SDL_RenderClear(ren);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	{

{

	}*/

 */

	auto& shapes = reader.GetShapes();

	irData.pSysMem = &pIList[0];

	{

#include "DirectXManager.h"

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return 0;

		}



			{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	scDesc.BufferDesc.Width = rect.Width();

	pBackBuffer->Release();

	SDL_FreeSurface(suf);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	ConstantMatrixBuffer cmb;

	DXGI_SWAP_CHAIN_DESC scDesc;

		size_t index_offset = 0;  // インデントのオフセット

	for (int i = 0; i < 3; i++)

using std::cout; using std::endl;



	std::string inputfile = "test.obj";

		cout << "SDL_INIT_ERROR" << endl;

		return 1;

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

			case SDLK_DOWN:

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    farZ = 100.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	SDL_DestroyRenderer(ren);

			// Loop over vertices in the face.

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4X4 world;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}





CD3DTest::CD3DTest()

	//Key press surfaces constants

	D3D11_BUFFER_DESC vbDesc;

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	auto& shapes = reader.GetShapes();

	// Loop over shapes

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	WORD* pIList = new WORD[icount];



	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	D3D11_BUFFER_DESC vbDesc;

struct ConstantMaterial {

		}

	m_pSwapChain->Present(0, 0);

	cbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ConstantMaterial material; //物体の質感



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

{



	//ピクセルシェーダー生成

	WORD* pIList = new WORD[icount];

 * Lesson 1: Hello World!

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <iostream>



			exit(1);

			case SDLK_RIGHT:

	m_Viewport.Height = (FLOAT)rect.Height();





int SEGMENT = 36;

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderPresent(ren);

		D3D11_SDK_VERSION,

		{

		SDL_Delay(1000);





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		exit(1);

		cout << "SDL_INIT_ERROR" << endl;

	ConstantMaterial material; //物体の質感


