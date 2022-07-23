



	D3D11_BUFFER_DESC vbDesc;

		delete[] pIList;

	SDL_DestroyTexture(tex);



	ConstantMaterial material; //物体の質感





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	UINT flags = 0;

	std::string error;

	irData.pSysMem = &pIList[0];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pTextureView);

CD3DTest::~CD3DTest()

	m_pTextureView = NULL;



		&m_pDevice,

{





	//頂点バッファ作成





		&materials,



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;



	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pTexture);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

		{



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))







	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//テクスチャ読み込み

	m_pIndexBuffer = NULL;

	m_pImmediateContext = NULL;



		R"(cube.obj)");

{

	m_Viewport.Height = (FLOAT)rect.Height();

				WORD index = idx.vertex_index;

	::ZeroMemory(&scDesc, sizeof(scDesc));

};



		pIList[j] = indexList[j];

	tinyobj::attrib_t attrib;

	//Clean up our objects and quit

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		pIList[j] = indexList[j];

}

	if (!error.empty())



	if (FAILED(hr))







			case SDLK_RIGHT:



				indexlist.push_back(idx.vertex_index);



		}

	XMFLOAT4X4 projection;

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		D3D11_SDK_VERSION,



	ibDesc.MiscFlags = 0;

 * Lesson 1: Hello World!

			// Loop over vertices in the face.

	};

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pTextureView = NULL;





	std::vector<tinyobj::shape_t> shapes;

		size_t index_offset = 0;

		&error,





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				indexlist.push_back(idx.vertex_index);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyTexture(tex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;





		return hr;

			for (size_t v = 0; v < fv; v++)

				indexlist.push_back(index);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	HRESULT              hr;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	}



	//Key press surfaces constants

	{



#include <iostream>

		{

	m_Viewport.TopLeftY = 0;

		size_t index_offset = 0;

	for (int j = 0; j < icount; j++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SAFE_RELEASE(m_pDepthStencilTexture);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#define TINYOBJLOADER_IMPLEMENTATION

			exit(1);



	}

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

void CD3DTest::Render()

		m_pImmediateContext->ClearState();

int SEGMENT = 36;

	std::string error;



	WORD* pIList = new WORD[icount];

	SDL_Event e;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))



	if (m_pImmediateContext)



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.MiscFlags = 0;

	pBackBuffer->Release();

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	pBackBuffer->Release();



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;



			case SDLK_UP:

		//User presses a key

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		D3D11_SDK_VERSION,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	txDesc.CPUAccessFlags = 0;

#include <iostream>

		&scDesc,

	if (FAILED(hr))

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	Release();

		m_pImmediateContext->ClearState();

	scDesc.Windowed = TRUE;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		NULL,



	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		R"(cube.obj)");

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	LoadObj(vertexlist, indexList);

	m_pMatrixBuffer = NULL;

	bool ret = tinyobj::LoadObj(

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::attrib_t attrib;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

struct ConstantLightBuffer {

				vertex.push_back(vertex_tmp);

	txDesc.Height = rect.Height();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		{



using std::cout; using std::endl;

	m_Angle += XMConvertToRadians(1.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ConstantLightBuffer clb;



	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.MinDepth = 0.0f;



	//vector<Vertex> vertex_t;

		SDL_Delay(1000);

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	std::string imagePath = "hello.bmp";



	D3D11_TEXTURE2D_DESC txDesc;

			// Loop over vertices in the face.

	m_pDepthStencilTexture = NULL;

		return hr;

		return hr;



	if (!reader.ParseFromFile(inputfile, reader_config))

	//Create Index

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4X4 view;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	XMFLOAT4         ambient;  //環境光(r,g,b)

	::GetClientRect(hwnd, &rect);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&shapes,

	txDesc.Height = rect.Height();

	D3D11_BUFFER_DESC vbDesc;

	m_Viewport.MaxDepth = 1.0f;

		exit(1);



	XMFLOAT4X4 projection;

		{

			index_offset += num_vertices;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.MiscFlags = 0;

};

			index_offset += fv;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	//Key press surfaces constants



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	m_pPixelShader = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			{





				WORD index = idx.vertex_index;

	SDL_Quit();

	m_pRenderTargetView = NULL;

			index_offset += num_vertices;



		}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	pBackBuffer->Release();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{

		&scDesc,



	m_pVertexShader = NULL;

CD3DTest::CD3DTest()

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				WORD index = idx.vertex_index;

	cbDesc.StructureByteStride = 0;

 */

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	bool ret = tinyobj::LoadObj(

	vector<WORD> indexList;

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilView = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	SAFE_RELEASE(m_pDepthStencilView);

	//テクスチャ読み込み

				tinyobj::real_t tx =

	enum KeyPressSurfaces

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	txDesc.ArraySize = 1;

};



	txDesc.Height = rect.Height();





		if (e.type == SDL_QUIT)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_VertexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		if (!reader.Error().empty())

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	pBackBuffer->Release();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		pLevels,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	Vertex* pVList = new Vertex[vcount];

	DXGI_SWAP_CHAIN_DESC scDesc;

			case SDLK_RIGHT:

				break;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	//Clean up our objects and quit

	Release();



			// Loop over vertices in the face.

			// Loop over vertices in the face.

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)





{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&m_pSwapChain,



	tinyobj::ObjReaderConfig reader_config;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

}
	XMFLOAT4 diffuse;           //拡散(r,g,b)

		pVList[i] = vertexlist[i];



	delete[] pVList;

};

	}

	if (!reader.Warning().empty())

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferCount = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ConstantLight    pntLight; //点光源

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

		pLevels,



	pBackBuffer->Release();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	CRect                rect;



using std::cout; using std::endl;



	//Create Index

	//Clean up our objects and quit

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

using std::cout; using std::endl;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pDevice);

#include <iostream>

			for (size_t v = 0; v < fv; v++)



	D3D11_SUBRESOURCE_DATA vrData;





	return 0;

				break;

	//Clean up our objects and quit









		exit(1);

	}

		return hr;





	SDL_DestroyWindow(win);

	reader_config.mtl_search_path = "./"; // Path to material files

	HRESULT              hr;

				indexlist.push_back(idx.vertex_index);

	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

		SDL_RenderPresent(ren);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				// access to vertex

	if (m_pImmediateContext)

	m_pTexture = NULL;

	vrData.pSysMem = &pVList[0];

	vbDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pPixelShader);

	CRect                rect;

}

};

		size_t index_offset = 0;

		&attrib,

#ifdef _DEBUG

	//Key press surfaces constants

	XMFLOAT4 ambient;           //環境(r,g,b)

	// Loop over shapes



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	dsDesc.Format = txDesc.Format;

CD3DTest::~CD3DTest()

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pInputLayout);

	m_pDevice = NULL;

int SEGMENT = 36;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	enum KeyPressSurfaces

	{

		{

	pBackBuffer->Release();

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//頂点レイアウト作成

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pMatrixBuffer);

	m_IndexCount = 0;

		&scDesc,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#include <SDL.h>


