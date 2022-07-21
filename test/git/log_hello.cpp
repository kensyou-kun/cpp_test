				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantLightBuffer {

	//vector<WORD> index_t;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.eyePos, eye);

			case SDLK_RIGHT:

	m_pSampler = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		return hr;

			for (size_t v = 0; v < num_vertices; v++)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	irData.SysMemPitch = 0;

		&attrib,

	txDesc.CPUAccessFlags = 0;

	txDesc.Width = rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&materials,



		if (!reader.Error().empty())

}

			int num_vertices = shape.mesh.num_face_vertices[f];

	std::string imagePath = "hello.bmp";

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

int main(int, char**)

	SAFE_RELEASE(m_pSampler);

	D3D_FEATURE_LEVEL level;

		&materials,

	{

	m_IndexCount = icount;





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_BUFFER_DESC cbDesc;

{

		}

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	for (int j = 0; j < icount; j++)

	for (int j = 0; j < icount; j++)

};

		flags,

	}



	return 0;

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	SAFE_RELEASE(m_pInputLayout);



	LoadObj(vertexlist, indexList);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

			index_offset += num_vertices;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	for (int i = 0; i < 3; i++)

	if (m_pImmediateContext)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	scDesc.BufferCount = 1;

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D11_BUFFER_DESC ibDesc;



struct ConstantLight {

	SDL_FreeSurface(suf);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pSwapChain = NULL;

	//ピクセルシェーダー生成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	while (SDL_PollEvent(&e) != 0)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pMatrixBuffer);



			default:

};

				indexlist.push_back(idx.vertex_index);

			index_offset += num_vertices;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

		else if (e.type == SDL_KEYDOWN)

	}

		size_t index_offset = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.OutputWindow = hwnd;

				break;

	SDL_FreeSurface(suf);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pPixelShader = NULL;



		return hr;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (size_t s = 0; s < shapes.size(); s++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

 */

	Vertex* pVList = new Vertex[vcount];



	WORD* pIList = new WORD[icount];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#include <SDL.h>

	//頂点レイアウト作成

		flags,

	if (FAILED(hr))

	//定数バッファ作成

	}



int SEGMENT = 36;

		delete[] pIList;





	SAFE_RELEASE(m_pMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

		{



	std::vector<tinyobj::shape_t> shapes;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



{

			case SDLK_DOWN:

		KEY_PRESS_SURFACE_UP,

	//インデックスバッファ作成

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

	txDesc.Width = rect.Width();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	tinyobj::ObjReader reader;

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



void CD3DTest::Render()

		}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	Vertex* pVList = new Vertex[vcount];

	auto& shapes = reader.GetShapes();

	ConstantMaterial material; //物体の質感

	WORD* pIList = new WORD[icount];

	if (!error.empty())

	SDL_Quit();

		cout << "SDL_INIT_ERROR" << endl;

	while (SDL_PollEvent(&e) != 0)

	scDesc.BufferCount = 1;

		}

	return;

	dsDesc.Texture2D.MipSlice = 0;

				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 world;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	//定数バッファ作成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		KEY_PRESS_SURFACE_DOWN,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//ピクセルシェーダー生成

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Release()



	//Create Index

	scDesc.OutputWindow = hwnd;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

		KEY_PRESS_SURFACE_DEFAULT,

	Release();

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	/*

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	if (!error.empty())

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);

	enum KeyPressSurfaces

	bool ret = tinyobj::LoadObj(



CD3DTest::CD3DTest()

	std::vector<tinyobj::material_t> materials;

		NULL,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	//vector<WORD> index_t;

		delete[] pVList;

}

	pBackBuffer->Release();

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pVertexShader);

		//User presses a key

	XMFLOAT4X4 world;

	SDL_Quit();

	SDL_Event e;

		size_t index_offset = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.StructureByteStride = 0;

		//User presses a key

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.StructureByteStride = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

using std::cout; using std::endl;

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ConstantLight    pntLight; //点光源

		&shapes,

	ID3D11Texture2D* pBackBuffer;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

	ConstantLight    pntLight; //点光源

}

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	//テクスチャ読み込み

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pTextureView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	dsDesc.Format = txDesc.Format;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

{

	{

		{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	{

	D3D11_BUFFER_DESC ibDesc;



			{

int main(int, char**)

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	reader_config.mtl_search_path = "./"; // Path to material files

	delete[] pVList;

	}

		SDL_Delay(1000);

};

				tinyobj::real_t ty =

	SDL_DestroyRenderer(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pMatrixBuffer = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_FreeSurface(suf);

	m_pLightBuffer = NULL;



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return 0;



	cbDesc.CPUAccessFlags = 0;

	}



	XMFLOAT4 pos;               //座標(x,y,z)

	}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyRenderer(ren);

{

			index_offset += fv;



	tinyobj::ObjReader reader;

struct ConstantLight {

	SAFE_RELEASE(m_pDepthStencilView);

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				break;

{

	//テクスチャ読み込み

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}*/

	SAFE_RELEASE(m_pSwapChain);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pPixelShader = NULL;

		KEY_PRESS_SURFACE_UP,







	tinyobj::attrib_t attrib;

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;

		}

		return hr;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			case SDLK_LEFT:

		&attrib,

	{

	::GetClientRect(hwnd, &rect);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.CPUAccessFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<Vertex> vertexlist;

		}

int main(int, char**)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pSampler);

		return hr;



}

	auto& shapes = reader.GetShapes();

	D3D11_BUFFER_DESC cbDesc;

		R"(cube.obj)");

	m_pIndexBuffer = NULL;

			index_offset += fv;

	};

	Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

			index_offset += fv;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))







	{

};

		1,

	while (SDL_PollEvent(&e) != 0)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	m_pVertexShader = NULL;

			}

{

			for (size_t v = 0; v < fv; v++)

	vrData.SysMemSlicePitch = 0;

		}

				break;

};



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

	irData.SysMemSlicePitch = 0;

			index_offset += fv;

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);



	SAFE_RELEASE(m_pTexture);

struct ConstantLight {

	vbDesc.MiscFlags = 0;



		delete[] pIList;

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

#include <iostream>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_DestroyRenderer(ren);





	m_pInputLayout = NULL;

	}*/

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D_FEATURE_LEVEL level;

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D_FEATURE_LEVEL level;

	XMFLOAT4 ambient;           //環境(r,g,b)

				WORD index = idx.vertex_index;

	//Clean up our objects and quit

	//vector<WORD> index_t;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	//First we need to start up SDL, and make sure it went ok



		{

	{

	int     vcount = vertexlist.size();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				vertex.push_back(vertex_tmp);

			// Loop over vertices in the face.

int SEGMENT = 36;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int main(int, char**)



	cbDesc.StructureByteStride = 0;

	};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&level,

		delete[] pVList;

}

	cbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);



		delete[] pIList;

				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())

			{

}

/*

		delete[] pVList;

			index_offset += num_vertices;



void CD3DTest::Render()

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	for (int i = 0; i < vcount; i++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	irData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pMatrixBuffer);



void CD3DTest::Release()



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&error,

	//頂点シェーダー生成

	D3D11_SUBRESOURCE_DATA irData;

	if (!reader.Warning().empty())

			{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

		return hr;

int main(int, char**)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	m_Viewport.TopLeftY = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return hr;

	m_Viewport.TopLeftY = 0;

void CD3DTest::Release()

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC vbDesc;

	if (m_pImmediateContext)

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MinDepth = 0.0f;

	D3D11_BUFFER_DESC cbDesc;

	Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

CD3DTest::~CD3DTest()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferCount = 1;

struct ConstantLightBuffer {



	tinyobj::ObjReader reader;

	m_pImmediateContext = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pDepthStencilTexture = NULL;





	SAFE_RELEASE(m_pInputLayout);

	m_VertexCount = 0;

		return hr;

				vertex.push_back(vertex_tmp);

	}



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

		SDL_RenderPresent(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//テクスチャ読み込み

			case SDLK_UP:

	Vertex* pVList = new Vertex[vcount];



CD3DTest::~CD3DTest()

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

CD3DTest::CD3DTest()

	vrData.SysMemPitch = 0;

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





		return hr;

		if (!reader.Error().empty())

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.BufferCount = 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pInputLayout);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	float    farZ = 100.0f;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferCount = 1;

		//User presses a key

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<Vertex> vertexlist;

	SDL_DestroyWindow(win);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pInputLayout = NULL;



				tinyobj::real_t tx =



	//First we need to start up SDL, and make sure it went ok

	m_pVertexShader = NULL;

	m_pSwapChain->Present(0, 0);

	irData.SysMemSlicePitch = 0;

			for (size_t v = 0; v < fv; v++)

	m_VertexCount = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	vrData.SysMemSlicePitch = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	std::string error;

	//Key press surfaces constants

	dsDesc.Texture2D.MipSlice = 0;

	m_pLightBuffer = NULL;

	m_pSwapChain->Present(0, 0);

			switch (e.key.keysym.sym)

	//頂点レイアウト作成

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	ID3D11Texture2D* pBackBuffer;

	m_pSwapChain = NULL;



	enum KeyPressSurfaces

	scDesc.BufferCount = 1;

			int num_vertices = shape.mesh.num_face_vertices[f];



		KEY_PRESS_SURFACE_DOWN,

	txDesc.Width = rect.Width();

	UINT offsets = 0;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		{

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t ty =

		KEY_PRESS_SURFACE_TOTAL

	txDesc.ArraySize = 1;

	//頂点シェーダー生成

	auto& shapes = reader.GetShapes();

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		R"(cube.obj)");

		if (e.type == SDL_QUIT)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.MiscFlags = 0;

	//インデックスバッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDevice = NULL;

	txDesc.ArraySize = 1;

{



			// Loop over vertices in the face.

		size_t index_offset = 0;

};

		&materials,

}

	SAFE_RELEASE(m_pSwapChain);

};

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				break;

		D3D11_SDK_VERSION,

		return hr;

			case SDLK_UP:

	ibDesc.StructureByteStride = 0;

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_VertexCount = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (int j = 0; j < icount; j++)



struct ConstantLight {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;

	}

void CD3DTest::Release()

		&m_pSwapChain,

	}

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			switch (e.key.keysym.sym)

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderClear(ren);

			{

	ConstantMaterial material; //物体の質感

			index_offset += fv;

};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (FAILED(hr))



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	UINT offsets = 0;

				indexlist.push_back(index);







				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pMatrixBuffer = NULL;

	WORD* pIList = new WORD[icount];

	bool ret = tinyobj::LoadObj(

	delete[] pIList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D11_TEXTURE2D_DESC txDesc;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

};



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4X4 view;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	Release();

	m_pVertexShader = NULL;

	};

	m_pDepthStencilTexture = NULL;

			switch (e.key.keysym.sym)

	XMFLOAT4X4 projection;

	vbDesc.StructureByteStride = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

		pIList[j] = indexList[j];

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				vertex.push_back(vertex_tmp);



	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_DestroyWindow(win);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_Angle += XMConvertToRadians(1.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	auto& materials = reader.GetMaterials();

	//Key press surfaces constants

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);



	txDesc.ArraySize = 1;





	XMFLOAT4X4 projection;

	}

	auto& shapes = reader.GetShapes();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

}





		//User presses a key





	for (int i = 0; i < 3; i++)

	if (FAILED(hr))



	delete[] pVList;



	D3D11_SUBRESOURCE_DATA irData;

		cout << "SDL_INIT_ERROR" << endl;



	SDL_FreeSurface(suf);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vbDesc.CPUAccessFlags = 0;

	SDL_Event e;

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	if (FAILED(hr))



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		{



				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	/*

};

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLight    pntLight; //点光源



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4 ambient;           //環境(r,g,b)





	if (!reader.Warning().empty())

		&shapes,

	m_pMatrixBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_BUFFER_DESC vbDesc;



	WORD   icount = indexList.size();

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SAFE_RELEASE(m_pTextureView);

	//Clean up our objects and quit

	{

	{

	for (int i = 0; i < 3; i++)

				tinyobj::real_t ty =

	scDesc.BufferCount = 1;

		if (!ret)

	cbDesc.MiscFlags = 0;

	UINT offsets = 0;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pVertexShader = NULL;

	cbDesc.MiscFlags = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

#include <SDL.h>

	tinyobj::ObjReader reader;

	scDesc.BufferCount = 1;

	ID3D11Texture2D* pBackBuffer;



	D3D11_TEXTURE2D_DESC txDesc;

				// access to vertex

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& shapes = reader.GetShapes();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

 * Lesson 1: Hello World!

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

		{

};

	txDesc.SampleDesc.Quality = 0;

void CD3DTest::Release()

	if (FAILED(hr))





	SAFE_RELEASE(m_pImmediateContext);

			}



	SAFE_RELEASE(m_pVertexBuffer);

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vrData.SysMemPitch = 0;

{

	{

	XMFLOAT4         eyePos;   //視点座標

		}

		}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pLightBuffer = NULL;

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL



	m_Angle += XMConvertToRadians(1.0f);

		pIList[j] = indexList[j];

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

		{

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pPixelShader = NULL;



};

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.MipLevels = 1;



#endif

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		}

	if (FAILED(hr))





HRESULT CD3DTest::Create(HWND hwnd)

	delete[] pVList;



			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.SysMemPitch = 0;

	scDesc.SampleDesc.Count = 1;

	m_Viewport.TopLeftX = 0;

CD3DTest::~CD3DTest()

#include <SDL.h>

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

	SDL_FreeSurface(bmp);

			default:

			index_offset += num_vertices;



		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		{

};



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	//テクスチャ読み込み

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return 1;

{

	{

				vertex.push_back(vertex_tmp);



	D3D_FEATURE_LEVEL level;

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_Viewport.Height = (FLOAT)rect.Height();

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



};

	SAFE_RELEASE(m_pSampler);

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pVertexBuffer);

void CD3DTest::Release()

			case SDLK_UP:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = 0;

		KEY_PRESS_SURFACE_DEFAULT,

			switch (e.key.keysym.sym)



	m_VertexCount = vcount;

	Vertex* pVList = new Vertex[vcount];





		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.Format = txDesc.Format;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}

	dsDesc.Format = txDesc.Format;

		&m_pImmediateContext);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

/*



	return 0;

		SDL_RenderPresent(ren);

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSwapChain);

	Vertex* pVList = new Vertex[vcount];

		return hr;

	}

{

	scDesc.BufferDesc.Height = rect.Height();

		delete[] pVList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)

				break;

	return 0;

	scDesc.OutputWindow = hwnd;

			{

	cbDesc.MiscFlags = 0;

	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&m_pDevice,

	XMFLOAT4         eyePos;   //視点座標

			exit(1);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	m_pInputLayout = NULL;

		{



		return hr;

 * Lesson 1: Hello World!



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	m_pRenderTargetView = NULL;



		return 1;

			exit(1);

	txDesc.Width = rect.Width();



	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	D3D11_SUBRESOURCE_DATA vrData;



		//User presses a key

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	delete[] pVList;

{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

		NULL,

struct ConstantMaterial {

	bool ret = tinyobj::LoadObj(

	{

	m_Viewport.TopLeftY = 0;

		SDL_Delay(1000);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		{



	scDesc.OutputWindow = hwnd;

void CD3DTest::Release()

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.MipLevels = 1;

	//vector<Vertex> vertex_t;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}*/

		m_pImmediateContext->ClearState();

		R"(cube.obj)");

/*



		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	irData.SysMemSlicePitch = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				// access to vertex

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#ifdef _DEBUG

	m_pSwapChain->Present(0, 0);

	enum KeyPressSurfaces

#ifdef _DEBUG

	vrData.pSysMem = &pVList[0];





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::string inputfile = "test.obj";

	SDL_FreeSurface(bmp);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyTexture(tex);

			}

int main(int, char**)





		pIList[j] = indexList[j];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

{

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vrData.pSysMem = &pVList[0];

				break;

void CD3DTest::Release()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		size_t index_offset = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <iostream>



	tinyobj::ObjReaderConfig reader_config;

	txDesc.Width = rect.Width();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& shapes = reader.GetShapes();

		}

	vrData.pSysMem = &pVList[0];



	HRESULT              hr;



	SDL_DestroyWindow(win);



	D3D11_SUBRESOURCE_DATA irData;

	return;

	vrData.SysMemSlicePitch = 0;

	SDL_FreeSurface(bmp);

	while (SDL_PollEvent(&e) != 0)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//Vertex* pVList = new Vertex[vcount];

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_Delay(1000);



	//Vertex* pVList = new Vertex[vcount];

struct ConstantLight {

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ConstantLightBuffer clb;



		flags,

		return 1;

	delete[] pIList;



			index_offset += fv;

	m_pTextureView = NULL;



	vrData.SysMemSlicePitch = 0;



	return 0;

	for (int j = 0; j < icount; j++)

	vbDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		SDL_Delay(1000);

	if (m_pImmediateContext)

	vbDesc.CPUAccessFlags = 0;



	{

		&m_pSwapChain,

int main(int, char**)

			}

	scDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//Clean up our objects and quit





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.TopLeftY = 0;

	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		m_pImmediateContext->ClearState();





				tinyobj::real_t tx =

	//vector<WORD> index_t;

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	std::string inputfile = "test.obj";

	vbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

		delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Quit();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

CD3DTest::CD3DTest()





	m_Viewport.TopLeftX = 0;

				vertex.push_back(vertex_tmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	m_pSampler = NULL;

	}*/



	scDesc.BufferDesc.Height = rect.Height();

	}



	tinyobj::attrib_t attrib;

	for (int i = 0; i < 3; i++)

		if (!ret)

			}

};

			}

	irData.pSysMem = &pIList[0];

	D3D_FEATURE_LEVEL level;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	D3D11_BUFFER_DESC ibDesc;



	SDL_FreeSurface(suf);

	vector<Vertex> vertexlist;



		&error,

	if (m_pImmediateContext)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::string inputfile = "test.obj";

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	txDesc.MiscFlags = 0;

	txDesc.SampleDesc.Count = 1;

	float    fov = XMConvertToRadians(20.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



			// Loop over vertices in the face.

	if (!reader.Warning().empty())

				// access to vertex

			}



	m_pDepthStencilTexture = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	txDesc.MiscFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

	//インデックスバッファ作成



			case SDLK_LEFT:

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_UP,

	ibDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

		// Loop over faces(polygon)

	D3D11_SUBRESOURCE_DATA vrData;

	m_pDepthStencilTexture = NULL;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

struct ConstantMaterial {

			break;

int main(int, char**)



		}

};





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D_FEATURE_LEVEL level;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	bool ret = tinyobj::LoadObj(

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantMatrixBuffer {

		flags,

	auto& materials = reader.GetMaterials();

	m_pPixelShader = NULL;



	}



		return hr;







	txDesc.Height = rect.Height();

	//頂点シェーダー生成

	ConstantMatrixBuffer cmb;

	}



	m_pSampler = NULL;



		{

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pTexture);

			{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				break;



HRESULT CD3DTest::Create(HWND hwnd)

	{

	SAFE_RELEASE(m_pInputLayout);

	txDesc.ArraySize = 1;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (e.type == SDL_QUIT)



		}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				break;

	ID3D11Texture2D* pBackBuffer;





	}

	}

		{



	//Key press surfaces constants



	scDesc.BufferDesc.Width = rect.Width();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//vector<Vertex> vertex_t;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	}*/

	m_VertexCount = vcount;

	if (FAILED(hr))

{

	{

	vrData.SysMemSlicePitch = 0;

		SDL_RenderClear(ren);

	return 0;

	m_pMatrixBuffer = NULL;

	m_Viewport.MinDepth = 0.0f;

void CD3DTest::Release()

		SDL_Delay(1000);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.CPUAccessFlags = 0;

{



}

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

		{





		NULL,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}



		R"(cube.obj)");

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				break;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	delete[] pVList;

		size_t index_offset = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	return 0;

	XMFLOAT4         eyePos;   //視点座標



	//Key press surfaces constants

};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	txDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vrData.pSysMem = &pVList[0];

	vbDesc.StructureByteStride = 0;

			{

	ibDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

				break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Angle += XMConvertToRadians(1.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&scDesc,

	}

	vbDesc.MiscFlags = 0;



		return hr;

	SDL_Event e;

	SDL_Event e;

#include <iostream>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pImmediateContext);

	{

	m_pDepthStencilTexture = NULL;

	UINT strides = sizeof(Vertex);

	m_pVertexShader = NULL;



	if (FAILED(hr))

#include <SDL.h>

	{



	float    fov = XMConvertToRadians(20.0f);



struct ConstantMaterial {

		delete[] pIList;

		else if (e.type == SDL_KEYDOWN)





#include "DirectXManager.h"

	ConstantMatrixBuffer cmb;



	auto& shapes = reader.GetShapes();



	ConstantLightBuffer clb;

	m_VertexCount = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

	m_VertexCount = vcount;

	m_pDepthStencilTexture = NULL;

	{

	//vector<WORD> index_t;



	float    aspect = m_Viewport.Width / m_Viewport.Height;



		delete[] pIList;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

			{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{



		SDL_RenderClear(ren);

				break;

	D3D11_TEXTURE2D_DESC txDesc;

	tinyobj::ObjReader reader;

	if (FAILED(hr))

		return hr;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

		{

	{

	UINT offsets = 0;

	vrData.pSysMem = &pVList[0];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			exit(1);



				WORD index = idx.vertex_index;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	m_IndexCount = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4         eyePos;   //視点座標

	m_pDepthStencilTexture = NULL;

		}

		&scDesc,

	ConstantMatrixBuffer cmb;

		D3D11_SDK_VERSION,

	{

struct ConstantMaterial {

#include <iostream>

				break;



	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		size_t index_offset = 0;  // インデントのオフセット

CD3DTest::CD3DTest()

		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int main(int, char**)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	WORD* pIList = new WORD[icount];

	auto& attrib = reader.GetAttrib();

 */

	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemPitch = 0;

	//Clean up our objects and quit

void CD3DTest::Render()

{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			index_offset += fv;

	{

	D3D11_TEXTURE2D_DESC txDesc;

	WORD   icount = indexList.size();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		R"(cube.obj)");

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 projection;





	flags |= D3D11_CREATE_DEVICE_DEBUG;



		return hr;

	txDesc.SampleDesc.Quality = 0;

		SDL_RenderClear(ren);



	SAFE_RELEASE(m_pSampler);

	m_VertexCount = 0;

	D3D11_TEXTURE2D_DESC txDesc;



	//頂点シェーダー生成

 */



	dsDesc.Format = txDesc.Format;

	for (int i = 0; i < vcount; i++)

	m_pPixelShader = NULL;

	scDesc.BufferCount = 1;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&level,

	{

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	for (size_t s = 0; s < shapes.size(); s++)

		delete[] pIList;

			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



			exit(1);

	{

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			case SDLK_UP:

 * Lesson 1: Hello World!

		{

		KEY_PRESS_SURFACE_UP,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	for (const auto& shape : shapes)

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&error,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_LEFT,

struct ConstantLight {

	if (FAILED(hr))

	CRect                rect;



struct ConstantLight {



	if (FAILED(hr))

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	delete[] pVList;

	scDesc.BufferCount = 1;

	ConstantMatrixBuffer cmb;

	{

		pIList[j] = indexList[j];



	cbDesc.CPUAccessFlags = 0;



	XMFLOAT4         eyePos;   //視点座標

{

	vector<WORD> indexList;

	ID3D11Texture2D* pBackBuffer;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pDevice);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.pSysMem = &pIList[0];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		if (e.type == SDL_QUIT)



	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			index_offset += num_vertices;



			}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	{

	enum KeyPressSurfaces

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	float    fov = XMConvertToRadians(20.0f);

	Release();

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderClear(ren);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	CRect                rect;

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

				break;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&attrib,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	std::string imagePath = "hello.bmp";



	if (!error.empty())





	D3D11_BUFFER_DESC ibDesc;

			{

		&materials,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_RIGHT:

				break;

	ibDesc.StructureByteStride = 0;

	txDesc.CPUAccessFlags = 0;

	tinyobj::ObjReader reader;

	auto& materials = reader.GetMaterials();



			//Select surfaces based on key press



	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,



#include <SDL.h>

	int     vcount = vertexlist.size();

	m_pTexture = NULL;

	SDL_Quit();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

				break;



	//頂点バッファ作成





	}*/

		KEY_PRESS_SURFACE_TOTAL

};



		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vrData.SysMemPitch = 0;



	DXGI_SWAP_CHAIN_DESC scDesc;

};

	enum KeyPressSurfaces

	Vertex* pVList = new Vertex[vcount];



		SDL_RenderPresent(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		size_t index_offset = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	std::string imagePath = "hello.bmp";

int main(int, char**)

	}

	vrData.SysMemSlicePitch = 0;

	m_pSwapChain->Present(0, 0);

	m_Viewport.TopLeftY = 0;

	m_pTexture = NULL;

	m_pLightBuffer = NULL;

		size_t index_offset = 0;  // インデントのオフセット

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pTextureView);



	if (FAILED(hr))



		{

		return hr;

}





	cbDesc.MiscFlags = 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (!reader.Warning().empty())









	//Create Index

		//User requests quit

	{

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

};

}
	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Vertex* pVList = new Vertex[vcount];

	D3D11_SAMPLER_DESC smpDesc;



#include <iostream>



{



				break;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

void CD3DTest::Release()

	//定数バッファ作成



#include "DirectXManager.h"

struct ConstantMaterial {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.MinDepth = 0.0f;





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

 * Lesson 1: Hello World!

	if (FAILED(hr))

		return hr;

	for (int i = 0; i < 3; i++)

	auto& materials = reader.GetMaterials();

	{

	UINT strides = sizeof(Vertex);

	XMFLOAT4X4 view;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		R"(cube.obj)");

	{

	WORD   icount = indexList.size();

	return 0;

	scDesc.Windowed = TRUE;

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	return 0;

		{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	irData.pSysMem = &pIList[0];

		1,

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.CPUAccessFlags = 0;





	D3D11_SUBRESOURCE_DATA vrData;

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.Width = rect.Width();



		return hr;

	}

	txDesc.Width = rect.Width();

	m_pVertexShader = NULL;

{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_Delay(1000);

	{

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		return hr;

		return hr;

	//定数バッファ作成









	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pVertexBuffer = NULL;

	return;

	{

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



			}

			}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}

		SDL_RenderClear(ren);





		KEY_PRESS_SURFACE_RIGHT,

	txDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pInputLayout);

		exit(1);

	//頂点レイアウト作成

	XMFLOAT4 attenuate;         //減衰(a,b,c)



			int num_vertices = shape.mesh.num_face_vertices[f];

	vbDesc.MiscFlags = 0;

{

	enum KeyPressSurfaces

struct ConstantMaterial {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&level,

	if (FAILED(hr))

		}



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_Delay(1000);

		exit(1);

	irData.pSysMem = &pIList[0];

	int     vcount = vertexlist.size();

	m_pIndexBuffer = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.Warning().empty())



{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	enum KeyPressSurfaces





				WORD index = idx.vertex_index;



	//インデックスバッファ作成

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_UP,





	for (const auto& shape : shapes)

	float    fov = XMConvertToRadians(20.0f);

		else if (e.type == SDL_KEYDOWN)



		return hr;

{



	float    farZ = 100.0f;

			for (size_t v = 0; v < num_vertices; v++)

			}





		return hr;

};

	//インデックスバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	int     vcount = vertexlist.size();

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pLightBuffer);

			{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		1,

#include <iostream>

	//頂点バッファ作成





	float    fov = XMConvertToRadians(20.0f);

	SDL_Event e;

		//User requests quit

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



}

			case SDLK_LEFT:

	};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



}




}

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	scDesc.Windowed = TRUE;

	//ビューポート設定

		KEY_PRESS_SURFACE_LEFT,



{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.CPUAccessFlags = 0;

		{

	if (!reader.ParseFromFile(inputfile, reader_config))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.CPUAccessFlags = 0;

		{

	//深度ステンシルバッファ作成



	XMFLOAT4         eyePos;   //視点座標

	{

{

	Release();

		}

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_IndexCount = icount;



	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::attrib_t attrib;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	//First we need to start up SDL, and make sure it went ok

	return 0;

};



			}

	SDL_DestroyRenderer(ren);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pImmediateContext);

	float    nearZ = 0.1f;



	SAFE_RELEASE(m_pVertexBuffer);

		}

}



	m_Angle += XMConvertToRadians(1.0f);

		return hr;



	::GetClientRect(hwnd, &rect);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.MipLevels = 1;

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		//User requests quit

		return hr;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

			int num_vertices = shape.mesh.num_face_vertices[f];





	txDesc.SampleDesc.Count = 1;

		&error,

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

	SDL_DestroyRenderer(ren);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	vector<Vertex> vertexlist;

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		{





			case SDLK_LEFT:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SAFE_RELEASE(m_pVertexShader);

	}*/

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::shape_t> shapes;



			//Select surfaces based on key press

	//ビューポート設定

	XMStoreFloat4(&clb.eyePos, eye);

			}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantLightBuffer {

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			case SDLK_LEFT:

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		// Loop over faces(polygon)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ID3D11Texture2D* pBackBuffer;



	if (FAILED(hr))



struct ConstantLightBuffer {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		return hr;

#include "DirectXManager.h"

	//First we need to start up SDL, and make sure it went ok



	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::vector<tinyobj::shape_t> shapes;

	DXGI_SWAP_CHAIN_DESC scDesc;

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pDepthStencilTexture = NULL;

	UINT offsets = 0;

{

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pSwapChain,

	D3D11_SUBRESOURCE_DATA vrData;

		1,

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			{

				// access to vertex

		NULL,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	cbDesc.StructureByteStride = 0;

	{

	m_Angle += XMConvertToRadians(1.0f);

	return;



		}

	DXGI_SWAP_CHAIN_DESC scDesc;

		SDL_RenderClear(ren);

	delete[] pVList;

				break;

	scDesc.BufferDesc.Height = rect.Height();



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))



		{

	D3D11_TEXTURE2D_DESC txDesc;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

}



	//定数バッファ作成



				break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pRenderTargetView = NULL;

#include <SDL.h>



	m_pVertexShader = NULL;





#include <SDL.h>

};

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);









	tinyobj::ObjReader reader;

	m_Angle += XMConvertToRadians(1.0f);

	if (!reader.Warning().empty())

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//Clean up our objects and quit

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pIList;

		&m_pDevice,







			}

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

		SDL_RenderClear(ren);

		}



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	UINT flags = 0;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

		return 1;

	return hr;

			}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

	}*/

	}



	XMFLOAT4 ambient;           //環境(r,g,b)

	std::string error;





{

			{



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	pBackBuffer->Release();



int main(int, char**)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		}

	ibDesc.MiscFlags = 0;

	vbDesc.StructureByteStride = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	std::vector<tinyobj::material_t> materials;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	auto& materials = reader.GetMaterials();

void CD3DTest::Release()

	SAFE_RELEASE(m_pPixelShader);

#include "DirectXManager.h"

	m_pDevice = NULL;

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.MiscFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	if (!error.empty())

				// access to vertex

	m_IndexCount = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	auto& materials = reader.GetMaterials();

			exit(1);

	SDL_DestroyWindow(win);

	//vector<Vertex> vertex_t;

}

	m_pDevice = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	bool ret = tinyobj::LoadObj(



				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//頂点レイアウト作成

	m_pDepthStencilTexture = NULL;

	vrData.SysMemPitch = 0;

	irData.pSysMem = &pIList[0];





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

CD3DTest::~CD3DTest()



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    nearZ = 0.1f;

#include <iostream>

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	vector<Vertex> vertexlist;

	while (SDL_PollEvent(&e) != 0)

	D3D11_TEXTURE2D_DESC txDesc;

				vertex.push_back(vertex_tmp);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_DestroyTexture(tex);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;



	HRESULT              hr;

	ZeroMemory(&txDesc, sizeof(txDesc));



	return;

	m_pPixelShader = NULL;

#include <SDL.h>

				indexlist.push_back(idx.vertex_index);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			index_offset += num_vertices;

	return hr;

	float    farZ = 100.0f;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

#ifdef _DEBUG

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.CPUAccessFlags = 0;



				tinyobj::real_t tx =

	while (SDL_PollEvent(&e) != 0)

	SDL_DestroyTexture(tex);

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&shapes,



		return hr;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pTextureView = NULL;

	txDesc.SampleDesc.Quality = 0;









/*

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Count = 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		&level,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC ibDesc;

	if (m_pImmediateContext)

		pIList[j] = indexList[j];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.CPUAccessFlags = 0;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		// Loop over faces(polygon)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



			{

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	enum KeyPressSurfaces



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				// access to vertex

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);



	vrData.pSysMem = &pVList[0];

};

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	/*

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//深度ステンシルバッファ作成

				tinyobj::real_t ty =

struct ConstantMatrixBuffer {

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < 3; i++)

	{



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

		&m_pDevice,

		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

		size_t index_offset = 0;

	UINT offsets = 0;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		1,

		D3D_DRIVER_TYPE_HARDWARE,

	//頂点レイアウト作成

			case SDLK_RIGHT:

	for (int j = 0; j < icount; j++)

		NULL,

	}



	if (FAILED(hr))



	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Quit();

		m_pImmediateContext->ClearState();

			{

	tinyobj::ObjReaderConfig reader_config;

		}

	D3D11_BUFFER_DESC ibDesc;

		NULL,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

CD3DTest::CD3DTest()

	delete[] pIList;

	D3D11_BUFFER_DESC cbDesc;

	{

	std::string error;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}





	D3D11_BUFFER_DESC vbDesc;

				// access to vertex

	{

			case SDLK_RIGHT:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_Delay(1000);

	//Vertex* pVList = new Vertex[vcount];





	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

	if (FAILED(hr))

struct ConstantMaterial {

	SAFE_RELEASE(m_pVertexBuffer);

	for (int j = 0; j < icount; j++)

	m_pVertexShader = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&m_pImmediateContext);

void CD3DTest::Render()





#endif

	m_Viewport.TopLeftX = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

	SAFE_RELEASE(m_pVertexShader);

int SEGMENT = 36;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4X4 world;

	vrData.SysMemSlicePitch = 0;

};



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pMatrixBuffer = NULL;

	vbDesc.StructureByteStride = 0;

		if (!reader.Error().empty())



	ConstantMaterial material; //物体の質感

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_BUFFER_DESC vbDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				vertex.push_back(vertex_tmp);

	std::string imagePath = "hello.bmp";

{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		return hr;



	//深度ステンシルバッファ作成

		{



	return;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_Viewport.TopLeftX = 0;

	Release();

	//Create Index

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pDevice,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int j = 0; j < icount; j++)

/*

}



struct ConstantLightBuffer {

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	std::vector<tinyobj::shape_t> shapes;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		SDL_RenderClear(ren);

	{

using std::cout; using std::endl;

	XMFLOAT4 specular;          //反射(r,g,b)

		&attrib,


