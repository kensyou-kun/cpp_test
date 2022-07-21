	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_Viewport.TopLeftY = 0;

			case SDLK_RIGHT:

	if (FAILED(hr))





		return hr;

	m_pLightBuffer = NULL;



	cbDesc.StructureByteStride = 0;

using std::cout; using std::endl;



		else if (e.type == SDL_KEYDOWN)

				break;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	dsDesc.Texture2D.MipSlice = 0;

 */

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

{

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



void CD3DTest::Release()

	for (int i = 0; i < 3; i++)

	XMFLOAT4X4 world;

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	CRect                rect;

		pIList[j] = indexList[j];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	DXGI_SWAP_CHAIN_DESC scDesc;



}

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.MiscFlags = 0;

	pBackBuffer->Release();

	m_pDepthStencilView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

			//Select surfaces based on key press

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			// Loop over vertices in the face.

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_Delay(1000);



	std::vector<tinyobj::shape_t> shapes;

	if (!reader.ParseFromFile(inputfile, reader_config))

};

		return hr;





}



	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pMatrixBuffer = NULL;

			break;

	scDesc.Windowed = TRUE;

				indexlist.push_back(index);



		&error,

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.OutputWindow = hwnd;



		&scDesc,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	return hr;

		KEY_PRESS_SURFACE_DOWN,

	}

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//vector<Vertex> vertex_t;

	return 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    nearZ = 0.1f;

	scDesc.OutputWindow = hwnd;



	XMStoreFloat4(&clb.ambient, lightAmbient);

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		pLevels,

	while (SDL_PollEvent(&e) != 0)

	tinyobj::ObjReader reader;

			}

	vector<Vertex> vertexlist;

			{

	}

	txDesc.SampleDesc.Count = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderClear(ren);

		}

	delete[] pVList;

		exit(1);

	m_pVertexBuffer = NULL;

	D3D11_BUFFER_DESC vbDesc;

	};

	std::vector<tinyobj::material_t> materials;

		return 1;

};

		SDL_RenderClear(ren);





	irData.pSysMem = &pIList[0];

	scDesc.Windowed = TRUE;

	{

		NULL,

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.MipLevels = 1;

	D3D11_BUFFER_DESC cbDesc;



int main(int, char**)

	vector<Vertex> vertexlist;

	m_pRenderTargetView = NULL;



#define TINYOBJLOADER_IMPLEMENTATION

	if (!reader.ParseFromFile(inputfile, reader_config))

	{



				vertex.push_back(vertex_tmp);

		&attrib,



	vbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	Release();

	UINT strides = sizeof(Vertex);

	irData.SysMemSlicePitch = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





		exit(1);



		}

	//ピクセルシェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		delete[] pIList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	enum KeyPressSurfaces

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.OutputWindow = hwnd;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pSampler);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		pLevels,



		}

			int num_vertices = shape.mesh.num_face_vertices[f];

		&error,

	ibDesc.StructureByteStride = 0;

		exit(1);

		KEY_PRESS_SURFACE_DOWN,



		NULL,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	WORD   icount = indexList.size();



	//Vertex* pVList = new Vertex[vcount];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{

	m_Viewport.Height = (FLOAT)rect.Height();

using std::cout; using std::endl;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	Vertex* pVList = new Vertex[vcount];

	//テクスチャ読み込み

#ifdef _DEBUG

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	SAFE_RELEASE(m_pSwapChain);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		1,





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

int main(int, char**)

		delete[] pVList;

			case SDLK_DOWN:

	//Create Index

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	}

	vbDesc.StructureByteStride = 0;

	if (!reader.Warning().empty())

	D3D11_SAMPLER_DESC smpDesc;

	//頂点バッファ作成

	irData.pSysMem = &pIList[0];



	txDesc.SampleDesc.Count = 1;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t tx =

	if (!error.empty())



		KEY_PRESS_SURFACE_RIGHT,

	}

	dsDesc.Format = txDesc.Format;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	for (int i = 0; i < vcount; i++)

			{



	cbDesc.MiscFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Key press surfaces constants

			{







	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

};

	SAFE_RELEASE(m_pTexture);

	m_VertexCount = vcount;

			case SDLK_UP:



	irData.pSysMem = &pIList[0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	pBackBuffer->Release();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	std::vector<tinyobj::shape_t> shapes;

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.MinDepth = 0.0f;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				// access to vertex

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string inputfile = "test.obj";

				tinyobj::real_t tx =



		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_VertexCount = vcount;

	auto& shapes = reader.GetShapes();



	delete[] pVList;

	txDesc.ArraySize = 1;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//ピクセルシェーダー生成

				break;

 */



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	//Key press surfaces constants



	vbDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_DOWN,



		m_pImmediateContext->ClearState();

	WORD* pIList = new WORD[icount];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&scDesc,

		return hr;



	auto& materials = reader.GetMaterials();

			}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{



	tinyobj::attrib_t attrib;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t ty =

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_DEFAULT,



	scDesc.BufferDesc.Height = rect.Height();

			}



	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

	{





{



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

}





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&scDesc,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	pBackBuffer->Release();

		}

	SDL_FreeSurface(suf);



	if (FAILED(hr))



	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Event e;

	m_Viewport.Width = (FLOAT)rect.Width();



		size_t index_offset = 0;

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	return hr;

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemPitch = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;



	float    fov = XMConvertToRadians(20.0f);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	dsDesc.Texture2D.MipSlice = 0;

int main(int, char**)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



			}

	txDesc.Height = rect.Height();

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pDepthStencilTexture = NULL;



				vertex.push_back(vertex_tmp);



		KEY_PRESS_SURFACE_RIGHT,



	WORD* pIList = new WORD[icount];





	m_VertexCount = 0;



	{

{

	ibDesc.CPUAccessFlags = 0;

	Vertex* pVList = new Vertex[vcount];

{

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pDepthStencilTexture);

};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

}

	m_pTextureView = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		}

	enum KeyPressSurfaces

		m_pImmediateContext->ClearState();

	//頂点レイアウト作成

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



		KEY_PRESS_SURFACE_RIGHT,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilView);

int main(int, char**)

#endif

	D3D_FEATURE_LEVEL level;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&shapes,

		if (!ret)

	//ピクセルシェーダー生成





	Release();

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	bool ret = tinyobj::LoadObj(

	m_IndexCount = icount;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&level,

	m_pDepthStencilTexture = NULL;

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	m_pRenderTargetView = NULL;



	m_Viewport.MaxDepth = 1.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4X4 view;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

	WORD* pIList = new WORD[icount];

				vertex.push_back(vertex_tmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))



			switch (e.key.keysym.sym)

	XMFLOAT4 ambient;           //環境(r,g,b)



}

	WORD* pIList = new WORD[icount];

		if (!ret)

	bool ret = tinyobj::LoadObj(

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

			index_offset += num_vertices;





		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

 * Lesson 1: Hello World!

{

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.ambient, lightAmbient);







	cbDesc.CPUAccessFlags = 0;

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{





	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pImmediateContext);

};

	//深度ステンシルバッファ作成

	UINT offsets = 0;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			default:

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty =

	std::string error;

	XMFLOAT4 ambient;           //環境(r,g,b)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);

		NULL,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.MinDepth = 0.0f;

		&scDesc,



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		}

	UINT flags = 0;

	m_pImmediateContext = NULL;

		SDL_RenderClear(ren);

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

	{

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

		&m_pImmediateContext);

		pIList[j] = indexList[j];

}
	D3D_FEATURE_LEVEL level;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		//User presses a key



	m_pIndexBuffer = NULL;

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				break;

		KEY_PRESS_SURFACE_LEFT,

CD3DTest::CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			}



	vbDesc.MiscFlags = 0;



		SDL_RenderPresent(ren);

	m_pDepthStencilView = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		return hr;

}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	/*



		&m_pImmediateContext);



	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.ArraySize = 1;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

	if (FAILED(hr))



	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_DOWN,

	SDL_Event e;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				WORD index = idx.vertex_index;

		//User requests quit

			case SDLK_UP:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_Delay(1000);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.CPUAccessFlags = 0;



	SDL_FreeSurface(suf);



	//深度ステンシルバッファ作成

	XMFLOAT4 ambient;           //環境(r,g,b)

		&error,

	// Loop over shapes

	};

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		exit(1);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



}



		return hr;

		}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	enum KeyPressSurfaces

		//User presses a key

				break;



	txDesc.Height = rect.Height();

	txDesc.MiscFlags = 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	{

	m_pTexture = NULL;

}



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



}

		//User presses a key

	m_IndexCount = icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_LEFT,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Height = rect.Height();

	//Clean up our objects and quit

	irData.pSysMem = &pIList[0];



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))



struct ConstantLightBuffer {

	if (FAILED(hr))





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&materials,

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))



	vrData.SysMemSlicePitch = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			{

		return hr;

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.StructureByteStride = 0;

		&level,

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.TopLeftY = 0;

	SDL_FreeSurface(bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	auto& attrib = reader.GetAttrib();

	std::vector<tinyobj::material_t> materials;

	std::string error;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&materials,

	scDesc.BufferDesc.Width = rect.Width();



	vector<Vertex> vertexlist;



	//テクスチャ読み込み

	SAFE_RELEASE(m_pDepthStencilTexture);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	bool ret = tinyobj::LoadObj(





	if (FAILED(hr))



		KEY_PRESS_SURFACE_RIGHT,

	}

	HRESULT              hr;

	m_pInputLayout = NULL;

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.MaxDepth = 1.0f;

		{



		exit(1);



	//深度ステンシルバッファ作成

	}

				// access to vertex

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t tx =

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	CRect                rect;



	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	bool ret = tinyobj::LoadObj(

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.OutputWindow = hwnd;

				break;

	//ピクセルシェーダー生成

}

		}

	SAFE_RELEASE(m_pVertexBuffer);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	scDesc.Windowed = TRUE;

		m_pImmediateContext->ClearState();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		}

{

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))





}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			for (size_t v = 0; v < fv; v++)

	delete[] pIList;

		// Loop over faces(polygon)

CD3DTest::CD3DTest()

{

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pPixelShader);

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}
	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.SysMemPitch = 0;

	enum KeyPressSurfaces



	dsDesc.Format = txDesc.Format;

	for (int i = 0; i < 3; i++)





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	irData.pSysMem = &pIList[0];

	tinyobj::attrib_t attrib;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{

	if (FAILED(hr))

	if (FAILED(hr))



}
	return 0;

};



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		SDL_Delay(1000);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return 0;

		{

				break;

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.ArraySize = 1;

		delete[] pVList;



		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				tinyobj::real_t ty =

				break;

				break;

	m_IndexCount = 0;

	irData.SysMemPitch = 0;

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pDevice);

int main(int, char**)





		&attrib,

	}

}
		D3D11_SDK_VERSION,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.MiscFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			for (size_t v = 0; v < fv; v++)

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vrData.SysMemPitch = 0;



	irData.pSysMem = &pIList[0];

			case SDLK_LEFT:



		if (e.type == SDL_QUIT)

		return hr;

				indexlist.push_back(idx.vertex_index);

		&materials,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	std::string inputfile = "test.obj";

	m_pSampler = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pSwapChain->Present(0, 0);

	ibDesc.CPUAccessFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	return 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	irData.pSysMem = &pIList[0];



#endif

struct ConstantMatrixBuffer {



	m_pTextureView = NULL;



	if (FAILED(hr))



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		//User requests quit

		return hr;

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pVertexShader);

}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			default:

/*

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	//vector<Vertex> vertex_t;

	txDesc.SampleDesc.Count = 1;



		&level,

		&scDesc,

	//ビューポート設定

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTextureView = NULL;

		}

		{

		&scDesc,

	D3D_FEATURE_LEVEL level;





		&scDesc,

	//頂点シェーダー生成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include "DirectXManager.h"

}

	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferDesc.Height = rect.Height();

		}

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.SysMemPitch = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	}

	{

	D3D11_TEXTURE2D_DESC txDesc;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))



	ibDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

		exit(1);

	ConstantLight    pntLight; //点光源

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		{

	return 0;

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	Release();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	D3D11_TEXTURE2D_DESC txDesc;

		D3D11_SDK_VERSION,

	m_Viewport.MinDepth = 0.0f;

	UINT offsets = 0;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.eyePos, eye);

				break;

void CD3DTest::Release()

			}

	vrData.SysMemSlicePitch = 0;

	m_IndexCount = icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantMatrixBuffer cmb;



		D3D11_SDK_VERSION,

	scDesc.SampleDesc.Quality = 0;

	txDesc.ArraySize = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

{

	for (int i = 0; i < vcount; i++)

	D3D11_BUFFER_DESC cbDesc;





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		else if (e.type == SDL_KEYDOWN)

	for (int i = 0; i < vcount; i++)

	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_Viewport.MinDepth = 0.0f;

	m_pDepthStencilView = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		return hr;



	//頂点シェーダー生成

	m_Viewport.MaxDepth = 1.0f;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ConstantMatrixBuffer cmb;

	HRESULT              hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pSwapChain);

	for (int i = 0; i < 3; i++)



		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		NULL,

	tinyobj::attrib_t attrib;

				// access to vertex

		// Loop over faces(polygon)

CD3DTest::CD3DTest()



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.ArraySize = 1;

		pIList[j] = indexList[j];

{

{



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	CRect                rect;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	LoadObj(vertexlist, indexList);



		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	LoadObj(vertexlist, indexList);



	cbDesc.StructureByteStride = 0;

		delete[] pIList;

				WORD index = idx.vertex_index;



	Release();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

	D3D_FEATURE_LEVEL level;

		if (!ret)

void CD3DTest::Release()

		SDL_RenderClear(ren);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return 1;

	m_pMatrixBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.MaxDepth = 1.0f;

	m_pSwapChain->Present(0, 0);

	ConstantLight    pntLight; //点光源

			int num_vertices = shape.mesh.num_face_vertices[f];



		KEY_PRESS_SURFACE_LEFT,

	m_pDepthStencilTexture = NULL;

	float    nearZ = 0.1f;

}

	m_pSampler = NULL;

	delete[] pVList;

	SAFE_RELEASE(m_pSwapChain);

				indexlist.push_back(index);

		m_pImmediateContext->ClearState();

			index_offset += fv;



	XMFLOAT4X4 projection;

		{

	m_pVertexShader = NULL;

	//Create Index

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		if (!reader.Error().empty())

	CRect                rect;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

	//vector<WORD> index_t;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(suf);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.SampleDesc.Quality = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		return 1;

	reader_config.mtl_search_path = "./"; // Path to material files

				WORD index = idx.vertex_index;

		}



		return hr;



	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);



		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&m_pSwapChain,

	dsDesc.Texture2D.MipSlice = 0;

	ConstantLight    pntLight; //点光源

};

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC cbDesc;





{







			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pPixelShader = NULL;

	m_pVertexShader = NULL;

	{

		&scDesc,

	//深度ステンシルバッファ作成

	if (FAILED(hr))







	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

CD3DTest::~CD3DTest()

		return 1;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4X4 projection;

		&shapes,



	vrData.SysMemSlicePitch = 0;

	float    nearZ = 0.1f;



	scDesc.BufferDesc.Height = rect.Height();

				break;

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_BUFFER_DESC vbDesc;

	//Vertex* pVList = new Vertex[vcount];

	Release();

	txDesc.Width = rect.Width();

	m_IndexCount = icount;

	std::string inputfile = "test.obj";

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			switch (e.key.keysym.sym)

		&level,

		//User requests quit

	SAFE_RELEASE(m_pLightBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		{





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t ty =

		SDL_RenderCopy(ren, tex, NULL, NULL);



	txDesc.SampleDesc.Quality = 0;

	}

		else if (e.type == SDL_KEYDOWN)



			{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyWindow(win);

	m_pTexture = NULL;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

	ibDesc.StructureByteStride = 0;







	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pIList;

	enum KeyPressSurfaces

		{

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	ConstantLight    pntLight; //点光源

	m_pVertexShader = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			int num_vertices = shape.mesh.num_face_vertices[f];



	m_pVertexShader = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;







	{

	//Create Index

{

	{



	SDL_DestroyRenderer(ren);

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;

	scDesc.BufferCount = 1;

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//頂点シェーダー生成

	return hr;

	{

#define TINYOBJLOADER_IMPLEMENTATION

		NULL,

		KEY_PRESS_SURFACE_TOTAL



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))



		if (!ret)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		// Loop over faces(polygon)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

void CD3DTest::Release()

		SDL_Delay(1000);

	D3D_FEATURE_LEVEL level;

		&m_pSwapChain,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	pBackBuffer->Release();



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT offsets = 0;

	m_pSwapChain->Present(0, 0);

#include <iostream>

	scDesc.OutputWindow = hwnd;

	return 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += num_vertices;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	irData.pSysMem = &pIList[0];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	for (size_t s = 0; s < shapes.size(); s++)

				break;

	{

	m_pMatrixBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		pIList[j] = indexList[j];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	CRect                rect;



	if (FAILED(hr))

struct ConstantLight {



	cbDesc.CPUAccessFlags = 0;

	HRESULT              hr;

int main(int, char**)

#endif

		&scDesc,

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	SDL_Quit();



CD3DTest::~CD3DTest()

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pRenderTargetView = NULL;

}
	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{



			default:

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	if (m_pImmediateContext)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pInputLayout = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				break;

	pBackBuffer->Release();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		pVList[i] = vertexlist[i];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	return 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				WORD index = idx.vertex_index;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{



#include <iostream>

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

		pIList[j] = indexList[j];

	int     vcount = vertexlist.size();



	//vector<Vertex> vertex_t;

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pMatrixBuffer);



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//vector<WORD> index_t;

	float    farZ = 100.0f;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	vrData.SysMemSlicePitch = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

			switch (e.key.keysym.sym)

	vbDesc.StructureByteStride = 0;

#include "DirectXManager.h"



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		size_t index_offset = 0;  // インデントのオフセット

	}

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//テクスチャ読み込み

	m_Viewport.Height = (FLOAT)rect.Height();

		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				// access to vertex

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

				break;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	return 0;

	//テクスチャ読み込み

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pPixelShader = NULL;



	D3D11_SUBRESOURCE_DATA vrData;

		size_t index_offset = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.MiscFlags = 0;

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



};

	vrData.SysMemSlicePitch = 0;

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	SDL_FreeSurface(bmp);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	CRect                rect;

		return hr;

	}

		NULL,



		&materials,

	std::vector<tinyobj::material_t> materials;

	cbDesc.MiscFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	return;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

				indexlist.push_back(index);

		&scDesc,



	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.TopLeftX = 0;

	//深度ステンシルバッファ作成

	ibDesc.StructureByteStride = 0;



	//vector<WORD> index_t;



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	auto& shapes = reader.GetShapes();



	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pDevice);

{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

};

	{

	ConstantMaterial material; //物体の質感





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		if (e.type == SDL_QUIT)

	Release();



		&shapes,

	auto& shapes = reader.GetShapes();

			for (size_t v = 0; v < fv; v++)



	// Loop over shapes

#include <iostream>



	m_pInputLayout = NULL;





	cbDesc.StructureByteStride = 0;

	WORD* pIList = new WORD[icount];





	ConstantLightBuffer clb;

	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_VertexCount = 0;



		pIList[j] = indexList[j];

	SDL_DestroyWindow(win);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_RIGHT,

	vector<WORD> indexList;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	vector<Vertex> vertexlist;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.StructureByteStride = 0;



	SDL_FreeSurface(bmp);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

		return hr;

/*

	std::string inputfile = "test.obj";



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		{

	m_pSampler = NULL;



	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <iostream>



	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext = NULL;

	{

				// access to vertex

		if (!ret)

		delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	for (const auto& shape : shapes)

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pIndexBuffer = NULL;

	return 0;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&level,

		{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	WORD   icount = indexList.size();

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	dsDesc.Format = txDesc.Format;

	enum KeyPressSurfaces

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderPresent(ren);

	txDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pInputLayout);

#include <SDL.h>

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pSwapChain->Present(0, 0);

	pBackBuffer->Release();



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//頂点レイアウト作成



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		m_pImmediateContext->ClearState();

				vertex.push_back(vertex_tmp);

				break;

	pBackBuffer->Release();

			case SDLK_RIGHT:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

/*

CD3DTest::~CD3DTest()

		SDL_RenderCopy(ren, tex, NULL, NULL);

			case SDLK_RIGHT:

	m_pLightBuffer = NULL;

		pLevels,

	scDesc.OutputWindow = hwnd;

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		size_t index_offset = 0;  // インデントのオフセット

	{

#endif

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

	tinyobj::ObjReader reader;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	// Loop over shapes



	std::vector<tinyobj::shape_t> shapes;

			case SDLK_RIGHT:

	m_pDepthStencilView = NULL;

	D3D11_BUFFER_DESC ibDesc;

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 specular;          //反射(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	reader_config.mtl_search_path = "./"; // Path to material files

		&m_pImmediateContext);

	SAFE_RELEASE(m_pVertexShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	std::string imagePath = "hello.bmp";

		return hr;

	for (int i = 0; i < vcount; i++)

			index_offset += fv;

		pLevels,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MiscFlags = 0;

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

};



	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	auto& shapes = reader.GetShapes();

	m_pSwapChain = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	m_pTextureView = NULL;

	return;



	if (FAILED(hr))

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4X4 view;



{

 */

	XMFLOAT4X4 projection;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	Vertex* pVList = new Vertex[vcount];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		delete[] pIList;

	//頂点レイアウト作成

	}

	SAFE_RELEASE(m_pPixelShader);

	float    fov = XMConvertToRadians(20.0f);

			default:

	{

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))



			}

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

#include <SDL.h>

		D3D_DRIVER_TYPE_HARDWARE,

			case SDLK_DOWN:



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return 1;

	auto& shapes = reader.GetShapes();

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pTextureView);

	//定数バッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pMatrixBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





		&m_pSwapChain,

	XMFLOAT4 ambient;           //環境(r,g,b)

			default:

		return hr;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Quit();

}

			}

	ibDesc.StructureByteStride = 0;

		SDL_Delay(1000);

	if (FAILED(hr))

			}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	}



	for (int j = 0; j < icount; j++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.SampleDesc.Count = 1;

	}

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

				tinyobj::real_t tx =

	SDL_Quit();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Quit();

	if (FAILED(hr))



		pVList[i] = vertexlist[i];

};



};

		SDL_Delay(1000);

	ConstantMatrixBuffer cmb;

struct ConstantMaterial {

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		if (!reader.Error().empty())



	scDesc.BufferCount = 1;

	{



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pIndexBuffer);

	return 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

};

		SDL_RenderClear(ren);

void CD3DTest::Release()

	XMFLOAT4 pos;               //座標(x,y,z)

	auto& shapes = reader.GetShapes();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;

{



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		{

	m_pIndexBuffer = NULL;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ty =

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#endif

	if (FAILED(hr))

{





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	tinyobj::ObjReader reader;



	ibDesc.MiscFlags = 0;

	//Clean up our objects and quit

			{



		exit(1);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

#endif

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderClear(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

		&m_pDevice,

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		SDL_RenderClear(ren);

	m_pVertexShader = NULL;

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		}

				tinyobj::real_t ty =

	WORD* pIList = new WORD[icount];

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pDepthStencilView = NULL;

}

	UINT strides = sizeof(Vertex);

	DXGI_SWAP_CHAIN_DESC scDesc;



CD3DTest::~CD3DTest()

	reader_config.mtl_search_path = "./"; // Path to material files



}

CD3DTest::CD3DTest()

		}

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	m_IndexCount = 0;

	{

int main(int, char**)



		&scDesc,

				// access to vertex



		D3D11_SDK_VERSION,

};







	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	txDesc.Width = rect.Width();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	LoadObj(vertexlist, indexList);

/*





	m_IndexCount = 0;

		//User requests quit

		delete[] pIList;

				break;

};



			{





};

	auto& shapes = reader.GetShapes();

#include <iostream>

				break;



	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

 */

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pTexture);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		return hr;

	irData.pSysMem = &pIList[0];



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

#include <SDL.h>



	return;

 */

using std::cout; using std::endl;



		D3D_DRIVER_TYPE_HARDWARE,

	m_pDepthStencilView = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

int main(int, char**)

}
		delete[] pIList;



				break;

	D3D11_TEXTURE2D_DESC txDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				WORD index = idx.vertex_index;

	//Create Index



	if (FAILED(hr))

	//頂点レイアウト作成

		SDL_Delay(1000);

	vbDesc.StructureByteStride = 0;

	Release();

	//Vertex* pVList = new Vertex[vcount];

	m_pInputLayout = NULL;



		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.MiscFlags = 0;

	vector<WORD> indexList;

	WORD   icount = indexList.size();

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_FreeSurface(bmp);

		SDL_RenderPresent(ren);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	m_Viewport.TopLeftX = 0;

	return 0;

	vbDesc.StructureByteStride = 0;



{

	}

	vbDesc.StructureByteStride = 0;

		return hr;

	m_pVertexShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		size_t index_offset = 0;  // インデントのオフセット

	auto& shapes = reader.GetShapes();

	UINT offsets = 0;

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))



	txDesc.Width = rect.Width();



			index_offset += fv;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			for (size_t v = 0; v < fv; v++)

	return;

	std::vector<tinyobj::shape_t> shapes;



	pBackBuffer->Release();

				vertex.push_back(vertex_tmp);

	//インデックスバッファ作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Event e;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





			//Select surfaces based on key press

	vector<Vertex> vertexlist;

			switch (e.key.keysym.sym)

};

		else if (e.type == SDL_KEYDOWN)

			case SDLK_RIGHT:



	SAFE_RELEASE(m_pMatrixBuffer);

	std::string inputfile = "test.obj";

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				break;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	irData.pSysMem = &pIList[0];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pTexture);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



			index_offset += num_vertices;

		return hr;



		}

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}



	{

{

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

	}

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;



	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_RIGHT:

	if (FAILED(hr))

	}

	return 0;

	SDL_Quit();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

using std::cout; using std::endl;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.SampleDesc.Quality = 0;

		delete[] pIList;

	{

	{

		if (!ret)

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



				break;

		pVList[i] = vertexlist[i];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	for (size_t s = 0; s < shapes.size(); s++)

				WORD index = idx.vertex_index;

	scDesc.OutputWindow = hwnd;

struct ConstantMaterial {



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pInputLayout = NULL;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pInputLayout);

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))



#define TINYOBJLOADER_IMPLEMENTATION

		}

	XMFLOAT4 pos;               //座標(x,y,z)

			{



	SAFE_RELEASE(m_pVertexShader);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4X4 world;

	vbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			case SDLK_LEFT:

	for (int i = 0; i < 3; i++)

	bool ret = tinyobj::LoadObj(

		return hr;

		D3D11_SDK_VERSION,

	}

struct ConstantLight {

		}

		delete[] pVList;

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.TopLeftY = 0;

		R"(cube.obj)");

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



			exit(1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return 1;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	SAFE_RELEASE(m_pTextureView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		&m_pDevice,

	return hr;

	LoadObj(vertexlist, indexList);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		{

			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         eyePos;   //視点座標

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

	m_pDevice = NULL;



	//テクスチャ読み込み

#include "DirectXManager.h"

	//深度ステンシルバッファ作成

	}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	reader_config.mtl_search_path = "./"; // Path to material files

	Vertex* pVList = new Vertex[vcount];

int main(int, char**)

		SDL_Delay(1000);

	txDesc.MipLevels = 1;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

};

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;



	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.SampleDesc.Count = 1;

				WORD index = idx.vertex_index;

	return 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	UINT flags = 0;

		return hr;

	ibDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

	ConstantMatrixBuffer cmb;

		SDL_RenderClear(ren);

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	D3D11_BUFFER_DESC ibDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ibDesc.CPUAccessFlags = 0;

CD3DTest::~CD3DTest()

		if (e.type == SDL_QUIT)

	m_pIndexBuffer = NULL;

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	scDesc.OutputWindow = hwnd;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

		}

{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			break;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	SDL_DestroyTexture(tex);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SDL_FreeSurface(suf);

			{

	{

int main(int, char**)



	{

	vrData.pSysMem = &pVList[0];

			}



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			exit(1);

	std::string inputfile = "test.obj";

			index_offset += num_vertices;

		if (!reader.Error().empty())

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyTexture(tex);

	vrData.pSysMem = &pVList[0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(bmp);



				indexlist.push_back(index);

	SDL_Quit();



	m_pDepthStencilTexture = NULL;



				indexlist.push_back(index);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.CPUAccessFlags = 0;

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

		{

		return hr;

	{

	SAFE_RELEASE(m_pSampler);

	auto& attrib = reader.GetAttrib();

	//ピクセルシェーダー生成

	std::string inputfile = "test.obj";



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			exit(1);

	m_pImmediateContext = NULL;

		{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.MiscFlags = 0;

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pDepthStencilTexture = NULL;

	if (m_pImmediateContext)

			break;

	UINT offsets = 0;

		}

{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	return;

			index_offset += num_vertices;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}*/

	return 0;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pRenderTargetView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	reader_config.mtl_search_path = "./"; // Path to material files

		}

				// access to vertex

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t tx =

	SDL_DestroyTexture(tex);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pRenderTargetView);



	Release();

	::ZeroMemory(&scDesc, sizeof(scDesc));

			exit(1);



	m_pDepthStencilTexture = NULL;

	SDL_Quit();

	m_pVertexShader = NULL;

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	// Loop over shapes



};

	//ビューポート設定

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_IndexCount = icount;

	for (int j = 0; j < icount; j++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

			index_offset += fv;

	Release();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	cbDesc.StructureByteStride = 0;

		&m_pImmediateContext);

	m_pDepthStencilView = NULL;

	bool ret = tinyobj::LoadObj(

		SDL_Delay(1000);



	XMFLOAT4 specular;          //反射(r,g,b)



CD3DTest::CD3DTest()

		delete[] pIList;

	txDesc.MipLevels = 1;

void CD3DTest::Render()



#include "DirectXManager.h"

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ConstantMaterial material; //物体の質感

	auto& attrib = reader.GetAttrib();

				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{

		return hr;

	{

	SDL_Event e;



		{

				indexlist.push_back(index);

	if (FAILED(hr))



	ibDesc.CPUAccessFlags = 0;

		&attrib,

}
	auto& materials = reader.GetMaterials();

				break;

			exit(1);

{

HRESULT CD3DTest::Create(HWND hwnd)





	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.BufferCount = 1;

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		&error,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#ifdef _DEBUG

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}



		}

	SDL_DestroyTexture(tex);

	txDesc.MipLevels = 1;



		{

		//User presses a key

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return hr;

	Release();

			for (size_t v = 0; v < fv; v++)

		pVList[i] = vertexlist[i];

	XMFLOAT4X4 world;

	float    nearZ = 0.1f;

	::GetClientRect(hwnd, &rect);

#ifdef _DEBUG



	float    nearZ = 0.1f;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vrData.SysMemPitch = 0;





	{



		pVList[i] = vertexlist[i];

	enum KeyPressSurfaces

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	WORD   icount = indexList.size();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//頂点シェーダー生成

#include <SDL.h>

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

HRESULT CD3DTest::Create(HWND hwnd)

	D3D_FEATURE_LEVEL level;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.StructureByteStride = 0;

		pVList[i] = vertexlist[i];

				indexlist.push_back(index);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







		return hr;

	vector<WORD> indexList;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	for (size_t s = 0; s < shapes.size(); s++)



	Release();



		return hr;

	m_Viewport.TopLeftY = 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	auto& attrib = reader.GetAttrib();

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (const auto& shape : shapes)

	}



	D3D11_BUFFER_DESC cbDesc;

int main(int, char**)

{



	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pPixelShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_VertexCount = 0;

int main(int, char**)

	D3D11_SUBRESOURCE_DATA irData;





				break;

	auto& materials = reader.GetMaterials();

		{

	return 0;

			}

	txDesc.MiscFlags = 0;

	txDesc.Height = rect.Height();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//Create Index

};



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 ambient;           //環境(r,g,b)

		}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//ビューポート設定

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}

	m_pDepthStencilView = NULL;

#ifdef _DEBUG

	for (int j = 0; j < icount; j++)



	SDL_FreeSurface(suf);

{

};

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			index_offset += num_vertices;

	//Clean up our objects and quit

	m_pDepthStencilView = NULL;

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

	m_IndexCount = icount;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	scDesc.BufferCount = 1;

			// Loop over vertices in the face.



}
		{

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	vrData.SysMemPitch = 0;

		{

	return hr;

				break;



	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

CD3DTest::CD3DTest()

		return hr;

	m_pTextureView = NULL;

	ibDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t ty =

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





				WORD index = idx.vertex_index;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemPitch = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	}



	XMFLOAT4         ambient;  //環境光(r,g,b)

	auto& attrib = reader.GetAttrib();

	XMFLOAT4X4 projection;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.Texture2D.MipSlice = 0;

	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.Format = txDesc.Format;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_BUFFER_DESC cbDesc;



				tinyobj::real_t tx =

		delete[] pIList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_SAMPLER_DESC smpDesc;

#include "DirectXManager.h"



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	// Loop over shapes

	for (int i = 0; i < vcount; i++)





	}

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			break;

void CD3DTest::Release()



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		delete[] pIList;





	txDesc.MiscFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//ビューポート設定

	//頂点レイアウト作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.SysMemPitch = 0;

	{



			case SDLK_UP:

	m_Angle += XMConvertToRadians(1.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT strides = sizeof(Vertex);

	m_pDepthStencilTexture = NULL;

	vbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	//深度ステンシルバッファ作成

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t tx =

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		// Loop over faces(polygon)

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

			{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	WORD   icount = indexList.size();



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	UINT flags = 0;

	vrData.pSysMem = &pVList[0];

	}

		{

	//Create Index



	pBackBuffer->Release();

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	m_pVertexBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

		return hr;

		if (!reader.Error().empty())





		KEY_PRESS_SURFACE_DOWN,



	XMFLOAT4X4 view;



	SDL_DestroyTexture(tex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

CD3DTest::~CD3DTest()

	txDesc.SampleDesc.Count = 1;

		return hr;

				break;

	scDesc.Windowed = TRUE;

	scDesc.SampleDesc.Count = 1;

			// Loop over vertices in the face.

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pSwapChain = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

{

	}



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);







			{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				indexlist.push_back(index);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}
	SAFE_RELEASE(m_pIndexBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	tinyobj::ObjReaderConfig reader_config;

}

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Event e;

	//ピクセルシェーダー生成

	//頂点レイアウト作成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	WORD   icount = indexList.size();

				WORD index = idx.vertex_index;

	/*

		m_pImmediateContext->ClearState();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			for (size_t v = 0; v < num_vertices; v++)

	// Loop over shapes

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	return 0;

	if (m_pImmediateContext)

	CRect                rect;

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pPixelShader);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			default:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	irData.SysMemSlicePitch = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantLight {

	//vector<WORD> index_t;

			}

	{

	SDL_FreeSurface(suf);

#include <iostream>

	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//定数バッファ作成



		{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



			case SDLK_DOWN:

	m_pIndexBuffer = NULL;

	ConstantLightBuffer clb;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_SAMPLER_DESC smpDesc;

	{

	SAFE_RELEASE(m_pSwapChain);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



#include <SDL.h>

void CD3DTest::Render()

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	{

	{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

struct ConstantLightBuffer {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_VertexCount = 0;

	{

		delete[] pIList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += fv;

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	reader_config.mtl_search_path = "./"; // Path to material files





		// Loop over faces(polygon)

	SDL_FreeSurface(suf);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

		exit(1);

			case SDLK_RIGHT:

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	UINT offsets = 0;

				indexlist.push_back(index);

	float    farZ = 100.0f;

	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			exit(1);

	txDesc.MipLevels = 1;

		}

int main(int, char**)

	std::string error;

	{

	vector<Vertex> vertexlist;

	D3D11_SAMPLER_DESC smpDesc;

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		delete[] pVList;



	CRect                rect;

		else if (e.type == SDL_KEYDOWN)

		}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

/*



	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Quit();

	ConstantMaterial material; //物体の質感

				vertex.push_back(vertex_tmp);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





void CD3DTest::Render()

		&error,





		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.CPUAccessFlags = 0;

		// Loop over faces(polygon)

		exit(1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}



#include <iostream>

	//Key press surfaces constants

	m_pVertexShader = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	D3D_FEATURE_LEVEL level;

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_RIGHT,

	CRect                rect;

	}

	return hr;

	m_pSwapChain->Present(0, 0);

void CD3DTest::Release()

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		if (!ret)



				// access to vertex



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::vector<tinyobj::shape_t> shapes;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pVList;

	std::string error;

			{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.OutputWindow = hwnd;

			for (size_t v = 0; v < fv; v++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC vbDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include "DirectXManager.h"

	XMStoreFloat4(&clb.eyePos, eye);

	{

	m_pSwapChain = NULL;

		&scDesc,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	while (SDL_PollEvent(&e) != 0)

	txDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

	SDL_FreeSurface(bmp);

		else if (e.type == SDL_KEYDOWN)

/*

	WORD   icount = indexList.size();





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		&m_pDevice,

		cout << "SDL_INIT_ERROR" << endl;



				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

#include <iostream>

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	return 0;

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

	ConstantLight    pntLight; //点光源

	HRESULT              hr;

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_RIGHT:



	delete[] pVList;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

	std::vector<tinyobj::material_t> materials;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.SampleDesc.Count = 1;



		return hr;

		delete[] pVList;

	if (FAILED(hr))

	}



	txDesc.Usage = D3D11_USAGE_DEFAULT;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);







	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

struct ConstantLightBuffer {

			{

	SAFE_RELEASE(m_pImmediateContext);

		SDL_RenderClear(ren);

	scDesc.BufferDesc.Width = rect.Width();









	vrData.SysMemPitch = 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_TEXTURE2D_DESC txDesc;

		pLevels,



	std::vector<tinyobj::material_t> materials;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	HRESULT              hr;



	vbDesc.StructureByteStride = 0;

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



#ifdef _DEBUG

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	UINT flags = 0;

			case SDLK_DOWN:

	WORD   icount = indexList.size();

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	}

	HRESULT              hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		else if (e.type == SDL_KEYDOWN)

		KEY_PRESS_SURFACE_TOTAL

	::ZeroMemory(&scDesc, sizeof(scDesc));

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pDepthStencilView);



	D3D11_BUFFER_DESC vbDesc;

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC ibDesc;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	}

			index_offset += fv;

	txDesc.Height = rect.Height();

	D3D11_BUFFER_DESC ibDesc;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC vbDesc;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	reader_config.mtl_search_path = "./"; // Path to material files

	std::string imagePath = "hello.bmp";

				tinyobj::real_t tx =

int main(int, char**)

	/*

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}*/

		flags,





		return hr;



		KEY_PRESS_SURFACE_RIGHT,

			break;

struct ConstantLight {

	m_pDepthStencilView = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		else if (e.type == SDL_KEYDOWN)

		&m_pDevice,

	ID3D11Texture2D* pBackBuffer;

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

				vertex.push_back(vertex_tmp);



				// access to vertex

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pDevice = NULL;





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pTextureView = NULL;

		&materials,

				// access to vertex

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};



	tinyobj::ObjReaderConfig reader_config;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

	m_pTexture = NULL;

		exit(1);

		flags,

	SAFE_RELEASE(m_pInputLayout);



		return hr;



	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		size_t index_offset = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pPixelShader = NULL;

	//vector<Vertex> vertex_t;

	//頂点レイアウト作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	}

	XMFLOAT4         eyePos;   //視点座標

	{

#include <iostream>

	return;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//インデックスバッファ作成

	std::vector<tinyobj::material_t> materials;



HRESULT CD3DTest::Create(HWND hwnd)



	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

using std::cout; using std::endl;





	txDesc.SampleDesc.Count = 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}





	cbDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC vbDesc;

	m_pMatrixBuffer = NULL;

				WORD index = idx.vertex_index;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	{

				WORD index = idx.vertex_index;

	SDL_FreeSurface(suf);

		return hr;

	SAFE_RELEASE(m_pVertexShader);

		pLevels,

	{

			//Select surfaces based on key press

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		pVList[i] = vertexlist[i];

	::ZeroMemory(&scDesc, sizeof(scDesc));



	delete[] pVList;

	SAFE_RELEASE(m_pMatrixBuffer);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	if (FAILED(hr))

int main(int, char**)

};



	ConstantLightBuffer clb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	std::string inputfile = "test.obj";

#include "DirectXManager.h"



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



struct ConstantMaterial {

		SDL_Delay(1000);



#ifdef _DEBUG

		flags,

		{

int SEGMENT = 36;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.StructureByteStride = 0;



	//Clean up our objects and quit





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);







	if (FAILED(hr))

				break;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&materials,

	m_pLightBuffer = NULL;



				break;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pTexture);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_FreeSurface(suf);



 * Lesson 1: Hello World!

};

	SAFE_RELEASE(m_pInputLayout);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(suf);

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.eyePos, eye);

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	m_VertexCount = vcount;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

	if (FAILED(hr))

	m_pVertexShader = NULL;





	vector<WORD> indexList;

{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		size_t index_offset = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



				WORD index = idx.vertex_index;

struct ConstantMatrixBuffer {

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	SAFE_RELEASE(m_pImmediateContext);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	// Loop over shapes

{

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyTexture(tex);

	Release();

	scDesc.BufferCount = 1;

		exit(1);

		cout << "SDL_INIT_ERROR" << endl;

	delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	{

	SAFE_RELEASE(m_pSampler);

		KEY_PRESS_SURFACE_RIGHT,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();



	m_IndexCount = icount;



	XMFLOAT4         eyePos;   //視点座標

	auto& shapes = reader.GetShapes();





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;

	//ビューポート設定

				tinyobj::real_t tx =

	//Create Index

	SDL_DestroyTexture(tex);



			case SDLK_LEFT:

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	SAFE_RELEASE(m_pSwapChain);

				WORD index = idx.vertex_index;



	ibDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_IndexCount = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

struct ConstantMaterial {

	for (int i = 0; i < vcount; i++)

	m_pTextureView = NULL;

	tinyobj::attrib_t attrib;

		if (!ret)

			for (size_t v = 0; v < num_vertices; v++)



	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.MiscFlags = 0;

		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.MaxDepth = 1.0f;

	return hr;

			{



	SAFE_RELEASE(m_pIndexBuffer);

}
struct ConstantLightBuffer {

	//定数バッファ作成



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{





			}

		{



}
	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



}

		&shapes,

int main(int, char**)



	XMFLOAT4X4 projection;

			}

				WORD index = idx.vertex_index;

	}

		//User presses a key

		//User presses a key

	ConstantMatrixBuffer cmb;

			index_offset += fv;

			}

#include <iostream>



	};

	XMFLOAT4X4 view;

{

	m_Viewport.Width = (FLOAT)rect.Width();

};



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

}

		&attrib,



	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	enum KeyPressSurfaces

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))



	pBackBuffer->Release();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//インデックスバッファ作成

	delete[] pIList;

		KEY_PRESS_SURFACE_LEFT,



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Height = rect.Height();

	HRESULT              hr;

	irData.pSysMem = &pIList[0];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}



	{

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	vrData.SysMemSlicePitch = 0;

	irData.pSysMem = &pIList[0];

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	/*

	cbDesc.MiscFlags = 0;



	{

		{

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	tinyobj::ObjReader reader;

	{

		exit(1);



	//ビューポート設定

	m_pDepthStencilView = NULL;

			//Select surfaces based on key press

	if (!reader.ParseFromFile(inputfile, reader_config))

		R"(cube.obj)");



	//頂点バッファ作成

	SAFE_RELEASE(m_pVertexShader);





	return;

		KEY_PRESS_SURFACE_RIGHT,

};



		return hr;

int main(int, char**)

	SAFE_RELEASE(m_pIndexBuffer);



	std::vector<tinyobj::shape_t> shapes;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			}

	std::string inputfile = "test.obj";

void CD3DTest::Render()



		R"(cube.obj)");

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

void CD3DTest::Render()

			}

	//テクスチャ読み込み

				indexlist.push_back(idx.vertex_index);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4 ambient;           //環境(r,g,b)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	UINT flags = 0;



	SAFE_RELEASE(m_pSwapChain);





	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



	cbDesc.MiscFlags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pDepthStencilView);

int main(int, char**)

}



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	UINT strides = sizeof(Vertex);

	scDesc.SampleDesc.Quality = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float    nearZ = 0.1f;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	txDesc.MipLevels = 1;

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Event e;

		&m_pSwapChain,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



			{





	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <iostream>

	m_IndexCount = icount;

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#define TINYOBJLOADER_IMPLEMENTATION

	m_Viewport.MinDepth = 0.0f;



	m_pVertexShader = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.MiscFlags = 0;

	m_pTextureView = NULL;

			index_offset += num_vertices;

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)



	ConstantMaterial material; //物体の質感

	m_pSwapChain = NULL;



		m_pImmediateContext->ClearState();

	txDesc.Width = rect.Width();

	return 0;

/*

	cbDesc.MiscFlags = 0;

	vbDesc.StructureByteStride = 0;

	txDesc.Width = rect.Width();



	for (int j = 0; j < icount; j++)

	scDesc.BufferDesc.Height = rect.Height();

	m_Viewport.MaxDepth = 1.0f;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

int SEGMENT = 36;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4X4 projection;

	LoadObj(vertexlist, indexList);

	m_pVertexShader = NULL;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pSwapChain,

		if (!ret)

		pLevels,





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			for (size_t v = 0; v < fv; v++)

	txDesc.MipLevels = 1;



		return hr;

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

	vector<Vertex> vertexlist;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pDevice = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

		{

	SDL_DestroyRenderer(ren);

	//Clean up our objects and quit

};

	dsDesc.Format = txDesc.Format;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pSampler = NULL;

	m_pVertexShader = NULL;

			case SDLK_UP:



		{

	SAFE_RELEASE(m_pDepthStencilTexture);

	irData.pSysMem = &pIList[0];

	cbDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

#include "DirectXManager.h"

	XMStoreFloat4(&clb.material.specular, materialSpecular);

void CD3DTest::Release()

		//User requests quit



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};



	SDL_DestroyWindow(win);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;



	std::string error;

		return hr;

	Vertex* pVList = new Vertex[vcount];



	SDL_Event e;

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		return hr;

	{

	ConstantMatrixBuffer cmb;

	{

				// access to vertex

	std::string inputfile = "test.obj";

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//First we need to start up SDL, and make sure it went ok

	m_IndexCount = icount;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		&m_pImmediateContext);

	txDesc.MiscFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();



	XMStoreFloat4(&clb.eyePos, eye);

	bool ret = tinyobj::LoadObj(

	XMFLOAT4X4 world;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



				tinyobj::real_t ty =



	SDL_FreeSurface(suf);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&scDesc,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	UINT offsets = 0;

				vertex.push_back(vertex_tmp);

	if (!error.empty())

	return 0;

};

		{



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	}

		&level,

			{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < vcount; i++)

	D3D11_SAMPLER_DESC smpDesc;

	for (int j = 0; j < icount; j++)

	SDL_Event e;

int SEGMENT = 36;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//ビューポート設定



	txDesc.SampleDesc.Quality = 0;



	tinyobj::ObjReader reader;

	m_VertexCount = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 projection;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//Clean up our objects and quit

	if (SDL_Init(SDL_INIT_VIDEO != 0))



struct ConstantMatrixBuffer {



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点バッファ作成

	m_pVertexShader = NULL;

	float    fov = XMConvertToRadians(20.0f);

	{

	enum KeyPressSurfaces

		SDL_RenderPresent(ren);



	m_pDevice = NULL;



	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_DestroyTexture(tex);



		&materials,

		R"(cube.obj)");

{





};

	XMStoreFloat4(&clb.eyePos, eye);

	m_IndexCount = icount;

	tinyobj::attrib_t attrib;



	ConstantLight    pntLight; //点光源

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_VertexCount = 0;

	m_pTextureView = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	delete[] pIList;

		//User presses a key



	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};

		&attrib,

		}

	ConstantMatrixBuffer cmb;

	XMFLOAT4 specular;          //反射(r,g,b)

	//ピクセルシェーダー生成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pRenderTargetView = NULL;



	}

	while (SDL_PollEvent(&e) != 0)

		return hr;

		KEY_PRESS_SURFACE_LEFT,

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

using std::cout; using std::endl;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



			case SDLK_LEFT:

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//First we need to start up SDL, and make sure it went ok

				break;

				break;

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	m_pPixelShader = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	};



		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	bool ret = tinyobj::LoadObj(

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	m_pRenderTargetView = NULL;

		// Loop over faces(polygon)

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pVertexBuffer);



		return 1;

	//インデックスバッファ作成

	scDesc.Windowed = TRUE;

				WORD index = idx.vertex_index;

	//Create Index

	vbDesc.CPUAccessFlags = 0;

	{



	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pLightBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		{

	ConstantMatrixBuffer cmb;

		D3D_DRIVER_TYPE_HARDWARE,

		&shapes,

	SDL_Quit();

	m_pSwapChain->Present(0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		}

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	while (SDL_PollEvent(&e) != 0)



		// Loop over faces(polygon)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;



	{

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 pos;               //座標(x,y,z)

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//First we need to start up SDL, and make sure it went ok

		{

	D3D11_BUFFER_DESC cbDesc;

#include <iostream>

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				break;

				break;

{





	ibDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	ConstantLight    pntLight; //点光源

	m_IndexCount = 0;



	cbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	HRESULT              hr;

	//Clean up our objects and quit

		m_pImmediateContext->ClearState();

	scDesc.BufferCount = 1;





	delete[] pIList;

		flags,

	cbDesc.MiscFlags = 0;

	enum KeyPressSurfaces

	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)

	m_pSampler = NULL;

			}

void CD3DTest::Release()

}

	m_pDepthStencilView = NULL;

			for (size_t v = 0; v < num_vertices; v++)



	m_pDepthStencilTexture = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				WORD index = idx.vertex_index;

		R"(cube.obj)");

			for (size_t v = 0; v < fv; v++)

	m_Viewport.TopLeftX = 0;



	m_pPixelShader = NULL;

	m_pVertexBuffer = NULL;

		return hr;

	D3D11_SUBRESOURCE_DATA irData;



HRESULT CD3DTest::Create(HWND hwnd)



	//深度ステンシルバッファ作成

int main(int, char**)

			index_offset += fv;

	/*

	//テクスチャ読み込み

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

	while (SDL_PollEvent(&e) != 0)

	//頂点レイアウト作成

	//頂点レイアウト作成

		return hr;

	SDL_DestroyTexture(tex);

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderPresent(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			case SDLK_DOWN:

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Key press surfaces constants

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	SAFE_RELEASE(m_pTextureView);





	reader_config.mtl_search_path = "./"; // Path to material files



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.CPUAccessFlags = 0;

	m_pPixelShader = NULL;

	}

	SAFE_RELEASE(m_pPixelShader);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{



	auto& materials = reader.GetMaterials();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::string error;



	for (const auto& shape : shapes)

	SDL_Quit();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

struct ConstantMatrixBuffer {

	m_pVertexShader = NULL;

	ibDesc.MiscFlags = 0;

	UINT flags = 0;

	SDL_DestroyWindow(win);

void CD3DTest::Release()

	m_Viewport.Height = (FLOAT)rect.Height();



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	if (FAILED(hr))

	//インデックスバッファ作成

	if (FAILED(hr))

		return hr;

	float    farZ = 100.0f;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pRenderTargetView);

 * Lesson 1: Hello World!

		SDL_RenderClear(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}

#include <iostream>

			for (size_t v = 0; v < num_vertices; v++)





		R"(cube.obj)");



	SAFE_RELEASE(m_pVertexShader);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	delete[] pVList;

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<WORD> index_t;

		return hr;

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	//vector<Vertex> vertex_t;

				break;



		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		NULL,

	auto& materials = reader.GetMaterials();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	tinyobj::ObjReader reader;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_RIGHT,

	WORD   icount = indexList.size();

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		KEY_PRESS_SURFACE_UP,

	UINT offsets = 0;

	XMFLOAT4X4 projection;

				tinyobj::real_t ty =

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}



	ibDesc.CPUAccessFlags = 0;

		pVList[i] = vertexlist[i];

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

		if (!reader.Error().empty())



		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pInputLayout);



			// Loop over vertices in the face.



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

struct ConstantMaterial {

	for (int i = 0; i < vcount; i++)

		pVList[i] = vertexlist[i];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	dsDesc.Texture2D.MipSlice = 0;



		}



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pMatrixBuffer);

		&error,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

void CD3DTest::Release()



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);

}

	D3D_FEATURE_LEVEL level;

	}

	m_pVertexBuffer = NULL;

}



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

HRESULT CD3DTest::Create(HWND hwnd)

	Release();

	UINT flags = 0;

				indexlist.push_back(index);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t tx =

CD3DTest::~CD3DTest()



			index_offset += fv;

#include "DirectXManager.h"



		KEY_PRESS_SURFACE_LEFT,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLightBuffer clb;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		{

	txDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ConstantLight    pntLight; //点光源

	//vector<Vertex> vertex_t;

	SDL_Event e;

	vbDesc.StructureByteStride = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	m_pTexture = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

	return 0;

	m_pTextureView = NULL;

	}

	SDL_FreeSurface(bmp);

	cbDesc.StructureByteStride = 0;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pTextureView);

	{

	}*/

				WORD index = idx.vertex_index;

	return;

	}*/

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Quit();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	WORD* pIList = new WORD[icount];



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderClear(ren);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(idx.vertex_index);

		return 1;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderClear(ren);

				break;



	ConstantLight    pntLight; //点光源

void CD3DTest::Release()





	}

	txDesc.SampleDesc.Count = 1;



	ZeroMemory(&txDesc, sizeof(txDesc));



	WORD   icount = indexList.size();

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_DOWN,

int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



#endif

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_UP:

/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.MaxDepth = 1.0f;

	enum KeyPressSurfaces

	scDesc.BufferDesc.Height = rect.Height();





#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

	scDesc.SampleDesc.Count = 1;



	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_DEFAULT,

		&shapes,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

struct ConstantMaterial {





{

	XMFLOAT4         eyePos;   //視点座標

}
		&shapes,

}
	D3D_FEATURE_LEVEL level;

		return hr;

	ConstantMaterial material; //物体の質感

	D3D11_BUFFER_DESC vbDesc;

	//テクスチャ読み込み

	}



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DEFAULT,

			exit(1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{



	int     vcount = vertexlist.size();

	reader_config.mtl_search_path = "./"; // Path to material files

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		KEY_PRESS_SURFACE_TOTAL



	//Key press surfaces constants

	{

		exit(1);

	txDesc.SampleDesc.Quality = 0;



			default:

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pSwapChain->Present(0, 0);

	int     vcount = vertexlist.size();

	scDesc.Windowed = TRUE;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	if (FAILED(hr))

		&error,

		KEY_PRESS_SURFACE_DEFAULT,

	//Clean up our objects and quit

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	float    farZ = 100.0f;

	//深度ステンシルバッファ作成

	cbDesc.CPUAccessFlags = 0;

			}

				indexlist.push_back(index);







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

			switch (e.key.keysym.sym)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	Release();

	Vertex* pVList = new Vertex[vcount];

	std::vector<tinyobj::shape_t> shapes;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();

void CD3DTest::Release()



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Quit();

	//ピクセルシェーダー生成

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_SAMPLER_DESC smpDesc;

	m_Viewport.TopLeftX = 0;



	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//vector<WORD> index_t;



	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

	delete[] pIList;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))



	for (int i = 0; i < vcount; i++)





	irData.SysMemSlicePitch = 0;



}

 * Lesson 1: Hello World!





	m_IndexCount = 0;

	m_pLightBuffer = NULL;

	return hr;

		return hr;

	return 0;



	txDesc.Height = rect.Height();

	if (!reader.Warning().empty())

void CD3DTest::Render()

}
		}

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	auto& shapes = reader.GetShapes();

	m_Viewport.TopLeftY = 0;









		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	irData.pSysMem = &pIList[0];

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	}



	cbDesc.StructureByteStride = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				break;

		{

void CD3DTest::Release()



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	scDesc.BufferCount = 1;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press

	std::vector<tinyobj::material_t> materials;



CD3DTest::~CD3DTest()

				break;

 * Lesson 1: Hello World!



	return hr;

	while (SDL_PollEvent(&e) != 0)

				break;

		&attrib,

	pBackBuffer->Release();

	D3D11_BUFFER_DESC cbDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyWindow(win);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			//Select surfaces based on key press

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DEFAULT,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pSwapChain = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pIndexBuffer = NULL;

	vrData.SysMemPitch = 0;

{

	LoadObj(vertexlist, indexList);

			}



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (!reader.Warning().empty())

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}





}

	SAFE_RELEASE(m_pLightBuffer);

		// Loop over faces(polygon)

{



	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			default:

	m_pImmediateContext = NULL;

	delete[] pVList;



	txDesc.SampleDesc.Count = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pPixelShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4X4 projection;





	return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.Windowed = TRUE;



	SAFE_RELEASE(m_pDepthStencilView);

	enum KeyPressSurfaces

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (int i = 0; i < vcount; i++)



	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pIndexBuffer);



		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_TEXTURE2D_DESC txDesc;

			}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderClear(ren);

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (!error.empty())



void CD3DTest::Release()

	scDesc.Windowed = TRUE;

		m_pImmediateContext->ClearState();



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t tx =


