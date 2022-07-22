			}

using std::cout; using std::endl;

	m_pRenderTargetView = NULL;

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

using std::cout; using std::endl;

		return hr;

	m_pIndexBuffer = NULL;

		m_pImmediateContext->ClearState();

	m_pTextureView = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)



			for (size_t v = 0; v < num_vertices; v++)



void CD3DTest::Release()

	//ビューポート設定

		SDL_RenderPresent(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			switch (e.key.keysym.sym)

		&m_pImmediateContext);

	m_pMatrixBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.OutputWindow = hwnd;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		if (!reader.Error().empty())

	};





	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4X4 world;

	D3D_FEATURE_LEVEL level;

	irData.SysMemSlicePitch = 0;

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.ArraySize = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		pLevels,

	}



	if (FAILED(hr))



	}



	if (m_pImmediateContext)



	vbDesc.CPUAccessFlags = 0;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_DestroyWindow(win);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;



				vertex.push_back(vertex_tmp);

	}

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

struct ConstantMaterial {

	delete[] pVList;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

			}

struct ConstantLightBuffer {

	dsDesc.Format = txDesc.Format;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.MipLevels = 1;

CD3DTest::CD3DTest()

#ifdef _DEBUG

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		&attrib,

	tinyobj::attrib_t attrib;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pDevice);

		KEY_PRESS_SURFACE_LEFT,

	}



	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;



	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.StructureByteStride = 0;

		delete[] pIList;

	UINT strides = sizeof(Vertex);

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pImmediateContext);

	//Clean up our objects and quit





				indexlist.push_back(idx.vertex_index);

	WORD* pIList = new WORD[icount];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

int SEGMENT = 36;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	ibDesc.ByteWidth = sizeof(WORD) * icount;



		return hr;

{

		flags,

using std::cout; using std::endl;

				WORD index = idx.vertex_index;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	Release();





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		if (e.type == SDL_QUIT)

		D3D_DRIVER_TYPE_HARDWARE,

};

		return 1;

	ibDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_BUFFER_DESC cbDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Clean up our objects and quit

	if (!reader.ParseFromFile(inputfile, reader_config))

			//Select surfaces based on key press

	//深度ステンシルバッファ作成

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	//ピクセルシェーダー生成



	m_pDepthStencilView = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	int     vcount = vertexlist.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#include <SDL.h>



	if (FAILED(hr))

		&error,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_BUFFER_DESC cbDesc;

	{

	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Viewport.TopLeftY = 0;

using std::cout; using std::endl;

	}

#include <iostream>



};

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_IndexCount = icount;

{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_FreeSurface(bmp);

		&level,

		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			default:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

	pBackBuffer->Release();

	SAFE_RELEASE(m_pInputLayout);

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (e.type == SDL_QUIT)

	{

	}

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		1,

#include <iostream>

		}

	Vertex* pVList = new Vertex[vcount];

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//深度ステンシルバッファ作成



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

		return hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_Delay(1000);

		flags,

	m_pIndexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();



		KEY_PRESS_SURFACE_LEFT,

	//頂点シェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

using std::cout; using std::endl;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	if (FAILED(hr))

CD3DTest::~CD3DTest()

};

	D3D11_SUBRESOURCE_DATA irData;

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	auto& shapes = reader.GetShapes();

		&error,

	XMFLOAT4X4 world;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





		KEY_PRESS_SURFACE_UP,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pSwapChain->Present(0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	std::vector<tinyobj::shape_t> shapes;

	m_pTextureView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		}

		pLevels,



};

	m_pInputLayout = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				WORD index = idx.vertex_index;

	std::string error;

#endif

	//テクスチャ読み込み

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.MinDepth = 0.0f;

	//頂点レイアウト作成

	m_pSampler = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



int main(int, char**)

	pBackBuffer->Release();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return 0;

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_LEFT,

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	LoadObj(vertexlist, indexList);

	Vertex* pVList = new Vertex[vcount];

			case SDLK_LEFT:

		{

	}



		return hr;

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

				break;

int SEGMENT = 36;





};



	float    nearZ = 0.1f;

		D3D11_SDK_VERSION,



	{

	{



	SAFE_RELEASE(m_pVertexShader);

	ZeroMemory(&txDesc, sizeof(txDesc));



}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		&m_pImmediateContext);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pTextureView);

{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	vrData.SysMemSlicePitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		return hr;

		KEY_PRESS_SURFACE_TOTAL

#include <SDL.h>

	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);

	//Clean up our objects and quit



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&scDesc,



	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

		NULL,



	m_pIndexBuffer = NULL;



	int     vcount = vertexlist.size();

	m_pSampler = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	for (int j = 0; j < icount; j++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	}

	{

	scDesc.Windowed = TRUE;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_DestroyTexture(tex);



	//テクスチャ読み込み

			break;



	{

	SDL_Quit();

				tinyobj::real_t ty =

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//First we need to start up SDL, and make sure it went ok

				WORD index = idx.vertex_index;

		&shapes,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

/*

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

{



	XMFLOAT4X4 projection;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.Width = rect.Width();





	txDesc.Width = rect.Width();

{

	}



	m_pVertexShader = NULL;





	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;



	if (FAILED(hr))

	SDL_FreeSurface(suf);

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	ConstantMatrixBuffer cmb;

	XMFLOAT4 pos;               //座標(x,y,z)

}

				WORD index = idx.vertex_index;

CD3DTest::~CD3DTest()

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}



	XMFLOAT4         eyePos;   //視点座標

	ID3D11Texture2D* pBackBuffer;

			//Select surfaces based on key press

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();

	return;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		if (!reader.Error().empty())



	SAFE_RELEASE(m_pIndexBuffer);



	m_Viewport.MaxDepth = 1.0f;

		}



	D3D11_SUBRESOURCE_DATA irData;

	m_pSwapChain->Present(0, 0);



	//ピクセルシェーダー生成



CD3DTest::~CD3DTest()

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_Delay(1000);



				tinyobj::real_t tx =

		&shapes,

		{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vbDesc.StructureByteStride = 0;



	m_pVertexBuffer = NULL;

	std::string inputfile = "test.obj";

		cout << "SDL_INIT_ERROR" << endl;

		if (e.type == SDL_QUIT)



				break;

	irData.pSysMem = &pIList[0];

			// Loop over vertices in the face.

}



	m_VertexCount = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

			{

			}

	}

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferCount = 1;

		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;

	}

	return 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (int i = 0; i < 3; i++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SDL_Quit();

int SEGMENT = 36;

struct ConstantLight {

	std::vector<tinyobj::shape_t> shapes;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_RIGHT:

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	ConstantLightBuffer clb;

	//テクスチャ読み込み





}



	std::string imagePath = "hello.bmp";

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantMaterial material; //物体の質感

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pIndexBuffer = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

}

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	int     vcount = vertexlist.size();

		&error,

	m_VertexCount = vcount;



	if (FAILED(hr))

	Release();

	D3D11_SUBRESOURCE_DATA vrData;

				WORD index = idx.vertex_index;

		&shapes,

};

	Release();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vector<WORD> indexList;

	scDesc.OutputWindow = hwnd;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

		{

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.StructureByteStride = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	};

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_IndexCount = icount;

			}

		&shapes,

	XMFLOAT4         eyePos;   //視点座標



}

		{

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);







	SAFE_RELEASE(m_pRenderTargetView);

	D3D_FEATURE_LEVEL level;

	m_pLightBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	cbDesc.StructureByteStride = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include <SDL.h>

		pIList[j] = indexList[j];

		return hr;

	ConstantMatrixBuffer cmb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pImmediateContext);

{

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	ID3D11Texture2D* pBackBuffer;

	WORD   icount = indexList.size();

	D3D11_BUFFER_DESC ibDesc;

	m_IndexCount = 0;

struct ConstantMatrixBuffer {

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	{

	pBackBuffer->Release();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	CRect                rect;

}

struct ConstantLight {

		return hr;

	// Loop over shapes

	std::string error;

	if (m_pImmediateContext)

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pDevice);

		//User presses a key

	};

	m_Viewport.TopLeftX = 0;

	LoadObj(vertexlist, indexList);

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				WORD index = idx.vertex_index;

		return hr;

	}

		delete[] pIList;

				indexlist.push_back(idx.vertex_index);

	std::vector<tinyobj::material_t> materials;



	}

		&m_pDevice,

		NULL,

	for (int j = 0; j < icount; j++)

			}

	Release();

			{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pVertexBuffer);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		delete[] pVList;



}

	}



	vbDesc.MiscFlags = 0;



	//頂点バッファ作成



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	m_pSampler = NULL;

	UINT offsets = 0;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pInputLayout = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {



	XMFLOAT4X4 world;

	SDL_Quit();

	SDL_FreeSurface(suf);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				break;

		delete[] pIList;

	m_pRenderTargetView = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

	vector<WORD> indexList;

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.CPUAccessFlags = 0;





	auto& shapes = reader.GetShapes();

		{



	HRESULT              hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pDevice = NULL;




