	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);







	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pDevice);

	for (int j = 0; j < icount; j++)

	return;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

			}

		{

	SDL_Event e;



	scDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_DestroyTexture(tex);

	{

	/*

	m_pDepthStencilView = NULL;



	int     vcount = vertexlist.size();

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pTexture = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	cbDesc.StructureByteStride = 0;

			case SDLK_LEFT:

{

		if (!ret)

}

	reader_config.mtl_search_path = "./"; // Path to material files

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_BUFFER_DESC cbDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Quit();

	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D_FEATURE_LEVEL level;





	scDesc.BufferDesc.Width = rect.Width();

}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	bool ret = tinyobj::LoadObj(

	std::string imagePath = "hello.bmp";

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		cout << "SDL_INIT_ERROR" << endl;

	irData.pSysMem = &pIList[0];



	CRect                rect;

	reader_config.mtl_search_path = "./"; // Path to material files



	}*/



int main(int, char**)

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			default:

		m_pImmediateContext->ClearState();

	if (!error.empty())



	std::string inputfile = "test.obj";

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}



		{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT offsets = 0;





{

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.StructureByteStride = 0;



	m_pSwapChain->Present(0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vector<WORD> indexList;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	}

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			exit(1);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

				break;

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//Key press surfaces constants

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4         eyePos;   //視点座標

				WORD index = idx.vertex_index;

		//User requests quit



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilTexture);

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	m_IndexCount = icount;



			// Loop over vertices in the face.

	D3D11_SAMPLER_DESC smpDesc;

		}

	if (FAILED(hr))

	//vector<WORD> index_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

struct ConstantMatrixBuffer {

		&error,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				indexlist.push_back(index);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pSwapChain);

		&materials,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	D3D11_BUFFER_DESC cbDesc;

		}

	m_Viewport.Width = (FLOAT)rect.Width();

}

	Vertex* pVList = new Vertex[vcount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.MiscFlags = 0;

	pBackBuffer->Release();



	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	{

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;



};

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];



			case SDLK_DOWN:

	ConstantLightBuffer clb;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))



	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





		}

	}



	{

	m_pDepthStencilView = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

struct ConstantLightBuffer {



	auto& materials = reader.GetMaterials();

	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);



	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			int num_vertices = shape.mesh.num_face_vertices[f];

		KEY_PRESS_SURFACE_DOWN,

	return;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		}

		KEY_PRESS_SURFACE_UP,

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pDepthStencilView);

	m_pDepthStencilView = NULL;

		D3D11_SDK_VERSION,

	XMFLOAT4X4 projection;

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	ConstantLight    pntLight; //点光源

		SDL_Delay(1000);

int main(int, char**)

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.TopLeftY = 0;

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_DOWN:

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();

			for (size_t v = 0; v < fv; v++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.ArraySize = 1;





	m_pSwapChain->Present(0, 0);

{

	}

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	//vector<WORD> index_t;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



};

		&attrib,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				break;

	}*/

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	m_pTextureView = NULL;

	}

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			break;





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMFLOAT4X4 world;

	SDL_Event e;

	SDL_Event e;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#include "DirectXManager.h"

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pLightBuffer = NULL;

	m_pTextureView = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pInputLayout);

{

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Quit();



	SDL_DestroyWindow(win);



	m_pDepthStencilView = NULL;

	XMFLOAT4         eyePos;   //視点座標



};

	//深度ステンシルバッファ作成

void CD3DTest::Render()



			break;

	tinyobj::ObjReader reader;

	{



		flags,



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	//頂点シェーダー生成

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pRenderTargetView = NULL;



		1,

		SDL_RenderCopy(ren, tex, NULL, NULL);



			int num_vertices = shape.mesh.num_face_vertices[f];

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files

		}

	SAFE_RELEASE(m_pVertexBuffer);



int SEGMENT = 36;

	//Create Index

	m_pRenderTargetView = NULL;

		return hr;





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyTexture(tex);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

		}

	SAFE_RELEASE(m_pInputLayout);

			}

	{



	ibDesc.StructureByteStride = 0;

	{

	//定数バッファ作成

	XMFLOAT4 ambient;           //環境(r,g,b)

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			//Select surfaces based on key press

		return 1;

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		//User requests quit

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		R"(cube.obj)");

	SDL_FreeSurface(suf);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	//ビューポート設定

	vector<Vertex> vertexlist;

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

}
	if (!reader.Warning().empty())

		&shapes,

	if (FAILED(hr))

	m_pTextureView = NULL;



	Vertex* pVList = new Vertex[vcount];

{

	m_pVertexShader = NULL;

int SEGMENT = 36;

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//vector<WORD> index_t;

	vbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	dsDesc.Format = txDesc.Format;



		&m_pSwapChain,

		return hr;

		D3D11_SDK_VERSION,

	}

	{

	ConstantLight    pntLight; //点光源

}

CD3DTest::~CD3DTest()

	{

	ID3D11Texture2D* pBackBuffer;

		}

		return hr;

	vector<Vertex> vertexlist;





			case SDLK_RIGHT:

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pLightBuffer = NULL;



	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		KEY_PRESS_SURFACE_TOTAL



	std::string inputfile = "test.obj";

				break;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return 1;



	{



	//Vertex* pVList = new Vertex[vcount];

	D3D_FEATURE_LEVEL level;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	// Loop over shapes



		return hr;

	if (FAILED(hr))

		if (!ret)



	D3D11_BUFFER_DESC vbDesc;

	for (size_t s = 0; s < shapes.size(); s++)



	m_pDepthStencilView = NULL;

	delete[] pIList;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.Format = txDesc.Format;

}



	m_pDepthStencilView = NULL;

	delete[] pVList;

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	/*



	m_pTextureView = NULL;

	if (FAILED(hr))

	return hr;



	{

			{

}

	UINT strides = sizeof(Vertex);

	m_Viewport.Width = (FLOAT)rect.Width();



using std::cout; using std::endl;

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

using std::cout; using std::endl;

 */

		m_pImmediateContext->ClearState();

			switch (e.key.keysym.sym)

	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pTextureView);

	while (SDL_PollEvent(&e) != 0)

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



			}

	std::vector<tinyobj::shape_t> shapes;

			}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_UP,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.SampleDesc.Quality = 0;

		}

		R"(cube.obj)");

	// Loop over shapes

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_Viewport.Height = (FLOAT)rect.Height();

		1,

	m_pMatrixBuffer = NULL;

	//頂点バッファ作成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pDevice);







	cbDesc.StructureByteStride = 0;

			for (size_t v = 0; v < num_vertices; v++)

				// access to vertex

		return hr;

				// access to vertex

		size_t index_offset = 0;



		return hr;

	if (!reader.Warning().empty())





		D3D11_SDK_VERSION,



	ibDesc.ByteWidth = sizeof(WORD) * icount;

{



		//User requests quit

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#ifdef _DEBUG

	{

		return hr;

	//頂点バッファ作成

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

			{

	//vector<WORD> index_t;

	D3D11_TEXTURE2D_DESC txDesc;

	}

		KEY_PRESS_SURFACE_LEFT,



using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			case SDLK_UP:

		&m_pDevice,



	WORD   icount = indexList.size();

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pTextureView);

	txDesc.Width = rect.Width();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_RIGHT,

		{

	delete[] pIList;

	vector<WORD> indexList;



			case SDLK_DOWN:



	cbDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			switch (e.key.keysym.sym)



	cbDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

}
			//Select surfaces based on key press



#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantMaterial {

	m_Viewport.TopLeftY = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

		&level,







	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		D3D11_SDK_VERSION,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		SDL_RenderPresent(ren);

	}

	m_Angle += XMConvertToRadians(1.0f);

}

	return hr;



	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{



	txDesc.MipLevels = 1;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	LoadObj(vertexlist, indexList);



	for (const auto& shape : shapes)

#include <SDL.h>

#include <iostream>



	{



	cbDesc.MiscFlags = 0;

		pVList[i] = vertexlist[i];

	}

			case SDLK_UP:

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	for (int i = 0; i < vcount; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.CPUAccessFlags = 0;



	D3D11_BUFFER_DESC ibDesc;

	CRect                rect;

	m_IndexCount = 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		D3D_DRIVER_TYPE_HARDWARE,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	return 0;

	SAFE_RELEASE(m_pRenderTargetView);

	std::vector<tinyobj::material_t> materials;



	m_Viewport.MaxDepth = 1.0f;

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				// access to vertex

	m_IndexCount = icount;

	//vector<Vertex> vertex_t;

	Vertex* pVList = new Vertex[vcount];



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		return hr;



	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pVertexBuffer);

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;

	::GetClientRect(hwnd, &rect);

				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Event e;

	if (FAILED(hr))



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	D3D11_BUFFER_DESC cbDesc;

		&attrib,

		delete[] pVList;





struct ConstantMaterial {

	for (size_t s = 0; s < shapes.size(); s++)

	for (size_t s = 0; s < shapes.size(); s++)



	ibDesc.MiscFlags = 0;



	for (int j = 0; j < icount; j++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;



				tinyobj::real_t ty =

	};

int main(int, char**)

		return hr;

			index_offset += num_vertices;

			case SDLK_UP:

	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_UP:

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//頂点バッファ作成

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				// access to vertex

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{

		}



	if (FAILED(hr))

		pIList[j] = indexList[j];

	m_pTexture = NULL;

	Release();

	//ビューポート設定

		D3D11_SDK_VERSION,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		1,



{



			}

	tinyobj::ObjReaderConfig reader_config;





	std::string error;



	D3D_FEATURE_LEVEL level;



}

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	auto& attrib = reader.GetAttrib();

 * Lesson 1: Hello World!

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.StructureByteStride = 0;

}
		{

	Vertex* pVList = new Vertex[vcount];

				vertex.push_back(vertex_tmp);



}
	m_Viewport.TopLeftY = 0;

			case SDLK_DOWN:

		SDL_Delay(1000);

		cout << "SDL_INIT_ERROR" << endl;

		return hr;



	{



	HRESULT              hr;

		return hr;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	cbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//vector<WORD> index_t;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	m_pVertexBuffer = NULL;

CD3DTest::CD3DTest()

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Render()



			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

 */

	return 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&level,

	};

	m_pImmediateContext = NULL;



	cbDesc.StructureByteStride = 0;

	dsDesc.Texture2D.MipSlice = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

}

	return;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	if (FAILED(hr))

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				WORD index = idx.vertex_index;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		1,



	SAFE_RELEASE(m_pTexture);



CD3DTest::CD3DTest()

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		//User requests quit

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pLightBuffer = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ConstantMatrixBuffer cmb;

}

	ID3D11Texture2D* pBackBuffer;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	XMFLOAT4X4 world;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



void CD3DTest::Render()

	Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pVertexBuffer = NULL;

	m_VertexCount = 0;





	SDL_DestroyRenderer(ren);

#include <SDL.h>

	m_pMatrixBuffer = NULL;

}



		return hr;

	SDL_DestroyRenderer(ren);

		return hr;

	dsDesc.Format = txDesc.Format;

		return hr;



		return hr;

	SDL_Quit();



	XMFLOAT4X4 world;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	DXGI_SWAP_CHAIN_DESC scDesc;

	return 0;

	scDesc.SampleDesc.Quality = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	m_pTextureView = NULL;

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//インデックスバッファ作成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#endif

		delete[] pIList;

	::GetClientRect(hwnd, &rect);

	for (int j = 0; j < icount; j++)



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	tinyobj::ObjReader reader;

	//ピクセルシェーダー生成

		exit(1);

{

	Vertex* pVList = new Vertex[vcount];



}

	SDL_Quit();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.MipLevels = 1;

	{



		KEY_PRESS_SURFACE_TOTAL

	txDesc.MiscFlags = 0;

				// access to vertex



	cbDesc.CPUAccessFlags = 0;



	HRESULT              hr;

	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		return hr;

};

		SDL_Delay(1000);

		SDL_RenderPresent(ren);

	}

		return hr;

	LoadObj(vertexlist, indexList);



using std::cout; using std::endl;

			{

			index_offset += fv;



CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pSampler = NULL;

			case SDLK_LEFT:



	Release();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilTexture);

		&m_pImmediateContext);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		if (!ret)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pTexture = NULL;

		cout << "SDL_INIT_ERROR" << endl;

		}



		{

	HRESULT              hr;

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pVertexBuffer = NULL;

	enum KeyPressSurfaces





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Quit();

	XMFLOAT4 ambient;           //環境(r,g,b)



};

	SDL_Quit();

	SDL_DestroyRenderer(ren);

}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

};

 */

	scDesc.SampleDesc.Quality = 0;

	m_VertexCount = 0;





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		}

	if (FAILED(hr))

	return 0;

	tinyobj::attrib_t attrib;

	SDL_FreeSurface(suf);





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		{

	auto& attrib = reader.GetAttrib();

		return hr;

		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	Release();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

void CD3DTest::Release()



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b)



	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};

{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };









	vbDesc.StructureByteStride = 0;

	if (m_pImmediateContext)

	txDesc.SampleDesc.Quality = 0;

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pTextureView);

			//Select surfaces based on key press

	D3D11_BUFFER_DESC vbDesc;

		// Loop over faces(polygon)

	//頂点バッファ作成

	irData.SysMemPitch = 0;

{

	//テクスチャ読み込み



	if (FAILED(hr))

		exit(1);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_TEXTURE2D_DESC txDesc;

		pVList[i] = vertexlist[i];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

				break;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_Viewport.MinDepth = 0.0f;

	return 0;

	m_pDevice = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Angle += XMConvertToRadians(1.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));



	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{

		if (!reader.Error().empty())

struct ConstantMaterial {





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//ビューポート設定

			for (size_t v = 0; v < num_vertices; v++)

		&m_pImmediateContext);



		KEY_PRESS_SURFACE_UP,

void CD3DTest::Release()

	txDesc.MipLevels = 1;



		return hr;

	irData.pSysMem = &pIList[0];

			// Loop over vertices in the face.



}





	{



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	m_pSampler = NULL;





	/*

	//Key press surfaces constants

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&m_pSwapChain,

			int num_vertices = shape.mesh.num_face_vertices[f];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantLight    pntLight; //点光源



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

	}

};



	m_Viewport.TopLeftY = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}
	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	irData.SysMemPitch = 0;

	{

		&materials,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		if (!reader.Error().empty())

	ibDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_IndexCount = icount;

	m_pSwapChain = NULL;

	m_Viewport.MinDepth = 0.0f;



	float    fov = XMConvertToRadians(20.0f);

		}

	XMFLOAT4         ambient;  //環境光(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,



		SDL_Delay(1000);

	SAFE_RELEASE(m_pRenderTargetView);

	//Vertex* pVList = new Vertex[vcount];

	}

	{

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4         eyePos;   //視点座標





			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}



	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				indexlist.push_back(index);

		}



void CD3DTest::Render()

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	for (const auto& shape : shapes)

	m_Viewport.TopLeftY = 0;

	}

	m_pVertexBuffer = NULL;



		&error,

	enum KeyPressSurfaces

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	UINT strides = sizeof(Vertex);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//頂点レイアウト作成

	m_pDevice = NULL;

	if (!error.empty())

void CD3DTest::Render()

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

int SEGMENT = 36;



struct ConstantMatrixBuffer {



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.SysMemPitch = 0;

			index_offset += num_vertices;

	//vector<WORD> index_t;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilTexture = NULL;



	dsDesc.Texture2D.MipSlice = 0;

			case SDLK_DOWN:

			switch (e.key.keysym.sym)

		if (!ret)

				break;

		}





		exit(1);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	auto& shapes = reader.GetShapes();

	}*/

		}





		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;

		&attrib,

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

{



	//Vertex* pVList = new Vertex[vcount];

				break;

	cbDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

#include <SDL.h>

		&shapes,

	for (const auto& shape : shapes)

			exit(1);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

CD3DTest::~CD3DTest()

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Event e;

		return hr;

				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#define TINYOBJLOADER_IMPLEMENTATION

}


	if (FAILED(hr))

				// access to vertex

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pTextureView = NULL;

		&m_pDevice,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	if (!reader.ParseFromFile(inputfile, reader_config))



	auto& shapes = reader.GetShapes();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	m_pImmediateContext = NULL;

			}



	DXGI_SWAP_CHAIN_DESC scDesc;

		KEY_PRESS_SURFACE_UP,

	ConstantMaterial material; //物体の質感

	}



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

};

	while (SDL_PollEvent(&e) != 0)

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	LoadObj(vertexlist, indexList);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

				indexlist.push_back(index);



	tinyobj::attrib_t attrib;

int SEGMENT = 36;

		&scDesc,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//ピクセルシェーダー生成





	delete[] pIList;

	//Create Index

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pPixelShader);

		R"(cube.obj)");

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_LEFT:

	m_pVertexShader = NULL;

	//Create Index

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < fv; v++)



	auto& shapes = reader.GetShapes();

};

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.MiscFlags = 0;

	//Key press surfaces constants

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	bool ret = tinyobj::LoadObj(

		&m_pDevice,

				break;

	auto& attrib = reader.GetAttrib();

		pVList[i] = vertexlist[i];

	m_pDepthStencilView = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Release();

		flags,

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	m_pInputLayout = NULL;

}



		NULL,

			for (size_t v = 0; v < fv; v++)



	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ConstantMatrixBuffer cmb;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4 pos;               //座標(x,y,z)



	SDL_DestroyRenderer(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&level,

	m_pPixelShader = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点レイアウト作成

		return hr;

			case SDLK_LEFT:

	m_Angle += XMConvertToRadians(1.0f);

				break;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



{





				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	txDesc.Height = rect.Height();









				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





				WORD index = idx.vertex_index;



		if (!reader.Error().empty())

	XMFLOAT4X4 projection;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ibDesc.CPUAccessFlags = 0;



		D3D_DRIVER_TYPE_HARDWARE,

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	WORD* pIList = new WORD[icount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pDepthStencilView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.MiscFlags = 0;

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_VertexCount = 0;



				tinyobj::real_t tx =

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;



		&m_pImmediateContext);

	{



	if (FAILED(hr))







	dsDesc.Format = txDesc.Format;

	return hr;

	dsDesc.Texture2D.MipSlice = 0;





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Width = rect.Width();

	//定数バッファ作成

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.Windowed = TRUE;

			switch (e.key.keysym.sym)

	Vertex* pVList = new Vertex[vcount];

	scDesc.OutputWindow = hwnd;

	ConstantMatrixBuffer cmb;

{



		SDL_RenderCopy(ren, tex, NULL, NULL);

		NULL,

	D3D11_BUFFER_DESC ibDesc;



	Release();



	}

	// Loop over shapes



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}*/

	//vector<Vertex> vertex_t;

			{

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

#define TINYOBJLOADER_IMPLEMENTATION

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	return 0;



			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pPixelShader);

	std::string error;

	m_Viewport.MaxDepth = 1.0f;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		{

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

}

	// Loop over shapes

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	return 0;



	tinyobj::ObjReader reader;

	auto& attrib = reader.GetAttrib();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#ifdef _DEBUG

				vertex.push_back(vertex_tmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	m_VertexCount = 0;

			{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_FreeSurface(bmp);

				break;

	SDL_DestroyTexture(tex);

	m_pDevice = NULL;

	dsDesc.Format = txDesc.Format;

	//テクスチャ読み込み



	m_pInputLayout = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	return hr;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vrData.SysMemSlicePitch = 0;





		}

	SAFE_RELEASE(m_pLightBuffer);



	float    nearZ = 0.1f;

	ConstantMaterial material; //物体の質感

	}

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pVertexShader = NULL;

		size_t index_offset = 0;

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

				// access to vertex

	ID3D11Texture2D* pBackBuffer;

	vector<Vertex> vertexlist;

	m_IndexCount = icount;

#include <iostream>

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.TopLeftX = 0;

struct ConstantLightBuffer {

	{

	//頂点バッファ作成

		KEY_PRESS_SURFACE_UP,

	//ビューポート設定

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			}



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



}

			index_offset += num_vertices;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pImmediateContext = NULL;

	delete[] pIList;

	}*/

		return hr;

	for (const auto& shape : shapes)



	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	return;

		SDL_Delay(1000);

	}

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pTextureView = NULL;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_Viewport.TopLeftX = 0;



		}

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pTexture);





	for (int i = 0; i < 3; i++)

		&m_pImmediateContext);

	return 0;

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

	delete[] pVList;

	txDesc.ArraySize = 1;



}

	WORD   icount = indexList.size();

		R"(cube.obj)");

				indexlist.push_back(idx.vertex_index);

	scDesc.OutputWindow = hwnd;

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		cout << "SDL_INIT_ERROR" << endl;

int main(int, char**)

	{



			{

	ZeroMemory(&txDesc, sizeof(txDesc));

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		{

	if (FAILED(hr))



	return;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		pLevels,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

			{

}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



			switch (e.key.keysym.sym)

	tinyobj::ObjReader reader;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	bool ret = tinyobj::LoadObj(

};

	XMFLOAT4X4 view;

	ibDesc.CPUAccessFlags = 0;

 * Lesson 1: Hello World!

	D3D_FEATURE_LEVEL level;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

			default:

	SAFE_RELEASE(m_pDevice);





	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	for (int i = 0; i < vcount; i++)



	while (SDL_PollEvent(&e) != 0)

	irData.pSysMem = &pIList[0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t ty =

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	while (SDL_PollEvent(&e) != 0)

	txDesc.MiscFlags = 0;



		{



	SDL_DestroyWindow(win);

		//User requests quit

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	{

	{



	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

		return hr;

	for (int i = 0; i < 3; i++)



}

				WORD index = idx.vertex_index;

{

				break;

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_Delay(1000);

	}

	irData.SysMemPitch = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

	//ビューポート設定

	D3D11_BUFFER_DESC ibDesc;

	return 0;

	m_Viewport.Height = (FLOAT)rect.Height();

		return 1;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		{

	//Clean up our objects and quit



	SAFE_RELEASE(m_pMatrixBuffer);



	HRESULT              hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_FreeSurface(bmp);



	}

			case SDLK_RIGHT:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			// Loop over vertices in the face.



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Quality = 0;



	//テクスチャ読み込み

		&m_pSwapChain,

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

#ifdef _DEBUG



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.eyePos, eye);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pTexture = NULL;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))



		R"(cube.obj)");

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		{

	//Key press surfaces constants



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pVertexShader = NULL;

				break;

	enum KeyPressSurfaces

	D3D11_SUBRESOURCE_DATA vrData;

		&level,

{

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.pSysMem = &pVList[0];





	//テクスチャ読み込み

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	{

	if (FAILED(hr))



		if (!reader.Error().empty())

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	}

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	ConstantLight    pntLight; //点光源

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantLight {

	}*/

	for (const auto& shape : shapes)



	dsDesc.Format = txDesc.Format;

	//Vertex* pVList = new Vertex[vcount];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		pVList[i] = vertexlist[i];

		else if (e.type == SDL_KEYDOWN)

	//Clean up our objects and quit

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pMatrixBuffer);

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t ty =



	SAFE_RELEASE(m_pSwapChain);

		return hr;

#include <SDL.h>



	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

	m_VertexCount = vcount;





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vrData.SysMemSlicePitch = 0;

			{

		KEY_PRESS_SURFACE_LEFT,

			case SDLK_LEFT:



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//深度ステンシルバッファ作成

	D3D11_SAMPLER_DESC smpDesc;

		return hr;

				vertex.push_back(vertex_tmp);

	for (const auto& shape : shapes)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.StructureByteStride = 0;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			{

				tinyobj::real_t tx =

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void CD3DTest::Release()









	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pTexture);

	}









	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	m_pSwapChain->Present(0, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	Release();





		{





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

	dsDesc.Format = txDesc.Format;



	m_IndexCount = icount;

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pSwapChain->Present(0, 0);

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

	Release();







	auto& materials = reader.GetMaterials();



	SAFE_RELEASE(m_pTexture);

	for (const auto& shape : shapes)



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	irData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.StructureByteStride = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

void CD3DTest::Release()



		&materials,

		return hr;

	//インデックスバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyRenderer(ren);

				vertex.push_back(vertex_tmp);

	m_pTextureView = NULL;

	enum KeyPressSurfaces

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Key press surfaces constants

	::GetClientRect(hwnd, &rect);

			index_offset += num_vertices;

		return hr;

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



#define TINYOBJLOADER_IMPLEMENTATION

		if (e.type == SDL_QUIT)

		pLevels,

	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	float    nearZ = 0.1f;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//テクスチャ読み込み

struct ConstantMaterial {

	HRESULT              hr;

	scDesc.OutputWindow = hwnd;

	D3D11_TEXTURE2D_DESC txDesc;

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pDepthStencilView);

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);



}

	XMFLOAT4         eyePos;   //視点座標

	D3D_FEATURE_LEVEL level;

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_FreeSurface(bmp);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pTextureView = NULL;



	float    farZ = 100.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)



			// Loop over vertices in the face.

	cbDesc.MiscFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

int main(int, char**)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//First we need to start up SDL, and make sure it went ok

	if (!reader.Warning().empty())

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	irData.SysMemPitch = 0;

				indexlist.push_back(index);

using std::cout; using std::endl;

		return 1;

		pIList[j] = indexList[j];

	cbDesc.StructureByteStride = 0;

	vector<WORD> indexList;



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pImmediateContext);

		return hr;



{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			{

		&m_pSwapChain,

	txDesc.SampleDesc.Count = 1;

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	std::string error;

}



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			index_offset += num_vertices;

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderPresent(ren);

				break;

			for (size_t v = 0; v < num_vertices; v++)

	m_pSwapChain = NULL;

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	tinyobj::ObjReaderConfig reader_config;

	D3D11_BUFFER_DESC ibDesc;

	m_pRenderTargetView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderPresent(ren);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	std::vector<tinyobj::shape_t> shapes;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			switch (e.key.keysym.sym)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&level,

};



	//vector<Vertex> vertex_t;



	//頂点バッファ作成



		{



		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pRenderTargetView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	::GetClientRect(hwnd, &rect);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pSampler = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantMaterial material; //物体の質感

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			}

int SEGMENT = 36;

	m_Viewport.MinDepth = 0.0f;

	//ビューポート設定



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			case SDLK_DOWN:

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::string error;



	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    farZ = 100.0f;





	//深度ステンシルバッファ作成

		}

		//User presses a key

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

		SDL_RenderClear(ren);

		delete[] pVList;

	SAFE_RELEASE(m_pTexture);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				break;

	if (FAILED(hr))

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	while (SDL_PollEvent(&e) != 0)



	SAFE_RELEASE(m_pDepthStencilTexture);





struct ConstantLight {

	D3D_FEATURE_LEVEL level;

			{

		pVList[i] = vertexlist[i];



	scDesc.SampleDesc.Count = 1;

struct ConstantLight {



	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	ConstantLightBuffer clb;

	//頂点バッファ作成

	if (FAILED(hr))

		&shapes,

}

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				// access to vertex

	std::vector<tinyobj::shape_t> shapes;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



			case SDLK_DOWN:

				break;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

struct ConstantLightBuffer {

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		1,

	SDL_DestroyTexture(tex);

		//User presses a key

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.MiscFlags = 0;

	m_Viewport.TopLeftY = 0;

	m_pDepthStencilView = NULL;

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b)



	m_VertexCount = 0;

		return hr;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				break;

	{

		KEY_PRESS_SURFACE_DOWN,

				// access to vertex





		{

	D3D11_TEXTURE2D_DESC txDesc;





			// Loop over vertices in the face.

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();

	{

};

	{

		SDL_RenderPresent(ren);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

	CRect                rect;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMFLOAT4X4 world;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.OutputWindow = hwnd;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.MiscFlags = 0;

	float    farZ = 100.0f;

	m_IndexCount = icount;

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDepthStencilTexture);

		&shapes,







		{





	std::string imagePath = "hello.bmp";

	vrData.SysMemPitch = 0;

		size_t index_offset = 0;  // インデントのオフセット

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC vbDesc;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#ifdef _DEBUG

	tinyobj::attrib_t attrib;

			index_offset += fv;

	XMFLOAT4X4 projection;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}



	if (FAILED(hr))

	return 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	HRESULT              hr;

	SDL_Event e;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}



	if (FAILED(hr))

struct ConstantMatrixBuffer {

	Release();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		pLevels,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pVertexShader = NULL;

	tinyobj::ObjReaderConfig reader_config;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

struct ConstantMaterial {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pDepthStencilTexture);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	{

		return hr;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	if (m_pImmediateContext)

	/*

	scDesc.SampleDesc.Count = 1;

			//Select surfaces based on key press

	SDL_Quit();







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

int SEGMENT = 36;

	tinyobj::attrib_t attrib;

	XMFLOAT4 pos;               //座標(x,y,z)



				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pInputLayout = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

		if (e.type == SDL_QUIT)

		delete[] pIList;



	SAFE_RELEASE(m_pVertexShader);

{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	reader_config.mtl_search_path = "./"; // Path to material files



	if (FAILED(hr))



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pSwapChain->Present(0, 0);

	{

				WORD index = idx.vertex_index;



	//頂点レイアウト作成

	XMStoreFloat4(&clb.eyePos, eye);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pDepthStencilTexture = NULL;

		{

	vector<Vertex> vertexlist;

	};

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pRenderTargetView);

	{

		&shapes,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

};



	//テクスチャ読み込み

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Vertex* pVList = new Vertex[vcount];

	tinyobj::attrib_t attrib;

	SDL_DestroyRenderer(ren);

		SDL_RenderClear(ren);



	for (size_t s = 0; s < shapes.size(); s++)

	}





	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.SampleDesc.Quality = 0;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.TopLeftY = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		pVList[i] = vertexlist[i];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(suf);



	enum KeyPressSurfaces

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			//Select surfaces based on key press

	tinyobj::ObjReader reader;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				break;



		return hr;

	tinyobj::ObjReader reader;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		pLevels,



	m_pSwapChain->Present(0, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	{

	UINT flags = 0;

	cbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

		}

		KEY_PRESS_SURFACE_RIGHT,

		size_t index_offset = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += fv;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (!ret)

		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_FreeSurface(suf);

	m_pSwapChain->Present(0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ConstantLight    pntLight; //点光源

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	bool ret = tinyobj::LoadObj(



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	float    nearZ = 0.1f;

#include <iostream>

		// Loop over faces(polygon)



	UINT strides = sizeof(Vertex);

	//頂点バッファ作成

		pIList[j] = indexList[j];

		SDL_RenderClear(ren);

				// access to vertex

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//定数バッファ作成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	SDL_Event e;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				break;

				vertex.push_back(vertex_tmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

void CD3DTest::Release()





	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_Delay(1000);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;

	txDesc.SampleDesc.Count = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

}





	scDesc.SampleDesc.Quality = 0;

				break;

				WORD index = idx.vertex_index;

		return hr;

	txDesc.MiscFlags = 0;

		return hr;





	m_Angle += XMConvertToRadians(1.0f);

}

		SDL_RenderPresent(ren);





#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	std::vector<tinyobj::material_t> materials;

}

	for (int j = 0; j < icount; j++)

	std::vector<tinyobj::material_t> materials;

		flags,

	ConstantMaterial material; //物体の質感

		if (!ret)





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!reader.Warning().empty())



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.StructureByteStride = 0;

		1,

			case SDLK_RIGHT:

			{

		&error,

	SDL_Quit();

		if (e.type == SDL_QUIT)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		//User presses a key

	vector<WORD> indexList;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	delete[] pVList;



}

	SDL_DestroyWindow(win);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	//定数バッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	ZeroMemory(&txDesc, sizeof(txDesc));

		flags,

	m_Viewport.Width = (FLOAT)rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;

			case SDLK_LEFT:

	HRESULT              hr;

			case SDLK_RIGHT:

	XMFLOAT4 ambient;           //環境(r,g,b)



		//User presses a key

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



}

	SDL_Quit();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);



struct ConstantMaterial {

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	{

	irData.SysMemPitch = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.TopLeftX = 0;

	int     vcount = vertexlist.size();

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.TopLeftY = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	m_Viewport.TopLeftY = 0;

		&level,

	m_Viewport.MaxDepth = 1.0f;

	if (!reader.ParseFromFile(inputfile, reader_config))



	float    nearZ = 0.1f;

		m_pImmediateContext->ClearState();

	D3D11_BUFFER_DESC vbDesc;

	//定数バッファ作成



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点レイアウト作成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//深度ステンシルバッファ作成

			}



		SDL_Delay(1000);

CD3DTest::~CD3DTest()



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	};

		}

	ibDesc.StructureByteStride = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&m_pSwapChain,

		m_pImmediateContext->ClearState();

{

	}



	irData.pSysMem = &pIList[0];

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.CPUAccessFlags = 0;

#endif

	irData.pSysMem = &pIList[0];

	float    farZ = 100.0f;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_VertexCount = 0;

	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()

		&shapes,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	LoadObj(vertexlist, indexList);

	m_pRenderTargetView = NULL;

/*

	D3D11_SAMPLER_DESC smpDesc;

			{

	};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//ピクセルシェーダー生成

};





	scDesc.OutputWindow = hwnd;



		D3D_DRIVER_TYPE_HARDWARE,

		pLevels,

	std::vector<tinyobj::material_t> materials;

};

		}

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#include <iostream>

				WORD index = idx.vertex_index;

			break;

	cbDesc.CPUAccessFlags = 0;

		}

		{

			case SDLK_LEFT:

		return 1;

	//Key press surfaces constants

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)



	std::string error;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{



#ifdef _DEBUG

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

using std::cout; using std::endl;

	m_Viewport.Height = (FLOAT)rect.Height();

}

	txDesc.MipLevels = 1;

	scDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	scDesc.BufferCount = 1;

	pBackBuffer->Release();

			for (size_t v = 0; v < fv; v++)

	}

		&attrib,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



};

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		m_pImmediateContext->ClearState();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.MinDepth = 0.0f;

	DXGI_SWAP_CHAIN_DESC scDesc;

			}

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ConstantMaterial material; //物体の質感

	//ピクセルシェーダー生成



	tinyobj::ObjReaderConfig reader_config;





	m_VertexCount = vcount;

				break;

			//Select surfaces based on key press



	if (!error.empty())

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				break;



		SDL_Delay(1000);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	LoadObj(vertexlist, indexList);

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::attrib_t attrib;







	float    fov = XMConvertToRadians(20.0f);



	cbDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	while (SDL_PollEvent(&e) != 0)

	m_VertexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

void CD3DTest::Render()

{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		exit(1);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyTexture(tex);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pSwapChain,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





		// Loop over faces(polygon)

		return hr;

		&level,

	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	scDesc.SampleDesc.Quality = 0;

	m_pDepthStencilView = NULL;

	Release();

		if (!reader.Error().empty())

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#endif

	SDL_FreeSurface(suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	HRESULT              hr;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Create Index

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pVertexBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	// Loop over shapes

	if (m_pImmediateContext)

	{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	irData.SysMemSlicePitch = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pSwapChain);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (e.type == SDL_QUIT)





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyTexture(tex);

	UINT flags = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	irData.SysMemSlicePitch = 0;

	std::string inputfile = "test.obj";

	reader_config.mtl_search_path = "./"; // Path to material files



{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	UINT offsets = 0;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	};

		size_t index_offset = 0;



	txDesc.MipLevels = 1;

#include <iostream>

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		&level,

		SDL_RenderPresent(ren);

	std::vector<tinyobj::shape_t> shapes;

	//Vertex* pVList = new Vertex[vcount];

		flags,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{





	txDesc.ArraySize = 1;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDevice);

	scDesc.BufferDesc.Height = rect.Height();

			}

	irData.SysMemSlicePitch = 0;

	}

	scDesc.SampleDesc.Quality = 0;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		KEY_PRESS_SURFACE_TOTAL

	vrData.SysMemPitch = 0;

			exit(1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_DestroyTexture(tex);

		}

				indexlist.push_back(idx.vertex_index);

	return;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_FreeSurface(suf);

	D3D11_SUBRESOURCE_DATA irData;

	float    farZ = 100.0f;

		return hr;

	for (int i = 0; i < vcount; i++)

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			exit(1);

	if (FAILED(hr))

	{

	}

CD3DTest::~CD3DTest()

	SDL_FreeSurface(suf);

	m_pRenderTargetView = NULL;

#include <SDL.h>

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				break;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	Release();



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ConstantLightBuffer clb;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pDepthStencilView);

		SDL_Delay(1000);

#define TINYOBJLOADER_IMPLEMENTATION

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&attrib,

	SDL_DestroyWindow(win);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{









	LoadObj(vertexlist, indexList);

	{

};

	m_pSampler = NULL;

	}

	D3D_FEATURE_LEVEL level;

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		D3D_DRIVER_TYPE_HARDWARE,

}

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Event e;

#include <SDL.h>



	delete[] pVList;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pDevice = NULL;

	std::vector<tinyobj::shape_t> shapes;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.ArraySize = 1;

	XMFLOAT4 specular;          //反射(r,g,b)





	D3D11_BUFFER_DESC cbDesc;

{

	m_Viewport.TopLeftX = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			// Loop over vertices in the face.

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	cbDesc.MiscFlags = 0;

	{

	tinyobj::attrib_t attrib;

		if (!reader.Error().empty())

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			index_offset += num_vertices;

	std::string imagePath = "hello.bmp";



	txDesc.Width = rect.Width();

	pBackBuffer->Release();

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



#endif

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ibDesc.MiscFlags = 0;



	return 0;

	}

	SAFE_RELEASE(m_pIndexBuffer);

	std::string inputfile = "test.obj";

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

};

	D3D11_BUFFER_DESC cbDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Key press surfaces constants

				vertex.push_back(vertex_tmp);



	XMFLOAT4         ambient;  //環境光(r,g,b)

				break;

	SDL_DestroyWindow(win);

	XMFLOAT4X4 world;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	/*

};

		{

	ConstantLightBuffer clb;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//インデックスバッファ作成

			for (size_t v = 0; v < fv; v++)







	for (const auto& shape : shapes)



/*

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

HRESULT CD3DTest::Create(HWND hwnd)

	{

	//インデックスバッファ作成

	m_pDepthStencilTexture = NULL;

		return hr;

	SDL_FreeSurface(suf);

	}

	//頂点レイアウト作成

{

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_pLightBuffer = NULL;

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

			switch (e.key.keysym.sym)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	Vertex* pVList = new Vertex[vcount];

			//Select surfaces based on key press

	ConstantLightBuffer clb;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReader reader;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.MiscFlags = 0;

		delete[] pVList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pTextureView);

{



	scDesc.SampleDesc.Count = 1;



	}

	D3D11_SUBRESOURCE_DATA irData;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

struct ConstantMaterial {

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantLight {

	{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		}

		&attrib,

	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_RIGHT,

	delete[] pIList;



		}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pInputLayout = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	{

	m_IndexCount = icount;

	vbDesc.CPUAccessFlags = 0;



				WORD index = idx.vertex_index;



	scDesc.BufferCount = 1;

int main(int, char**)

	UINT offsets = 0;

{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ConstantLight    pntLight; //点光源

		1,

int main(int, char**)

	SDL_DestroyWindow(win);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	pBackBuffer->Release();

void CD3DTest::Render()

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ConstantMaterial material; //物体の質感

	XMFLOAT4         eyePos;   //視点座標

				vertex.push_back(vertex_tmp);

	auto& attrib = reader.GetAttrib();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.MaxDepth = 1.0f;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pSampler);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		//User presses a key

#include <iostream>

	{



	dsDesc.Texture2D.MipSlice = 0;

				indexlist.push_back(index);

		&m_pImmediateContext);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.MiscFlags = 0;



	m_pMatrixBuffer = NULL;

	CRect                rect;

	cbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pTextureView);

	tinyobj::attrib_t attrib;

	auto& materials = reader.GetMaterials();

	::GetClientRect(hwnd, &rect);

		pIList[j] = indexList[j];

	{

			case SDLK_UP:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



void CD3DTest::Release()

	CRect                rect;

{

	D3D11_BUFFER_DESC vbDesc;

				break;

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	ConstantLight    pntLight; //点光源

	}



	if (m_pImmediateContext)





		size_t index_offset = 0;  // インデントのオフセット



CD3DTest::CD3DTest()



	if (m_pImmediateContext)

	{

	{

	tinyobj::attrib_t attrib;

		&m_pImmediateContext);

}

		&level,



	//Create Index

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

		return hr;



			index_offset += fv;





	SAFE_RELEASE(m_pSwapChain);

	D3D11_BUFFER_DESC vbDesc;

			{

		return hr;



	if (FAILED(hr))



		else if (e.type == SDL_KEYDOWN)

	//First we need to start up SDL, and make sure it went ok

		if (e.type == SDL_QUIT)

			{

				vertex.push_back(vertex_tmp);

				indexlist.push_back(index);



	HRESULT              hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	delete[] pVList;





		D3D_DRIVER_TYPE_HARDWARE,

				break;

		delete[] pVList;



}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.Windowed = TRUE;

	scDesc.BufferCount = 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

	cbDesc.CPUAccessFlags = 0;



	delete[] pVList;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return hr;

		{

	int     vcount = vertexlist.size();



	D3D11_BUFFER_DESC cbDesc;





};

		m_pImmediateContext->ClearState();

	m_pLightBuffer = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pDevice);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

	m_pVertexBuffer = NULL;

};

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Quit();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;



	return;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	vrData.SysMemPitch = 0;

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{

	SAFE_RELEASE(m_pMatrixBuffer);

	}

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		D3D_DRIVER_TYPE_HARDWARE,

#include <iostream>

}

	cbDesc.MiscFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	return 0;

	m_VertexCount = vcount;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ConstantLightBuffer clb;

	}



	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			for (size_t v = 0; v < fv; v++)



	txDesc.Height = rect.Height();

	scDesc.BufferDesc.Width = rect.Width();

	m_pIndexBuffer = NULL;





	irData.SysMemPitch = 0;

				// access to vertex

				break;



		&shapes,

	//Key press surfaces constants



		return hr;

	scDesc.Windowed = TRUE;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pPixelShader);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t tx =

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	txDesc.Usage = D3D11_USAGE_DEFAULT;





	vbDesc.StructureByteStride = 0;



		{

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				// access to vertex

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (!reader.Warning().empty())

	m_pMatrixBuffer = NULL;

	}

			default:

		return hr;

	ConstantMaterial material; //物体の質感

	m_IndexCount = 0;

	txDesc.Height = rect.Height();

	{



	}



	XMFLOAT4         eyePos;   //視点座標

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pImmediateContext);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

	m_Viewport.Width = (FLOAT)rect.Width();

			case SDLK_RIGHT:

	return;

	return hr;

		}

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_BUFFER_DESC ibDesc;

		&shapes,



		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	enum KeyPressSurfaces

			int num_vertices = shape.mesh.num_face_vertices[f];



		{

#include <iostream>

		cout << "SDL_INIT_ERROR" << endl;



		if (!ret)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	for (const auto& shape : shapes)

	// Loop over shapes

	m_pRenderTargetView = NULL;

	vbDesc.CPUAccessFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;

	{

	int     vcount = vertexlist.size();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int i = 0; i < 3; i++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_UP,

		SDL_Delay(1000);

	XMStoreFloat4(&clb.eyePos, eye);



	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

		pLevels,

				vertex.push_back(vertex_tmp);



}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&level,

		}

		&error,

	txDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	float    fov = XMConvertToRadians(20.0f);



		if (e.type == SDL_QUIT)



	std::string error;





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	if (FAILED(hr))

struct ConstantMaterial {

		return hr;

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&attrib,



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.TopLeftX = 0;



			}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))



	{



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	D3D11_BUFFER_DESC ibDesc;

	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}

	//vector<Vertex> vertex_t;

	txDesc.SampleDesc.Count = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t ty =



	SDL_DestroyWindow(win);

		D3D11_SDK_VERSION,

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

			break;



	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	int     vcount = vertexlist.size();



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	txDesc.SampleDesc.Count = 1;

	m_pVertexShader = NULL;

{

				WORD index = idx.vertex_index;

	UINT flags = 0;

	irData.pSysMem = &pIList[0];



	pBackBuffer->Release();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}





		if (!reader.Error().empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	vrData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Quit();

	{

	{

	std::string error;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	return;

	m_pTexture = NULL;



#include <SDL.h>

	enum KeyPressSurfaces

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pInputLayout);


