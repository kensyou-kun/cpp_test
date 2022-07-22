	//頂点バッファ作成

	auto& materials = reader.GetMaterials();



	SDL_DestroyRenderer(ren);

	SDL_DestroyRenderer(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//ピクセルシェーダー生成

	vbDesc.CPUAccessFlags = 0;

	std::string inputfile = "test.obj";



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pPixelShader);

		&attrib,

#include <iostream>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pDepthStencilTexture = NULL;





	D3D11_SUBRESOURCE_DATA vrData;

	//Key press surfaces constants

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pVertexBuffer);

CD3DTest::CD3DTest()

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	//Clean up our objects and quit

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.SysMemSlicePitch = 0;

		return 1;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!error.empty())

	txDesc.SampleDesc.Quality = 0;



	return hr;

	scDesc.BufferDesc.Width = rect.Width();

	vbDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

	SDL_Event e;



	}

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.Warning().empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_FreeSurface(bmp);



	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::vector<tinyobj::shape_t> shapes;

		m_pImmediateContext->ClearState();

	if (m_pImmediateContext)

	{

		{

	if (FAILED(hr))

		return hr;

	irData.SysMemSlicePitch = 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//頂点レイアウト作成

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

{

	ID3D11Texture2D* pBackBuffer;

	delete[] pVList;

			//Select surfaces based on key press

	//ビューポート設定

		{

	m_pPixelShader = NULL;

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	scDesc.SampleDesc.Quality = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyRenderer(ren);

	vrData.SysMemPitch = 0;

	if (FAILED(hr))



		SDL_Delay(1000);

};

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_FreeSurface(bmp);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	//頂点シェーダー生成

			{



	ConstantLightBuffer clb;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//ピクセルシェーダー生成

	irData.pSysMem = &pIList[0];





			index_offset += fv;

	D3D11_SUBRESOURCE_DATA vrData;

CD3DTest::~CD3DTest()

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pSwapChain = NULL;



		//User requests quit

		size_t index_offset = 0;



	//ビューポート設定

	scDesc.OutputWindow = hwnd;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	D3D11_BUFFER_DESC ibDesc;

}

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Render()





			{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& attrib = reader.GetAttrib();

		//User presses a key



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	txDesc.ArraySize = 1;

int SEGMENT = 36;

	return 0;

			default:

	//ピクセルシェーダー生成

	SDL_DestroyTexture(tex);

	delete[] pVList;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	if (FAILED(hr))

	}

	m_pLightBuffer = NULL;



	XMFLOAT4 pos;               //座標(x,y,z)



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_LEFT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	m_pLightBuffer = NULL;

	while (SDL_PollEvent(&e) != 0)

		&scDesc,

				// access to vertex

	// Loop over shapes

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

				indexlist.push_back(index);

	{



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::attrib_t attrib;

		SDL_Delay(1000);

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pInputLayout);

	m_pTextureView = NULL;

	m_Viewport.TopLeftY = 0;

	vector<WORD> indexList;

				break;

	std::string error;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	UINT strides = sizeof(Vertex);





	m_Viewport.Height = (FLOAT)rect.Height();



	cbDesc.CPUAccessFlags = 0;

	{





}
#define TINYOBJLOADER_IMPLEMENTATION

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			for (size_t v = 0; v < num_vertices; v++)

	m_pPixelShader = NULL;

};

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

{

	float    farZ = 100.0f;

	SDL_FreeSurface(bmp);

	//深度ステンシルバッファ作成

	{



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.ArraySize = 1;

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

};

		&shapes,

};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}

			}

/*

CD3DTest::~CD3DTest()

	//インデックスバッファ作成

	UINT offsets = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

struct ConstantLight {

	//頂点バッファ作成

			case SDLK_RIGHT:

	irData.SysMemSlicePitch = 0;



	//ビューポート設定

			default:

		delete[] pVList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		D3D_DRIVER_TYPE_HARDWARE,

	{

	return hr;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{



	//Clean up our objects and quit

		return hr;

	bool ret = tinyobj::LoadObj(

			switch (e.key.keysym.sym)

}



	XMFLOAT4 pos;               //座標(x,y,z)

	m_pDepthStencilTexture = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}



	irData.SysMemPitch = 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4X4 view;

	m_IndexCount = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

}





	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>

	SDL_DestroyWindow(win);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		delete[] pVList;

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);



}
		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	return 0;

	m_VertexCount = vcount;

		return hr;





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

		}

	{



	txDesc.ArraySize = 1;

	};

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	return 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);

	{

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	LoadObj(vertexlist, indexList);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&m_pSwapChain,

		if (!ret)



	//深度ステンシルバッファ作成

		{

};

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

		&error,

		size_t index_offset = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;



	m_VertexCount = 0;

	scDesc.BufferDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	pBackBuffer->Release();



		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pImmediateContext);

	//定数バッファ作成

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		}



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMFLOAT4 pos;               //座標(x,y,z)

		}





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	pBackBuffer->Release();

	}

	ConstantLightBuffer clb;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	if (!reader.ParseFromFile(inputfile, reader_config))

{

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_Viewport.TopLeftX = 0;

				indexlist.push_back(index);

	{



	return;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		//User requests quit

		SDL_Delay(1000);

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&shapes,



	{

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vrData.pSysMem = &pVList[0];

	}

	m_pDevice = NULL;

}
	txDesc.Height = rect.Height();

		{

	cbDesc.StructureByteStride = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	}

	UINT strides = sizeof(Vertex);

	txDesc.MipLevels = 1;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (m_pImmediateContext)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	tinyobj::attrib_t attrib;

	scDesc.SampleDesc.Count = 1;

	float    fov = XMConvertToRadians(20.0f);

				break;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		R"(cube.obj)");

	delete[] pIList;

	m_IndexCount = 0;

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





			case SDLK_UP:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.SysMemPitch = 0;

	{

	}



	}

		NULL,

	m_pTextureView = NULL;

	txDesc.SampleDesc.Quality = 0;

	//ピクセルシェーダー生成

	//ビューポート設定

		{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

};



	SAFE_RELEASE(m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		}

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Angle += XMConvertToRadians(1.0f);

	/*

		m_pImmediateContext->ClearState();

{



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.BufferDesc.Height = rect.Height();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_FreeSurface(bmp);

	m_pIndexBuffer = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



struct ConstantLightBuffer {

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SDL_DestroyWindow(win);

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	std::string error;

	ConstantLightBuffer clb;





		KEY_PRESS_SURFACE_TOTAL

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	UINT strides = sizeof(Vertex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	vector<Vertex> vertexlist;

		NULL,

	SAFE_RELEASE(m_pImmediateContext);



		if (e.type == SDL_QUIT)

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_DestroyWindow(win);

	txDesc.Height = rect.Height();

	txDesc.Height = rect.Height();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			{

};

	SAFE_RELEASE(m_pSwapChain);

		KEY_PRESS_SURFACE_UP,



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				indexlist.push_back(index);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	return;

	m_pSwapChain->Present(0, 0);

};

 * Lesson 1: Hello World!

		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	XMFLOAT4X4 projection;

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		pLevels,

			exit(1);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

	SDL_FreeSurface(suf);

		else if (e.type == SDL_KEYDOWN)

{

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.SampleDesc.Count = 1;

	//頂点レイアウト作成





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferCount = 1;

#include <iostream>

	{

	m_pTexture = NULL;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	vrData.SysMemPitch = 0;



	{

		delete[] pVList;

	return 0;

	m_IndexCount = 0;

	}

		&scDesc,

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pIndexBuffer);

		if (!ret)



	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Quit();

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;



	for (int i = 0; i < 3; i++)







		{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		}

};

		&m_pSwapChain,



	vector<WORD> indexList;



	{



	ConstantLightBuffer clb;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.MinDepth = 0.0f;

	return 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//Vertex* pVList = new Vertex[vcount];

			{

	//Key press surfaces constants

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         eyePos;   //視点座標

	{



		R"(cube.obj)");

#include <iostream>

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

}

		SDL_Delay(1000);



		// Loop over faces(polygon)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		if (!reader.Error().empty())

		delete[] pIList;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	for (int i = 0; i < vcount; i++)

	//定数バッファ作成



	{

	SAFE_RELEASE(m_pVertexShader);

	{



	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

			//Select surfaces based on key press

		flags,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	auto& shapes = reader.GetShapes();



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{





				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())



	}





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

}

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		&level,

		KEY_PRESS_SURFACE_DEFAULT,

				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

	{

	XMStoreFloat4(&clb.eyePos, eye);

{

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderPresent(ren);

	//ビューポート設定

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

{



	cbDesc.CPUAccessFlags = 0;

{

	return 0;





	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.MiscFlags = 0;

		return hr;

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	delete[] pIList;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pSwapChain->Present(0, 0);

{

				indexlist.push_back(idx.vertex_index);

		NULL,

	D3D11_TEXTURE2D_DESC txDesc;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

CD3DTest::CD3DTest()



	std::vector<tinyobj::material_t> materials;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.MiscFlags = 0;

	}

		&scDesc,



	SAFE_RELEASE(m_pTexture);

		//User requests quit

	txDesc.SampleDesc.Quality = 0;



	//テクスチャ読み込み

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.MiscFlags = 0;

{

	//Vertex* pVList = new Vertex[vcount];

	txDesc.Width = rect.Width();



	txDesc.CPUAccessFlags = 0;

		{

	D3D11_TEXTURE2D_DESC txDesc;

			case SDLK_UP:

		return hr;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	return;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderPresent(ren);

#include <iostream>

	m_Viewport.Height = (FLOAT)rect.Height();





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.BufferDesc.Height = rect.Height();

		return 1;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

CD3DTest::CD3DTest()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

			index_offset += num_vertices;

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;



				vertex.push_back(vertex_tmp);





		pIList[j] = indexList[j];

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			default:

		&level,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)



		SDL_RenderCopy(ren, tex, NULL, NULL);



				break;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

 */

			case SDLK_RIGHT:

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	CRect                rect;

	XMFLOAT4X4 projection;

	vector<WORD> indexList;

	HRESULT              hr;

	SAFE_RELEASE(m_pImmediateContext);





			break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))



	SAFE_RELEASE(m_pRenderTargetView);

}

		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_SAMPLER_DESC smpDesc;

	return 0;

	//定数バッファ作成

	enum KeyPressSurfaces

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				WORD index = idx.vertex_index;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pVertexBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pDevice,

			index_offset += num_vertices;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_DOWN:

	m_pTextureView = NULL;

	scDesc.Windowed = TRUE;

			{

		KEY_PRESS_SURFACE_LEFT,

	LoadObj(vertexlist, indexList);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

	//定数バッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

		pLevels,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

int main(int, char**)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	bool ret = tinyobj::LoadObj(

	D3D11_SAMPLER_DESC smpDesc;

	tinyobj::ObjReader reader;

				tinyobj::real_t tx =

		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		KEY_PRESS_SURFACE_UP,

	std::string imagePath = "hello.bmp";

	txDesc.Height = rect.Height();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

}

		KEY_PRESS_SURFACE_LEFT,



		KEY_PRESS_SURFACE_DOWN,

		return hr;

			break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&shapes,

int SEGMENT = 36;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

#define TINYOBJLOADER_IMPLEMENTATION

		NULL,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&m_pSwapChain,



CD3DTest::~CD3DTest()

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4X4 projection;

	m_pMatrixBuffer = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

#define TINYOBJLOADER_IMPLEMENTATION

	ZeroMemory(&txDesc, sizeof(txDesc));

		if (!reader.Error().empty())

};

	std::string imagePath = "hello.bmp";

			{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_SUBRESOURCE_DATA irData;

	//インデックスバッファ作成

	m_VertexCount = vcount;



			exit(1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_DestroyRenderer(ren);

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



				vertex.push_back(vertex_tmp);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				indexlist.push_back(index);

		&scDesc,



	vector<WORD> indexList;

				tinyobj::real_t tx =

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pSampler = NULL;



		&m_pImmediateContext);

	if (FAILED(hr))



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	if (!reader.ParseFromFile(inputfile, reader_config))

	vbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))



	{

			break;

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pVertexBuffer = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.Height = (FLOAT)rect.Height();

#include <iostream>

}

	ConstantLightBuffer clb;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	scDesc.OutputWindow = hwnd;

		return 1;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	/*

	XMFLOAT4         eyePos;   //視点座標

	ConstantMatrixBuffer cmb;

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	m_pSampler = NULL;

	{

		}

		size_t index_offset = 0;

	if (FAILED(hr))

	XMFLOAT4X4 world;

/*

	m_Viewport.MaxDepth = 1.0f;

	{

	m_pDepthStencilView = NULL;

		m_pImmediateContext->ClearState();

	scDesc.BufferDesc.Width = rect.Width();



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.ArraySize = 1;

	m_pVertexBuffer = NULL;

#ifdef _DEBUG



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&materials,

	if (!reader.Warning().empty())

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				vertex.push_back(vertex_tmp);

		&m_pDevice,

		&m_pSwapChain,









		1,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float    nearZ = 0.1f;



		&level,

				vertex.push_back(vertex_tmp);

void CD3DTest::Release()





	Release();

	vbDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

	cbDesc.CPUAccessFlags = 0;

	}



	Release();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

/*

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



 * Lesson 1: Hello World!

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	float    nearZ = 0.1f;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float    nearZ = 0.1f;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)





				break;



	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		exit(1);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	for (int i = 0; i < vcount; i++)

		R"(cube.obj)");

struct ConstantLight {

	//インデックスバッファ作成

};

		pIList[j] = indexList[j];

		&m_pDevice,

	m_pSwapChain = NULL;

}

	}

	//Clean up our objects and quit

	//定数バッファ作成

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

#include <iostream>

 */

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	auto& attrib = reader.GetAttrib();

			int num_vertices = shape.mesh.num_face_vertices[f];

#include <iostream>

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	SAFE_RELEASE(m_pLightBuffer);

	UINT strides = sizeof(Vertex);

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				break;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		SDL_RenderCopy(ren, tex, NULL, NULL);







	//Create Index





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		KEY_PRESS_SURFACE_LEFT,

#ifdef _DEBUG

	}

	SDL_FreeSurface(suf);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	txDesc.SampleDesc.Count = 1;



				indexlist.push_back(index);

}



	m_pInputLayout = NULL;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.CPUAccessFlags = 0;

	tinyobj::ObjReader reader;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	m_pDepthStencilView = NULL;

		size_t index_offset = 0;



	vector<Vertex> vertexlist;

				WORD index = idx.vertex_index;

	ConstantLightBuffer clb;



		return hr;

	}

			default:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				// access to vertex

	tinyobj::ObjReaderConfig reader_config;

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



		&scDesc,

	for (size_t s = 0; s < shapes.size(); s++)

		if (e.type == SDL_QUIT)

	m_pVertexBuffer = NULL;

	ConstantMaterial material; //物体の質感

	m_Viewport.MaxDepth = 1.0f;

	m_pRenderTargetView = NULL;

	//Key press surfaces constants

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	for (const auto& shape : shapes)

	m_pRenderTargetView = NULL;

	Release();



	ID3D11Texture2D* pBackBuffer;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	for (const auto& shape : shapes)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_Viewport.Height = (FLOAT)rect.Height();

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDepthStencilView = NULL;



	vrData.SysMemPitch = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			{

{

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

{

	vbDesc.CPUAccessFlags = 0;

};

		return hr;

	int     vcount = vertexlist.size();

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))



	vrData.pSysMem = &pVList[0];



	}

	SDL_FreeSurface(bmp);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#include <iostream>



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	std::string imagePath = "hello.bmp";



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (const auto& shape : shapes)

	// Loop over shapes

			exit(1);

	int     vcount = vertexlist.size();

	Vertex* pVList = new Vertex[vcount];

	m_pTextureView = NULL;

	ConstantLightBuffer clb;

	Release();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::string inputfile = "test.obj";

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.TopLeftY = 0;





 * Lesson 1: Hello World!

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

struct ConstantLightBuffer {

	{

	{

	vbDesc.MiscFlags = 0;



};

	m_pImmediateContext = NULL;

			index_offset += fv;



	/*

	{

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)



		delete[] pIList;

		return hr;



	vbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}*/

	SDL_Quit();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_FreeSurface(suf);

		1,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	HRESULT              hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			// Loop over vertices in the face.

				WORD index = idx.vertex_index;





}

	Release();

}

	reader_config.mtl_search_path = "./"; // Path to material files


