		KEY_PRESS_SURFACE_UP,

			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



{

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}

				// access to vertex

			case SDLK_RIGHT:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





			default:

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;

	HRESULT              hr;

		size_t index_offset = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	m_VertexCount = 0;

		pIList[j] = indexList[j];

	CRect                rect;

		{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_VertexCount = 0;

	m_pDepthStencilView = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 projection;

	//テクスチャ読み込み

 * Lesson 1: Hello World!

	::ZeroMemory(&scDesc, sizeof(scDesc));



	SAFE_RELEASE(m_pMatrixBuffer);

	//Create Index



		return hr;



int SEGMENT = 36;

	::GetClientRect(hwnd, &rect);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSwapChain = NULL;

}

	Release();

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	float    fov = XMConvertToRadians(20.0f);

	{

	m_VertexCount = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_VertexCount = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				vertex.push_back(vertex_tmp);



#include <SDL.h>

	DXGI_SWAP_CHAIN_DESC scDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	WORD   icount = indexList.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SDL_DestroyTexture(tex);



	auto& attrib = reader.GetAttrib();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_UP,

 * Lesson 1: Hello World!

	SDL_FreeSurface(suf);

	SDL_FreeSurface(bmp);

	m_pDepthStencilTexture = NULL;

			for (size_t v = 0; v < fv; v++)



	tinyobj::ObjReader reader;

	m_pDepthStencilView = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_Viewport.MinDepth = 0.0f;

	D3D11_SAMPLER_DESC smpDesc;

};

				indexlist.push_back(idx.vertex_index);

	UINT offsets = 0;

void CD3DTest::Render()

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t tx =

	{

	//Key press surfaces constants

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	Vertex* pVList = new Vertex[vcount];



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.SysMemSlicePitch = 0;





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_SUBRESOURCE_DATA irData;

		exit(1);

	WORD   icount = indexList.size();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#include <iostream>



		{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.MipLevels = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	UINT offsets = 0;

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

 * Lesson 1: Hello World!

	m_pPixelShader = NULL;

	XMFLOAT4X4 view;

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.pSysMem = &pVList[0];

		NULL,

		{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,



		KEY_PRESS_SURFACE_DOWN,

	SDL_Quit();

	txDesc.Width = rect.Width();

	m_pSwapChain->Present(0, 0);

	tinyobj::ObjReaderConfig reader_config;

		pVList[i] = vertexlist[i];

		SDL_RenderClear(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	auto& attrib = reader.GetAttrib();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.TopLeftX = 0;





	std::vector<tinyobj::material_t> materials;



{

		SDL_RenderPresent(ren);

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pDepthStencilView = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.MipLevels = 1;

	enum KeyPressSurfaces

	//インデックスバッファ作成





	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			for (size_t v = 0; v < num_vertices; v++)

		{

	SDL_DestroyWindow(win);

			index_offset += num_vertices;

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_TOTAL

		delete[] pVList;

		1,

	{

	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (!reader.ParseFromFile(inputfile, reader_config))

 * Lesson 1: Hello World!

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	SDL_FreeSurface(suf);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Quit();

	//頂点シェーダー生成



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

			}

}

			//Select surfaces based on key press

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	vector<WORD> indexList;

		{

		SDL_Delay(1000);

	{

};

void CD3DTest::Release()

		NULL,

		SDL_RenderClear(ren);

	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pIndexBuffer);

	scDesc.Windowed = TRUE;

	vbDesc.MiscFlags = 0;





	irData.SysMemPitch = 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

{

		cout << "SDL_INIT_ERROR" << endl;

	/*

	m_IndexCount = 0;

	if (FAILED(hr))

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vbDesc.MiscFlags = 0;



	txDesc.CPUAccessFlags = 0;

using std::cout; using std::endl;

		m_pImmediateContext->ClearState();

	irData.SysMemSlicePitch = 0;

}



		// Loop over faces(polygon)

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vrData.pSysMem = &pVList[0];

}



	vbDesc.MiscFlags = 0;

		if (e.type == SDL_QUIT)

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.Height = rect.Height();



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderClear(ren);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))



	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&error,

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			}

}

	ConstantMaterial material; //物体の質感

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&m_pImmediateContext);



		return hr;

			}

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				indexlist.push_back(idx.vertex_index);

		//User requests quit

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pTextureView);

		&m_pDevice,

	std::string error;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pInputLayout = NULL;

	UINT flags = 0;

	dsDesc.Texture2D.MipSlice = 0;



#define TINYOBJLOADER_IMPLEMENTATION

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	m_pPixelShader = NULL;



	if (FAILED(hr))





	SDL_FreeSurface(bmp);

	Release();

	UINT strides = sizeof(Vertex);

	XMFLOAT4X4 world;

	{

		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyTexture(tex);



	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				break;

		return hr;

	XMFLOAT4X4 view;



	SDL_DestroyWindow(win);

		}

	txDesc.MipLevels = 1;

	//頂点バッファ作成

		&level,



	D3D11_BUFFER_DESC cbDesc;

	SDL_FreeSurface(suf);



	m_pSwapChain = NULL;



		{



		delete[] pVList;

#include <SDL.h>

		return hr;







	SAFE_RELEASE(m_pTexture);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	UINT flags = 0;

{

		NULL,

		SDL_Delay(1000);

	m_pSampler = NULL;

				// access to vertex

	if (FAILED(hr))

 */

	txDesc.SampleDesc.Count = 1;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(index);

	XMFLOAT4         eyePos;   //視点座標

	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.MiscFlags = 0;

#endif

	m_pVertexShader = NULL;

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.Height = (FLOAT)rect.Height();

	irData.SysMemPitch = 0;



		SDL_RenderClear(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			case SDLK_LEFT:



	SDL_DestroyTexture(tex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	// Loop over shapes

	if (!reader.Warning().empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyWindow(win);

		}





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL level;



		KEY_PRESS_SURFACE_RIGHT,

 */

		flags,

	{

		return hr;







	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	bool ret = tinyobj::LoadObj(



		SDL_Delay(1000);

	if (FAILED(hr))

void CD3DTest::Release()



			case SDLK_DOWN:

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

};

	if (!error.empty())

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include <iostream>

		&materials,

				break;

		//User presses a key

{

	D3D11_SUBRESOURCE_DATA irData;

{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyWindow(win);

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	auto& attrib = reader.GetAttrib();



	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_Delay(1000);

	::GetClientRect(hwnd, &rect);

	scDesc.OutputWindow = hwnd;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		return hr;



	pBackBuffer->Release();

		{

	return 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_DestroyWindow(win);

	if (FAILED(hr))

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	::GetClientRect(hwnd, &rect);

	delete[] pVList;

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_DOWN,



		size_t index_offset = 0;

	}

	::GetClientRect(hwnd, &rect);

	cbDesc.StructureByteStride = 0;

	//First we need to start up SDL, and make sure it went ok

	UINT strides = sizeof(Vertex);

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	SDL_Quit();

			case SDLK_UP:

		KEY_PRESS_SURFACE_LEFT,

#endif



	auto& materials = reader.GetMaterials();

	ConstantMatrixBuffer cmb;

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.CPUAccessFlags = 0;

	ibDesc.StructureByteStride = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

}

		// Loop over faces(polygon)

	SDL_DestroyWindow(win);

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#endif

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.MipLevels = 1;

		}

		//User requests quit

{



	m_pPixelShader = NULL;

CD3DTest::~CD3DTest()

	}

}



	vbDesc.MiscFlags = 0;





		return hr;





	SAFE_RELEASE(m_pLightBuffer);

			exit(1);

	//vector<Vertex> vertex_t;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pVertexBuffer);

	//定数バッファ作成



			}

	for (int i = 0; i < vcount; i++)

	for (const auto& shape : shapes)

{

	for (int j = 0; j < icount; j++)

	m_pSwapChain = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		{

	{

				break;





		m_pImmediateContext->ClearState();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//定数バッファ作成

		&scDesc,

	m_IndexCount = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t tx =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	SAFE_RELEASE(m_pIndexBuffer);

		NULL,

	SDL_DestroyRenderer(ren);

	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyTexture(tex);

	}

CD3DTest::~CD3DTest()

	tinyobj::ObjReaderConfig reader_config;

	}



};

			case SDLK_LEFT:

			switch (e.key.keysym.sym)

		return hr;

{

	m_VertexCount = vcount;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	if (!reader.ParseFromFile(inputfile, reader_config))

/*

	Release();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	::GetClientRect(hwnd, &rect);

	SDL_DestroyRenderer(ren);

	UINT strides = sizeof(Vertex);

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D11_SUBRESOURCE_DATA vrData;

	std::string imagePath = "hello.bmp";







	if (m_pImmediateContext)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			default:

				WORD index = idx.vertex_index;

			int num_vertices = shape.mesh.num_face_vertices[f];

				WORD index = idx.vertex_index;



		&materials,

	m_pImmediateContext = NULL;

	m_pSwapChain->Present(0, 0);

				break;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.MaxDepth = 1.0f;

}

	}

	float    fov = XMConvertToRadians(20.0f);

};

	}

	txDesc.MiscFlags = 0;

	return;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pImmediateContext);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	Vertex* pVList = new Vertex[vcount];



 * Lesson 1: Hello World!



	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

		R"(cube.obj)");

	return;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



			case SDLK_DOWN:



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

int SEGMENT = 36;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pIList;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pTextureView);



	irData.SysMemPitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return 1;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pDepthStencilView = NULL;

				// access to vertex

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	dsDesc.Format = txDesc.Format;

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReaderConfig reader_config;





	SDL_Quit();

	scDesc.OutputWindow = hwnd;

		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	if (FAILED(hr))

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			default:

	{

	for (int j = 0; j < icount; j++)



			{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SAMPLER_DESC smpDesc;



			case SDLK_UP:

	D3D_FEATURE_LEVEL level;

	scDesc.BufferCount = 1;

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t tx =

}
	auto& attrib = reader.GetAttrib();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	/*

#include <iostream>

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}*/

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

	//インデックスバッファ作成

				indexlist.push_back(index);

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_UP,

	{

			case SDLK_LEFT:

	UINT strides = sizeof(Vertex);

int main(int, char**)

			case SDLK_RIGHT:

	}

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		KEY_PRESS_SURFACE_UP,

			switch (e.key.keysym.sym)

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	};

	SAFE_RELEASE(m_pLightBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (!reader.Warning().empty())



	DXGI_SWAP_CHAIN_DESC scDesc;

{

	WORD* pIList = new WORD[icount];

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_UP,

	m_Viewport.MinDepth = 0.0f;

	{



		KEY_PRESS_SURFACE_RIGHT,

HRESULT CD3DTest::Create(HWND hwnd)

		if (!ret)

	cbDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_UP,



	}

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//Clean up our objects and quit

HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

				// access to vertex

			}

	for (int i = 0; i < 3; i++)

	XMFLOAT4         eyePos;   //視点座標

	dsDesc.Texture2D.MipSlice = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pLightBuffer = NULL;

	//ビューポート設定

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		D3D11_SDK_VERSION,

			index_offset += fv;

				vertex.push_back(vertex_tmp);

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::string error;

	m_pImmediateContext = NULL;

}

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pPixelShader = NULL;



struct ConstantLightBuffer {

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_DOWN,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSwapChain);



	m_pDepthStencilView = NULL;

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



			for (size_t v = 0; v < num_vertices; v++)

	}

	pBackBuffer->Release();

#include <SDL.h>



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pTextureView = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		size_t index_offset = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#include <iostream>

	D3D11_SUBRESOURCE_DATA irData;

		&m_pDevice,

	m_pMatrixBuffer = NULL;

	std::vector<tinyobj::shape_t> shapes;

	scDesc.OutputWindow = hwnd;

	XMFLOAT4X4 view;



	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pDepthStencilView);

			{

		D3D11_SDK_VERSION,



	if (FAILED(hr))

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.SampleDesc.Quality = 0;

		return hr;



		&m_pDevice,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			}

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(idx.vertex_index);



	cbDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pVertexBuffer);

};

}

	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>



		&error,



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))



		SDL_RenderPresent(ren);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDepthStencilView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



{

	m_VertexCount = vcount;

			case SDLK_RIGHT:

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pIndexBuffer);

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	tinyobj::ObjReader reader;

	delete[] pIList;



			case SDLK_RIGHT:

		return hr;

	vrData.pSysMem = &pVList[0];

	SDL_Quit();







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	tinyobj::ObjReaderConfig reader_config;

	{

			// Loop over vertices in the face.

}

	XMFLOAT4X4 projection;

{

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

	SDL_DestroyTexture(tex);

	D3D11_SAMPLER_DESC smpDesc;

	D3D_FEATURE_LEVEL level;

#define TINYOBJLOADER_IMPLEMENTATION

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyTexture(tex);

{

{

	vrData.pSysMem = &pVList[0];



		if (e.type == SDL_QUIT)

#ifdef _DEBUG

	SAFE_RELEASE(m_pTexture);

	}

	CRect                rect;

			// Loop over vertices in the face.

	scDesc.OutputWindow = hwnd;



		if (!ret)

	}

	SDL_Quit();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

		if (!reader.Error().empty())



	txDesc.MipLevels = 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#ifdef _DEBUG



CD3DTest::CD3DTest()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		&m_pSwapChain,

		exit(1);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		KEY_PRESS_SURFACE_DEFAULT,

		1,

	if (FAILED(hr))

	//Key press surfaces constants

	cbDesc.MiscFlags = 0;



	auto& materials = reader.GetMaterials();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	vrData.SysMemPitch = 0;



	{

	D3D11_SAMPLER_DESC smpDesc;



	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		if (!reader.Error().empty())



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	vbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float    nearZ = 0.1f;

}
	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float    fov = XMConvertToRadians(20.0f);

			}

	ZeroMemory(&txDesc, sizeof(txDesc));

	for (int i = 0; i < vcount; i++)

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pPixelShader);

	scDesc.SampleDesc.Count = 1;



}

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		pIList[j] = indexList[j];

	m_pVertexShader = NULL;

	dsDesc.Format = txDesc.Format;

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Event e;



int main(int, char**)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				break;

	Release();



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		size_t index_offset = 0;  // インデントのオフセット

void CD3DTest::Render()





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

int main(int, char**)

	txDesc.MiscFlags = 0;

{

		{

	m_pDepthStencilView = NULL;

	//Key press surfaces constants

		SDL_RenderPresent(ren);

	m_Viewport.TopLeftY = 0;

		}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t tx =

	//Key press surfaces constants

		KEY_PRESS_SURFACE_UP,

		pLevels,

				break;

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				WORD index = idx.vertex_index;

};

	bool ret = tinyobj::LoadObj(

		return hr;

			case SDLK_LEFT:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext = NULL;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		return hr;

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

			}

	//インデックスバッファ作成

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			case SDLK_DOWN:

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	CRect                rect;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);







	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

	for (int i = 0; i < 3; i++)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyWindow(win);

	//Create Index

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	::GetClientRect(hwnd, &rect);

			int num_vertices = shape.mesh.num_face_vertices[f];

		m_pImmediateContext->ClearState();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	txDesc.CPUAccessFlags = 0;

				break;

	ibDesc.StructureByteStride = 0;

	m_pInputLayout = NULL;

}

	return 0;

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				WORD index = idx.vertex_index;

	txDesc.MiscFlags = 0;

	//Create Index

		//User requests quit

			//Select surfaces based on key press

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	D3D_FEATURE_LEVEL level;

	m_Viewport.TopLeftY = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		return hr;

	//Clean up our objects and quit

		pLevels,

	D3D11_BUFFER_DESC vbDesc;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    farZ = 100.0f;

			{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pDepthStencilTexture = NULL;

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		//User requests quit

		SDL_Delay(1000);

	UINT strides = sizeof(Vertex);

};

	if (FAILED(hr))

}

	m_Viewport.Height = (FLOAT)rect.Height();

#include "DirectXManager.h"

	ID3D11Texture2D* pBackBuffer;

	delete[] pVList;

		SDL_RenderPresent(ren);



	XMFLOAT4X4 view;

	tinyobj::ObjReaderConfig reader_config;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

 * Lesson 1: Hello World!

void CD3DTest::Release()

	m_pVertexShader = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			for (size_t v = 0; v < num_vertices; v++)

}
	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		KEY_PRESS_SURFACE_TOTAL

			case SDLK_DOWN:

	D3D11_SUBRESOURCE_DATA vrData;

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))



};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pLightBuffer);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





			{

	SAFE_RELEASE(m_pDevice);

			{

	ibDesc.MiscFlags = 0;



#include <iostream>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

		return 1;

			// Loop over vertices in the face.

		SDL_RenderCopy(ren, tex, NULL, NULL);



	}



}

	Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#include <iostream>



	m_pImmediateContext = NULL;

		return hr;

	cbDesc.StructureByteStride = 0;

	m_IndexCount = icount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_DOWN,





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	{

	SAFE_RELEASE(m_pVertexBuffer);

	}

	}*/

			case SDLK_RIGHT:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

		SDL_RenderPresent(ren);

		delete[] pIList;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		&m_pImmediateContext);





	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::string inputfile = "test.obj";



		KEY_PRESS_SURFACE_DOWN,

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	LoadObj(vertexlist, indexList);

	//vector<WORD> index_t;

	{

#include <iostream>

	m_VertexCount = 0;

{

	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pMatrixBuffer);

			case SDLK_RIGHT:

		&attrib,

	if (!reader.Warning().empty())

		}



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

{

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

{

	m_VertexCount = vcount;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	return 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}



	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;



 * Lesson 1: Hello World!

				tinyobj::real_t ty =

			}



		SDL_Delay(1000);

	Release();

		&level,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	tinyobj::ObjReader reader;

		&error,

	std::string error;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	XMFLOAT4X4 view;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pVertexBuffer);





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pDevice);

		delete[] pIList;

	std::vector<tinyobj::shape_t> shapes;



	SDL_Event e;

		KEY_PRESS_SURFACE_UP,



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





{

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pDevice);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pSampler);



	txDesc.MiscFlags = 0;

		return hr;

	XMFLOAT4X4 view;









				WORD index = idx.vertex_index;

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

				tinyobj::real_t tx =

		//User presses a key



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	while (SDL_PollEvent(&e) != 0)

using std::cout; using std::endl;

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pLightBuffer);

	Vertex* pVList = new Vertex[vcount];



	vbDesc.StructureByteStride = 0;





		m_pImmediateContext->ClearState();





	}



		NULL,

	m_pVertexBuffer = NULL;



		return hr;

	tinyobj::ObjReader reader;



{

	WORD   icount = indexList.size();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



	m_Viewport.MaxDepth = 1.0f;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pDepthStencilTexture);





			// Loop over vertices in the face.

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (!reader.Warning().empty())

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_UP:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		NULL,



		{

				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

};

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_RenderClear(ren);

}
	txDesc.ArraySize = 1;

				// access to vertex

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	SDL_Quit();

		exit(1);

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	{

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	UINT offsets = 0;

	{





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += num_vertices;



		{

	vrData.SysMemSlicePitch = 0;

			}

	if (FAILED(hr))

	if (!error.empty())

	//頂点レイアウト作成





	vector<WORD> indexList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



struct ConstantMatrixBuffer {

		//User presses a key

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		//User presses a key

		&scDesc,

	{



int SEGMENT = 36;

			switch (e.key.keysym.sym)

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		exit(1);

	SDL_Event e;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				// access to vertex

		pLevels,


