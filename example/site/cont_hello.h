	{

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		//User requests quit

};

	SDL_DestroyTexture(tex);

	return 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&m_pDevice,



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext = NULL;

	UINT offsets = 0;

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pLightBuffer);



		SDL_RenderPresent(ren);

	m_pPixelShader = NULL;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				break;

	bool ret = tinyobj::LoadObj(



	if (m_pImmediateContext)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	int     vcount = vertexlist.size();

	SDL_FreeSurface(bmp);

	m_pDevice = NULL;

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

			// Loop over vertices in the face.

CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	WORD* pIList = new WORD[icount];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pDepthStencilView = NULL;

	SDL_Event e;

	m_Viewport.TopLeftX = 0;

			}

	}

			{

	auto& shapes = reader.GetShapes();

	dsDesc.Texture2D.MipSlice = 0;







	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_UP,



	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	dsDesc.Format = txDesc.Format;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

int main(int, char**)



	return 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			}

{



		1,



int SEGMENT = 36;

	m_pMatrixBuffer = NULL;







	}

	}

	SAFE_RELEASE(m_pSampler);



		else if (e.type == SDL_KEYDOWN)

{

		NULL,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

	m_pDepthStencilTexture = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;

				break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

int main(int, char**)



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		}

	{

				vertex.push_back(vertex_tmp);

	return 0;

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&materials,

	scDesc.SampleDesc.Count = 1;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	};

	}*/

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				break;

		cout << "SDL_INIT_ERROR" << endl;

};







			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			{

{

	SDL_Quit();

	std::vector<tinyobj::material_t> materials;

	m_Viewport.MinDepth = 0.0f;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_IndexCount = 0;

		&shapes,



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

/*

	XMFLOAT4 specular;          //反射(r,g,b)

	ConstantMatrixBuffer cmb;

				indexlist.push_back(idx.vertex_index);





	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

			{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				break;

}

#endif

struct ConstantMaterial {





			{





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pSwapChain->Present(0, 0);

	m_pRenderTargetView = NULL;

	dsDesc.Format = txDesc.Format;

	vrData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		delete[] pIList;





	{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ConstantMatrixBuffer cmb;

	//頂点バッファ作成

				tinyobj::real_t ty =

				break;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			case SDLK_LEFT:



	ConstantMaterial material; //物体の質感

	D3D11_SUBRESOURCE_DATA irData;

			}

				vertex.push_back(vertex_tmp);

		return hr;

}



	{

};

}

		return hr;



	m_IndexCount = 0;

	m_Viewport.MinDepth = 0.0f;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_DOWN,



	vrData.SysMemPitch = 0;



	XMStoreFloat4(&clb.ambient, lightAmbient);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pRenderTargetView);

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



struct ConstantLight {



				WORD index = idx.vertex_index;

	{





	{

{

	SAFE_RELEASE(m_pRenderTargetView);





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	HRESULT              hr;



		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pTexture);

	if (!error.empty())

	delete[] pIList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.MiscFlags = 0;

int main(int, char**)

		SDL_RenderPresent(ren);

CD3DTest::CD3DTest()

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	::GetClientRect(hwnd, &rect);

	float    fov = XMConvertToRadians(20.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//深度ステンシルバッファ作成

		KEY_PRESS_SURFACE_DOWN,

#include <SDL.h>

		exit(1);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	Release();

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&scDesc,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vrData.SysMemPitch = 0;

		//User presses a key

	SAFE_RELEASE(m_pSwapChain);

		return hr;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_RenderPresent(ren);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_BUFFER_DESC vbDesc;

	UINT offsets = 0;

	txDesc.ArraySize = 1;

	tinyobj::ObjReaderConfig reader_config;



	if (!reader.Warning().empty())

	m_IndexCount = 0;

	txDesc.SampleDesc.Count = 1;





	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMFLOAT4X4 world;



{

		return hr;

	SDL_DestroyRenderer(ren);

		size_t index_offset = 0;  // インデントのオフセット

	ZeroMemory(&dsDesc, sizeof(dsDesc));





		&m_pDevice,

	scDesc.BufferCount = 1;

	m_VertexCount = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)



	ID3D11Texture2D* pBackBuffer;



};

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

		else if (e.type == SDL_KEYDOWN)

	UINT offsets = 0;

		delete[] pIList;

	D3D11_BUFFER_DESC ibDesc;

	UINT offsets = 0;

};

	txDesc.MiscFlags = 0;

CD3DTest::~CD3DTest()

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	if (!reader.Warning().empty())

	scDesc.OutputWindow = hwnd;

	{



	ibDesc.CPUAccessFlags = 0;

	SDL_Quit();

}

	}





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;



	//頂点シェーダー生成

	XMFLOAT4X4 view;

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain = NULL;

	}

	SAFE_RELEASE(m_pDepthStencilView);

	{

			}

	while (SDL_PollEvent(&e) != 0)



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		if (e.type == SDL_QUIT)

		{

	XMFLOAT4X4 world;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::vector<tinyobj::material_t> materials;

	if (!reader.Warning().empty())

{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//定数バッファ作成

	ibDesc.MiscFlags = 0;

		SDL_Delay(1000);

		&error,

		SDL_RenderClear(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

	//vector<Vertex> vertex_t;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pSwapChain,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		//User requests quit



	txDesc.MipLevels = 1;

	Vertex* pVList = new Vertex[vcount];

		return hr;

		&m_pSwapChain,

#include <SDL.h>

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				break;

		//User presses a key



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);



		SDL_RenderClear(ren);

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Count = 1;

	m_Viewport.Height = (FLOAT)rect.Height();

	LoadObj(vertexlist, indexList);

	tinyobj::ObjReaderConfig reader_config;

			exit(1);

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);

	for (int i = 0; i < 3; i++)

	// Loop over shapes

	{

	SAFE_RELEASE(m_pLightBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	D3D_FEATURE_LEVEL level;

	if (m_pImmediateContext)

	if (m_pImmediateContext)

	//頂点バッファ作成



			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				// access to vertex

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

struct ConstantMatrixBuffer {

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

 * Lesson 1: Hello World!

	delete[] pIList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_TOTAL

	scDesc.SampleDesc.Quality = 0;



	//ピクセルシェーダー生成

struct ConstantMatrixBuffer {

			}

	auto& attrib = reader.GetAttrib();



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	{

 * Lesson 1: Hello World!

		SDL_RenderPresent(ren);

	int     vcount = vertexlist.size();

	{

#include <iostream>

			case SDLK_RIGHT:

}
	m_pRenderTargetView = NULL;

	m_pMatrixBuffer = NULL;

	m_pInputLayout = NULL;

void CD3DTest::Release()



		NULL,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.pSysMem = &pIList[0];

	txDesc.CPUAccessFlags = 0;

#endif

	m_pDevice = NULL;

	//vector<WORD> index_t;

		&shapes,





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		pLevels,





	m_IndexCount = icount;



	// Loop over shapes

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

CD3DTest::~CD3DTest()

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_SUBRESOURCE_DATA vrData;

	CRect                rect;

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pSampler);



		&shapes,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;



				break;

	m_Viewport.TopLeftX = 0;

	{

		}



	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderPresent(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	DXGI_SWAP_CHAIN_DESC scDesc;



		&shapes,

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		}

		if (!ret)

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Quit();

	txDesc.Width = rect.Width();



		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyWindow(win);





	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//ピクセルシェーダー生成

		SDL_RenderPresent(ren);

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_IndexCount = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_VertexCount = 0;



	SAFE_RELEASE(m_pInputLayout);

	return 0;





	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	WORD   icount = indexList.size();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	};

	SDL_DestroyTexture(tex);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	/*

	{

			case SDLK_LEFT:

		SDL_RenderCopy(ren, tex, NULL, NULL);

		pIList[j] = indexList[j];



	}



		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	std::string inputfile = "test.obj";

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_IndexCount = icount;





int main(int, char**)

	::ZeroMemory(&scDesc, sizeof(scDesc));

}
	m_Viewport.TopLeftX = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//First we need to start up SDL, and make sure it went ok

	}



	cbDesc.CPUAccessFlags = 0;

		}

		KEY_PRESS_SURFACE_UP,

		{

	m_Viewport.MaxDepth = 1.0f;

		return hr;

		return hr;







				break;



	for (int i = 0; i < 3; i++)

	SDL_DestroyRenderer(ren);

		1,



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_RenderPresent(ren);

	m_pVertexBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.CPUAccessFlags = 0;

	for (int i = 0; i < 3; i++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	while (SDL_PollEvent(&e) != 0)

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (!reader.Warning().empty())



	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

using std::cout; using std::endl;

	HRESULT              hr;

	ConstantMaterial material; //物体の質感

	txDesc.MipLevels = 1;

	/*

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&attrib,

	dsDesc.Texture2D.MipSlice = 0;

		return hr;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	pBackBuffer->Release();

	m_VertexCount = 0;

	int     vcount = vertexlist.size();

	return hr;

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4X4 world;



		flags,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

}



{

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)



	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#endif

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

/*

	m_pMatrixBuffer = NULL;

	std::string inputfile = "test.obj";

	CRect                rect;

		R"(cube.obj)");

HRESULT CD3DTest::Create(HWND hwnd)





		&error,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

{







	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		exit(1);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferDesc.Width = rect.Width();



		exit(1);

	return;

	delete[] pIList;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



};

		NULL,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



	//定数バッファ作成



			switch (e.key.keysym.sym)

		pIList[j] = indexList[j];





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (int i = 0; i < 3; i++)

	SDL_DestroyTexture(tex);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{



	tinyobj::ObjReaderConfig reader_config;

		{

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pDevice = NULL;

				break;

		SDL_RenderClear(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	txDesc.MipLevels = 1;





int main(int, char**)



		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	vector<Vertex> vertexlist;



	ConstantMatrixBuffer cmb;

	//vector<WORD> index_t;

 */

	cbDesc.CPUAccessFlags = 0;







		{



	SDL_Event e;

	}

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vrData.pSysMem = &pVList[0];



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

	for (int i = 0; i < vcount; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	vector<Vertex> vertexlist;

	m_Angle += XMConvertToRadians(1.0f);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

int SEGMENT = 36;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4         eyePos;   //視点座標

		D3D11_SDK_VERSION,

		//User requests quit

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pLightBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::GetClientRect(hwnd, &rect);

		D3D11_SDK_VERSION,

	if (FAILED(hr))





			exit(1);

	m_pTextureView = NULL;

		if (e.type == SDL_QUIT)

	irData.SysMemSlicePitch = 0;



		pIList[j] = indexList[j];

	SDL_Event e;

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Width = rect.Width();

				break;

	SDL_DestroyTexture(tex);

		cout << "SDL_INIT_ERROR" << endl;



		cout << "SDL_INIT_ERROR" << endl;

		return hr;

{

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	auto& attrib = reader.GetAttrib();





	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





		size_t index_offset = 0;  // インデントのオフセット

			case SDLK_DOWN:

	cbDesc.CPUAccessFlags = 0;

				break;

			for (size_t v = 0; v < num_vertices; v++)



			index_offset += fv;

	ibDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	WORD* pIList = new WORD[icount];

void CD3DTest::Release()

				break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	WORD   icount = indexList.size();

	scDesc.Windowed = TRUE;







	std::string error;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

	XMStoreFloat4(&clb.eyePos, eye);

{

	for (int j = 0; j < icount; j++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





		pVList[i] = vertexlist[i];

	m_pInputLayout = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.MiscFlags = 0;

	SDL_DestroyRenderer(ren);

	vrData.pSysMem = &pVList[0];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		pIList[j] = indexList[j];



{

		//User requests quit

	}

		KEY_PRESS_SURFACE_DOWN,

#include "DirectXManager.h"

		SDL_Delay(1000);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 ambient;           //環境(r,g,b)

}



	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		//User requests quit



	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Width = rect.Width();

 */

	m_Angle += XMConvertToRadians(1.0f);

			for (size_t v = 0; v < fv; v++)





	UINT flags = 0;

int main(int, char**)

			case SDLK_RIGHT:

	cbDesc.StructureByteStride = 0;

	ibDesc.MiscFlags = 0;

{

	m_pVertexBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			case SDLK_UP:

		KEY_PRESS_SURFACE_DEFAULT,

	CRect                rect;

	//vector<Vertex> vertex_t;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

		delete[] pIList;

#define TINYOBJLOADER_IMPLEMENTATION

	std::string error;

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		flags,

	if (FAILED(hr))



		}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	pBackBuffer->Release();

		KEY_PRESS_SURFACE_TOTAL

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.CPUAccessFlags = 0;

}





		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

	Vertex* pVList = new Vertex[vcount];

		}

	if (!reader.Warning().empty())

struct ConstantMatrixBuffer {

	m_Angle += XMConvertToRadians(1.0f);

			{



	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	}

		//User presses a key

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.BufferCount = 1;

	m_pSwapChain = NULL;

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC vbDesc;

	m_pMatrixBuffer = NULL;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		}



				vertex.push_back(vertex_tmp);





	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return 1;

	tinyobj::ObjReaderConfig reader_config;



	Release();

	SDL_DestroyTexture(tex);

using std::cout; using std::endl;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext = NULL;

	txDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_RenderPresent(ren);

	m_IndexCount = icount;

		//User presses a key

			case SDLK_LEFT:



	D3D11_TEXTURE2D_DESC txDesc;

	if (!reader.Warning().empty())

	{

{

		{



		NULL,



{

	ConstantMatrixBuffer cmb;



	m_VertexCount = vcount;

			case SDLK_LEFT:

		KEY_PRESS_SURFACE_LEFT,

	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDepthStencilView = NULL;

	ibDesc.CPUAccessFlags = 0;

		delete[] pVList;



	D3D11_TEXTURE2D_DESC txDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

		if (e.type == SDL_QUIT)



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pImmediateContext);

void CD3DTest::Release()

 */

	XMFLOAT4 specular;          //反射(r,g,b)



	txDesc.SampleDesc.Count = 1;

	{



	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pPixelShader = NULL;





	std::string error;

	m_VertexCount = vcount;

		// Loop over faces(polygon)



struct ConstantLightBuffer {

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_SAMPLER_DESC smpDesc;

{

				vertex.push_back(vertex_tmp);

};

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		m_pImmediateContext->ClearState();

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_Viewport.Height = (FLOAT)rect.Height();

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	CRect                rect;

		//User requests quit



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		KEY_PRESS_SURFACE_DEFAULT,



	m_Viewport.Height = (FLOAT)rect.Height();

			{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;





	return 0;

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(index);

	{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

		// Loop over faces(polygon)

		return hr;

		delete[] pIList;

#include <SDL.h>

	SAFE_RELEASE(m_pInputLayout);

	m_pIndexBuffer = NULL;





	reader_config.mtl_search_path = "./"; // Path to material files



		NULL,



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&materials,

	m_pSampler = NULL;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		//User presses a key



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD   icount = indexList.size();

	tinyobj::attrib_t attrib;

	}

				WORD index = idx.vertex_index;

	SDL_Quit();

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pMatrixBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Clean up our objects and quit

	//インデックスバッファ作成







	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;



	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

		return hr;

			break;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

		pIList[j] = indexList[j];

		return hr;



	}

	//Create Index



	std::string error;

	HRESULT              hr;



			case SDLK_RIGHT:

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

}



	if (!reader.Warning().empty())



	SDL_Quit();

		// Loop over faces(polygon)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

		&scDesc,

	dsDesc.Texture2D.MipSlice = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	scDesc.BufferDesc.Height = rect.Height();



		size_t index_offset = 0;



	//ピクセルシェーダー生成



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

#endif

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

	float    fov = XMConvertToRadians(20.0f);

struct ConstantMatrixBuffer {

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.TopLeftY = 0;

	{

		{

	ConstantLight    pntLight; //点光源

	for (int j = 0; j < icount; j++)

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		KEY_PRESS_SURFACE_DOWN,

		&m_pSwapChain,

	ConstantMaterial material; //物体の質感

			}

			index_offset += num_vertices;



	cbDesc.CPUAccessFlags = 0;

};

	for (int j = 0; j < icount; j++)

	tinyobj::attrib_t attrib;



	SDL_DestroyWindow(win);

				break;

	ConstantLightBuffer clb;

	txDesc.SampleDesc.Count = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

		return hr;

	m_Viewport.TopLeftX = 0;



	{

	float    nearZ = 0.1f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		if (!reader.Error().empty())

	m_pSwapChain = NULL;

	scDesc.OutputWindow = hwnd;

	}

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 ambient;           //環境(r,g,b)

	CRect                rect;

	SAFE_RELEASE(m_pLightBuffer);

		return hr;

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#endif

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantLight {

	cbDesc.MiscFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	DXGI_SWAP_CHAIN_DESC scDesc;

		// Loop over faces(polygon)

	//頂点バッファ作成









				WORD index = idx.vertex_index;



	LoadObj(vertexlist, indexList);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//vector<Vertex> vertex_t;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.MiscFlags = 0;

	scDesc.BufferCount = 1;

{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





};



	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

int main(int, char**)

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.MipLevels = 1;

				break;

	scDesc.BufferDesc.Height = rect.Height();



	txDesc.Height = rect.Height();

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

int main(int, char**)



	cbDesc.StructureByteStride = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_VertexCount = vcount;

		//User presses a key



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pSampler = NULL;



	int     vcount = vertexlist.size();

	scDesc.OutputWindow = hwnd;

		return hr;







	m_Viewport.TopLeftY = 0;

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D11_TEXTURE2D_DESC txDesc;

	m_pSampler = NULL;



	{



		cout << "SDL_INIT_ERROR" << endl;

	// Loop over shapes



	m_pImmediateContext = NULL;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_LEFT,

	ID3D11Texture2D* pBackBuffer;

void CD3DTest::Render()

	SAFE_RELEASE(m_pRenderTargetView);



		return hr;

	txDesc.CPUAccessFlags = 0;





	vrData.pSysMem = &pVList[0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)



				tinyobj::real_t tx =

	{



	if (FAILED(hr))



	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	delete[] pVList;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include <SDL.h>

		return hr;



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

		&materials,

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pPixelShader = NULL;

	return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

}

	m_VertexCount = vcount;



}

		else if (e.type == SDL_KEYDOWN)

	SDL_Event e;

	m_VertexCount = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_DestroyTexture(tex);

	txDesc.MipLevels = 1;

	ibDesc.StructureByteStride = 0;

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			{

	m_pInputLayout = NULL;

		return hr;

	m_IndexCount = icount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	HRESULT              hr;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

	pBackBuffer->Release();

	for (int j = 0; j < icount; j++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))



	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	if (FAILED(hr))

	UINT offsets = 0;

	std::string error;

	txDesc.CPUAccessFlags = 0;

	SDL_Quit();

};

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_UP,

#include <iostream>



			case SDLK_DOWN:



	//Vertex* pVList = new Vertex[vcount];





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);



	D3D11_TEXTURE2D_DESC txDesc;

	}





	SDL_DestroyTexture(tex);

	std::string inputfile = "test.obj";

	m_VertexCount = 0;

	txDesc.MipLevels = 1;

			index_offset += fv;

#include <SDL.h>

	//Key press surfaces constants

	SDL_Quit();

}


	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	cbDesc.CPUAccessFlags = 0;



int main(int, char**)

	while (SDL_PollEvent(&e) != 0)

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	}





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	// Loop over shapes

	//Clean up our objects and quit

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_DestroyTexture(tex);

	if (!reader.Warning().empty())

		cout << "SDL_INIT_ERROR" << endl;

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_TOTAL



		return hr;

	SDL_Quit();

		return hr;

	cbDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_FreeSurface(bmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.CPUAccessFlags = 0;

	//ビューポート設定

}

	std::string inputfile = "test.obj";

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vrData.SysMemPitch = 0;

		size_t index_offset = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	enum KeyPressSurfaces



		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		m_pImmediateContext->ClearState();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string error;

		D3D11_SDK_VERSION,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				// access to vertex

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	D3D_FEATURE_LEVEL level;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&materials,



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点バッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMFLOAT4X4 view;

}

	{

	m_pSampler = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	{

				break;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	return;



	XMFLOAT4 ambient;           //環境(r,g,b)

	delete[] pVList;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pSwapChain = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

		else if (e.type == SDL_KEYDOWN)

	float    farZ = 100.0f;

	}

	//Vertex* pVList = new Vertex[vcount];

	Release();

struct ConstantMaterial {



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	D3D11_SUBRESOURCE_DATA vrData;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <iostream>

	delete[] pIList;

		&shapes,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

}



	m_pSampler = NULL;

		KEY_PRESS_SURFACE_DOWN,

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilView);

			//Select surfaces based on key press



	pBackBuffer->Release();



		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	auto& materials = reader.GetMaterials();



		}

		return hr;

	irData.SysMemPitch = 0;

	ibDesc.StructureByteStride = 0;



	std::string inputfile = "test.obj";

		&m_pDevice,

			// Loop over vertices in the face.



			for (size_t v = 0; v < num_vertices; v++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_DOWN,

	m_pSwapChain->Present(0, 0);

	scDesc.BufferDesc.Height = rect.Height();



				WORD index = idx.vertex_index;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (!reader.Error().empty())





	//Clean up our objects and quit

{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//定数バッファ作成



		flags,

	/*

			exit(1);

	m_pVertexBuffer = NULL;

	m_pInputLayout = NULL;

	m_pImmediateContext = NULL;

	m_pTexture = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Quit();

	XMFLOAT4X4 world;

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pInputLayout = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	for (int i = 0; i < 3; i++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit

{

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pImmediateContext);

	auto& shapes = reader.GetShapes();

#include <iostream>





			switch (e.key.keysym.sym)

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	if (FAILED(hr))



	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))



{

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Angle += XMConvertToRadians(1.0f);

};

#include <SDL.h>

	}

	if (FAILED(hr))

	//Clean up our objects and quit

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (!reader.Warning().empty())

		flags,

	vrData.SysMemPitch = 0;

	XMFLOAT4         eyePos;   //視点座標



				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

	enum KeyPressSurfaces



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	CRect                rect;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	//vector<Vertex> vertex_t;



	std::string error;

				// access to vertex

			case SDLK_LEFT:

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);







	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pVertexBuffer);



	txDesc.MipLevels = 1;

		return hr;



	std::vector<tinyobj::material_t> materials;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

struct ConstantLight {

		return 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		m_pImmediateContext->ClearState();

	m_pDevice = NULL;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}



	for (int i = 0; i < 3; i++)

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//Vertex* pVList = new Vertex[vcount];



	{

	for (int i = 0; i < vcount; i++)

	m_Angle += XMConvertToRadians(1.0f);



	if (FAILED(hr))



		D3D11_SDK_VERSION,

	D3D11_SUBRESOURCE_DATA irData;

struct ConstantMatrixBuffer {

	m_pImmediateContext = NULL;

	{



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



{

}

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pVertexShader);



	Release();

			{

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	auto& materials = reader.GetMaterials();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		size_t index_offset = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	SAFE_RELEASE(m_pDevice);

	//インデックスバッファ作成

	SDL_Quit();

	m_pSwapChain->Present(0, 0);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	cbDesc.CPUAccessFlags = 0;

		R"(cube.obj)");

	for (int i = 0; i < vcount; i++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

		return hr;

{

	//頂点バッファ作成



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//テクスチャ読み込み

				tinyobj::real_t tx =

				break;

	//テクスチャ読み込み

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}

}

	scDesc.SampleDesc.Quality = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	delete[] pVList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//vector<WORD> index_t;

		KEY_PRESS_SURFACE_RIGHT,

	for (const auto& shape : shapes)

	dsDesc.Format = txDesc.Format;



	XMFLOAT4 specular;          //反射(r,g,b)

	tinyobj::attrib_t attrib;

	XMFLOAT4         eyePos;   //視点座標

	ZeroMemory(&txDesc, sizeof(txDesc));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//ビューポート設定



	for (const auto& shape : shapes)

	{

	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4         ambient;  //環境光(r,g,b)



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	return 0;

	m_pVertexBuffer = NULL;

	for (int j = 0; j < icount; j++)

	//深度ステンシルバッファ作成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	auto& materials = reader.GetMaterials();

	if (!error.empty())

		&materials,

		KEY_PRESS_SURFACE_UP,

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.ArraySize = 1;

				break;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vector<Vertex> vertexlist;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

	int     vcount = vertexlist.size();

		&scDesc,

#include <iostream>

	scDesc.BufferCount = 1;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			index_offset += fv;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		size_t index_offset = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	{

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

CD3DTest::CD3DTest()



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				break;

	{

	};

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		{

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_IndexCount = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	float    farZ = 100.0f;

				indexlist.push_back(index);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#ifdef _DEBUG

	D3D11_TEXTURE2D_DESC txDesc;

}





		{

	m_pSwapChain = NULL;

	m_IndexCount = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;







	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <SDL.h>

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	dsDesc.Format = txDesc.Format;

			case SDLK_UP:

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

		return hr;



		{

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				break;

	//インデックスバッファ作成

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

	m_VertexCount = vcount;

	}

		SDL_RenderPresent(ren);

	//定数バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pSwapChain->Present(0, 0);

		{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ConstantMatrixBuffer cmb;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemPitch = 0;



		return hr;

		//User presses a key

	SDL_FreeSurface(suf);

			case SDLK_DOWN:



	HRESULT              hr;

		}

	SAFE_RELEASE(m_pVertexBuffer);

		return 1;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

{

		}

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& shapes = reader.GetShapes();

	txDesc.SampleDesc.Quality = 0;

		&materials,

	CRect                rect;

	XMFLOAT4X4 view;

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.ambient, lightAmbient);

#ifdef _DEBUG

	}

	D3D11_TEXTURE2D_DESC txDesc;

#include <SDL.h>



		size_t index_offset = 0;  // インデントのオフセット





		R"(cube.obj)");

	}

	float    fov = XMConvertToRadians(20.0f);

		{

	//頂点シェーダー生成



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	delete[] pVList;

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4X4 view;

	delete[] pIList;

{

			case SDLK_UP:

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_LEFT,

		SDL_Delay(1000);

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.MiscFlags = 0;

		&m_pDevice,

	m_pLightBuffer = NULL;

	m_pVertexShader = NULL;



	SAFE_RELEASE(m_pDevice);

	scDesc.OutputWindow = hwnd;

	if (m_pImmediateContext)



	vector<WORD> indexList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	Release();



	//ピクセルシェーダー生成



	if (!reader.ParseFromFile(inputfile, reader_config))

				vertex.push_back(vertex_tmp);



		R"(cube.obj)");

int main(int, char**)

#include <SDL.h>

	for (const auto& shape : shapes)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

struct ConstantMaterial {

		R"(cube.obj)");

}
using std::cout; using std::endl;

		exit(1);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

			}

	tinyobj::ObjReaderConfig reader_config;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		1,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDepthStencilView = NULL;

		// Loop over faces(polygon)

	m_pInputLayout = NULL;

		return hr;

	SDL_DestroyWindow(win);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_DestroyTexture(tex);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	{

	cbDesc.CPUAccessFlags = 0;



		NULL,

	irData.pSysMem = &pIList[0];



		return hr;

			case SDLK_DOWN:





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		KEY_PRESS_SURFACE_DEFAULT,

			{

	scDesc.OutputWindow = hwnd;

	return hr;

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pTexture);



		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

	float    farZ = 100.0f;

	std::vector<tinyobj::material_t> materials;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

		//User presses a key

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTextureView);

HRESULT CD3DTest::Create(HWND hwnd)

	{

#include <SDL.h>

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pSampler);

	m_pSwapChain->Present(0, 0);

{

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	::GetClientRect(hwnd, &rect);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	UINT offsets = 0;

	D3D11_BUFFER_DESC vbDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//vector<Vertex> vertex_t;

				indexlist.push_back(index);







	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyWindow(win);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				break;

		return hr;

	//ピクセルシェーダー生成

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_TEXTURE2D_DESC txDesc;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::attrib_t attrib;

	//Clean up our objects and quit



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#endif



	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//頂点シェーダー生成



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{



#ifdef _DEBUG

#ifdef _DEBUG

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	m_pDevice = NULL;

	if (!error.empty())

	//vector<Vertex> vertex_t;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_FreeSurface(bmp);

	if (!reader.Warning().empty())

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	ibDesc.StructureByteStride = 0;

	SDL_Quit();



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	std::string error;

	vector<Vertex> vertexlist;

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	if (FAILED(hr))



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL level;



	{

int main(int, char**)

	{

	D3D11_TEXTURE2D_DESC txDesc;



	float    nearZ = 0.1f;



		KEY_PRESS_SURFACE_RIGHT,

	WORD* pIList = new WORD[icount];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

		D3D_DRIVER_TYPE_HARDWARE,



			//Select surfaces based on key press

	txDesc.ArraySize = 1;

			for (size_t v = 0; v < num_vertices; v++)



struct ConstantLight {

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.StructureByteStride = 0;

	vbDesc.CPUAccessFlags = 0;

			index_offset += fv;





		SDL_Delay(1000);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.ambient, lightAmbient);



				break;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantMaterial material; //物体の質感

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

}

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_IndexCount = icount;

	return 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	vector<WORD> indexList;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//First we need to start up SDL, and make sure it went ok

	m_pDepthStencilView = NULL;

			{

		else if (e.type == SDL_KEYDOWN)

	SDL_Quit();

	txDesc.MipLevels = 1;

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_RIGHT,

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pRenderTargetView);

	m_Viewport.TopLeftY = 0;

	scDesc.BufferDesc.Width = rect.Width();

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	tinyobj::attrib_t attrib;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&m_pSwapChain,

	m_Viewport.MinDepth = 0.0f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		&m_pImmediateContext);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			for (size_t v = 0; v < fv; v++)

	m_pLightBuffer = NULL;

	}

	SAFE_RELEASE(m_pVertexBuffer);



	if (FAILED(hr))



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	auto& attrib = reader.GetAttrib();

		cout << "SDL_INIT_ERROR" << endl;



	//頂点レイアウト作成

		}

		&m_pDevice,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ConstantMatrixBuffer cmb;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pLightBuffer = NULL;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pDepthStencilTexture);







	UINT flags = 0;

		}

		size_t index_offset = 0;

	bool ret = tinyobj::LoadObj(

		return hr;

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Quit();

	XMFLOAT4 pos;               //座標(x,y,z)



	for (const auto& shape : shapes)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		KEY_PRESS_SURFACE_LEFT,



	scDesc.BufferCount = 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Event e;

	scDesc.SampleDesc.Quality = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	{

	}

	m_pDevice = NULL;

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		//User requests quit

	std::string inputfile = "test.obj";

	//頂点バッファ作成

	ConstantMaterial material; //物体の質感



	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

	ConstantLightBuffer clb;

		//User requests quit

			}

				break;



		size_t index_offset = 0;  // インデントのオフセット

	}



	tinyobj::ObjReaderConfig reader_config;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);







		//User presses a key



	HRESULT              hr;



		D3D_DRIVER_TYPE_HARDWARE,



	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.BufferCount = 1;

	{



	m_pPixelShader = NULL;



		return hr;

			case SDLK_RIGHT:

	vbDesc.MiscFlags = 0;



		delete[] pVList;

	delete[] pIList;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	tinyobj::ObjReader reader;

	Release();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pInputLayout = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			switch (e.key.keysym.sym)

	SDL_FreeSurface(suf);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	ConstantMaterial material; //物体の質感

	WORD   icount = indexList.size();



	txDesc.Height = rect.Height();



	scDesc.SampleDesc.Quality = 0;

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



}



				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;

	UINT flags = 0;

		SDL_Delay(1000);

	std::string imagePath = "hello.bmp";

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	if (FAILED(hr))



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press

	}

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pIndexBuffer);



	cbDesc.CPUAccessFlags = 0;

	{

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pDepthStencilView);

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4X4 projection;



	m_pIndexBuffer = NULL;

	auto& attrib = reader.GetAttrib();

	m_VertexCount = 0;



		{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pLightBuffer);

	}*/

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.BufferDesc.Width = rect.Width();

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	float    nearZ = 0.1f;

			index_offset += num_vertices;

	UINT offsets = 0;

	}

	UINT offsets = 0;

	{

	//vector<WORD> index_t;

		cout << "SDL_INIT_ERROR" << endl;



	D3D11_BUFFER_DESC cbDesc;

			int num_vertices = shape.mesh.num_face_vertices[f];

struct ConstantMaterial {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::vector<tinyobj::material_t> materials;

	{



		cout << "SDL_INIT_ERROR" << endl;

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#include <iostream>

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		delete[] pIList;



	{

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

				break;

	XMFLOAT4X4 world;



};

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

	}

{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	vector<WORD> indexList;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (size_t s = 0; s < shapes.size(); s++)

			case SDLK_LEFT:

			index_offset += fv;

	m_IndexCount = icount;



				break;





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		1,

		D3D11_SDK_VERSION,



	std::string error;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	float    fov = XMConvertToRadians(20.0f);

			switch (e.key.keysym.sym)

	txDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;

	{

	m_pInputLayout = NULL;

	m_pIndexBuffer = NULL;



	txDesc.ArraySize = 1;

};

	WORD* pIList = new WORD[icount];

	XMFLOAT4         eyePos;   //視点座標

		delete[] pIList;

		if (!ret)

	D3D11_SUBRESOURCE_DATA vrData;

	}*/



	scDesc.BufferDesc.Height = rect.Height();

	vector<Vertex> vertexlist;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	HRESULT              hr;

	m_Viewport.TopLeftX = 0;

	ConstantLightBuffer clb;

	ConstantLightBuffer clb;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	auto& shapes = reader.GetShapes();



		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	reader_config.mtl_search_path = "./"; // Path to material files

	int     vcount = vertexlist.size();

	}

		KEY_PRESS_SURFACE_UP,

		{

#ifdef _DEBUG



	delete[] pVList;

			//Select surfaces based on key press

	std::string imagePath = "hello.bmp";

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	if (!reader.Warning().empty())

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pRenderTargetView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}

			switch (e.key.keysym.sym)

	dsDesc.Format = txDesc.Format;

	scDesc.SampleDesc.Quality = 0;

		{







	SAFE_RELEASE(m_pVertexShader);

	{

	D3D11_TEXTURE2D_DESC txDesc;

{

{



	//ピクセルシェーダー生成



	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_FreeSurface(suf);



	enum KeyPressSurfaces

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (int j = 0; j < icount; j++)



	WORD   icount = indexList.size();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	return 0;

		//User requests quit

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.MiscFlags = 0;





			index_offset += num_vertices;

	SAFE_RELEASE(m_pSampler);



	}

		SDL_RenderClear(ren);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

/*

#ifdef _DEBUG

	//頂点バッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.SampleDesc.Count = 1;

	txDesc.ArraySize = 1;

};

		&level,

	{

	ibDesc.StructureByteStride = 0;

		if (!ret)

		pIList[j] = indexList[j];

	D3D11_BUFFER_DESC ibDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//vector<Vertex> vertex_t;

	std::string inputfile = "test.obj";





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int j = 0; j < icount; j++)

		exit(1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//定数バッファ作成

	m_pTextureView = NULL;

			// Loop over vertices in the face.

		if (e.type == SDL_QUIT)



	//インデックスバッファ作成

	return hr;

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA vrData;

	{

};

		pVList[i] = vertexlist[i];

struct ConstantLight {

{



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

		return hr;

	vrData.pSysMem = &pVList[0];



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_pSwapChain->Present(0, 0);

	//ピクセルシェーダー生成

	while (SDL_PollEvent(&e) != 0)





	//ピクセルシェーダー生成

}





	m_IndexCount = 0;

	enum KeyPressSurfaces

		{

struct ConstantMaterial {

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{



	m_pVertexShader = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	}

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ZeroMemory(&txDesc, sizeof(txDesc));

	ConstantMaterial material; //物体の質感

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

	delete[] pIList;





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				WORD index = idx.vertex_index;

	//First we need to start up SDL, and make sure it went ok

	vrData.SysMemSlicePitch = 0;

	}











	{





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			for (size_t v = 0; v < fv; v++)

#define TINYOBJLOADER_IMPLEMENTATION



	cbDesc.CPUAccessFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pSwapChain = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	HRESULT              hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	D3D11_SUBRESOURCE_DATA vrData;





		size_t index_offset = 0;  // インデントのオフセット

	m_VertexCount = vcount;

	HRESULT              hr;

	ConstantLightBuffer clb;

 */

			for (size_t v = 0; v < fv; v++)

void CD3DTest::Render()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.Height = (FLOAT)rect.Height();

	std::vector<tinyobj::shape_t> shapes;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pPixelShader);

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	txDesc.Height = rect.Height();



	ibDesc.MiscFlags = 0;

{

	float    farZ = 100.0f;



		&error,

	scDesc.Windowed = TRUE;

CD3DTest::CD3DTest()

	dsDesc.Format = txDesc.Format;

	}

				indexlist.push_back(idx.vertex_index);

			{

	{

	m_pDepthStencilView = NULL;

	txDesc.ArraySize = 1;

	if (FAILED(hr))

			exit(1);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMatrixBuffer {





struct ConstantMatrixBuffer {

	//vector<WORD> index_t;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}



				indexlist.push_back(idx.vertex_index);



	SDL_DestroyTexture(tex);

	SDL_DestroyWindow(win);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<WORD> indexList;

}



	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

#include <SDL.h>

	scDesc.OutputWindow = hwnd;

	m_pDepthStencilTexture = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	// Loop over shapes

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.SampleDesc.Count = 1;

	ID3D11Texture2D* pBackBuffer;

	UINT flags = 0;

		size_t index_offset = 0;

int main(int, char**)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//vector<WORD> index_t;

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		flags,



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	m_pTexture = NULL;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return hr;

	SDL_Quit();

	//ビューポート設定

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		SDL_RenderPresent(ren);



		{

	SAFE_RELEASE(m_pPixelShader);

	for (size_t s = 0; s < shapes.size(); s++)

	tinyobj::ObjReaderConfig reader_config;



				indexlist.push_back(idx.vertex_index);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	tinyobj::ObjReader reader;



		}

			index_offset += fv;

	//定数バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Angle += XMConvertToRadians(1.0f);

void CD3DTest::Release()

	WORD* pIList = new WORD[icount];

	//Vertex* pVList = new Vertex[vcount];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	WORD   icount = indexList.size();

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	delete[] pIList;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			//Select surfaces based on key press







	m_pPixelShader = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	//定数バッファ作成

	if (!error.empty())



{

		if (!reader.Error().empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	}



	irData.SysMemPitch = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_UP:

struct ConstantLightBuffer {



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

				tinyobj::real_t tx =

	D3D11_TEXTURE2D_DESC txDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vector<Vertex> vertexlist;

	m_Angle += XMConvertToRadians(1.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::~CD3DTest()

		&error,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	//頂点シェーダー生成

	D3D11_TEXTURE2D_DESC txDesc;

		}







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

};

	}



	txDesc.ArraySize = 1;



	if (!reader.Warning().empty())

	SDL_FreeSurface(suf);



#include <SDL.h>

		KEY_PRESS_SURFACE_TOTAL



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftX = 0;

		return hr;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t ty =



	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	{

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pSwapChain);

	std::string inputfile = "test.obj";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!error.empty())

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.TopLeftY = 0;

			case SDLK_DOWN:

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			// Loop over vertices in the face.

	float    nearZ = 0.1f;



	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pRenderTargetView);

};

		{

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





		&attrib,

	tinyobj::ObjReader reader;





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyWindow(win);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_IndexCount = icount;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

 * Lesson 1: Hello World!

#ifdef _DEBUG



	WORD   icount = indexList.size();

	ibDesc.StructureByteStride = 0;



	scDesc.SampleDesc.Quality = 0;



	}

				break;

		&m_pDevice,

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		delete[] pVList;

	XMFLOAT4X4 view;

};

			}

		return hr;

	txDesc.MipLevels = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	XMFLOAT4 attenuate;         //減衰(a,b,c)

			}

#include <SDL.h>

	SDL_Event e;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Quit();





	SAFE_RELEASE(m_pSwapChain);



	m_pPixelShader = NULL;

	SDL_DestroyWindow(win);



CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	ZeroMemory(&txDesc, sizeof(txDesc));

			}

	{

	SDL_DestroyRenderer(ren);

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		delete[] pIList;

		D3D_DRIVER_TYPE_HARDWARE,

	}*/

	::GetClientRect(hwnd, &rect);

		SDL_Delay(1000);

	float    fov = XMConvertToRadians(20.0f);

	tinyobj::ObjReaderConfig reader_config;

				break;



		R"(cube.obj)");

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pSwapChain->Present(0, 0);

	{

 */

			}

		return 1;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vrData.SysMemSlicePitch = 0;





	}

	tinyobj::attrib_t attrib;

	txDesc.CPUAccessFlags = 0;

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pSampler = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

				break;

struct ConstantMaterial {

	}

};

	//vector<Vertex> vertex_t;



	}

	SAFE_RELEASE(m_pPixelShader);

			}

	}

	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			int num_vertices = shape.mesh.num_face_vertices[f];

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	vbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



{

	vector<Vertex> vertexlist;



				// access to vertex

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	auto& materials = reader.GetMaterials();





	ibDesc.ByteWidth = sizeof(WORD) * icount;

			int num_vertices = shape.mesh.num_face_vertices[f];



		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	auto& attrib = reader.GetAttrib();

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;



{

	//vector<WORD> index_t;

};

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_LEFT,



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pInputLayout = NULL;



	irData.pSysMem = &pIList[0];

	m_pInputLayout = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	if (m_pImmediateContext)

	::ZeroMemory(&scDesc, sizeof(scDesc));





	//インデックスバッファ作成

	for (int j = 0; j < icount; j++)



	cbDesc.MiscFlags = 0;

	return 0;

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//ビューポート設定

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		R"(cube.obj)");

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pDepthStencilTexture);

		{



		D3D_DRIVER_TYPE_HARDWARE,

		pIList[j] = indexList[j];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferCount = 1;



	txDesc.Width = rect.Width();

			switch (e.key.keysym.sym)

	//頂点バッファ作成



	m_pIndexBuffer = NULL;



	//vector<WORD> index_t;

			case SDLK_DOWN:

	txDesc.SampleDesc.Quality = 0;

	std::string inputfile = "test.obj";

	{



struct ConstantMaterial {



	//インデックスバッファ作成







		&m_pDevice,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return 0;

	}

		&m_pSwapChain,

#include <iostream>

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	}

		return hr;

	WORD   icount = indexList.size();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pSwapChain->Present(0, 0);

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Quit();

		size_t index_offset = 0;  // インデントのオフセット

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



	XMFLOAT4         eyePos;   //視点座標

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		}

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

int SEGMENT = 36;



	};

#include "DirectXManager.h"

	m_pSampler = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

	{

	XMFLOAT4 ambient;           //環境(r,g,b)



	LoadObj(vertexlist, indexList);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <SDL.h>

		if (!reader.Error().empty())

		return 1;

 * Lesson 1: Hello World!

using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pRenderTargetView = NULL;

		}

	cbDesc.MiscFlags = 0;

	WORD* pIList = new WORD[icount];

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vrData.pSysMem = &pVList[0];

	enum KeyPressSurfaces

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			default:







	D3D11_BUFFER_DESC cbDesc;



	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pDevice);

	return;



	XMFLOAT4X4 world;

};

				indexlist.push_back(index);

	SAFE_RELEASE(m_pInputLayout);

	if (m_pImmediateContext)

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

	// Loop over shapes



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//First we need to start up SDL, and make sure it went ok

	cbDesc.StructureByteStride = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		flags,

		else if (e.type == SDL_KEYDOWN)

	/*

	D3D_FEATURE_LEVEL level;

		return hr;

	ConstantLightBuffer clb;

	XMFLOAT4         eyePos;   //視点座標





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	m_pRenderTargetView = NULL;

	{

		else if (e.type == SDL_KEYDOWN)

	{

	SAFE_RELEASE(m_pSampler);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}
int SEGMENT = 36;





	m_pLightBuffer = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	UINT flags = 0;

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		exit(1);



	SAFE_RELEASE(m_pInputLayout);

		{

		return hr;

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				WORD index = idx.vertex_index;

		SDL_Delay(1000);

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::string error;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::vector<tinyobj::shape_t> shapes;





	m_IndexCount = icount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT offsets = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	}

	m_pInputLayout = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Quit();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_Event e;







	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_FreeSurface(bmp);

	scDesc.SampleDesc.Count = 1;



	ConstantMatrixBuffer cmb;



 */

	vrData.pSysMem = &pVList[0];





	cbDesc.StructureByteStride = 0;

{

	{

	if (FAILED(hr))

		D3D11_SDK_VERSION,

CD3DTest::CD3DTest()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//ビューポート設定

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

 */

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	}

				WORD index = idx.vertex_index;

			case SDLK_RIGHT:

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&m_pImmediateContext);

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

	SDL_DestroyRenderer(ren);

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float    fov = XMConvertToRadians(20.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	SDL_FreeSurface(suf);

	//定数バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	ZeroMemory(&txDesc, sizeof(txDesc));

	CRect                rect;



	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftX = 0;

	SDL_DestroyTexture(tex);

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.BufferDesc.Height = rect.Height();



	SAFE_RELEASE(m_pIndexBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{



		&attrib,

	LoadObj(vertexlist, indexList);

		delete[] pIList;



	m_pDepthStencilTexture = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vrData.pSysMem = &pVList[0];

				// access to vertex





	SAFE_RELEASE(m_pTextureView);

		&error,

	LoadObj(vertexlist, indexList);





	txDesc.Width = rect.Width();

			{

				break;

		SDL_RenderClear(ren);

	//vector<Vertex> vertex_t;



	{

	HRESULT              hr;

	ibDesc.CPUAccessFlags = 0;

	}

	scDesc.Windowed = TRUE;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_IndexCount = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				// access to vertex

		//User requests quit

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



{

		// Loop over faces(polygon)

	ibDesc.StructureByteStride = 0;



	while (SDL_PollEvent(&e) != 0)





	if (FAILED(hr))

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))





};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	// Loop over shapes

struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC cbDesc;

	SDL_Quit();

struct ConstantLightBuffer {

	}

				WORD index = idx.vertex_index;

}

	vrData.SysMemPitch = 0;

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	//Key press surfaces constants

	if (FAILED(hr))

			{

#include "DirectXManager.h"

		&error,

		&materials,

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDepthStencilTexture);



	}

	irData.pSysMem = &pIList[0];

#endif



	scDesc.BufferDesc.Width = rect.Width();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	tinyobj::ObjReader reader;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	LoadObj(vertexlist, indexList);

	vector<WORD> indexList;

		return hr;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.SampleDesc.Count = 1;

struct ConstantLightBuffer {

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	WORD   icount = indexList.size();

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	m_pTextureView = NULL;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (int i = 0; i < vcount; i++)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



{



	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pTexture);

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION



	m_pDepthStencilView = NULL;

	{

		}

				break;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferDesc.Height = rect.Height();

	{

	D3D11_BUFFER_DESC ibDesc;

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				break;

		size_t index_offset = 0;  // インデントのオフセット



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return 1;

	}

		}

struct ConstantLightBuffer {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& attrib = reader.GetAttrib();

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4X4 view;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	cbDesc.CPUAccessFlags = 0;

}

	std::string error;

	SAFE_RELEASE(m_pTexture);

}

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		size_t index_offset = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	delete[] pVList;

				WORD index = idx.vertex_index;



	m_pIndexBuffer = NULL;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

			{

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	}*/

	D3D_FEATURE_LEVEL level;

	m_pLightBuffer = NULL;



	ibDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SAFE_RELEASE(m_pImmediateContext);

	m_pMatrixBuffer = NULL;

	SDL_Event e;

		&attrib,

	}



	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

		&shapes,

			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))



		return hr;

	}

	txDesc.CPUAccessFlags = 0;

		{





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&level,

	SAFE_RELEASE(m_pPixelShader);

		SDL_RenderClear(ren);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.SampleDesc.Count = 1;

	//vector<WORD> index_t;





	vrData.pSysMem = &pVList[0];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	dsDesc.Format = txDesc.Format;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pSampler);

		exit(1);

		m_pImmediateContext->ClearState();

			exit(1);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	{

		}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	txDesc.Width = rect.Width();

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);



	{

		return hr;

		flags,



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pSampler);

		flags,



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	float    farZ = 100.0f;

		&error,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				WORD index = idx.vertex_index;

	}



	tinyobj::attrib_t attrib;

	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_RIGHT,



	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	auto& materials = reader.GetMaterials();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	SAFE_RELEASE(m_pInputLayout);



	cbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

				vertex.push_back(vertex_tmp);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	UINT flags = 0;

#include <SDL.h>

		&shapes,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	float    nearZ = 0.1f;

	for (int i = 0; i < vcount; i++)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&m_pDevice,



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	//First we need to start up SDL, and make sure it went ok

	//Create Index

		return hr;

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	return;

	SDL_DestroyTexture(tex);

		&m_pImmediateContext);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		NULL,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

 * Lesson 1: Hello World!

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

	m_pSampler = NULL;

				// access to vertex

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	enum KeyPressSurfaces



	CRect                rect;

	if (!error.empty())

	tinyobj::attrib_t attrib;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



			{

		{

		&m_pImmediateContext);

int main(int, char**)

	{

	for (int i = 0; i < 3; i++)

HRESULT CD3DTest::Create(HWND hwnd)



	vrData.SysMemSlicePitch = 0;

		return 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			{



	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_TEXTURE2D_DESC txDesc;

#endif

struct ConstantMatrixBuffer {





	cbDesc.MiscFlags = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DEFAULT,

	pBackBuffer->Release();

			case SDLK_LEFT:

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

	SAFE_RELEASE(m_pTextureView);



	}

		return hr;

				break;

	SDL_DestroyTexture(tex);

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成

	m_IndexCount = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	scDesc.BufferDesc.Height = rect.Height();

{

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.MiscFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		}

			case SDLK_DOWN:



	enum KeyPressSurfaces

		{

	if (FAILED(hr))

				// access to vertex



	float    farZ = 100.0f;

	for (int i = 0; i < vcount; i++)

	{

		&materials,

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

CD3DTest::CD3DTest()





			for (size_t v = 0; v < num_vertices; v++)





	SAFE_RELEASE(m_pImmediateContext);



};

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderClear(ren);



	XMFLOAT4X4 world;

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	{

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}

	{

	//インデックスバッファ作成

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

			{

	for (int i = 0; i < vcount; i++)



	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;



	UINT strides = sizeof(Vertex);





	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

	for (int i = 0; i < vcount; i++)

	Release();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;







				// access to vertex

	}

	cbDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;

	m_pRenderTargetView = NULL;

	for (int i = 0; i < vcount; i++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	bool ret = tinyobj::LoadObj(

	{

{

}



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.SampleDesc.Count = 1;

	return 0;



	//Key press surfaces constants

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

			case SDLK_DOWN:

		&shapes,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//深度ステンシルバッファ作成

		if (e.type == SDL_QUIT)

	ID3D11Texture2D* pBackBuffer;

		&error,





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		// Loop over faces(polygon)

	txDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

{

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

			case SDLK_LEFT:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pLightBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

				break;

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.MiscFlags = 0;

		size_t index_offset = 0;

}

	vrData.SysMemPitch = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

	}

	delete[] pIList;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	SDL_Quit();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//頂点レイアウト作成







			// Loop over vertices in the face.

	{

	if (FAILED(hr))

		pLevels,

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		SDL_RenderClear(ren);

	m_pImmediateContext = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

	if (!reader.Warning().empty())

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	}

	m_pDevice = NULL;

	CRect                rect;



		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::string imagePath = "hello.bmp";

		}

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	irData.pSysMem = &pIList[0];

	Release();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

		return hr;

	std::vector<tinyobj::material_t> materials;

		{

#endif

	if (FAILED(hr))



	if (FAILED(hr))

	}

	WORD* pIList = new WORD[icount];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//テクスチャ読み込み

	SDL_DestroyTexture(tex);

	DXGI_SWAP_CHAIN_DESC scDesc;

	auto& shapes = reader.GetShapes();

	m_pTexture = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;  // インデントのオフセット

	dsDesc.Format = txDesc.Format;

#define TINYOBJLOADER_IMPLEMENTATION



	SAFE_RELEASE(m_pLightBuffer);

	txDesc.SampleDesc.Count = 1;

	//vector<Vertex> vertex_t;

			int num_vertices = shape.mesh.num_face_vertices[f];



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext = NULL;

	{

		size_t index_offset = 0;

	{

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	m_IndexCount = 0;

	return 0;

	delete[] pVList;

	m_VertexCount = 0;



		&attrib,

		&materials,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	delete[] pVList;

		R"(cube.obj)");

		return hr;



	}*/

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	ibDesc.StructureByteStride = 0;

	//頂点シェーダー生成



	std::vector<tinyobj::shape_t> shapes;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		// Loop over faces(polygon)



		return hr;



			}

	vrData.SysMemPitch = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.MiscFlags = 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//Vertex* pVList = new Vertex[vcount];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t tx =





	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//ビューポート設定





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	ibDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	WORD   icount = indexList.size();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pSwapChain->Present(0, 0);



	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_TOTAL



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.StructureByteStride = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			case SDLK_UP:

void CD3DTest::Render()

	txDesc.SampleDesc.Count = 1;



void CD3DTest::Release()

	std::vector<tinyobj::material_t> materials;

{

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (!reader.Error().empty())

}

				indexlist.push_back(index);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))



	m_pMatrixBuffer = NULL;

	XMFLOAT4X4 projection;

		SDL_RenderClear(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&error,

	SDL_DestroyWindow(win);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			index_offset += num_vertices;

	}

	//頂点シェーダー生成

		delete[] pVList;

	delete[] pIList;

	m_pRenderTargetView = NULL;

			{

		&error,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_TOTAL

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			index_offset += fv;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_DestroyWindow(win);

int main(int, char**)

		return hr;

	SDL_FreeSurface(suf);



		return hr;



	bool ret = tinyobj::LoadObj(

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	};

		D3D11_SDK_VERSION,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSampler = NULL;

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_DestroyRenderer(ren);



				// access to vertex

			{

	vrData.SysMemPitch = 0;

	m_Viewport.MinDepth = 0.0f;

		pIList[j] = indexList[j];

	//ピクセルシェーダー生成



		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			case SDLK_RIGHT:

	scDesc.SampleDesc.Quality = 0;

			index_offset += num_vertices;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&materials,

	//Key press surfaces constants

				break;





#include <iostream>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	Release();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

				indexlist.push_back(idx.vertex_index);



	D3D11_TEXTURE2D_DESC txDesc;

}

			index_offset += fv;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



struct ConstantMatrixBuffer {

		KEY_PRESS_SURFACE_LEFT,

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	for (int i = 0; i < 3; i++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		}

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pRenderTargetView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}



	DXGI_SWAP_CHAIN_DESC scDesc;

	// Loop over shapes

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.MiscFlags = 0;

	m_VertexCount = 0;





		// Loop over faces(polygon)



			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

};

	m_pSwapChain->Present(0, 0);

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&materials,



	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pVertexShader = NULL;



		{

#include <iostream>

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_IndexCount = 0;

		return hr;

	m_pTextureView = NULL;

	//テクスチャ読み込み



		delete[] pIList;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				indexlist.push_back(idx.vertex_index);



	SAFE_RELEASE(m_pPixelShader);

	Release();

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.BufferCount = 1;

	std::string inputfile = "test.obj";

		{

	XMFLOAT4X4 world;



		D3D_DRIVER_TYPE_HARDWARE,



				WORD index = idx.vertex_index;

	//ビューポート設定



	{

{

	vector<WORD> indexList;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	auto& shapes = reader.GetShapes();

	m_pSwapChain = NULL;



	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_UP,

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DOWN,



				indexlist.push_back(index);

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}*/

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	irData.SysMemPitch = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.OutputWindow = hwnd;

		&error,

	enum KeyPressSurfaces

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 world;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_SUBRESOURCE_DATA vrData;


