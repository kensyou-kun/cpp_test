	XMFLOAT4X4 world;

	{



	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4X4 view;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

	dsDesc.Texture2D.MipSlice = 0;

			default:





	m_IndexCount = icount;

			case SDLK_UP:

	scDesc.BufferDesc.Height = rect.Height();

	m_pVertexShader = NULL;

	CRect                rect;

	}

	m_pSwapChain->Present(0, 0);

void CD3DTest::Release()

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

}



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	WORD   icount = indexList.size();

		return hr;

struct ConstantMatrixBuffer {

		return hr;

	UINT flags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_SUBRESOURCE_DATA irData;

		if (!ret)

{

	SAFE_RELEASE(m_pSwapChain);

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&scDesc,

		&level,



		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

		R"(cube.obj)");

		pLevels,

{

	cbDesc.StructureByteStride = 0;

			exit(1);

	vector<WORD> indexList;

		if (e.type == SDL_QUIT)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				WORD index = idx.vertex_index;

	{

		&scDesc,



				vertex.push_back(vertex_tmp);

	}

	{

		}

	m_pIndexBuffer = NULL;



	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	//頂点バッファ作成

	scDesc.SampleDesc.Quality = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

				WORD index = idx.vertex_index;



	scDesc.Windowed = TRUE;

	}

	SDL_DestroyTexture(tex);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.Warning().empty())

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty =



		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDepthStencilView = NULL;

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pVertexShader);

	scDesc.OutputWindow = hwnd;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//頂点バッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_DestroyTexture(tex);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Height = rect.Height();

	float    fov = XMConvertToRadians(20.0f);

			case SDLK_RIGHT:

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4         ambient;  //環境光(r,g,b)





void CD3DTest::Release()

		return hr;

				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



struct ConstantLightBuffer {

	scDesc.BufferCount = 1;



	HRESULT              hr;

		return hr;

	m_pSwapChain->Present(0, 0);

	cbDesc.CPUAccessFlags = 0;

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			default:

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点バッファ作成



			{

	SAFE_RELEASE(m_pTexture);

};

	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))



};

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.MinDepth = 0.0f;

	dsDesc.Format = txDesc.Format;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D11_SAMPLER_DESC smpDesc;



	irData.SysMemSlicePitch = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pVertexBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

struct ConstantMaterial {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&m_pDevice,

				WORD index = idx.vertex_index;

	m_Viewport.MinDepth = 0.0f;



	D3D11_SAMPLER_DESC smpDesc;

	//ピクセルシェーダー生成

#endif

};

			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string error;

	}

	ID3D11Texture2D* pBackBuffer;

{

	::GetClientRect(hwnd, &rect);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		NULL,

		return hr;

};

	bool ret = tinyobj::LoadObj(

				break;

		if (!ret)

 */

	D3D11_TEXTURE2D_DESC txDesc;

		&level,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;











	SAFE_RELEASE(m_pMatrixBuffer);



			{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.CPUAccessFlags = 0;

				indexlist.push_back(idx.vertex_index);

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



			}

				// access to vertex

			for (size_t v = 0; v < num_vertices; v++)

		&error,

 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Quit();

	txDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_RIGHT,

	float    farZ = 100.0f;

	if (!reader.Warning().empty())

	m_pRenderTargetView = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}







	m_pLightBuffer = NULL;



	vbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";

		&error,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.Height = (FLOAT)rect.Height();

	vector<WORD> indexList;

		return hr;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			for (size_t v = 0; v < num_vertices; v++)



	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_BUFFER_DESC ibDesc;

				vertex.push_back(vertex_tmp);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





			case SDLK_UP:

		&m_pSwapChain,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pTextureView = NULL;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

		KEY_PRESS_SURFACE_UP,

	}

	txDesc.Width = rect.Width();

		return hr;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

		if (e.type == SDL_QUIT)

	WORD   icount = indexList.size();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	cbDesc.StructureByteStride = 0;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		&level,

		exit(1);

	m_Viewport.TopLeftY = 0;



		pLevels,

		&level,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.SampleDesc.Count = 1;

		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

int SEGMENT = 36;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



			index_offset += fv;

	//ビューポート設定

	SAFE_RELEASE(m_pImmediateContext);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vrData.SysMemPitch = 0;

	}

	m_Viewport.TopLeftY = 0;

	XMFLOAT4X4 view;

	m_IndexCount = icount;

	txDesc.Height = rect.Height();



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



};

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	cbDesc.MiscFlags = 0;

		return hr;





				indexlist.push_back(index);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_FreeSurface(suf);

	Release();

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





		R"(cube.obj)");

	XMFLOAT4X4 view;

	for (int i = 0; i < 3; i++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	auto& attrib = reader.GetAttrib();

	std::string inputfile = "test.obj";

	/*

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyRenderer(ren);



	vbDesc.CPUAccessFlags = 0;

{



	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{





		return hr;

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,

	tinyobj::ObjReaderConfig reader_config;

};

	if (FAILED(hr))



	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ConstantMatrixBuffer cmb;

#define TINYOBJLOADER_IMPLEMENTATION

	if (!reader.Warning().empty())

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemSlicePitch = 0;

	vector<Vertex> vertexlist;

		return hr;

				// access to vertex

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ConstantMatrixBuffer cmb;

	Release();

	D3D11_SAMPLER_DESC smpDesc;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

#ifdef _DEBUG

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.ArraySize = 1;



		return hr;





	tinyobj::ObjReaderConfig reader_config;

	Vertex* pVList = new Vertex[vcount];



	UINT flags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(suf);

	D3D11_BUFFER_DESC vbDesc;

	::GetClientRect(hwnd, &rect);



	SDL_DestroyWindow(win);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	D3D11_TEXTURE2D_DESC txDesc;

	vrData.SysMemPitch = 0;

		}

				WORD index = idx.vertex_index;



	//vector<WORD> index_t;



	ConstantMatrixBuffer cmb;

	SDL_DestroyRenderer(ren);

		//User presses a key

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	DXGI_SWAP_CHAIN_DESC scDesc;

	return hr;

	SAFE_RELEASE(m_pVertexShader);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	XMFLOAT4X4 view;

	tinyobj::attrib_t attrib;

	m_VertexCount = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

struct ConstantLight {

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_BUFFER_DESC vbDesc;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	tinyobj::ObjReader reader;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		delete[] pIList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	int     vcount = vertexlist.size();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pSampler);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Event e;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	while (SDL_PollEvent(&e) != 0)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	/*

			switch (e.key.keysym.sym)

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	scDesc.SampleDesc.Count = 1;

			for (size_t v = 0; v < fv; v++)

{

#include <SDL.h>



			index_offset += num_vertices;

		{



	}

		SDL_RenderPresent(ren);

struct ConstantLightBuffer {

	m_Angle += XMConvertToRadians(1.0f);

			}

	cbDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ConstantLightBuffer clb;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}*/

		return hr;

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

	float    fov = XMConvertToRadians(20.0f);

			index_offset += num_vertices;

		delete[] pIList;

		{

	bool ret = tinyobj::LoadObj(



	SAFE_RELEASE(m_pIndexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::GetClientRect(hwnd, &rect);



}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pRenderTargetView = NULL;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

		&materials,

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_DestroyRenderer(ren);



		// Loop over faces(polygon)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pInputLayout);

#include <SDL.h>

	}

		return hr;

	UINT flags = 0;

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		flags,

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.ArraySize = 1;

	scDesc.BufferCount = 1;



	std::vector<tinyobj::shape_t> shapes;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	delete[] pIList;

		SDL_RenderClear(ren);



	SAFE_RELEASE(m_pSampler);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		NULL,

	txDesc.Width = rect.Width();

			default:

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		if (!reader.Error().empty())

	if (FAILED(hr))

	scDesc.BufferCount = 1;

}

	SAFE_RELEASE(m_pTextureView);

		SDL_RenderClear(ren);



	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_DestroyTexture(tex);

	//Vertex* pVList = new Vertex[vcount];

			{

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_DestroyRenderer(ren);

		return hr;

		return hr;

	if (FAILED(hr))

			index_offset += fv;

	{

	SAFE_RELEASE(m_pDevice);

		//User presses a key

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

		{





void CD3DTest::Render()

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.MiscFlags = 0;

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pMatrixBuffer = NULL;

	m_pVertexShader = NULL;

#include <SDL.h>





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	D3D11_TEXTURE2D_DESC txDesc;

	}

			// Loop over vertices in the face.

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t tx =

	vrData.SysMemSlicePitch = 0;

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.MipLevels = 1;

				// access to vertex

	scDesc.OutputWindow = hwnd;

	dsDesc.Format = txDesc.Format;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float    nearZ = 0.1f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMFLOAT4 ambient;           //環境(r,g,b)

			exit(1);

	bool ret = tinyobj::LoadObj(



	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			{

	enum KeyPressSurfaces

	D3D11_BUFFER_DESC vbDesc;

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pImmediateContext);

		NULL,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	XMFLOAT4X4 world;

	return;

	XMFLOAT4 ambient;           //環境(r,g,b)



			{

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	bool ret = tinyobj::LoadObj(

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

};



	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		// Loop over faces(polygon)



			//Select surfaces based on key press



	if (FAILED(hr))

	SDL_FreeSurface(bmp);

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

CD3DTest::~CD3DTest()



	/*



	if (FAILED(hr))



	HRESULT              hr;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pDepthStencilView = NULL;

	tinyobj::ObjReaderConfig reader_config;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	CRect                rect;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	m_pInputLayout = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (m_pImmediateContext)

	std::string inputfile = "test.obj";

	cbDesc.StructureByteStride = 0;

	txDesc.Width = rect.Width();

		&scDesc,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantMatrixBuffer {

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.SampleDesc.Quality = 0;



	if (FAILED(hr))

	m_pLightBuffer = NULL;

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

	{

		&scDesc,

}



	SAFE_RELEASE(m_pRenderTargetView);

	WORD   icount = indexList.size();

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Quit();

	cbDesc.StructureByteStride = 0;

	m_pDepthStencilView = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

};



	enum KeyPressSurfaces

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::string imagePath = "hello.bmp";

				WORD index = idx.vertex_index;

			case SDLK_DOWN:

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	{

	}

	if (!reader.Warning().empty())

	if (FAILED(hr))

				break;

#include <SDL.h>



	{

	CRect                rect;

{

	m_Viewport.MaxDepth = 1.0f;

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				// access to vertex

	CRect                rect;

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;





	XMFLOAT4         eyePos;   //視点座標

	int     vcount = vertexlist.size();





	m_Viewport.MaxDepth = 1.0f;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{



{

		R"(cube.obj)");





{







	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pIndexBuffer);



		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	if (FAILED(hr))

			switch (e.key.keysym.sym)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;





	std::string inputfile = "test.obj";

	m_pTexture = NULL;



		return hr;

	irData.SysMemSlicePitch = 0;



		&m_pDevice,

#include <SDL.h>



};



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (FAILED(hr))







		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

			case SDLK_RIGHT:

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDevice);

	std::string imagePath = "hello.bmp";

}
	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyWindow(win);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	return 0;

	{

	m_Angle += XMConvertToRadians(1.0f);



	if (FAILED(hr))

		SDL_RenderPresent(ren);



	XMFLOAT4 pos;               //座標(x,y,z)

				break;

	SDL_FreeSurface(suf);





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <SDL.h>



	std::string imagePath = "hello.bmp";



	m_pDepthStencilTexture = NULL;

	m_pVertexBuffer = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderClear(ren);

		size_t index_offset = 0;

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	irData.pSysMem = &pIList[0];



		if (e.type == SDL_QUIT)

			}

	std::vector<tinyobj::material_t> materials;

CD3DTest::CD3DTest()

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点バッファ作成

	m_pImmediateContext = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pIndexBuffer = NULL;

				break;

	{



	SAFE_RELEASE(m_pLightBuffer);

	Vertex* pVList = new Vertex[vcount];

{

	ConstantMaterial material; //物体の質感

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_SAMPLER_DESC smpDesc;

	ConstantMaterial material; //物体の質感



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)









		{

	if (FAILED(hr))

		return hr;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



}
	float    farZ = 100.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Key press surfaces constants

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{



using std::cout; using std::endl;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.TopLeftY = 0;



CD3DTest::~CD3DTest()



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

int main(int, char**)

}

	D3D11_TEXTURE2D_DESC txDesc;



			}

	::GetClientRect(hwnd, &rect);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_VertexCount = vcount;



	m_IndexCount = 0;

	}

	vrData.SysMemPitch = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_TOTAL

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pVertexShader);





	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;



	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			case SDLK_RIGHT:

		return hr;

	vrData.SysMemSlicePitch = 0;



	vbDesc.StructureByteStride = 0;

	XMFLOAT4X4 projection;

int SEGMENT = 36;

};

	scDesc.BufferDesc.Height = rect.Height();

		flags,

		{

	//深度ステンシルバッファ作成

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4X4 world;

			{

	m_pDevice = NULL;

};

	scDesc.SampleDesc.Quality = 0;

	{

};

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);



	m_Viewport.Height = (FLOAT)rect.Height();

			for (size_t v = 0; v < fv; v++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (const auto& shape : shapes)

};

	vbDesc.MiscFlags = 0;



}

	}

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

using std::cout; using std::endl;

	cbDesc.MiscFlags = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	int     vcount = vertexlist.size();

	ConstantLight    pntLight; //点光源

/*

		}

	::GetClientRect(hwnd, &rect);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

};

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.SampleDesc.Quality = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pTextureView);

	if (!reader.ParseFromFile(inputfile, reader_config))



}
	m_pVertexBuffer = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;



		{





};

	irData.pSysMem = &pIList[0];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	tinyobj::ObjReaderConfig reader_config;

}
	ConstantMatrixBuffer cmb;

	if (m_pImmediateContext)

	for (int j = 0; j < icount; j++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		KEY_PRESS_SURFACE_UP,



{

	if (FAILED(hr))

		//User presses a key

		// Loop over faces(polygon)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	//Create Index

	cbDesc.MiscFlags = 0;



	float    farZ = 100.0f;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pMatrixBuffer = NULL;



			index_offset += num_vertices;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4         eyePos;   //視点座標





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	//インデックスバッファ作成

	m_Viewport.TopLeftX = 0;

		1,

	cbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pSwapChain = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemSlicePitch = 0;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#endif

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

}

		KEY_PRESS_SURFACE_UP,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		delete[] pIList;

		return hr;

		exit(1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_UP:



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return;



		pLevels,

	m_pDevice = NULL;

		flags,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	D3D11_SUBRESOURCE_DATA irData;

struct ConstantLight {

			break;

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.SampleDesc.Quality = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点バッファ作成

		size_t index_offset = 0;



	m_pSwapChain->Present(0, 0);

}

		delete[] pIList;

		SDL_RenderClear(ren);

		// Loop over faces(polygon)

	{

	txDesc.CPUAccessFlags = 0;

		return hr;

		}

};

	delete[] pVList;

	SAFE_RELEASE(m_pImmediateContext);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//インデックスバッファ作成

	SDL_Quit();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//Key press surfaces constants

	int     vcount = vertexlist.size();

	ibDesc.CPUAccessFlags = 0;



	ibDesc.MiscFlags = 0;



	float    fov = XMConvertToRadians(20.0f);

	{



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	{

	//定数バッファ作成

		//User presses a key

	txDesc.SampleDesc.Count = 1;

	//頂点シェーダー生成

void CD3DTest::Render()

	//ビューポート設定



	std::string imagePath = "hello.bmp";

		if (!ret)

	SAFE_RELEASE(m_pSwapChain);

	{



	if (FAILED(hr))

	{

		return hr;

{

#define TINYOBJLOADER_IMPLEMENTATION

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderClear(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	auto& shapes = reader.GetShapes();

#include <SDL.h>



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pPixelShader);

	//ビューポート設定

	if (FAILED(hr))

	txDesc.Width = rect.Width();

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#endif

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点レイアウト作成

	DXGI_SWAP_CHAIN_DESC scDesc;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

		&error,

				vertex.push_back(vertex_tmp);

		if (!ret)

	SDL_DestroyWindow(win);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	Release();

	vbDesc.StructureByteStride = 0;





			//Select surfaces based on key press

	float    fov = XMConvertToRadians(20.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	std::string imagePath = "hello.bmp";

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT flags = 0;

	cbDesc.StructureByteStride = 0;

		delete[] pIList;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//Key press surfaces constants



 * Lesson 1: Hello World!

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	irData.pSysMem = &pIList[0];

	tinyobj::ObjReaderConfig reader_config;

	auto& attrib = reader.GetAttrib();

	m_pDepthStencilView = NULL;

	dsDesc.Texture2D.MipSlice = 0;

/*

	txDesc.MiscFlags = 0;





		if (!reader.Error().empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	for (size_t s = 0; s < shapes.size(); s++)

#include "DirectXManager.h"

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.TopLeftX = 0;



		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	txDesc.CPUAccessFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pPixelShader);

	//vector<WORD> index_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4 pos;               //座標(x,y,z)

		&attrib,

}

}

				break;

	m_pRenderTargetView = NULL;

			case SDLK_DOWN:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			}

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	ID3D11Texture2D* pBackBuffer;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pIndexBuffer = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	delete[] pIList;









	vbDesc.MiscFlags = 0;

	m_pImmediateContext = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		R"(cube.obj)");

			case SDLK_LEFT:

{

	XMStoreFloat4(&clb.eyePos, eye);

	irData.SysMemSlicePitch = 0;

			default:

	}

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDevice);

	scDesc.SampleDesc.Quality = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&attrib,



			for (size_t v = 0; v < fv; v++)

		{

{







				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t ty =

	tinyobj::attrib_t attrib;

	//vector<Vertex> vertex_t;



	ConstantMaterial material; //物体の質感

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_TOTAL

	if (!reader.Warning().empty())

	//Key press surfaces constants

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	// Loop over shapes

/*

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	delete[] pIList;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);





	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.MaxDepth = 1.0f;

	m_pTextureView = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}

		exit(1);

	m_IndexCount = 0;

	UINT offsets = 0;

	return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標



	SAFE_RELEASE(m_pTexture);

	if (!reader.Warning().empty())

	for (int i = 0; i < vcount; i++)

	}



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	for (int i = 0; i < vcount; i++)

	ConstantMatrixBuffer cmb;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	return;



		return hr;

	};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_BUFFER_DESC ibDesc;

	//頂点レイアウト作成



{

	float    farZ = 100.0f;

using std::cout; using std::endl;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			for (size_t v = 0; v < fv; v++)

		&m_pSwapChain,





	{

struct ConstantMaterial {

	XMFLOAT4X4 view;









	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	Vertex* pVList = new Vertex[vcount];

	m_pTextureView = NULL;

	if (FAILED(hr))



int main(int, char**)

	SAFE_RELEASE(m_pPixelShader);

using std::cout; using std::endl;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.MipLevels = 1;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		pLevels,



	{

	XMFLOAT4X4 view;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

	vrData.SysMemPitch = 0;

	vbDesc.MiscFlags = 0;

		if (!ret)



{

	{



				break;

	std::string imagePath = "hello.bmp";

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		delete[] pVList;

	ibDesc.StructureByteStride = 0;



	SDL_Quit();

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	SDL_Quit();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.MipLevels = 1;

	m_pDevice = NULL;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	return 0;

	SDL_Event e;

	if (!reader.Warning().empty())

	//vector<WORD> index_t;

			//Select surfaces based on key press



{

	//vector<Vertex> vertex_t;

	//First we need to start up SDL, and make sure it went ok

		&m_pSwapChain,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_Delay(1000);

};

	m_pSampler = NULL;

	if (!error.empty())

	//Clean up our objects and quit

	return 0;



		return hr;



		return 1;



		SDL_Delay(1000);



	//頂点レイアウト作成

	if (!error.empty())

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//ビューポート設定

				tinyobj::real_t tx =

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		&m_pImmediateContext);



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pTexture);

		delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pTextureView = NULL;

	m_pLightBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		&scDesc,

	XMStoreFloat4(&clb.ambient, lightAmbient);



				vertex.push_back(vertex_tmp);

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

{

		return hr;

	SDL_FreeSurface(suf);

				break;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pIndexBuffer);





	}

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pMatrixBuffer);







	}

		return hr;

	//ピクセルシェーダー生成

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderPresent(ren);







	tinyobj::ObjReader reader;

	m_Viewport.Height = (FLOAT)rect.Height();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSwapChain->Present(0, 0);

#ifdef _DEBUG





	if (FAILED(hr))

}
	scDesc.BufferCount = 1;

		size_t index_offset = 0;

	{

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pDepthStencilView);







	return 0;





	delete[] pVList;

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}



	return;

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (!error.empty())



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pRenderTargetView);

struct ConstantMaterial {

				WORD index = idx.vertex_index;

{



		&m_pImmediateContext);

#include <SDL.h>

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		else if (e.type == SDL_KEYDOWN)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pDevice);

	if (m_pImmediateContext)

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	}

			}

	}*/

	std::vector<tinyobj::material_t> materials;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);







			//Select surfaces based on key press

	Release();

#include "DirectXManager.h"



		return hr;

	m_pVertexShader = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	for (int i = 0; i < 3; i++)

	irData.pSysMem = &pIList[0];

		&level,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

		D3D11_SDK_VERSION,

	//First we need to start up SDL, and make sure it went ok

	for (const auto& shape : shapes)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		D3D11_SDK_VERSION,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	irData.SysMemSlicePitch = 0;

		return hr;

	cbDesc.StructureByteStride = 0;

	::GetClientRect(hwnd, &rect);



	SAFE_RELEASE(m_pRenderTargetView);

{

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))





			for (size_t v = 0; v < num_vertices; v++)

	//頂点バッファ作成



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.CPUAccessFlags = 0;

		}

	SAFE_RELEASE(m_pSwapChain);

	dsDesc.Texture2D.MipSlice = 0;

	//頂点バッファ作成

		{



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

using std::cout; using std::endl;

			{

				// access to vertex



int SEGMENT = 36;



			case SDLK_DOWN:

	if (FAILED(hr))

			{

	txDesc.SampleDesc.Count = 1;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//Clean up our objects and quit



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	cbDesc.MiscFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	delete[] pVList;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.SampleDesc.Count = 1;

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pTexture = NULL;

			}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4X4 projection;

	}

	irData.SysMemSlicePitch = 0;



	txDesc.CPUAccessFlags = 0;





			case SDLK_RIGHT:



				// access to vertex

				WORD index = idx.vertex_index;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pInputLayout = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{



	auto& attrib = reader.GetAttrib();



	if (m_pImmediateContext)

	if (FAILED(hr))



	Release();

	SAFE_RELEASE(m_pImmediateContext);



	//頂点バッファ作成





{

	vrData.pSysMem = &pVList[0];

			//Select surfaces based on key press

	m_pRenderTargetView = NULL;

		else if (e.type == SDL_KEYDOWN)



	if (m_pImmediateContext)

	if (!reader.Warning().empty())

	float    farZ = 100.0f;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	vector<Vertex> vertexlist;

	txDesc.SampleDesc.Quality = 0;

	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pRenderTargetView);

		}

	SAFE_RELEASE(m_pVertexShader);



	SDL_Quit();

	cbDesc.StructureByteStride = 0;

	SDL_Quit();

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pDepthStencilTexture);

	for (const auto& shape : shapes)



		}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

}

	ID3D11Texture2D* pBackBuffer;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				WORD index = idx.vertex_index;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_BUFFER_DESC cbDesc;

{

			case SDLK_DOWN:

int main(int, char**)

	m_pDepthStencilTexture = NULL;







	SAFE_RELEASE(m_pDepthStencilTexture);

		if (!reader.Error().empty())



	vrData.SysMemPitch = 0;

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;







				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//vector<WORD> index_t;

		delete[] pIList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ConstantLight    pntLight; //点光源

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyRenderer(ren);

		return hr;

	m_pDepthStencilTexture = NULL;



	m_Viewport.MinDepth = 0.0f;

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				break;



		size_t index_offset = 0;

		SDL_Delay(1000);

 */

		KEY_PRESS_SURFACE_RIGHT,

		exit(1);

	XMFLOAT4X4 world;

	//頂点レイアウト作成



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			index_offset += num_vertices;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.TopLeftY = 0;





	txDesc.Width = rect.Width();

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	float    farZ = 100.0f;



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.Width = (FLOAT)rect.Width();

	delete[] pVList;

}

	float    farZ = 100.0f;



	}

	Vertex* pVList = new Vertex[vcount];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				vertex.push_back(vertex_tmp);



	std::vector<tinyobj::material_t> materials;

			exit(1);

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	enum KeyPressSurfaces

	m_pRenderTargetView = NULL;

}

{

		return hr;

		if (e.type == SDL_QUIT)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_BUFFER_DESC ibDesc;

	//頂点バッファ作成

		return hr;

		delete[] pVList;



	if (FAILED(hr))

		return hr;

	irData.pSysMem = &pIList[0];

	//深度ステンシルバッファ作成

		KEY_PRESS_SURFACE_TOTAL

		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.MipLevels = 1;



			//Select surfaces based on key press

			}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		if (!ret)

	m_pIndexBuffer = NULL;

	SDL_DestroyWindow(win);

			case SDLK_RIGHT:

{

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

	{

		exit(1);

};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.SampleDesc.Count = 1;



	Release();

#define TINYOBJLOADER_IMPLEMENTATION

	tinyobj::ObjReaderConfig reader_config;

	SDL_Quit();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.OutputWindow = hwnd;

	{



int main(int, char**)

	{

	int     vcount = vertexlist.size();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		}



	return 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pTexture = NULL;

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			case SDLK_LEFT:

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

		&shapes,

/*

	SAFE_RELEASE(m_pInputLayout);

#include "DirectXManager.h"

		// Loop over faces(polygon)

		return 1;

	if (FAILED(hr))

		SDL_Delay(1000);

	}

	SAFE_RELEASE(m_pSwapChain);



		pVList[i] = vertexlist[i];

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//vector<WORD> index_t;



			for (size_t v = 0; v < num_vertices; v++)



	{

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT flags = 0;



		return hr;



	std::string error;

			index_offset += num_vertices;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pMatrixBuffer = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];







 * Lesson 1: Hello World!



	m_pRenderTargetView = NULL;

	m_pLightBuffer = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

}



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += fv;



	XMFLOAT4X4 projection;

				// access to vertex

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_DOWN:

	m_pSwapChain->Present(0, 0);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.CPUAccessFlags = 0;

		NULL,

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	delete[] pIList;

		pLevels,

#include <iostream>

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.SampleDesc.Quality = 0;

}

			exit(1);

}

{



	Release();

	}

	//定数バッファ作成

	{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	irData.pSysMem = &pIList[0];

	//ビューポート設定





	LoadObj(vertexlist, indexList);

				indexlist.push_back(index);

{

	txDesc.Height = rect.Height();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	cbDesc.CPUAccessFlags = 0;

		else if (e.type == SDL_KEYDOWN)

				break;

HRESULT CD3DTest::Create(HWND hwnd)



		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

#define TINYOBJLOADER_IMPLEMENTATION

	auto& materials = reader.GetMaterials();

			}

	//ビューポート設定

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	SAFE_RELEASE(m_pSampler);

			{



}



	//深度ステンシルバッファ作成

			}

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_LEFT,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	Vertex* pVList = new Vertex[vcount];

	}*/



	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Quit();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_DestroyRenderer(ren);

}

	//定数バッファ作成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.MipLevels = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_DOWN,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	Release();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.SampleDesc.Quality = 0;

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	for (int i = 0; i < vcount; i++)

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

};

	SAFE_RELEASE(m_pDevice);





		flags,



	m_Viewport.TopLeftX = 0;

	//Clean up our objects and quit

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	UINT flags = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



}

		&m_pImmediateContext);

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

		delete[] pVList;

	for (int i = 0; i < 3; i++)

	ConstantLightBuffer clb;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		}



		{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		return hr;

	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		m_pImmediateContext->ClearState();

		}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		{

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pTextureView = NULL;



	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pSampler);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLightBuffer clb;

	SDL_DestroyWindow(win);

	}

		//User presses a key

struct ConstantMatrixBuffer {

		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += fv;

	for (int i = 0; i < vcount; i++)

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vbDesc.CPUAccessFlags = 0;

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		D3D_DRIVER_TYPE_HARDWARE,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	Vertex* pVList = new Vertex[vcount];

	WORD   icount = indexList.size();

	SDL_DestroyTexture(tex);

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

		}

	//vector<WORD> index_t;

	}



	m_VertexCount = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	auto& materials = reader.GetMaterials();

	m_pDepthStencilTexture = NULL;

	txDesc.MipLevels = 1;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	std::string imagePath = "hello.bmp";

				break;

#include <iostream>

			break;

		if (!ret)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	if (FAILED(hr))

	m_pVertexBuffer = NULL;



	if (FAILED(hr))



	txDesc.Width = rect.Width();

}
	auto& shapes = reader.GetShapes();



	auto& attrib = reader.GetAttrib();

#include "DirectXManager.h"

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];

	m_IndexCount = 0;



	Release();



{

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemPitch = 0;

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.Height = (FLOAT)rect.Height();

			// Loop over vertices in the face.

				// access to vertex

	if (FAILED(hr))

	m_IndexCount = icount;

	Release();

		SDL_RenderPresent(ren);



				WORD index = idx.vertex_index;

				break;

	tinyobj::attrib_t attrib;

	m_pImmediateContext = NULL;

	SDL_Quit();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::string inputfile = "test.obj";

};

	std::string inputfile = "test.obj";

	txDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;

	m_pPixelShader = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.ambient, lightAmbient);



	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



			exit(1);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&attrib,

	vector<WORD> indexList;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		if (!ret)

}

		if (e.type == SDL_QUIT)

	if (FAILED(hr))



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

		1,



	irData.SysMemSlicePitch = 0;

		//User requests quit

			index_offset += fv;

	vrData.pSysMem = &pVList[0];

		if (!ret)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//テクスチャ読み込み

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_UP,



			//Select surfaces based on key press

	m_pSwapChain->Present(0, 0);

	D3D11_BUFFER_DESC cbDesc;

	tinyobj::ObjReader reader;

		&m_pDevice,

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

{

				indexlist.push_back(index);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

			exit(1);

using std::cout; using std::endl;



	}

	scDesc.SampleDesc.Quality = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantMatrixBuffer {

int SEGMENT = 36;

	// Loop over shapes

	//Create Index



			// Loop over vertices in the face.





	Release();



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//Create Index

	bool ret = tinyobj::LoadObj(

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		flags,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





			}



		{

		}



	//vector<Vertex> vertex_t;



	scDesc.BufferCount = 1;

	m_IndexCount = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

				indexlist.push_back(index);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SAFE_RELEASE(m_pDevice);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}

		exit(1);

	cbDesc.CPUAccessFlags = 0;

	while (SDL_PollEvent(&e) != 0)



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	auto& materials = reader.GetMaterials();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



int main(int, char**)

	m_pIndexBuffer = NULL;



}

	SAFE_RELEASE(m_pVertexShader);



	if (m_pImmediateContext)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.SampleDesc.Count = 1;

	return;

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	std::string error;

	scDesc.BufferCount = 1;

		{

		return hr;

		NULL,

	//頂点レイアウト作成



	//頂点レイアウト作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

	while (SDL_PollEvent(&e) != 0)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		return hr;

			{

	D3D_FEATURE_LEVEL level;

	SDL_DestroyTexture(tex);

	tinyobj::attrib_t attrib;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLight    pntLight; //点光源

	}

	//Clean up our objects and quit

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

		{



		// Loop over faces(polygon)

		SDL_RenderCopy(ren, tex, NULL, NULL);



		delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantMatrixBuffer {

				vertex.push_back(vertex_tmp);

		&materials,





		&m_pImmediateContext);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	for (int j = 0; j < icount; j++)



	txDesc.Height = rect.Height();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{





		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	int     vcount = vertexlist.size();



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	std::string imagePath = "hello.bmp";

 */

	cbDesc.MiscFlags = 0;



	cbDesc.StructureByteStride = 0;

				tinyobj::real_t tx =



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//頂点シェーダー生成

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			case SDLK_UP:



	m_pVertexBuffer = NULL;

			break;

	//深度ステンシルバッファ作成

	float    nearZ = 0.1f;



		return hr;

};

	return 0;

void CD3DTest::Render()





#include <iostream>

	return;

	m_Angle += XMConvertToRadians(1.0f);



				// access to vertex

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	//Vertex* pVList = new Vertex[vcount];

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

	vrData.SysMemSlicePitch = 0;

		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pInputLayout = NULL;

	if (FAILED(hr))

		&error,



	m_Viewport.MaxDepth = 1.0f;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.ArraySize = 1;









		D3D11_SDK_VERSION,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	WORD* pIList = new WORD[icount];



	}

	// Loop over shapes

	//Key press surfaces constants

struct ConstantLightBuffer {

			{

	}

	SDL_DestroyRenderer(ren);

struct ConstantLight {

	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	::GetClientRect(hwnd, &rect);

	if (!error.empty())

	std::string imagePath = "hello.bmp";

	m_pVertexBuffer = NULL;





		return hr;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



			{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		D3D_DRIVER_TYPE_HARDWARE,

#include <SDL.h>



	if (FAILED(hr))

	float    nearZ = 0.1f;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		SDL_Delay(1000);

};

	}*/

	m_pDepthStencilTexture = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			break;

		return hr;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



		KEY_PRESS_SURFACE_LEFT,

	vbDesc.StructureByteStride = 0;

 * Lesson 1: Hello World!

	if (FAILED(hr))

using std::cout; using std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			// Loop over vertices in the face.

		{



HRESULT CD3DTest::Create(HWND hwnd)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	delete[] pVList;

		return hr;

	txDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantMatrixBuffer {

				WORD index = idx.vertex_index;

}

	m_Viewport.TopLeftX = 0;

	{

	SAFE_RELEASE(m_pVertexBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	//ビューポート設定

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			//Select surfaces based on key press



struct ConstantMatrixBuffer {

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//Create Index



		return hr;

		KEY_PRESS_SURFACE_LEFT,



	//深度ステンシルバッファ作成



	XMFLOAT4X4 projection;





	m_pVertexBuffer = NULL;



	txDesc.Width = rect.Width();

int SEGMENT = 36;

		&level,



{

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_DestroyRenderer(ren);

	vrData.pSysMem = &pVList[0];



	ibDesc.CPUAccessFlags = 0;

				break;

	m_pTextureView = NULL;

		}

	SAFE_RELEASE(m_pDepthStencilView);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain->Present(0, 0);

};

		D3D11_SDK_VERSION,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	scDesc.OutputWindow = hwnd;

	m_VertexCount = vcount;

	SDL_Quit();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = vcount;

};

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);

	m_IndexCount = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	m_pDepthStencilTexture = NULL;

	float    farZ = 100.0f;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vbDesc.MiscFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	if (m_pImmediateContext)



	for (int j = 0; j < icount; j++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#define TINYOBJLOADER_IMPLEMENTATION

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#include <iostream>



		&m_pImmediateContext);

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float    farZ = 100.0f;

		//User requests quit

	irData.pSysMem = &pIList[0];

	dsDesc.Format = txDesc.Format;







const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pTextureView = NULL;





			default:



		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.ambient, lightAmbient);

			case SDLK_RIGHT:

#endif

	}*/

	vector<Vertex> vertexlist;

	m_Viewport.Height = (FLOAT)rect.Height();

	vector<Vertex> vertexlist;

	// Loop over shapes

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pVertexShader);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	m_Viewport.Height = (FLOAT)rect.Height();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				vertex.push_back(vertex_tmp);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

int main(int, char**)



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//ビューポート設定



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDevice = NULL;

	m_pVertexShader = NULL;



	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			switch (e.key.keysym.sym)

	//定数バッファ作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			switch (e.key.keysym.sym)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		// Loop over faces(polygon)

	bool ret = tinyobj::LoadObj(

HRESULT CD3DTest::Create(HWND hwnd)

	ConstantMaterial material; //物体の質感

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}*/

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pPixelShader);



	SAFE_RELEASE(m_pDevice);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			case SDLK_UP:

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			default:

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//vector<WORD> index_t;

	vbDesc.StructureByteStride = 0;

	if (m_pImmediateContext)

		cout << "SDL_INIT_ERROR" << endl;

	CRect                rect;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.SysMemPitch = 0;

	m_pMatrixBuffer = NULL;

struct ConstantMaterial {



	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&level,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}


	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferCount = 1;

	m_pRenderTargetView = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	reader_config.mtl_search_path = "./"; // Path to material files

	return hr;

#define TINYOBJLOADER_IMPLEMENTATION

			int num_vertices = shape.mesh.num_face_vertices[f];

		KEY_PRESS_SURFACE_TOTAL

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pDepthStencilView);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

	}

	tinyobj::ObjReader reader;

	m_Viewport.TopLeftY = 0;

			{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//深度ステンシルバッファ作成

		return hr;

				indexlist.push_back(idx.vertex_index);



	auto& attrib = reader.GetAttrib();

	return;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	{

		}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_VertexCount = vcount;

		&attrib,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	enum KeyPressSurfaces

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vrData.SysMemPitch = 0;

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pInputLayout);

	dsDesc.Format = txDesc.Format;

CD3DTest::~CD3DTest()

		&m_pSwapChain,

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_FreeSurface(bmp);

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		R"(cube.obj)");

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

		if (!reader.Error().empty())

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	CRect                rect;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.CPUAccessFlags = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_SUBRESOURCE_DATA vrData;

		{

	cbDesc.MiscFlags = 0;



	m_IndexCount = 0;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

#include <iostream>

	for (int i = 0; i < vcount; i++)

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.SampleDesc.Quality = 0;



	SDL_DestroyRenderer(ren);



	SDL_DestroyRenderer(ren);

			}

	m_Viewport.Height = (FLOAT)rect.Height();





			case SDLK_DOWN:

	m_Angle += XMConvertToRadians(1.0f);

#include <SDL.h>

	txDesc.ArraySize = 1;

int SEGMENT = 36;

	tinyobj::attrib_t attrib;

	};

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pInputLayout = NULL;

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

		}

				indexlist.push_back(index);

				// access to vertex



	SAFE_RELEASE(m_pIndexBuffer);

	dsDesc.Texture2D.MipSlice = 0;

			index_offset += num_vertices;

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_RIGHT,

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.MiscFlags = 0;

int main(int, char**)



			break;

};

	m_pDevice = NULL;

	}*/



	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				break;

	Release();

	m_pPixelShader = NULL;

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

#include <SDL.h>

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

			case SDLK_DOWN:

	m_IndexCount = icount;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSampler);







		KEY_PRESS_SURFACE_LEFT,

				break;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexBuffer);



	//Clean up our objects and quit

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include <iostream>

	m_VertexCount = vcount;

		return hr;

		if (!ret)



			case SDLK_DOWN:

		{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	if (FAILED(hr))

int main(int, char**)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//頂点バッファ作成



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (!reader.ParseFromFile(inputfile, reader_config))

				vertex.push_back(vertex_tmp);



		return hr;

				// access to vertex

	D3D11_SUBRESOURCE_DATA irData;

	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pInputLayout = NULL;

	irData.SysMemPitch = 0;

		return hr;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.MiscFlags = 0;





		SDL_Delay(1000);

	m_pRenderTargetView = NULL;



int main(int, char**)

			case SDLK_UP:

	pBackBuffer->Release();

	irData.pSysMem = &pIList[0];

	std::vector<tinyobj::material_t> materials;

	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t ty =



			{





	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

	SDL_DestroyWindow(win);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pVertexBuffer = NULL;



#include <SDL.h>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	vector<Vertex> vertexlist;



	cbDesc.CPUAccessFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.OutputWindow = hwnd;

		size_t index_offset = 0;

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];


