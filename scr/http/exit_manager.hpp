	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		else if (e.type == SDL_KEYDOWN)





	float    nearZ = 0.1f;

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_RIGHT:

	vrData.SysMemSlicePitch = 0;

#include <iostream>

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	m_pDepthStencilTexture = NULL;

	SDL_DestroyRenderer(ren);

	//インデックスバッファ作成



	m_Angle += XMConvertToRadians(1.0f);

	}





	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pDevice);

	}

struct ConstantLightBuffer {

	Release();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



{





	}

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//Create Index

	vbDesc.StructureByteStride = 0;

	}

	ConstantMatrixBuffer cmb;



	m_pLightBuffer = NULL;

		//User requests quit



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vrData.pSysMem = &pVList[0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	vbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

{



}

}

	cbDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

			// Loop over vertices in the face.

	m_pTextureView = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	SDL_DestroyWindow(win);

#ifdef _DEBUG

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

struct ConstantLight {

			}

			for (size_t v = 0; v < fv; v++)

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//インデックスバッファ作成

	//頂点レイアウト作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	enum KeyPressSurfaces





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (m_pImmediateContext)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Quit();



	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	vector<Vertex> vertexlist;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

{

	pBackBuffer->Release();

	m_pIndexBuffer = NULL;

}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			int num_vertices = shape.mesh.num_face_vertices[f];





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

	}

	Release();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





		return hr;

				// access to vertex

/*

			case SDLK_UP:

			case SDLK_LEFT:

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))



	vrData.SysMemSlicePitch = 0;



{

	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_DestroyTexture(tex);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	scDesc.SampleDesc.Count = 1;











		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vbDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (FAILED(hr))

	enum KeyPressSurfaces

		exit(1);

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t ty =

				break;

	scDesc.BufferDesc.Height = rect.Height();



	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);

	};

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;



		&materials,

	if (FAILED(hr))



	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.OutputWindow = hwnd;

		{

	/*

		if (!reader.Error().empty())

	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext = NULL;

{

	SAFE_RELEASE(m_pIndexBuffer);

	m_pIndexBuffer = NULL;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	delete[] pIList;

		}

CD3DTest::CD3DTest()

		delete[] pIList;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		KEY_PRESS_SURFACE_TOTAL

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	tinyobj::ObjReader reader;

	SDL_DestroyWindow(win);

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.MinDepth = 0.0f;

	float    farZ = 100.0f;

				// access to vertex



	SDL_Event e;

	SDL_DestroyRenderer(ren);



				break;

	cbDesc.StructureByteStride = 0;

}


				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

			//Select surfaces based on key press



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				vertex.push_back(vertex_tmp);

		return hr;

	delete[] pIList;

	XMFLOAT4X4 projection;

		KEY_PRESS_SURFACE_DOWN,

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			default:

		R"(cube.obj)");

			for (size_t v = 0; v < fv; v++)

		}

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pDevice = NULL;



	m_pIndexBuffer = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

		delete[] pIList;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.SysMemPitch = 0;



	if (FAILED(hr))

	WORD   icount = indexList.size();

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDevice);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

		//User presses a key

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		if (!ret)

			break;

	std::string imagePath = "hello.bmp";

	m_pLightBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

}

	m_Viewport.MaxDepth = 1.0f;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	delete[] pIList;

{

struct ConstantLight {

		pLevels,

#include <iostream>

			for (size_t v = 0; v < num_vertices; v++)



			switch (e.key.keysym.sym)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	cbDesc.StructureByteStride = 0;

CD3DTest::~CD3DTest()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemPitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	WORD* pIList = new WORD[icount];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	UINT offsets = 0;

}
		return 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		cout << "SDL_INIT_ERROR" << endl;

	return 0;

	if (FAILED(hr))

	XMFLOAT4X4 view;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pDepthStencilTexture = NULL;

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.material.specular, materialSpecular);

HRESULT CD3DTest::Create(HWND hwnd)



	ID3D11Texture2D* pBackBuffer;

	tinyobj::attrib_t attrib;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string inputfile = "test.obj";



	float    farZ = 100.0f;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

	m_pSwapChain->Present(0, 0);

};

		size_t index_offset = 0;



		D3D_DRIVER_TYPE_HARDWARE,

	delete[] pVList;

			case SDLK_RIGHT:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&attrib,

			case SDLK_RIGHT:

				tinyobj::real_t tx =

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.CPUAccessFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		exit(1);

	if (FAILED(hr))

	m_pDevice = NULL;



		}

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pTextureView = NULL;

	cbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";

	m_pDepthStencilTexture = NULL;

	UINT flags = 0;

	}

 */

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	Release();



}



	cbDesc.MiscFlags = 0;

	//定数バッファ作成

{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//テクスチャ読み込み

			//Select surfaces based on key press

}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pTextureView);

	ZeroMemory(&txDesc, sizeof(txDesc));



				// access to vertex

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDepthStencilTexture);

		&level,

	std::vector<tinyobj::shape_t> shapes;

	scDesc.SampleDesc.Count = 1;





	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		return hr;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

int main(int, char**)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D11_BUFFER_DESC cbDesc;

int main(int, char**)

				tinyobj::real_t ty =





			index_offset += num_vertices;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	auto& shapes = reader.GetShapes();

		//User presses a key





	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))

		if (!ret)

	SDL_Quit();

		//User requests quit

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))





	m_Viewport.TopLeftY = 0;

	SDL_DestroyRenderer(ren);

	Release();





			//Select surfaces based on key press

	m_IndexCount = icount;

	SAFE_RELEASE(m_pMatrixBuffer);





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

	vrData.pSysMem = &pVList[0];



	vector<Vertex> vertexlist;

		&attrib,

	ibDesc.MiscFlags = 0;

			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::vector<tinyobj::shape_t> shapes;

};

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ibDesc.MiscFlags = 0;

	txDesc.MiscFlags = 0;

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pTexture);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4         eyePos;   //視点座標

	m_Angle += XMConvertToRadians(1.0f);

				WORD index = idx.vertex_index;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;



	m_pDepthStencilView = NULL;

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

int main(int, char**)



		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

				indexlist.push_back(index);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			for (size_t v = 0; v < fv; v++)



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&materials,



		SDL_RenderPresent(ren);

		{

 * Lesson 1: Hello World!



	SAFE_RELEASE(m_pMatrixBuffer);

	}*/



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		m_pImmediateContext->ClearState();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		SDL_Delay(1000);

	//First we need to start up SDL, and make sure it went ok

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	enum KeyPressSurfaces

struct ConstantLightBuffer {

		//User presses a key



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}



{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	std::string error;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				// access to vertex

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

}
	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				indexlist.push_back(index);

	UINT offsets = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	float    farZ = 100.0f;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	delete[] pVList;

	m_pSwapChain->Present(0, 0);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	delete[] pIList;

		SDL_RenderClear(ren);

				tinyobj::real_t ty =

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.MinDepth = 0.0f;

	{



			default:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

 * Lesson 1: Hello World!

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//インデックスバッファ作成

		//User presses a key

	if (FAILED(hr))



			{

	{

	D3D11_BUFFER_DESC vbDesc;



	auto& attrib = reader.GetAttrib();

	D3D11_SAMPLER_DESC smpDesc;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pSwapChain = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	WORD* pIList = new WORD[icount];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pDepthStencilView = NULL;

	//vector<Vertex> vertex_t;

	//頂点バッファ作成

		return hr;

			case SDLK_DOWN:

		R"(cube.obj)");

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

		//User presses a key

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_LEFT,



	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	for (int i = 0; i < vcount; i++)



	delete[] pIList;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

};

	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		pIList[j] = indexList[j];

}

	};

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pSwapChain);



	cbDesc.MiscFlags = 0;

	std::string imagePath = "hello.bmp";

			case SDLK_UP:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pRenderTargetView = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

struct ConstantLight {

		return hr;

	//Key press surfaces constants

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.MiscFlags = 0;

	for (const auto& shape : shapes)

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.MipLevels = 1;

	cbDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	::GetClientRect(hwnd, &rect);

	return hr;

		KEY_PRESS_SURFACE_TOTAL

	reader_config.mtl_search_path = "./"; // Path to material files

		}

	std::string imagePath = "hello.bmp";

	XMFLOAT4X4 projection;

	CRect                rect;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)



	//頂点シェーダー生成





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SUBRESOURCE_DATA irData;



		&m_pDevice,



	txDesc.Width = rect.Width();



	if (!reader.Warning().empty())

	D3D11_SAMPLER_DESC smpDesc;

	{

	txDesc.SampleDesc.Quality = 0;

	vrData.SysMemSlicePitch = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	SAFE_RELEASE(m_pTexture);

	}



	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	dsDesc.Texture2D.MipSlice = 0;

				// access to vertex

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	m_IndexCount = icount;

			for (size_t v = 0; v < fv; v++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				tinyobj::real_t tx =

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.MaxDepth = 1.0f;

	return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	return;

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;





	if (!error.empty())

		&level,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	}

		cout << "SDL_INIT_ERROR" << endl;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	};

		KEY_PRESS_SURFACE_LEFT,

		KEY_PRESS_SURFACE_UP,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				break;

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		if (!ret)

	{

	vbDesc.CPUAccessFlags = 0;

			}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

		delete[] pIList;

	txDesc.ArraySize = 1;

	XMFLOAT4X4 view;

HRESULT CD3DTest::Create(HWND hwnd)

		//User requests quit

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//テクスチャ読み込み

	m_pTextureView = NULL;

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pDepthStencilView = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		D3D_DRIVER_TYPE_HARDWARE,

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_BUFFER_DESC ibDesc;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	for (int i = 0; i < vcount; i++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pSampler = NULL;

	HRESULT              hr;

	for (int i = 0; i < vcount; i++)

}

	DXGI_SWAP_CHAIN_DESC scDesc;

	WORD   icount = indexList.size();

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



#include <SDL.h>

}

	//テクスチャ読み込み

	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	scDesc.OutputWindow = hwnd;





				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <SDL.h>

	vbDesc.StructureByteStride = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	::GetClientRect(hwnd, &rect);

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

int main(int, char**)



	m_Viewport.Width = (FLOAT)rect.Width();

	pBackBuffer->Release();



	ConstantLightBuffer clb;

	m_IndexCount = icount;

	ConstantLight    pntLight; //点光源



	SDL_Quit();

	//vector<WORD> index_t;

	D3D11_TEXTURE2D_DESC txDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	float    farZ = 100.0f;

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.BufferDesc.Width = rect.Width();

	vector<WORD> indexList;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&m_pDevice,

		&m_pImmediateContext);

	return hr;

	m_pSwapChain = NULL;

	m_pTexture = NULL;

}

	return;

	WORD   icount = indexList.size();



	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	}

		return hr;

	//Clean up our objects and quit



		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		flags,

{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		{

	if (!error.empty())

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_BUFFER_DESC cbDesc;

	m_pDepthStencilTexture = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    farZ = 100.0f;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pMatrixBuffer = NULL;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{



	XMFLOAT4X4 world;

	m_VertexCount = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA irData;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

};

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	m_IndexCount = icount;

				indexlist.push_back(idx.vertex_index);

	delete[] pVList;



	//インデックスバッファ作成

	m_pMatrixBuffer = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pVertexShader = NULL;



	if (FAILED(hr))

		if (!ret)

		m_pImmediateContext->ClearState();

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	if (FAILED(hr))

	if (!reader.Warning().empty())



		NULL,

	txDesc.Height = rect.Height();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_TOTAL

				break;

			}

struct ConstantLightBuffer {

{

{



	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Viewport.MinDepth = 0.0f;

	auto& attrib = reader.GetAttrib();

}

	SAFE_RELEASE(m_pImmediateContext);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderPresent(ren);







		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			break;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	tinyobj::attrib_t attrib;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Release();

	delete[] pIList;

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (int j = 0; j < icount; j++)

}

	SAFE_RELEASE(m_pSampler);

		return 1;

		{



	if (!reader.ParseFromFile(inputfile, reader_config))



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





};

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				break;

{



			default:

		//User requests quit

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pImmediateContext);

			default:

			}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ty =

	m_pSwapChain->Present(0, 0);

		delete[] pVList;

	SDL_DestroyTexture(tex);

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 pos;               //座標(x,y,z)

	for (int i = 0; i < 3; i++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	bool ret = tinyobj::LoadObj(

	XMFLOAT4         eyePos;   //視点座標



	scDesc.SampleDesc.Count = 1;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.pSysMem = &pIList[0];



				break;

		}

	float    farZ = 100.0f;

/*

		delete[] pIList;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			{

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

	std::string inputfile = "test.obj";

		//User requests quit

	//ピクセルシェーダー生成

	m_pRenderTargetView = NULL;





	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))





struct ConstantLightBuffer {

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

			{

		cout << "SDL_INIT_ERROR" << endl;

			break;

};



		}

			case SDLK_UP:

	tinyobj::ObjReaderConfig reader_config;

				vertex.push_back(vertex_tmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		else if (e.type == SDL_KEYDOWN)

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.Height = (FLOAT)rect.Height();

	//vector<WORD> index_t;

	m_pTextureView = NULL;

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	//頂点シェーダー生成

	//頂点シェーダー生成

}



	while (SDL_PollEvent(&e) != 0)

		return hr;

		if (!reader.Error().empty())

	// Loop over shapes





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ID3D11Texture2D* pBackBuffer;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



				indexlist.push_back(index);

void CD3DTest::Render()

struct ConstantMaterial {

#define TINYOBJLOADER_IMPLEMENTATION

		flags,



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyWindow(win);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

		m_pImmediateContext->ClearState();

			//Select surfaces based on key press

				break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		if (e.type == SDL_QUIT)

	delete[] pIList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}*/

		pIList[j] = indexList[j];

				break;

		pLevels,



	std::string error;



	ibDesc.CPUAccessFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_FreeSurface(bmp);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	while (SDL_PollEvent(&e) != 0)

		R"(cube.obj)");



		}



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

	UINT strides = sizeof(Vertex);



	Release();

	if (FAILED(hr))

				// access to vertex

{



	if (FAILED(hr))





	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (!error.empty())

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4X4 world;

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	}

	SDL_DestroyWindow(win);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

		if (!reader.Error().empty())

{





	scDesc.BufferDesc.Width = rect.Width();

	SDL_FreeSurface(suf);

	//Clean up our objects and quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		1,

	dsDesc.Format = txDesc.Format;

				// access to vertex

	}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pInputLayout = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

		pVList[i] = vertexlist[i];



		{

	SAFE_RELEASE(m_pVertexShader);

			}

		{

	if (FAILED(hr))

			{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

		pIList[j] = indexList[j];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Count = 1;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Vertex* pVList = new Vertex[vcount];





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	m_IndexCount = icount;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	WORD* pIList = new WORD[icount];

			}

	m_pVertexBuffer = NULL;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.MiscFlags = 0;

}

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SDL_DestroyWindow(win);

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//vector<WORD> index_t;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;

	SAFE_RELEASE(m_pLightBuffer);

	std::string error;

	SDL_FreeSurface(bmp);

	m_VertexCount = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_Delay(1000);

	scDesc.BufferDesc.Width = rect.Width();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				break;

	//定数バッファ作成

	if (FAILED(hr))

	//頂点シェーダー生成

			break;





#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	while (SDL_PollEvent(&e) != 0)

	Release();



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	UINT flags = 0;

	//頂点シェーダー生成

		delete[] pIList;

	m_pDepthStencilView = NULL;

				indexlist.push_back(index);

		}

	for (const auto& shape : shapes)

	vrData.pSysMem = &pVList[0];

	};

	txDesc.Width = rect.Width();

	{





			//Select surfaces based on key press

	CRect                rect;

				break;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//vector<Vertex> vertex_t;

	ZeroMemory(&txDesc, sizeof(txDesc));

		SDL_RenderPresent(ren);

	float    nearZ = 0.1f;

	for (int i = 0; i < vcount; i++)



		SDL_Delay(1000);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_TOTAL

		}

	m_pDevice = NULL;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}



	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_RIGHT,

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_BUFFER_DESC ibDesc;



	cbDesc.StructureByteStride = 0;



	WORD* pIList = new WORD[icount];

	ConstantMatrixBuffer cmb;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	D3D11_BUFFER_DESC cbDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemPitch = 0;

				indexlist.push_back(idx.vertex_index);

		}





	SAFE_RELEASE(m_pRenderTargetView);

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;



	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pDevice = NULL;

		}

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	tinyobj::ObjReader reader;

				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_FreeSurface(bmp);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

#include <iostream>

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	// Loop over shapes

	D3D11_SAMPLER_DESC smpDesc;

/*



	return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vector<Vertex> vertexlist;

#ifdef _DEBUG

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	auto& materials = reader.GetMaterials();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string imagePath = "hello.bmp";

 * Lesson 1: Hello World!

 */

		&scDesc,

	scDesc.SampleDesc.Count = 1;

		flags,



		SDL_RenderClear(ren);

	UINT flags = 0;



	}

	cbDesc.CPUAccessFlags = 0;

		&materials,



		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pDevice);

	ConstantLight    pntLight; //点光源

		flags,



	}

	SDL_Quit();

	}

	m_pIndexBuffer = NULL;

		SDL_RenderClear(ren);

	vrData.SysMemPitch = 0;

	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vrData.pSysMem = &pVList[0];

	return hr;

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyRenderer(ren);

		if (!reader.Error().empty())





int main(int, char**)



	XMFLOAT4 pos;               //座標(x,y,z)



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





		return hr;

	SAFE_RELEASE(m_pInputLayout);

				WORD index = idx.vertex_index;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			case SDLK_RIGHT:

	D3D11_BUFFER_DESC vbDesc;

	std::string inputfile = "test.obj";

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.SampleDesc.Quality = 0;





	SDL_DestroyWindow(win);

	m_pVertexBuffer = NULL;

	SDL_DestroyRenderer(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

};

#endif

		D3D_DRIVER_TYPE_HARDWARE,

};

		}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	};

};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//Key press surfaces constants

	return hr;

			{



	D3D11_BUFFER_DESC vbDesc;

	// Loop over shapes

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pSampler);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			switch (e.key.keysym.sym)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			//Select surfaces based on key press

	cbDesc.CPUAccessFlags = 0;

	/*

	scDesc.OutputWindow = hwnd;

	XMFLOAT4         eyePos;   //視点座標

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

	UINT strides = sizeof(Vertex);

	m_pRenderTargetView = NULL;

	scDesc.Windowed = TRUE;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

 * Lesson 1: Hello World!



		return hr;



			case SDLK_RIGHT:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_pTextureView = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	SDL_FreeSurface(bmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	cbDesc.MiscFlags = 0;

	if (m_pImmediateContext)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		else if (e.type == SDL_KEYDOWN)



	std::string inputfile = "test.obj";

		}

	m_pTextureView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pIndexBuffer);

{

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.MiscFlags = 0;



	ibDesc.MiscFlags = 0;





	dsDesc.Texture2D.MipSlice = 0;

	for (int j = 0; j < icount; j++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Create Index

int SEGMENT = 36;

	txDesc.Height = rect.Height();

		return hr;



				break;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4         eyePos;   //視点座標



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

			{

{

	txDesc.SampleDesc.Quality = 0;



	SDL_DestroyTexture(tex);





		return hr;

	txDesc.SampleDesc.Count = 1;

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



				// access to vertex

};

};

	D3D11_TEXTURE2D_DESC txDesc;

	ConstantLight    pntLight; //点光源

	std::string error;

	D3D11_SUBRESOURCE_DATA irData;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				break;

	m_Viewport.TopLeftX = 0;

	m_pLightBuffer = NULL;

	vrData.SysMemSlicePitch = 0;



		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pTexture);

	DXGI_SWAP_CHAIN_DESC scDesc;




