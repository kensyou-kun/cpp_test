	if (FAILED(hr))

		&error,

				tinyobj::real_t ty =

		}

	//定数バッファ作成

	cbDesc.MiscFlags = 0;



			case SDLK_UP:

		cout << "SDL_INIT_ERROR" << endl;



	m_VertexCount = 0;





		if (!ret)

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	m_pTextureView = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			//Select surfaces based on key press

#ifdef _DEBUG



	ibDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;

	m_pDepthStencilView = NULL;

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	float    nearZ = 0.1f;

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4X4 projection;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			{

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	irData.SysMemPitch = 0;

			case SDLK_UP:

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4         ambient;  //環境光(r,g,b)



		&error,



	//頂点レイアウト作成

	{

	auto& attrib = reader.GetAttrib();

	m_pLightBuffer = NULL;

		}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_RenderClear(ren);



}

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.OutputWindow = hwnd;



	m_pPixelShader = NULL;

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	for (int i = 0; i < 3; i++)

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	pBackBuffer->Release();

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pSampler);

	pBackBuffer->Release();

			// Loop over vertices in the face.



		}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

struct ConstantMatrixBuffer {

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			}

	irData.pSysMem = &pIList[0];

	m_pSwapChain = NULL;

		return hr;



	D3D11_BUFFER_DESC vbDesc;





	// Loop over shapes



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::CD3DTest()

		SDL_RenderPresent(ren);

	m_pDepthStencilView = NULL;

				break;

	vector<Vertex> vertexlist;

		//User presses a key

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	CRect                rect;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{

	ID3D11Texture2D* pBackBuffer;



using std::cout; using std::endl;



	txDesc.ArraySize = 1;



	ZeroMemory(&dsDesc, sizeof(dsDesc));





};

{

		}

	m_pDepthStencilView = NULL;

				break;





			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

		return hr;

		}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pDepthStencilView = NULL;



	if (FAILED(hr))



	if (FAILED(hr))

	SDL_FreeSurface(bmp);

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		1,



	{

{

		KEY_PRESS_SURFACE_DEFAULT,

	for (const auto& shape : shapes)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D11_SAMPLER_DESC smpDesc;

			int num_vertices = shape.mesh.num_face_vertices[f];

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pSwapChain);



	std::string error;

	enum KeyPressSurfaces

	{

	m_pDepthStencilView = NULL;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				break;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	CRect                rect;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



struct ConstantMatrixBuffer {

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	vbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pDepthStencilTexture = NULL;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	while (SDL_PollEvent(&e) != 0)

	SDL_FreeSurface(suf);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pVertexShader);

}

	LoadObj(vertexlist, indexList);

int main(int, char**)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pRenderTargetView);



			switch (e.key.keysym.sym)

	{

}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#endif



	for (const auto& shape : shapes)

		delete[] pVList;

	return;

		NULL,

	m_pMatrixBuffer = NULL;

			{

	txDesc.ArraySize = 1;

		{



		SDL_Delay(1000);

	SAFE_RELEASE(m_pVertexBuffer);

	//Vertex* pVList = new Vertex[vcount];

			{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_TEXTURE2D_DESC txDesc;

{

struct ConstantLight {

		&level,

};

#include "DirectXManager.h"

		pLevels,

				// access to vertex



	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&m_pDevice,





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Quit();



	SAFE_RELEASE(m_pInputLayout);





	std::string imagePath = "hello.bmp";



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.MiscFlags = 0;

			{

		}



}

	D3D11_SUBRESOURCE_DATA vrData;

	//vector<WORD> index_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		SDL_Delay(1000);

	//頂点レイアウト作成

			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	Release();

	if (FAILED(hr))

		SDL_RenderClear(ren);

};

		return hr;



	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	D3D11_SAMPLER_DESC smpDesc;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	UINT offsets = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pIndexBuffer = NULL;

		if (e.type == SDL_QUIT)

	//テクスチャ読み込み

	tinyobj::ObjReaderConfig reader_config;

	//ビューポート設定

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&attrib,

	//First we need to start up SDL, and make sure it went ok

{

	}

	scDesc.SampleDesc.Count = 1;



	};

				vertex.push_back(vertex_tmp);

				break;

			// Loop over vertices in the face.

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			for (size_t v = 0; v < num_vertices; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);



	auto& shapes = reader.GetShapes();



	m_pDevice = NULL;

	m_pVertexShader = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{





	if (FAILED(hr))



				indexlist.push_back(idx.vertex_index);

	m_pVertexBuffer = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ID3D11Texture2D* pBackBuffer;

	scDesc.OutputWindow = hwnd;



	float    fov = XMConvertToRadians(20.0f);

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



#include "DirectXManager.h"



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	irData.SysMemSlicePitch = 0;

				vertex.push_back(vertex_tmp);

		return 1;

	{

	delete[] pIList;



	vbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	dsDesc.Texture2D.MipSlice = 0;



	if (!reader.ParseFromFile(inputfile, reader_config))

	ID3D11Texture2D* pBackBuffer;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pSwapChain->Present(0, 0);

	XMFLOAT4 pos;               //座標(x,y,z)





		SDL_RenderCopy(ren, tex, NULL, NULL);

		NULL,

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

	XMFLOAT4X4 world;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

	m_pSwapChain->Present(0, 0);

	HRESULT              hr;

		}



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	m_VertexCount = 0;

	scDesc.BufferDesc.Height = rect.Height();

	m_pRenderTargetView = NULL;

	D3D11_BUFFER_DESC vbDesc;

	for (const auto& shape : shapes)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pInputLayout);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	WORD   icount = indexList.size();

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pDevice);

	txDesc.ArraySize = 1;



	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

		//User presses a key

	WORD   icount = indexList.size();

	vbDesc.MiscFlags = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	pBackBuffer->Release();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	}

				break;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D_FEATURE_LEVEL level;

	D3D11_TEXTURE2D_DESC txDesc;



int main(int, char**)





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pSwapChain = NULL;

	// Loop over shapes

	std::string imagePath = "hello.bmp";

		pIList[j] = indexList[j];

{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		flags,

			for (size_t v = 0; v < num_vertices; v++)

	return;



{

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.MiscFlags = 0;

		return hr;

#include <iostream>

		&m_pImmediateContext);

	}

	float    farZ = 100.0f;

	D3D11_SUBRESOURCE_DATA irData;

		&error,

	ibDesc.ByteWidth = sizeof(WORD) * icount;





}

#ifdef _DEBUG

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DEFAULT,



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::GetClientRect(hwnd, &rect);

	vrData.pSysMem = &pVList[0];



	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		pIList[j] = indexList[j];

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	vrData.SysMemSlicePitch = 0;





	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	pBackBuffer->Release();

};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			break;

	//テクスチャ読み込み

	UINT offsets = 0;

	SDL_DestroyTexture(tex);

	{

		flags,

	m_pVertexBuffer = NULL;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	{

			}





	XMFLOAT4 attenuate;         //減衰(a,b,c)





				indexlist.push_back(index);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::ZeroMemory(&scDesc, sizeof(scDesc));



		D3D11_SDK_VERSION,

	{

	SDL_DestroyRenderer(ren);



	m_pImmediateContext = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	m_pRenderTargetView = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		else if (e.type == SDL_KEYDOWN)



	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pImmediateContext);

		&shapes,

	if (FAILED(hr))



	txDesc.MipLevels = 1;

	//ビューポート設定





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				// access to vertex

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}

#include <SDL.h>

	{

	m_pDepthStencilView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)



				break;

				indexlist.push_back(index);

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	m_pPixelShader = NULL;

	irData.SysMemPitch = 0;

}

	m_VertexCount = 0;

	txDesc.CPUAccessFlags = 0;

		//User requests quit

	Release();



	{



#include <iostream>

	XMFLOAT4 ambient;           //環境(r,g,b)

	ConstantMaterial material; //物体の質感

	txDesc.SampleDesc.Quality = 0;

struct ConstantLightBuffer {

	m_pLightBuffer = NULL;

		D3D11_SDK_VERSION,

		}

	SDL_DestroyRenderer(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	//ピクセルシェーダー生成

				// access to vertex

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pDepthStencilTexture = NULL;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ID3D11Texture2D* pBackBuffer;

			// Loop over vertices in the face.

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_RenderCopy(ren, tex, NULL, NULL);





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



#endif

	txDesc.Height = rect.Height();

		return hr;



	}*/

	SAFE_RELEASE(m_pSwapChain);

		size_t index_offset = 0;  // インデントのオフセット

	SDL_DestroyRenderer(ren);



	//インデックスバッファ作成

		D3D_DRIVER_TYPE_HARDWARE,

	}

		return hr;

	if (FAILED(hr))

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

#include <iostream>

{

	scDesc.BufferDesc.Height = rect.Height();



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}

	txDesc.SampleDesc.Count = 1;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	SDL_DestroyRenderer(ren);

	m_pSwapChain->Present(0, 0);

	m_pInputLayout = NULL;

		delete[] pVList;

		&materials,



	{

				break;

	SDL_DestroyTexture(tex);



CD3DTest::~CD3DTest()

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.CPUAccessFlags = 0;

			break;

		return hr;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pInputLayout = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pIndexBuffer = NULL;

		&m_pImmediateContext);

	m_Viewport.MinDepth = 0.0f;

/*

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

using std::cout; using std::endl;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

/*

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha









	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_DestroyTexture(tex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMFLOAT4 pos;               //座標(x,y,z)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	{

	LoadObj(vertexlist, indexList);

#define TINYOBJLOADER_IMPLEMENTATION



			exit(1);

	}

	//Create Index



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			}

	SAFE_RELEASE(m_pRenderTargetView);

	{

			// Loop over vertices in the face.

	std::vector<tinyobj::shape_t> shapes;

	}

	cbDesc.CPUAccessFlags = 0;



		KEY_PRESS_SURFACE_UP,

	WORD   icount = indexList.size();

		D3D11_SDK_VERSION,



		&attrib,

	while (SDL_PollEvent(&e) != 0)





};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pMatrixBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;

		KEY_PRESS_SURFACE_RIGHT,

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pIndexBuffer);

struct ConstantLightBuffer {

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	enum KeyPressSurfaces

		else if (e.type == SDL_KEYDOWN)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    nearZ = 0.1f;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pImmediateContext);

			switch (e.key.keysym.sym)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& attrib = reader.GetAttrib();

using std::cout; using std::endl;

		return hr;

}

		return hr;

	vbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

			case SDLK_UP:



	//頂点バッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



CD3DTest::~CD3DTest()

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	scDesc.Windowed = TRUE;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

		return hr;



	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

		size_t index_offset = 0;  // インデントのオフセット

	Release();

	SDL_Event e;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_UP,



	SDL_FreeSurface(bmp);

			{

}



		}

	//Key press surfaces constants

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

}

	if (FAILED(hr))

}
		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

		SDL_RenderClear(ren);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				break;

		&error,

				break;

	m_pLightBuffer = NULL;



	SAFE_RELEASE(m_pTexture);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*





			case SDLK_DOWN:



	for (int i = 0; i < vcount; i++)

	}

	cbDesc.CPUAccessFlags = 0;

{

	scDesc.BufferDesc.Width = rect.Width();

using std::cout; using std::endl;

			}



	std::string error;

		&m_pImmediateContext);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.TopLeftY = 0;

			default:

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

}

	};

	delete[] pVList;

		return hr;

}

		return hr;

	std::string error;

				break;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_Delay(1000);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pSampler = NULL;

	int     vcount = vertexlist.size();

			switch (e.key.keysym.sym)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		1,

	//First we need to start up SDL, and make sure it went ok



struct ConstantMatrixBuffer {

			break;

		{



	// Loop over shapes

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

	::GetClientRect(hwnd, &rect);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	txDesc.Height = rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_DestroyWindow(win);

			//Select surfaces based on key press

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.Height = (FLOAT)rect.Height();



	//vector<WORD> index_t;

	m_pSwapChain = NULL;

		delete[] pVList;

	}

void CD3DTest::Release()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	irData.SysMemPitch = 0;



			case SDLK_DOWN:

	SDL_DestroyTexture(tex);

	pBackBuffer->Release();

	scDesc.BufferDesc.Width = rect.Width();

		&m_pSwapChain,

	SDL_DestroyTexture(tex);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&error,

	ibDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_DestroyRenderer(ren);

				indexlist.push_back(idx.vertex_index);

{

			case SDLK_LEFT:

		R"(cube.obj)");



	vrData.SysMemSlicePitch = 0;

	ConstantLight    pntLight; //点光源



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	LoadObj(vertexlist, indexList);

	LoadObj(vertexlist, indexList);



	while (SDL_PollEvent(&e) != 0)

		}

	SAFE_RELEASE(m_pSampler);



	//Create Index

	ConstantMatrixBuffer cmb;

	txDesc.SampleDesc.Count = 1;

	auto& attrib = reader.GetAttrib();



	//深度ステンシルバッファ作成

		}

	{





	txDesc.Height = rect.Height();

}

 */

		exit(1);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Height = rect.Height();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pRenderTargetView);

		}



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点バッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		exit(1);

	cbDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();

	UINT strides = sizeof(Vertex);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,



		&scDesc,





		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

{

		&m_pDevice,



	vbDesc.MiscFlags = 0;









		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	Release();

		else if (e.type == SDL_KEYDOWN)

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	{

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 view;

	SDL_DestroyWindow(win);

	XMFLOAT4X4 view;



	}

		}

		return hr;

		if (!ret)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&m_pSwapChain,

		SDL_RenderClear(ren);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4X4 view;

	while (SDL_PollEvent(&e) != 0)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 view;

	}

		}



	UINT flags = 0;

				vertex.push_back(vertex_tmp);

int main(int, char**)



	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	//頂点バッファ作成

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	delete[] pVList;

/*

			}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	/*

	cbDesc.MiscFlags = 0;



		pIList[j] = indexList[j];

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		//User requests quit

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

		1,

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.MiscFlags = 0;

	{

	//深度ステンシルバッファ作成



			case SDLK_LEFT:

			case SDLK_RIGHT:

		return hr;

	SDL_DestroyRenderer(ren);

int SEGMENT = 36;



		KEY_PRESS_SURFACE_TOTAL



		D3D_DRIVER_TYPE_HARDWARE,

	Release();

		{

	//First we need to start up SDL, and make sure it went ok

	}

	CRect                rect;





	Release();

		SDL_Delay(1000);

	m_VertexCount = 0;

	tinyobj::ObjReader reader;

	tinyobj::ObjReader reader;

			default:

	//Clean up our objects and quit





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#endif

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;



	while (SDL_PollEvent(&e) != 0)

}

		return hr;

void CD3DTest::Render()

	m_Viewport.MinDepth = 0.0f;

	{

	std::string error;

	ibDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				break;



	HRESULT              hr;



};



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				// access to vertex

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyTexture(tex);

	delete[] pIList;







	DXGI_SWAP_CHAIN_DESC scDesc;



}

		&m_pSwapChain,

	m_pMatrixBuffer = NULL;

		NULL,

	float    farZ = 100.0f;











	scDesc.SampleDesc.Quality = 0;

#include <SDL.h>

		SDL_RenderClear(ren);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!reader.Warning().empty())

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Event e;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	D3D11_BUFFER_DESC vbDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



int SEGMENT = 36;

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	D3D11_BUFFER_DESC vbDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	tinyobj::ObjReaderConfig reader_config;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		return hr;

	if (FAILED(hr))

{

				break;

		SDL_RenderPresent(ren);

			{

	D3D_FEATURE_LEVEL level;

		{





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



			index_offset += num_vertices;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

 */

		{

				break;



		&scDesc,

}

	m_pIndexBuffer = NULL;

	SDL_Quit();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

		&scDesc,

	vector<WORD> indexList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	XMFLOAT4X4 world;





	m_pSwapChain = NULL;



	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pDepthStencilTexture);

			}

	m_pInputLayout = NULL;

	bool ret = tinyobj::LoadObj(

	//Key press surfaces constants

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

using std::cout; using std::endl;

		&attrib,

	m_pInputLayout = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&shapes,

	auto& shapes = reader.GetShapes();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

	if (!error.empty())



	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

CD3DTest::CD3DTest()



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	ID3D11Texture2D* pBackBuffer;

	vrData.SysMemPitch = 0;

	std::vector<tinyobj::material_t> materials;



	if (FAILED(hr))

				tinyobj::real_t tx =

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

void CD3DTest::Render()

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

	tinyobj::attrib_t attrib;

	SDL_Quit();



	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{



	vbDesc.StructureByteStride = 0;

	{

	LoadObj(vertexlist, indexList);

		&m_pImmediateContext);



			index_offset += fv;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	{

	//vector<WORD> index_t;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



{

	}





struct ConstantMaterial {

	m_pTexture = NULL;

#ifdef _DEBUG

	//頂点シェーダー生成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;







	bool ret = tinyobj::LoadObj(

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

/*

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			index_offset += num_vertices;

	cbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				indexlist.push_back(index);

}
	}







	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_DestroyTexture(tex);



				break;

	SDL_Quit();

			case SDLK_DOWN:

	{

{

		//User requests quit



		&m_pImmediateContext);



	return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	SAFE_RELEASE(m_pLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

		}

	if (!error.empty())



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		//User requests quit

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantLightBuffer clb;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		1,

	ZeroMemory(&txDesc, sizeof(txDesc));

	pBackBuffer->Release();

		&m_pDevice,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pSampler = NULL;

}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		1,

	m_Viewport.TopLeftX = 0;

	vrData.SysMemPitch = 0;

		return hr;

	return;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pDepthStencilView = NULL;



	tinyobj::ObjReader reader;

				indexlist.push_back(index);

		pLevels,



	cbDesc.MiscFlags = 0;

		NULL,



	//頂点バッファ作成

	m_pSwapChain->Present(0, 0);

}

		D3D11_SDK_VERSION,

	m_pImmediateContext = NULL;

		delete[] pIList;





	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	//Key press surfaces constants

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		pVList[i] = vertexlist[i];



	txDesc.SampleDesc.Count = 1;



	vrData.pSysMem = &pVList[0];



void CD3DTest::Release()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.Height = rect.Height();

	return 0;



	bool ret = tinyobj::LoadObj(



	XMFLOAT4         ambient;  //環境光(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_RIGHT,

}


	if (FAILED(hr))

	m_VertexCount = vcount;

	{

	m_Viewport.TopLeftY = 0;

	cbDesc.MiscFlags = 0;

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pDevice);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



			case SDLK_LEFT:



	return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}*/

	{

	XMFLOAT4X4 projection;



{

	vector<WORD> indexList;

		return hr;

	D3D11_BUFFER_DESC ibDesc;



using std::cout; using std::endl;

		cout << "SDL_INIT_ERROR" << endl;

	dsDesc.Format = txDesc.Format;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	txDesc.MipLevels = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	tinyobj::ObjReaderConfig reader_config;





		&scDesc,

		&m_pImmediateContext);

		m_pImmediateContext->ClearState();

	XMFLOAT4 ambient;           //環境(r,g,b)



			{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	};



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	enum KeyPressSurfaces

	m_VertexCount = vcount;

}

	D3D11_SUBRESOURCE_DATA irData;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&m_pDevice,

}
		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		SDL_RenderPresent(ren);

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				vertex.push_back(vertex_tmp);

	ConstantMaterial material; //物体の質感

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    farZ = 100.0f;

{

	XMFLOAT4         eyePos;   //視点座標

		delete[] pVList;

	float    farZ = 100.0f;



	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	//Key press surfaces constants

	float    aspect = m_Viewport.Width / m_Viewport.Height;

/*

	{

	vbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	vrData.pSysMem = &pVList[0];



	::ZeroMemory(&scDesc, sizeof(scDesc));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MinDepth = 0.0f;

			{

	ConstantMatrixBuffer cmb;



	SAFE_RELEASE(m_pVertexBuffer);

	m_Viewport.MaxDepth = 1.0f;



struct ConstantMatrixBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	}*/

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_UP,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	if (FAILED(hr))

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

			case SDLK_RIGHT:

			exit(1);



 */

	{

			default:

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderPresent(ren);





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	SDL_Event e;



	scDesc.BufferDesc.Height = rect.Height();

		1,

	ConstantLightBuffer clb;

	tinyobj::ObjReader reader;



	XMFLOAT4X4 world;

			}



	vbDesc.StructureByteStride = 0;

		&scDesc,



}

 * Lesson 1: Hello World!

		cout << "SDL_INIT_ERROR" << endl;

	auto& attrib = reader.GetAttrib();

	SDL_DestroyWindow(win);

	{

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.eyePos, eye);

	for (int i = 0; i < 3; i++)

#ifdef _DEBUG

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantMatrixBuffer {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	enum KeyPressSurfaces

		return hr;



{

		KEY_PRESS_SURFACE_DOWN,

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>

			break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	SAFE_RELEASE(m_pSwapChain);

	ConstantMaterial material; //物体の質感



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderPresent(ren);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (m_pImmediateContext)

				indexlist.push_back(idx.vertex_index);





	Vertex* pVList = new Vertex[vcount];

	txDesc.Height = rect.Height();

	float    farZ = 100.0f;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		m_pImmediateContext->ClearState();



	while (SDL_PollEvent(&e) != 0)

			case SDLK_DOWN:



		{





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			// Loop over vertices in the face.

CD3DTest::~CD3DTest()

	m_Viewport.Width = (FLOAT)rect.Width();

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();



		if (e.type == SDL_QUIT)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.pSysMem = &pIList[0];

	scDesc.BufferDesc.Width = rect.Width();





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



				// access to vertex

				WORD index = idx.vertex_index;

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	tinyobj::attrib_t attrib;

	cbDesc.CPUAccessFlags = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pSwapChain = NULL;

	if (FAILED(hr))



	bool ret = tinyobj::LoadObj(

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&shapes,

		return 1;

	scDesc.Windowed = TRUE;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	WORD* pIList = new WORD[icount];

			}

	return 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//インデックスバッファ作成

			default:

		return hr;



		return hr;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vrData.SysMemSlicePitch = 0;



	tinyobj::attrib_t attrib;

	if (FAILED(hr))

};

	if (FAILED(hr))



	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_UP,

		//User presses a key

		return hr;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pIndexBuffer = NULL;



		// Loop over faces(polygon)

		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_DEFAULT,

	irData.SysMemPitch = 0;

				break;

			exit(1);

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



		KEY_PRESS_SURFACE_UP,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.TopLeftY = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	tinyobj::attrib_t attrib;



	SAFE_RELEASE(m_pSampler);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float    fov = XMConvertToRadians(20.0f);

	for (int j = 0; j < icount; j++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (!reader.Warning().empty())

 * Lesson 1: Hello World!

	m_pImmediateContext = NULL;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			default:

		return hr;

		pLevels,

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	return;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			break;

				// access to vertex

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::vector<tinyobj::material_t> materials;

		return hr;

{

	vrData.pSysMem = &pVList[0];

{

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pSampler);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_DestroyWindow(win);

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{



struct ConstantMatrixBuffer {

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vrData.SysMemSlicePitch = 0;

		delete[] pVList;

	vrData.SysMemPitch = 0;





	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



	float    nearZ = 0.1f;

{



	}

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	delete[] pIList;

	m_pImmediateContext = NULL;



	m_pDepthStencilTexture = NULL;

	m_pPixelShader = NULL;



	txDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	ConstantLightBuffer clb;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		if (!ret)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.CPUAccessFlags = 0;



	//頂点バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//深度ステンシルバッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	CRect                rect;

		//User requests quit

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pRenderTargetView = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		}

	m_Viewport.MinDepth = 0.0f;

		&level,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}

				indexlist.push_back(idx.vertex_index);

			switch (e.key.keysym.sym)

	SDL_DestroyWindow(win);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//First we need to start up SDL, and make sure it went ok



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemSlicePitch = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

			}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.BufferCount = 1;



	m_pVertexShader = NULL;



	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pSwapChain);





	{

	SAFE_RELEASE(m_pTextureView);

}

	m_Viewport.TopLeftX = 0;

	float    fov = XMConvertToRadians(20.0f);

	m_pVertexBuffer = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

	scDesc.SampleDesc.Count = 1;

{

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	}

		&materials,

/*

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vector<WORD> indexList;

		KEY_PRESS_SURFACE_RIGHT,

	m_pDevice = NULL;

	SAFE_RELEASE(m_pVertexShader);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_Delay(1000);

	SDL_DestroyWindow(win);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantMaterial material; //物体の質感

	auto& attrib = reader.GetAttrib();



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	CRect                rect;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.SampleDesc.Quality = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantMaterial material; //物体の質感





 * Lesson 1: Hello World!



	m_pTexture = NULL;

			}

	};

	vrData.SysMemPitch = 0;

				WORD index = idx.vertex_index;

	{

	scDesc.BufferDesc.Height = rect.Height();

#include <iostream>

			{

struct ConstantLightBuffer {

#include "DirectXManager.h"

				break;

	auto& materials = reader.GetMaterials();

		&attrib,



	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//定数バッファ作成

	scDesc.OutputWindow = hwnd;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyTexture(tex);

	ConstantLight    pntLight; //点光源

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	auto& attrib = reader.GetAttrib();

	tinyobj::ObjReader reader;

		return hr;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

		KEY_PRESS_SURFACE_UP,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pInputLayout = NULL;

	D3D11_SUBRESOURCE_DATA vrData;



#include <SDL.h>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pInputLayout);

	ConstantLight    pntLight; //点光源

int main(int, char**)

		NULL,

	SAFE_RELEASE(m_pInputLayout);

	//頂点シェーダー生成

};

	vrData.pSysMem = &pVList[0];

	WORD   icount = indexList.size();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{



	ConstantLightBuffer clb;

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;



	return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferCount = 1;

				indexlist.push_back(idx.vertex_index);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

 * Lesson 1: Hello World!

	for (const auto& shape : shapes)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	delete[] pVList;

}

	if (FAILED(hr))

	if (FAILED(hr))

	m_VertexCount = 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderPresent(ren);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pSampler);

	m_VertexCount = vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	//Clean up our objects and quit

}

				break;

	tinyobj::attrib_t attrib;

	if (m_pImmediateContext)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	SDL_DestroyRenderer(ren);

	{

				vertex.push_back(vertex_tmp);

	tinyobj::ObjReaderConfig reader_config;

	}

	{

	if (FAILED(hr))

				break;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				vertex.push_back(vertex_tmp);



	UINT strides = sizeof(Vertex);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pTextureView);

{

	SDL_Quit();

	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		D3D11_SDK_VERSION,



	float    fov = XMConvertToRadians(20.0f);



	{

	{

	if (FAILED(hr))



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.Windowed = TRUE;

	scDesc.BufferCount = 1;

	for (const auto& shape : shapes)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	if (FAILED(hr))

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.SampleDesc.Quality = 0;

		&m_pSwapChain,

		flags,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vrData.SysMemSlicePitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pSwapChain);

	m_VertexCount = vcount;

	if (FAILED(hr))

}

	{

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {

		}

	tinyobj::ObjReaderConfig reader_config;

	UINT flags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	UINT flags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

		// Loop over faces(polygon)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int i = 0; i < 3; i++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	return 0;

		}

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

};

		SDL_RenderClear(ren);

	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

{

			break;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Vertex* pVList = new Vertex[vcount];

	scDesc.BufferDesc.Width = rect.Width();

	//頂点シェーダー生成

	irData.pSysMem = &pIList[0];

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		KEY_PRESS_SURFACE_LEFT,

	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			{

	D3D11_SAMPLER_DESC smpDesc;







	//頂点シェーダー生成

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.MiscFlags = 0;

	SDL_Event e;

	cbDesc.CPUAccessFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	delete[] pVList;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		exit(1);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//vector<Vertex> vertex_t;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	LoadObj(vertexlist, indexList);



	D3D11_BUFFER_DESC vbDesc;

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

				break;

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	tinyobj::ObjReader reader;

};

			{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			case SDLK_LEFT:

	tinyobj::attrib_t attrib;

}

}



	D3D_FEATURE_LEVEL level;

CD3DTest::~CD3DTest()

	XMFLOAT4X4 projection;

	UINT offsets = 0;

	SDL_FreeSurface(bmp);



	std::string imagePath = "hello.bmp";

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			exit(1);

#include "DirectXManager.h"

		size_t index_offset = 0;  // インデントのオフセット

{

};

	for (const auto& shape : shapes)



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.BufferDesc.Height = rect.Height();

	{

#include <iostream>

			}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ConstantLight    pntLight; //点光源

	//深度ステンシルバッファ作成

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//インデックスバッファ作成

	SAFE_RELEASE(m_pRenderTargetView);



		NULL,

	m_pRenderTargetView = NULL;



				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pSampler = NULL;

	return 0;

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pSwapChain->Present(0, 0);

	ibDesc.StructureByteStride = 0;



		{

		else if (e.type == SDL_KEYDOWN)

		}

			case SDLK_LEFT:

			case SDLK_UP:

	scDesc.Windowed = TRUE;



{

		flags,

	float    nearZ = 0.1f;

	Release();



		return hr;



		&level,

	if (FAILED(hr))





		{

			case SDLK_RIGHT:

				break;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.StructureByteStride = 0;







	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	auto& shapes = reader.GetShapes();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{



#define TINYOBJLOADER_IMPLEMENTATION

	{

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_pDepthStencilTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		pLevels,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vrData.pSysMem = &pVList[0];



	vector<Vertex> vertexlist;

		SDL_Delay(1000);

			default:

	::GetClientRect(hwnd, &rect);

	return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

	irData.pSysMem = &pIList[0];

		return 1;

	m_pDepthStencilView = NULL;

		pIList[j] = indexList[j];

void CD3DTest::Release()

/*

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b)



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4X4 projection;

struct ConstantMatrixBuffer {

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	return 0;

		return hr;

	//First we need to start up SDL, and make sure it went ok

	}

			// Loop over vertices in the face.

	};

	m_pVertexBuffer = NULL;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



			case SDLK_DOWN:

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{



	if (FAILED(hr))





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 */

{





	UINT strides = sizeof(Vertex);

		return hr;



void CD3DTest::Release()

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.Windowed = TRUE;

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);



	XMStoreFloat4(&clb.ambient, lightAmbient);

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pSwapChain);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pIndexBuffer);

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

				WORD index = idx.vertex_index;

	D3D11_TEXTURE2D_DESC txDesc;

		// Loop over faces(polygon)

	//テクスチャ読み込み



	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_LEFT,



		if (!reader.Error().empty())

		}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}



			index_offset += fv;

	}

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDevice = NULL;



	}

	ibDesc.MiscFlags = 0;

			default:

	D3D11_BUFFER_DESC vbDesc;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			case SDLK_UP:

	SDL_DestroyTexture(tex);

	}

		return hr;

		return hr;



	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.SampleDesc.Count = 1;

	scDesc.OutputWindow = hwnd;

	CRect                rect;

	m_pTexture = NULL;

	}

	m_pTexture = NULL;



	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		delete[] pVList;

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC cbDesc;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	//Key press surfaces constants

	//頂点レイアウト作成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pRenderTargetView);



	delete[] pIList;

	UINT flags = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







	SAFE_RELEASE(m_pInputLayout);

	m_pTextureView = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

 */

			}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	bool ret = tinyobj::LoadObj(





		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	{

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SAFE_RELEASE(m_pTexture);



	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4         eyePos;   //視点座標

#include <iostream>

		SDL_Delay(1000);



	{

	{

		{





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		// Loop over faces(polygon)

	{

	txDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

};



		&shapes,

	for (int i = 0; i < 3; i++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantLightBuffer {

		pLevels,

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





}

	D3D11_BUFFER_DESC vbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//頂点シェーダー生成

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Release();

}



			{





	txDesc.MipLevels = 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

int main(int, char**)

{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





		delete[] pVList;

	m_pIndexBuffer = NULL;

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

	CRect                rect;



	m_pTextureView = NULL;

	ibDesc.CPUAccessFlags = 0;

			case SDLK_UP:

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		// Loop over faces(polygon)



		return 1;

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	UINT flags = 0;

		{

	WORD   icount = indexList.size();



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



CD3DTest::CD3DTest()

				WORD index = idx.vertex_index;

			switch (e.key.keysym.sym)

		SDL_RenderClear(ren);

		if (!ret)

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

	WORD* pIList = new WORD[icount];





		}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			index_offset += num_vertices;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vbDesc.StructureByteStride = 0;

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&m_pDevice,





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vbDesc.CPUAccessFlags = 0;

	UINT flags = 0;

	scDesc.BufferCount = 1;

 * Lesson 1: Hello World!



		&level,





	scDesc.SampleDesc.Quality = 0;

	{

	m_pLightBuffer = NULL;



	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pSwapChain);



	vbDesc.CPUAccessFlags = 0;

	}

struct ConstantMaterial {

	return 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		pIList[j] = indexList[j];

				WORD index = idx.vertex_index;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

		&error,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	tinyobj::ObjReader reader;

	}

	auto& shapes = reader.GetShapes();

			{

		exit(1);

		delete[] pIList;

	//ビューポート設定

		pIList[j] = indexList[j];

			exit(1);

	tinyobj::ObjReader reader;



	{

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

{

		&shapes,



#endif

	m_Viewport.MaxDepth = 1.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

void CD3DTest::Release()

/*

		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderClear(ren);

		return hr;

		flags,

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_RIGHT,



};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		&error,





	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点シェーダー生成

	CRect                rect;

		return hr;



};

	if (m_pImmediateContext)

		&m_pImmediateContext);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.SampleDesc.Quality = 0;

		D3D11_SDK_VERSION,

				tinyobj::real_t ty =

};

		{

	Release();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

		&scDesc,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			{

	vrData.SysMemPitch = 0;





{



		return hr;

			case SDLK_UP:

		SDL_RenderCopy(ren, tex, NULL, NULL);



	D3D11_SUBRESOURCE_DATA irData;

	bool ret = tinyobj::LoadObj(

	XMFLOAT4X4 projection;

	m_Viewport.MinDepth = 0.0f;



	//Create Index

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	LoadObj(vertexlist, indexList);

		return 1;





		NULL,

	{

	UINT offsets = 0;

	bool ret = tinyobj::LoadObj(



	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	/*



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_RenderPresent(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

		// Loop over faces(polygon)

	SDL_DestroyTexture(tex);

	m_pVertexShader = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t tx =

	cbDesc.CPUAccessFlags = 0;



	m_pDepthStencilView = NULL;

			index_offset += fv;

		//User presses a key

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			{

		KEY_PRESS_SURFACE_RIGHT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				vertex.push_back(vertex_tmp);

struct ConstantMaterial {

CD3DTest::~CD3DTest()



	if (m_pImmediateContext)



	vbDesc.StructureByteStride = 0;



		&attrib,

	SAFE_RELEASE(m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.StructureByteStride = 0;

	m_pIndexBuffer = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

	float    farZ = 100.0f;

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (FAILED(hr))



	cbDesc.CPUAccessFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	dsDesc.Texture2D.MipSlice = 0;

	{





		return hr;

	HRESULT              hr;



	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				indexlist.push_back(index);

	SDL_Quit();

	}

		{

	float    farZ = 100.0f;

	if (FAILED(hr))

	//定数バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (size_t s = 0; s < shapes.size(); s++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Viewport.Width = (FLOAT)rect.Width();

			for (size_t v = 0; v < fv; v++)



	ConstantLight    pntLight; //点光源



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pMatrixBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	::GetClientRect(hwnd, &rect);

	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	irData.SysMemPitch = 0;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//vector<WORD> index_t;

		R"(cube.obj)");





		&level,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyWindow(win);



	if (m_pImmediateContext)

	// Loop over shapes

};



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	SAFE_RELEASE(m_pTextureView);

		return hr;

				WORD index = idx.vertex_index;

	m_pSwapChain = NULL;

				break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	LoadObj(vertexlist, indexList);

		&error,

			{



	m_pImmediateContext = NULL;

	cbDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	dsDesc.Format = txDesc.Format;

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))



	tinyobj::ObjReader reader;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

#define TINYOBJLOADER_IMPLEMENTATION



#include <SDL.h>

	return hr;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			// Loop over vertices in the face.

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

		&m_pSwapChain,

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D11_BUFFER_DESC vbDesc;

		&error,

	SAFE_RELEASE(m_pTextureView);

		exit(1);

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (!ret)

	WORD* pIList = new WORD[icount];

	std::string error;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	pBackBuffer->Release();

	vbDesc.MiscFlags = 0;

	}



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	delete[] pIList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	return;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D_FEATURE_LEVEL level;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	}

	SAFE_RELEASE(m_pLightBuffer);

	m_pMatrixBuffer = NULL;



	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

void CD3DTest::Release()

	SDL_DestroyRenderer(ren);

	if (!reader.Warning().empty())



		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA irData;

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

				tinyobj::real_t tx =

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//インデックスバッファ作成





	Release();

	scDesc.SampleDesc.Quality = 0;

			}

		delete[] pVList;



	SAFE_RELEASE(m_pTexture);

		else if (e.type == SDL_KEYDOWN)

				break;

	D3D11_TEXTURE2D_DESC txDesc;

	/*

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		KEY_PRESS_SURFACE_DEFAULT,



	SDL_DestroyWindow(win);

	//Create Index

	m_pPixelShader = NULL;

	//頂点レイアウト作成

	{

		return hr;



		//User requests quit



	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vbDesc.MiscFlags = 0;

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_VertexCount = 0;

		&m_pDevice,

	SDL_DestroyRenderer(ren);

	m_pMatrixBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;

	//vector<WORD> index_t;

	Release();

	if (FAILED(hr))







	ibDesc.StructureByteStride = 0;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

using std::cout; using std::endl;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			case SDLK_LEFT:

/*

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pTextureView = NULL;

 * Lesson 1: Hello World!



		pLevels,

		D3D11_SDK_VERSION,

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pIndexBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_UP:



	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	Vertex* pVList = new Vertex[vcount];

	{

void CD3DTest::Render()

			for (size_t v = 0; v < fv; v++)

	txDesc.SampleDesc.Quality = 0;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			}

	{





void CD3DTest::Render()

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//テクスチャ読み込み

	scDesc.BufferCount = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				// access to vertex

	return;



		&m_pImmediateContext);

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SDL_Event e;



				WORD index = idx.vertex_index;

	pBackBuffer->Release();

	cbDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		exit(1);

	txDesc.MipLevels = 1;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.SampleDesc.Quality = 0;

	CRect                rect;



{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		}

#define TINYOBJLOADER_IMPLEMENTATION

			case SDLK_RIGHT:

	cbDesc.CPUAccessFlags = 0;

		else if (e.type == SDL_KEYDOWN)

	m_Angle += XMConvertToRadians(1.0f);

	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//頂点シェーダー生成

	std::string inputfile = "test.obj";

};



	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));



		&m_pDevice,

	D3D11_TEXTURE2D_DESC txDesc;

		//User requests quit

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&materials,

{

	float    nearZ = 0.1f;

				WORD index = idx.vertex_index;

				break;

		R"(cube.obj)");

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferCount = 1;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pIndexBuffer);



		KEY_PRESS_SURFACE_DOWN,

	{

	if (m_pImmediateContext)

			for (size_t v = 0; v < fv; v++)

		pIList[j] = indexList[j];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		//User presses a key

{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);





	vbDesc.StructureByteStride = 0;



	m_pTexture = NULL;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

	return;

				break;

	dsDesc.Format = txDesc.Format;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& materials = reader.GetMaterials();

		}

		return hr;



	tinyobj::ObjReaderConfig reader_config;

#endif

	}





	scDesc.BufferCount = 1;

				indexlist.push_back(idx.vertex_index);

	txDesc.MipLevels = 1;

	txDesc.MiscFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	std::string inputfile = "test.obj";

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ibDesc.CPUAccessFlags = 0;

	m_pSwapChain->Present(0, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

};

	float    farZ = 100.0f;

}

	Release();

	m_IndexCount = 0;

	//ピクセルシェーダー生成

	scDesc.BufferCount = 1;

	tinyobj::attrib_t attrib;

	//インデックスバッファ作成

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				// access to vertex

	{

	//テクスチャ読み込み





		&error,

				indexlist.push_back(index);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	SDL_DestroyRenderer(ren);

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

void CD3DTest::Render()

 */

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_DestroyTexture(tex);

#endif

	return 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_LEFT,

	m_pPixelShader = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.MaxDepth = 1.0f;





	CRect                rect;





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			break;



				tinyobj::real_t ty =

				// access to vertex

		{

	//Key press surfaces constants

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (m_pImmediateContext)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.MiscFlags = 0;

			}



			switch (e.key.keysym.sym)

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	m_pDepthStencilView = NULL;



	SAFE_RELEASE(m_pSampler);

			exit(1);

		delete[] pIList;

	SDL_Quit();

	SDL_Quit();

	}



	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pTextureView);

	//Create Index

	SDL_Quit();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



#include <SDL.h>

		size_t index_offset = 0;  // インデントのオフセット

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	irData.SysMemPitch = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pSampler = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	pBackBuffer->Release();

	m_pDepthStencilView = NULL;





	vbDesc.MiscFlags = 0;

		&m_pImmediateContext);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_VertexCount = 0;





	ConstantLight    pntLight; //点光源



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	SAFE_RELEASE(m_pTexture);

	D3D11_BUFFER_DESC vbDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(bmp);

}

			case SDLK_DOWN:

			default:

{

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&m_pImmediateContext);

		// Loop over faces(polygon)

	LoadObj(vertexlist, indexList);

	ibDesc.StructureByteStride = 0;

		//User presses a key

				tinyobj::real_t tx =

		&attrib,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_DEFAULT,

 */

	XMFLOAT4 specular;          //反射(r,g,b)

		SDL_Delay(1000);

	vector<WORD> indexList;

};

}

	m_pRenderTargetView = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_Delay(1000);

	if (FAILED(hr))

{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4X4 view;

			case SDLK_DOWN:



	if (FAILED(hr))

	SDL_DestroyWindow(win);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	tinyobj::ObjReaderConfig reader_config;

	int     vcount = vertexlist.size();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				break;





	ZeroMemory(&dsDesc, sizeof(dsDesc));



			{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			index_offset += fv;





	m_pMatrixBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}

			}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilView);

			case SDLK_UP:

		return hr;

	m_pDepthStencilTexture = NULL;

void CD3DTest::Render()

	Release();



	while (SDL_PollEvent(&e) != 0)







				tinyobj::real_t ty =

		&level,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	dsDesc.Format = txDesc.Format;

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//深度ステンシルバッファ作成

	auto& shapes = reader.GetShapes();

		pLevels,

			exit(1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pRenderTargetView);





}







		return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);



};



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty =



	m_VertexCount = vcount;

	scDesc.BufferCount = 1;

			case SDLK_RIGHT:

	std::string imagePath = "hello.bmp";

	{

};

	{

	scDesc.OutputWindow = hwnd;



	if (FAILED(hr))

	txDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	D3D11_SAMPLER_DESC smpDesc;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	reader_config.mtl_search_path = "./"; // Path to material files

	{

				break;

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	txDesc.MiscFlags = 0;

			case SDLK_UP:



	m_pSampler = NULL;

	txDesc.MipLevels = 1;



			}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.Width = (FLOAT)rect.Width();



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

{

	cbDesc.StructureByteStride = 0;









		delete[] pIList;

	Vertex* pVList = new Vertex[vcount];

		cout << "SDL_INIT_ERROR" << endl;

	tinyobj::ObjReaderConfig reader_config;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantMaterial material; //物体の質感

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::string inputfile = "test.obj";

#include <iostream>

		return hr;



	SAFE_RELEASE(m_pImmediateContext);

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	WORD* pIList = new WORD[icount];

	reader_config.mtl_search_path = "./"; // Path to material files

{

	//vector<Vertex> vertex_t;

				break;

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

{

	m_pDepthStencilView = NULL;

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	return;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);







	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;



	m_IndexCount = 0;

#include <SDL.h>

	vbDesc.CPUAccessFlags = 0;



{

	auto& shapes = reader.GetShapes();

	cbDesc.StructureByteStride = 0;

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_DOWN:

	m_pRenderTargetView = NULL;

};

	txDesc.Width = rect.Width();

{

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	Vertex* pVList = new Vertex[vcount];

			index_offset += fv;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pIndexBuffer = NULL;

	m_pSwapChain = NULL;

	//頂点レイアウト作成

		return hr;

		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include "DirectXManager.h"

	//ビューポート設定

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pDevice);

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_IMPLEMENTATION

		&level,

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_pPixelShader = NULL;

	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	Release();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}

{

		&shapes,

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	::GetClientRect(hwnd, &rect);

		}



			{

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#include <SDL.h>

struct ConstantLightBuffer {

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_DOWN,

		SDL_RenderPresent(ren);

	txDesc.CPUAccessFlags = 0;

	m_VertexCount = vcount;

	tinyobj::ObjReader reader;

	m_VertexCount = vcount;

 */

	m_Viewport.MinDepth = 0.0f;

	ConstantLightBuffer clb;

/*

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.CPUAccessFlags = 0;

		&materials,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D11_BUFFER_DESC cbDesc;

	//vector<Vertex> vertex_t;

		D3D11_SDK_VERSION,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pTexture);

	//vector<WORD> index_t;

	ZeroMemory(&txDesc, sizeof(txDesc));

	tinyobj::ObjReader reader;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	return 0;

			switch (e.key.keysym.sym)

		delete[] pIList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

		pVList[i] = vertexlist[i];

	if (FAILED(hr))

{

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ibDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Release()

	if (m_pImmediateContext)



		size_t index_offset = 0;  // インデントのオフセット

			for (size_t v = 0; v < fv; v++)

		return hr;

	cbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pRenderTargetView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.CPUAccessFlags = 0;

	//Create Index

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;



	m_Viewport.TopLeftX = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		}

	vrData.SysMemPitch = 0;



	auto& materials = reader.GetMaterials();

	ConstantLight    pntLight; //点光源

		m_pImmediateContext->ClearState();

			}

	//ビューポート設定

	HRESULT              hr;

	for (const auto& shape : shapes)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	};

	//Key press surfaces constants

	SAFE_RELEASE(m_pIndexBuffer);

	//vector<Vertex> vertex_t;

	cbDesc.StructureByteStride = 0;





		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))



				break;

	//Vertex* pVList = new Vertex[vcount];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pTexture = NULL;

 */

	::ZeroMemory(&scDesc, sizeof(scDesc));

				// access to vertex

	SDL_DestroyWindow(win);

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//ビューポート設定

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	auto& attrib = reader.GetAttrib();

	scDesc.BufferDesc.Width = rect.Width();

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.SampleDesc.Quality = 0;

			for (size_t v = 0; v < fv; v++)

		m_pImmediateContext->ClearState();

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	for (int i = 0; i < 3; i++)

			index_offset += fv;

	XMFLOAT4X4 world;

	float    fov = XMConvertToRadians(20.0f);

			case SDLK_RIGHT:

	for (int i = 0; i < 3; i++)

CD3DTest::CD3DTest()

	{

		{







		return hr;



	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 projection;

				WORD index = idx.vertex_index;

	{

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyRenderer(ren);

		}

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	vrData.pSysMem = &pVList[0];

	scDesc.OutputWindow = hwnd;

	m_pVertexShader = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#define TINYOBJLOADER_IMPLEMENTATION



		SDL_RenderPresent(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	vector<Vertex> vertexlist;

	//ビューポート設定

	}

	if (FAILED(hr))

	//インデックスバッファ作成

		return hr;



};

	}

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	tinyobj::attrib_t attrib;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

	return hr;

	m_pLightBuffer = NULL;

	std::string imagePath = "hello.bmp";



	m_pTextureView = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	SAFE_RELEASE(m_pDevice);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.SampleDesc.Count = 1;

	::ZeroMemory(&scDesc, sizeof(scDesc));





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	UINT offsets = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

CD3DTest::~CD3DTest()

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	for (int j = 0; j < icount; j++)

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_TOTAL



	if (FAILED(hr))

	if (FAILED(hr))

		&m_pImmediateContext);

			switch (e.key.keysym.sym)



	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)





	for (size_t s = 0; s < shapes.size(); s++)

#include "DirectXManager.h"



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//vector<Vertex> vertex_t;

	DXGI_SWAP_CHAIN_DESC scDesc;



	while (SDL_PollEvent(&e) != 0)

	dsDesc.Texture2D.MipSlice = 0;

				break;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//ピクセルシェーダー生成

		&attrib,

				indexlist.push_back(index);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		&scDesc,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_FreeSurface(bmp);

		delete[] pIList;

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float    nearZ = 0.1f;



			exit(1);

		KEY_PRESS_SURFACE_TOTAL



		pLevels,

	if (FAILED(hr))

		return hr;

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//vector<Vertex> vertex_t;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	vrData.SysMemSlicePitch = 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pDepthStencilView);



};

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	return hr;

		return hr;

	m_pMatrixBuffer = NULL;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		pLevels,





	SAFE_RELEASE(m_pVertexBuffer);

		{

		&m_pDevice,

	XMFLOAT4X4 view;

		return hr;

	irData.SysMemSlicePitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	cbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

struct ConstantMaterial {

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	float    farZ = 100.0f;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	irData.pSysMem = &pIList[0];

	cbDesc.MiscFlags = 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

};

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		//User presses a key



	D3D11_BUFFER_DESC vbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.MipLevels = 1;

	}

		return hr;

	pBackBuffer->Release();

			}

		KEY_PRESS_SURFACE_LEFT,

	if (!error.empty())

	XMFLOAT4         eyePos;   //視点座標

};

	{

	{



	}

	::ZeroMemory(&scDesc, sizeof(scDesc));

			{

		pLevels,

	auto& attrib = reader.GetAttrib();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

	m_IndexCount = icount;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

 */

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

#ifdef _DEBUG

		}

	}

	dsDesc.Format = txDesc.Format;

		return hr;

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	CRect                rect;



		return hr;



		pLevels,

			exit(1);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		exit(1);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pPixelShader = NULL;



			// Loop over vertices in the face.

	SAFE_RELEASE(m_pImmediateContext);

		return 1;



				break;




