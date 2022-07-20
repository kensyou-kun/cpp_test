

	XMStoreFloat4(&clb.ambient, lightAmbient);

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4X4 projection;



}

	m_pVertexShader = NULL;

{



	txDesc.CPUAccessFlags = 0;

			//Select surfaces based on key press

		// Loop over faces(polygon)

	txDesc.MiscFlags = 0;

	SDL_Quit();

	}

	cbDesc.MiscFlags = 0;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);

		}

	vector<Vertex> vertexlist;

		if (e.type == SDL_QUIT)





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		return 1;

	m_pTexture = NULL;

}



	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			default:

	return 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_DestroyRenderer(ren);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	if (m_pImmediateContext)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	::GetClientRect(hwnd, &rect);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

			}

	irData.pSysMem = &pIList[0];

				// access to vertex

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

}

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}







					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

	}

	for (size_t s = 0; s < shapes.size(); s++)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_FreeSurface(bmp);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		pIList[j] = indexList[j];

			default:

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	delete[] pVList;

	{



	m_pTexture = NULL;

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (!reader.ParseFromFile(inputfile, reader_config))

			case SDLK_RIGHT:

	//テクスチャ読み込み



		SDL_RenderPresent(ren);

	m_Viewport.TopLeftY = 0;

	//頂点シェーダー生成



		return hr;

	ConstantMatrixBuffer cmb;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	delete[] pIList;

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pImmediateContext);

	m_pTexture = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

		size_t index_offset = 0;

		&m_pSwapChain,

#endif

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点シェーダー生成

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pImmediateContext);

			index_offset += num_vertices;

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	bool ret = tinyobj::LoadObj(

	std::string inputfile = "test.obj";

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		exit(1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.CPUAccessFlags = 0;

	UINT offsets = 0;



		delete[] pVList;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vrData.SysMemSlicePitch = 0;

	//Clean up our objects and quit

		&shapes,

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_IndexCount = icount;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyTexture(tex);

#ifdef _DEBUG



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



				tinyobj::real_t ty =



	for (int i = 0; i < 3; i++)



	if (FAILED(hr))

	}

			{

}

	m_pLightBuffer = NULL;

		D3D11_SDK_VERSION,

				tinyobj::real_t ty =

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_DestroyWindow(win);

			for (size_t v = 0; v < fv; v++)

	txDesc.SampleDesc.Count = 1;

	for (int i = 0; i < 3; i++)

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSampler = NULL;

		&level,

				vertex.push_back(vertex_tmp);

				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	pBackBuffer->Release();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	DXGI_SWAP_CHAIN_DESC scDesc;

	}

}





	//ビューポート設定

	{



	m_Viewport.TopLeftX = 0;





			case SDLK_RIGHT:

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	pBackBuffer->Release();

			index_offset += num_vertices;





	for (int j = 0; j < icount; j++)

				vertex.push_back(vertex_tmp);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//vector<Vertex> vertex_t;

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

			switch (e.key.keysym.sym)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantMatrixBuffer cmb;

		return hr;





	//深度ステンシルバッファ作成

}

CD3DTest::CD3DTest()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

		cout << "SDL_INIT_ERROR" << endl;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	{

		{

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	ID3D11Texture2D* pBackBuffer;

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	std::vector<tinyobj::shape_t> shapes;

	UINT offsets = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pVList;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_SAMPLER_DESC smpDesc;

		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//定数バッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pTextureView = NULL;

#include "DirectXManager.h"

struct ConstantLight {

	SDL_Quit();

{

	if (FAILED(hr))



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.CPUAccessFlags = 0;

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	vrData.SysMemSlicePitch = 0;

	//頂点シェーダー生成

	D3D11_TEXTURE2D_DESC txDesc;

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pImmediateContext);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MipLevels = 1;

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		return hr;



	SDL_Event e;



	//Clean up our objects and quit



	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.MipLevels = 1;

	txDesc.Usage = D3D11_USAGE_DEFAULT;





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

		R"(cube.obj)");

			default:



	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#include <iostream>

	D3D_FEATURE_LEVEL level;

 * Lesson 1: Hello World!

	XMFLOAT4         eyePos;   //視点座標







	D3D11_SUBRESOURCE_DATA vrData;

	return 0;

	float    nearZ = 0.1f;

	m_IndexCount = icount;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SDL_FreeSurface(suf);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

	D3D11_SAMPLER_DESC smpDesc;

		&error,



	int     vcount = vertexlist.size();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pVertexShader);

				WORD index = idx.vertex_index;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	/*

		//User presses a key

		if (!reader.Error().empty())

	XMFLOAT4X4 world;

	HRESULT              hr;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDepthStencilTexture);



	cbDesc.CPUAccessFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.Width = rect.Width();

	if (!reader.ParseFromFile(inputfile, reader_config))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		size_t index_offset = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



			}





	LoadObj(vertexlist, indexList);

	//Vertex* pVList = new Vertex[vcount];

	HRESULT              hr;

	SDL_Quit();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//テクスチャ読み込み

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pVertexShader);

	//Vertex* pVList = new Vertex[vcount];

	//ビューポート設定

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_Delay(1000);

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pDepthStencilView);

	}

			index_offset += num_vertices;



	m_Viewport.Width = (FLOAT)rect.Width();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SDL_Event e;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

		if (!reader.Error().empty())

		if (!reader.Error().empty())

	HRESULT              hr;

		KEY_PRESS_SURFACE_RIGHT,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pMatrixBuffer = NULL;

void CD3DTest::Release()



	SAFE_RELEASE(m_pDepthStencilView);

			case SDLK_LEFT:

	SAFE_RELEASE(m_pVertexBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.StructureByteStride = 0;

		&scDesc,

	auto& shapes = reader.GetShapes();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyTexture(tex);

	//深度ステンシルバッファ作成

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	LoadObj(vertexlist, indexList);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pMatrixBuffer);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_TEXTURE2D_DESC txDesc;

	}

		KEY_PRESS_SURFACE_LEFT,

	m_pDepthStencilView = NULL;



	m_VertexCount = 0;

};

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pSwapChain = NULL;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}



	}



		}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t tx =

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pPixelShader);

	return;

	if (FAILED(hr))

		{

	//Vertex* pVList = new Vertex[vcount];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		NULL,

	//頂点シェーダー生成





	m_IndexCount = 0;

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	Release();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

		exit(1);

				// access to vertex

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	tinyobj::ObjReader reader;



	txDesc.MipLevels = 1;

#include "DirectXManager.h"

	D3D_FEATURE_LEVEL level;

	txDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

	ID3D11Texture2D* pBackBuffer;



	//ビューポート設定



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += fv;



	CRect                rect;

	SDL_DestroyRenderer(ren);

		{

	//インデックスバッファ作成

			index_offset += fv;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t tx =

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	SAFE_RELEASE(m_pLightBuffer);





	D3D11_BUFFER_DESC vbDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pDepthStencilView = NULL;

	m_Viewport.TopLeftY = 0;

	D3D11_BUFFER_DESC cbDesc;

}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	return;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

 * Lesson 1: Hello World!



	vector<Vertex> vertexlist;



	XMFLOAT4         eyePos;   //視点座標

	tinyobj::attrib_t attrib;



	std::string inputfile = "test.obj";



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	{



		{

	m_IndexCount = 0;

#include <SDL.h>



	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_LEFT,

		&scDesc,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		exit(1);

		delete[] pIList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_IndexCount = icount;





	m_pImmediateContext = NULL;

				break;

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pDepthStencilTexture = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	LoadObj(vertexlist, indexList);

		pLevels,

		}









	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (const auto& shape : shapes)

		&level,

		if (!ret)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pVertexBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

 * Lesson 1: Hello World!



	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))





		KEY_PRESS_SURFACE_RIGHT,



		return 1;

				break;



	XMFLOAT4X4 world;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!error.empty())

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pTextureView = NULL;

	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vrData.pSysMem = &pVList[0];







	int     vcount = vertexlist.size();



		&m_pDevice,



		KEY_PRESS_SURFACE_DEFAULT,



		D3D11_SDK_VERSION,

	pBackBuffer->Release();



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	enum KeyPressSurfaces

		D3D11_SDK_VERSION,

	D3D11_BUFFER_DESC ibDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		//User requests quit

		{

	m_pImmediateContext = NULL;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	std::string inputfile = "test.obj";

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	float    farZ = 100.0f;

		}

			case SDLK_LEFT:

	txDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	//頂点レイアウト作成





	SDL_DestroyRenderer(ren);

	//頂点レイアウト作成

			break;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	dsDesc.Format = txDesc.Format;

			}

	SDL_DestroyRenderer(ren);

		return hr;

	//Key press surfaces constants

	SAFE_RELEASE(m_pDepthStencilView);

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		D3D11_SDK_VERSION,

	reader_config.mtl_search_path = "./"; // Path to material files

		&shapes,

	m_pTexture = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

{

	SAFE_RELEASE(m_pVertexShader);

		&error,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

				vertex.push_back(vertex_tmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string error;

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))



	}

	UINT strides = sizeof(Vertex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

				break;

	}

	//Key press surfaces constants

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		cout << "SDL_INIT_ERROR" << endl;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



{



	m_pSwapChain->Present(0, 0);

{

void CD3DTest::Release()

	cbDesc.StructureByteStride = 0;

			case SDLK_RIGHT:

			case SDLK_LEFT:

};

	float    fov = XMConvertToRadians(20.0f);

		R"(cube.obj)");

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	dsDesc.Texture2D.MipSlice = 0;

		pLevels,

	if (!reader.Warning().empty())



	/*

struct ConstantMatrixBuffer {

	m_pSwapChain = NULL;









		return hr;

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

	m_pSampler = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_SUBRESOURCE_DATA vrData;

		}

/*

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Quit();

			default:

	//頂点レイアウト作成

	D3D11_BUFFER_DESC cbDesc;

	// Loop over shapes





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		size_t index_offset = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.SampleDesc.Count = 1;

	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

	if (FAILED(hr))

				break;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

	m_pMatrixBuffer = NULL;





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			index_offset += num_vertices;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&materials,

		&m_pSwapChain,

	D3D11_SUBRESOURCE_DATA vrData;

		&error,

	dsDesc.Format = txDesc.Format;

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	Release();

	SDL_FreeSurface(bmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				// access to vertex



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

				break;

		return hr;

	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces

				break;

	SAFE_RELEASE(m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

{

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		SDL_RenderClear(ren);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vbDesc.CPUAccessFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			{

		D3D11_SDK_VERSION,

				break;

				break;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	scDesc.BufferDesc.Width = rect.Width();

	auto& shapes = reader.GetShapes();

		return hr;

}
{

	if (FAILED(hr))

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

		SDL_RenderPresent(ren);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

int SEGMENT = 36;

	cbDesc.CPUAccessFlags = 0;



		delete[] pIList;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes

	SAFE_RELEASE(m_pTexture);

	};



		//User requests quit



		D3D11_SDK_VERSION,

	std::vector<tinyobj::shape_t> shapes;

	SDL_FreeSurface(bmp);

	cbDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	for (int i = 0; i < vcount; i++)

		}





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit

			}

	vrData.SysMemSlicePitch = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ibDesc.MiscFlags = 0;

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Create Index

int main(int, char**)

	return 0;

	vrData.SysMemPitch = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	SAFE_RELEASE(m_pMatrixBuffer);



			//Select surfaces based on key press

	m_pMatrixBuffer = NULL;



	{

		{

				break;

#include "DirectXManager.h"

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		SDL_Delay(1000);

		&m_pDevice,

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				break;

	m_IndexCount = icount;

			exit(1);

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.SampleDesc.Count = 1;

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.StructureByteStride = 0;







	m_Viewport.MaxDepth = 1.0f;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	{

	return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	Release();

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	cbDesc.CPUAccessFlags = 0;



	m_pVertexShader = NULL;

	pBackBuffer->Release();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	}



		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pTextureView);

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	D3D11_SUBRESOURCE_DATA irData;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Event e;

	XMStoreFloat4(&clb.ambient, lightAmbient);



				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	m_pVertexShader = NULL;



	irData.pSysMem = &pIList[0];

				vertex.push_back(vertex_tmp);

			case SDLK_UP:

			}

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files





		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int j = 0; j < icount; j++)

		}

	SDL_DestroyTexture(tex);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vrData.pSysMem = &pVList[0];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{

	if (FAILED(hr))

	}

		return hr;

	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyWindow(win);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.SampleDesc.Quality = 0;



	txDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

 * Lesson 1: Hello World!

int SEGMENT = 36;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		}

				// access to vertex

		if (e.type == SDL_QUIT)

		&materials,

	scDesc.Windowed = TRUE;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

void CD3DTest::Release()

	Release();

	m_pIndexBuffer = NULL;

	scDesc.OutputWindow = hwnd;

	m_pMatrixBuffer = NULL;

	ibDesc.MiscFlags = 0;

		flags,

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	txDesc.SampleDesc.Count = 1;

		delete[] pIList;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

	return;





 */

	txDesc.Height = rect.Height();

	XMFLOAT4 pos;               //座標(x,y,z)

		else if (e.type == SDL_KEYDOWN)

	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	::ZeroMemory(&scDesc, sizeof(scDesc));

struct ConstantLightBuffer {



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);







	for (const auto& shape : shapes)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	txDesc.SampleDesc.Count = 1;

		&error,

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_DOWN,

			exit(1);

int SEGMENT = 36;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

 */



	SDL_DestroyWindow(win);

	for (int i = 0; i < 3; i++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

		return 1;

			{

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.eyePos, eye);

void CD3DTest::Release()

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(idx.vertex_index);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.pSysMem = &pIList[0];

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

			break;





	ibDesc.StructureByteStride = 0;

	Release();

	}

	delete[] pIList;

};

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,



	SAFE_RELEASE(m_pSwapChain);

	//ピクセルシェーダー生成



}



	float    farZ = 100.0f;

	{

	ID3D11Texture2D* pBackBuffer;

	//頂点レイアウト作成

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//ピクセルシェーダー生成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	//vector<WORD> index_t;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pRenderTargetView);

#include "DirectXManager.h"

			case SDLK_DOWN:

	Release();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		// Loop over faces(polygon)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTextureView);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				// access to vertex

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		// Loop over faces(polygon)

struct ConstantLight {

	m_VertexCount = vcount;

	SDL_Quit();

	{

			exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_VertexCount = vcount;

	cbDesc.StructureByteStride = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_FreeSurface(suf);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;

	if (FAILED(hr))

		SDL_RenderClear(ren);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	pBackBuffer->Release();

				break;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);







		return hr;

};

{

#include <iostream>

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);







	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

	return 0;

	SDL_FreeSurface(bmp);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		//User presses a key

struct ConstantMaterial {

	{

				break;

{

	if (FAILED(hr))



		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	scDesc.OutputWindow = hwnd;

			}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				vertex.push_back(vertex_tmp);



			}

	SDL_DestroyWindow(win);

	{

		if (!reader.Error().empty())

	m_Viewport.Height = (FLOAT)rect.Height();

};



	tinyobj::ObjReader reader;

	m_pTextureView = NULL;





				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))



	};

		pIList[j] = indexList[j];

	{

	scDesc.OutputWindow = hwnd;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	Release();

		&error,

using std::cout; using std::endl;







	vbDesc.MiscFlags = 0;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	Release();

	for (const auto& shape : shapes)

		&level,

	txDesc.MipLevels = 1;

	txDesc.SampleDesc.Quality = 0;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pTextureView);





CD3DTest::CD3DTest()

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);



	while (SDL_PollEvent(&e) != 0)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4 ambient;           //環境(r,g,b)

			break;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pInputLayout);

	D3D11_BUFFER_DESC ibDesc;



	txDesc.MiscFlags = 0;



	{





		return hr;

			index_offset += num_vertices;



	pBackBuffer->Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	m_IndexCount = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		{

	bool ret = tinyobj::LoadObj(





		D3D11_SDK_VERSION,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.StructureByteStride = 0;

	m_pRenderTargetView = NULL;

		SDL_RenderPresent(ren);

		return hr;







	m_pPixelShader = NULL;

		{



	m_pInputLayout = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (!reader.Warning().empty())

{

	vbDesc.StructureByteStride = 0;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



#include <iostream>

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		// Loop over faces(polygon)

	CRect                rect;

	m_pTextureView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pLightBuffer = NULL;

	std::string inputfile = "test.obj";



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



	{

	irData.pSysMem = &pIList[0];



		1,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	if (FAILED(hr))

		{

	if (!error.empty())

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.SampleDesc.Count = 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.MiscFlags = 0;

	}

	for (int i = 0; i < 3; i++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			index_offset += fv;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				// access to vertex

	m_pSwapChain->Present(0, 0);

	dsDesc.Format = txDesc.Format;

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_RIGHT,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	// Loop over shapes

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

		&scDesc,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}
			case SDLK_RIGHT:

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (const auto& shape : shapes)

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

		return hr;

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pPixelShader);





	m_pInputLayout = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;



		SDL_Delay(1000);

				indexlist.push_back(idx.vertex_index);

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pVertexBuffer);

			exit(1);

	WORD* pIList = new WORD[icount];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		D3D11_SDK_VERSION,

				WORD index = idx.vertex_index;

	std::vector<tinyobj::material_t> materials;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	auto& materials = reader.GetMaterials();







				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pVertexShader = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	// Loop over shapes

struct ConstantMaterial {

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	/*

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))

	txDesc.MiscFlags = 0;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			for (size_t v = 0; v < fv; v++)

		D3D11_SDK_VERSION,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	m_pRenderTargetView = NULL;



				break;

	scDesc.Windowed = TRUE;

	tinyobj::ObjReader reader;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	LoadObj(vertexlist, indexList);

	ibDesc.MiscFlags = 0;

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_IndexCount = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SAFE_RELEASE(m_pPixelShader);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				indexlist.push_back(idx.vertex_index);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	}

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D11_TEXTURE2D_DESC txDesc;

				WORD index = idx.vertex_index;

		if (!ret)

		else if (e.type == SDL_KEYDOWN)

	{

				break;





	if (!error.empty())

}

	m_IndexCount = 0;

	//インデックスバッファ作成



#define TINYOBJLOADER_IMPLEMENTATION



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	WORD* pIList = new WORD[icount];

			exit(1);

	tinyobj::ObjReader reader;

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&shapes,

	/*

	//Vertex* pVList = new Vertex[vcount];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Viewport.TopLeftY = 0;

	m_Viewport.MaxDepth = 1.0f;

			switch (e.key.keysym.sym)

	//Clean up our objects and quit

	txDesc.ArraySize = 1;

	// Loop over shapes

	HRESULT              hr;

	if (FAILED(hr))

	m_pDevice = NULL;

	delete[] pIList;



	return;

			{

}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pTextureView = NULL;

	}

	Release();

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();



	{

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				indexlist.push_back(index);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;

	auto& shapes = reader.GetShapes();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

				break;

using std::cout; using std::endl;



	std::vector<tinyobj::material_t> materials;

	if (!reader.Warning().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	vbDesc.StructureByteStride = 0;

		delete[] pIList;

		return hr;

{



{



}

	if (FAILED(hr))

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



using std::cout; using std::endl;





		&m_pDevice,





	vector<WORD> indexList;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		flags,

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_BUFFER_DESC cbDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);



	m_Viewport.TopLeftX = 0;

	scDesc.SampleDesc.Quality = 0;



	Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		&error,

	SAFE_RELEASE(m_pImmediateContext);

		{

	WORD   icount = indexList.size();

	{

	{

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		NULL,

}



				break;



				indexlist.push_back(index);

	return;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				indexlist.push_back(index);

	{



	txDesc.CPUAccessFlags = 0;



	//vector<Vertex> vertex_t;



};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	//頂点シェーダー生成

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_RIGHT,

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	int     vcount = vertexlist.size();



		return hr;



	SAFE_RELEASE(m_pRenderTargetView);

			{

	HRESULT              hr;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	enum KeyPressSurfaces

	dsDesc.Format = txDesc.Format;



	std::string inputfile = "test.obj";

	cbDesc.StructureByteStride = 0;

		{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#include <SDL.h>





	SDL_Quit();

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_TOTAL

}

		KEY_PRESS_SURFACE_DEFAULT,

	}

		return hr;

		SDL_RenderPresent(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		if (!ret)

};

	//ビューポート設定

		SDL_RenderPresent(ren);

	enum KeyPressSurfaces

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	vector<Vertex> vertexlist;

				WORD index = idx.vertex_index;



	txDesc.Height = rect.Height();

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	}

}

	//深度ステンシルバッファ作成

struct ConstantLightBuffer {

	//頂点レイアウト作成

	Release();



	tinyobj::attrib_t attrib;

	m_pTexture = NULL;

		&error,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pVertexShader = NULL;

	m_VertexCount = vcount;

		D3D11_SDK_VERSION,





}

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		size_t index_offset = 0;



	scDesc.Windowed = TRUE;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

	irData.SysMemSlicePitch = 0;

	vrData.SysMemPitch = 0;



	m_Viewport.Height = (FLOAT)rect.Height();

#include <SDL.h>

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&scDesc,

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	Release();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_VertexCount = vcount;

			case SDLK_RIGHT:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		{

		exit(1);

	if (!reader.ParseFromFile(inputfile, reader_config))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

{

	txDesc.SampleDesc.Quality = 0;

	//頂点レイアウト作成



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.SampleDesc.Quality = 0;

	ConstantLightBuffer clb;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	SAFE_RELEASE(m_pTextureView);

		&m_pDevice,

	float    farZ = 100.0f;

				vertex.push_back(vertex_tmp);



	ibDesc.StructureByteStride = 0;

	}

	m_pInputLayout = NULL;

{

		KEY_PRESS_SURFACE_LEFT,

	pBackBuffer->Release();

	m_pDevice = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

}

	XMFLOAT4         eyePos;   //視点座標



	txDesc.CPUAccessFlags = 0;









{

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	delete[] pIList;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.StructureByteStride = 0;

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	scDesc.Windowed = TRUE;



	irData.pSysMem = &pIList[0];



		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ConstantMaterial material; //物体の質感

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pSwapChain,

	//Create Index

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	auto& materials = reader.GetMaterials();

	//ピクセルシェーダー生成

	float    farZ = 100.0f;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

		//User presses a key

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pSampler = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



			switch (e.key.keysym.sym)

	for (size_t s = 0; s < shapes.size(); s++)

			//Select surfaces based on key press

	//ピクセルシェーダー生成

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

		&m_pImmediateContext);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.TopLeftY = 0;





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			switch (e.key.keysym.sym)

	for (int i = 0; i < 3; i++)

	m_pIndexBuffer = NULL;

	if (!error.empty())





	vector<WORD> indexList;

				WORD index = idx.vertex_index;

	}

	if (FAILED(hr))

	//ビューポート設定

	{

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDevice);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<WORD> indexList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_SAMPLER_DESC smpDesc;

struct ConstantMatrixBuffer {

	cbDesc.StructureByteStride = 0;

		delete[] pIList;



	m_pDepthStencilTexture = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#endif

	txDesc.MiscFlags = 0;



		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

	m_pRenderTargetView = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D11_SDK_VERSION,

	txDesc.SampleDesc.Quality = 0;



	SAFE_RELEASE(m_pPixelShader);

}



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

				WORD index = idx.vertex_index;

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#ifdef _DEBUG

		KEY_PRESS_SURFACE_UP,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pTextureView = NULL;



	return hr;

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//vector<WORD> index_t;

#ifdef _DEBUG

	enum KeyPressSurfaces

	vector<Vertex> vertexlist;

	m_Angle += XMConvertToRadians(1.0f);

		pVList[i] = vertexlist[i];

		delete[] pVList;

	XMFLOAT4         eyePos;   //視点座標

	txDesc.ArraySize = 1;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	};

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vbDesc.CPUAccessFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				break;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

			break;

	SDL_FreeSurface(bmp);

	if (m_pImmediateContext)

		return hr;

	}



	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	//頂点シェーダー生成

				break;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSampler = NULL;

	SDL_DestroyTexture(tex);

		if (!ret)

	/*

	SAFE_RELEASE(m_pLightBuffer);

	{

	m_pSwapChain = NULL;



	{

	m_Viewport.MinDepth = 0.0f;

				break;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (!error.empty())

		return hr;



	//頂点シェーダー生成

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

}
int main(int, char**)

	if (FAILED(hr))

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&scDesc,



	{

	irData.pSysMem = &pIList[0];

		return hr;

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	//頂点レイアウト作成

		pLevels,

	m_pDevice = NULL;



		&shapes,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	XMFLOAT4X4 view;

				break;

				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//深度ステンシルバッファ作成

	{

	m_pTexture = NULL;

	// Loop over shapes



	m_pDepthStencilTexture = NULL;

		flags,



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

{

	return hr;

	{

		KEY_PRESS_SURFACE_TOTAL

	{

	m_pDepthStencilTexture = NULL;

struct ConstantLightBuffer {

		return hr;

#ifdef _DEBUG

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

		pIList[j] = indexList[j];

	while (SDL_PollEvent(&e) != 0)

	}*/

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.Format = txDesc.Format;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DOWN,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];

	m_pVertexShader = NULL;

#include <iostream>

			switch (e.key.keysym.sym)

	int     vcount = vertexlist.size();

int main(int, char**)

	XMFLOAT4 ambient;           //環境(r,g,b)

	vrData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	SDL_DestroyWindow(win);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (e.type == SDL_QUIT)

			//Select surfaces based on key press

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	m_pSwapChain = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

	//インデックスバッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

	m_Viewport.MinDepth = 0.0f;

			case SDLK_LEFT:

	vrData.SysMemSlicePitch = 0;

		}

			int num_vertices = shape.mesh.num_face_vertices[f];

		}



using std::cout; using std::endl;

	SDL_DestroyWindow(win);

		{

	}

	scDesc.OutputWindow = hwnd;

	ibDesc.StructureByteStride = 0;



	vbDesc.StructureByteStride = 0;



{

	//頂点バッファ作成

	XMFLOAT4 ambient;           //環境(r,g,b)

	return hr;

	{

}

	dsDesc.Texture2D.MipSlice = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return 1;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		1,

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

int SEGMENT = 36;

	scDesc.OutputWindow = hwnd;



void CD3DTest::Render()

		{

	irData.SysMemPitch = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];

	//テクスチャ読み込み



	}

	D3D_FEATURE_LEVEL level;

int main(int, char**)

	if (FAILED(hr))

	float    farZ = 100.0f;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	WORD   icount = indexList.size();

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	HRESULT              hr;

		&materials,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

CD3DTest::CD3DTest()

	scDesc.OutputWindow = hwnd;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

				vertex.push_back(vertex_tmp);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

int main(int, char**)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	auto& materials = reader.GetMaterials();

	m_pDevice = NULL;

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MinDepth = 0.0f;



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = vcount;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pVertexBuffer = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_VertexCount = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	//頂点シェーダー生成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC cbDesc;

	txDesc.SampleDesc.Quality = 0;

		return hr;

	float    fov = XMConvertToRadians(20.0f);

	m_IndexCount = icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantMatrixBuffer cmb;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{



	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pLightBuffer);



};

		//User requests quit

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::ObjReaderConfig reader_config;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 ambient;           //環境(r,g,b)

CD3DTest::~CD3DTest()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//インデックスバッファ作成



	for (const auto& shape : shapes)

}



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	ConstantMatrixBuffer cmb;

	XMFLOAT4 pos;               //座標(x,y,z)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			//Select surfaces based on key press



	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

		m_pImmediateContext->ClearState();

	SDL_DestroyWindow(win);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SAFE_RELEASE(m_pDevice);

{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.MiscFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//ビューポート設定

	// Loop over shapes

}

}

	};

		if (!reader.Error().empty())

	while (SDL_PollEvent(&e) != 0)

				// access to vertex

			index_offset += fv;





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	Release();

	XMFLOAT4X4 view;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vector<WORD> indexList;

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pSwapChain);

	txDesc.Height = rect.Height();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			default:

struct ConstantMaterial {

	}

	SDL_DestroyTexture(tex);

	XMFLOAT4X4 world;

}

	if (FAILED(hr))



		&materials,

	m_pSampler = NULL;

	txDesc.MipLevels = 1;

	txDesc.SampleDesc.Quality = 0;

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	for (int i = 0; i < vcount; i++)



		return hr;

		//User presses a key

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();





			// Loop over vertices in the face.

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_TOTAL

	D3D11_BUFFER_DESC ibDesc;

	//頂点シェーダー生成

	D3D11_BUFFER_DESC cbDesc;

}

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::vector<tinyobj::material_t> materials;

	}*/

	}*/



			case SDLK_LEFT:







	txDesc.MipLevels = 1;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

void CD3DTest::Release()

	std::vector<tinyobj::shape_t> shapes;

#endif

	ConstantMatrixBuffer cmb;

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (!reader.Warning().empty())

		&m_pSwapChain,

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pImmediateContext);

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::string imagePath = "hello.bmp";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pTextureView);

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	Release();

		return hr;



	SDL_DestroyWindow(win);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

CD3DTest::~CD3DTest()



			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferDesc.Width = rect.Width();

	for (const auto& shape : shapes)

}

		return 1;

		SDL_RenderPresent(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{



	m_pDevice = NULL;

#include <SDL.h>

			default:

	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderClear(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))

	//インデックスバッファ作成

		exit(1);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		R"(cube.obj)");

	irData.SysMemPitch = 0;

	WORD* pIList = new WORD[icount];

		KEY_PRESS_SURFACE_DOWN,

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//深度ステンシルバッファ作成

	vrData.SysMemSlicePitch = 0;

			}

{

	m_IndexCount = 0;

	irData.SysMemSlicePitch = 0;

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&materials,

	cbDesc.CPUAccessFlags = 0;

	//ビューポート設定

 * Lesson 1: Hello World!

using std::cout; using std::endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	SAFE_RELEASE(m_pTextureView);

	D3D11_TEXTURE2D_DESC txDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

			{

	}

	vbDesc.CPUAccessFlags = 0;

	SDL_Quit();







	m_pSwapChain = NULL;

		}

			case SDLK_LEFT:

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.TopLeftX = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

 * Lesson 1: Hello World!

CD3DTest::CD3DTest()

	D3D_FEATURE_LEVEL level;

			}

		if (e.type == SDL_QUIT)

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	// Loop over shapes

	SAFE_RELEASE(m_pVertexShader);

	m_pLightBuffer = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pDepthStencilView = NULL;

}



	SAFE_RELEASE(m_pTexture);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		{

	LoadObj(vertexlist, indexList);



	if (FAILED(hr))



		{

	return;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



			case SDLK_RIGHT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}



	SAFE_RELEASE(m_pLightBuffer);

		pIList[j] = indexList[j];

		{

	SDL_DestroyTexture(tex);

	//Vertex* pVList = new Vertex[vcount];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		}

	tinyobj::ObjReader reader;

		return 1;

	}

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pTextureView = NULL;

	for (int i = 0; i < 3; i++)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.StructureByteStride = 0;

		&error,

		delete[] pIList;

	dsDesc.Texture2D.MipSlice = 0;



	SAFE_RELEASE(m_pMatrixBuffer);





	SDL_DestroyWindow(win);

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//ピクセルシェーダー生成

	}



	if (m_pImmediateContext)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDevice = NULL;

	cbDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.eyePos, eye);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		}

	ibDesc.StructureByteStride = 0;

		// Loop over faces(polygon)

			case SDLK_LEFT:

	SDL_FreeSurface(suf);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;







	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.MiscFlags = 0;

		{



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_UP,



CD3DTest::~CD3DTest()

		KEY_PRESS_SURFACE_RIGHT,

};

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pPixelShader = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	DXGI_SWAP_CHAIN_DESC scDesc;



	Release();

	tinyobj::attrib_t attrib;



	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	std::string imagePath = "hello.bmp";

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

		return hr;



	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}*/

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				break;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		delete[] pVList;

#ifdef _DEBUG

	{



		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.CPUAccessFlags = 0;

				indexlist.push_back(index);





	float    fov = XMConvertToRadians(20.0f);

	// Loop over shapes

/*

	ConstantMaterial material; //物体の質感



	//vector<Vertex> vertex_t;

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

				// access to vertex

		SDL_RenderPresent(ren);

	//頂点バッファ作成

void CD3DTest::Release()

	if (FAILED(hr))



	m_Viewport.Height = (FLOAT)rect.Height();

	UINT offsets = 0;

	for (const auto& shape : shapes)

	XMFLOAT4         ambient;  //環境光(r,g,b)



{



		exit(1);

	SAFE_RELEASE(m_pIndexBuffer);

{

	XMFLOAT4X4 projection;

	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	Release();

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pVertexBuffer);

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	txDesc.CPUAccessFlags = 0;



	//インデックスバッファ作成

	m_pInputLayout = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	m_pIndexBuffer = NULL;

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			case SDLK_UP:

	//インデックスバッファ作成

			{

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	tinyobj::ObjReader reader;

	std::string inputfile = "test.obj";





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		KEY_PRESS_SURFACE_RIGHT,

	vrData.SysMemSlicePitch = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (m_pImmediateContext)

{

	::GetClientRect(hwnd, &rect);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	delete[] pIList;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantLightBuffer {

		1,

	SDL_DestroyWindow(win);

{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	// Loop over shapes

	//Create Index

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D11_TEXTURE2D_DESC txDesc;

		&error,

		exit(1);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_DestroyRenderer(ren);

	m_pDepthStencilView = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	return 0;



	ID3D11Texture2D* pBackBuffer;

	m_Viewport.TopLeftY = 0;





			}

				tinyobj::real_t tx =



			index_offset += fv;

		pVList[i] = vertexlist[i];

		}

		KEY_PRESS_SURFACE_DEFAULT,

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_LEFT,





		return hr;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	pBackBuffer->Release();

	scDesc.SampleDesc.Quality = 0;

	dsDesc.Texture2D.MipSlice = 0;



				break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	delete[] pIList;

}

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.Width = rect.Width();

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

		{

#include "DirectXManager.h"

	m_pDepthStencilTexture = NULL;

			{



	txDesc.MiscFlags = 0;



	Release();

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			case SDLK_DOWN:

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		else if (e.type == SDL_KEYDOWN)

		return hr;

		KEY_PRESS_SURFACE_TOTAL



		D3D11_SDK_VERSION,

	if (!error.empty())



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Viewport.MaxDepth = 1.0f;

				indexlist.push_back(index);



	cbDesc.StructureByteStride = 0;





		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	}*/



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	irData.pSysMem = &pIList[0];

		{

	vector<Vertex> vertexlist;

		return hr;

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

using std::cout; using std::endl;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.pSysMem = &pIList[0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	enum KeyPressSurfaces

	m_Viewport.MaxDepth = 1.0f;

	{

	{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		//User requests quit

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.ArraySize = 1;

	auto& shapes = reader.GetShapes();

		if (!ret)



	m_pLightBuffer = NULL;



	XMFLOAT4 specular;          //反射(r,g,b)

		NULL,





	cbDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	SAFE_RELEASE(m_pMatrixBuffer);

	}

	vector<WORD> indexList;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

			for (size_t v = 0; v < fv; v++)

	UINT offsets = 0;



				indexlist.push_back(idx.vertex_index);

	for (size_t s = 0; s < shapes.size(); s++)



			case SDLK_LEFT:

	std::string error;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



HRESULT CD3DTest::Create(HWND hwnd)

	}



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}

	if (!error.empty())

			index_offset += fv;

	irData.pSysMem = &pIList[0];

}

	//深度ステンシルバッファ作成

	//vector<WORD> index_t;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	int     vcount = vertexlist.size();

	UINT strides = sizeof(Vertex);

		SDL_Delay(1000);

{

	m_pTexture = NULL;

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pLightBuffer);

	if (!reader.Warning().empty())



	for (int i = 0; i < vcount; i++)



	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Quit();

		SDL_Delay(1000);

		return hr;

			index_offset += num_vertices;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_UP,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		{

	m_pTextureView = NULL;

		&error,



		SDL_RenderClear(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			case SDLK_DOWN:

		}

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	cbDesc.StructureByteStride = 0;

			break;

#include <SDL.h>



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//ピクセルシェーダー生成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		}

	}

				tinyobj::real_t ty =

		// Loop over faces(polygon)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyRenderer(ren);



	delete[] pVList;

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pDepthStencilTexture);

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			index_offset += fv;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

/*





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexShader);

		&m_pSwapChain,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pDevice);

	reader_config.mtl_search_path = "./"; // Path to material files

		pVList[i] = vertexlist[i];

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

 */

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	SAFE_RELEASE(m_pIndexBuffer);

	std::string error;

	float    fov = XMConvertToRadians(20.0f);

	for (int i = 0; i < vcount; i++)

				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_UP,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Event e;

			}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pPixelShader);

			case SDLK_UP:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pDepthStencilView);



	cbDesc.MiscFlags = 0;



	std::vector<tinyobj::shape_t> shapes;





	{

		&materials,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	HRESULT              hr;

	tinyobj::ObjReaderConfig reader_config;

{



	while (SDL_PollEvent(&e) != 0)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_Delay(1000);



	}

	return 0;



{

		return hr;

	m_pTexture = NULL;

	m_pVertexBuffer = NULL;

	if (!error.empty())

	txDesc.SampleDesc.Quality = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyWindow(win);



	}

	SDL_DestroyTexture(tex);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		return 1;

	vrData.SysMemSlicePitch = 0;

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.ArraySize = 1;

	if (FAILED(hr))

void CD3DTest::Release()

	for (int i = 0; i < vcount; i++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

int main(int, char**)

	vbDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pInputLayout);

	delete[] pIList;

	if (m_pImmediateContext)

	cbDesc.CPUAccessFlags = 0;

	return 0;

		return hr;



		&level,

int main(int, char**)

	if (m_pImmediateContext)





				vertex.push_back(vertex_tmp);

	ID3D11Texture2D* pBackBuffer;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	txDesc.CPUAccessFlags = 0;

		&m_pDevice,



	auto& attrib = reader.GetAttrib();

			}

				tinyobj::real_t ty =

		}

HRESULT CD3DTest::Create(HWND hwnd)



	D3D11_BUFFER_DESC cbDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	pBackBuffer->Release();

	pBackBuffer->Release();

};

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pTextureView);

 */

	pBackBuffer->Release();



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



			case SDLK_UP:

{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	pBackBuffer->Release();









	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		size_t index_offset = 0;

	SAFE_RELEASE(m_pTexture);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		{

		KEY_PRESS_SURFACE_RIGHT,

}

		delete[] pVList;

	::GetClientRect(hwnd, &rect);

		return hr;

{

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pSwapChain);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	for (size_t s = 0; s < shapes.size(); s++)



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	m_Viewport.Width = (FLOAT)rect.Width();

		&level,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}



	ibDesc.StructureByteStride = 0;



}
	if (!reader.Warning().empty())

	txDesc.ArraySize = 1;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pRenderTargetView);

	LoadObj(vertexlist, indexList);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

		delete[] pIList;



		//User presses a key

	//First we need to start up SDL, and make sure it went ok

		// Loop over faces(polygon)

		// Loop over faces(polygon)

	}

}

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pDevice,

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pDevice);

				WORD index = idx.vertex_index;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		KEY_PRESS_SURFACE_DEFAULT,

	float    nearZ = 0.1f;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

{

	m_Angle += XMConvertToRadians(1.0f);

		SDL_RenderClear(ren);

		{

/*

	for (int i = 0; i < vcount; i++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	{

};

	m_pVertexShader = NULL;

	{

	//Create Index

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	SDL_FreeSurface(suf);

{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//First we need to start up SDL, and make sure it went ok

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::string imagePath = "hello.bmp";

	//Key press surfaces constants



	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	XMFLOAT4 specular;          //反射(r,g,b)



		{



	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);



	irData.SysMemPitch = 0;



#define TINYOBJLOADER_IMPLEMENTATION

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext = NULL;



	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;



		//User requests quit



	m_pRenderTargetView = NULL;

};

}

	if (FAILED(hr))

}

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.SampleDesc.Count = 1;

 * Lesson 1: Hello World!

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Quit();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			for (size_t v = 0; v < num_vertices; v++)

#ifdef _DEBUG

	dsDesc.Texture2D.MipSlice = 0;

#include "DirectXManager.h"

			default:

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	tinyobj::ObjReaderConfig reader_config;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



}

	::GetClientRect(hwnd, &rect);

int main(int, char**)

	int     vcount = vertexlist.size();



	SAFE_RELEASE(m_pIndexBuffer);

	irData.pSysMem = &pIList[0];

			// Loop over vertices in the face.

	if (FAILED(hr))







	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	delete[] pVList;

	SDL_DestroyRenderer(ren);



struct ConstantLightBuffer {

		}

	//vector<Vertex> vertex_t;

		cout << "SDL_INIT_ERROR" << endl;

				// access to vertex





#include <SDL.h>

	}*/

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pSampler);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int j = 0; j < icount; j++)

	{

	//vector<Vertex> vertex_t;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.TopLeftX = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };







		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

		return hr;

	m_pTexture = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pLightBuffer);

int SEGMENT = 36;

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	D3D11_SUBRESOURCE_DATA irData;

}

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pPixelShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		cout << "SDL_INIT_ERROR" << endl;

	//ビューポート設定

	SAFE_RELEASE(m_pVertexBuffer);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_DestroyTexture(tex);

	m_Viewport.TopLeftX = 0;

	SDL_FreeSurface(bmp);

	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

#include <iostream>

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.MipLevels = 1;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	D3D11_BUFFER_DESC cbDesc;

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&txDesc, sizeof(txDesc));

			index_offset += num_vertices;



	auto& attrib = reader.GetAttrib();

		SDL_RenderPresent(ren);



	D3D11_SUBRESOURCE_DATA vrData;



	m_IndexCount = 0;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		}



		if (!reader.Error().empty())

	scDesc.Windowed = TRUE;



		{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	return;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pSampler);

	enum KeyPressSurfaces

	ibDesc.StructureByteStride = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;



	while (SDL_PollEvent(&e) != 0)

	dsDesc.Texture2D.MipSlice = 0;

	m_pSwapChain = NULL;

#ifdef _DEBUG

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	irData.SysMemSlicePitch = 0;

/*

		return hr;

	bool ret = tinyobj::LoadObj(

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	return;

	SAFE_RELEASE(m_pSampler);

		delete[] pVList;

		{

	D3D11_SUBRESOURCE_DATA irData;

	m_pTextureView = NULL;

	WORD* pIList = new WORD[icount];



#include "DirectXManager.h"

		return hr;

	irData.pSysMem = &pIList[0];

	//Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	vector<Vertex> vertexlist;

				WORD index = idx.vertex_index;



}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 ambient;           //環境(r,g,b)

	vector<WORD> indexList;

	ibDesc.CPUAccessFlags = 0;

	for (const auto& shape : shapes)

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

			//Select surfaces based on key press

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

	m_pSwapChain = NULL;

	m_VertexCount = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pLightBuffer = NULL;

	m_IndexCount = 0;

			index_offset += fv;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		if (!reader.Error().empty())



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#endif

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//頂点バッファ作成



	HRESULT              hr;

		pIList[j] = indexList[j];

		KEY_PRESS_SURFACE_TOTAL

		delete[] pVList;





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_FreeSurface(suf);

#include <iostream>

	scDesc.OutputWindow = hwnd;

	//深度ステンシルバッファ作成

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.SampleDesc.Quality = 0;

				break;

void CD3DTest::Release()

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

}

	//定数バッファ作成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyWindow(win);



		return hr;

		exit(1);

	if (FAILED(hr))

	{

	std::string inputfile = "test.obj";

			default:

	//Key press surfaces constants

	SDL_Quit();

	if (FAILED(hr))



	SDL_Event e;

		exit(1);

	vector<WORD> indexList;



	SAFE_RELEASE(m_pSampler);

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		delete[] pIList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferCount = 1;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			// Loop over vertices in the face.

	m_pDevice = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pInputLayout);

	for (size_t s = 0; s < shapes.size(); s++)

HRESULT CD3DTest::Create(HWND hwnd)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





			index_offset += fv;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pLightBuffer);





		return hr;

	//頂点バッファ作成

	SAFE_RELEASE(m_pDepthStencilView);



HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

	txDesc.Height = rect.Height();



	SDL_Quit();

	//頂点レイアウト作成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ConstantMaterial material; //物体の質感



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pInputLayout);

	std::string error;

	irData.SysMemSlicePitch = 0;

			default:



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t tx =

	delete[] pVList;

		KEY_PRESS_SURFACE_DOWN,

{





	cbDesc.Usage = D3D11_USAGE_DEFAULT;







	}*/

using std::cout; using std::endl;

	scDesc.SampleDesc.Quality = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	txDesc.ArraySize = 1;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))



	D3D_FEATURE_LEVEL level;

	return hr;

	m_pMatrixBuffer = NULL;



}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			index_offset += fv;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		1,



CD3DTest::CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#ifdef _DEBUG

	for (int i = 0; i < vcount; i++)

		D3D11_SDK_VERSION,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		&m_pDevice,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

		{

		return hr;

	m_Viewport.MaxDepth = 1.0f;

	m_pInputLayout = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	delete[] pVList;

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	m_pTexture = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			default:

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	m_pSwapChain = NULL;

	scDesc.BufferDesc.Height = rect.Height();



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pTextureView = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

	txDesc.MiscFlags = 0;

		flags,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pDepthStencilTexture);

	int     vcount = vertexlist.size();



{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;



	enum KeyPressSurfaces

	m_pMatrixBuffer = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		}

struct ConstantMatrixBuffer {

	txDesc.Height = rect.Height();

		//User requests quit

	m_pSwapChain->Present(0, 0);

{

	for (const auto& shape : shapes)

	txDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4         ambient;  //環境光(r,g,b)



	{

		return hr;



{

	std::string inputfile = "test.obj";

}


	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

		return hr;



		KEY_PRESS_SURFACE_RIGHT,



	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.ArraySize = 1;

	cbDesc.StructureByteStride = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;

		&shapes,

		//User presses a key

		&scDesc,

		KEY_PRESS_SURFACE_TOTAL

#include <SDL.h>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	//インデックスバッファ作成



	SDL_DestroyRenderer(ren);

HRESULT CD3DTest::Create(HWND hwnd)

#include <SDL.h>

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_IndexCount = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





		}

		size_t index_offset = 0;



	XMFLOAT4 ambient;           //環境(r,g,b)

CD3DTest::CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         eyePos;   //視点座標

		return hr;

			{

	D3D11_BUFFER_DESC ibDesc;



};

			for (size_t v = 0; v < fv; v++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

CD3DTest::~CD3DTest()

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 pos;               //座標(x,y,z)



	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pRenderTargetView);

	HRESULT              hr;

	m_pTexture = NULL;

	SDL_Event e;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";



	m_pSwapChain->Present(0, 0);





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			}

	return;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//頂点シェーダー生成

	if (FAILED(hr))

	//Clean up our objects and quit



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			index_offset += num_vertices;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	vrData.pSysMem = &pVList[0];

	UINT strides = sizeof(Vertex);

		}

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//テクスチャ読み込み

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pIndexBuffer = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		size_t index_offset = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				break;

		pIList[j] = indexList[j];



	txDesc.ArraySize = 1;



		D3D11_SDK_VERSION,

}


	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	UINT strides = sizeof(Vertex);

	SDL_DestroyTexture(tex);

			}

	m_Viewport.MinDepth = 0.0f;

	DXGI_SWAP_CHAIN_DESC scDesc;

			default:

	m_pSwapChain->Present(0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	//vector<Vertex> vertex_t;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

CD3DTest::~CD3DTest()

		SDL_RenderClear(ren);

	std::string error;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	pBackBuffer->Release();

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	}

			//Select surfaces based on key press

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pLightBuffer);

	std::string inputfile = "test.obj";



	SAFE_RELEASE(m_pImmediateContext);

	//頂点レイアウト作成

	Release();



};

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//ビューポート設定

	scDesc.SampleDesc.Count = 1;

	SDL_FreeSurface(suf);



				tinyobj::real_t tx =

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);



	D3D11_TEXTURE2D_DESC txDesc;

	if (!error.empty())

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_DestroyWindow(win);

	/*

			//Select surfaces based on key press

			for (size_t v = 0; v < fv; v++)





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	WORD   icount = indexList.size();

	{

		SDL_RenderPresent(ren);

	txDesc.Width = rect.Width();

				WORD index = idx.vertex_index;





		&shapes,



	m_pLightBuffer = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pRenderTargetView);

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		&error,

	m_pSwapChain->Present(0, 0);

	if (!error.empty())

	LoadObj(vertexlist, indexList);

				break;

	::GetClientRect(hwnd, &rect);

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return 1;





	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_RenderPresent(ren);

	if (FAILED(hr))





	cbDesc.CPUAccessFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	WORD   icount = indexList.size();

}



	txDesc.CPUAccessFlags = 0;



			}

	cbDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		// Loop over faces(polygon)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	cbDesc.MiscFlags = 0;

	scDesc.Windowed = TRUE;



	{

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pTexture);

	SDL_Event e;

struct ConstantLight {

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	txDesc.Width = rect.Width();



	//Clean up our objects and quit

		&level,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&m_pImmediateContext);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	tinyobj::attrib_t attrib;



	}

		&materials,

};

	WORD* pIList = new WORD[icount];

		pVList[i] = vertexlist[i];

	//Vertex* pVList = new Vertex[vcount];



	auto& shapes = reader.GetShapes();

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			// Loop over vertices in the face.



			// Loop over vertices in the face.

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (int i = 0; i < 3; i++)





		exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

}

/*

	m_pRenderTargetView = NULL;

	tinyobj::attrib_t attrib;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;

	vrData.SysMemPitch = 0;

{



	if (FAILED(hr))

int SEGMENT = 36;

}

	};



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexBuffer);

	}*/

	}

	dsDesc.Texture2D.MipSlice = 0;

		size_t index_offset = 0;



	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

	delete[] pVList;



};

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		KEY_PRESS_SURFACE_TOTAL

			index_offset += num_vertices;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		D3D11_SDK_VERSION,

	D3D11_SUBRESOURCE_DATA vrData;

	pBackBuffer->Release();



	D3D11_TEXTURE2D_DESC txDesc;

		// Loop over faces(polygon)

	}

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;





}

		&m_pImmediateContext);

		&scDesc,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//ピクセルシェーダー生成

	if (FAILED(hr))

	//vector<WORD> index_t;

	SDL_DestroyRenderer(ren);

	//First we need to start up SDL, and make sure it went ok

	vector<WORD> indexList;

				break;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMFLOAT4 attenuate;         //減衰(a,b,c)





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyWindow(win);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	enum KeyPressSurfaces

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.Windowed = TRUE;



	if (!reader.Warning().empty())

	SDL_DestroyRenderer(ren);

}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_DOWN,

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4X4 world;

	float    farZ = 100.0f;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

	txDesc.Height = rect.Height();

				// access to vertex

	irData.SysMemSlicePitch = 0;

	m_pVertexBuffer = NULL;







	m_pInputLayout = NULL;

			// Loop over vertices in the face.



	D3D11_BUFFER_DESC vbDesc;

};

			{

}

	scDesc.Windowed = TRUE;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Quit();



	if (FAILED(hr))



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pVertexShader = NULL;



	scDesc.OutputWindow = hwnd;



	}



		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_RIGHT,

		return 1;

	m_pTextureView = NULL;

	m_pLightBuffer = NULL;

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	scDesc.Windowed = TRUE;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyRenderer(ren);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{



			case SDLK_DOWN:

	ibDesc.StructureByteStride = 0;

		return hr;

CD3DTest::CD3DTest()

	dsDesc.Texture2D.MipSlice = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		delete[] pVList;

	SAFE_RELEASE(m_pRenderTargetView);

	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4X4 view;

	UINT offsets = 0;

	}

		//User presses a key

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		{



			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	UINT flags = 0;

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&level,

	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			break;

		if (!ret)

	scDesc.Windowed = TRUE;



	//インデックスバッファ作成

	ConstantMatrixBuffer cmb;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include <iostream>



	CRect                rect;

		&attrib,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,



	m_pSwapChain = NULL;

		if (e.type == SDL_QUIT)

	txDesc.Width = rect.Width();

/*

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	irData.SysMemPitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		SDL_Delay(1000);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



			{


