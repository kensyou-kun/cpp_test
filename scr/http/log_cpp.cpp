				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	m_pImmediateContext = NULL;

				break;



	SAFE_RELEASE(m_pTextureView);

	//頂点レイアウト作成

			case SDLK_DOWN:



				break;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

struct ConstantMatrixBuffer {



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.SysMemPitch = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

			index_offset += num_vertices;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



/*

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&m_pDevice,

	cbDesc.CPUAccessFlags = 0;

	for (int j = 0; j < icount; j++)

#include <SDL.h>

	m_pRenderTargetView = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		// Loop over faces(polygon)

{

	SAFE_RELEASE(m_pVertexBuffer);





	m_pDepthStencilView = NULL;

		SDL_RenderPresent(ren);

	{





			{

		else if (e.type == SDL_KEYDOWN)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



#define TINYOBJLOADER_IMPLEMENTATION





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pRenderTargetView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				vertex.push_back(vertex_tmp);

	tinyobj::ObjReaderConfig reader_config;

	scDesc.BufferDesc.Width = rect.Width();

using std::cout; using std::endl;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	txDesc.MipLevels = 1;

		{



	m_pPixelShader = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pTextureView = NULL;

	auto& shapes = reader.GetShapes();

	Vertex* pVList = new Vertex[vcount];

		&scDesc,

	//Vertex* pVList = new Vertex[vcount];



{



	auto& attrib = reader.GetAttrib();

	vector<Vertex> vertexlist;

	}

	return 0;

};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	m_pRenderTargetView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

		&scDesc,

				break;

#define TINYOBJLOADER_IMPLEMENTATION

	for (int j = 0; j < icount; j++)

	DXGI_SWAP_CHAIN_DESC scDesc;

		&materials,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	std::vector<tinyobj::shape_t> shapes;

	D3D11_SAMPLER_DESC smpDesc;





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_SUBRESOURCE_DATA vrData;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

	vbDesc.MiscFlags = 0;



		return hr;



	m_pSwapChain->Present(0, 0);

		if (e.type == SDL_QUIT)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





		SDL_Delay(1000);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		delete[] pIList;

		NULL,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.MiscFlags = 0;



			switch (e.key.keysym.sym)

	XMFLOAT4 specular;          //反射(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//Key press surfaces constants

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	scDesc.SampleDesc.Count = 1;



	tinyobj::ObjReader reader;

	txDesc.Height = rect.Height();



	{



	m_IndexCount = 0;



	if (FAILED(hr))



	}

	return 0;

			// Loop over vertices in the face.

		&error,

		}

	SAFE_RELEASE(m_pVertexShader);

			break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

}

		KEY_PRESS_SURFACE_RIGHT,



	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	UINT strides = sizeof(Vertex);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	};





	{

	//深度ステンシルバッファ作成

	return 0;



	float    fov = XMConvertToRadians(20.0f);

			exit(1);

	{

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

		//User requests quit

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_SAMPLER_DESC smpDesc;



		m_pImmediateContext->ClearState();

		delete[] pVList;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pInputLayout);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.CPUAccessFlags = 0;

	return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	DXGI_SWAP_CHAIN_DESC scDesc;



				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::vector<tinyobj::material_t> materials;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.StructureByteStride = 0;

	float    farZ = 100.0f;





		return hr;

		// Loop over faces(polygon)





			case SDLK_RIGHT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	for (const auto& shape : shapes)

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pImmediateContext);

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	m_Angle += XMConvertToRadians(1.0f);

			exit(1);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pVertexShader = NULL;

				break;

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4X4 world;



	{

#endif

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.BufferDesc.Width = rect.Width();



	cbDesc.MiscFlags = 0;

	}

	//テクスチャ読み込み

	m_pImmediateContext = NULL;

	m_pMatrixBuffer = NULL;

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};

	ConstantLightBuffer clb;

	D3D11_SUBRESOURCE_DATA irData;

	//頂点バッファ作成

	txDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];



 */



	XMFLOAT4X4 world;

{

	}

{

		return hr;

	};

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			exit(1);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vector<WORD> indexList;



	m_VertexCount = 0;

{

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	delete[] pIList;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 projection;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		NULL,

	for (const auto& shape : shapes)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pMatrixBuffer = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				indexlist.push_back(idx.vertex_index);

	// Loop over shapes

	}

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	std::vector<tinyobj::shape_t> shapes;



	return 0;



		R"(cube.obj)");

		flags,

	if (FAILED(hr))

	//テクスチャ読み込み



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

void CD3DTest::Render()

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pInputLayout);

	delete[] pIList;



	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	if (FAILED(hr))



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vrData.SysMemSlicePitch = 0;









	flags |= D3D11_CREATE_DEVICE_DEBUG;

			index_offset += num_vertices;

		}

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_Delay(1000);

	SDL_DestroyRenderer(ren);

		return hr;

	LoadObj(vertexlist, indexList);

			case SDLK_UP:



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



}

				break;

			}

	auto& attrib = reader.GetAttrib();

		if (!ret)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t ty =

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SDL_Quit();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	{

				indexlist.push_back(index);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

CD3DTest::CD3DTest()



				// access to vertex



	m_pTexture = NULL;

				WORD index = idx.vertex_index;

	WORD* pIList = new WORD[icount];



#include <iostream>



}

	return 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

HRESULT CD3DTest::Create(HWND hwnd)





	SDL_FreeSurface(bmp);

	XMFLOAT4X4 projection;

		SDL_RenderClear(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

struct ConstantLight {

			}

	scDesc.BufferDesc.Width = rect.Width();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	tinyobj::attrib_t attrib;

	}

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&m_pImmediateContext);

	{

	// Loop over shapes

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pSwapChain = NULL;

int SEGMENT = 36;

	m_pSwapChain->Present(0, 0);

	float    nearZ = 0.1f;

			{

	cbDesc.CPUAccessFlags = 0;

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				WORD index = idx.vertex_index;

	WORD* pIList = new WORD[icount];

	irData.SysMemPitch = 0;



	{





	::GetClientRect(hwnd, &rect);

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC vbDesc;

		return hr;

		}

	tinyobj::ObjReader reader;

{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;

{

	if (FAILED(hr))



	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	irData.SysMemSlicePitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//Create Index

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	scDesc.Windowed = TRUE;



				break;



	reader_config.mtl_search_path = "./"; // Path to material files



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#include <iostream>

#endif



			case SDLK_DOWN:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				break;

				indexlist.push_back(idx.vertex_index);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyWindow(win);

		}

	dsDesc.Texture2D.MipSlice = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	m_pTextureView = NULL;

	txDesc.MiscFlags = 0;

	{

	m_pImmediateContext = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < num_vertices; v++)

	std::string inputfile = "test.obj";

	{

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vector<WORD> indexList;

		pIList[j] = indexList[j];

				vertex.push_back(vertex_tmp);



				// access to vertex

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

		exit(1);

struct ConstantLight {

	SDL_DestroyWindow(win);





	}

	ibDesc.CPUAccessFlags = 0;

	/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.SysMemSlicePitch = 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.ambient, lightAmbient);

			default:

		flags,

			case SDLK_RIGHT:

			break;

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

	vrData.pSysMem = &pVList[0];

	std::string imagePath = "hello.bmp";

	cbDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	for (const auto& shape : shapes)

	if (FAILED(hr))



	irData.SysMemPitch = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Clean up our objects and quit

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		}

		SDL_RenderClear(ren);

		return hr;

}

		return hr;

	};

		&materials,

			index_offset += num_vertices;

		return hr;

	m_Viewport.TopLeftX = 0;

	//Vertex* pVList = new Vertex[vcount];

	reader_config.mtl_search_path = "./"; // Path to material files

	{

		}

			}

	};

			case SDLK_RIGHT:

	//vector<Vertex> vertex_t;

	//vector<WORD> index_t;

	irData.SysMemSlicePitch = 0;

		if (!reader.Error().empty())

	int     vcount = vertexlist.size();

int main(int, char**)

	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_FreeSurface(bmp);

	auto& materials = reader.GetMaterials();

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	D3D11_SAMPLER_DESC smpDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



}

void CD3DTest::Render()

HRESULT CD3DTest::Create(HWND hwnd)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_DOWN:

	SAFE_RELEASE(m_pTextureView);

			case SDLK_UP:





		SDL_RenderPresent(ren);

	m_pInputLayout = NULL;

	{

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}



	}



		return hr;

		NULL,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4         eyePos;   //視点座標

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_BUFFER_DESC cbDesc;

		{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	txDesc.SampleDesc.Count = 1;

#include <iostream>

	m_pPixelShader = NULL;



	{



	{

	D3D11_SUBRESOURCE_DATA vrData;



		&m_pImmediateContext);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT flags = 0;

	delete[] pIList;

	//インデックスバッファ作成

struct ConstantLight {

	SAFE_RELEASE(m_pSwapChain);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	int     vcount = vertexlist.size();

		m_pImmediateContext->ClearState();

	//Clean up our objects and quit

	txDesc.Width = rect.Width();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	txDesc.ArraySize = 1;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	UINT flags = 0;

	{





	SAFE_RELEASE(m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return;

	if (FAILED(hr))

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		//User presses a key

			index_offset += fv;

	if (FAILED(hr))

#include "DirectXManager.h"



		// Loop over faces(polygon)



			index_offset += fv;

			switch (e.key.keysym.sym)

struct ConstantLightBuffer {

		return hr;

	SAFE_RELEASE(m_pVertexShader);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pVertexShader = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)



	}

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (!reader.ParseFromFile(inputfile, reader_config))



		{



		1,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	bool ret = tinyobj::LoadObj(



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

HRESULT CD3DTest::Create(HWND hwnd)



	m_pTextureView = NULL;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





	XMStoreFloat4(&clb.material.specular, materialSpecular);



	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_DEFAULT,

	//定数バッファ作成

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))



		return hr;

	ConstantLightBuffer clb;

	if (!error.empty())

		SDL_Delay(1000);

		{

	m_VertexCount = 0;

	bool ret = tinyobj::LoadObj(



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		pLevels,

				// access to vertex

{

	//Clean up our objects and quit

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	reader_config.mtl_search_path = "./"; // Path to material files



	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pImmediateContext);

struct ConstantMatrixBuffer {

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)







		else if (e.type == SDL_KEYDOWN)

 */

	m_pSampler = NULL;

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pDepthStencilView);

	int     vcount = vertexlist.size();

	//頂点バッファ作成

	if (FAILED(hr))

	HRESULT              hr;

	//First we need to start up SDL, and make sure it went ok



	//頂点バッファ作成



		cout << "SDL_INIT_ERROR" << endl;

	scDesc.OutputWindow = hwnd;

void CD3DTest::Render()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.SysMemSlicePitch = 0;

		{

		return hr;

		}



	SAFE_RELEASE(m_pVertexBuffer);

		{

};

	ID3D11Texture2D* pBackBuffer;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	int     vcount = vertexlist.size();

{

	SDL_DestroyTexture(tex);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		size_t index_offset = 0;  // インデントのオフセット

		&scDesc,



				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#endif

			default:

	//vector<WORD> index_t;

	m_pPixelShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	};

	if (FAILED(hr))



		{

	m_VertexCount = vcount;

	//Create Index

	m_IndexCount = icount;

	vector<WORD> indexList;

	{

	}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	irData.pSysMem = &pIList[0];

	for (size_t s = 0; s < shapes.size(); s++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

	if (!reader.Warning().empty())

		return hr;

			//Select surfaces based on key press

	m_pDevice = NULL;

{

	std::vector<tinyobj::material_t> materials;

	dsDesc.Format = txDesc.Format;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pTextureView);

	{

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4         eyePos;   //視点座標

	D3D11_BUFFER_DESC vbDesc;



	SAFE_RELEASE(m_pDepthStencilTexture);



	SDL_Event e;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_TEXTURE2D_DESC txDesc;



	vrData.SysMemPitch = 0;

	}



	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.CPUAccessFlags = 0;

/*

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

		&error,

			default:

		return hr;

	vrData.pSysMem = &pVList[0];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.MinDepth = 0.0f;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_DestroyRenderer(ren);

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = 0;

	{



	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

CD3DTest::~CD3DTest()

				break;

	SAFE_RELEASE(m_pDevice);

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	for (int j = 0; j < icount; j++)



	};



	SAFE_RELEASE(m_pIndexBuffer);

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}

{

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	return 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_IndexCount = 0;

	SDL_FreeSurface(suf);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    nearZ = 0.1f;

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

		}

	}







	cbDesc.MiscFlags = 0;

		return 1;





	return 0;

		//User requests quit

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	while (SDL_PollEvent(&e) != 0)



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::vector<tinyobj::shape_t> shapes;

	m_VertexCount = vcount;

	m_pDevice = NULL;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

using std::cout; using std::endl;

		pIList[j] = indexList[j];

		NULL,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		return hr;

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	// Loop over shapes

		return hr;



	m_pSampler = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantLight    pntLight; //点光源

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	if (m_pImmediateContext)





		SDL_RenderCopy(ren, tex, NULL, NULL);





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



{

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//vector<WORD> index_t;

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (int j = 0; j < icount; j++)

	scDesc.OutputWindow = hwnd;

	if (!error.empty())

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 pos;               //座標(x,y,z)

 * Lesson 1: Hello World!

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	D3D11_TEXTURE2D_DESC txDesc;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_Delay(1000);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pDevice);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.StructureByteStride = 0;

#ifdef _DEBUG

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		//User requests quit



		//User requests quit

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.Format = txDesc.Format;



{





	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		delete[] pIList;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_Viewport.Height = (FLOAT)rect.Height();

	WORD* pIList = new WORD[icount];

				vertex.push_back(vertex_tmp);

	delete[] pIList;

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pPixelShader);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float    farZ = 100.0f;

		}





	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pSwapChain);

	return hr;

		return hr;

	}

				WORD index = idx.vertex_index;

	SDL_FreeSurface(suf);

void CD3DTest::Render()

	XMFLOAT4 pos;               //座標(x,y,z)

	m_IndexCount = icount;

	txDesc.ArraySize = 1;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.StructureByteStride = 0;





	txDesc.MiscFlags = 0;





				indexlist.push_back(index);

				vertex.push_back(vertex_tmp);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

/*

	cbDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();



	}



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&m_pSwapChain,

		return hr;

				// access to vertex



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	irData.SysMemPitch = 0;

#include <SDL.h>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::~CD3DTest()

	{

	txDesc.MipLevels = 1;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))



	}

	if (!error.empty())

		&attrib,





			for (size_t v = 0; v < num_vertices; v++)

	SDL_DestroyWindow(win);

	};





			index_offset += fv;

	XMStoreFloat4(&clb.ambient, lightAmbient);

using std::cout; using std::endl;

	m_IndexCount = 0;

	Vertex* pVList = new Vertex[vcount];



	XMFLOAT4 ambient;           //環境(r,g,b)







	tinyobj::attrib_t attrib;

using std::cout; using std::endl;

};

		&m_pSwapChain,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

		{

	delete[] pVList;

	txDesc.Width = rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&shapes,

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



};

	}*/

		&error,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext = NULL;

#include "DirectXManager.h"



	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pIndexBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Key press surfaces constants

		return hr;

				break;

	{

				vertex.push_back(vertex_tmp);



	std::string imagePath = "hello.bmp";

	auto& shapes = reader.GetShapes();



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& shapes = reader.GetShapes();

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);

		{

	delete[] pVList;

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				vertex.push_back(vertex_tmp);

				indexlist.push_back(idx.vertex_index);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_IndexCount = 0;



			case SDLK_UP:

	m_Viewport.Width = (FLOAT)rect.Width();



struct ConstantLight {

		{

	for (const auto& shape : shapes)

		size_t index_offset = 0;  // インデントのオフセット

	m_pRenderTargetView = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_Delay(1000);



	D3D11_BUFFER_DESC cbDesc;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (const auto& shape : shapes)

	XMFLOAT4X4 projection;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.MaxDepth = 1.0f;

	WORD   icount = indexList.size();

	XMFLOAT4         eyePos;   //視点座標

	SDL_Quit();

	int     vcount = vertexlist.size();

	}

	SDL_FreeSurface(bmp);

		pVList[i] = vertexlist[i];

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.MipLevels = 1;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

			break;



	auto& materials = reader.GetMaterials();



	ibDesc.CPUAccessFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);



		KEY_PRESS_SURFACE_LEFT,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::string imagePath = "hello.bmp";

int SEGMENT = 36;

{

				tinyobj::real_t tx =



		// Loop over faces(polygon)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}



	irData.SysMemSlicePitch = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

}

};

		return hr;

	tinyobj::attrib_t attrib;

	cbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.MinDepth = 0.0f;



		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	return;

}

				break;

	SAFE_RELEASE(m_pVertexBuffer);

	//定数バッファ作成



	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vector<Vertex> vertexlist;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pDevice = NULL;

	{

	SAFE_RELEASE(m_pDevice);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pDepthStencilView = NULL;



		m_pImmediateContext->ClearState();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	tinyobj::attrib_t attrib;

	//Create Index

		return hr;

	SDL_DestroyRenderer(ren);





		&shapes,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_DOWN,

	{

	WORD* pIList = new WORD[icount];

		R"(cube.obj)");



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}

	irData.SysMemSlicePitch = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

		&attrib,

	while (SDL_PollEvent(&e) != 0)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	tinyobj::attrib_t attrib;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pImmediateContext);



	Release();

HRESULT CD3DTest::Create(HWND hwnd)

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				// access to vertex

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyRenderer(ren);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			}

	m_pLightBuffer = NULL;

				break;

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		m_pImmediateContext->ClearState();



	auto& shapes = reader.GetShapes();

	m_pSwapChain = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pTextureView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//vector<Vertex> vertex_t;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	Release();

		flags,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMStoreFloat4(&clb.eyePos, eye);

	{

CD3DTest::CD3DTest()





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	/*

		// Loop over faces(polygon)

	vrData.SysMemPitch = 0;

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pSampler);

		}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

/*

	/*

				break;

			index_offset += fv;

	m_pVertexBuffer = NULL;

CD3DTest::CD3DTest()

	dsDesc.Format = txDesc.Format;

		return hr;

	scDesc.BufferCount = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&level,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				// access to vertex

	ibDesc.StructureByteStride = 0;



	XMFLOAT4X4 world;

		&m_pImmediateContext);

	SDL_Event e;

using std::cout; using std::endl;

		m_pImmediateContext->ClearState();

	}

		flags,

};

			break;



	//頂点レイアウト作成

		return hr;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferCount = 1;

int SEGMENT = 36;

			{

	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantLight {

	tinyobj::ObjReaderConfig reader_config;

		if (e.type == SDL_QUIT)

	ConstantLightBuffer clb;



	SAFE_RELEASE(m_pSwapChain);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pDevice,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyTexture(tex);

	}

		SDL_RenderClear(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



#endif

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

		// Loop over faces(polygon)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	{



	}

		KEY_PRESS_SURFACE_LEFT,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	bool ret = tinyobj::LoadObj(

	std::string inputfile = "test.obj";

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	vbDesc.CPUAccessFlags = 0;



				break;

{

	bool ret = tinyobj::LoadObj(



				WORD index = idx.vertex_index;

	D3D_FEATURE_LEVEL level;

	DXGI_SWAP_CHAIN_DESC scDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	};

	//Key press surfaces constants

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&scDesc,

	XMFLOAT4X4 world;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

};



		}

		return hr;





int main(int, char**)

	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = vcount;



	cbDesc.StructureByteStride = 0;

	{

int SEGMENT = 36;

	//深度ステンシルバッファ作成

	m_Viewport.Width = (FLOAT)rect.Width();

	}

	m_pLightBuffer = NULL;

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

	if (!error.empty())





	SDL_FreeSurface(bmp);

	}



}



	return;

	}



#include <SDL.h>



	cbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);

	{

}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	/*



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_Angle += XMConvertToRadians(1.0f);



	}*/

	reader_config.mtl_search_path = "./"; // Path to material files

	Release();

	HRESULT              hr;

	enum KeyPressSurfaces

	ConstantLight    pntLight; //点光源

		&m_pDevice,

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&m_pDevice,

	SDL_FreeSurface(bmp);

	txDesc.Height = rect.Height();



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	D3D11_SUBRESOURCE_DATA irData;

	::GetClientRect(hwnd, &rect);



	irData.SysMemPitch = 0;

		SDL_RenderPresent(ren);

	float    nearZ = 0.1f;

		size_t index_offset = 0;

	scDesc.Windowed = TRUE;

	auto& materials = reader.GetMaterials();

	//Create Index

	auto& attrib = reader.GetAttrib();



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4X4 projection;

	txDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;

	WORD   icount = indexList.size();

	if (FAILED(hr))

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

struct ConstantLightBuffer {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	for (const auto& shape : shapes)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_Viewport.Height = (FLOAT)rect.Height();



	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			// Loop over vertices in the face.

			default:

	vrData.pSysMem = &pVList[0];



	XMFLOAT4X4 projection;

	if (FAILED(hr))

			}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





		//User presses a key

	if (!error.empty())

};

		{

	for (int j = 0; j < icount; j++)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



	{

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

	//インデックスバッファ作成

	txDesc.Width = rect.Width();

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	delete[] pVList;

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

			//Select surfaces based on key press

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

		return hr;



			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	for (size_t s = 0; s < shapes.size(); s++)

int main(int, char**)

				// access to vertex

	vrData.SysMemSlicePitch = 0;

	}*/

	/*

	//Create Index

		}

	vector<WORD> indexList;

		return hr;



	auto& attrib = reader.GetAttrib();

		NULL,

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferCount = 1;

	}

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

	m_Viewport.MaxDepth = 1.0f;

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pInputLayout = NULL;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		{

	m_Viewport.MinDepth = 0.0f;



	SDL_Quit();

				break;

	//深度ステンシルバッファ作成

	txDesc.MipLevels = 1;

	{

		// Loop over faces(polygon)

	delete[] pVList;

			break;

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))



	return;

	cbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += fv;

		KEY_PRESS_SURFACE_DEFAULT,

	};

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	auto& shapes = reader.GetShapes();



	::ZeroMemory(&scDesc, sizeof(scDesc));

			// Loop over vertices in the face.

	irData.SysMemPitch = 0;

	txDesc.MipLevels = 1;

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pPixelShader);

	float    fov = XMConvertToRadians(20.0f);

	while (SDL_PollEvent(&e) != 0)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SDL_DestroyWindow(win);

			{



		R"(cube.obj)");

	D3D_FEATURE_LEVEL level;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



};

			int num_vertices = shape.mesh.num_face_vertices[f];



	dsDesc.Format = txDesc.Format;







	pBackBuffer->Release();



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				indexlist.push_back(index);



				tinyobj::real_t tx =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

	SAFE_RELEASE(m_pSwapChain);



		pLevels,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	UINT offsets = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string error;

		SDL_RenderClear(ren);

	m_pPixelShader = NULL;

		}

	enum KeyPressSurfaces



		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	for (int i = 0; i < 3; i++)



}

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//深度ステンシルバッファ作成

{

		m_pImmediateContext->ClearState();

	m_Viewport.TopLeftY = 0;

				break;



	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()



	// Loop over shapes

}

	float    fov = XMConvertToRadians(20.0f);

	SDL_Quit();

}

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		NULL,

			index_offset += fv;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pTexture);

	txDesc.MiscFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pTexture);

	m_pSwapChain->Present(0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



	}



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pSampler = NULL;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4X4 view;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

	//Vertex* pVList = new Vertex[vcount];

		//User requests quit

};

	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pInputLayout = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	/*

	if (FAILED(hr))

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	D3D_FEATURE_LEVEL level;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vrData.pSysMem = &pVList[0];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.Height = rect.Height();

HRESULT CD3DTest::Create(HWND hwnd)

{



	m_pLightBuffer = NULL;



		return hr;

			for (size_t v = 0; v < fv; v++)

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (!error.empty())

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSampler = NULL;



				tinyobj::real_t tx =

	scDesc.SampleDesc.Quality = 0;

{

		}

		return hr;

	m_VertexCount = vcount;

	//ピクセルシェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return hr;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

			//Select surfaces based on key press

			}

	if (FAILED(hr))

		{

		else if (e.type == SDL_KEYDOWN)

	HRESULT              hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		flags,





	}

	{



				indexlist.push_back(index);

	}

	WORD   icount = indexList.size();

		D3D_DRIVER_TYPE_HARDWARE,



	//Clean up our objects and quit

		else if (e.type == SDL_KEYDOWN)





	m_pSampler = NULL;

	irData.SysMemPitch = 0;

			default:

				tinyobj::real_t ty =



	if (FAILED(hr))

		&attrib,



	}

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pPixelShader = NULL;





		//User requests quit

		m_pImmediateContext->ClearState();



	{

	SDL_DestroyRenderer(ren);

	{

	m_Viewport.TopLeftY = 0;

	{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	SAFE_RELEASE(m_pTextureView);





			{

	/*

				WORD index = idx.vertex_index;

	while (SDL_PollEvent(&e) != 0)



	{

	SAFE_RELEASE(m_pDepthStencilView);

	}

	vbDesc.MiscFlags = 0;

	vrData.SysMemPitch = 0;

	}*/

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	delete[] pVList;



	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pSampler);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	m_pPixelShader = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&attrib,

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	for (size_t s = 0; s < shapes.size(); s++)

	Vertex* pVList = new Vertex[vcount];



	m_Viewport.Width = (FLOAT)rect.Width();

		if (!ret)

				indexlist.push_back(idx.vertex_index);

			// Loop over vertices in the face.

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& attrib = reader.GetAttrib();



	ibDesc.StructureByteStride = 0;



	}

		NULL,

	if (!reader.Warning().empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&m_pImmediateContext);





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void CD3DTest::Render()

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx =

		return hr;



	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::string imagePath = "hello.bmp";

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&attrib,

				// access to vertex

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	XMFLOAT4         eyePos;   //視点座標

	cbDesc.MiscFlags = 0;

	if (m_pImmediateContext)

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&shapes,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		//User requests quit



			break;







				indexlist.push_back(idx.vertex_index);







	SAFE_RELEASE(m_pVertexShader);

	SDL_Event e;



	txDesc.SampleDesc.Count = 1;

		}



	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pDepthStencilView);

	}

	m_Viewport.TopLeftY = 0;





	std::vector<tinyobj::material_t> materials;

				WORD index = idx.vertex_index;

#include <iostream>



				indexlist.push_back(index);



	float    farZ = 100.0f;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&attrib,



	SDL_DestroyTexture(tex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.SampleDesc.Count = 1;

		return hr;

	scDesc.OutputWindow = hwnd;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&m_pDevice,

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))



		return 1;

#include "DirectXManager.h"

	}

	m_Viewport.TopLeftX = 0;

				// access to vertex

	auto& attrib = reader.GetAttrib();

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_DOWN,

	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		R"(cube.obj)");

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	m_pTexture = NULL;

	vbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

	//頂点レイアウト作成

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&level,

		R"(cube.obj)");

 * Lesson 1: Hello World!



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

/*



	auto& attrib = reader.GetAttrib();

	m_pTexture = NULL;

	// Loop over shapes



	return hr;



}



	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ConstantLight    pntLight; //点光源

				break;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pTexture);

	std::vector<tinyobj::shape_t> shapes;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			//Select surfaces based on key press

	//vector<WORD> index_t;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		}

	txDesc.ArraySize = 1;

	SDL_Quit();

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

CD3DTest::~CD3DTest()

				tinyobj::real_t tx =

	scDesc.SampleDesc.Quality = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



int SEGMENT = 36;

		&materials,

	while (SDL_PollEvent(&e) != 0)



	{

}
		flags,







	// Loop over shapes

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			exit(1);

		KEY_PRESS_SURFACE_TOTAL

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				break;





	SDL_DestroyTexture(tex);

	D3D11_BUFFER_DESC cbDesc;



	ibDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	ZeroMemory(&txDesc, sizeof(txDesc));



	for (int i = 0; i < vcount; i++)

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//First we need to start up SDL, and make sure it went ok





		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.eyePos, eye);

void CD3DTest::Release()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

				vertex.push_back(vertex_tmp);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	dsDesc.Format = txDesc.Format;

		//User presses a key



	enum KeyPressSurfaces

HRESULT CD3DTest::Create(HWND hwnd)

HRESULT CD3DTest::Create(HWND hwnd)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	tinyobj::ObjReader reader;

	float    nearZ = 0.1f;

	vrData.SysMemPitch = 0;

	ConstantMaterial material; //物体の質感

		else if (e.type == SDL_KEYDOWN)

			break;



			default:

	if (FAILED(hr))



	for (const auto& shape : shapes)

	m_VertexCount = vcount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	int     vcount = vertexlist.size();

		KEY_PRESS_SURFACE_LEFT,

{

			case SDLK_RIGHT:



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SDL_DestroyWindow(win);

	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pImmediateContext);



	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.StructureByteStride = 0;





int main(int, char**)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	}*/

	D3D11_BUFFER_DESC cbDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

struct ConstantMatrixBuffer {

	XMFLOAT4         eyePos;   //視点座標



	SAFE_RELEASE(m_pMatrixBuffer);

		&m_pSwapChain,



	m_pDevice = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





#include <iostream>

		SDL_RenderPresent(ren);





		return hr;

	//テクスチャ読み込み





	ibDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	CRect                rect;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.MiscFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	bool ret = tinyobj::LoadObj(

	{

	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		return hr;

	vbDesc.MiscFlags = 0;

		}

{

		{

	if (!reader.Warning().empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



};

			{

	if (FAILED(hr))



	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

void CD3DTest::Render()

	vbDesc.StructureByteStride = 0;

			//Select surfaces based on key press

	std::vector<tinyobj::shape_t> shapes;

			}

}

	SAFE_RELEASE(m_pDevice);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	pBackBuffer->Release();

	m_pTexture = NULL;









	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = D3D11CreateDeviceAndSwapChain(NULL,

			case SDLK_RIGHT:

	//定数バッファ作成

	std::string error;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t tx =

		}

		return hr;

	//First we need to start up SDL, and make sure it went ok

			//Select surfaces based on key press

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.SampleDesc.Quality = 0;

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4         eyePos;   //視点座標

		}

	//テクスチャ読み込み



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyTexture(tex);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);









		}

	SDL_Event e;

		&materials,

	//定数バッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_UP,

{

	};

	//Clean up our objects and quit

	ID3D11Texture2D* pBackBuffer;



			break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderClear(ren);

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.Windowed = TRUE;







	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	D3D11_TEXTURE2D_DESC txDesc;



	if (FAILED(hr))

		size_t index_offset = 0;

				tinyobj::real_t tx =

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

		{



		NULL,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pTextureView = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	//定数バッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.SampleDesc.Quality = 0;

	{

	if (FAILED(hr))

#include "DirectXManager.h"

	auto& attrib = reader.GetAttrib();



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <SDL.h>

	HRESULT              hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		&materials,



				tinyobj::real_t tx =

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_DEFAULT,

				break;

	scDesc.OutputWindow = hwnd;

	dsDesc.Format = txDesc.Format;

	m_pTexture = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.ArraySize = 1;

	m_pInputLayout = NULL;

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D_FEATURE_LEVEL level;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	SAFE_RELEASE(m_pTextureView);

	}

		KEY_PRESS_SURFACE_TOTAL



	{







		{

		}

	std::string imagePath = "hello.bmp";



	cbDesc.CPUAccessFlags = 0;

#include <SDL.h>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	txDesc.SampleDesc.Quality = 0;

			exit(1);

}



	m_pPixelShader = NULL;

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

		//User presses a key



		//User presses a key



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t tx =

		return 1;

			index_offset += fv;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		SDL_RenderPresent(ren);

		D3D11_SDK_VERSION,



		if (!ret)

	txDesc.Height = rect.Height();

	dsDesc.Format = txDesc.Format;

			}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	int     vcount = vertexlist.size();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	D3D11_TEXTURE2D_DESC txDesc;

{

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

		SDL_Delay(1000);

		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pSampler);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)



		KEY_PRESS_SURFACE_DOWN,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 pos;               //座標(x,y,z)

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t ty =

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Render()

	if (!reader.Warning().empty())



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ibDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

		}

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	if (!reader.Warning().empty())

	Vertex* pVList = new Vertex[vcount];

	while (SDL_PollEvent(&e) != 0)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_IndexCount = 0;

	vrData.pSysMem = &pVList[0];

	scDesc.OutputWindow = hwnd;

struct ConstantMaterial {



		SDL_RenderClear(ren);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			index_offset += fv;

	{

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;



	std::string inputfile = "test.obj";

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		cout << "SDL_INIT_ERROR" << endl;



	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);



}




	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	::GetClientRect(hwnd, &rect);



	m_pVertexShader = NULL;

		SDL_RenderClear(ren);

{

	tinyobj::attrib_t attrib;

		return hr;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pImmediateContext);



	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	if (FAILED(hr))



#endif

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_UP,

{

		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.StructureByteStride = 0;

 */

	tinyobj::attrib_t attrib;

	{

	ibDesc.CPUAccessFlags = 0;

	HRESULT              hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#include <SDL.h>

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	enum KeyPressSurfaces

			//Select surfaces based on key press

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	scDesc.SampleDesc.Count = 1;

void CD3DTest::Render()

		SDL_Delay(1000);

		return hr;

		SDL_RenderPresent(ren);

	XMFLOAT4 pos;               //座標(x,y,z)

			for (size_t v = 0; v < fv; v++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		//User requests quit

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

#define TINYOBJLOADER_IMPLEMENTATION



	scDesc.Windowed = TRUE;

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



			{

			switch (e.key.keysym.sym)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pRenderTargetView);

	}

			{

	//頂点シェーダー生成

				tinyobj::real_t ty =



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//Clean up our objects and quit



		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4X4 world;

	}



		KEY_PRESS_SURFACE_RIGHT,

	//深度ステンシルバッファ作成

	if (m_pImmediateContext)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.SampleDesc.Count = 1;

	SDL_DestroyWindow(win);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	return hr;

	m_pPixelShader = NULL;



	if (m_pImmediateContext)

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	return;

	}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

int SEGMENT = 36;



	m_pSwapChain->Present(0, 0);

	{

	m_VertexCount = 0;

	m_pSampler = NULL;

		pLevels,



	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	scDesc.BufferCount = 1;

	//Vertex* pVList = new Vertex[vcount];

/*

	return 0;

		&level,





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return 0;

};

		&error,

int main(int, char**)

	//定数バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D_FEATURE_LEVEL level;

		{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	cbDesc.CPUAccessFlags = 0;



void CD3DTest::Release()

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//テクスチャ読み込み





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Height = rect.Height();



	m_Viewport.TopLeftY = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				vertex.push_back(vertex_tmp);

	WORD* pIList = new WORD[icount];

		return hr;

	UINT strides = sizeof(Vertex);

	//Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	int     vcount = vertexlist.size();



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

	auto& attrib = reader.GetAttrib();

	HRESULT              hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	HRESULT              hr;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,



	cbDesc.CPUAccessFlags = 0;

		&m_pSwapChain,



	D3D11_TEXTURE2D_DESC txDesc;



	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		D3D11_SDK_VERSION,

	SDL_DestroyTexture(tex);

	dsDesc.Format = txDesc.Format;

		return hr;

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLight {

	SAFE_RELEASE(m_pPixelShader);

void CD3DTest::Release()



}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//First we need to start up SDL, and make sure it went ok

	delete[] pVList;

	m_IndexCount = icount;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	/*

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		&shapes,

			exit(1);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	};

	SAFE_RELEASE(m_pImmediateContext);

	return 0;

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		flags,

			case SDLK_RIGHT:



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.ambient, lightAmbient);







			for (size_t v = 0; v < fv; v++)

	ID3D11Texture2D* pBackBuffer;

	scDesc.Windowed = TRUE;



			case SDLK_UP:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_RIGHT,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.SampleDesc.Count = 1;

	D3D11_BUFFER_DESC cbDesc;

	};

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.Height = (FLOAT)rect.Height();



	ibDesc.MiscFlags = 0;

	{

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

		{

	txDesc.SampleDesc.Count = 1;

	{



	}*/

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	std::string imagePath = "hello.bmp";

	std::vector<tinyobj::material_t> materials;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	Release();





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	auto& materials = reader.GetMaterials();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pDevice);

	vrData.pSysMem = &pVList[0];

		//User requests quit



	SAFE_RELEASE(m_pMatrixBuffer);

	//インデックスバッファ作成

	D3D_FEATURE_LEVEL level;

	irData.SysMemSlicePitch = 0;

	::GetClientRect(hwnd, &rect);

	m_pSampler = NULL;



	m_VertexCount = 0;

CD3DTest::CD3DTest()

	::GetClientRect(hwnd, &rect);

	{

	D3D11_BUFFER_DESC cbDesc;

	}



	SDL_DestroyRenderer(ren);



	Release();

		1,

#include <iostream>

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::vector<tinyobj::material_t> materials;

	m_Viewport.MinDepth = 0.0f;



	Release();



	}

		&m_pImmediateContext);

	int     vcount = vertexlist.size();

	if (FAILED(hr))



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	return 0;

	auto& attrib = reader.GetAttrib();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

};

	if (FAILED(hr))



	float    fov = XMConvertToRadians(20.0f);

		}

	{

CD3DTest::CD3DTest()

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	for (const auto& shape : shapes)

	irData.SysMemPitch = 0;

#include "DirectXManager.h"

int SEGMENT = 36;

	txDesc.Height = rect.Height();



			case SDLK_UP:

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);



	m_pMatrixBuffer = NULL;

}

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ID3D11Texture2D* pBackBuffer;

			switch (e.key.keysym.sym)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vrData.pSysMem = &pVList[0];

	//Clean up our objects and quit

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pMatrixBuffer);

		if (!ret)

				WORD index = idx.vertex_index;

				break;

	};



	vector<WORD> indexList;

	SAFE_RELEASE(m_pTexture);

	m_pSwapChain = NULL;

}

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

			default:

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	for (int i = 0; i < 3; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



struct ConstantMatrixBuffer {

		SDL_RenderCopy(ren, tex, NULL, NULL);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//定数バッファ作成

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		exit(1);

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.MiscFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	CRect                rect;

	txDesc.CPUAccessFlags = 0;

	delete[] pIList;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pDepthStencilView);

	ConstantLight    pntLight; //点光源



	DXGI_SWAP_CHAIN_DESC scDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

CD3DTest::~CD3DTest()









			case SDLK_DOWN:

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		if (e.type == SDL_QUIT)

		&level,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			}

	ConstantMaterial material; //物体の質感



using std::cout; using std::endl;



		return hr;



}

	{

	WORD   icount = indexList.size();

			for (size_t v = 0; v < num_vertices; v++)



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

				vertex.push_back(vertex_tmp);





		pLevels,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)





	//ピクセルシェーダー生成

	m_pSwapChain->Present(0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				// access to vertex

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

	enum KeyPressSurfaces

	XMFLOAT4X4 world;



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ibDesc.CPUAccessFlags = 0;



		}

	cbDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

{

		{



	for (int i = 0; i < 3; i++)



		return 1;

		return hr;

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pVertexBuffer = NULL;

int SEGMENT = 36;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_pDevice = NULL;

}

		NULL,



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pMatrixBuffer = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Clean up our objects and quit

	m_Viewport.Height = (FLOAT)rect.Height();

		exit(1);



	//Key press surfaces constants

	SDL_DestroyRenderer(ren);

{



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	float    fov = XMConvertToRadians(20.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

}



#endif

	auto& attrib = reader.GetAttrib();

void CD3DTest::Render()

	m_pTexture = NULL;



	auto& shapes = reader.GetShapes();

				// access to vertex

	WORD* pIList = new WORD[icount];

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}

	scDesc.SampleDesc.Count = 1;



	SDL_FreeSurface(bmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pDevice,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.SampleDesc.Count = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

	//Clean up our objects and quit

	txDesc.Height = rect.Height();

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantLightBuffer {

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	m_Viewport.MinDepth = 0.0f;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

		&level,

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			}



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLightBuffer {

	//深度ステンシルバッファ作成

				vertex.push_back(vertex_tmp);

		return hr;



	std::string error;

	auto& attrib = reader.GetAttrib();

	float    farZ = 100.0f;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT offsets = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&scDesc,



	SDL_Quit();

	XMFLOAT4 specular;          //反射(r,g,b)

	return 0;

	auto& shapes = reader.GetShapes();







				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	auto& attrib = reader.GetAttrib();

		return hr;

	m_Angle += XMConvertToRadians(1.0f);





	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			}

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMFLOAT4 pos;               //座標(x,y,z)



	XMFLOAT4X4 view;

		m_pImmediateContext->ClearState();



	for (size_t s = 0; s < shapes.size(); s++)

	SDL_DestroyTexture(tex);

	SDL_DestroyTexture(tex);

		return hr;

	//インデックスバッファ作成

	ibDesc.MiscFlags = 0;



CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pDepthStencilView);

	ZeroMemory(&txDesc, sizeof(txDesc));



		pVList[i] = vertexlist[i];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

int main(int, char**)



};

	SDL_DestroyWindow(win);

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_DestroyRenderer(ren);



	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	m_VertexCount = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	LoadObj(vertexlist, indexList);

				break;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		//User presses a key

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;



		pLevels,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

CD3DTest::CD3DTest()

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		KEY_PRESS_SURFACE_UP,

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



			case SDLK_DOWN:

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	SDL_DestroyWindow(win);

}

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			//Select surfaces based on key press







	hr = D3D11CreateDeviceAndSwapChain(NULL,





	m_pSwapChain->Present(0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		NULL,

	float    nearZ = 0.1f;

	//Create Index



	{

			case SDLK_DOWN:



	ibDesc.StructureByteStride = 0;

	}

		exit(1);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

			index_offset += fv;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{



			{

		}

		&error,

	txDesc.Width = rect.Width();



		}

struct ConstantLight {



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (m_pImmediateContext)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_Viewport.MaxDepth = 1.0f;

	vector<Vertex> vertexlist;

/*

	}

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	Release();

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		pVList[i] = vertexlist[i];

		NULL,



	SAFE_RELEASE(m_pDepthStencilView);

	ConstantMaterial material; //物体の質感

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int j = 0; j < icount; j++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	DXGI_SWAP_CHAIN_DESC scDesc;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			// Loop over vertices in the face.

		{

	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))

		{

};



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	{





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSampler = NULL;

	return hr;

	std::vector<tinyobj::material_t> materials;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



			break;

	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files



	txDesc.MipLevels = 1;

	{

	SAFE_RELEASE(m_pRenderTargetView);

			}

	SDL_DestroyWindow(win);

	std::string inputfile = "test.obj";

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	{

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pLightBuffer);





		return hr;

	}

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pSampler);

	ZeroMemory(&txDesc, sizeof(txDesc));



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





		{

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;





	m_pVertexBuffer = NULL;



		&m_pDevice,

	return 0;

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	tinyobj::attrib_t attrib;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	return;

		KEY_PRESS_SURFACE_UP,

	for (const auto& shape : shapes)

	//Key press surfaces constants



	SAFE_RELEASE(m_pTextureView);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		//User presses a key

		R"(cube.obj)");

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Quit();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::string inputfile = "test.obj";

#include "DirectXManager.h"

#include <SDL.h>

	SDL_DestroyTexture(tex);

	cbDesc.MiscFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	XMFLOAT4 specular;          //反射(r,g,b)

			}

	std::string inputfile = "test.obj";





		return hr;

{

	vector<WORD> indexList;

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;



	//vector<Vertex> vertex_t;

			case SDLK_LEFT:

	if (FAILED(hr))

{



	{

	float    nearZ = 0.1f;

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



}

	SDL_DestroyRenderer(ren);

	{



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain->Present(0, 0);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!reader.ParseFromFile(inputfile, reader_config))

	irData.SysMemPitch = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.MiscFlags = 0;

	Release();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;



 */





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

		{

struct ConstantMatrixBuffer {

	//ピクセルシェーダー生成

	m_pInputLayout = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	Release();

	SDL_DestroyRenderer(ren);

		exit(1);

		{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		D3D_DRIVER_TYPE_HARDWARE,





	int     vcount = vertexlist.size();

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pSampler);

	vrData.SysMemSlicePitch = 0;



{

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



		{

		return hr;



		flags,



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferDesc.Height = rect.Height();

				break;

	m_pIndexBuffer = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pTextureView = NULL;

	vrData.SysMemSlicePitch = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.SampleDesc.Count = 1;

	txDesc.ArraySize = 1;



	{

	m_pLightBuffer = NULL;

	scDesc.OutputWindow = hwnd;



	::GetClientRect(hwnd, &rect);

			}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pPixelShader = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			exit(1);



	// Loop over shapes

		}

			exit(1);

#include <SDL.h>

		{

	CRect                rect;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC cbDesc;

	m_pTextureView = NULL;

	SDL_Quit();

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pPixelShader);

	//First we need to start up SDL, and make sure it went ok

		&m_pSwapChain,





			index_offset += num_vertices;



			case SDLK_DOWN:

		return hr;

				// access to vertex

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&scDesc,



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ConstantLight    pntLight; //点光源

	SDL_FreeSurface(bmp);

	}*/

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Width = rect.Width();

			index_offset += fv;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;

				break;

	m_IndexCount = icount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	DXGI_SWAP_CHAIN_DESC scDesc;

			case SDLK_LEFT:

	D3D11_BUFFER_DESC vbDesc;





	XMFLOAT4 specular;          //反射(r,g,b)



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);



	m_pVertexShader = NULL;

	auto& shapes = reader.GetShapes();

	tinyobj::attrib_t attrib;

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pDevice,

};

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return 1;

		return hr;



	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

{

	{

		return 1;

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC vbDesc;

	CRect                rect;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Angle += XMConvertToRadians(1.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			default:

};



		return hr;

		KEY_PRESS_SURFACE_TOTAL

 */

	SAFE_RELEASE(m_pPixelShader);

		SDL_RenderClear(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

		return hr;

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4         eyePos;   //視点座標

	}

	{

			}

		D3D_DRIVER_TYPE_HARDWARE,

	m_Viewport.TopLeftY = 0;

	txDesc.Width = rect.Width();

			exit(1);

	bool ret = tinyobj::LoadObj(

	scDesc.BufferDesc.Width = rect.Width();

	}

	//頂点バッファ作成

			index_offset += fv;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT strides = sizeof(Vertex);

	Vertex* pVList = new Vertex[vcount];

	D3D11_SUBRESOURCE_DATA irData;

	};

	if (FAILED(hr))



		SDL_RenderPresent(ren);

	D3D_FEATURE_LEVEL level;

		size_t index_offset = 0;





{





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(idx.vertex_index);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

				// access to vertex

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.CPUAccessFlags = 0;

	if (!error.empty())

		//User presses a key

	ConstantMaterial material; //物体の質感

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int i = 0; i < vcount; i++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			for (size_t v = 0; v < fv; v++)

	{

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))



	vrData.pSysMem = &pVList[0];

	//Key press surfaces constants

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	float    farZ = 100.0f;



 * Lesson 1: Hello World!



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			case SDLK_DOWN:

		exit(1);



	//vector<WORD> index_t;

	if (FAILED(hr))





{

	SAFE_RELEASE(m_pDepthStencilTexture);



	ibDesc.MiscFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	//インデックスバッファ作成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pVertexBuffer);

		&level,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&attrib,

	//vector<Vertex> vertex_t;

};

	XMFLOAT4 pos;               //座標(x,y,z)

	{

			exit(1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		delete[] pVList;

			{

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_DestroyTexture(tex);

CD3DTest::CD3DTest()



		return hr;





	{





			case SDLK_RIGHT:

{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	txDesc.Width = rect.Width();

int main(int, char**)

	m_pInputLayout = NULL;

	m_pMatrixBuffer = NULL;

	vbDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&attrib,



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)







	{



	//ピクセルシェーダー生成

			// Loop over vertices in the face.



};



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		&scDesc,





	{

	float    farZ = 100.0f;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		return hr;

	::GetClientRect(hwnd, &rect);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.Warning().empty())

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	ibDesc.StructureByteStride = 0;

	m_pTexture = NULL;

		//User requests quit

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

CD3DTest::CD3DTest()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			{



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;



	UINT offsets = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	auto& materials = reader.GetMaterials();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,



};

	m_Viewport.TopLeftY = 0;

			}

		if (!ret)

	tinyobj::attrib_t attrib;

}

	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.StructureByteStride = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	irData.SysMemSlicePitch = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

			case SDLK_DOWN:

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



			break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))



				vertex.push_back(vertex_tmp);

	SDL_Quit();

		return hr;

		1,

	//インデックスバッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (!error.empty())



	if (m_pImmediateContext)

		{

	return 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_VertexCount = vcount;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

		D3D11_SDK_VERSION,

	D3D_FEATURE_LEVEL level;

	vector<WORD> indexList;

int SEGMENT = 36;



				vertex.push_back(vertex_tmp);

	return 0;



		//User requests quit

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderPresent(ren);

	m_pInputLayout = NULL;



		{



	//定数バッファ作成

	cbDesc.StructureByteStride = 0;

	vbDesc.StructureByteStride = 0;

		return hr;

		if (!reader.Error().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;



	m_Viewport.TopLeftX = 0;

	vector<Vertex> vertexlist;

	{

				break;

	Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)





			int num_vertices = shape.mesh.num_face_vertices[f];

	m_IndexCount = icount;

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];







	XMFLOAT4X4 projection;

	m_IndexCount = 0;



		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

void CD3DTest::Render()

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	pBackBuffer->Release();

		KEY_PRESS_SURFACE_LEFT,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	};

	XMFLOAT4X4 projection;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		1,

		R"(cube.obj)");

		return hr;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferDesc.Width = rect.Width();

			// Loop over vertices in the face.

		}

		SDL_Delay(1000);

	//Key press surfaces constants

			int num_vertices = shape.mesh.num_face_vertices[f];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

			index_offset += fv;

}



	scDesc.SampleDesc.Count = 1;

	m_pDevice = NULL;

	cbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);



	{

	SAFE_RELEASE(m_pIndexBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

	UINT flags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.SampleDesc.Count = 1;

	//定数バッファ作成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				WORD index = idx.vertex_index;

	ibDesc.MiscFlags = 0;

		return hr;

		}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Clean up our objects and quit



				// access to vertex

				// access to vertex



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				indexlist.push_back(index);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



{

	{

				tinyobj::real_t ty =



/*

	SAFE_RELEASE(m_pTexture);

	}

		if (e.type == SDL_QUIT)

				vertex.push_back(vertex_tmp);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#endif



	m_pSampler = NULL;

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_LEFT,



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;



	}*/

	SAFE_RELEASE(m_pTexture);



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	CRect                rect;

	//Key press surfaces constants

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	// Loop over shapes

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





		}





		SDL_Delay(1000);

	{

		return hr;



	};

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Quit();

	{

	ConstantLightBuffer clb;

	m_pImmediateContext = NULL;



	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pTextureView);

	//First we need to start up SDL, and make sure it went ok

	SDL_FreeSurface(bmp);



	txDesc.ArraySize = 1;

	txDesc.ArraySize = 1;

	XMFLOAT4X4 world;

	txDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL level;



			index_offset += fv;

	float    fov = XMConvertToRadians(20.0f);

	//ビューポート設定

}

	ConstantLightBuffer clb;

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.Windowed = TRUE;



		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.TopLeftY = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderPresent(ren);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			index_offset += num_vertices;

	{

		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	for (const auto& shape : shapes)

	LoadObj(vertexlist, indexList);

	scDesc.Windowed = TRUE;

/*

	//頂点バッファ作成

 */

	m_pDepthStencilTexture = NULL;

		return hr;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		m_pImmediateContext->ClearState();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	dsDesc.Format = txDesc.Format;



		if (e.type == SDL_QUIT)

		1,

			case SDLK_DOWN:

	Vertex* pVList = new Vertex[vcount];

	if (!error.empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	HRESULT              hr;

	//頂点レイアウト作成

};

	cbDesc.MiscFlags = 0;

			case SDLK_DOWN:

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include "DirectXManager.h"





	m_IndexCount = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				break;

	m_pTextureView = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	pBackBuffer->Release();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	pBackBuffer->Release();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ConstantLightBuffer clb;



	ibDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	auto& materials = reader.GetMaterials();

	m_pMatrixBuffer = NULL;



HRESULT CD3DTest::Create(HWND hwnd)

	vrData.SysMemPitch = 0;

	SDL_DestroyWindow(win);

				// access to vertex

	return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pTexture = NULL;

	int     vcount = vertexlist.size();

	m_pRenderTargetView = NULL;

		}

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	};

	ibDesc.MiscFlags = 0;



		}

struct ConstantMaterial {

	if (FAILED(hr))

	m_pSwapChain = NULL;

	SDL_Event e;



	if (FAILED(hr))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			index_offset += fv;

}

{



}



		{

int SEGMENT = 36;

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//頂点シェーダー生成

	//vector<WORD> index_t;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		m_pImmediateContext->ClearState();

	{

	scDesc.SampleDesc.Count = 1;

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Key press surfaces constants



	{

	ibDesc.StructureByteStride = 0;

		}

	std::vector<tinyobj::shape_t> shapes;

			{

{

}



		&materials,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	}*/

		SDL_Delay(1000);

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

			{



	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pIndexBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	ibDesc.MiscFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);







				break;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		}



		pLevels,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_SUBRESOURCE_DATA vrData;

	//ビューポート設定

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		}



	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	ZeroMemory(&txDesc, sizeof(txDesc));

		}



	scDesc.SampleDesc.Count = 1;

			}

	XMFLOAT4 pos;               //座標(x,y,z)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

HRESULT CD3DTest::Create(HWND hwnd)



	//Create Index

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	//頂点シェーダー生成

	vbDesc.MiscFlags = 0;

	{

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

	m_VertexCount = vcount;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

/*

		{

	tinyobj::attrib_t attrib;

			for (size_t v = 0; v < num_vertices; v++)



				break;

				indexlist.push_back(index);

	Release();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pIndexBuffer = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		return hr;

	//ピクセルシェーダー生成

	txDesc.Height = rect.Height();

	if (FAILED(hr))

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

struct ConstantLight {

		R"(cube.obj)");

	m_IndexCount = icount;



	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//vector<WORD> index_t;

	m_pIndexBuffer = NULL;

	}

	m_VertexCount = vcount;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::vector<tinyobj::shape_t> shapes;

		{

	delete[] pVList;



		SDL_RenderPresent(ren);



	//vector<WORD> index_t;

struct ConstantMatrixBuffer {

		&shapes,



	m_pInputLayout = NULL;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_LEFT,

	//ビューポート設定

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		if (!ret)

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.SampleDesc.Count = 1;

				indexlist.push_back(index);

				tinyobj::real_t ty =

	}

		SDL_RenderPresent(ren);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	CRect                rect;

#ifdef _DEBUG

		&m_pImmediateContext);



		NULL,



{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

{

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



			//Select surfaces based on key press





	txDesc.MipLevels = 1;

	SDL_Quit();

	m_pInputLayout = NULL;

	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_DOWN,

	m_Viewport.Width = (FLOAT)rect.Width();

	LoadObj(vertexlist, indexList);

	SDL_DestroyRenderer(ren);

}

	m_IndexCount = icount;

	SAFE_RELEASE(m_pIndexBuffer);

		&scDesc,

	if (!reader.ParseFromFile(inputfile, reader_config))







			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 projection;

		return hr;

	vrData.pSysMem = &pVList[0];





			}



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	std::string inputfile = "test.obj";

	XMFLOAT4 ambient;           //環境(r,g,b)

		&shapes,

	SDL_DestroyWindow(win);

int main(int, char**)

			break;



		&level,

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

	if (!error.empty())

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");







	::ZeroMemory(&scDesc, sizeof(scDesc));



	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

struct ConstantMaterial {



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.StructureByteStride = 0;

	{

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

	m_IndexCount = icount;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		size_t index_offset = 0;  // インデントのオフセット





	}



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				indexlist.push_back(idx.vertex_index);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				break;

	}

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.StructureByteStride = 0;

	{

		}

	m_pVertexBuffer = NULL;

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	}

		D3D11_SDK_VERSION,



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t ty =



				break;

	//頂点レイアウト作成



}

	if (FAILED(hr))

			{



	ConstantLightBuffer clb;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		}

	XMStoreFloat4(&clb.eyePos, eye);

	float    fov = XMConvertToRadians(20.0f);

	vector<Vertex> vertexlist;

};

	SAFE_RELEASE(m_pImmediateContext);







	ConstantMaterial material; //物体の質感

	//ビューポート設定

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&attrib,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	ZeroMemory(&dsDesc, sizeof(dsDesc));



 * Lesson 1: Hello World!



	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

HRESULT CD3DTest::Create(HWND hwnd)

}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pSwapChain->Present(0, 0);

	m_pTextureView = NULL;

			{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

			//Select surfaces based on key press

	{

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	delete[] pVList;

	XMStoreFloat4(&clb.ambient, lightAmbient);





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	//ビューポート設定

	m_IndexCount = icount;

	if (FAILED(hr))

};

	{

	m_Angle += XMConvertToRadians(1.0f);







		{

				indexlist.push_back(idx.vertex_index);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&materials,

	irData.SysMemPitch = 0;

	ConstantMatrixBuffer cmb;

	//定数バッファ作成

	ConstantMaterial material; //物体の質感

	m_VertexCount = 0;

	m_pSwapChain = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferCount = 1;

{



		flags,

#ifdef _DEBUG

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

};







					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vrData.SysMemPitch = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (size_t s = 0; s < shapes.size(); s++)

{





				tinyobj::real_t ty =

	ibDesc.CPUAccessFlags = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vector<Vertex> vertexlist;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			case SDLK_UP:

	return hr;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!error.empty())

		{

	D3D11_SAMPLER_DESC smpDesc;

			//Select surfaces based on key press



	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.TopLeftY = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

 */



		R"(cube.obj)");

	if (!error.empty())

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();





{

	SDL_DestroyTexture(tex);

	tinyobj::attrib_t attrib;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	m_pDevice = NULL;



}

	reader_config.mtl_search_path = "./"; // Path to material files

	//頂点バッファ作成

		KEY_PRESS_SURFACE_TOTAL

				WORD index = idx.vertex_index;

	delete[] pIList;

	D3D11_BUFFER_DESC vbDesc;

		&m_pDevice,



	}

	scDesc.SampleDesc.Count = 1;

	SDL_Quit();



	if (m_pImmediateContext)

		return hr;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	}*/

		{

	reader_config.mtl_search_path = "./"; // Path to material files

		KEY_PRESS_SURFACE_DEFAULT,



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    farZ = 100.0f;



		&materials,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		}

	//頂点レイアウト作成

				vertex.push_back(vertex_tmp);



{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	{

	m_pLightBuffer = NULL;

			index_offset += fv;

	//頂点レイアウト作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)



		}

	auto& materials = reader.GetMaterials();



	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

void CD3DTest::Render()

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





}
	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT offsets = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

};

	//定数バッファ作成



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		//User presses a key



	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	dsDesc.Format = txDesc.Format;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pVertexShader = NULL;

};

				indexlist.push_back(index);

	LoadObj(vertexlist, indexList);

				break;

	SDL_DestroyRenderer(ren);



			switch (e.key.keysym.sym)

	cbDesc.StructureByteStride = 0;

		{

	scDesc.SampleDesc.Count = 1;

				indexlist.push_back(index);

	m_Viewport.TopLeftX = 0;

	if (!error.empty())

	}







		pIList[j] = indexList[j];

	m_pSwapChain->Present(0, 0);

	m_IndexCount = icount;

			int num_vertices = shape.mesh.num_face_vertices[f];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (m_pImmediateContext)

			}

	D3D11_SUBRESOURCE_DATA vrData;

				break;

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	::GetClientRect(hwnd, &rect);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	m_pSwapChain->Present(0, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

		}



	//Create Index

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

	//頂点バッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	if (FAILED(hr))

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SAFE_RELEASE(m_pPixelShader);

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	//Create Index

				break;

	scDesc.BufferCount = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		size_t index_offset = 0;  // インデントのオフセット

	m_pTexture = NULL;

	//深度ステンシルバッファ作成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	{

		{



		if (e.type == SDL_QUIT)

	tinyobj::ObjReaderConfig reader_config;

	m_pSwapChain->Present(0, 0);

	m_pSwapChain->Present(0, 0);



	SDL_Event e;

	ibDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#define TINYOBJLOADER_IMPLEMENTATION



	txDesc.SampleDesc.Count = 1;

	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilView = NULL;



{

	//深度ステンシルバッファ作成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	std::vector<tinyobj::shape_t> shapes;

	m_pTexture = NULL;

#define TINYOBJLOADER_IMPLEMENTATION



	}

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



#define TINYOBJLOADER_IMPLEMENTATION

		size_t index_offset = 0;  // インデントのオフセット

	m_VertexCount = vcount;

		delete[] pVList;

CD3DTest::CD3DTest()

	delete[] pIList;

	m_Viewport.TopLeftY = 0;

	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_DOWN,



	for (int j = 0; j < icount; j++)



};

		delete[] pVList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Width = rect.Width();



	XMFLOAT4X4 projection;

	auto& materials = reader.GetMaterials();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				WORD index = idx.vertex_index;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	auto& shapes = reader.GetShapes();

	for (const auto& shape : shapes)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//定数バッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	Release();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantLightBuffer clb;

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

#include "DirectXManager.h"



	{

				vertex.push_back(vertex_tmp);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	if (FAILED(hr))

		SDL_Delay(1000);

	txDesc.SampleDesc.Quality = 0;

	};



		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (int i = 0; i < vcount; i++)

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

				break;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.CPUAccessFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.MiscFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				tinyobj::real_t ty =

#endif

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;



int main(int, char**)

	//頂点レイアウト作成

	txDesc.Width = rect.Width();

				tinyobj::real_t ty =

	UINT offsets = 0;

#include <iostream>

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return 1;

	return 0;





		delete[] pIList;

			}

			index_offset += fv;

	XMFLOAT4X4 world;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.TopLeftY = 0;

/*

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D_FEATURE_LEVEL level;

		1,

	//ビューポート設定

	D3D11_TEXTURE2D_DESC txDesc;

	//頂点シェーダー生成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		}



#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		1,

	SDL_Quit();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		// Loop over faces(polygon)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_DestroyTexture(tex);

	m_Viewport.MaxDepth = 1.0f;

			index_offset += fv;

	D3D11_BUFFER_DESC vbDesc;

	txDesc.Height = rect.Height();

	auto& materials = reader.GetMaterials();

	return 0;







			case SDLK_LEFT:



	//深度ステンシルバッファ作成

	irData.SysMemPitch = 0;



		m_pImmediateContext->ClearState();

	m_pDevice = NULL;

	if (!reader.Warning().empty())

		&level,

		return hr;

	XMFLOAT4X4 projection;

/*

	scDesc.Windowed = TRUE;



	m_Angle += XMConvertToRadians(1.0f);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (const auto& shape : shapes)

	std::string inputfile = "test.obj";

	tinyobj::ObjReader reader;


