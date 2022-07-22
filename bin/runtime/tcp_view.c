	D3D11_SUBRESOURCE_DATA irData;



	float    nearZ = 0.1f;



#include <SDL.h>

	m_IndexCount = 0;

	txDesc.MipLevels = 1;



		}

	ibDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);



{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <iostream>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pLightBuffer = NULL;



	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	if (FAILED(hr))



	tinyobj::attrib_t attrib;

	}

		SDL_RenderPresent(ren);

	scDesc.SampleDesc.Count = 1;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pIndexBuffer = NULL;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	for (const auto& shape : shapes)

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{



			exit(1);

				tinyobj::real_t tx =

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::real_t ty =

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		//User requests quit

	m_VertexCount = vcount;

	//ピクセルシェーダー生成

	XMFLOAT4X4 projection;

	m_pMatrixBuffer = NULL;





	m_pSampler = NULL;

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

			{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyWindow(win);

		return hr;

void CD3DTest::Render()

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);







				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.TopLeftX = 0;

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pIndexBuffer = NULL;

	SDL_FreeSurface(suf);

{

	m_pImmediateContext = NULL;



	UINT strides = sizeof(Vertex);

	bool ret = tinyobj::LoadObj(

	}

	{

#include <SDL.h>

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	scDesc.OutputWindow = hwnd;

}

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

{

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_BUFFER_DESC cbDesc;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_DestroyWindow(win);

		}

	return;

	dsDesc.Format = txDesc.Format;

		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_UP,

	m_pIndexBuffer = NULL;

	m_Viewport.TopLeftY = 0;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

			//Select surfaces based on key press

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

 * Lesson 1: Hello World!

			{





	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pVertexBuffer);



	SDL_DestroyWindow(win);



		&m_pImmediateContext);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_VertexCount = vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	bool ret = tinyobj::LoadObj(

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Event e;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;



	D3D11_BUFFER_DESC ibDesc;





			switch (e.key.keysym.sym)

	//Clean up our objects and quit

	txDesc.Height = rect.Height();

	::ZeroMemory(&scDesc, sizeof(scDesc));



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				WORD index = idx.vertex_index;

	::GetClientRect(hwnd, &rect);







	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}



		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

				indexlist.push_back(index);

	SAFE_RELEASE(m_pTexture);



	hr = D3D11CreateDeviceAndSwapChain(NULL,



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext = NULL;

	m_pRenderTargetView = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#include <SDL.h>

	//vector<Vertex> vertex_t;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

CD3DTest::CD3DTest()

	//頂点バッファ作成

	ZeroMemory(&txDesc, sizeof(txDesc));

		&scDesc,

	m_pImmediateContext = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				indexlist.push_back(idx.vertex_index);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLightBuffer clb;

			{



			{





}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;



	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				break;

	WORD* pIList = new WORD[icount];





	m_Angle += XMConvertToRadians(1.0f);

	m_pSwapChain->Present(0, 0);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}*/

#define TINYOBJLOADER_IMPLEMENTATION

		SDL_RenderClear(ren);

	}



		return hr;

	D3D_FEATURE_LEVEL level;



	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pTexture);

	std::string error;

			switch (e.key.keysym.sym)

	//Clean up our objects and quit

	m_pLightBuffer = NULL;

	tinyobj::ObjReader reader;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		SDL_RenderCopy(ren, tex, NULL, NULL);

void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pSampler = NULL;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	{

	std::vector<tinyobj::shape_t> shapes;

				vertex.push_back(vertex_tmp);





struct ConstantMatrixBuffer {

	m_pVertexBuffer = NULL;

	vector<WORD> indexList;

		// Loop over faces(polygon)

		{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	dsDesc.Format = txDesc.Format;

CD3DTest::CD3DTest()

	XMFLOAT4         ambient;  //環境光(r,g,b)



	vrData.SysMemPitch = 0;

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderPresent(ren);

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t ty =

	return;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

struct ConstantMatrixBuffer {

	SDL_DestroyRenderer(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		{

	LoadObj(vertexlist, indexList);

	SDL_DestroyRenderer(ren);

	ConstantLight    pntLight; //点光源

		flags,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	SAFE_RELEASE(m_pDepthStencilView);

			index_offset += num_vertices;

			for (size_t v = 0; v < num_vertices; v++)

			case SDLK_UP:

		&m_pSwapChain,

	if (FAILED(hr))

			}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	UINT flags = 0;

	if (FAILED(hr))

	}



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDevice);

	//Create Index

}


	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	while (SDL_PollEvent(&e) != 0)

	while (SDL_PollEvent(&e) != 0)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

}
				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			{

		&materials,

{

	}

		KEY_PRESS_SURFACE_TOTAL

}
	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

/*

struct ConstantLightBuffer {

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pDepthStencilView);

	reader_config.mtl_search_path = "./"; // Path to material files



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		{

	//頂点シェーダー生成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			int num_vertices = shape.mesh.num_face_vertices[f];

		m_pImmediateContext->ClearState();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}
		return hr;

	if (!error.empty())

	//深度ステンシルバッファ作成

				WORD index = idx.vertex_index;



		&scDesc,

	//Clean up our objects and quit

		}





};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ibDesc.StructureByteStride = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDepthStencilView = NULL;

	std::vector<tinyobj::shape_t> shapes;

		size_t index_offset = 0;

	D3D_FEATURE_LEVEL level;

	cbDesc.CPUAccessFlags = 0;



	tinyobj::ObjReaderConfig reader_config;



		flags,

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



			index_offset += num_vertices;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_DOWN:



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_pIndexBuffer = NULL;

	m_pTextureView = NULL;



	{





	{

			// Loop over vertices in the face.

			case SDLK_UP:

				vertex.push_back(vertex_tmp);

				break;



	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_TOTAL

		D3D11_SDK_VERSION,

}

	}*/

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	return 0;



		size_t index_offset = 0;  // インデントのオフセット

		}

		}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			index_offset += fv;

	SDL_Quit();

	ID3D11Texture2D* pBackBuffer;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vrData.pSysMem = &pVList[0];

		{

	m_IndexCount = 0;

	return 0;

	{

	WORD   icount = indexList.size();

	HRESULT              hr;

#include <iostream>

		{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	return 0;

	D3D11_SAMPLER_DESC smpDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

void CD3DTest::Render()



{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#include <SDL.h>

	m_VertexCount = 0;

};



	ConstantLight    pntLight; //点光源

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



#include <iostream>

	scDesc.BufferCount = 1;

	for (int i = 0; i < vcount; i++)

		return hr;



	if (FAILED(hr))

{

{

	if (FAILED(hr))

	}

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.MaxDepth = 1.0f;

		{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 projection;

	}

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.ArraySize = 1;

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		if (e.type == SDL_QUIT)

	SDL_DestroyTexture(tex);

			index_offset += num_vertices;

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	auto& materials = reader.GetMaterials();

		&m_pSwapChain,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

				break;

	tinyobj::ObjReader reader;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SAFE_RELEASE(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	//頂点レイアウト作成

{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

		return hr;



	return;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_BUFFER_DESC ibDesc;

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int SEGMENT = 36;

	m_VertexCount = vcount;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	SDL_Event e;



	}

	txDesc.MiscFlags = 0;

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vbDesc.MiscFlags = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pLightBuffer = NULL;

				// access to vertex

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	vector<Vertex> vertexlist;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	}

	//First we need to start up SDL, and make sure it went ok



		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4X4 view;

	D3D11_SAMPLER_DESC smpDesc;

struct ConstantMatrixBuffer {



		//User requests quit

	//ピクセルシェーダー生成

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	D3D11_TEXTURE2D_DESC txDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	UINT flags = 0;

	SAFE_RELEASE(m_pPixelShader);

				WORD index = idx.vertex_index;

		&m_pDevice,

			case SDLK_LEFT:

	}

}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//頂点シェーダー生成

	m_pTexture = NULL;

};

		}

			index_offset += num_vertices;



	std::string error;

{

	m_pPixelShader = NULL;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_SUBRESOURCE_DATA irData;



#include <iostream>

		return hr;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pSwapChain);





		pVList[i] = vertexlist[i];

	HRESULT              hr;

	//深度ステンシルバッファ作成

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	HRESULT              hr;

		&scDesc,

CD3DTest::~CD3DTest()



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::string error;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SAMPLER_DESC smpDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}



			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_UP,



			case SDLK_UP:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

		NULL,

	vector<Vertex> vertexlist;

			index_offset += fv;



	{







			case SDLK_LEFT:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

/*

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

	auto& materials = reader.GetMaterials();

	std::string inputfile = "test.obj";



			{

		SDL_RenderCopy(ren, tex, NULL, NULL);



			}

		pVList[i] = vertexlist[i];

	vrData.pSysMem = &pVList[0];

		// Loop over faces(polygon)





	//頂点レイアウト作成



	Release();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



			break;

	for (int i = 0; i < 3; i++)

	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	// Loop over shapes

		cout << "SDL_INIT_ERROR" << endl;

	{



		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//深度ステンシルバッファ作成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



#include "DirectXManager.h"

	//Key press surfaces constants

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		delete[] pVList;

	m_pInputLayout = NULL;

		}

			{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		flags,





	XMFLOAT4X4 projection;

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	ZeroMemory(&txDesc, sizeof(txDesc));

}

 */





		SDL_Delay(1000);

	D3D11_BUFFER_DESC cbDesc;

	m_Angle += XMConvertToRadians(1.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;





	SAFE_RELEASE(m_pVertexBuffer);

	m_pSampler = NULL;

}



		KEY_PRESS_SURFACE_TOTAL

	SDL_Quit();



	//Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Count = 1;





	m_pTextureView = NULL;

	XMFLOAT4X4 projection;

		return 1;

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

{

	m_VertexCount = 0;

	enum KeyPressSurfaces







	m_pSwapChain = NULL;





				tinyobj::real_t tx =

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		KEY_PRESS_SURFACE_RIGHT,

	float    fov = XMConvertToRadians(20.0f);

	m_pPixelShader = NULL;

				// access to vertex

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	return 0;



		cout << "SDL_INIT_ERROR" << endl;

CD3DTest::~CD3DTest()

	D3D11_BUFFER_DESC vbDesc;

	m_pVertexShader = NULL;

	}

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

{

		SDL_RenderClear(ren);

	{

	XMFLOAT4 pos;               //座標(x,y,z)

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pVertexShader);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{



		KEY_PRESS_SURFACE_DOWN,



	SAFE_RELEASE(m_pSampler);

	//定数バッファ作成

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	irData.SysMemPitch = 0;

	SDL_DestroyWindow(win);

{

		return hr;

	cbDesc.CPUAccessFlags = 0;

	}



			switch (e.key.keysym.sym)

		pLevels,

		{

struct ConstantMatrixBuffer {

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));







	enum KeyPressSurfaces

	delete[] pIList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

				break;

	int     vcount = vertexlist.size();



	auto& materials = reader.GetMaterials();

		{

		flags,

	XMFLOAT4 ambient;           //環境(r,g,b)

	//深度ステンシルバッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#include "DirectXManager.h"



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				vertex.push_back(vertex_tmp);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	m_Viewport.Width = (FLOAT)rect.Width();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pSwapChain,

	tinyobj::ObjReader reader;

		SDL_RenderPresent(ren);

	std::vector<tinyobj::material_t> materials;

		&level,

	//vector<WORD> index_t;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);

	m_pVertexShader = NULL;

	scDesc.BufferCount = 1;

	for (int j = 0; j < icount; j++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_DestroyWindow(win);

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	Release();

	SAFE_RELEASE(m_pVertexShader);

	txDesc.SampleDesc.Quality = 0;

	vbDesc.MiscFlags = 0;



				WORD index = idx.vertex_index;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&materials,

	m_pIndexBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_Viewport.MaxDepth = 1.0f;



}

#include "DirectXManager.h"

	{

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

		pVList[i] = vertexlist[i];

	ConstantMaterial material; //物体の質感

int SEGMENT = 36;

{

		if (!reader.Error().empty())

	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	UINT flags = 0;



		return hr;

				tinyobj::real_t tx =

	std::vector<tinyobj::material_t> materials;

	m_Angle += XMConvertToRadians(1.0f);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.MinDepth = 0.0f;



	for (const auto& shape : shapes)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_Viewport.MaxDepth = 1.0f;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		pLevels,

	{

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pSampler);

		else if (e.type == SDL_KEYDOWN)

	delete[] pIList;

	if (!error.empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	HRESULT              hr;

	SDL_DestroyRenderer(ren);

struct ConstantMaterial {

			case SDLK_DOWN:

	tinyobj::attrib_t attrib;

	if (m_pImmediateContext)

		delete[] pIList;

	//頂点レイアウト作成

	m_pTexture = NULL;

	for (int i = 0; i < vcount; i++)

	D3D11_SAMPLER_DESC smpDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_VertexCount = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pVertexShader);

	SDL_Quit();

				tinyobj::real_t ty =

	txDesc.ArraySize = 1;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pDepthStencilView = NULL;





	//テクスチャ読み込み

	std::string error;

	m_pSampler = NULL;

		R"(cube.obj)");



		&attrib,

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		D3D_DRIVER_TYPE_HARDWARE,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (!reader.ParseFromFile(inputfile, reader_config))

	Release();

	m_pLightBuffer = NULL;





	while (SDL_PollEvent(&e) != 0)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#define TINYOBJLOADER_IMPLEMENTATION

	if (!error.empty())



	}

		1,

			}



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	//頂点バッファ作成

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (!reader.Warning().empty())

				tinyobj::real_t tx =

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	m_pRenderTargetView = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))



	for (int i = 0; i < 3; i++)

	m_pDevice = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	m_pPixelShader = NULL;

#ifdef _DEBUG

	//Clean up our objects and quit

	{

}
	if (m_pImmediateContext)

	ZeroMemory(&txDesc, sizeof(txDesc));

		pVList[i] = vertexlist[i];

struct ConstantLight {

	XMFLOAT4 ambient;           //環境(r,g,b)

	for (int i = 0; i < vcount; i++)

	::GetClientRect(hwnd, &rect);



	m_pRenderTargetView = NULL;

{



		size_t index_offset = 0;

				vertex.push_back(vertex_tmp);

		D3D_DRIVER_TYPE_HARDWARE,





	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//vector<Vertex> vertex_t;

	cbDesc.MiscFlags = 0;

	ConstantMaterial material; //物体の質感

	float    farZ = 100.0f;

	ConstantLightBuffer clb;

		NULL,



	//Create Index



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		if (!ret)

	m_Viewport.Width = (FLOAT)rect.Width();

	auto& attrib = reader.GetAttrib();

CD3DTest::~CD3DTest()

	{

	//Key press surfaces constants



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	/*

	{

	DXGI_SWAP_CHAIN_DESC scDesc;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

		return hr;

	//頂点レイアウト作成

		else if (e.type == SDL_KEYDOWN)

	delete[] pIList;

	m_pDepthStencilView = NULL;

	//定数バッファ作成



	cbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	txDesc.Height = rect.Height();

{



#include "DirectXManager.h"

	int     vcount = vertexlist.size();

		KEY_PRESS_SURFACE_TOTAL



	return;



		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.CPUAccessFlags = 0;

	//頂点バッファ作成

	//vector<Vertex> vertex_t;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			break;



			//Select surfaces based on key press

struct ConstantLightBuffer {

		return hr;

	Release();

using std::cout; using std::endl;

		return hr;



	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

			{

	D3D11_SUBRESOURCE_DATA vrData;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	m_Viewport.TopLeftX = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



#endif

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vrData.SysMemSlicePitch = 0;

				// access to vertex

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&attrib,

		D3D_DRIVER_TYPE_HARDWARE,

		&level,

	m_pTextureView = NULL;

	vbDesc.CPUAccessFlags = 0;

		return hr;

		NULL,

	}*/

	cbDesc.MiscFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

				indexlist.push_back(index);

	m_IndexCount = 0;

		SDL_RenderClear(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_DOWN:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pImmediateContext);

	vrData.SysMemSlicePitch = 0;

	for (int j = 0; j < icount; j++)

{

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_UP,

	LoadObj(vertexlist, indexList);

	m_pDepthStencilView = NULL;

	irData.pSysMem = &pIList[0];

	dsDesc.Format = txDesc.Format;

			exit(1);

			index_offset += fv;

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vbDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA irData;

void CD3DTest::Render()



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	m_pIndexBuffer = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTexture);

			// Loop over vertices in the face.

	XMFLOAT4X4 world;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.TopLeftY = 0;



		KEY_PRESS_SURFACE_TOTAL

		if (e.type == SDL_QUIT)

	}*/

	//頂点レイアウト作成

	XMFLOAT4         ambient;  //環境光(r,g,b)

		KEY_PRESS_SURFACE_RIGHT,

#include <SDL.h>

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.ArraySize = 1;

	cbDesc.MiscFlags = 0;

struct ConstantMaterial {

				vertex.push_back(vertex_tmp);

		return hr;

		{



		size_t index_offset = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		KEY_PRESS_SURFACE_UP,

		return hr;

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

			exit(1);



	tinyobj::ObjReader reader;





	vbDesc.StructureByteStride = 0;

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return hr;

	m_pDepthStencilTexture = NULL;

void CD3DTest::Release()

	if (!error.empty())

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	// Loop over shapes

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_VertexCount = vcount;

	ConstantMatrixBuffer cmb;

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.StructureByteStride = 0;

	SDL_Event e;

	scDesc.OutputWindow = hwnd;



	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

	Release();

				// access to vertex



	{

		return hr;

		return hr;

	SDL_DestroyWindow(win);

		1,

	txDesc.Width = rect.Width();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

		return hr;

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);







	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ibDesc.StructureByteStride = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;

{

 */

	reader_config.mtl_search_path = "./"; // Path to material files

	irData.pSysMem = &pIList[0];



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	enum KeyPressSurfaces

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

#include "DirectXManager.h"

	txDesc.Height = rect.Height();

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderPresent(ren);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string imagePath = "hello.bmp";

		flags,

		// Loop over faces(polygon)







	//Clean up our objects and quit

}



	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//定数バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	std::vector<tinyobj::material_t> materials;

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	scDesc.SampleDesc.Count = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		&m_pImmediateContext);

	if (FAILED(hr))

#ifdef _DEBUG

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	m_pInputLayout = NULL;

	{



	delete[] pIList;



		pVList[i] = vertexlist[i];

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点バッファ作成

	XMFLOAT4X4 view;





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





		NULL,

				indexlist.push_back(idx.vertex_index);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& shapes = reader.GetShapes();

		if (!reader.Error().empty())

{

 */

	txDesc.Width = rect.Width();

	m_pLightBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	m_pLightBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain->Present(0, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		// Loop over faces(polygon)

{

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderPresent(ren);

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))

		return hr;



	m_IndexCount = icount;

void CD3DTest::Render()

	LoadObj(vertexlist, indexList);

	m_Viewport.TopLeftY = 0;

	std::vector<tinyobj::shape_t> shapes;

	scDesc.OutputWindow = hwnd;



		return hr;

	SDL_DestroyWindow(win);

{

		size_t index_offset = 0;  // インデントのオフセット

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pMatrixBuffer);



	}

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.StructureByteStride = 0;



	m_pMatrixBuffer = NULL;

				WORD index = idx.vertex_index;

			}



	{

	D3D_FEATURE_LEVEL level;

}

}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Texture2D.MipSlice = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



			// Loop over vertices in the face.

			{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

int SEGMENT = 36;

	{

				vertex.push_back(vertex_tmp);

CD3DTest::CD3DTest()

		&m_pImmediateContext);



	CRect                rect;

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//定数バッファ作成

	vbDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

#include <iostream>

	std::string inputfile = "test.obj";

	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		delete[] pVList;

	m_Viewport.MaxDepth = 1.0f;

		return 1;

/*

{

	auto& attrib = reader.GetAttrib();

		return hr;

	m_pIndexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<WORD> indexList;

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pIndexBuffer);

				vertex.push_back(vertex_tmp);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;



	txDesc.CPUAccessFlags = 0;



		return 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		KEY_PRESS_SURFACE_TOTAL

	return 0;

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	//ピクセルシェーダー生成

	SDL_Quit();



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		return hr;

	txDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

			index_offset += fv;



	m_Viewport.MinDepth = 0.0f;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA irData;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

#include <iostream>



	if (FAILED(hr))



	for (int i = 0; i < 3; i++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	DXGI_SWAP_CHAIN_DESC scDesc;

		KEY_PRESS_SURFACE_UP,



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pMatrixBuffer = NULL;

	float    nearZ = 0.1f;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	m_pVertexShader = NULL;

	}

	vector<WORD> indexList;

	for (const auto& shape : shapes)

	enum KeyPressSurfaces

				break;

	m_pTexture = NULL;

	txDesc.ArraySize = 1;

	ID3D11Texture2D* pBackBuffer;

{

	tinyobj::attrib_t attrib;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.StructureByteStride = 0;

	{

	//インデックスバッファ作成

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Quit();

using std::cout; using std::endl;

	ConstantLight    pntLight; //点光源

	m_pDepthStencilTexture = NULL;

#endif

	m_pVertexBuffer = NULL;

	UINT flags = 0;

	m_pVertexBuffer = NULL;



	scDesc.SampleDesc.Quality = 0;

	//深度ステンシルバッファ作成

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_DOWN,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	irData.SysMemPitch = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_DestroyTexture(tex);

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pLightBuffer);

	Vertex* pVList = new Vertex[vcount];



	for (int i = 0; i < vcount; i++)

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	irData.SysMemPitch = 0;

 * Lesson 1: Hello World!

	D3D_FEATURE_LEVEL level;

	m_pRenderTargetView = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	};

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	}

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	D3D11_SUBRESOURCE_DATA vrData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 projection;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		&error,

	m_pIndexBuffer = NULL;

		pVList[i] = vertexlist[i];

	ConstantLightBuffer clb;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			{

			for (size_t v = 0; v < fv; v++)

	delete[] pIList;

/*

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_SAMPLER_DESC smpDesc;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.Format = txDesc.Format;

	irData.pSysMem = &pIList[0];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//テクスチャ読み込み



	//Key press surfaces constants







	m_Viewport.Height = (FLOAT)rect.Height();

	auto& shapes = reader.GetShapes();

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMaterial {

	}

	}



	return 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



#include <SDL.h>

			case SDLK_RIGHT:

		&m_pSwapChain,

		return hr;

			break;



	{

		flags,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return hr;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_VertexCount = 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//vector<Vertex> vertex_t;

	}

{



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	tinyobj::ObjReaderConfig reader_config;

			case SDLK_DOWN:



	m_pMatrixBuffer = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	for (int i = 0; i < vcount; i++)



{

	for (const auto& shape : shapes)

		&scDesc,

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		pVList[i] = vertexlist[i];



	float    farZ = 100.0f;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.Windowed = TRUE;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

};

	if (FAILED(hr))

		return hr;

		return hr;

	{



			//Select surfaces based on key press

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	UINT offsets = 0;

			{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



			// Loop over vertices in the face.



		return hr;



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				break;





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	UINT offsets = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		KEY_PRESS_SURFACE_UP,

	tinyobj::attrib_t attrib;

	SDL_DestroyRenderer(ren);

	D3D11_TEXTURE2D_DESC txDesc;

			}

	for (int i = 0; i < vcount; i++)

		D3D11_SDK_VERSION,



	D3D11_BUFFER_DESC vbDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

 * Lesson 1: Hello World!



};

		KEY_PRESS_SURFACE_LEFT,



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyRenderer(ren);



		size_t index_offset = 0;  // インデントのオフセット

	{



	tinyobj::ObjReaderConfig reader_config;



		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

struct ConstantMatrixBuffer {







	m_pTexture = NULL;

			default:

			case SDLK_UP:

}

CD3DTest::CD3DTest()

	if (FAILED(hr))

	if (FAILED(hr))

	}



	m_pTextureView = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	//頂点レイアウト作成



		exit(1);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



#include <iostream>

};



	}

	//Key press surfaces constants

	for (const auto& shape : shapes)

int SEGMENT = 36;

		1,



		return hr;

	if (FAILED(hr))

		delete[] pIList;

	m_pDepthStencilTexture = NULL;



	vrData.SysMemPitch = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//インデックスバッファ作成

	DXGI_SWAP_CHAIN_DESC scDesc;

	pBackBuffer->Release();

	Vertex* pVList = new Vertex[vcount];



	D3D11_BUFFER_DESC cbDesc;

		}

	SAFE_RELEASE(m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.SampleDesc.Quality = 0;

		&shapes,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];







	XMFLOAT4         ambient;  //環境光(r,g,b)

{

	scDesc.Windowed = TRUE;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	//vector<WORD> index_t;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (!error.empty())

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		&attrib,



	vbDesc.CPUAccessFlags = 0;

int main(int, char**)



	D3D11_BUFFER_DESC cbDesc;

	m_pIndexBuffer = NULL;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pVertexShader);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	//深度ステンシルバッファ作成

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return hr;

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.SampleDesc.Count = 1;

	D3D11_SUBRESOURCE_DATA vrData;



	if (FAILED(hr))



		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_LEFT:

	m_pImmediateContext = NULL;

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDevice);



#endif

	m_pDepthStencilView = NULL;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			//Select surfaces based on key press

	m_pDevice = NULL;

{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	std::vector<tinyobj::material_t> materials;

	if (!reader.Warning().empty())



#include <SDL.h>

	::GetClientRect(hwnd, &rect);

}

	std::vector<tinyobj::material_t> materials;

	m_Viewport.MaxDepth = 1.0f;



		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float    farZ = 100.0f;

		return hr;

	if (FAILED(hr))

	//vector<WORD> index_t;

/*

	for (size_t s = 0; s < shapes.size(); s++)

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標



{



	if (FAILED(hr))

		return hr;

	D3D11_BUFFER_DESC vbDesc;

	scDesc.Windowed = TRUE;

				break;





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		NULL,

	ibDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		cout << "SDL_INIT_ERROR" << endl;

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferDesc.Height = rect.Height();

	HRESULT              hr;

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	tinyobj::attrib_t attrib;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4X4 projection;

	if (!error.empty())

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	}



	vector<WORD> indexList;

	if (!reader.ParseFromFile(inputfile, reader_config))

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		return hr;

		&error,

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantLight {

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			case SDLK_LEFT:

	for (int j = 0; j < icount; j++)



	//vector<Vertex> vertex_t;



		{

		NULL,



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (const auto& shape : shapes)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//ビューポート設定

		m_pImmediateContext->ClearState();



	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyTexture(tex);

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_IndexCount = icount;

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pSwapChain);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





#define TINYOBJLOADER_IMPLEMENTATION

void CD3DTest::Render()

	//vector<Vertex> vertex_t;

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pSwapChain);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pLightBuffer);

struct ConstantLight {

	txDesc.SampleDesc.Count = 1;

	m_Viewport.Width = (FLOAT)rect.Width();



		return hr;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	std::string imagePath = "hello.bmp";

			break;

	SAFE_RELEASE(m_pDepthStencilTexture);

	/*

	ConstantLightBuffer clb;

		return hr;

	D3D11_BUFFER_DESC ibDesc;

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	CRect                rect;

	D3D11_BUFFER_DESC vbDesc;



	DXGI_SWAP_CHAIN_DESC scDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

		&m_pImmediateContext);

	txDesc.Width = rect.Width();

	m_pTextureView = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

/*

	UINT offsets = 0;

	m_IndexCount = 0;

		flags,

		&attrib,

			index_offset += num_vertices;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.MiscFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];



		//User presses a key

	if (FAILED(hr))

CD3DTest::CD3DTest()

		return hr;



	Vertex* pVList = new Vertex[vcount];

	for (const auto& shape : shapes)





	std::vector<tinyobj::shape_t> shapes;

	}

				indexlist.push_back(index);

	m_pSwapChain = NULL;

		SDL_RenderClear(ren);

			{

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

#include <iostream>

	vector<WORD> indexList;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	if (FAILED(hr))



}

			switch (e.key.keysym.sym)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	Vertex* pVList = new Vertex[vcount];

#include <iostream>

#endif

				tinyobj::real_t ty =

	ID3D11Texture2D* pBackBuffer;

		return hr;

};

	for (int j = 0; j < icount; j++)



	}

};

/*

void CD3DTest::Release()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	ConstantLightBuffer clb;

CD3DTest::~CD3DTest()

	int     vcount = vertexlist.size();

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::string inputfile = "test.obj";

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;









	for (int i = 0; i < 3; i++)



	std::string inputfile = "test.obj";

		else if (e.type == SDL_KEYDOWN)

	//ビューポート設定

		SDL_RenderClear(ren);

		SDL_Delay(1000);

	txDesc.CPUAccessFlags = 0;

};

	m_pLightBuffer = NULL;

	}

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			case SDLK_DOWN:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			// Loop over vertices in the face.



			index_offset += num_vertices;

		}

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))



				break;



	m_Angle += XMConvertToRadians(1.0f);



	{



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyRenderer(ren);

		SDL_RenderClear(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			case SDLK_RIGHT:



	reader_config.mtl_search_path = "./"; // Path to material files

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			default:

	if (FAILED(hr))



	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	m_IndexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	m_IndexCount = icount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

	bool ret = tinyobj::LoadObj(

			default:

	{





		}

		SDL_Delay(1000);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_TEXTURE2D_DESC txDesc;



	WORD* pIList = new WORD[icount];

	m_pInputLayout = NULL;

			case SDLK_LEFT:

	m_pImmediateContext = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

struct ConstantMaterial {

	UINT offsets = 0;



	bool ret = tinyobj::LoadObj(

		&error,

	{

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,





	scDesc.OutputWindow = hwnd;

	//First we need to start up SDL, and make sure it went ok

	ConstantLight    pntLight; //点光源

struct ConstantMaterial {

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

		}

				WORD index = idx.vertex_index;

		SDL_Delay(1000);

	SDL_DestroyTexture(tex);

	//深度ステンシルバッファ作成



	ZeroMemory(&txDesc, sizeof(txDesc));

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vrData.SysMemPitch = 0;

	tinyobj::ObjReader reader;

		{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	float    fov = XMConvertToRadians(20.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	D3D_FEATURE_LEVEL level;

			}

	}

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		flags,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_Viewport.TopLeftX = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	delete[] pIList;

};

	WORD   icount = indexList.size();

	XMFLOAT4         eyePos;   //視点座標



		KEY_PRESS_SURFACE_RIGHT,

	txDesc.MipLevels = 1;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//vector<Vertex> vertex_t;

	//頂点バッファ作成

			}

				// access to vertex

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

 * Lesson 1: Hello World!

	if (m_pImmediateContext)

		&level,

		&attrib,



	LoadObj(vertexlist, indexList);



	//vector<WORD> index_t;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	/*



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		delete[] pVList;

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pSwapChain,

	SDL_FreeSurface(bmp);

	//深度ステンシルバッファ作成

{

	tinyobj::ObjReader reader;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SDL_FreeSurface(bmp);

	UINT strides = sizeof(Vertex);

		&scDesc,



		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	UINT offsets = 0;

	//頂点レイアウト作成



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemPitch = 0;

	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);







	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}



}

	//ピクセルシェーダー生成



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			index_offset += fv;

	UINT offsets = 0;

	tinyobj::attrib_t attrib;

	m_pInputLayout = NULL;

{

	SDL_Quit();

	m_pSwapChain->Present(0, 0);

	m_pTexture = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			//Select surfaces based on key press

CD3DTest::CD3DTest()

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

}

		R"(cube.obj)");

	m_pSwapChain = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	//インデックスバッファ作成

		&m_pSwapChain,

	m_Viewport.TopLeftY = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



			}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pTexture = NULL;

	m_pPixelShader = NULL;

		{

	scDesc.OutputWindow = hwnd;

}

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.MiscFlags = 0;





			default:

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pVertexBuffer);

 * Lesson 1: Hello World!

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

struct ConstantLightBuffer {

	//テクスチャ読み込み

	m_Viewport.TopLeftY = 0;

	//ビューポート設定

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	reader_config.mtl_search_path = "./"; // Path to material files

	//頂点レイアウト作成



	m_VertexCount = vcount;

		//User requests quit

int main(int, char**)

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pSwapChain);



{





		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_RIGHT,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		R"(cube.obj)");

		size_t index_offset = 0;

	for (int j = 0; j < icount; j++)

	txDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

		return hr;



		size_t index_offset = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	{

		{

	m_pDepthStencilView = NULL;





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_DestroyRenderer(ren);

	vbDesc.MiscFlags = 0;

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ty =

	//Create Index

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.ArraySize = 1;

	irData.pSysMem = &pIList[0];

	m_Viewport.TopLeftY = 0;

	if (m_pImmediateContext)



	scDesc.Windowed = TRUE;

		if (e.type == SDL_QUIT)

	txDesc.ArraySize = 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	UINT flags = 0;

	return 0;

		return hr;

	cbDesc.CPUAccessFlags = 0;



	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	//テクスチャ読み込み

	Vertex* pVList = new Vertex[vcount];

};

			case SDLK_UP:

	SAFE_RELEASE(m_pRenderTargetView);

		exit(1);

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		SDL_RenderPresent(ren);

	//First we need to start up SDL, and make sure it went ok

			//Select surfaces based on key press

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.eyePos, eye);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}


				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!error.empty())

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&shapes,

	{

	::GetClientRect(hwnd, &rect);

	std::string imagePath = "hello.bmp";

		size_t index_offset = 0;  // インデントのオフセット

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.SampleDesc.Count = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		size_t index_offset = 0;

using std::cout; using std::endl;



	m_VertexCount = vcount;

	scDesc.OutputWindow = hwnd;

	txDesc.SampleDesc.Quality = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

int SEGMENT = 36;

		{

	}

		{

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}



				// access to vertex

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ConstantLight    pntLight; //点光源

	irData.SysMemPitch = 0;

	//頂点レイアウト作成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	/*



	for (int j = 0; j < icount; j++)

		&m_pDevice,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;



	m_Viewport.Width = (FLOAT)rect.Width();



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

void CD3DTest::Release()

#include <iostream>

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.TopLeftX = 0;

	}

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		// Loop over faces(polygon)

	::GetClientRect(hwnd, &rect);

	vector<WORD> indexList;

	{

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	irData.SysMemSlicePitch = 0;

	//Create Index

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&scDesc,



	//vector<Vertex> vertex_t;

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderClear(ren);

}

		NULL,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

		return hr;



	{

		exit(1);

	{

				indexlist.push_back(idx.vertex_index);

void CD3DTest::Release()

	};



	vbDesc.MiscFlags = 0;

		{

	cbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

		}



	SDL_DestroyWindow(win);



	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDepthStencilTexture);





		return hr;

	Vertex* pVList = new Vertex[vcount];

			switch (e.key.keysym.sym)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	int     vcount = vertexlist.size();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.CPUAccessFlags = 0;

	HRESULT              hr;

struct ConstantMaterial {

			int num_vertices = shape.mesh.num_face_vertices[f];

	WORD   icount = indexList.size();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				indexlist.push_back(idx.vertex_index);

 */

HRESULT CD3DTest::Create(HWND hwnd)



		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pMatrixBuffer = NULL;

	std::vector<tinyobj::material_t> materials;

{

	auto& shapes = reader.GetShapes();

	{

	for (const auto& shape : shapes)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4         eyePos;   //視点座標

		m_pImmediateContext->ClearState();



	D3D11_SUBRESOURCE_DATA irData;

		return hr;

		&shapes,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	int     vcount = vertexlist.size();

	m_pSampler = NULL;

		flags,

	cbDesc.CPUAccessFlags = 0;

		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	delete[] pVList;

	m_pDepthStencilTexture = NULL;



		KEY_PRESS_SURFACE_UP,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = vcount;

	txDesc.Height = rect.Height();

	tinyobj::attrib_t attrib;

/*

	bool ret = tinyobj::LoadObj(

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		pIList[j] = indexList[j];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	for (int i = 0; i < vcount; i++)

				break;



		size_t index_offset = 0;  // インデントのオフセット

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	vrData.SysMemPitch = 0;

	std::string imagePath = "hello.bmp";

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_SAMPLER_DESC smpDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//Key press surfaces constants

	return 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include "DirectXManager.h"

			exit(1);

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_TOTAL

		&scDesc,

		pVList[i] = vertexlist[i];





HRESULT CD3DTest::Create(HWND hwnd)



		exit(1);

		SDL_RenderClear(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	UINT strides = sizeof(Vertex);



	}

	scDesc.SampleDesc.Count = 1;

	//Clean up our objects and quit

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC ibDesc;

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_BUFFER_DESC ibDesc;

		&materials,

struct ConstantLight {

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&m_pDevice,



	std::string error;

		SDL_RenderPresent(ren);





	int     vcount = vertexlist.size();

	//ビューポート設定

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_RIGHT:

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	m_Viewport.MaxDepth = 1.0f;

}





	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pLightBuffer = NULL;

		pIList[j] = indexList[j];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			index_offset += num_vertices;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vector<WORD> indexList;

	{

#include <iostream>

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vrData.SysMemSlicePitch = 0;



		return hr;

				// access to vertex

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);

}

			{

		KEY_PRESS_SURFACE_TOTAL





	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pPixelShader = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

};

		else if (e.type == SDL_KEYDOWN)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.Height = (FLOAT)rect.Height();

	{

}

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.MipLevels = 1;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

	SDL_Event e;

	SAFE_RELEASE(m_pTexture);

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	if (FAILED(hr))

/*



	m_Viewport.MinDepth = 0.0f;

			exit(1);

		SDL_RenderPresent(ren);

		SDL_Delay(1000);

				tinyobj::real_t ty =

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			exit(1);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	float    nearZ = 0.1f;



		KEY_PRESS_SURFACE_TOTAL



CD3DTest::CD3DTest()



		&shapes,

	vbDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

		//User requests quit

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 ambient;           //環境(r,g,b)

		}

	}

			default:

	SAFE_RELEASE(m_pTexture);



	}

	std::string inputfile = "test.obj";

	{



	//Key press surfaces constants

		KEY_PRESS_SURFACE_TOTAL

		R"(cube.obj)");

		SDL_RenderPresent(ren);

				indexlist.push_back(index);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int j = 0; j < icount; j++)





			}

	m_pLightBuffer = NULL;







		if (!ret)

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	{

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	m_pLightBuffer = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex



	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&shapes,

		// Loop over faces(polygon)

	{

	SAFE_RELEASE(m_pVertexBuffer);

		NULL,



	// Loop over shapes

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pTextureView = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}*/

	{

	m_IndexCount = icount;

	//深度ステンシルバッファ作成

		delete[] pIList;

}

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//ビューポート設定

{

	}

	SDL_Event e;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		exit(1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		}



		return hr;

		return hr;

			default:

	auto& shapes = reader.GetShapes();



{

	m_pDepthStencilTexture = NULL;

		exit(1);

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyWindow(win);

	}

			for (size_t v = 0; v < num_vertices; v++)

				// access to vertex

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.StructureByteStride = 0;

	// Loop over shapes



	}

			}

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Height = rect.Height();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_Delay(1000);

		return hr;

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





		//User requests quit

	int     vcount = vertexlist.size();

#include <SDL.h>

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantMatrixBuffer cmb;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_VertexCount = vcount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	SAFE_RELEASE(m_pPixelShader);





	//First we need to start up SDL, and make sure it went ok

		&m_pDevice,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.ambient, lightAmbient);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//vector<WORD> index_t;

		delete[] pVList;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	irData.SysMemPitch = 0;

		// Loop over faces(polygon)

		cout << "SDL_INIT_ERROR" << endl;





			break;

	scDesc.SampleDesc.Quality = 0;

			{

	vector<WORD> indexList;

	txDesc.SampleDesc.Count = 1;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

			case SDLK_LEFT:

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	m_Viewport.TopLeftX = 0;



			default:

	m_Viewport.MinDepth = 0.0f;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pDevice = NULL;



	SDL_Event e;

	irData.SysMemPitch = 0;



}

	m_pRenderTargetView = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_UP,

		SDL_Delay(1000);

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pIndexBuffer);



struct ConstantLightBuffer {

	float    nearZ = 0.1f;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

	int     vcount = vertexlist.size();



#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DOWN,



		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	irData.SysMemSlicePitch = 0;

		delete[] pIList;

}

				WORD index = idx.vertex_index;

		}

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ConstantLightBuffer clb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyRenderer(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;





		if (e.type == SDL_QUIT)

	for (size_t s = 0; s < shapes.size(); s++)

	D3D_FEATURE_LEVEL level;

	vrData.SysMemSlicePitch = 0;

	if (m_pImmediateContext)

	}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点バッファ作成



	XMFLOAT4         eyePos;   //視点座標

struct ConstantLightBuffer {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&error,



			case SDLK_LEFT:

	for (int i = 0; i < 3; i++)

				break;

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			case SDLK_DOWN:

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Release()

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{



struct ConstantLightBuffer {

	SDL_Quit();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

#include <iostream>

		}

		&m_pDevice,

	m_pVertexShader = NULL;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)





				break;

CD3DTest::CD3DTest()

				WORD index = idx.vertex_index;

	XMFLOAT4         ambient;  //環境光(r,g,b)





		KEY_PRESS_SURFACE_TOTAL



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Height = rect.Height();

	m_pVertexShader = NULL;



	LoadObj(vertexlist, indexList);

	vector<Vertex> vertexlist;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pIndexBuffer);



#endif

		SDL_Delay(1000);



};

struct ConstantMatrixBuffer {



	Vertex* pVList = new Vertex[vcount];

};



#include "DirectXManager.h"

	SDL_Event e;

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	SAFE_RELEASE(m_pImmediateContext);

	ConstantLightBuffer clb;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	auto& shapes = reader.GetShapes();

		if (!ret)

			index_offset += fv;

	D3D11_BUFFER_DESC vbDesc;

	}

}

	SDL_DestroyTexture(tex);

	ibDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pTextureView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	{

	while (SDL_PollEvent(&e) != 0)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ConstantMatrixBuffer cmb;

		if (e.type == SDL_QUIT)





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		delete[] pIList;



	if (FAILED(hr))

	tinyobj::ObjReader reader;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





		return hr;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		{

	return 0;



	Release();



		if (!ret)

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_UP,

		&shapes,

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 world;

	D3D_FEATURE_LEVEL level;

			case SDLK_LEFT:

		pLevels,

	int     vcount = vertexlist.size();



	//深度ステンシルバッファ作成

	if (FAILED(hr))

	SDL_DestroyTexture(tex);



			index_offset += num_vertices;

	float    farZ = 100.0f;



		pLevels,

	/*

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain->Present(0, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	auto& materials = reader.GetMaterials();



	m_pTexture = NULL;

	dsDesc.Format = txDesc.Format;

		size_t index_offset = 0;  // インデントのオフセット

	return 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	float    fov = XMConvertToRadians(20.0f);





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	SAFE_RELEASE(m_pImmediateContext);



	reader_config.mtl_search_path = "./"; // Path to material files

			index_offset += num_vertices;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



			case SDLK_LEFT:

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

};

	//頂点シェーダー生成

			}





{

	float    farZ = 100.0f;

	ibDesc.CPUAccessFlags = 0;



		delete[] pIList;



	ID3D11Texture2D* pBackBuffer;



	SAFE_RELEASE(m_pVertexShader);

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				// access to vertex

	enum KeyPressSurfaces

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		return hr;

	auto& shapes = reader.GetShapes();



	//定数バッファ作成

#include "DirectXManager.h"

	{

			}

	SDL_DestroyTexture(tex);

				break;

	auto& shapes = reader.GetShapes();

	std::vector<tinyobj::shape_t> shapes;



	txDesc.MipLevels = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	float    farZ = 100.0f;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	//頂点シェーダー生成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyRenderer(ren);





		}

	SAFE_RELEASE(m_pVertexShader);

{

	tinyobj::ObjReaderConfig reader_config;

	//頂点バッファ作成





	SAFE_RELEASE(m_pImmediateContext);

CD3DTest::CD3DTest()

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4         eyePos;   //視点座標



	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	for (const auto& shape : shapes)

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

			case SDLK_DOWN:

			case SDLK_UP:

			break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

}
	{

	m_IndexCount = 0;



	}

	vbDesc.StructureByteStride = 0;

}

	CRect                rect;



	m_pMatrixBuffer = NULL;

	std::vector<tinyobj::shape_t> shapes;

	D3D11_BUFFER_DESC cbDesc;

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		m_pImmediateContext->ClearState();

			for (size_t v = 0; v < fv; v++)

	{

	vector<WORD> indexList;



	if (FAILED(hr))

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



};



	while (SDL_PollEvent(&e) != 0)

	}

};

	scDesc.OutputWindow = hwnd;

	m_pLightBuffer = NULL;

{



	};

int SEGMENT = 36;



				indexlist.push_back(index);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			case SDLK_LEFT:

	if (FAILED(hr))



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			for (size_t v = 0; v < num_vertices; v++)

CD3DTest::CD3DTest()



				tinyobj::real_t tx =

	ConstantMaterial material; //物体の質感

				break;

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4         eyePos;   //視点座標

			{





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		if (!reader.Error().empty())



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.SampleDesc.Quality = 0;

	m_pSampler = NULL;

		// Loop over faces(polygon)

		return hr;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	XMFLOAT4X4 projection;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	pBackBuffer->Release();

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_Delay(1000);

	float    farZ = 100.0f;



	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

				indexlist.push_back(index);

	cbDesc.StructureByteStride = 0;

		return hr;

	return hr;

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pDepthStencilTexture);

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);

{

	m_pRenderTargetView = NULL;

		pVList[i] = vertexlist[i];

	cbDesc.MiscFlags = 0;



	if (m_pImmediateContext)

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//Key press surfaces constants

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	m_pRenderTargetView = NULL;



CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	UINT strides = sizeof(Vertex);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pTexture);



	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	vrData.SysMemPitch = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	m_pSwapChain = NULL;

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	WORD* pIList = new WORD[icount];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pSampler = NULL;

	//Vertex* pVList = new Vertex[vcount];

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyWindow(win);

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMaterial material; //物体の質感



	m_pSwapChain = NULL;

	XMFLOAT4         eyePos;   //視点座標



	};

	{

		SDL_RenderPresent(ren);

	ConstantMatrixBuffer cmb;



	m_IndexCount = 0;











	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.TopLeftY = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	std::string imagePath = "hello.bmp";

{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantLightBuffer {

		//User presses a key

	{

	scDesc.SampleDesc.Count = 1;

	for (const auto& shape : shapes)

	SDL_DestroyTexture(tex);

		&level,

		return hr;



	if (!error.empty())

		1,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pInputLayout);

	//Vertex* pVList = new Vertex[vcount];

				vertex.push_back(vertex_tmp);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	if (m_pImmediateContext)

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pIList;

			}

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_LEFT,



};

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pSwapChain);

			{

{

	m_pIndexBuffer = NULL;

	//頂点バッファ作成

int main(int, char**)

		SDL_RenderPresent(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#include <iostream>

		{

struct ConstantMatrixBuffer {

	irData.SysMemSlicePitch = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.MiscFlags = 0;



	m_pDepthStencilTexture = NULL;

	//vector<WORD> index_t;

	{



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//vector<Vertex> vertex_t;

}

	float    nearZ = 0.1f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.Warning().empty())



	{



	XMFLOAT4X4 world;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pPixelShader = NULL;

	}

	{







		SDL_RenderPresent(ren);

				WORD index = idx.vertex_index;

#define TINYOBJLOADER_IMPLEMENTATION

#include <iostream>

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vrData.SysMemPitch = 0;

	}



		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



				vertex.push_back(vertex_tmp);

void CD3DTest::Release()



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<WORD> indexList;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string inputfile = "test.obj";

		else if (e.type == SDL_KEYDOWN)

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

};



		if (!ret)

	//定数バッファ作成

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				// access to vertex



struct ConstantLightBuffer {

	std::vector<tinyobj::shape_t> shapes;

		flags,

		if (!ret)



	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//vector<WORD> index_t;

}

		return 1;

		R"(cube.obj)");

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.MipLevels = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//頂点シェーダー生成

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		&m_pDevice,

	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pImmediateContext = NULL;

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		SDL_RenderPresent(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

		delete[] pVList;

	SAFE_RELEASE(m_pTexture);

		if (e.type == SDL_QUIT)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.SampleDesc.Count = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!error.empty())

	std::string inputfile = "test.obj";

	scDesc.OutputWindow = hwnd;

	cbDesc.CPUAccessFlags = 0;

		return hr;



	std::vector<tinyobj::material_t> materials;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.SampleDesc.Quality = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

		delete[] pVList;

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pInputLayout = NULL;

		&shapes,

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		pLevels,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

{

	m_pPixelShader = NULL;

				WORD index = idx.vertex_index;

	ibDesc.StructureByteStride = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			index_offset += num_vertices;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





		KEY_PRESS_SURFACE_DEFAULT,

	{

				break;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pSwapChain);

		}





				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	float    nearZ = 0.1f;

	{

		&m_pDevice,

	m_pRenderTargetView = NULL;

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pVertexShader = NULL;



	SDL_DestroyWindow(win);





	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

	{

	//頂点シェーダー生成

	SAFE_RELEASE(m_pDepthStencilTexture);



	UINT offsets = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return 1;









		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pVertexBuffer);

};

	m_pRenderTargetView = NULL;

	cbDesc.StructureByteStride = 0;

		}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		// Loop over faces(polygon)

		NULL,

		size_t index_offset = 0;  // インデントのオフセット

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.SampleDesc.Quality = 0;

		delete[] pVList;

	if (FAILED(hr))



	if (FAILED(hr))

	return 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		//User requests quit

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Quit();

				tinyobj::real_t ty =

	XMFLOAT4X4 view;

	ibDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	vector<Vertex> vertexlist;

int main(int, char**)

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (int i = 0; i < 3; i++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.MipLevels = 1;



	for (const auto& shape : shapes)



	return;

	SDL_DestroyRenderer(ren);

				break;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			{

	m_pPixelShader = NULL;

CD3DTest::~CD3DTest()



	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

 */

	ibDesc.CPUAccessFlags = 0;

		return hr;

	HRESULT              hr;

	SDL_DestroyRenderer(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_DOWN:



		}

		cout << "SDL_INIT_ERROR" << endl;

		return 1;



	std::vector<tinyobj::material_t> materials;

		&attrib,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	UINT flags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	}

}

			for (size_t v = 0; v < fv; v++)

	m_pSampler = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

	//ピクセルシェーダー生成

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

		SDL_Delay(1000);

	scDesc.Windowed = TRUE;

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))







{

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



				break;

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_UP,

		&level,

{

		SDL_Delay(1000);

	m_pSwapChain->Present(0, 0);

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.MiscFlags = 0;





				break;

	{

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDepthStencilTexture = NULL;



	SAFE_RELEASE(m_pSampler);

	scDesc.SampleDesc.Count = 1;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&error,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.Windowed = TRUE;



				break;

	{

	D3D11_BUFFER_DESC ibDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pTexture = NULL;

	m_pSwapChain->Present(0, 0);




