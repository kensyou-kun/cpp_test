	D3D11_BUFFER_DESC ibDesc;

int main(int, char**)

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			{



	XMFLOAT4 pos;               //座標(x,y,z)

			}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	pBackBuffer->Release();



				break;

 * Lesson 1: Hello World!







			{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.StructureByteStride = 0;



				break;

	enum KeyPressSurfaces

	{

	enum KeyPressSurfaces

		return hr;

{

	/*



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







	m_Viewport.MaxDepth = 1.0f;

struct ConstantMatrixBuffer {





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA irData;

		SDL_Delay(1000);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;



		&attrib,

	auto& attrib = reader.GetAttrib();

	};

	auto& shapes = reader.GetShapes();

	if (m_pImmediateContext)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pSwapChain->Present(0, 0);

			{

		}

	Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Count = 1;

	{

	m_pDepthStencilTexture = NULL;



}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_UP,

	Release();

	D3D11_SAMPLER_DESC smpDesc;

				vertex.push_back(vertex_tmp);

#include <iostream>

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_DOWN,

	scDesc.BufferCount = 1;

		flags,





		return hr;

	ibDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Width = rect.Width();

	/*

	{

		delete[] pIList;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		delete[] pVList;

		SDL_RenderClear(ren);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

		pLevels,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pRenderTargetView);

	vrData.SysMemSlicePitch = 0;

		return hr;

	delete[] pIList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ID3D11Texture2D* pBackBuffer;



		cout << "SDL_INIT_ERROR" << endl;

	vrData.SysMemSlicePitch = 0;

		SDL_Delay(1000);

	m_pRenderTargetView = NULL;

	//頂点レイアウト作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemSlicePitch = 0;

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			case SDLK_DOWN:



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

using std::cout; using std::endl;

		R"(cube.obj)");

	for (int i = 0; i < 3; i++)

		{

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ibDesc.MiscFlags = 0;



	::GetClientRect(hwnd, &rect);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pImmediateContext);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int main(int, char**)

	{

		&error,

	SDL_Quit();



	m_pIndexBuffer = NULL;

	m_VertexCount = 0;

	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

{

	m_Viewport.MinDepth = 0.0f;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Create Index

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_RenderClear(ren);

CD3DTest::~CD3DTest()

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

int main(int, char**)

	SAFE_RELEASE(m_pTexture);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_RIGHT,

	irData.pSysMem = &pIList[0];



	SAFE_RELEASE(m_pTextureView);

			case SDLK_UP:

		if (e.type == SDL_QUIT)

		&m_pSwapChain,

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	for (int i = 0; i < vcount; i++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		size_t index_offset = 0;  // インデントのオフセット



	//ビューポート設定

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	// Loop over shapes

	if (FAILED(hr))

using std::cout; using std::endl;



	SDL_DestroyTexture(tex);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

struct ConstantLight {

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_Delay(1000);

	//深度ステンシルバッファ作成

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pLightBuffer = NULL;



{

		&scDesc,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	CRect                rect;

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			case SDLK_RIGHT:

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilTexture);







	}

	if (!reader.ParseFromFile(inputfile, reader_config))

		NULL,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	m_Viewport.MinDepth = 0.0f;

	vector<WORD> indexList;

		{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			{

	XMFLOAT4 pos;               //座標(x,y,z)

				indexlist.push_back(index);

		if (!ret)

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	int     vcount = vertexlist.size();

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

		SDL_Delay(1000);

	}

void CD3DTest::Render()

		KEY_PRESS_SURFACE_TOTAL

#ifdef _DEBUG

	return 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

int SEGMENT = 36;

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		if (e.type == SDL_QUIT)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pRenderTargetView = NULL;

	m_Viewport.MinDepth = 0.0f;

			case SDLK_UP:

	m_pPixelShader = NULL;

	ibDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

		{

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	::ZeroMemory(&scDesc, sizeof(scDesc));

	UINT strides = sizeof(Vertex);

	irData.SysMemSlicePitch = 0;

	scDesc.Windowed = TRUE;

			{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.SampleDesc.Quality = 0;

}
	//Key press surfaces constants

	m_pIndexBuffer = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	{

	//ピクセルシェーダー生成



			case SDLK_UP:

	if (m_pImmediateContext)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	m_Viewport.Height = (FLOAT)rect.Height();

		exit(1);

	m_IndexCount = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		KEY_PRESS_SURFACE_LEFT,

	{

		}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pDevice = NULL;

};

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& shapes = reader.GetShapes();

	float    fov = XMConvertToRadians(20.0f);

			switch (e.key.keysym.sym)

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSampler);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pInputLayout);

		}





			case SDLK_LEFT:

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD   icount = indexList.size();

	m_pVertexShader = NULL;

		return 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vrData.pSysMem = &pVList[0];



	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



	SAFE_RELEASE(m_pLightBuffer);

	}



	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.CPUAccessFlags = 0;

};

	SAFE_RELEASE(m_pSwapChain);



	//vector<WORD> index_t;



#include <iostream>





		SDL_Delay(1000);

	UINT flags = 0;

	SAFE_RELEASE(m_pVertexShader);

	for (int j = 0; j < icount; j++)

	for (int j = 0; j < icount; j++)

		KEY_PRESS_SURFACE_DEFAULT,

	std::string imagePath = "hello.bmp";

};

	/*

	XMStoreFloat4(&clb.ambient, lightAmbient);



		return hr;



	Release();

	m_pDepthStencilView = NULL;

	pBackBuffer->Release();



	//ビューポート設定

	LoadObj(vertexlist, indexList);

struct ConstantMatrixBuffer {

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);

	XMFLOAT4X4 view;

		size_t index_offset = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



};

		exit(1);

		return hr;

	m_pTextureView = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

		return hr;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&attrib,

	}

		// Loop over faces(polygon)

	{

#include <SDL.h>

};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

}

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);



		SDL_Delay(1000);





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	int     vcount = vertexlist.size();

	ConstantLight    pntLight; //点光源



		KEY_PRESS_SURFACE_TOTAL

	}

}

		return hr;

			// Loop over vertices in the face.

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pMatrixBuffer = NULL;

			exit(1);

		return hr;

			for (size_t v = 0; v < fv; v++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pMatrixBuffer = NULL;

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pRenderTargetView);

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	LoadObj(vertexlist, indexList);

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

	m_pVertexShader = NULL;

	D3D11_BUFFER_DESC ibDesc;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SAFE_RELEASE(m_pTexture);

void CD3DTest::Release()

 * Lesson 1: Hello World!

	SDL_DestroyTexture(tex);

	tinyobj::ObjReaderConfig reader_config;







				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				indexlist.push_back(index);

	float    nearZ = 0.1f;



			}

	SDL_DestroyTexture(tex);

			{



		// Loop over faces(polygon)

		}

				// access to vertex

	if (FAILED(hr))



		// Loop over faces(polygon)

void CD3DTest::Release()

	{



		&m_pSwapChain,

		}

	}



		pVList[i] = vertexlist[i];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.BufferCount = 1;

		}

	scDesc.SampleDesc.Count = 1;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		// Loop over faces(polygon)

	txDesc.Height = rect.Height();



	//インデックスバッファ作成

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	while (SDL_PollEvent(&e) != 0)

		return hr;

	//Create Index



			index_offset += fv;

}



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pIList;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		else if (e.type == SDL_KEYDOWN)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	irData.pSysMem = &pIList[0];



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ConstantLightBuffer clb;

	XMFLOAT4 specular;          //反射(r,g,b)

		//User requests quit

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

		return hr;

			switch (e.key.keysym.sym)



	Release();

	m_Viewport.Width = (FLOAT)rect.Width();



	SDL_Event e;

	XMFLOAT4X4 world;

#include <SDL.h>



}

	XMFLOAT4X4 view;



	LoadObj(vertexlist, indexList);

				// access to vertex

		flags,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



}

	std::vector<tinyobj::shape_t> shapes;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();

			index_offset += fv;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pTextureView);

	m_VertexCount = vcount;

{

	m_pLightBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//インデックスバッファ作成



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	//深度ステンシルバッファ作成

	txDesc.MiscFlags = 0;

int main(int, char**)

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	for (int i = 0; i < vcount; i++)

















	ZeroMemory(&dsDesc, sizeof(dsDesc));

	while (SDL_PollEvent(&e) != 0)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



			exit(1);

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyTexture(tex);



	m_Viewport.TopLeftX = 0;

	scDesc.SampleDesc.Quality = 0;

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pPixelShader = NULL;



	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderClear(ren);

}

	m_pTexture = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#include <iostream>

	irData.SysMemPitch = 0;

		R"(cube.obj)");

	vbDesc.StructureByteStride = 0;

			case SDLK_LEFT:





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	return 0;

	auto& attrib = reader.GetAttrib();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_IndexCount = icount;



		SDL_Delay(1000);

CD3DTest::CD3DTest()

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,



	ibDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& shapes = reader.GetShapes();



	pBackBuffer->Release();

		KEY_PRESS_SURFACE_RIGHT,

			{

struct ConstantLight {



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				break;

	while (SDL_PollEvent(&e) != 0)

	SDL_Quit();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4X4 view;

	{



void CD3DTest::Render()



	m_pVertexBuffer = NULL;

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&shapes,

 * Lesson 1: Hello World!

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	float    fov = XMConvertToRadians(20.0f);

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<WORD> index_t;

	XMStoreFloat4(&clb.eyePos, eye);



		&shapes,

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	SAFE_RELEASE(m_pRenderTargetView);



	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	float    fov = XMConvertToRadians(20.0f);

	txDesc.MiscFlags = 0;

	// Loop over shapes

}
				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_VertexCount = vcount;

	SDL_DestroyTexture(tex);

			//Select surfaces based on key press

			case SDLK_LEFT:

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	SDL_Quit();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		size_t index_offset = 0;

	return 0;

	ConstantLight    pntLight; //点光源



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.MiscFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pImmediateContext);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		return hr;

		KEY_PRESS_SURFACE_TOTAL

	std::string imagePath = "hello.bmp";

	std::vector<tinyobj::shape_t> shapes;

			switch (e.key.keysym.sym)

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	::GetClientRect(hwnd, &rect);



	XMFLOAT4X4 projection;

	txDesc.ArraySize = 1;

	//vector<Vertex> vertex_t;

};

	Vertex* pVList = new Vertex[vcount];

 * Lesson 1: Hello World!

	return;

	pBackBuffer->Release();

	m_pDepthStencilTexture = NULL;

 * Lesson 1: Hello World!

				tinyobj::real_t ty =

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

	vbDesc.StructureByteStride = 0;

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標



	vector<WORD> indexList;

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Count = 1;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			case SDLK_RIGHT:

	m_pRenderTargetView = NULL;

	UINT strides = sizeof(Vertex);

	m_pTexture = NULL;

				break;

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	SDL_DestroyWindow(win);

}

		&m_pImmediateContext);

struct ConstantLight {

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

};

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderPresent(ren);

			}

	//vector<Vertex> vertex_t;

	//頂点レイアウト作成



			break;



};



	if (FAILED(hr))

/*

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vector<WORD> indexList;

			case SDLK_RIGHT:



		return hr;

	ibDesc.MiscFlags = 0;

	return 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pTexture = NULL;

#ifdef _DEBUG

				WORD index = idx.vertex_index;



	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

				// access to vertex

 * Lesson 1: Hello World!

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.MiscFlags = 0;

	txDesc.ArraySize = 1;

int main(int, char**)

	SAFE_RELEASE(m_pLightBuffer);



	for (const auto& shape : shapes)

	m_pSampler = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

			}

	m_pDepthStencilView = NULL;



	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	UINT offsets = 0;

#include <iostream>

struct ConstantLightBuffer {

	//テクスチャ読み込み

	txDesc.CPUAccessFlags = 0;

	HRESULT              hr;





	UINT offsets = 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

CD3DTest::~CD3DTest()

struct ConstantLight {



	ID3D11Texture2D* pBackBuffer;

	m_pDepthStencilView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

			{



	cbDesc.StructureByteStride = 0;











	UINT strides = sizeof(Vertex);

		return hr;



	m_pInputLayout = NULL;



#define TINYOBJLOADER_IMPLEMENTATION

	if (!reader.Warning().empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				break;

	}



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&level,



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		size_t index_offset = 0;

	//Clean up our objects and quit

	{

	bool ret = tinyobj::LoadObj(



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pLightBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_FreeSurface(bmp);

		SDL_RenderPresent(ren);

		m_pImmediateContext->ClearState();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.eyePos, eye);

	CRect                rect;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			}



		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D11_SAMPLER_DESC smpDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantLight {

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

	m_pTextureView = NULL;

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

		return hr;

};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pTexture = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}*/



		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pImmediateContext);

				break;

	}



	m_VertexCount = vcount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	CRect                rect;

	DXGI_SWAP_CHAIN_DESC scDesc;

	dsDesc.Texture2D.MipSlice = 0;

	UINT offsets = 0;

struct ConstantMaterial {



struct ConstantMaterial {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}*/

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ピクセルシェーダー生成

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.OutputWindow = hwnd;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//頂点レイアウト作成

	while (SDL_PollEvent(&e) != 0)





	m_pIndexBuffer = NULL;

		pLevels,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

				indexlist.push_back(idx.vertex_index);



#include "DirectXManager.h"





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

	return 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		if (!ret)

	/*

	if (FAILED(hr))

	//Create Index

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyWindow(win);

	vrData.pSysMem = &pVList[0];

				vertex.push_back(vertex_tmp);

	{

CD3DTest::CD3DTest()

	SDL_DestroyWindow(win);

	m_pInputLayout = NULL;

	D3D11_SUBRESOURCE_DATA irData;



	SDL_DestroyTexture(tex);

				// access to vertex

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





			default:

	irData.SysMemPitch = 0;

	float    fov = XMConvertToRadians(20.0f);

	delete[] pIList;

	cbDesc.CPUAccessFlags = 0;

			case SDLK_LEFT:





	enum KeyPressSurfaces

	if (FAILED(hr))



	auto& shapes = reader.GetShapes();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}



#define TINYOBJLOADER_IMPLEMENTATION

				break;

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}




		{



			for (size_t v = 0; v < fv; v++)

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;



		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	dsDesc.Format = txDesc.Format;

	Release();



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.SampleDesc.Quality = 0;

	}

	::GetClientRect(hwnd, &rect);

		pLevels,

	// Loop over shapes

	if (FAILED(hr))

}

	tinyobj::attrib_t attrib;

	ibDesc.MiscFlags = 0;

};

	//ビューポート設定

	SDL_DestroyTexture(tex);



};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			//Select surfaces based on key press

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



struct ConstantLightBuffer {

	return 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMatrixBuffer cmb;

		return hr;

		pIList[j] = indexList[j];

	for (int i = 0; i < 3; i++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	};

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

		if (e.type == SDL_QUIT)

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderClear(ren);

	tinyobj::attrib_t attrib;

		flags,

		delete[] pVList;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

	{

	for (size_t s = 0; s < shapes.size(); s++)

}

				tinyobj::real_t tx =





	}

		pLevels,

#ifdef _DEBUG

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	D3D11_TEXTURE2D_DESC txDesc;

		}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pMatrixBuffer = NULL;



		return hr;

CD3DTest::CD3DTest()

void CD3DTest::Release()

	m_Viewport.TopLeftX = 0;

		{

			exit(1);





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pDepthStencilView);

		SDL_Delay(1000);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_VertexCount = 0;

	float    fov = XMConvertToRadians(20.0f);

	UINT flags = 0;

 * Lesson 1: Hello World!



	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.ArraySize = 1;

		return hr;

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	Release();

	while (SDL_PollEvent(&e) != 0)

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;





	for (int i = 0; i < 3; i++)



	SAFE_RELEASE(m_pDepthStencilTexture);

#define TINYOBJLOADER_IMPLEMENTATION

	//頂点シェーダー生成

				break;

	ConstantLight    pntLight; //点光源

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

struct ConstantMaterial {

/*

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				vertex.push_back(vertex_tmp);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

 */



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	return hr;

	txDesc.MipLevels = 1;

{

	//頂点バッファ作成

	D3D11_BUFFER_DESC vbDesc;





		NULL,

	float    nearZ = 0.1f;

int main(int, char**)

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pTextureView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		else if (e.type == SDL_KEYDOWN)

			{

		//User requests quit

		KEY_PRESS_SURFACE_TOTAL

	D3D11_TEXTURE2D_DESC txDesc;

			index_offset += fv;

		&scDesc,

	int     vcount = vertexlist.size();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

		return hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	for (const auto& shape : shapes)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 ambient;           //環境(r,g,b)



	delete[] pVList;

{

			exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				WORD index = idx.vertex_index;

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);



	m_pInputLayout = NULL;

	Vertex* pVList = new Vertex[vcount];

	}

		&attrib,

	m_pDevice = NULL;

		return hr;

	//定数バッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (m_pImmediateContext)

	//Create Index



HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.SampleDesc.Count = 1;





	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.ambient, lightAmbient);



}

			//Select surfaces based on key press

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

	SDL_Event e;

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.SysMemPitch = 0;



				WORD index = idx.vertex_index;

	HRESULT              hr;

	enum KeyPressSurfaces

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	tinyobj::ObjReaderConfig reader_config;



			{



			index_offset += num_vertices;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_pTexture = NULL;

			{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;



	if (FAILED(hr))



			default:

	Release();





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vector<WORD> indexList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;

	if (m_pImmediateContext)



			case SDLK_DOWN:

	float    farZ = 100.0f;

			index_offset += fv;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//First we need to start up SDL, and make sure it went ok

		size_t index_offset = 0;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pSampler);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit

				// access to vertex

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



}

	for (int i = 0; i < 3; i++)

	m_VertexCount = vcount;

};

{

	D3D11_SUBRESOURCE_DATA irData;



	::GetClientRect(hwnd, &rect);

		delete[] pIList;

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pPixelShader);

	m_IndexCount = icount;

	ConstantLightBuffer clb;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);



			}

		//User presses a key



	{



HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.CPUAccessFlags = 0;



				break;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	tinyobj::ObjReaderConfig reader_config;



		SDL_RenderPresent(ren);

	auto& attrib = reader.GetAttrib();

		return hr;

	ID3D11Texture2D* pBackBuffer;

	ibDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	{

};

		//User presses a key

		delete[] pIList;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (int j = 0; j < icount; j++)

	}

{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;







	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		SDL_Delay(1000);



				tinyobj::real_t ty =

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}

	Release();

	}



	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	//ビューポート設定



		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext = NULL;

	m_pVertexShader = NULL;

		&scDesc,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	if (FAILED(hr))

	vrData.SysMemPitch = 0;



int main(int, char**)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	return;

	m_Viewport.TopLeftY = 0;



	std::vector<tinyobj::shape_t> shapes;

{





	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;



	};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	if (FAILED(hr))

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	D3D11_SUBRESOURCE_DATA irData;

	tinyobj::attrib_t attrib;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//vector<Vertex> vertex_t;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	scDesc.OutputWindow = hwnd;

{





	Vertex* pVList = new Vertex[vcount];

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include "DirectXManager.h"

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Create Index

			{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

#include <SDL.h>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

			}





	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		m_pImmediateContext->ClearState();







			index_offset += num_vertices;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_FreeSurface(suf);

	return hr;

		pLevels,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				break;

	irData.pSysMem = &pIList[0];





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		{



	vbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;

	txDesc.SampleDesc.Count = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



struct ConstantLight {



	if (FAILED(hr))



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{



		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				WORD index = idx.vertex_index;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	//ビューポート設定

	m_pDepthStencilTexture = NULL;

	{

		}

		SDL_Delay(1000);



		//User requests quit



struct ConstantMatrixBuffer {



	{

#ifdef _DEBUG

	//定数バッファ作成



			}

#include <iostream>



		&m_pImmediateContext);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::string error;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyTexture(tex);

	vrData.SysMemSlicePitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

	vrData.SysMemPitch = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	std::string error;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		size_t index_offset = 0;

}



	//深度ステンシルバッファ作成

	{

	m_pSwapChain = NULL;

/*

	{

	for (int j = 0; j < icount; j++)



		if (e.type == SDL_QUIT)

			switch (e.key.keysym.sym)



	delete[] pVList;

	dsDesc.Texture2D.MipSlice = 0;



		pIList[j] = indexList[j];

	//vector<Vertex> vertex_t;

 * Lesson 1: Hello World!



	SDL_DestroyRenderer(ren);

			}



		&level,



	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	//Clean up our objects and quit

	/*



				WORD index = idx.vertex_index;

		flags,

	scDesc.SampleDesc.Quality = 0;

struct ConstantLight {

		pVList[i] = vertexlist[i];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



			}

			default:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,



	SDL_DestroyWindow(win);

	scDesc.Windowed = TRUE;



	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pPixelShader);

	m_pDevice = NULL;

	cbDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	return 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	if (!reader.Warning().empty())

{

#include "DirectXManager.h"

	if (m_pImmediateContext)

	}

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemPitch = 0;

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderClear(ren);

	ConstantMatrixBuffer cmb;

		return hr;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_SUBRESOURCE_DATA irData;

		SDL_Delay(1000);



				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];







		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftY = 0;



	SAFE_RELEASE(m_pTextureView);

		cout << "SDL_INIT_ERROR" << endl;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				indexlist.push_back(index);

	txDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;





	{

	SAFE_RELEASE(m_pDepthStencilView);



				vertex.push_back(vertex_tmp);

	scDesc.Windowed = TRUE;

#ifdef _DEBUG

	if (FAILED(hr))

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	m_pTextureView = NULL;

		delete[] pIList;

	m_pSwapChain = NULL;

	delete[] pVList;

	std::string error;

{

		return hr;

	//Key press surfaces constants

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	irData.pSysMem = &pIList[0];



	irData.SysMemPitch = 0;

	if (FAILED(hr))

		&m_pSwapChain,



		else if (e.type == SDL_KEYDOWN)



	D3D11_BUFFER_DESC cbDesc;

	//頂点レイアウト作成



	SAFE_RELEASE(m_pTextureView);

	// Loop over shapes

			for (size_t v = 0; v < num_vertices; v++)

		R"(cube.obj)");

	UINT offsets = 0;

{

	irData.pSysMem = &pIList[0];

			// Loop over vertices in the face.

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	irData.pSysMem = &pIList[0];

	}*/

	vrData.SysMemSlicePitch = 0;

			for (size_t v = 0; v < fv; v++)

		NULL,

	SDL_FreeSurface(suf);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pRenderTargetView);

	vbDesc.MiscFlags = 0;

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	}*/

	m_IndexCount = icount;

}

	{

	SDL_Quit();

}

		delete[] pVList;

	m_pPixelShader = NULL;

		SDL_RenderClear(ren);

	m_pSampler = NULL;

void CD3DTest::Render()

	txDesc.MipLevels = 1;

	reader_config.mtl_search_path = "./"; // Path to material files

		m_pImmediateContext->ClearState();

	vrData.SysMemSlicePitch = 0;



	}

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return 1;

};

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		NULL,





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::real_t tx =

	//Clean up our objects and quit

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	cbDesc.CPUAccessFlags = 0;



	m_pDevice = NULL;

struct ConstantLight {



		&attrib,

		if (!reader.Error().empty())

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pTexture);

		//User presses a key

	irData.pSysMem = &pIList[0];

		return hr;

			//Select surfaces based on key press

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{

			// Loop over vertices in the face.

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantLight    pntLight; //点光源



		{

	cbDesc.MiscFlags = 0;

{





		return 1;



	XMFLOAT4X4 world;

	std::string imagePath = "hello.bmp";

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			}

	//First we need to start up SDL, and make sure it went ok

		delete[] pIList;

		size_t index_offset = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			for (size_t v = 0; v < fv; v++)



	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pTextureView);

	delete[] pIList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			exit(1);

	//First we need to start up SDL, and make sure it went ok

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				// access to vertex

}

				indexlist.push_back(idx.vertex_index);

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_TEXTURE2D_DESC txDesc;



	XMFLOAT4 pos;               //座標(x,y,z)

			switch (e.key.keysym.sym)

};



 */

	XMFLOAT4X4 view;

			//Select surfaces based on key press

}

	vbDesc.CPUAccessFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				// access to vertex



		m_pImmediateContext->ClearState();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_Viewport.MaxDepth = 1.0f;

		&m_pImmediateContext);

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pLightBuffer);



	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Event e;



	{

				indexlist.push_back(index);

void CD3DTest::Release()

struct ConstantLight {

				// access to vertex

		&attrib,



		if (!ret)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT flags = 0;

		}



{

};



	m_pImmediateContext = NULL;



		if (!ret)



	UINT flags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_LEFT,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

		SDL_RenderClear(ren);

}



	}

			case SDLK_UP:



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_FreeSurface(bmp);

	vrData.SysMemPitch = 0;

	tinyobj::ObjReader reader;

	m_pVertexShader = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pDevice,

};

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	irData.pSysMem = &pIList[0];



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

	enum KeyPressSurfaces

	txDesc.MiscFlags = 0;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pTextureView);

	D3D11_BUFFER_DESC cbDesc;

			exit(1);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

using std::cout; using std::endl;

		&shapes,

	SAFE_RELEASE(m_pTexture);



	m_pRenderTargetView = NULL;

			}

{



struct ConstantMatrixBuffer {

				// access to vertex

#include "DirectXManager.h"

	scDesc.Windowed = TRUE;



};

{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pSwapChain);

		delete[] pVList;

	m_pMatrixBuffer = NULL;

				indexlist.push_back(idx.vertex_index);

		KEY_PRESS_SURFACE_RIGHT,

		if (!reader.Error().empty())

	auto& materials = reader.GetMaterials();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	ConstantMaterial material; //物体の質感

		&attrib,



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		SDL_RenderCopy(ren, tex, NULL, NULL);



}

	SAFE_RELEASE(m_pDepthStencilView);

			for (size_t v = 0; v < num_vertices; v++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	txDesc.CPUAccessFlags = 0;

			case SDLK_LEFT:

				indexlist.push_back(idx.vertex_index);



		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	for (int i = 0; i < 3; i++)



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&attrib,

	if (FAILED(hr))



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	tinyobj::ObjReader reader;

 */

}

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		KEY_PRESS_SURFACE_DEFAULT,



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

				vertex.push_back(vertex_tmp);

		return hr;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	delete[] pVList;

	dsDesc.Format = txDesc.Format;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);









		1,

			}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyWindow(win);





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

};

	auto& materials = reader.GetMaterials();

		pVList[i] = vertexlist[i];

	m_pTexture = NULL;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			index_offset += fv;

	SAFE_RELEASE(m_pVertexShader);

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (!ret)





	m_pLightBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.MipLevels = 1;





				break;

			for (size_t v = 0; v < fv; v++)

	vbDesc.StructureByteStride = 0;

	m_pTexture = NULL;

	}



	}



		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ConstantLightBuffer clb;





CD3DTest::~CD3DTest()



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.Windowed = TRUE;



	auto& attrib = reader.GetAttrib();

int SEGMENT = 36;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		D3D11_SDK_VERSION,



	dsDesc.Texture2D.MipSlice = 0;



	SDL_DestroyTexture(tex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pSampler);

		else if (e.type == SDL_KEYDOWN)

	}

		// Loop over faces(polygon)

	{

				WORD index = idx.vertex_index;

	UINT flags = 0;

	txDesc.SampleDesc.Count = 1;

};

	//Create Index

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t ty =

	{



	XMStoreFloat4(&clb.ambient, lightAmbient);

#include "DirectXManager.h"

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				WORD index = idx.vertex_index;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

}

 * Lesson 1: Hello World!

			exit(1);

	//ピクセルシェーダー生成





	vector<WORD> indexList;

	D3D11_SUBRESOURCE_DATA vrData;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

void CD3DTest::Render()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vector<WORD> indexList;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	return;

	//Key press surfaces constants

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_pDepthStencilTexture = NULL;

	cbDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	SDL_FreeSurface(bmp);

	float    farZ = 100.0f;

	//頂点レイアウト作成

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC cbDesc;

	::GetClientRect(hwnd, &rect);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMaterial material; //物体の質感

			for (size_t v = 0; v < num_vertices; v++)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		size_t index_offset = 0;

	dsDesc.Format = txDesc.Format;

		return hr;

	if (FAILED(hr))

		NULL,

	if (FAILED(hr))



		exit(1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_FreeSurface(suf);

	for (int i = 0; i < vcount; i++)

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	txDesc.MipLevels = 1;

{

	if (FAILED(hr))

		&m_pSwapChain,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//Key press surfaces constants

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Clean up our objects and quit

	SAFE_RELEASE(m_pLightBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_IndexCount = icount;



CD3DTest::CD3DTest()

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		flags,



		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	SAFE_RELEASE(m_pDepthStencilView);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = vcount;

	//ビューポート設定

	m_Viewport.TopLeftX = 0;

}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	for (int j = 0; j < icount; j++)



	}

{





	SDL_DestroyTexture(tex);

	//ビューポート設定

	reader_config.mtl_search_path = "./"; // Path to material files

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			exit(1);



	cbDesc.MiscFlags = 0;

		{

	SDL_FreeSurface(bmp);

			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

 * Lesson 1: Hello World!

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

};

	txDesc.MiscFlags = 0;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&m_pSwapChain,

	auto& attrib = reader.GetAttrib();

	ConstantLight    pntLight; //点光源

	SDL_Quit();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Key press surfaces constants

	dsDesc.Texture2D.MipSlice = 0;

			for (size_t v = 0; v < fv; v++)

	D3D11_SAMPLER_DESC smpDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	WORD* pIList = new WORD[icount];

			exit(1);

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))



	{

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_SUBRESOURCE_DATA vrData;



	{

	if (!reader.ParseFromFile(inputfile, reader_config))

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (e.type == SDL_QUIT)

				WORD index = idx.vertex_index;

	HRESULT              hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	Vertex* pVList = new Vertex[vcount];

	txDesc.MipLevels = 1;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	tinyobj::ObjReaderConfig reader_config;

		}

		return hr;

	return 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&materials,

	//テクスチャ読み込み

	m_Viewport.MaxDepth = 1.0f;

	m_pIndexBuffer = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_DestroyRenderer(ren);

		pIList[j] = indexList[j];



	}

	if (FAILED(hr))

	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pSampler);

	m_pSwapChain = NULL;

	//vector<Vertex> vertex_t;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	cbDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	XMFLOAT4         ambient;  //環境光(r,g,b)



				// access to vertex

	//頂点バッファ作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&shapes,

using std::cout; using std::endl;

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_IndexCount = icount;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	D3D11_TEXTURE2D_DESC txDesc;

		&shapes,

/*

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

CD3DTest::CD3DTest()

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vrData.SysMemSlicePitch = 0;

	}

	m_pTexture = NULL;







	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&scDesc,



	delete[] pIList;

				// access to vertex

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

		&materials,

	SDL_FreeSurface(suf);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_Viewport.MaxDepth = 1.0f;

	vector<WORD> indexList;

	CRect                rect;

		SDL_Delay(1000);

struct ConstantLightBuffer {

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.SampleDesc.Quality = 0;

	//ビューポート設定

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	m_VertexCount = vcount;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pTexture = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_SUBRESOURCE_DATA vrData;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

int main(int, char**)



}

		{

				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Quit();

		1,

	SDL_Quit();

			}

	D3D11_TEXTURE2D_DESC txDesc;



};

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pDepthStencilView);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			break;

		}

	dsDesc.Texture2D.MipSlice = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	for (size_t s = 0; s < shapes.size(); s++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

		return hr;



	m_pSwapChain = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		pIList[j] = indexList[j];

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	for (int i = 0; i < 3; i++)

	std::string imagePath = "hello.bmp";



	txDesc.Width = rect.Width();

			case SDLK_DOWN:

	::ZeroMemory(&scDesc, sizeof(scDesc));

		pIList[j] = indexList[j];



			case SDLK_UP:

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	return hr;

	m_pSampler = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.MipLevels = 1;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

	ibDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}

		cout << "SDL_INIT_ERROR" << endl;

	while (SDL_PollEvent(&e) != 0)





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4X4 projection;

	{

		delete[] pIList;

		return hr;

	SDL_Quit();





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	{



using std::cout; using std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pTextureView);

			{

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_LEFT:



	::GetClientRect(hwnd, &rect);

	scDesc.BufferCount = 1;

	m_IndexCount = 0;

	SDL_FreeSurface(suf);

		return 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext = NULL;

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

				indexlist.push_back(idx.vertex_index);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];







	tinyobj::ObjReaderConfig reader_config;

	return 0;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_UP:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//頂点バッファ作成

	tinyobj::attrib_t attrib;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_TOTAL

		flags,

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

void CD3DTest::Release()



	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	Release();

		return 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	if (!error.empty())

	ConstantLight    pntLight; //点光源

				WORD index = idx.vertex_index;

		return hr;

			case SDLK_LEFT:

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 view;

	}

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



 * Lesson 1: Hello World!

	irData.SysMemSlicePitch = 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	vrData.SysMemSlicePitch = 0;

	ConstantMatrixBuffer cmb;



			default:



		// Loop over faces(polygon)







	//vector<WORD> index_t;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



};



		D3D_DRIVER_TYPE_HARDWARE,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	tinyobj::ObjReader reader;

	tinyobj::ObjReaderConfig reader_config;

				break;



		KEY_PRESS_SURFACE_TOTAL

	::ZeroMemory(&scDesc, sizeof(scDesc));

			{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return 0;

	SAFE_RELEASE(m_pVertexBuffer);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pInputLayout = NULL;

	delete[] pVList;



	{

}
	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			case SDLK_RIGHT:

{

struct ConstantLight {

	float    fov = XMConvertToRadians(20.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	vbDesc.MiscFlags = 0;



	D3D_FEATURE_LEVEL level;



int SEGMENT = 36;

	{

	//Key press surfaces constants

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantLight {

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		delete[] pVList;

	irData.SysMemSlicePitch = 0;

struct ConstantLight {

	//ビューポート設定



{

	m_VertexCount = 0;

	if (FAILED(hr))





	SAFE_RELEASE(m_pVertexBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





}

			exit(1);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{



		1,



	std::string imagePath = "hello.bmp";



	txDesc.MiscFlags = 0;

	}

	D3D11_BUFFER_DESC cbDesc;

{

#include <iostream>

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		KEY_PRESS_SURFACE_DEFAULT,

		flags,

		size_t index_offset = 0;

	m_pSwapChain = NULL;

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_Delay(1000);

	if (FAILED(hr))

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			}

	ID3D11Texture2D* pBackBuffer;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.eyePos, eye);

	if (!reader.ParseFromFile(inputfile, reader_config))

}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_UP:

	int     vcount = vertexlist.size();

	vector<WORD> indexList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	/*

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pInputLayout);

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	//vector<WORD> index_t;



	SDL_Event e;

	{

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.BufferDesc.Width = rect.Width();

	if (!reader.Warning().empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



}

	SDL_FreeSurface(suf);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;



	SDL_FreeSurface(bmp);

		&shapes,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	std::vector<tinyobj::shape_t> shapes;

	for (int i = 0; i < vcount; i++)

		m_pImmediateContext->ClearState();

};

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		delete[] pIList;



	//Create Index

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		else if (e.type == SDL_KEYDOWN)

	cbDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	// Loop over shapes

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	//Create Index

	vbDesc.MiscFlags = 0;

	}

	XMFLOAT4X4 world;





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		flags,

	for (int i = 0; i < 3; i++)

	irData.pSysMem = &pIList[0];

			case SDLK_DOWN:

				break;

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





		exit(1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//vector<Vertex> vertex_t;

		SDL_Delay(1000);





	txDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	};

	}



		SDL_RenderClear(ren);

		if (!ret)

			case SDLK_LEFT:

			break;

			case SDLK_UP:



	vbDesc.StructureByteStride = 0;

	for (int i = 0; i < vcount; i++)



	WORD   icount = indexList.size();



	SDL_Event e;

	for (int i = 0; i < vcount; i++)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.MiscFlags = 0;



	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

		SDL_Delay(1000);

			int num_vertices = shape.mesh.num_face_vertices[f];

		{

	m_pSampler = NULL;

CD3DTest::CD3DTest()

	XMFLOAT4X4 view;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		KEY_PRESS_SURFACE_UP,



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (e.type == SDL_QUIT)

	m_pSwapChain = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSwapChain->Present(0, 0);



		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pTexture);

	txDesc.MiscFlags = 0;

#include <iostream>

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DEFAULT,



	ZeroMemory(&txDesc, sizeof(txDesc));

	DXGI_SWAP_CHAIN_DESC scDesc;



int SEGMENT = 36;

	//頂点シェーダー生成

	SAFE_RELEASE(m_pSwapChain);

				indexlist.push_back(idx.vertex_index);

	SDL_FreeSurface(bmp);

	if (FAILED(hr))



		size_t index_offset = 0;

	SAFE_RELEASE(m_pImmediateContext);

}

}
		return hr;

			for (size_t v = 0; v < num_vertices; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);





	XMStoreFloat4(&clb.eyePos, eye);

void CD3DTest::Release()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	//インデックスバッファ作成





	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D_FEATURE_LEVEL level;

	UINT flags = 0;

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		delete[] pIList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	pBackBuffer->Release();

	SDL_Quit();

	return hr;



		}

	for (const auto& shape : shapes)

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		{

		return hr;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

		//User requests quit



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 world;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferDesc.Height = rect.Height();



	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))





		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.SampleDesc.Count = 1;



	txDesc.Width = rect.Width();

		exit(1);

{

	m_pMatrixBuffer = NULL;

}

	SAFE_RELEASE(m_pRenderTargetView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.OutputWindow = hwnd;

 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		m_pImmediateContext->ClearState();

	}



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

CD3DTest::~CD3DTest()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



			{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

{



	if (m_pImmediateContext)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4X4 projection;

		return 1;

	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 projection;

	SDL_DestroyRenderer(ren);

	m_pRenderTargetView = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		{

				break;

	irData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

	m_pPixelShader = NULL;

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pVertexShader = NULL;

};

	if (FAILED(hr))

	}

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t tx =

	{

			break;

}

	for (const auto& shape : shapes)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	m_IndexCount = 0;







	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//First we need to start up SDL, and make sure it went ok



	ConstantMaterial material; //物体の質感

		SDL_RenderClear(ren);

	SDL_Event e;

		return hr;

	txDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

	SDL_Event e;

	std::string imagePath = "hello.bmp";

};

	if (!reader.ParseFromFile(inputfile, reader_config))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//テクスチャ読み込み

	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

	m_pDepthStencilTexture = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

#include "DirectXManager.h"

				WORD index = idx.vertex_index;

		return hr;

	if (FAILED(hr))

	}



	m_VertexCount = vcount;

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		1,



	{

{

				tinyobj::real_t tx =

		{

	auto& shapes = reader.GetShapes();

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

	}

	ConstantLightBuffer clb;

	SDL_DestroyRenderer(ren);

	m_IndexCount = icount;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		&error,

void CD3DTest::Render()

	m_pSwapChain = NULL;

	tinyobj::ObjReader reader;

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}

	std::vector<tinyobj::shape_t> shapes;



	//頂点バッファ作成

	scDesc.SampleDesc.Quality = 0;





		NULL,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pSwapChain,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vrData.SysMemSlicePitch = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	ibDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

	vrData.pSysMem = &pVList[0];

	tinyobj::attrib_t attrib;



	}

#include <SDL.h>

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

void CD3DTest::Release()

	SDL_Quit();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!reader.Warning().empty())

};

	//頂点レイアウト作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	tinyobj::attrib_t attrib;



	scDesc.SampleDesc.Quality = 0;

int main(int, char**)



	delete[] pIList;

	XMFLOAT4 ambient;           //環境(r,g,b)

			exit(1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pSwapChain->Present(0, 0);

	//vector<WORD> index_t;

		exit(1);

	ConstantLightBuffer clb;

		SDL_RenderClear(ren);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	dsDesc.Format = txDesc.Format;

				WORD index = idx.vertex_index;

	//First we need to start up SDL, and make sure it went ok

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	if (!error.empty())

		//User requests quit

			index_offset += num_vertices;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))





	{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	UINT flags = 0;

	ConstantMatrixBuffer cmb;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	}

		pVList[i] = vertexlist[i];

struct ConstantMaterial {

	m_Angle += XMConvertToRadians(1.0f);

}

	SAFE_RELEASE(m_pPixelShader);





		&shapes,

	m_Viewport.MaxDepth = 1.0f;

		// Loop over faces(polygon)

		KEY_PRESS_SURFACE_UP,





	SDL_FreeSurface(suf);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	{

#define TINYOBJLOADER_IMPLEMENTATION

	ConstantLightBuffer clb;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Event e;

	if (FAILED(hr))

	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pPixelShader = NULL;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			case SDLK_DOWN:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			{



	txDesc.SampleDesc.Count = 1;

	//頂点バッファ作成

		return 1;

		delete[] pIList;

	cbDesc.MiscFlags = 0;

		}

	LoadObj(vertexlist, indexList);

#include <SDL.h>



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	tinyobj::ObjReader reader;

	m_pDepthStencilTexture = NULL;

}
	tinyobj::ObjReaderConfig reader_config;

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		{

	SAFE_RELEASE(m_pSwapChain);

	D3D11_BUFFER_DESC ibDesc;

			}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)



	for (size_t s = 0; s < shapes.size(); s++)

		&materials,

		delete[] pVList;

	//ビューポート設定





	cbDesc.StructureByteStride = 0;

		return hr;

	std::string inputfile = "test.obj";

 * Lesson 1: Hello World!

	m_Viewport.TopLeftX = 0;

{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.MaxDepth = 1.0f;







		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pDepthStencilTexture);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pInputLayout);

	if (!error.empty())

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				vertex.push_back(vertex_tmp);

#endif

		//User presses a key

	std::string imagePath = "hello.bmp";

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ConstantLightBuffer clb;



	//vector<WORD> index_t;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		if (!ret)

	Release();

	{



	/*



		&level,

	//頂点バッファ作成

				tinyobj::real_t ty =

	m_IndexCount = 0;

		//User requests quit

		D3D_DRIVER_TYPE_HARDWARE,

		D3D_DRIVER_TYPE_HARDWARE,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pIndexBuffer = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_DEFAULT,

	ConstantLightBuffer clb;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点レイアウト作成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pDevice,

};

	m_Viewport.MinDepth = 0.0f;

#include <iostream>

	reader_config.mtl_search_path = "./"; // Path to material files

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





				indexlist.push_back(index);

	m_pPixelShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	if (m_pImmediateContext)

			//Select surfaces based on key press

	m_Angle += XMConvertToRadians(1.0f);

	m_Angle += XMConvertToRadians(1.0f);

		&level,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			// Loop over vertices in the face.

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pVertexBuffer);

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		}

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

		D3D11_SDK_VERSION,

	SDL_Quit();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

		KEY_PRESS_SURFACE_UP,





				break;





	std::vector<tinyobj::shape_t> shapes;

	SDL_DestroyRenderer(ren);



		SDL_RenderPresent(ren);

	//ビューポート設定

	{

	}

/*

	SAFE_RELEASE(m_pImmediateContext);

/*

	return hr;

	scDesc.BufferDesc.Width = rect.Width();

	//vector<Vertex> vertex_t;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			}

	m_pTexture = NULL;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	irData.pSysMem = &pIList[0];

	auto& shapes = reader.GetShapes();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		D3D11_SDK_VERSION,



	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

	m_pDevice = NULL;

	//頂点シェーダー生成



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantLightBuffer {

		SDL_RenderClear(ren);

		pLevels,

			case SDLK_RIGHT:

};

	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	SDL_DestroyTexture(tex);

	vbDesc.MiscFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	}

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	return;

	SAFE_RELEASE(m_pRenderTargetView);

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		&error,

	{

	HRESULT              hr;

		KEY_PRESS_SURFACE_LEFT,

	txDesc.MipLevels = 1;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&materials,

	}*/

{

		if (!ret)

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_FreeSurface(bmp);

	{

struct ConstantMaterial {



		exit(1);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.BufferCount = 1;

	{

	return 0;

	{

	SAFE_RELEASE(m_pInputLayout);

	}*/

		&m_pImmediateContext);

	}

	m_Viewport.Width = (FLOAT)rect.Width();



{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

{

		return hr;

	m_pDepthStencilView = NULL;

	while (SDL_PollEvent(&e) != 0)



#ifdef _DEBUG

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	enum KeyPressSurfaces

		if (!reader.Error().empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



}
	auto& shapes = reader.GetShapes();



	SAFE_RELEASE(m_pIndexBuffer);

		&m_pImmediateContext);



#include <iostream>

	SDL_FreeSurface(suf);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





		if (e.type == SDL_QUIT)

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	m_VertexCount = 0;





};

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.StructureByteStride = 0;

		R"(cube.obj)");

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pIndexBuffer);



struct ConstantMaterial {

	cbDesc.MiscFlags = 0;

{

	m_VertexCount = vcount;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pDevice);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLight    pntLight; //点光源

HRESULT CD3DTest::Create(HWND hwnd)

	m_pSwapChain->Present(0, 0);

	//ビューポート設定

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	if (!reader.Warning().empty())



		return hr;



		return hr;

				indexlist.push_back(index);

			// Loop over vertices in the face.

		return hr;

	m_pImmediateContext = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	SAFE_RELEASE(m_pTextureView);

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pIndexBuffer);

		&attrib,

			}

			}

{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	auto& attrib = reader.GetAttrib();

	return 0;



	txDesc.ArraySize = 1;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

	if (FAILED(hr))

	WORD   icount = indexList.size();

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



 * Lesson 1: Hello World!

		return hr;

using std::cout; using std::endl;



		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext = NULL;

	cbDesc.MiscFlags = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



{

		{

	SAFE_RELEASE(m_pTextureView);

	cbDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

	for (size_t s = 0; s < shapes.size(); s++)

	ConstantMatrixBuffer cmb;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	//Create Index

		&m_pSwapChain,

	return hr;

		}

{

	irData.SysMemPitch = 0;

	if (FAILED(hr))



}

	std::vector<tinyobj::material_t> materials;



		size_t index_offset = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

			case SDLK_UP:









}

	}

			}

	dsDesc.Texture2D.MipSlice = 0;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	SDL_FreeSurface(bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	tinyobj::ObjReaderConfig reader_config;

	{





}

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pTextureView);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Width = rect.Width();



	m_pImmediateContext = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

/*

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantMatrixBuffer cmb;



	}

	scDesc.OutputWindow = hwnd;

		&m_pImmediateContext);

{

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.MinDepth = 0.0f;

	ID3D11Texture2D* pBackBuffer;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	//頂点シェーダー生成

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	D3D11_SAMPLER_DESC smpDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

	//頂点レイアウト作成

			{

	//頂点レイアウト作成



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&error,

#include <iostream>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}



	m_pDevice = NULL;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_VertexCount = 0;

	D3D11_SAMPLER_DESC smpDesc;

		{

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_UP,



		pVList[i] = vertexlist[i];

	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_VertexCount = vcount;

		delete[] pIList;

	if (FAILED(hr))



struct ConstantLight {

	scDesc.BufferDesc.Height = rect.Height();

	SDL_Quit();

	SAFE_RELEASE(m_pDepthStencilTexture);

{



		SDL_Delay(1000);



		return hr;

	vrData.SysMemSlicePitch = 0;

		&m_pImmediateContext);

	CRect                rect;

 */



		else if (e.type == SDL_KEYDOWN)

			case SDLK_UP:

	//Create Index

	if (FAILED(hr))

			}

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;



	for (int i = 0; i < 3; i++)

	cbDesc.StructureByteStride = 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pDevice);





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDevice);

}

	if (!error.empty())

	UINT flags = 0;

		return hr;

	//テクスチャ読み込み

	for (int j = 0; j < icount; j++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& shapes = reader.GetShapes();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

{



			index_offset += num_vertices;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				indexlist.push_back(index);

	auto& attrib = reader.GetAttrib();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilView = NULL;

		// Loop over faces(polygon)

			}



	if (FAILED(hr))

void CD3DTest::Render()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		{

	vbDesc.StructureByteStride = 0;

#include <SDL.h>

	return 0;

		{

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pLightBuffer);

			//Select surfaces based on key press

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ConstantLight    pntLight; //点光源





	XMFLOAT4X4 world;

	SDL_DestroyTexture(tex);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.StructureByteStride = 0;



			for (size_t v = 0; v < num_vertices; v++)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	::GetClientRect(hwnd, &rect);

			}

	{

	delete[] pIList;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

		return hr;

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	for (int j = 0; j < icount; j++)

	m_pImmediateContext = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Angle += XMConvertToRadians(1.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		NULL,



	if (!reader.Warning().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pTexture);

		&m_pDevice,

	SAFE_RELEASE(m_pSampler);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

	{

	LoadObj(vertexlist, indexList);

	txDesc.SampleDesc.Quality = 0;

	m_pIndexBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pLightBuffer);





	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(idx.vertex_index);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	//vector<WORD> index_t;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



			//Select surfaces based on key press

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			exit(1);

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferCount = 1;

	ZeroMemory(&txDesc, sizeof(txDesc));





	Release();

				tinyobj::real_t ty =

}

		KEY_PRESS_SURFACE_TOTAL

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				WORD index = idx.vertex_index;

	m_pSampler = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pSwapChain = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

	return 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))

	//Create Index



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

		flags,

	::GetClientRect(hwnd, &rect);



	WORD* pIList = new WORD[icount];

	float    farZ = 100.0f;

	//定数バッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))



		KEY_PRESS_SURFACE_LEFT,

				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	auto& shapes = reader.GetShapes();



#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);







	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.BufferDesc.Height = rect.Height();



	hr = D3D11CreateDeviceAndSwapChain(NULL,

}



{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		flags,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (m_pImmediateContext)

	D3D_FEATURE_LEVEL level;

	XMFLOAT4X4 projection;



	SAFE_RELEASE(m_pDepthStencilView);

	return;

				// access to vertex

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 projection;







	return 0;



		return hr;

	//Key press surfaces constants

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&scDesc,

			for (size_t v = 0; v < fv; v++)



	XMFLOAT4X4 world;



				break;



	D3D11_SUBRESOURCE_DATA vrData;

	m_pVertexShader = NULL;



	ibDesc.StructureByteStride = 0;

		return hr;

	irData.SysMemSlicePitch = 0;

{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ibDesc.CPUAccessFlags = 0;

	//Create Index

		return 1;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pInputLayout);

				break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

{



	m_pDepthStencilView = NULL;

	scDesc.BufferDesc.Width = rect.Width();

		}

		return hr;

	txDesc.Width = rect.Width();

		//User requests quit

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.TopLeftX = 0;

	{





}
}

		return hr;

				WORD index = idx.vertex_index;

	m_pSwapChain->Present(0, 0);

	ConstantMatrixBuffer cmb;

#define TINYOBJLOADER_IMPLEMENTATION

	if (!error.empty())

	std::vector<tinyobj::material_t> materials;

	irData.SysMemSlicePitch = 0;

	std::string inputfile = "test.obj";

	D3D11_BUFFER_DESC cbDesc;

	//頂点シェーダー生成

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vrData.SysMemPitch = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::string inputfile = "test.obj";

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//頂点レイアウト作成



#include <iostream>

	SAFE_RELEASE(m_pDepthStencilView);





		pLevels,





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{



		KEY_PRESS_SURFACE_LEFT,

		return 1;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_RIGHT,

				// access to vertex

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	ibDesc.MiscFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyTexture(tex);





		return hr;

 */





				WORD index = idx.vertex_index;

				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.Height = rect.Height();

		size_t index_offset = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		delete[] pVList;

				break;

		return hr;

	//vector<Vertex> vertex_t;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	HRESULT              hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pVertexBuffer = NULL;



		return hr;

	std::string inputfile = "test.obj";

	}

				break;

	for (int j = 0; j < icount; j++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

};

		SDL_RenderClear(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexBuffer = NULL;

	float    farZ = 100.0f;

				break;

			case SDLK_RIGHT:

		}

	float    fov = XMConvertToRadians(20.0f);



	//vector<Vertex> vertex_t;



		size_t index_offset = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

		&attrib,

	WORD   icount = indexList.size();



	SAFE_RELEASE(m_pPixelShader);



	enum KeyPressSurfaces



CD3DTest::CD3DTest()

	tinyobj::ObjReader reader;



	{



			}

			exit(1);

	txDesc.CPUAccessFlags = 0;

	}

		delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			exit(1);

	{



	return 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantLight    pntLight; //点光源

CD3DTest::~CD3DTest()

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

				WORD index = idx.vertex_index;

}

	SDL_DestroyTexture(tex);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext = NULL;

		if (e.type == SDL_QUIT)

	if (!reader.Warning().empty())

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	float    fov = XMConvertToRadians(20.0f);

				break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    nearZ = 0.1f;

	enum KeyPressSurfaces

	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

	::GetClientRect(hwnd, &rect);

	/*

	float    aspect = m_Viewport.Width / m_Viewport.Height;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pIndexBuffer);

	//Key press surfaces constants

		&attrib,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

void CD3DTest::Release()

	}*/

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pPixelShader = NULL;

	SDL_Quit();

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		{

	{

		//User presses a key

			switch (e.key.keysym.sym)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		size_t index_offset = 0;

CD3DTest::~CD3DTest()

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&m_pSwapChain,

			// Loop over vertices in the face.

	//頂点バッファ作成

#ifdef _DEBUG

	if (FAILED(hr))

	//定数バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

};



	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	pBackBuffer->Release();

		return 1;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Quit();

	irData.pSysMem = &pIList[0];

#include "DirectXManager.h"

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pSwapChain);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

		pIList[j] = indexList[j];

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	//インデックスバッファ作成

	if (!reader.Warning().empty())

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pIList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (m_pImmediateContext)

		SDL_RenderCopy(ren, tex, NULL, NULL);





	auto& shapes = reader.GetShapes();

		&materials,

		return hr;

#include "DirectXManager.h"

	for (int j = 0; j < icount; j++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return 0;

	cbDesc.CPUAccessFlags = 0;

	}

	m_pPixelShader = NULL;

	txDesc.MipLevels = 1;

			}

	SAFE_RELEASE(m_pRenderTargetView);

			exit(1);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))


