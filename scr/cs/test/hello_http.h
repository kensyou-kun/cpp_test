	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4X4 projection;

	ConstantLightBuffer clb;

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



				// access to vertex



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{

			}

	SAFE_RELEASE(m_pMatrixBuffer);





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;

	if (m_pImmediateContext)

	m_pTextureView = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				indexlist.push_back(index);

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			{

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Quality = 0;

}


			case SDLK_RIGHT:

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pIndexBuffer);

	{





	m_Viewport.TopLeftX = 0;

	//vector<Vertex> vertex_t;

	vrData.SysMemSlicePitch = 0;

	SDL_Quit();

			case SDLK_LEFT:

	scDesc.BufferCount = 1;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyRenderer(ren);

	m_pVertexShader = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	WORD   icount = indexList.size();

		1,



		&shapes,

	vrData.SysMemPitch = 0;

void CD3DTest::Release()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

	ConstantMatrixBuffer cmb;

	ConstantLight    pntLight; //点光源

	};

	txDesc.Width = rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			// Loop over vertices in the face.

	if (FAILED(hr))





	std::string error;

	cbDesc.MiscFlags = 0;





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	}

	ConstantMaterial material; //物体の質感

};



}

	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.eyePos, eye);

		}

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	m_pTextureView = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

}
	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.SampleDesc.Count = 1;

	D3D11_BUFFER_DESC cbDesc;

	bool ret = tinyobj::LoadObj(

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

	txDesc.MipLevels = 1;



	Release();

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pMatrixBuffer);



	{

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pDepthStencilView);

		&error,

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				// access to vertex



	ConstantLightBuffer clb;



	Vertex* pVList = new Vertex[vcount];



				indexlist.push_back(index);

		return 1;



}

	ConstantLightBuffer clb;

	WORD* pIList = new WORD[icount];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	auto& materials = reader.GetMaterials();

}

	int     vcount = vertexlist.size();

	vbDesc.StructureByteStride = 0;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			case SDLK_DOWN:

	m_Viewport.Width = (FLOAT)rect.Width();

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	ConstantLightBuffer clb;

				tinyobj::real_t ty =

	}

			//Select surfaces based on key press

	return;

		pVList[i] = vertexlist[i];

			{



		SDL_RenderClear(ren);

	//vector<Vertex> vertex_t;



void CD3DTest::Release()

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_DOWN,



		size_t index_offset = 0;

	tinyobj::ObjReader reader;



	m_pDevice = NULL;

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};

struct ConstantLight {





	}

	SDL_Quit();



	D3D11_SUBRESOURCE_DATA vrData;

	float    nearZ = 0.1f;

};

				WORD index = idx.vertex_index;



	SAFE_RELEASE(m_pDepthStencilTexture);



			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pTexture);



		1,

				indexlist.push_back(index);

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	XMFLOAT4         eyePos;   //視点座標



			case SDLK_RIGHT:

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pTexture);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pVertexBuffer);

		&shapes,

	m_pDevice = NULL;

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.MiscFlags = 0;

#include <iostream>

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Event e;

		return hr;

		pVList[i] = vertexlist[i];

		}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		flags,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		}



	SAFE_RELEASE(m_pIndexBuffer);

	{

	m_pSwapChain = NULL;



				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				WORD index = idx.vertex_index;

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



struct ConstantMaterial {

	if (FAILED(hr))



		pIList[j] = indexList[j];



	//頂点レイアウト作成





			{

			case SDLK_DOWN:



	{

			case SDLK_LEFT:



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			{

}

				indexlist.push_back(index);

	if (FAILED(hr))



	}

	HRESULT              hr;

		cout << "SDL_INIT_ERROR" << endl;

			index_offset += num_vertices;

	/*





	::ZeroMemory(&scDesc, sizeof(scDesc));

		KEY_PRESS_SURFACE_DOWN,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	for (const auto& shape : shapes)

				// access to vertex



	txDesc.SampleDesc.Quality = 0;







			switch (e.key.keysym.sym)

	cbDesc.StructureByteStride = 0;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//頂点レイアウト作成



	D3D11_SAMPLER_DESC smpDesc;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!error.empty())

{

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			exit(1);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	irData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

#ifdef _DEBUG



				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

}

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

			exit(1);

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		//User requests quit

			break;

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		KEY_PRESS_SURFACE_UP,



	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

			case SDLK_RIGHT:

	ConstantLightBuffer clb;

	m_Viewport.MinDepth = 0.0f;

}

	for (size_t s = 0; s < shapes.size(); s++)



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	cbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pImmediateContext);

};

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		if (e.type == SDL_QUIT)

struct ConstantLight {

	for (int i = 0; i < 3; i++)

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.CPUAccessFlags = 0;

	// Loop over shapes



#include <SDL.h>

{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_Viewport.TopLeftX = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantLight {

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();

	DXGI_SWAP_CHAIN_DESC scDesc;

	std::vector<tinyobj::shape_t> shapes;

	// Loop over shapes

	for (size_t s = 0; s < shapes.size(); s++)



	XMFLOAT4 specular;          //反射(r,g,b)

		m_pImmediateContext->ClearState();

	}

	m_pImmediateContext = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (m_pImmediateContext)

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	//頂点シェーダー生成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (!reader.ParseFromFile(inputfile, reader_config))

}



	/*

		D3D11_SDK_VERSION,

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&level,

	m_pVertexBuffer = NULL;

}
		{

#include "DirectXManager.h"

		&shapes,

	auto& shapes = reader.GetShapes();

		//User requests quit

		&scDesc,

	cbDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		pVList[i] = vertexlist[i];



	SAFE_RELEASE(m_pInputLayout);

	//Vertex* pVList = new Vertex[vcount];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				vertex.push_back(vertex_tmp);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_IndexCount = 0;

		&scDesc,

	m_Angle += XMConvertToRadians(1.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyWindow(win);

		//User requests quit

		if (!reader.Error().empty())







	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	CRect                rect;

	m_pRenderTargetView = NULL;

#define TINYOBJLOADER_IMPLEMENTATION



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	if (FAILED(hr))

	SDL_FreeSurface(suf);





	//深度ステンシルバッファ作成



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pSampler);



};

	tinyobj::attrib_t attrib;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		}



		&scDesc,

	m_pSwapChain = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				indexlist.push_back(idx.vertex_index);

	ibDesc.CPUAccessFlags = 0;



		pLevels,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

struct ConstantLightBuffer {



}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_UP:



		return hr;

	m_pTextureView = NULL;

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ConstantLight    pntLight; //点光源

{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	std::string inputfile = "test.obj";

		return hr;



	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::attrib_t attrib;

	{

	//vector<Vertex> vertex_t;

	if (FAILED(hr))



	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	reader_config.mtl_search_path = "./"; // Path to material files

	::GetClientRect(hwnd, &rect);



	//頂点バッファ作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.CPUAccessFlags = 0;

				break;



	XMFLOAT4X4 view;



	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pIndexBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

		&m_pDevice,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.Windowed = TRUE;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pVertexShader);

	CRect                rect;











	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    fov = XMConvertToRadians(20.0f);



	SAFE_RELEASE(m_pDepthStencilView);

		}

	m_VertexCount = vcount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	dsDesc.Format = txDesc.Format;

using std::cout; using std::endl;

	return 0;

		return hr;

			for (size_t v = 0; v < fv; v++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		else if (e.type == SDL_KEYDOWN)



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4X4 view;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{



			switch (e.key.keysym.sym)

	enum KeyPressSurfaces

	m_pImmediateContext = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4X4 projection;

				WORD index = idx.vertex_index;



	m_pDepthStencilTexture = NULL;

		//User presses a key

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC vbDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pTextureView);

	m_pTextureView = NULL;

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	for (int i = 0; i < vcount; i++)

	// Loop over shapes

	SAFE_RELEASE(m_pImmediateContext);





		SDL_Delay(1000);

	XMFLOAT4X4 world;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pPixelShader);



	}



#define TINYOBJLOADER_IMPLEMENTATION



struct ConstantMatrixBuffer {

	tinyobj::attrib_t attrib;

	}

using std::cout; using std::endl;

		cout << "SDL_INIT_ERROR" << endl;

{

	//Clean up our objects and quit



		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		pIList[j] = indexList[j];

	}

};



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		KEY_PRESS_SURFACE_RIGHT,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	}





	flags |= D3D11_CREATE_DEVICE_DEBUG;

	bool ret = tinyobj::LoadObj(

	m_pSwapChain->Present(0, 0);





		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;





CD3DTest::CD3DTest()

		{

	m_pDevice = NULL;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vrData.pSysMem = &pVList[0];

		{

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pRenderTargetView);

	D3D11_SUBRESOURCE_DATA irData;



	XMFLOAT4 specular;          //反射(r,g,b)

	Release();



			{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//ピクセルシェーダー生成

	D3D11_SAMPLER_DESC smpDesc;

		return hr;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	bool ret = tinyobj::LoadObj(

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void CD3DTest::Render()

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	LoadObj(vertexlist, indexList);



	int     vcount = vertexlist.size();



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pSwapChain = NULL;

	cbDesc.StructureByteStride = 0;

				break;

	m_pVertexShader = NULL;

	while (SDL_PollEvent(&e) != 0)

	{

	}



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4         eyePos;   //視点座標

#define TINYOBJLOADER_IMPLEMENTATION

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include <SDL.h>

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT offsets = 0;

				break;

	m_IndexCount = icount;

	CRect                rect;

		&materials,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantLight {

	SAFE_RELEASE(m_pIndexBuffer);

				vertex.push_back(vertex_tmp);

	m_pSampler = NULL;



		KEY_PRESS_SURFACE_UP,



		pLevels,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	bool ret = tinyobj::LoadObj(

	irData.pSysMem = &pIList[0];



			// Loop over vertices in the face.

	//頂点シェーダー生成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				// access to vertex



			case SDLK_UP:

	WORD* pIList = new WORD[icount];

	{

	}

	if (FAILED(hr))

	SDL_FreeSurface(bmp);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Event e;

		1,

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	// Loop over shapes

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	pBackBuffer->Release();

				indexlist.push_back(index);

			}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





				// access to vertex

	//テクスチャ読み込み

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;



	Release();





	SDL_DestroyTexture(tex);



	{

	{

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pTextureView);

	//ビューポート設定

		return hr;



	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			case SDLK_UP:





	if (!reader.ParseFromFile(inputfile, reader_config))

	WORD* pIList = new WORD[icount];



	{

				WORD index = idx.vertex_index;

		if (!reader.Error().empty())

	vrData.pSysMem = &pVList[0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点シェーダー生成

			switch (e.key.keysym.sym)



	D3D11_SUBRESOURCE_DATA vrData;

			for (size_t v = 0; v < fv; v++)

	SAFE_RELEASE(m_pTexture);

	return hr;

		return hr;

	scDesc.SampleDesc.Quality = 0;



	tinyobj::ObjReaderConfig reader_config;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	//深度ステンシルバッファ作成



	}

	scDesc.Windowed = TRUE;

		}

	scDesc.BufferDesc.Height = rect.Height();

		pLevels,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

 * Lesson 1: Hello World!

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{

#include <SDL.h>



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pSwapChain->Present(0, 0);

	m_pSwapChain = NULL;

	};





		KEY_PRESS_SURFACE_DOWN,

	UINT flags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<Vertex> vertex_t;

	}

	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pTexture);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderPresent(ren);

			case SDLK_UP:

		if (!reader.Error().empty())

		return hr;



	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftX = 0;

			}



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		KEY_PRESS_SURFACE_RIGHT,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSwapChain = NULL;

		&m_pDevice,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);



	ID3D11Texture2D* pBackBuffer;

#include <iostream>

		return hr;

	Release();

	}

	//テクスチャ読み込み

	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		D3D_DRIVER_TYPE_HARDWARE,

		R"(cube.obj)");

		}



	//Clean up our objects and quit

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

#ifdef _DEBUG

			{

		KEY_PRESS_SURFACE_LEFT,

	for (size_t s = 0; s < shapes.size(); s++)



	SDL_DestroyWindow(win);

	if (FAILED(hr))



		&m_pImmediateContext);

}

	txDesc.CPUAccessFlags = 0;

int main(int, char**)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	CRect                rect;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pTextureView);



		return hr;

	Vertex* pVList = new Vertex[vcount];

	std::string imagePath = "hello.bmp";

	if (!error.empty())





	SAFE_RELEASE(m_pMatrixBuffer);

	return 0;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;



};

				break;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pInputLayout);

		&m_pImmediateContext);

};



	SAFE_RELEASE(m_pInputLayout);

		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#define TINYOBJLOADER_IMPLEMENTATION

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			break;

	txDesc.ArraySize = 1;

		&m_pSwapChain,

}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pPixelShader = NULL;





	reader_config.mtl_search_path = "./"; // Path to material files

		{

		SDL_RenderClear(ren);

	{

{



	std::vector<tinyobj::shape_t> shapes;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pVertexBuffer = NULL;







		return hr;

	}

	}



	XMFLOAT4 ambient;           //環境(r,g,b)

	//vector<Vertex> vertex_t;

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.SampleDesc.Quality = 0;





#include <iostream>

	irData.pSysMem = &pIList[0];



				break;

	m_VertexCount = 0;

int main(int, char**)

	scDesc.BufferDesc.Height = rect.Height();

	LoadObj(vertexlist, indexList);

	SDL_DestroyTexture(tex);



	}

		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.SampleDesc.Count = 1;

		pIList[j] = indexList[j];



#include <iostream>

	m_pTexture = NULL;

	scDesc.BufferDesc.Width = rect.Width();

		SDL_RenderPresent(ren);

	//テクスチャ読み込み



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	CRect                rect;





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	delete[] pIList;



	delete[] pIList;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pVertexShader = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		}

	SDL_FreeSurface(suf);

	//vector<Vertex> vertex_t;

	//ピクセルシェーダー生成

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

}

		exit(1);



	std::string imagePath = "hello.bmp";

		return hr;

		if (!ret)

	m_Viewport.TopLeftX = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 pos;               //座標(x,y,z)

	//ピクセルシェーダー生成



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;





		{

	SDL_DestroyRenderer(ren);

	{



	{



	scDesc.BufferDesc.Width = rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

void CD3DTest::Release()

	}



void CD3DTest::Render()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		size_t index_offset = 0;  // インデントのオフセット





	if (!reader.ParseFromFile(inputfile, reader_config))



	vrData.SysMemPitch = 0;

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pDevice);

		&m_pImmediateContext);

		{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		if (!reader.Error().empty())

		pVList[i] = vertexlist[i];

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	int     vcount = vertexlist.size();

}

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

			case SDLK_RIGHT:



	}

			{

			{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//テクスチャ読み込み

			case SDLK_RIGHT:

void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;



}

		KEY_PRESS_SURFACE_UP,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string imagePath = "hello.bmp";

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	for (int i = 0; i < vcount; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    farZ = 100.0f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	ConstantLight    pntLight; //点光源

	bool ret = tinyobj::LoadObj(



	vbDesc.MiscFlags = 0;



struct ConstantLightBuffer {



		{

	float    nearZ = 0.1f;



		//User presses a key

	txDesc.CPUAccessFlags = 0;

		return hr;

	ibDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	vbDesc.StructureByteStride = 0;

		{



	if (FAILED(hr))

struct ConstantMaterial {

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

			//Select surfaces based on key press

				break;

	UINT offsets = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				WORD index = idx.vertex_index;

		&m_pImmediateContext);

			}



	scDesc.SampleDesc.Count = 1;

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftX = 0;



	return 0;

	ConstantLightBuffer clb;

		&m_pImmediateContext);

		return hr;

			switch (e.key.keysym.sym)

	ID3D11Texture2D* pBackBuffer;



	if (FAILED(hr))

	m_pSwapChain = NULL;



	};



}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 pos;               //座標(x,y,z)

		if (!ret)

	irData.SysMemSlicePitch = 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{

}


	//Key press surfaces constants



	if (!reader.Warning().empty())

	ibDesc.MiscFlags = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	WORD* pIList = new WORD[icount];

	{

				// access to vertex

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	// Loop over shapes

		return hr;

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pPixelShader = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);



	m_pTextureView = NULL;

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



			for (size_t v = 0; v < fv; v++)

		&m_pImmediateContext);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pVertexShader = NULL;



	enum KeyPressSurfaces

	if (FAILED(hr))



	SDL_DestroyTexture(tex);





	std::string imagePath = "hello.bmp";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::string imagePath = "hello.bmp";

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	ConstantMaterial material; //物体の質感







	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(index);



		&level,

	{

		delete[] pVList;

		else if (e.type == SDL_KEYDOWN)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		flags,

				break;

};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

CD3DTest::~CD3DTest()





	m_pIndexBuffer = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	//深度ステンシルバッファ作成

	std::string inputfile = "test.obj";

	vbDesc.MiscFlags = 0;

	m_Viewport.TopLeftY = 0;

		return hr;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				WORD index = idx.vertex_index;

			}

	SAFE_RELEASE(m_pSampler);

	txDesc.Height = rect.Height();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&m_pSwapChain,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		pIList[j] = indexList[j];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		}

		}

	scDesc.OutputWindow = hwnd;



		{

		else if (e.type == SDL_KEYDOWN)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_Viewport.MinDepth = 0.0f;

	ID3D11Texture2D* pBackBuffer;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



 * Lesson 1: Hello World!



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Render()



	SDL_DestroyRenderer(ren);



	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.SampleDesc.Count = 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	}

	if (FAILED(hr))

		pIList[j] = indexList[j];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Key press surfaces constants

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext = NULL;

	return 0;

	//First we need to start up SDL, and make sure it went ok

	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		//User presses a key

}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pRenderTargetView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_LEFT,

	{

	{

	D3D11_SUBRESOURCE_DATA vrData;



	m_pTextureView = NULL;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (!reader.ParseFromFile(inputfile, reader_config))

}





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.SampleDesc.Quality = 0;

#include <SDL.h>





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		size_t index_offset = 0;  // インデントのオフセット



		{

	std::string imagePath = "hello.bmp";

		return hr;

}

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 world;



	float    farZ = 100.0f;

struct ConstantMaterial {

			int num_vertices = shape.mesh.num_face_vertices[f];



{

		&m_pImmediateContext);

	UINT strides = sizeof(Vertex);



	SAFE_RELEASE(m_pTexture);

#ifdef _DEBUG

	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	auto& shapes = reader.GetShapes();

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

	{

	m_pVertexBuffer = NULL;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		//User requests quit



	vrData.SysMemPitch = 0;

				break;



	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.MiscFlags = 0;

				break;



		size_t index_offset = 0;

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



	if (FAILED(hr))

{

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		SDL_RenderClear(ren);



			case SDLK_RIGHT:

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		return hr;

/*

	SDL_Quit();

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット



	txDesc.Height = rect.Height();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



CD3DTest::~CD3DTest()

	m_Viewport.Width = (FLOAT)rect.Width();

	{

			//Select surfaces based on key press

	{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.StructureByteStride = 0;



	scDesc.BufferDesc.Height = rect.Height();

	int     vcount = vertexlist.size();



			// Loop over vertices in the face.

	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	}

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Event e;



	LoadObj(vertexlist, indexList);

		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

		return 1;

	//頂点シェーダー生成





		size_t index_offset = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





		return hr;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.StructureByteStride = 0;

		{

	ConstantLight    pntLight; //点光源

	}

struct ConstantLight {

		&attrib,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

	delete[] pIList;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		SDL_RenderClear(ren);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		//User presses a key

	{

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	if (FAILED(hr))

			index_offset += num_vertices;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pImmediateContext);

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	irData.SysMemSlicePitch = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User requests quit

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];









	HRESULT              hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())

	//vector<Vertex> vertex_t;

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.StructureByteStride = 0;

				break;

				break;

	if (FAILED(hr))

}

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&m_pImmediateContext);

	::GetClientRect(hwnd, &rect);

	D3D11_BUFFER_DESC vbDesc;

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4X4 projection;

	ConstantLightBuffer clb;

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

}

	{

	LoadObj(vertexlist, indexList);



	if (FAILED(hr))

				WORD index = idx.vertex_index;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_Delay(1000);

	m_VertexCount = vcount;

		SDL_RenderClear(ren);

	vbDesc.MiscFlags = 0;



				WORD index = idx.vertex_index;

		}



}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	HRESULT              hr;

	cbDesc.MiscFlags = 0;

		else if (e.type == SDL_KEYDOWN)

	}

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	delete[] pIList;



	m_Angle += XMConvertToRadians(1.0f);

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

};



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

			}

				vertex.push_back(vertex_tmp);

	//vector<Vertex> vertex_t;



	auto& attrib = reader.GetAttrib();

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

		1,

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pInputLayout = NULL;

}



		}

};



				vertex.push_back(vertex_tmp);

	//頂点バッファ作成

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

	LoadObj(vertexlist, indexList);

#include <iostream>





	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pTexture = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			break;



	SAFE_RELEASE(m_pVertexShader);



	m_pVertexShader = NULL;

	{



	m_pImmediateContext = NULL;

		&level,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	auto& shapes = reader.GetShapes();



	dsDesc.Texture2D.MipSlice = 0;

	}

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		}

}

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

		if (!ret)

	if (FAILED(hr))



	Release();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	delete[] pVList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}
	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//深度ステンシルバッファ作成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

struct ConstantMaterial {

	tinyobj::ObjReaderConfig reader_config;

		return hr;

		&materials,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	//定数バッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_IndexCount = icount;

		&error,

	float    nearZ = 0.1f;



	float    farZ = 100.0f;

	std::string imagePath = "hello.bmp";





		&scDesc,

	scDesc.SampleDesc.Count = 1;

#ifdef _DEBUG

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pDevice);

			switch (e.key.keysym.sym)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&shapes,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

	UINT offsets = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}



		{

	D3D11_BUFFER_DESC vbDesc;

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

	vector<Vertex> vertexlist;

	scDesc.BufferCount = 1;

	XMFLOAT4X4 view;

	SDL_Quit();

	m_pInputLayout = NULL;

}
	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

}

		&m_pImmediateContext);



	}

		KEY_PRESS_SURFACE_TOTAL



	SAFE_RELEASE(m_pImmediateContext);

	}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pTextureView);

		flags,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 world;

#ifdef _DEBUG

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{



	SAFE_RELEASE(m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}



	}

}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);







	SAFE_RELEASE(m_pMatrixBuffer);

			{



			{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		return hr;

#ifdef _DEBUG

		&m_pDevice,

	SAFE_RELEASE(m_pDevice);

		if (!reader.Error().empty())

	vrData.SysMemSlicePitch = 0;

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

};



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		&error,

	SDL_DestroyWindow(win);

	std::string inputfile = "test.obj";

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	delete[] pVList;

		return hr;

	return 0;

	m_pImmediateContext = NULL;

	std::string imagePath = "hello.bmp";

			case SDLK_RIGHT:

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_IndexCount = 0;

		flags,

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		}

	D3D11_SUBRESOURCE_DATA vrData;



	ConstantMatrixBuffer cmb;

				WORD index = idx.vertex_index;

#include "DirectXManager.h"

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	Release();

{



				indexlist.push_back(idx.vertex_index);

	return 0;

			for (size_t v = 0; v < num_vertices; v++)



	m_IndexCount = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ID3D11Texture2D* pBackBuffer;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//Create Index

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pSampler = NULL;



	m_pLightBuffer = NULL;



	m_pMatrixBuffer = NULL;







	SAFE_RELEASE(m_pTexture);

		D3D11_SDK_VERSION,

	return 0;

}

		}

int main(int, char**)

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.TopLeftX = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}

		&m_pImmediateContext);

	return hr;

	}

	{



		m_pImmediateContext->ClearState();

}

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

using std::cout; using std::endl;



	cbDesc.MiscFlags = 0;

	vrData.SysMemPitch = 0;

		return hr;

	SDL_DestroyTexture(tex);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (const auto& shape : shapes)

			exit(1);

	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{



	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	ibDesc.ByteWidth = sizeof(WORD) * icount;

			// Loop over vertices in the face.

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	tinyobj::ObjReaderConfig reader_config;



		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	tinyobj::ObjReader reader;

	}

		SDL_Delay(1000);

	vrData.SysMemSlicePitch = 0;

};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&level,

	m_IndexCount = 0;



HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.MiscFlags = 0;

{

	//頂点レイアウト作成





	D3D11_BUFFER_DESC ibDesc;

		else if (e.type == SDL_KEYDOWN)

	//Vertex* pVList = new Vertex[vcount];

	delete[] pIList;

	//頂点レイアウト作成

	for (const auto& shape : shapes)

		}



			for (size_t v = 0; v < num_vertices; v++)

	Release();



	}

	XMFLOAT4         ambient;  //環境光(r,g,b)



	{

	SDL_Quit();

	WORD   icount = indexList.size();

#ifdef _DEBUG



		if (!ret)

int main(int, char**)

	{



		}

	SAFE_RELEASE(m_pSwapChain);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	enum KeyPressSurfaces

		}

	}*/



	txDesc.SampleDesc.Quality = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_Delay(1000);

			case SDLK_RIGHT:

		}

	m_pVertexShader = NULL;

		{

		&m_pDevice,



		return hr;

	m_pTextureView = NULL;

#include <SDL.h>



			case SDLK_UP:

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	D3D_FEATURE_LEVEL level;

	ibDesc.MiscFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//Create Index

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.Height = (FLOAT)rect.Height();

	CRect                rect;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 ambient;           //環境(r,g,b)

	bool ret = tinyobj::LoadObj(

int main(int, char**)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//頂点レイアウト作成

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	cbDesc.CPUAccessFlags = 0;



	delete[] pIList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.MaxDepth = 1.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;



 */

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	float    farZ = 100.0f;

CD3DTest::CD3DTest()

			for (size_t v = 0; v < fv; v++)

	vector<WORD> indexList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

 * Lesson 1: Hello World!

		&scDesc,

	m_pPixelShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



int main(int, char**)

}

struct ConstantLight {



	SDL_DestroyTexture(tex);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//頂点シェーダー生成

	}

			case SDLK_DOWN:

}

CD3DTest::CD3DTest()

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Key press surfaces constants



	SAFE_RELEASE(m_pIndexBuffer);

	{

	ConstantMaterial material; //物体の質感





	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext = NULL;

		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

		delete[] pIList;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		1,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

	//定数バッファ作成

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

int main(int, char**)

	{









	if (FAILED(hr))

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Quit();

	SDL_Quit();

	XMFLOAT4X4 view;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ConstantLight    pntLight; //点光源

			exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

HRESULT CD3DTest::Create(HWND hwnd)



	txDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <SDL.h>



		NULL,



	for (const auto& shape : shapes)

	//First we need to start up SDL, and make sure it went ok



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_DestroyTexture(tex);

	auto& shapes = reader.GetShapes();

		if (!reader.Error().empty())



		return hr;

	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



struct ConstantMaterial {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&m_pDevice,

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pTexture);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	vrData.SysMemPitch = 0;

		//User requests quit

	Vertex* pVList = new Vertex[vcount];

	vector<Vertex> vertexlist;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pRenderTargetView = NULL;

	{

	m_pLightBuffer = NULL;

			case SDLK_DOWN:

	enum KeyPressSurfaces

		}

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		pIList[j] = indexList[j];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4X4 world;

	txDesc.ArraySize = 1;

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	auto& materials = reader.GetMaterials();

#endif

	m_pImmediateContext = NULL;

{



	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))



	//Vertex* pVList = new Vertex[vcount];



				vertex.push_back(vertex_tmp);

	{

	}*/

	m_Viewport.Width = (FLOAT)rect.Width();

			exit(1);

	{

{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pVertexShader = NULL;

	WORD* pIList = new WORD[icount];





	ConstantMaterial material; //物体の質感



		if (e.type == SDL_QUIT)



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SAFE_RELEASE(m_pDevice);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}



		return hr;

		&materials,

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

			for (size_t v = 0; v < fv; v++)

	//Create Index

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pInputLayout);

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}



			case SDLK_UP:

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	};

	m_Viewport.TopLeftX = 0;





#endif

			case SDLK_DOWN:

		exit(1);

	//vector<WORD> index_t;

	XMFLOAT4 ambient;           //環境(r,g,b)



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		SDL_RenderClear(ren);

		else if (e.type == SDL_KEYDOWN)

	cbDesc.StructureByteStride = 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		cout << "SDL_INIT_ERROR" << endl;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

};

	{

	}

	m_pDepthStencilView = NULL;

			break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	HRESULT              hr;

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	{



	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	SAFE_RELEASE(m_pTexture);

		return hr;

	if (!reader.Warning().empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&shapes,

	if (FAILED(hr))

			index_offset += fv;

			index_offset += fv;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

CD3DTest::~CD3DTest()



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	UINT strides = sizeof(Vertex);

	XMFLOAT4X4 world;

		pIList[j] = indexList[j];

{



		KEY_PRESS_SURFACE_RIGHT,

void CD3DTest::Release()



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				WORD index = idx.vertex_index;



	SDL_DestroyTexture(tex);

	/*

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#endif

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilTexture = NULL;



	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;



		return hr;

				tinyobj::real_t ty =



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

		return hr;

	//Clean up our objects and quit

	{

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	};

struct ConstantMaterial {

CD3DTest::~CD3DTest()

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				break;

		//User presses a key

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#include "DirectXManager.h"

	//頂点バッファ作成

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pDepthStencilView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#include <iostream>



	cbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		//User presses a key



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.MiscFlags = 0;

};

	txDesc.Width = rect.Width();

	m_pTextureView = NULL;

	while (SDL_PollEvent(&e) != 0)

	return hr;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

		exit(1);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& attrib = reader.GetAttrib();



	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_DEFAULT,

	}

		return hr;

	ConstantLightBuffer clb;

	scDesc.SampleDesc.Quality = 0;

			break;

	}*/

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_DEFAULT,

	m_Angle += XMConvertToRadians(1.0f);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	txDesc.MiscFlags = 0;

#include "DirectXManager.h"



		//User requests quit

	m_IndexCount = icount;

	delete[] pVList;

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	UINT offsets = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.MiscFlags = 0;

	scDesc.Windowed = TRUE;

		return hr;

	// Loop over shapes

	vrData.SysMemSlicePitch = 0;

	SDL_Quit();

	};

		size_t index_offset = 0;

	dsDesc.Format = txDesc.Format;

	m_pSwapChain->Present(0, 0);

	D3D11_BUFFER_DESC cbDesc;



		flags,

	SDL_DestroyTexture(tex);

	m_pPixelShader = NULL;

	if (FAILED(hr))

	m_VertexCount = vcount;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	SAFE_RELEASE(m_pSwapChain);

		return hr;



		//User requests quit

	ibDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyWindow(win);

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			}

{

	D3D_FEATURE_LEVEL level;

		SDL_Delay(1000);

	m_IndexCount = icount;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}



		}

	m_pMatrixBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;



	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_Angle += XMConvertToRadians(1.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				vertex.push_back(vertex_tmp);

				// access to vertex

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.SampleDesc.Quality = 0;

		delete[] pIList;





void CD3DTest::Release()

		else if (e.type == SDL_KEYDOWN)

			}

	D3D_FEATURE_LEVEL level;

	return hr;



	return;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC ibDesc;



			switch (e.key.keysym.sym)

#include <SDL.h>



		&m_pImmediateContext);



	if (FAILED(hr))

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

using std::cout; using std::endl;

	{



	m_pSampler = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_VertexCount = vcount;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyRenderer(ren);



	UINT offsets = 0;

	vbDesc.StructureByteStride = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.MiscFlags = 0;

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

struct ConstantMaterial {

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pInputLayout);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	{

{

		return hr;

/*

	dsDesc.Texture2D.MipSlice = 0;

}

#include <SDL.h>

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

CD3DTest::CD3DTest()

			{

	tinyobj::ObjReaderConfig reader_config;

	vrData.pSysMem = &pVList[0];

{

			for (size_t v = 0; v < num_vertices; v++)

int main(int, char**)





	m_IndexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	delete[] pVList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

 */

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pDepthStencilView = NULL;

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 */

				vertex.push_back(vertex_tmp);

	delete[] pVList;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	//Vertex* pVList = new Vertex[vcount];

{

	ConstantLightBuffer clb;

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	scDesc.Windowed = TRUE;

	//定数バッファ作成

	}



	for (size_t s = 0; s < shapes.size(); s++)

	irData.pSysMem = &pIList[0];

	}

	SAFE_RELEASE(m_pSwapChain);

	ZeroMemory(&txDesc, sizeof(txDesc));

}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		SDL_Delay(1000);

	m_VertexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

	if (FAILED(hr))

{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		SDL_RenderCopy(ren, tex, NULL, NULL);

		size_t index_offset = 0;





	txDesc.ArraySize = 1;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}

			case SDLK_RIGHT:

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



 * Lesson 1: Hello World!

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		D3D11_SDK_VERSION,

	}



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.CPUAccessFlags = 0;

	return hr;

CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_LEFT,

	//頂点バッファ作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{



	m_pMatrixBuffer = NULL;

		{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



int main(int, char**)

{

	UINT offsets = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	int     vcount = vertexlist.size();

		return hr;

				// access to vertex

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	return hr;

	//Vertex* pVList = new Vertex[vcount];

	D3D11_TEXTURE2D_DESC txDesc;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		//User presses a key

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	std::string imagePath = "hello.bmp";

			case SDLK_LEFT:

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	}



	std::string inputfile = "test.obj";

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	scDesc.SampleDesc.Quality = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_Delay(1000);

	//ピクセルシェーダー生成

{

	if (FAILED(hr))

int main(int, char**)



				// access to vertex

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_DestroyWindow(win);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < 3; i++)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_Delay(1000);

	cbDesc.StructureByteStride = 0;

	m_pSwapChain = NULL;



	m_pPixelShader = NULL;



	float    fov = XMConvertToRadians(20.0f);

	dsDesc.Texture2D.MipSlice = 0;

	std::string error;

	m_pDepthStencilTexture = NULL;

	scDesc.SampleDesc.Quality = 0;

				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!error.empty())

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return hr;

	SDL_Event e;

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	if (FAILED(hr))

	}

	txDesc.SampleDesc.Quality = 0;

		if (!reader.Error().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	scDesc.SampleDesc.Count = 1;



#endif

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 ambient;           //環境(r,g,b)

 */

	m_pInputLayout = NULL;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	int     vcount = vertexlist.size();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&level,

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pImmediateContext);

 */





	vrData.pSysMem = &pVList[0];

		{

	//vector<WORD> index_t;

int SEGMENT = 36;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantLight    pntLight; //点光源

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

HRESULT CD3DTest::Create(HWND hwnd)



	CRect                rect;

	scDesc.BufferDesc.Height = rect.Height();

	for (int i = 0; i < 3; i++)

			}

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int SEGMENT = 36;

	txDesc.SampleDesc.Quality = 0;

int SEGMENT = 36;

	float    nearZ = 0.1f;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	{



		}



	Release();

	//定数バッファ作成

	SDL_Quit();

int main(int, char**)

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return 1;

	SDL_DestroyWindow(win);

	SDL_FreeSurface(suf);

		delete[] pIList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	for (int i = 0; i < vcount; i++)

		&materials,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	{

				vertex.push_back(vertex_tmp);

		&attrib,

	m_pLightBuffer = NULL;

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pMatrixBuffer = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Release()

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pVertexShader);

	WORD* pIList = new WORD[icount];

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	::ZeroMemory(&scDesc, sizeof(scDesc));

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pVertexShader = NULL;

		delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilView);

			case SDLK_LEFT:

	m_Angle += XMConvertToRadians(1.0f);

		cout << "SDL_INIT_ERROR" << endl;



	m_pVertexBuffer = NULL;

	m_pRenderTargetView = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferCount = 1;

	m_pInputLayout = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//vector<Vertex> vertex_t;

	D3D11_SUBRESOURCE_DATA vrData;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//頂点シェーダー生成

	ConstantLight    pntLight; //点光源



	m_pVertexBuffer = NULL;



	//vector<WORD> index_t;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))



			//Select surfaces based on key press

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		SDL_RenderPresent(ren);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



}

	m_pDevice = NULL;

	m_pTextureView = NULL;

	vbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ConstantMaterial material; //物体の質感



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_DEFAULT,



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

	SDL_FreeSurface(bmp);

		return hr;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				indexlist.push_back(index);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

	m_Viewport.MinDepth = 0.0f;

	//ピクセルシェーダー生成

		&attrib,

		D3D11_SDK_VERSION,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pTextureView = NULL;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4X4 view;



	//頂点シェーダー生成

		else if (e.type == SDL_KEYDOWN)

	txDesc.MipLevels = 1;



	txDesc.SampleDesc.Count = 1;

		}



	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.StructureByteStride = 0;

			index_offset += fv;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	m_pDepthStencilTexture = NULL;

			case SDLK_DOWN:

	//インデックスバッファ作成



	//頂点レイアウト作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t ty =

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_IndexCount = icount;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pSampler);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//定数バッファ作成



	cbDesc.CPUAccessFlags = 0;

	SDL_Event e;

	float    fov = XMConvertToRadians(20.0f);

		if (!ret)

	{

	WORD   icount = indexList.size();

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	SAFE_RELEASE(m_pRenderTargetView);





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.BufferDesc.Width = rect.Width();

			int num_vertices = shape.mesh.num_face_vertices[f];

using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.Width = (FLOAT)rect.Width();



	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SDL_DestroyWindow(win);

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

#include <SDL.h>

		{



	m_Viewport.Height = (FLOAT)rect.Height();







 * Lesson 1: Hello World!

		KEY_PRESS_SURFACE_LEFT,

	vrData.pSysMem = &pVList[0];



	Release();



	ConstantLightBuffer clb;



};

				WORD index = idx.vertex_index;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	}

		&m_pImmediateContext);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&scDesc,



			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	int     vcount = vertexlist.size();

	vector<WORD> indexList;



	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{

	SDL_DestroyWindow(win);

			{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#ifdef _DEBUG



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		pLevels,

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	HRESULT              hr;

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	{



	m_pDepthStencilTexture = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//インデックスバッファ作成



	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pRenderTargetView);

struct ConstantLight {

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t tx =

	m_pInputLayout = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.MiscFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

		}

	SDL_FreeSurface(bmp);

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		flags,

	ConstantLight    pntLight; //点光源

		&m_pSwapChain,



		return hr;

		m_pImmediateContext->ClearState();

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	//ビューポート設定

	::GetClientRect(hwnd, &rect);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			// Loop over vertices in the face.

		if (!ret)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_SAMPLER_DESC smpDesc;

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pTextureView = NULL;

	::GetClientRect(hwnd, &rect);

	HRESULT              hr;

	SDL_Quit();



	}

	Vertex* pVList = new Vertex[vcount];

	return;



	m_pMatrixBuffer = NULL;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	delete[] pIList;



	irData.SysMemPitch = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&shapes,

			case SDLK_UP:

	SDL_Quit();

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_DestroyWindow(win);

		&materials,

using std::cout; using std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_FreeSurface(suf);



	}

		&attrib,





	delete[] pVList;

		return hr;

	while (SDL_PollEvent(&e) != 0)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			index_offset += num_vertices;

}

	SAFE_RELEASE(m_pVertexShader);

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

		flags,

	}



	cbDesc.MiscFlags = 0;

	}



	//テクスチャ読み込み

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	vbDesc.CPUAccessFlags = 0;

	m_pRenderTargetView = NULL;



	vector<Vertex> vertexlist;

	txDesc.MiscFlags = 0;

			index_offset += num_vertices;



		{

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 ambient;           //環境(r,g,b)



		return hr;

void CD3DTest::Release()

	ConstantLightBuffer clb;

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&m_pImmediateContext);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;

	}

	m_Viewport.MinDepth = 0.0f;

	vbDesc.StructureByteStride = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#include <SDL.h>



{

	int     vcount = vertexlist.size();





		flags,


