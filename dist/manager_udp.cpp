	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

struct ConstantMatrixBuffer {

#include <iostream>



	}

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		}

		{

	float    farZ = 100.0f;

		delete[] pIList;





	};

#define TINYOBJLOADER_IMPLEMENTATION

	}

		return hr;



	while (SDL_PollEvent(&e) != 0)



			{

	//深度ステンシルバッファ作成

	vbDesc.StructureByteStride = 0;

#ifdef _DEBUG

	{

	D3D11_SUBRESOURCE_DATA irData;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.CPUAccessFlags = 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pDepthStencilView = NULL;

		}

	return hr;

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_TOTAL

	}



	D3D11_SAMPLER_DESC smpDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

		//User requests quit

#include <SDL.h>

	//深度ステンシルバッファ作成

	m_Viewport.MaxDepth = 1.0f;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Event e;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pSwapChain->Present(0, 0);



		KEY_PRESS_SURFACE_DEFAULT,

			// Loop over vertices in the face.

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//深度ステンシルバッファ作成

	if (FAILED(hr))



	/*

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ビューポート設定

				tinyobj::real_t ty =

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

 * Lesson 1: Hello World!

		if (!ret)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

 */

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMFLOAT4X4 projection;



	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes

			//Select surfaces based on key press

	XMFLOAT4X4 projection;

	vector<Vertex> vertexlist;

		return hr;

#include <iostream>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

};

int main(int, char**)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (!error.empty())



{



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <SDL.h>

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		1,

	}

			// Loop over vertices in the face.

	cbDesc.MiscFlags = 0;

	//vector<Vertex> vertex_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_RIGHT,

}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			}



	txDesc.Usage = D3D11_USAGE_DEFAULT;



			}

	int     vcount = vertexlist.size();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Height = rect.Height();

		&attrib,

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

};







#include <SDL.h>

	m_Viewport.MaxDepth = 1.0f;



int main(int, char**)

struct ConstantMatrixBuffer {

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	SAFE_RELEASE(m_pTextureView);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pLightBuffer);

	m_IndexCount = 0;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

 */

{

	}



};



	//テクスチャ読み込み

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		return hr;

	vbDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//ビューポート設定

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			default:

#include <iostream>



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	std::vector<tinyobj::material_t> materials;

			index_offset += num_vertices;

	D3D11_SAMPLER_DESC smpDesc;



 */



	}

	ibDesc.StructureByteStride = 0;

	//vector<WORD> index_t;

	bool ret = tinyobj::LoadObj(

	txDesc.SampleDesc.Count = 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//頂点レイアウト作成





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		{





	scDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDepthStencilView = NULL;

	tinyobj::ObjReader reader;

	m_Viewport.TopLeftY = 0;

		return hr;

	m_pSampler = NULL;

			for (size_t v = 0; v < num_vertices; v++)

	::GetClientRect(hwnd, &rect);

int SEGMENT = 36;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	/*

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))



	}

	m_pImmediateContext = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 projection;

	m_pMatrixBuffer = NULL;

	// Loop over shapes



	Release();

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Event e;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	m_pDevice = NULL;

	m_pLightBuffer = NULL;



	XMFLOAT4X4 projection;



CD3DTest::~CD3DTest()

	//Create Index

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





		exit(1);







		if (!ret)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.Width = (FLOAT)rect.Width();





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t ty =

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

	Release();

		pVList[i] = vertexlist[i];

	UINT flags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferCount = 1;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	irData.pSysMem = &pIList[0];

	//深度ステンシルバッファ作成

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4X4 projection;

	txDesc.MipLevels = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <iostream>

	SAFE_RELEASE(m_pImmediateContext);

	m_pRenderTargetView = NULL;

		delete[] pVList;

		}



	float    nearZ = 0.1f;

	std::string error;

 * Lesson 1: Hello World!

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.eyePos, eye);

			index_offset += num_vertices;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReaderConfig reader_config;

	LoadObj(vertexlist, indexList);





		return hr;

	//Key press surfaces constants

	}

	::GetClientRect(hwnd, &rect);

	ConstantLight    pntLight; //点光源

	m_VertexCount = vcount;



	SAFE_RELEASE(m_pIndexBuffer);

}

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				// access to vertex

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderPresent(ren);

		delete[] pIList;

		SDL_Delay(1000);

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vbDesc.CPUAccessFlags = 0;

			}



			for (size_t v = 0; v < fv; v++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SAFE_RELEASE(m_pInputLayout);

	ibDesc.CPUAccessFlags = 0;

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pInputLayout);

	HRESULT              hr;

	m_pMatrixBuffer = NULL;





	scDesc.SampleDesc.Quality = 0;





	//テクスチャ読み込み



	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pDevice);

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



			case SDLK_UP:

	SAFE_RELEASE(m_pSampler);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_RIGHT,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pSampler = NULL;



{

	enum KeyPressSurfaces

	//vector<Vertex> vertex_t;

	}



				break;



	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Quit();

	//First we need to start up SDL, and make sure it went ok

	{



			for (size_t v = 0; v < num_vertices; v++)

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Quit();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ConstantMatrixBuffer cmb;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//vector<WORD> index_t;



		&shapes,



	ConstantLightBuffer clb;



	XMFLOAT4X4 world;

	scDesc.SampleDesc.Count = 1;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pRenderTargetView = NULL;

	enum KeyPressSurfaces

	XMFLOAT4         eyePos;   //視点座標



			switch (e.key.keysym.sym)

	cbDesc.StructureByteStride = 0;

				// access to vertex

				WORD index = idx.vertex_index;

		&m_pDevice,

	m_Angle += XMConvertToRadians(1.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	txDesc.MipLevels = 1;

	XMFLOAT4X4 world;

	m_pVertexShader = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//vector<WORD> index_t;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



{

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	return hr;

			switch (e.key.keysym.sym)

				tinyobj::real_t tx =

	//深度ステンシルバッファ作成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.MiscFlags = 0;

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

int main(int, char**)

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		else if (e.type == SDL_KEYDOWN)

	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		if (!ret)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			break;

	return hr;

			}

	m_pMatrixBuffer = NULL;

		return hr;

}
	XMFLOAT4X4 projection;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

CD3DTest::CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pTexture);



	::GetClientRect(hwnd, &rect);

		SDL_RenderClear(ren);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    farZ = 100.0f;

		&materials,

		KEY_PRESS_SURFACE_UP,



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//頂点バッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SAFE_RELEASE(m_pIndexBuffer);

	{



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

	//ビューポート設定

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string imagePath = "hello.bmp";

	scDesc.BufferCount = 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ID3D11Texture2D* pBackBuffer;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//vector<Vertex> vertex_t;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



/*

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.eyePos, eye);

			break;

	HRESULT              hr;

		KEY_PRESS_SURFACE_RIGHT,

		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	Release();





	SAFE_RELEASE(m_pDepthStencilView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			default:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	scDesc.BufferDesc.Width = rect.Width();

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		NULL,



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//深度ステンシルバッファ作成

	scDesc.Windowed = TRUE;

				break;

	vector<Vertex> vertexlist;

	scDesc.BufferDesc.Height = rect.Height();

	{

	m_pLightBuffer = NULL;

	m_Viewport.MinDepth = 0.0f;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::ZeroMemory(&scDesc, sizeof(scDesc));



		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&materials,

	UINT offsets = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		if (!reader.Error().empty())

struct ConstantMatrixBuffer {

	scDesc.BufferDesc.Width = rect.Width();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::real_t tx =



	ConstantLight    pntLight; //点光源



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::string inputfile = "test.obj";

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index

	m_pInputLayout = NULL;



		m_pImmediateContext->ClearState();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	}

		&shapes,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//インデックスバッファ作成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//vector<Vertex> vertex_t;

	for (int j = 0; j < icount; j++)

	std::vector<tinyobj::material_t> materials;





/*

	}

	{

	pBackBuffer->Release();

		//User requests quit





	::ZeroMemory(&scDesc, sizeof(scDesc));

	for (int i = 0; i < vcount; i++)

}

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		{

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		m_pImmediateContext->ClearState();



		&m_pImmediateContext);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;



	vbDesc.CPUAccessFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return;

struct ConstantLight {

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		D3D11_SDK_VERSION,



		SDL_RenderPresent(ren);

		R"(cube.obj)");

	std::vector<tinyobj::material_t> materials;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pDepthStencilTexture);

#include <SDL.h>

	}

	//テクスチャ読み込み

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	while (SDL_PollEvent(&e) != 0)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	//定数バッファ作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

};

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         eyePos;   //視点座標

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}

{

	XMFLOAT4 pos;               //座標(x,y,z)

#include <iostream>



		&m_pDevice,

	}

	std::string imagePath = "hello.bmp";

	Release();

	return 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		SDL_RenderPresent(ren);

	auto& materials = reader.GetMaterials();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		m_pImmediateContext->ClearState();



	m_pPixelShader = NULL;



	SAFE_RELEASE(m_pTexture);

	delete[] pVList;

			index_offset += num_vertices;

		return hr;

	D3D11_BUFFER_DESC vbDesc;



		&m_pSwapChain,

			case SDLK_LEFT:



		return hr;

	// Loop over shapes

	vbDesc.StructureByteStride = 0;

				indexlist.push_back(index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	tinyobj::ObjReader reader;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

		SDL_RenderClear(ren);



	UINT flags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

 */



	XMFLOAT4 specular;          //反射(r,g,b)

/*

				indexlist.push_back(idx.vertex_index);

			exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

#define TINYOBJLOADER_IMPLEMENTATION

		&error,

	bool ret = tinyobj::LoadObj(







	//Key press surfaces constants

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	ibDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//インデックスバッファ作成

}

	int     vcount = vertexlist.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	D3D11_SUBRESOURCE_DATA irData;

		return hr;

				WORD index = idx.vertex_index;

	}

#include <SDL.h>

	vbDesc.MiscFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 pos;               //座標(x,y,z)

 */

		R"(cube.obj)");

	for (int i = 0; i < vcount; i++)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.MiscFlags = 0;



	//Create Index





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	}*/

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	for (int j = 0; j < icount; j++)

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderPresent(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pVertexShader);

	dsDesc.Texture2D.MipSlice = 0;

};

	//頂点レイアウト作成

	m_pLightBuffer = NULL;

	m_pDevice = NULL;

	{

			}

	bool ret = tinyobj::LoadObj(

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//ビューポート設定

struct ConstantLightBuffer {

		&scDesc,

		&m_pImmediateContext);

	m_VertexCount = vcount;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				break;

			{

		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





		{

	}

};



	SDL_Quit();

		D3D_DRIVER_TYPE_HARDWARE,





	D3D11_TEXTURE2D_DESC txDesc;

		return 1;

	//ビューポート設定



	ibDesc.StructureByteStride = 0;

	tinyobj::ObjReader reader;



				break;

	cbDesc.CPUAccessFlags = 0;

		&level,

	if (FAILED(hr))

	if (FAILED(hr))

	//テクスチャ読み込み



	auto& attrib = reader.GetAttrib();

	XMFLOAT4X4 view;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	while (SDL_PollEvent(&e) != 0)



		//User requests quit

	XMFLOAT4 specular;          //反射(r,g,b)

	{





struct ConstantMaterial {

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	/*

	m_pIndexBuffer = NULL;

	}

		if (!reader.Error().empty())

	delete[] pIList;

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

	Release();

	//Create Index

	if (!error.empty())

	//Create Index



HRESULT CD3DTest::Create(HWND hwnd)



	enum KeyPressSurfaces

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

		&m_pSwapChain,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.Windowed = TRUE;

	vbDesc.StructureByteStride = 0;



		&materials,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//vector<Vertex> vertex_t;

	txDesc.SampleDesc.Quality = 0;

		&m_pDevice,

	ZeroMemory(&txDesc, sizeof(txDesc));



	ibDesc.StructureByteStride = 0;

	return hr;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.SampleDesc.Quality = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	WORD* pIList = new WORD[icount];

		{

		if (!ret)



	CRect                rect;

int main(int, char**)

	SAFE_RELEASE(m_pPixelShader);



		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		{

	ID3D11Texture2D* pBackBuffer;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pSwapChain,

	if (FAILED(hr))

	//ビューポート設定

	SAFE_RELEASE(m_pDepthStencilView);

		SDL_RenderClear(ren);

	scDesc.SampleDesc.Quality = 0;

		return hr;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pDepthStencilTexture);

	//ピクセルシェーダー生成

			case SDLK_RIGHT:



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.TopLeftY = 0;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	DXGI_SWAP_CHAIN_DESC scDesc;



	if (FAILED(hr))

{



	XMFLOAT4X4 view;

		return hr;

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			break;



	SAFE_RELEASE(m_pMatrixBuffer);

	//頂点レイアウト作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_DOWN:

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//Clean up our objects and quit

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Key press surfaces constants

	txDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pTextureView);

		delete[] pIList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	Release();

			case SDLK_UP:

	txDesc.Width = rect.Width();

		if (!reader.Error().empty())

		&attrib,

	{

	{

				break;

	m_pRenderTargetView = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.MiscFlags = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}





		pVList[i] = vertexlist[i];







	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	{

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	pBackBuffer->Release();



		NULL,



	tinyobj::ObjReaderConfig reader_config;



}

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pSampler);

{

	m_pIndexBuffer = NULL;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

				break;

	cbDesc.StructureByteStride = 0;

	UINT offsets = 0;

	std::string inputfile = "test.obj";

	std::string inputfile = "test.obj";

{

		{

	}

		&attrib,

	m_pLightBuffer = NULL;



	bool ret = tinyobj::LoadObj(

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pDevice = NULL;

		return hr;



		}



	ConstantMaterial material; //物体の質感

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//ビューポート設定

	//頂点レイアウト作成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pVertexShader = NULL;

		return hr;

	std::string inputfile = "test.obj";

using std::cout; using std::endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		//User presses a key

	vector<WORD> indexList;

	m_VertexCount = vcount;

	vbDesc.CPUAccessFlags = 0;

};

	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		KEY_PRESS_SURFACE_DOWN,



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			exit(1);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	/*

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

void CD3DTest::Render()

#include <iostream>

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantMaterial material; //物体の質感

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	pBackBuffer->Release();

	SAFE_RELEASE(m_pDepthStencilTexture);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}



		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.Width = rect.Width();

	{



#include <iostream>

	scDesc.Windowed = TRUE;

	if (FAILED(hr))



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4X4 world;



struct ConstantLight {

	SDL_FreeSurface(suf);

	UINT strides = sizeof(Vertex);



	delete[] pVList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);







}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pVertexBuffer = NULL;

	delete[] pIList;

				break;

	int     vcount = vertexlist.size();

	{

	XMFLOAT4X4 projection;

	m_pVertexBuffer = NULL;



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_IndexCount = icount;

		//User requests quit

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4X4 world;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	UINT flags = 0;

				tinyobj::real_t tx =

	delete[] pVList;

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_SAMPLER_DESC smpDesc;

		SDL_Delay(1000);

				indexlist.push_back(index);

				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&level,

	SAFE_RELEASE(m_pSampler);





		return hr;

			for (size_t v = 0; v < fv; v++)

		D3D_DRIVER_TYPE_HARDWARE,

}

		if (e.type == SDL_QUIT)

		return hr;

		}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	pBackBuffer->Release();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D_FEATURE_LEVEL level;

		if (!ret)

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pSampler);

	m_pSwapChain->Present(0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.StructureByteStride = 0;

		m_pImmediateContext->ClearState();



		}

	m_Viewport.TopLeftX = 0;

	auto& shapes = reader.GetShapes();





	m_Viewport.Height = (FLOAT)rect.Height();



		return hr;

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pPixelShader);





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pLightBuffer);

struct ConstantMaterial {



	//Create Index

	XMFLOAT4X4 view;



		&level,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Quit();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	WORD* pIList = new WORD[icount];

	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	Vertex* pVList = new Vertex[vcount];



	//頂点シェーダー生成

		return hr;

	auto& materials = reader.GetMaterials();



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pDepthStencilTexture);

	delete[] pIList;

	{

	//定数バッファ作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			break;

	SAFE_RELEASE(m_pRenderTargetView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_DOWN:



CD3DTest::~CD3DTest()

	//テクスチャ読み込み

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_LEFT,

			// Loop over vertices in the face.



	float    fov = XMConvertToRadians(20.0f);

	//Key press surfaces constants

	vrData.SysMemPitch = 0;

}

	XMFLOAT4 specular;          //反射(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	return 0;

	D3D11_TEXTURE2D_DESC txDesc;



	{

		return hr;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

		pIList[j] = indexList[j];

				tinyobj::real_t ty =

	HRESULT              hr;

	SDL_DestroyWindow(win);

		pVList[i] = vertexlist[i];

		m_pImmediateContext->ClearState();

	{

	scDesc.SampleDesc.Count = 1;

	auto& shapes = reader.GetShapes();

	m_Viewport.Height = (FLOAT)rect.Height();

	return;

	for (int i = 0; i < 3; i++)



#include <iostream>

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();



 * Lesson 1: Hello World!

		NULL,

	cbDesc.StructureByteStride = 0;



	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4         eyePos;   //視点座標



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//ピクセルシェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	/*



	if (FAILED(hr))

void CD3DTest::Release()

		D3D11_SDK_VERSION,

	reader_config.mtl_search_path = "./"; // Path to material files

}

		NULL,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	pBackBuffer->Release();



	SAFE_RELEASE(m_pDepthStencilView);

	m_pPixelShader = NULL;





	vbDesc.StructureByteStride = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				WORD index = idx.vertex_index;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

 * Lesson 1: Hello World!



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				break;

	reader_config.mtl_search_path = "./"; // Path to material files

	vrData.SysMemPitch = 0;





	{



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

int SEGMENT = 36;

	reader_config.mtl_search_path = "./"; // Path to material files



	m_Viewport.TopLeftX = 0;

				break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

			case SDLK_LEFT:

				WORD index = idx.vertex_index;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		NULL,

	D3D11_BUFFER_DESC vbDesc;

		// Loop over faces(polygon)

	CRect                rect;

struct ConstantMatrixBuffer {



	SDL_Quit();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())

	{

	SDL_Event e;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//vector<WORD> index_t;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	for (const auto& shape : shapes)





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 ambient;           //環境(r,g,b)





				// access to vertex





	m_IndexCount = 0;





	// Loop over shapes



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	irData.SysMemSlicePitch = 0;



}



	//テクスチャ読み込み

	if (!error.empty())

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				vertex.push_back(vertex_tmp);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <SDL.h>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	WORD   icount = indexList.size();

		//User presses a key

		size_t index_offset = 0;

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_UP,





		flags,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pTextureView);

	txDesc.Width = rect.Width();

	for (int i = 0; i < vcount; i++)

		pIList[j] = indexList[j];

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			switch (e.key.keysym.sym)

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}





		}

		&m_pDevice,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		{



		KEY_PRESS_SURFACE_DOWN,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ZeroMemory(&txDesc, sizeof(txDesc));

	txDesc.CPUAccessFlags = 0;

	{

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantLight {

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



#include <iostream>



	UINT flags = 0;

	scDesc.SampleDesc.Count = 1;

	return hr;

	XMStoreFloat4(&clb.eyePos, eye);

	for (int j = 0; j < icount; j++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_IndexCount = 0;

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	HRESULT              hr;



				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	};

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

		return 1;

int main(int, char**)

	float    nearZ = 0.1f;

		1,

struct ConstantLight {

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//vector<WORD> index_t;

	ConstantMatrixBuffer cmb;

CD3DTest::CD3DTest()

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantLightBuffer clb;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



}



	{

	SAFE_RELEASE(m_pTextureView);





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

int main(int, char**)

	//頂点レイアウト作成

		return hr;

	txDesc.SampleDesc.Count = 1;

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t tx =

		delete[] pVList;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.StructureByteStride = 0;

		pLevels,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_BUFFER_DESC vbDesc;

				WORD index = idx.vertex_index;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	{

		return hr;





	SAFE_RELEASE(m_pImmediateContext);

		NULL,

				WORD index = idx.vertex_index;



};

}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				indexlist.push_back(idx.vertex_index);

		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		delete[] pIList;

	SDL_DestroyWindow(win);



	vrData.pSysMem = &pVList[0];

			// Loop over vertices in the face.



			exit(1);

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_SUBRESOURCE_DATA irData;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_FreeSurface(bmp);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{



			{





	float    farZ = 100.0f;

	SDL_Quit();

	cbDesc.CPUAccessFlags = 0;



	m_VertexCount = 0;

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	txDesc.ArraySize = 1;

	vrData.pSysMem = &pVList[0];

	vbDesc.StructureByteStride = 0;



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::string error;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_DestroyWindow(win);

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

 * Lesson 1: Hello World!

	m_Viewport.TopLeftY = 0;



	txDesc.MipLevels = 1;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



}

	txDesc.Height = rect.Height();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

	m_pSwapChain->Present(0, 0);



	SDL_DestroyRenderer(ren);

	txDesc.MiscFlags = 0;

	vbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

	D3D11_SUBRESOURCE_DATA irData;

	bool ret = tinyobj::LoadObj(

{

				tinyobj::real_t tx =





	SDL_DestroyTexture(tex);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pDepthStencilView);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	UINT offsets = 0;

		KEY_PRESS_SURFACE_UP,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	auto& materials = reader.GetMaterials();

	D3D11_BUFFER_DESC ibDesc;

{

	m_Viewport.MaxDepth = 1.0f;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;



	auto& shapes = reader.GetShapes();

	txDesc.SampleDesc.Count = 1;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	UINT flags = 0;

	m_pSwapChain->Present(0, 0);

		else if (e.type == SDL_KEYDOWN)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDepthStencilView = NULL;

	return;

	}





		&materials,





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//定数バッファ作成

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

		{

	{

	m_pSwapChain->Present(0, 0);

	m_pTexture = NULL;





		{



	scDesc.Windowed = TRUE;

	//Clean up our objects and quit

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





		// Loop over faces(polygon)

	D3D11_SUBRESOURCE_DATA irData;

	HRESULT              hr;

	scDesc.Windowed = TRUE;

	m_Angle += XMConvertToRadians(1.0f);

	}*/

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	}

		if (!ret)

	ConstantMaterial material; //物体の質感

	float    fov = XMConvertToRadians(20.0f);

		}

/*

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			switch (e.key.keysym.sym)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//ピクセルシェーダー生成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	auto& shapes = reader.GetShapes();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);







	LoadObj(vertexlist, indexList);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.Warning().empty())

		size_t index_offset = 0;  // インデントのオフセット

	m_pSampler = NULL;

	{





				break;

	XMFLOAT4X4 projection;

CD3DTest::~CD3DTest()

		pIList[j] = indexList[j];

		{

		pVList[i] = vertexlist[i];

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	if (FAILED(hr))



		return hr;

void CD3DTest::Release()

	SDL_FreeSurface(bmp);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMFLOAT4X4 world;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	ConstantLightBuffer clb;



		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_UP,

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Clean up our objects and quit

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	ID3D11Texture2D* pBackBuffer;

	m_pMatrixBuffer = NULL;



#include <iostream>

	for (size_t s = 0; s < shapes.size(); s++)

		}

	SDL_FreeSurface(suf);

	//ピクセルシェーダー生成





	m_pPixelShader = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点シェーダー生成

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.OutputWindow = hwnd;





	//Key press surfaces constants

	txDesc.MiscFlags = 0;

		&m_pSwapChain,

	{

				break;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}

	delete[] pIList;



		}



{

	}

	scDesc.BufferCount = 1;

	{

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_Delay(1000);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//ビューポート設定

	XMFLOAT4         ambient;  //環境光(r,g,b)

				indexlist.push_back(idx.vertex_index);

}



			}

	SAFE_RELEASE(m_pSwapChain);

		{

	D3D11_BUFFER_DESC cbDesc;

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.OutputWindow = hwnd;

	tinyobj::ObjReader reader;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferDesc.Width = rect.Width();

	std::vector<tinyobj::material_t> materials;



	txDesc.Width = rect.Width();

}

	}

		D3D11_SDK_VERSION,

	for (const auto& shape : shapes)

	XMFLOAT4X4 projection;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{





	}

	txDesc.MipLevels = 1;

	UINT offsets = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

				WORD index = idx.vertex_index;

	Release();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pRenderTargetView = NULL;

	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	for (int i = 0; i < vcount; i++)



				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pSwapChain);

	scDesc.BufferDesc.Height = rect.Height();

	m_pIndexBuffer = NULL;

	ibDesc.MiscFlags = 0;

			default:

	m_pSwapChain = NULL;

}

		&level,

};

		&attrib,

	ConstantLight    pntLight; //点光源



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	for (const auto& shape : shapes)



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

}




	ibDesc.CPUAccessFlags = 0;





	{

		&level,

	m_pVertexBuffer = NULL;

	UINT strides = sizeof(Vertex);

	m_Viewport.MaxDepth = 1.0f;

	if (!error.empty())



		pIList[j] = indexList[j];

		D3D11_SDK_VERSION,

			break;

		SDL_Delay(1000);

			}



	tinyobj::ObjReader reader;

	for (const auto& shape : shapes)



	if (!error.empty())

}

			index_offset += num_vertices;





}

		return hr;

		SDL_RenderClear(ren);

CD3DTest::CD3DTest()

	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));



		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	::ZeroMemory(&scDesc, sizeof(scDesc));



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_FreeSurface(suf);



{





	WORD   icount = indexList.size();

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.SysMemPitch = 0;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	D3D11_TEXTURE2D_DESC txDesc;

		// Loop over faces(polygon)



	return;

	}

	ibDesc.MiscFlags = 0;

		SDL_Delay(1000);

	SDL_Quit();

		pVList[i] = vertexlist[i];

				// access to vertex

	}

int SEGMENT = 36;



	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	delete[] pVList;

}

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pTexture);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext = NULL;

	CRect                rect;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		size_t index_offset = 0;

	SDL_DestroyTexture(tex);

}
	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4 specular;          //反射(r,g,b)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <iostream>

	dsDesc.Format = txDesc.Format;





		return hr;

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	ZeroMemory(&dsDesc, sizeof(dsDesc));



		return hr;



		{

};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.CPUAccessFlags = 0;

	{

	enum KeyPressSurfaces

	m_pSwapChain = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

		1,

	cbDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);



	if (FAILED(hr))



	Vertex* pVList = new Vertex[vcount];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	// Loop over shapes

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

using std::cout; using std::endl;

	XMStoreFloat4(&clb.eyePos, eye);

		}

	cbDesc.CPUAccessFlags = 0;

		{



	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pInputLayout);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.MiscFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





int main(int, char**)

	auto& materials = reader.GetMaterials();

	m_pVertexBuffer = NULL;

	//Key press surfaces constants

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				vertex.push_back(vertex_tmp);



		&materials,



	//頂点バッファ作成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_LEFT,

		return hr;

}

	{

}



	}



			}

		pLevels,

void CD3DTest::Render()

	SAFE_RELEASE(m_pImmediateContext);

	//テクスチャ読み込み

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pDepthStencilTexture = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Quit();



	if (FAILED(hr))

				break;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	SDL_Event e;

using std::cout; using std::endl;



	scDesc.SampleDesc.Quality = 0;

	//vector<WORD> index_t;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SDL_DestroyRenderer(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			switch (e.key.keysym.sym)

				break;

void CD3DTest::Release()

	m_Viewport.Width = (FLOAT)rect.Width();

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

int main(int, char**)





	cbDesc.StructureByteStride = 0;

CD3DTest::CD3DTest()



	scDesc.SampleDesc.Quality = 0;



	//ピクセルシェーダー生成

	return hr;

		return hr;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Format = txDesc.Format;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;



	SDL_DestroyWindow(win);

	//ビューポート設定

		}

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ID3D11Texture2D* pBackBuffer;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	m_pTexture = NULL;

	}





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pTextureView);

	return hr;



	D3D_FEATURE_LEVEL level;





		else if (e.type == SDL_KEYDOWN)

				indexlist.push_back(idx.vertex_index);

	for (int i = 0; i < 3; i++)

			//Select surfaces based on key press

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.CPUAccessFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//インデックスバッファ作成

	if (!error.empty())

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			for (size_t v = 0; v < num_vertices; v++)

}
	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		&m_pDevice,

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		pIList[j] = indexList[j];



	for (int i = 0; i < 3; i++)

	CRect                rect;

	pBackBuffer->Release();

	SAFE_RELEASE(m_pInputLayout);

	txDesc.MiscFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	return 0;

	cbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	}

			index_offset += fv;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pLightBuffer);



}

	SDL_DestroyWindow(win);

	ID3D11Texture2D* pBackBuffer;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&m_pSwapChain,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	txDesc.MipLevels = 1;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	DXGI_SWAP_CHAIN_DESC scDesc;

		delete[] pIList;

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.CPUAccessFlags = 0;



		//User requests quit

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pVertexBuffer = NULL;

	m_Viewport.TopLeftX = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_Delay(1000);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.Height = rect.Height();

		//User requests quit



	}

	SAFE_RELEASE(m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	D3D11_BUFFER_DESC vbDesc;

	//頂点シェーダー生成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 pos;               //座標(x,y,z)

			index_offset += num_vertices;



	XMStoreFloat4(&clb.eyePos, eye);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	m_pSwapChain = NULL;



	SAFE_RELEASE(m_pTextureView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	ID3D11Texture2D* pBackBuffer;

	txDesc.MipLevels = 1;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&scDesc,

	SAFE_RELEASE(m_pImmediateContext);

	m_pRenderTargetView = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

	//First we need to start up SDL, and make sure it went ok



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

	m_pRenderTargetView = NULL;

	m_pDevice = NULL;

#include <iostream>

	XMFLOAT4X4 world;

				tinyobj::real_t ty =

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		if (!reader.Error().empty())

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_FreeSurface(suf);

#include "DirectXManager.h"

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDevice);

			case SDLK_LEFT:

	if (FAILED(hr))

	UINT flags = 0;



#endif

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		KEY_PRESS_SURFACE_TOTAL

HRESULT CD3DTest::Create(HWND hwnd)

		m_pImmediateContext->ClearState();



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&attrib,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	//ピクセルシェーダー生成





	cbDesc.StructureByteStride = 0;



	CRect                rect;



	}

}





			for (size_t v = 0; v < fv; v++)







	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

		&attrib,

		}

};





		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pSampler);



			//Select surfaces based on key press



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vrData.SysMemPitch = 0;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT flags = 0;

	scDesc.OutputWindow = hwnd;





	vrData.pSysMem = &pVList[0];

	ID3D11Texture2D* pBackBuffer;

}
	m_VertexCount = vcount;



		delete[] pVList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	pBackBuffer->Release();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pVertexBuffer = NULL;

		}

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		}

		return hr;



		{

		{

		return hr;

/*



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		pLevels,

{

}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexBuffer = NULL;

	vbDesc.StructureByteStride = 0;

/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	vrData.pSysMem = &pVList[0];

	dsDesc.Format = txDesc.Format;





	XMFLOAT4         eyePos;   //視点座標

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_RIGHT,



		return hr;

	//Key press surfaces constants

	SAFE_RELEASE(m_pSwapChain);



	SAFE_RELEASE(m_pRenderTargetView);



{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_RIGHT:

	SDL_DestroyTexture(tex);

	irData.SysMemPitch = 0;



	bool ret = tinyobj::LoadObj(

			for (size_t v = 0; v < fv; v++)

		&materials,

	bool ret = tinyobj::LoadObj(

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ピクセルシェーダー生成

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#endif

	m_pTextureView = NULL;

	for (const auto& shape : shapes)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		return hr;

#include <SDL.h>

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pVertexShader);

	WORD* pIList = new WORD[icount];

	D3D11_BUFFER_DESC ibDesc;



	{





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ID3D11Texture2D* pBackBuffer;

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	delete[] pVList;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMFLOAT4         ambient;  //環境光(r,g,b)

void CD3DTest::Release()



		&m_pDevice,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				WORD index = idx.vertex_index;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	for (const auto& shape : shapes)



		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}

	enum KeyPressSurfaces

		pLevels,



		cout << "SDL_INIT_ERROR" << endl;

struct ConstantLightBuffer {

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	//vector<Vertex> vertex_t;

	bool ret = tinyobj::LoadObj(

				vertex.push_back(vertex_tmp);

{

		SDL_Delay(1000);

	m_IndexCount = icount;

int main(int, char**)

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.MiscFlags = 0;



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pPixelShader);



	{

		return hr;

	XMFLOAT4X4 world;

				// access to vertex

	vector<WORD> indexList;

CD3DTest::~CD3DTest()

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	m_Viewport.TopLeftX = 0;

	std::vector<tinyobj::material_t> materials;

	std::string error;

	SDL_DestroyTexture(tex);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				// access to vertex

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4         ambient;  //環境光(r,g,b)



		&m_pSwapChain,



	SAFE_RELEASE(m_pPixelShader);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	SDL_Quit();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

				break;

	}

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyRenderer(ren);





		SDL_Delay(1000);

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

int SEGMENT = 36;





	}

	}

			break;

	SDL_Event e;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pSwapChain->Present(0, 0);

}

		return hr;



				indexlist.push_back(index);

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));







				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.CPUAccessFlags = 0;

	while (SDL_PollEvent(&e) != 0)





{

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ConstantLight    pntLight; //点光源

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//深度ステンシルバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4X4 world;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return 0;

{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.BufferDesc.Width = rect.Width();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//インデックスバッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

{

	//First we need to start up SDL, and make sure it went ok

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	m_VertexCount = vcount;

				break;

	vbDesc.StructureByteStride = 0;

	}*/

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		delete[] pIList;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pSwapChain,

	XMFLOAT4         ambient;  //環境光(r,g,b)

};

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

int SEGMENT = 36;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	vrData.SysMemPitch = 0;

		}

		}

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

{



	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

				break;

	ConstantMaterial material; //物体の質感

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			{

	vbDesc.MiscFlags = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <SDL.h>

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//ピクセルシェーダー生成



				indexlist.push_back(index);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				indexlist.push_back(idx.vertex_index);



		}

	Release();

		R"(cube.obj)");

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pDepthStencilView);



	{

		{

	auto& materials = reader.GetMaterials();

	//テクスチャ読み込み



				break;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))



	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	std::vector<tinyobj::material_t> materials;

		return hr;



{

CD3DTest::~CD3DTest()

	m_pVertexShader = NULL;



	scDesc.BufferDesc.Height = rect.Height();

			index_offset += fv;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pImmediateContext);

	dsDesc.Texture2D.MipSlice = 0;

		pIList[j] = indexList[j];

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4X4 projection;

{

	vbDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

		}

	irData.SysMemSlicePitch = 0;

			case SDLK_DOWN:

	txDesc.Width = rect.Width();

	if (FAILED(hr))

		&m_pSwapChain,

		return 1;



	SAFE_RELEASE(m_pTextureView);

	UINT strides = sizeof(Vertex);

	}



	SAFE_RELEASE(m_pSampler);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			default:

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	m_pVertexBuffer = NULL;



		KEY_PRESS_SURFACE_DOWN,

				break;

	SDL_DestroyWindow(win);

	cbDesc.StructureByteStride = 0;



HRESULT CD3DTest::Create(HWND hwnd)





	for (const auto& shape : shapes)

	bool ret = tinyobj::LoadObj(

			for (size_t v = 0; v < fv; v++)

using std::cout; using std::endl;

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vector<WORD> indexList;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	{



	SDL_Event e;

	m_pMatrixBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.MiscFlags = 0;

	m_Viewport.TopLeftX = 0;

				WORD index = idx.vertex_index;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				// access to vertex

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);

		return hr;

		return hr;

	{

void CD3DTest::Render()

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	SDL_Quit();

	ibDesc.StructureByteStride = 0;

	ConstantMatrixBuffer cmb;

		return hr;



	::GetClientRect(hwnd, &rect);

void CD3DTest::Release()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_UP:

			//Select surfaces based on key press

/*

}

		SDL_RenderClear(ren);

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC cbDesc;

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

			{

		SDL_Delay(1000);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	CRect                rect;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

		1,

};

	SDL_Quit();



}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pDevice = NULL;



}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pSampler);

	}

	for (size_t s = 0; s < shapes.size(); s++)

	UINT strides = sizeof(Vertex);

				vertex.push_back(vertex_tmp);





	//頂点レイアウト作成

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

		}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



};

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))



	}

		{



	XMFLOAT4X4 projection;

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//Clean up our objects and quit

	Release();

			switch (e.key.keysym.sym)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		KEY_PRESS_SURFACE_TOTAL



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pDepthStencilTexture);

		}

};

	{

	txDesc.SampleDesc.Count = 1;

		//User requests quit

	txDesc.MipLevels = 1;

		return hr;

	ConstantLight    pntLight; //点光源



	cbDesc.MiscFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	m_pVertexBuffer = NULL;

	m_pSampler = NULL;

		SDL_Delay(1000);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			for (size_t v = 0; v < num_vertices; v++)



	SAFE_RELEASE(m_pSwapChain);

	for (const auto& shape : shapes)

struct ConstantMaterial {

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	cbDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		pVList[i] = vertexlist[i];



			index_offset += num_vertices;

	D3D_FEATURE_LEVEL level;

	txDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pMatrixBuffer);

	}

	SDL_Event e;





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





		}

		return hr;

		return hr;



	tinyobj::attrib_t attrib;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

HRESULT CD3DTest::Create(HWND hwnd)

		1,

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	for (size_t s = 0; s < shapes.size(); s++)



	m_IndexCount = icount;

	std::string imagePath = "hello.bmp";



	std::string imagePath = "hello.bmp";

		pLevels,

 */

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_RIGHT,

		size_t index_offset = 0;  // インデントのオフセット

{

		&attrib,

	tinyobj::ObjReaderConfig reader_config;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))



	XMFLOAT4 ambient;           //環境(r,g,b)

void CD3DTest::Release()

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantMaterial material; //物体の質感

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

	m_pTextureView = NULL;

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



{

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		D3D11_SDK_VERSION,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

struct ConstantMaterial {

			index_offset += fv;

	SAFE_RELEASE(m_pDevice);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//ビューポート設定

	txDesc.Width = rect.Width();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

 */

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	CRect                rect;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pTexture = NULL;

		return hr;

	//ピクセルシェーダー生成

	if (FAILED(hr))



		return hr;

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		// Loop over faces(polygon)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))



{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ID3D11Texture2D* pBackBuffer;

			case SDLK_DOWN:

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	if (FAILED(hr))

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	m_pTextureView = NULL;



		}

	SAFE_RELEASE(m_pSampler);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	if (!reader.Warning().empty())

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		flags,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{



	vbDesc.MiscFlags = 0;



	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

		if (e.type == SDL_QUIT)

			{

}
	m_Viewport.MaxDepth = 1.0f;

	m_Viewport.Height = (FLOAT)rect.Height();

	vbDesc.StructureByteStride = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





			}

	XMFLOAT4X4 view;

	if (FAILED(hr))

	if (FAILED(hr))

		if (!ret)

				// access to vertex

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D_FEATURE_LEVEL level;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_DestroyRenderer(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

CD3DTest::~CD3DTest()



	tinyobj::ObjReaderConfig reader_config;

		return hr;

			}

		KEY_PRESS_SURFACE_UP,

	m_pSwapChain = NULL;

	m_Viewport.TopLeftY = 0;

		{

	m_VertexCount = 0;



	m_pLightBuffer = NULL;

}

	txDesc.CPUAccessFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	//テクスチャ読み込み

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	SAFE_RELEASE(m_pVertexShader);

		}

	XMFLOAT4X4 projection;





			// Loop over vertices in the face.



	XMFLOAT4 specular;          //反射(r,g,b)



struct ConstantLight {

#include "DirectXManager.h"

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))





	txDesc.ArraySize = 1;





}



	m_pIndexBuffer = NULL;

		KEY_PRESS_SURFACE_UP,



	//vector<WORD> index_t;

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			int num_vertices = shape.mesh.num_face_vertices[f];

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			for (size_t v = 0; v < fv; v++)

	SAFE_RELEASE(m_pIndexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.MiscFlags = 0;

	//Create Index

				break;

	{

	txDesc.SampleDesc.Count = 1;

				break;

	m_pSwapChain->Present(0, 0);

void CD3DTest::Release()



	tinyobj::attrib_t attrib;

	m_Viewport.TopLeftY = 0;

struct ConstantLightBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	};

	SDL_DestroyRenderer(ren);

	for (int i = 0; i < 3; i++)



				break;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	//First we need to start up SDL, and make sure it went ok

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		delete[] pIList;

		SDL_RenderClear(ren);

	}

	//Create Index

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_LEFT:

	if (FAILED(hr))

	//Key press surfaces constants

	while (SDL_PollEvent(&e) != 0)

	m_Viewport.Width = (FLOAT)rect.Width();

	for (const auto& shape : shapes)

	m_pVertexShader = NULL;

struct ConstantMatrixBuffer {

		return hr;

	for (const auto& shape : shapes)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pTexture);

	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC cbDesc;

	{

	scDesc.BufferDesc.Height = rect.Height();

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_DOWN,

				WORD index = idx.vertex_index;

		exit(1);



struct ConstantMatrixBuffer {

#ifdef _DEBUG

		{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			{

	return 0;



#include "DirectXManager.h"



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	reader_config.mtl_search_path = "./"; // Path to material files

struct ConstantMatrixBuffer {

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Vertex* pVList = new Vertex[vcount];

	m_VertexCount = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		{



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.SampleDesc.Count = 1;



		{



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		}

	SAFE_RELEASE(m_pIndexBuffer);

struct ConstantMatrixBuffer {





	SAFE_RELEASE(m_pVertexShader);

void CD3DTest::Release()

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

		NULL,



	// Loop over shapes

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{





/*



	}

	m_pSwapChain = NULL;

				vertex.push_back(vertex_tmp);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	int     vcount = vertexlist.size();

 * Lesson 1: Hello World!

	m_pSwapChain->Present(0, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vrData.pSysMem = &pVList[0];

	//テクスチャ読み込み

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&attrib,

	//頂点バッファ作成

	m_pSwapChain->Present(0, 0);

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



	return 0;

	{

		// Loop over faces(polygon)



	vrData.SysMemSlicePitch = 0;

	m_pIndexBuffer = NULL;

{

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_BUFFER_DESC vbDesc;

	{

		return hr;

	D3D11_BUFFER_DESC ibDesc;



		{

	m_IndexCount = icount;

	auto& materials = reader.GetMaterials();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (m_pImmediateContext)

	{





{

	SAFE_RELEASE(m_pVertexShader);

	Vertex* pVList = new Vertex[vcount];

	UINT offsets = 0;

	float    nearZ = 0.1f;



			{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



int main(int, char**)

	m_pLightBuffer = NULL;

		return hr;

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	irData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderPresent(ren);

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.pSysMem = &pIList[0];

	{

	ConstantLightBuffer clb;

			case SDLK_RIGHT:

			{









	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D_FEATURE_LEVEL level;

		&level,

		&m_pSwapChain,



			index_offset += num_vertices;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	enum KeyPressSurfaces

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			{

		size_t index_offset = 0;

	/*

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.Format = txDesc.Format;

	for (int i = 0; i < 3; i++)





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

				break;

{

				tinyobj::real_t ty =



	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		KEY_PRESS_SURFACE_UP,

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				vertex.push_back(vertex_tmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

 */







	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		D3D_DRIVER_TYPE_HARDWARE,





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ConstantLight    pntLight; //点光源

				vertex.push_back(vertex_tmp);

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

		if (!ret)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	int     vcount = vertexlist.size();

				WORD index = idx.vertex_index;

	delete[] pIList;

		return hr;

	m_pVertexBuffer = NULL;

	UINT offsets = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pSwapChain->Present(0, 0);

	{

	ConstantMatrixBuffer cmb;

	std::string error;

/*



CD3DTest::CD3DTest()

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



};


