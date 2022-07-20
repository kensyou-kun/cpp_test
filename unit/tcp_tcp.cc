					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

		D3D11_SDK_VERSION,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	UINT offsets = 0;



	SAFE_RELEASE(m_pPixelShader);

	scDesc.SampleDesc.Quality = 0;

				// access to vertex

	m_pTexture = NULL;





	scDesc.SampleDesc.Count = 1;

	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;







	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 specular;          //反射(r,g,b)





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::vector<tinyobj::material_t> materials;

#ifdef _DEBUG

	}



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;

	ConstantLightBuffer clb;

	}



			index_offset += fv;

		return 1;

	cbDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();

	if (m_pImmediateContext)

	XMFLOAT4 ambient;           //環境(r,g,b)

	std::string error;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	for (int i = 0; i < vcount; i++)

	{

	ConstantLight    pntLight; //点光源

		return hr;

		return hr;

	vrData.pSysMem = &pVList[0];

{

	m_VertexCount = 0;

	//Clean up our objects and quit

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		exit(1);

	{

	}

		exit(1);

		pLevels,

	auto& attrib = reader.GetAttrib();

	cbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	tinyobj::ObjReaderConfig reader_config;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pInputLayout = NULL;



	//ビューポート設定

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferCount = 1;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	for (int j = 0; j < icount; j++)



	UINT flags = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (!error.empty())

	SAFE_RELEASE(m_pTexture);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_DOWN,

	for (const auto& shape : shapes)

}

struct ConstantLightBuffer {

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	delete[] pIList;

			case SDLK_LEFT:

	txDesc.Width = rect.Width();

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#ifdef _DEBUG



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	while (SDL_PollEvent(&e) != 0)



	int     vcount = vertexlist.size();

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::string inputfile = "test.obj";

		return hr;

	m_IndexCount = 0;

	return;

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		if (e.type == SDL_QUIT)

	m_pIndexBuffer = NULL;

	m_Viewport.TopLeftY = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	};

			int num_vertices = shape.mesh.num_face_vertices[f];

		{



	m_pVertexShader = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	for (size_t s = 0; s < shapes.size(); s++)



	ibDesc.CPUAccessFlags = 0;

	m_pSwapChain = NULL;

	m_pLightBuffer = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (const auto& shape : shapes)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

void CD3DTest::Release()

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_VertexCount = vcount;





	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.StructureByteStride = 0;



				indexlist.push_back(index);

	{

			{

			}

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	};

				indexlist.push_back(index);

void CD3DTest::Release()

	{

	scDesc.BufferDesc.Height = rect.Height();

	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点シェーダー生成

				break;

	Release();

	//Clean up our objects and quit

int main(int, char**)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    nearZ = 0.1f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMFLOAT4X4 projection;



	//頂点レイアウト作成

}





	XMFLOAT4 specular;          //反射(r,g,b)



	XMFLOAT4 pos;               //座標(x,y,z)

	for (int i = 0; i < 3; i++)

	D3D11_TEXTURE2D_DESC txDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	irData.SysMemSlicePitch = 0;

#ifdef _DEBUG

	m_pIndexBuffer = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

	}

	bool ret = tinyobj::LoadObj(



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	return;

	}*/

			case SDLK_UP:

		&m_pSwapChain,

	SDL_FreeSurface(bmp);

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{



			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.StructureByteStride = 0;



	txDesc.ArraySize = 1;





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Quit();

	if (!error.empty())

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



			}



	for (int i = 0; i < 3; i++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		m_pImmediateContext->ClearState();

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4X4 view;

	bool ret = tinyobj::LoadObj(

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

}

		return hr;

	}*/

	SAFE_RELEASE(m_pDevice);

	ibDesc.CPUAccessFlags = 0;

			}

		D3D_DRIVER_TYPE_HARDWARE,

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	CRect                rect;

	}

			index_offset += num_vertices;



{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	auto& shapes = reader.GetShapes();

	if (m_pImmediateContext)

		return hr;

			case SDLK_DOWN:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		pVList[i] = vertexlist[i];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		}

				tinyobj::real_t ty =

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&materials,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

	m_Viewport.Height = (FLOAT)rect.Height();



	m_pPixelShader = NULL;

	WORD* pIList = new WORD[icount];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (m_pImmediateContext)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			// Loop over vertices in the face.

		D3D_DRIVER_TYPE_HARDWARE,



	vrData.pSysMem = &pVList[0];



	D3D11_TEXTURE2D_DESC txDesc;

	ibDesc.CPUAccessFlags = 0;

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;



	{



	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pSampler);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT flags = 0;

	txDesc.Width = rect.Width();

		SDL_RenderClear(ren);

		pVList[i] = vertexlist[i];

	if (!reader.Warning().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pRenderTargetView = NULL;

	dsDesc.Format = txDesc.Format;



	D3D_FEATURE_LEVEL level;

{

			//Select surfaces based on key press

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

		flags,

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pRenderTargetView);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		R"(cube.obj)");

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	//深度ステンシルバッファ作成

	m_Viewport.TopLeftX = 0;

		//User presses a key

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{



	SDL_DestroyRenderer(ren);

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{

int main(int, char**)

		if (!ret)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>

	tinyobj::ObjReader reader;

}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

}

	SAFE_RELEASE(m_pSampler);

{







	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//テクスチャ読み込み

	if (FAILED(hr))

	SDL_Quit();

{

	float    fov = XMConvertToRadians(20.0f);

	}

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		&materials,

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pRenderTargetView = NULL;



	if (FAILED(hr))

		//User presses a key

}

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	ConstantLight    pntLight; //点光源

	int     vcount = vertexlist.size();

	}



	XMFLOAT4 specular;          //反射(r,g,b)

	m_pSwapChain->Present(0, 0);

	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pRenderTargetView = NULL;

	m_IndexCount = icount;





using std::cout; using std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

	txDesc.MipLevels = 1;

	{

		if (!ret)

struct ConstantLight {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pSampler);



			}



	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pSwapChain);

		flags,

	scDesc.SampleDesc.Count = 1;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	m_pInputLayout = NULL;

	dsDesc.Texture2D.MipSlice = 0;



	std::string imagePath = "hello.bmp";

			index_offset += fv;

	auto& materials = reader.GetMaterials();

		&shapes,

	bool ret = tinyobj::LoadObj(

int SEGMENT = 36;

			case SDLK_LEFT:

	ConstantLight    pntLight; //点光源

	txDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		&materials,

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		return hr;



	//頂点シェーダー生成

{

	}



	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.CPUAccessFlags = 0;

	Release();



	vector<WORD> indexList;

	if (FAILED(hr))



	hr = D3D11CreateDeviceAndSwapChain(NULL,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pInputLayout);

	m_pVertexShader = NULL;

				indexlist.push_back(index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	//First we need to start up SDL, and make sure it went ok



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pSampler);

}





			exit(1);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ConstantLight    pntLight; //点光源

	scDesc.Windowed = TRUE;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}*/



	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

}

	if (FAILED(hr))



	//First we need to start up SDL, and make sure it went ok

	return hr;

				tinyobj::real_t tx =

	m_Viewport.TopLeftX = 0;

		return hr;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;

	SDL_Quit();

	m_VertexCount = vcount;

	while (SDL_PollEvent(&e) != 0)



	::ZeroMemory(&scDesc, sizeof(scDesc));

	ID3D11Texture2D* pBackBuffer;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		}



			{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.CPUAccessFlags = 0;

}
	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

}

	vrData.SysMemSlicePitch = 0;

			for (size_t v = 0; v < fv; v++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilView);

				break;

	{

		return hr;



	delete[] pVList;



	m_Angle += XMConvertToRadians(1.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pRenderTargetView);

	//Key press surfaces constants

		m_pImmediateContext->ClearState();

	m_VertexCount = 0;



	scDesc.BufferCount = 1;

struct ConstantMatrixBuffer {

	SDL_DestroyRenderer(ren);

	ConstantMatrixBuffer cmb;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);



		flags,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			exit(1);

		size_t index_offset = 0;

				WORD index = idx.vertex_index;

	//vector<WORD> index_t;

	if (!error.empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pVertexBuffer);

#include "DirectXManager.h"



	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_SUBRESOURCE_DATA vrData;



	XMStoreFloat4(&clb.eyePos, eye);

{

	m_Viewport.MinDepth = 0.0f;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	if (FAILED(hr))

	{

	m_pImmediateContext = NULL;

	{

	txDesc.MiscFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))



};

	scDesc.BufferCount = 1;



	{



	m_pPixelShader = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

{

		if (!ret)

	SDL_DestroyTexture(tex);

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx =



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pTexture = NULL;



}

			index_offset += num_vertices;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexBuffer);

	ConstantMaterial material; //物体の質感

	}



			}







	SDL_DestroyWindow(win);

	txDesc.CPUAccessFlags = 0;

	return 0;



		pLevels,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4X4 view;

				WORD index = idx.vertex_index;

	{



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	WORD   icount = indexList.size();

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_BUFFER_DESC vbDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pPixelShader = NULL;

		&scDesc,

	D3D11_SUBRESOURCE_DATA vrData;

			break;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	std::vector<tinyobj::shape_t> shapes;

{

	txDesc.Height = rect.Height();

{

	//vector<WORD> index_t;

		return hr;

			for (size_t v = 0; v < fv; v++)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	return hr;

	scDesc.SampleDesc.Quality = 0;

	}



				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pMatrixBuffer = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	SAFE_RELEASE(m_pLightBuffer);

		pLevels,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

 */

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.MipLevels = 1;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			case SDLK_LEFT:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		}

		KEY_PRESS_SURFACE_RIGHT,

{

	// Loop over shapes

		}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

}

#define TINYOBJLOADER_IMPLEMENTATION

				WORD index = idx.vertex_index;



{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

int SEGMENT = 36;

	scDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return 1;

	XMFLOAT4X4 view;

	{

	SAFE_RELEASE(m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

#include <iostream>





	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <SDL.h>

	m_VertexCount = vcount;

	ConstantLight    pntLight; //点光源

		&m_pDevice,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

	UINT offsets = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pMatrixBuffer = NULL;

	irData.SysMemPitch = 0;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	reader_config.mtl_search_path = "./"; // Path to material files

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	dsDesc.Format = txDesc.Format;

 * Lesson 1: Hello World!

	m_Viewport.MaxDepth = 1.0f;

	txDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}*/

	float    nearZ = 0.1f;

int main(int, char**)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files



				tinyobj::real_t ty =

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSwapChain);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		KEY_PRESS_SURFACE_UP,

/*

	::ZeroMemory(&scDesc, sizeof(scDesc));

		}

	//深度ステンシルバッファ作成



			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pMatrixBuffer = NULL;

			}

		&materials,



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	int     vcount = vertexlist.size();

		return 1;

	m_IndexCount = icount;

	//Clean up our objects and quit

void CD3DTest::Release()

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	UINT strides = sizeof(Vertex);





		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.SampleDesc.Count = 1;



	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);

			//Select surfaces based on key press



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);



		{

		if (e.type == SDL_QUIT)

	SDL_DestroyTexture(tex);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

		{

	cbDesc.CPUAccessFlags = 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

	XMFLOAT4X4 view;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.Width = (FLOAT)rect.Width();

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	auto& shapes = reader.GetShapes();

	//頂点レイアウト作成

	SAFE_RELEASE(m_pVertexShader);

	if (!error.empty())

#include "DirectXManager.h"



	m_Viewport.TopLeftY = 0;

	SDL_DestroyWindow(win);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

		// Loop over faces(polygon)



	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

};

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	{

			switch (e.key.keysym.sym)



		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pLightBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pIndexBuffer);

	if (!error.empty())

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.CPUAccessFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				break;



			}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		NULL,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	}





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	reader_config.mtl_search_path = "./"; // Path to material files

	//First we need to start up SDL, and make sure it went ok

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pLightBuffer = NULL;

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点バッファ作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//テクスチャ読み込み

			case SDLK_LEFT:

	txDesc.MipLevels = 1;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&materials,

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Viewport.TopLeftX = 0;



		&attrib,

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4(&clb.ambient, lightAmbient);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pVertexShader = NULL;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pInputLayout);

	//頂点レイアウト作成

	return hr;

	//Create Index

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.TopLeftY = 0;



		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ConstantLightBuffer clb;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

/*

	std::vector<tinyobj::material_t> materials;

	vector<Vertex> vertexlist;

			case SDLK_RIGHT:

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.Height = rect.Height();

		size_t index_offset = 0;  // インデントのオフセット

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pInputLayout = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.MiscFlags = 0;

		}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vrData.SysMemSlicePitch = 0;



}

				// access to vertex

	return;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::ObjReaderConfig reader_config;

	{

	}

	SDL_FreeSurface(bmp);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_LEFT,

		D3D_DRIVER_TYPE_HARDWARE,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.CPUAccessFlags = 0;

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_FreeSurface(suf);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		pVList[i] = vertexlist[i];

	for (int j = 0; j < icount; j++)

		return hr;

		return hr;

		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pIndexBuffer = NULL;

		&scDesc,

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MipLevels = 1;

		return hr;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			case SDLK_RIGHT:

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

int SEGMENT = 36;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			// Loop over vertices in the face.

	{

		&m_pDevice,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				indexlist.push_back(index);







		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

		{

	bool ret = tinyobj::LoadObj(

	auto& materials = reader.GetMaterials();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ID3D11Texture2D* pBackBuffer;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		pLevels,

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(index);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	WORD   icount = indexList.size();

	txDesc.Width = rect.Width();



#endif

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	return 0;

				break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

int SEGMENT = 36;

	return 0;

	vector<Vertex> vertexlist;

	pBackBuffer->Release();

			}

		SDL_RenderClear(ren);

			break;

	txDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL level;

	ibDesc.MiscFlags = 0;

		D3D11_SDK_VERSION,

	ibDesc.CPUAccessFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



	//vector<Vertex> vertex_t;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		m_pImmediateContext->ClearState();

	//頂点レイアウト作成

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vbDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok



	irData.SysMemSlicePitch = 0;





	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{

	m_Viewport.TopLeftX = 0;

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	// Loop over shapes





	for (const auto& shape : shapes)



	scDesc.Windowed = TRUE;

		SDL_RenderPresent(ren);

	D3D11_SAMPLER_DESC smpDesc;

	Release();

	m_IndexCount = icount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Event e;

		if (e.type == SDL_QUIT)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Height = rect.Height();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			// Loop over vertices in the face.



	return 0;

		return hr;

	m_pInputLayout = NULL;

		return 1;



{

		size_t index_offset = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilTexture = NULL;

	m_IndexCount = 0;

#include <iostream>

	{

	}

	XMFLOAT4X4 world;

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

		if (e.type == SDL_QUIT)

	m_IndexCount = icount;



		SDL_RenderPresent(ren);

	m_VertexCount = 0;

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pIndexBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pImmediateContext);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.eyePos, eye);

};

	XMFLOAT4X4 world;



	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pDevice);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	}



		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		// Loop over faces(polygon)



}

	pBackBuffer->Release();

	{

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pSwapChain);

	{

		KEY_PRESS_SURFACE_UP,





}

	WORD   icount = indexList.size();

	{

	SAFE_RELEASE(m_pLightBuffer);

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	}

		SDL_Delay(1000);



	}



	std::string inputfile = "test.obj";

	tinyobj::ObjReaderConfig reader_config;

	SDL_Quit();



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	scDesc.OutputWindow = hwnd;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SAFE_RELEASE(m_pDevice);



	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&error,

 */

		}



			case SDLK_UP:

	for (int j = 0; j < icount; j++)

		{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

HRESULT CD3DTest::Create(HWND hwnd)



	m_VertexCount = vcount;

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();

	SDL_FreeSurface(suf);

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderPresent(ren);

		return hr;

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_pImmediateContext = NULL;



	while (SDL_PollEvent(&e) != 0)

		return hr;

	//頂点バッファ作成

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	{



		cout << "SDL_INIT_ERROR" << endl;

}

	}

				indexlist.push_back(index);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		else if (e.type == SDL_KEYDOWN)

			{

	pBackBuffer->Release();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&m_pDevice,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pLightBuffer = NULL;

	SDL_DestroyRenderer(ren);

		}



struct ConstantMatrixBuffer {

		SDL_RenderPresent(ren);

		return 1;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	m_Angle += XMConvertToRadians(1.0f);



	{

	ConstantLight    pntLight; //点光源

			//Select surfaces based on key press

	vbDesc.StructureByteStride = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&level,

	ConstantMatrixBuffer cmb;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pInputLayout);

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		//User requests quit

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}



		{



		&level,

}



	SAFE_RELEASE(m_pTextureView);

	delete[] pVList;

	if (FAILED(hr))

	HRESULT              hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pSwapChain);

	std::vector<tinyobj::shape_t> shapes;





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	};

	SAFE_RELEASE(m_pInputLayout);

		R"(cube.obj)");

		return hr;

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	if (FAILED(hr))

	if (!reader.Warning().empty())

	dsDesc.Texture2D.MipSlice = 0;







				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SAFE_RELEASE(m_pDevice);

	reader_config.mtl_search_path = "./"; // Path to material files



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	cbDesc.CPUAccessFlags = 0;

}
	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



			switch (e.key.keysym.sym)

};

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4 pos;               //座標(x,y,z)

				break;



	m_pLightBuffer = NULL;

	m_pPixelShader = NULL;

	while (SDL_PollEvent(&e) != 0)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_RIGHT:

	cbDesc.CPUAccessFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.CPUAccessFlags = 0;

}

	SAFE_RELEASE(m_pSampler);



	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	if (!error.empty())

	ConstantMatrixBuffer cmb;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			}

			break;

	float    fov = XMConvertToRadians(20.0f);

	//頂点レイアウト作成

	std::vector<tinyobj::material_t> materials;

	bool ret = tinyobj::LoadObj(



	float    aspect = m_Viewport.Width / m_Viewport.Height;

				WORD index = idx.vertex_index;

		return hr;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pDepthStencilView);

		delete[] pIList;

	HRESULT              hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	Release();

int main(int, char**)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	Release();



			index_offset += fv;

	irData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//深度ステンシルバッファ作成

	m_Viewport.TopLeftY = 0;

	ID3D11Texture2D* pBackBuffer;

			{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

int main(int, char**)

	m_pDepthStencilTexture = NULL;

	D3D11_BUFFER_DESC cbDesc;

	SDL_DestroyWindow(win);

	if (FAILED(hr))



	{

int SEGMENT = 36;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		&m_pImmediateContext);

	if (FAILED(hr))

		pVList[i] = vertexlist[i];



	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//ピクセルシェーダー生成



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	return 0;

		KEY_PRESS_SURFACE_DOWN,

	vrData.SysMemSlicePitch = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

		{

	reader_config.mtl_search_path = "./"; // Path to material files

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pDepthStencilTexture);

};

				indexlist.push_back(idx.vertex_index);

	m_pPixelShader = NULL;

	float    farZ = 100.0f;

	m_pVertexBuffer = NULL;

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pSampler);



	m_VertexCount = vcount;

	}

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	float    nearZ = 0.1f;







	//vector<Vertex> vertex_t;

	if (FAILED(hr))



	return;

	ConstantLightBuffer clb;

	m_IndexCount = 0;

	for (int i = 0; i < 3; i++)

	/*



	{

	cbDesc.CPUAccessFlags = 0;

	enum KeyPressSurfaces

	// Loop over shapes



	txDesc.MipLevels = 1;

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#include <iostream>

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		//User presses a key

	for (const auto& shape : shapes)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	UINT offsets = 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_TEXTURE2D_DESC txDesc;

	}

	cbDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

		D3D11_SDK_VERSION,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);

};

}
	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

		return hr;

	float    fov = XMConvertToRadians(20.0f);



		KEY_PRESS_SURFACE_DOWN,

	scDesc.SampleDesc.Count = 1;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_RIGHT,





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

void CD3DTest::Render()

	cbDesc.CPUAccessFlags = 0;

	txDesc.ArraySize = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{





	{

	ConstantLightBuffer clb;

	std::vector<tinyobj::material_t> materials;

		// Loop over faces(polygon)

}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	scDesc.SampleDesc.Count = 1;

	cbDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	cbDesc.MiscFlags = 0;

	//インデックスバッファ作成

{

	//頂点バッファ作成

	HRESULT              hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				break;

	//インデックスバッファ作成

	ConstantLight    pntLight; //点光源

				WORD index = idx.vertex_index;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			}

	SAFE_RELEASE(m_pVertexShader);

	scDesc.BufferCount = 1;

	bool ret = tinyobj::LoadObj(

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		NULL,

	return 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 projection;

	dsDesc.Format = txDesc.Format;



#include "DirectXManager.h"

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (size_t s = 0; s < shapes.size(); s++)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.Width = (FLOAT)rect.Width();

			index_offset += num_vertices;

void CD3DTest::Render()



		KEY_PRESS_SURFACE_TOTAL

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	bool ret = tinyobj::LoadObj(

		&m_pSwapChain,

	if (m_pImmediateContext)

	}

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Viewport.Width = (FLOAT)rect.Width();

	UINT flags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	UINT flags = 0;



	if (FAILED(hr))

			case SDLK_DOWN:

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.SampleDesc.Quality = 0;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	XMFLOAT4X4 projection;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pTexture = NULL;

			default:



}
		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDepthStencilView);



	//ビューポート設定

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;



		&scDesc,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			}



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	if (!error.empty())



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pVertexBuffer = NULL;

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;

	int     vcount = vertexlist.size();

	cbDesc.CPUAccessFlags = 0;

	m_pTexture = NULL;

		return hr;

		KEY_PRESS_SURFACE_DOWN,

		R"(cube.obj)");



	}

		flags,



	txDesc.SampleDesc.Count = 1;

	ConstantLight    pntLight; //点光源



	WORD* pIList = new WORD[icount];

	for (const auto& shape : shapes)



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pVertexBuffer = NULL;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	tinyobj::attrib_t attrib;

#include "DirectXManager.h"

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSwapChain);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_Delay(1000);

	dsDesc.Format = txDesc.Format;



		return hr;

	m_Viewport.MaxDepth = 1.0f;

			}

	m_pDepthStencilTexture = NULL;

		// Loop over faces(polygon)

	}

void CD3DTest::Release()



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	auto& shapes = reader.GetShapes();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferCount = 1;

int main(int, char**)

CD3DTest::CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	auto& shapes = reader.GetShapes();

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Quit();

				WORD index = idx.vertex_index;



	if (FAILED(hr))

}

	{

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vector<Vertex> vertexlist;

	return 0;

	SAFE_RELEASE(m_pRenderTargetView);

	for (size_t s = 0; s < shapes.size(); s++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pVertexShader = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Create Index



		cout << "SDL_INIT_ERROR" << endl;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		&m_pSwapChain,

	std::string error;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

	}



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		delete[] pVList;

	m_VertexCount = 0;



#include "DirectXManager.h"

			index_offset += fv;

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD   icount = indexList.size();

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pTextureView);

{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (!reader.ParseFromFile(inputfile, reader_config))

		}

{

	float    nearZ = 0.1f;

		return hr;

	txDesc.CPUAccessFlags = 0;

		{

	txDesc.ArraySize = 1;

	vbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

		return hr;



				vertex.push_back(vertex_tmp);



	scDesc.SampleDesc.Count = 1;



	m_pDepthStencilTexture = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vrData.SysMemPitch = 0;

	//vector<WORD> index_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				// access to vertex

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t tx =

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (m_pImmediateContext)

		}

struct ConstantLight {

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSwapChain);

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			}

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.MinDepth = 0.0f;

	}

	cbDesc.MiscFlags = 0;

	m_VertexCount = vcount;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderPresent(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pImmediateContext);

				break;

	//vector<WORD> index_t;

		delete[] pVList;

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pIndexBuffer = NULL;

};

	txDesc.Width = rect.Width();

	{

	XMStoreFloat4(&clb.eyePos, eye);

using std::cout; using std::endl;

#include <SDL.h>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

using std::cout; using std::endl;

			switch (e.key.keysym.sym)





			case SDLK_LEFT:



	SAFE_RELEASE(m_pMatrixBuffer);

	UINT strides = sizeof(Vertex);

	{



}

	for (int i = 0; i < vcount; i++)

	m_IndexCount = icount;

		{

	for (int i = 0; i < vcount; i++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyWindow(win);

				vertex.push_back(vertex_tmp);



	CRect                rect;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



				tinyobj::real_t ty =

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

		{

			break;

		// Loop over faces(polygon)

	std::string imagePath = "hello.bmp";





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

/*





			case SDLK_RIGHT:

			for (size_t v = 0; v < fv; v++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))



			// Loop over vertices in the face.

	int     vcount = vertexlist.size();

	m_pSwapChain->Present(0, 0);

	//テクスチャ読み込み

		exit(1);

				break;

	ibDesc.StructureByteStride = 0;





	for (int j = 0; j < icount; j++)

			}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.ByteWidth = sizeof(WORD) * icount;





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

#include <iostream>

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.Windowed = TRUE;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		NULL,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		D3D11_SDK_VERSION,

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pDepthStencilView = NULL;

	//深度ステンシルバッファ作成

	//頂点レイアウト作成





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

			{

		return hr;

		&level,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			index_offset += fv;



	HRESULT              hr;

		{

	SAFE_RELEASE(m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vrData.SysMemSlicePitch = 0;

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

	m_pTexture = NULL;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pRenderTargetView);

			for (size_t v = 0; v < num_vertices; v++)

	for (int i = 0; i < 3; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	}

	scDesc.SampleDesc.Count = 1;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	//First we need to start up SDL, and make sure it went ok





#include <SDL.h>

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		flags,

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	{

	txDesc.Width = rect.Width();

			break;

{

	return 0;

	SAFE_RELEASE(m_pPixelShader);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

int main(int, char**)

	ID3D11Texture2D* pBackBuffer;



#include <SDL.h>

	if (m_pImmediateContext)

	vbDesc.CPUAccessFlags = 0;

	{

	{

	SAFE_RELEASE(m_pIndexBuffer);



	m_Viewport.MinDepth = 0.0f;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

};

	D3D11_SAMPLER_DESC smpDesc;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



			{



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ConstantMatrixBuffer cmb;

	dsDesc.Texture2D.MipSlice = 0;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		pVList[i] = vertexlist[i];



#include <SDL.h>

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_DestroyRenderer(ren);

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pDevice);

	m_Viewport.TopLeftX = 0;

	return 0;

		SDL_RenderPresent(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ConstantLight    pntLight; //点光源

	/*

	m_pSwapChain = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	}

	SAFE_RELEASE(m_pDevice);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

}
void CD3DTest::Render()



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t ty =

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&materials,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	vrData.pSysMem = &pVList[0];

	{

int main(int, char**)

		KEY_PRESS_SURFACE_UP,

#define TINYOBJLOADER_IMPLEMENTATION

	irData.SysMemSlicePitch = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_RIGHT:

	XMFLOAT4X4 view;

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_FreeSurface(suf);



	SDL_FreeSurface(bmp);

			case SDLK_LEFT:

	m_Viewport.Height = (FLOAT)rect.Height();



		exit(1);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	dsDesc.Format = txDesc.Format;

	// Loop over shapes

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ConstantMaterial material; //物体の質感

	//テクスチャ読み込み

			case SDLK_DOWN:

			}

		return hr;

		SDL_RenderPresent(ren);

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}



	txDesc.Width = rect.Width();

	for (int i = 0; i < vcount; i++)

	vrData.SysMemPitch = 0;

	}



	return;

	UINT flags = 0;

	}

	return 0;

	tinyobj::ObjReader reader;

	SDL_DestroyTexture(tex);

	return 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	ConstantMatrixBuffer cmb;

	m_Viewport.Height = (FLOAT)rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	ConstantLightBuffer clb;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//Create Index

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	UINT strides = sizeof(Vertex);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//頂点レイアウト作成



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			switch (e.key.keysym.sym)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (e.type == SDL_QUIT)

		SDL_RenderClear(ren);

	XMFLOAT4 pos;               //座標(x,y,z)

		return 1;

	m_VertexCount = vcount;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pVList;



	LoadObj(vertexlist, indexList);

	//ピクセルシェーダー生成

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pTexture = NULL;



struct ConstantMatrixBuffer {

		KEY_PRESS_SURFACE_RIGHT,

			}

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	/*

{

	vbDesc.MiscFlags = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vector<Vertex> vertexlist;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	//テクスチャ読み込み

	auto& shapes = reader.GetShapes();

	D3D11_SUBRESOURCE_DATA irData;

{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





		&error,

struct ConstantMatrixBuffer {



}
	txDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	XMStoreFloat4(&clb.eyePos, eye);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		D3D11_SDK_VERSION,

	HRESULT              hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext = NULL;



	// Loop over shapes



{

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyTexture(tex);

	//ピクセルシェーダー生成

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	WORD* pIList = new WORD[icount];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



			index_offset += num_vertices;

	txDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_VertexCount = 0;

	{

	m_pSwapChain->Present(0, 0);

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			case SDLK_RIGHT:

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t ty =

	SDL_DestroyWindow(win);



		{

	m_Viewport.TopLeftY = 0;

{

	}

		D3D11_SDK_VERSION,





	pBackBuffer->Release();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	auto& attrib = reader.GetAttrib();

			{





		KEY_PRESS_SURFACE_TOTAL





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

int main(int, char**)

	m_pVertexBuffer = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Height = rect.Height();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			exit(1);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		//User requests quit

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

		D3D11_SDK_VERSION,

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

};

	ConstantMatrixBuffer cmb;



		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//First we need to start up SDL, and make sure it went ok

		return hr;

	{

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pDevice = NULL;



	if (!reader.ParseFromFile(inputfile, reader_config))

	return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

	ConstantMatrixBuffer cmb;



	auto& materials = reader.GetMaterials();

	scDesc.SampleDesc.Quality = 0;

	auto& attrib = reader.GetAttrib();

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pRenderTargetView);

	{

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pIndexBuffer);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	HRESULT              hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4X4 view;

	/*

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

	m_pTexture = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	irData.SysMemPitch = 0;





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pMatrixBuffer = NULL;

	}





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		exit(1);



	ZeroMemory(&txDesc, sizeof(txDesc));

	ConstantLightBuffer clb;





		}

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User presses a key

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

	}

	}

	for (int i = 0; i < 3; i++)

	tinyobj::attrib_t attrib;

			index_offset += fv;

			index_offset += fv;

		pIList[j] = indexList[j];

	}

	LoadObj(vertexlist, indexList);

			}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int SEGMENT = 36;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			default:

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

			switch (e.key.keysym.sym)

	m_pImmediateContext = NULL;

		SDL_RenderClear(ren);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

int main(int, char**)

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		{

	if (FAILED(hr))

		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



			index_offset += fv;

	scDesc.BufferDesc.Width = rect.Width();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	std::vector<tinyobj::material_t> materials;

	m_pTexture = NULL;

	m_pSwapChain->Present(0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);







	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))

	UINT flags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{





	vrData.SysMemPitch = 0;



	m_pTexture = NULL;





			// Loop over vertices in the face.

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	WORD* pIList = new WORD[icount];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_RIGHT:

	}

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <iostream>



	auto& attrib = reader.GetAttrib();

	//頂点バッファ作成



	XMFLOAT4 specular;          //反射(r,g,b)



		exit(1);

	if (m_pImmediateContext)



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_IndexCount = 0;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pIndexBuffer);

	vrData.SysMemSlicePitch = 0;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&shapes,





			index_offset += num_vertices;

	}



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pDepthStencilTexture);

	vrData.SysMemPitch = 0;



	ibDesc.MiscFlags = 0;

			break;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//ピクセルシェーダー生成

	{

void CD3DTest::Release()

	bool ret = tinyobj::LoadObj(

	//First we need to start up SDL, and make sure it went ok

	D3D11_BUFFER_DESC ibDesc;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	/*



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	WORD   icount = indexList.size();

	SDL_DestroyTexture(tex);

	txDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	scDesc.Windowed = TRUE;

		m_pImmediateContext->ClearState();

		pIList[j] = indexList[j];





	txDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	//ピクセルシェーダー生成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	SDL_DestroyRenderer(ren);



	scDesc.Windowed = TRUE;

	m_Viewport.Width = (FLOAT)rect.Width();



			{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			index_offset += num_vertices;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pSampler);

}

	m_Viewport.MinDepth = 0.0f;



	ibDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pPixelShader);





	m_pVertexBuffer = NULL;



	std::string error;

	scDesc.Windowed = TRUE;

	vector<Vertex> vertexlist;

	for (int j = 0; j < icount; j++)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		KEY_PRESS_SURFACE_UP,

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.eyePos, eye);



void CD3DTest::Release()

	pBackBuffer->Release();

	//ビューポート設定

}



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::ObjReaderConfig reader_config;

		1,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::string imagePath = "hello.bmp";



			exit(1);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

		//User presses a key

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		m_pImmediateContext->ClearState();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::vector<tinyobj::material_t> materials;

	m_IndexCount = icount;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		// Loop over faces(polygon)

				// access to vertex

	txDesc.MipLevels = 1;

{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

		SDL_RenderClear(ren);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		delete[] pIList;

		KEY_PRESS_SURFACE_DOWN,

		return hr;







	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftX = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			for (size_t v = 0; v < fv; v++)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (!ret)

		delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



}
	::GetClientRect(hwnd, &rect);

		&level,

	SAFE_RELEASE(m_pSampler);

void CD3DTest::Release()

	SAFE_RELEASE(m_pDevice);

struct ConstantMatrixBuffer {

	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

		pVList[i] = vertexlist[i];

		D3D11_SDK_VERSION,

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4         eyePos;   //視点座標

	m_pLightBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	scDesc.Windowed = TRUE;

}

	}

	scDesc.OutputWindow = hwnd;

	{

	Release();

		size_t index_offset = 0;  // インデントのオフセット







	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	irData.SysMemSlicePitch = 0;

	enum KeyPressSurfaces



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;



		SDL_RenderPresent(ren);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pDepthStencilTexture);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

			switch (e.key.keysym.sym)

		{

	vector<Vertex> vertexlist;

	tinyobj::ObjReader reader;

	//インデックスバッファ作成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SAFE_RELEASE(m_pDevice);

	ConstantLightBuffer clb;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D11_BUFFER_DESC vbDesc;



{

	vrData.pSysMem = &pVList[0];



};





	auto& shapes = reader.GetShapes();



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

	txDesc.ArraySize = 1;

struct ConstantMatrixBuffer {



		return hr;



			index_offset += num_vertices;

	m_pVertexShader = NULL;

	//ビューポート設定

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_DestroyTexture(tex);

	Vertex* pVList = new Vertex[vcount];

	float    nearZ = 0.1f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;



		return hr;

			}



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	auto& materials = reader.GetMaterials();



	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);

				break;



	delete[] pVList;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pTexture);

	//深度ステンシルバッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SAFE_RELEASE(m_pVertexShader);

				indexlist.push_back(idx.vertex_index);





	//定数バッファ作成



	if (!reader.Warning().empty())

	D3D_FEATURE_LEVEL level;

		m_pImmediateContext->ClearState();

};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	m_pSampler = NULL;

		flags,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{



			}





	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	irData.SysMemPitch = 0;

	m_pTextureView = NULL;

	cbDesc.CPUAccessFlags = 0;



};

			case SDLK_LEFT:

	UINT flags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_IndexCount = 0;

		if (!ret)





	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

		{



	cbDesc.StructureByteStride = 0;

	float    fov = XMConvertToRadians(20.0f);

	txDesc.ArraySize = 1;

				// access to vertex

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	while (SDL_PollEvent(&e) != 0)

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

			{

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	txDesc.ArraySize = 1;

				tinyobj::real_t tx =



	XMFLOAT4         eyePos;   //視点座標

				indexlist.push_back(idx.vertex_index);

	txDesc.SampleDesc.Quality = 0;

			case SDLK_RIGHT:

		}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			{



	txDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

		D3D11_SDK_VERSION,

	enum KeyPressSurfaces









	m_pPixelShader = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		if (!ret)

			{

		delete[] pVList;

				break;

		SDL_RenderPresent(ren);

	//定数バッファ作成



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.SampleDesc.Quality = 0;



	auto& materials = reader.GetMaterials();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{

	}

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		delete[] pIList;



	tinyobj::ObjReaderConfig reader_config;

	//頂点シェーダー生成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





/*

	if (!reader.Warning().empty())

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	m_pVertexBuffer = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

		&scDesc,

	bool ret = tinyobj::LoadObj(

		SDL_Delay(1000);

	m_pSwapChain->Present(0, 0);

	auto& attrib = reader.GetAttrib();

	m_pSampler = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	tinyobj::ObjReader reader;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.StructureByteStride = 0;

	//頂点シェーダー生成

		&attrib,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				vertex.push_back(vertex_tmp);

		return 1;

				// access to vertex







				break;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	::GetClientRect(hwnd, &rect);

		SDL_RenderClear(ren);

	if (FAILED(hr))

#include <iostream>

	m_Angle += XMConvertToRadians(1.0f);

	for (int j = 0; j < icount; j++)





	m_pTexture = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

	};



	{

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

			{



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	auto& attrib = reader.GetAttrib();

	txDesc.MipLevels = 1;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string error;

	UINT strides = sizeof(Vertex);



	XMFLOAT4X4 projection;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;







	txDesc.Width = rect.Width();



		D3D_DRIVER_TYPE_HARDWARE,

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

		return 1;

		{

	//インデックスバッファ作成

	SDL_DestroyTexture(tex);

	m_pTexture = NULL;

		&error,

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_DOWN,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.StructureByteStride = 0;

	XMFLOAT4X4 projection;

		SDL_RenderPresent(ren);

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//頂点レイアウト作成



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		&materials,

			case SDLK_UP:



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	UINT offsets = 0;

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_LEFT:



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

	vector<Vertex> vertexlist;

	//頂点バッファ作成

			break;



	tinyobj::attrib_t attrib;

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	ibDesc.CPUAccessFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.StructureByteStride = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4X4 view;

	};



CD3DTest::~CD3DTest()









	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	{

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	{

	txDesc.ArraySize = 1;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		SDL_Delay(1000);

	}

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pSwapChain);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}

			case SDLK_DOWN:

		{

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			{

		return hr;

	//Create Index



	//Vertex* pVList = new Vertex[vcount];

	vbDesc.CPUAccessFlags = 0;

	//vector<Vertex> vertex_t;

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.Width = rect.Width();

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexBuffer);

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}



		SDL_RenderClear(ren);

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			//Select surfaces based on key press

	if (FAILED(hr))



	D3D_FEATURE_LEVEL level;





		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	if (FAILED(hr))

			{



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <iostream>



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		{

struct ConstantMaterial {

	float    fov = XMConvertToRadians(20.0f);

		&materials,

		exit(1);

};

				break;

	XMFLOAT4X4 view;

	txDesc.MipLevels = 1;

		if (!ret)

	{

	txDesc.ArraySize = 1;

				indexlist.push_back(index);

		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	SDL_Quit();

	m_Viewport.Width = (FLOAT)rect.Width();

	{

	{

};





	m_pMatrixBuffer = NULL;

CD3DTest::~CD3DTest()

	D3D11_SAMPLER_DESC smpDesc;



#include "DirectXManager.h"

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		//User requests quit

	cbDesc.CPUAccessFlags = 0;

	{



	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_DOWN,



	UINT offsets = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	SDL_Quit();

	float    fov = XMConvertToRadians(20.0f);

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Key press surfaces constants



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	UINT flags = 0;

	SDL_Event e;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

{

	D3D11_BUFFER_DESC cbDesc;

#ifdef _DEBUG

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

		if (e.type == SDL_QUIT)

				break;

	if (FAILED(hr))

			case SDLK_DOWN:

	}

		return hr;



				tinyobj::real_t ty =



	HRESULT              hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

	ConstantMatrixBuffer cmb;

	}

	m_VertexCount = 0;

	D3D11_BUFFER_DESC cbDesc;



	SDL_DestroyRenderer(ren);

	SDL_DestroyTexture(tex);

	Release();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

	Vertex* pVList = new Vertex[vcount];

		&scDesc,

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Quit();

	scDesc.BufferDesc.Width = rect.Width();



	CRect                rect;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Event e;

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;



		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pVertexBuffer);

	m_Viewport.MaxDepth = 1.0f;

int main(int, char**)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 projection;

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pDepthStencilView);

	//Clean up our objects and quit



			exit(1);

				WORD index = idx.vertex_index;

	ibDesc.MiscFlags = 0;

	vrData.pSysMem = &pVList[0];

	SDL_DestroyTexture(tex);

	//Key press surfaces constants

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include "DirectXManager.h"

		return hr;

{

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pDepthStencilTexture = NULL;

		return hr;

	m_pRenderTargetView = NULL;

			case SDLK_RIGHT:

				break;



	ID3D11Texture2D* pBackBuffer;



			// Loop over vertices in the face.

	XMFLOAT4         ambient;  //環境光(r,g,b)

				indexlist.push_back(idx.vertex_index);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	auto& attrib = reader.GetAttrib();

	SDL_FreeSurface(suf);



		//User requests quit



		&m_pDevice,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ConstantLight    pntLight; //点光源

			case SDLK_DOWN:

	SAFE_RELEASE(m_pImmediateContext);

		if (e.type == SDL_QUIT)

	txDesc.MiscFlags = 0;



		return hr;

		return hr;

		SDL_RenderPresent(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_IndexCount = icount;

	//定数バッファ作成

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pTextureView = NULL;

		{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t ty =



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&txDesc, sizeof(txDesc));

			index_offset += num_vertices;

void CD3DTest::Render()

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	SDL_DestroyTexture(tex);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			}

	//定数バッファ作成

		SDL_Delay(1000);

	std::vector<tinyobj::material_t> materials;

	LoadObj(vertexlist, indexList);

	if (!reader.Warning().empty())

	bool ret = tinyobj::LoadObj(

		&materials,

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		{

void CD3DTest::Release()

	scDesc.OutputWindow = hwnd;

	SDL_Quit();

	m_pDepthStencilView = NULL;

	for (const auto& shape : shapes)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	CRect                rect;

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

				break;









	//vector<WORD> index_t;

		}

	m_VertexCount = vcount;

	float    nearZ = 0.1f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





		&shapes,



				tinyobj::real_t ty =



	dsDesc.Format = txDesc.Format;

		&level,

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

	ConstantLightBuffer clb;

	vbDesc.StructureByteStride = 0;

{

		if (!reader.Error().empty())

		delete[] pIList;

	txDesc.Height = rect.Height();

				indexlist.push_back(index);

struct ConstantLightBuffer {

		D3D11_SDK_VERSION,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{



	return 0;

		delete[] pIList;

	scDesc.BufferDesc.Height = rect.Height();

			// Loop over vertices in the face.

			default:

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	int     vcount = vertexlist.size();

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int j = 0; j < icount; j++)

	{

		&m_pImmediateContext);

	cbDesc.MiscFlags = 0;



		SDL_RenderPresent(ren);

	UINT flags = 0;

	SAFE_RELEASE(m_pLightBuffer);





		KEY_PRESS_SURFACE_LEFT,

			for (size_t v = 0; v < num_vertices; v++)

	{

}





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	}

	UINT offsets = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	delete[] pVList;



		}

	//First we need to start up SDL, and make sure it went ok



				tinyobj::real_t tx =

	ConstantMatrixBuffer cmb;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return 0;

}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				vertex.push_back(vertex_tmp);

			case SDLK_LEFT:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	int     vcount = vertexlist.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ConstantMatrixBuffer cmb;

#include <iostream>

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.MipLevels = 1;



	{

	SAFE_RELEASE(m_pDepthStencilView);

				WORD index = idx.vertex_index;

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.Warning().empty())

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

		SDL_RenderClear(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.CPUAccessFlags = 0;

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//ビューポート設定

		return hr;

	delete[] pVList;

		{

		return hr;

	SAFE_RELEASE(m_pDevice);

	delete[] pVList;

	SAFE_RELEASE(m_pTextureView);

	{



	vrData.pSysMem = &pVList[0];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

			case SDLK_DOWN:



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pDepthStencilView = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	SAFE_RELEASE(m_pPixelShader);

	D3D11_BUFFER_DESC vbDesc;

#include "DirectXManager.h"

	delete[] pIList;



	m_Viewport.TopLeftX = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	return 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	m_VertexCount = 0;





	m_pDepthStencilView = NULL;

	scDesc.OutputWindow = hwnd;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.MipLevels = 1;

	scDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;

		m_pImmediateContext->ClearState();

		pVList[i] = vertexlist[i];



	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_DestroyTexture(tex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

		}

				// access to vertex

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				WORD index = idx.vertex_index;

		&m_pSwapChain,

}

			case SDLK_DOWN:

	dsDesc.Texture2D.MipSlice = 0;

	{

	scDesc.OutputWindow = hwnd;

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_VertexCount = 0;

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//ビューポート設定

		pIList[j] = indexList[j];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	UINT flags = 0;

struct ConstantMaterial {

	cbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

using std::cout; using std::endl;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	CRect                rect;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_SUBRESOURCE_DATA irData;



	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pInputLayout);

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.OutputWindow = hwnd;

	m_pRenderTargetView = NULL;

	txDesc.MiscFlags = 0;



}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.TopLeftY = 0;

	//Create Index

#include <SDL.h>

CD3DTest::CD3DTest()

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

};

		}

		return hr;

	float    nearZ = 0.1f;

	//Create Index

#endif

		SDL_RenderClear(ren);

		&error,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4         ambient;  //環境光(r,g,b)



				break;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

}

				break;



	}

 */

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			switch (e.key.keysym.sym)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pDepthStencilView);

struct ConstantLightBuffer {

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	irData.pSysMem = &pIList[0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//Key press surfaces constants



	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//深度ステンシルバッファ作成

	}

	};

	Release();

			// Loop over vertices in the face.

		SDL_RenderPresent(ren);

	m_pLightBuffer = NULL;

	auto& shapes = reader.GetShapes();

			{

	SDL_Quit();

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

		pIList[j] = indexList[j];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	ID3D11Texture2D* pBackBuffer;

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	SAFE_RELEASE(m_pSwapChain);

{



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			// Loop over vertices in the face.

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//頂点レイアウト作成

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DEFAULT,

	{

	//First we need to start up SDL, and make sure it went ok

		&error,

}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

		&m_pDevice,



				vertex.push_back(vertex_tmp);



		SDL_RenderPresent(ren);

			default:

		SDL_RenderClear(ren);

	dsDesc.Texture2D.MipSlice = 0;

		}

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))



	dsDesc.Format = txDesc.Format;

	vrData.SysMemSlicePitch = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_RIGHT,

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//頂点シェーダー生成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

};

		&m_pSwapChain,







				break;

	SDL_DestroyTexture(tex);

}



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			// Loop over vertices in the face.

			index_offset += fv;

			index_offset += num_vertices;





	cbDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

			case SDLK_DOWN:

};

#endif

struct ConstantMatrixBuffer {

	CRect                rect;

	//ビューポート設定

{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	HRESULT              hr;

	scDesc.SampleDesc.Quality = 0;

	{

	{

	//Create Index

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantLight    pntLight; //点光源

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))



				indexlist.push_back(idx.vertex_index);





			}

	m_Angle += XMConvertToRadians(1.0f);

		}

	for (int j = 0; j < icount; j++)



	{

	LoadObj(vertexlist, indexList);

	{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			// Loop over vertices in the face.

		{

#include <SDL.h>

	m_Viewport.TopLeftY = 0;

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_VertexCount = vcount;

CD3DTest::~CD3DTest()

	cbDesc.CPUAccessFlags = 0;

	pBackBuffer->Release();

	{

	SAFE_RELEASE(m_pSampler);



				tinyobj::real_t tx =

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	SDL_FreeSurface(suf);

	while (SDL_PollEvent(&e) != 0)

	ConstantLightBuffer clb;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pMatrixBuffer = NULL;

		KEY_PRESS_SURFACE_TOTAL

	{

	vbDesc.CPUAccessFlags = 0;





	pBackBuffer->Release();



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				indexlist.push_back(idx.vertex_index);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{





	SAFE_RELEASE(m_pDepthStencilTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	UINT strides = sizeof(Vertex);

	}





		}

	XMFLOAT4         eyePos;   //視点座標

	m_pDepthStencilView = NULL;

#include <iostream>



	tinyobj::ObjReader reader;

		return hr;

			default:



			{

	XMFLOAT4X4 view;

			exit(1);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

		{

	HRESULT              hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		1,



		if (e.type == SDL_QUIT)





	for (size_t s = 0; s < shapes.size(); s++)

	m_pTextureView = NULL;

	txDesc.MiscFlags = 0;

			switch (e.key.keysym.sym)

	{

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	ConstantLight    pntLight; //点光源

	tinyobj::ObjReaderConfig reader_config;

	m_pPixelShader = NULL;





	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_BUFFER_DESC vbDesc;

}

		else if (e.type == SDL_KEYDOWN)

	/*

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			int num_vertices = shape.mesh.num_face_vertices[f];



	vbDesc.CPUAccessFlags = 0;

		return hr;

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		NULL,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

};

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.MiscFlags = 0;



		size_t index_offset = 0;

	for (size_t s = 0; s < shapes.size(); s++)



int main(int, char**)

	m_IndexCount = icount;



int SEGMENT = 36;



	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	XMFLOAT4X4 world;

		exit(1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	m_pSampler = NULL;

		NULL,

	//頂点シェーダー生成

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (const auto& shape : shapes)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//深度ステンシルバッファ作成

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyTexture(tex);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.StructureByteStride = 0;

		pLevels,

	{

/*

			{

	}

		D3D11_SDK_VERSION,

	}

	XMFLOAT4 ambient;           //環境(r,g,b)

	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			default:

	D3D11_BUFFER_DESC vbDesc;

	SDL_Quit();

	auto& attrib = reader.GetAttrib();

}

	}

	D3D11_BUFFER_DESC vbDesc;

};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

			exit(1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::vector<tinyobj::material_t> materials;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)



			// Loop over vertices in the face.

		&attrib,

	if (FAILED(hr))

{

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pVList;

	}

	{

		delete[] pIList;

	m_pTexture = NULL;

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	::GetClientRect(hwnd, &rect);

	std::string inputfile = "test.obj";



	for (const auto& shape : shapes)

				break;

int main(int, char**)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			index_offset += fv;





	if (FAILED(hr))

		{



	/*

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#ifdef _DEBUG

	m_VertexCount = vcount;

	}

	WORD   icount = indexList.size();

	m_pPixelShader = NULL;

	delete[] pIList;





		1,



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferDesc.Width = rect.Width();



		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderPresent(ren);



		&m_pImmediateContext);

		//User presses a key

	tinyobj::ObjReader reader;

	m_pVertexShader = NULL;



		NULL,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_FreeSurface(suf);



	m_VertexCount = 0;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				vertex.push_back(vertex_tmp);

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

using std::cout; using std::endl;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int main(int, char**)



	vbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.eyePos, eye);

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

	vbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

{

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.CPUAccessFlags = 0;

	{

				// access to vertex

	delete[] pVList;

			case SDLK_RIGHT:

	txDesc.SampleDesc.Quality = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	int     vcount = vertexlist.size();



		return 1;

int SEGMENT = 36;





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	dsDesc.Texture2D.MipSlice = 0;

			}

			{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			case SDLK_UP:



	if (!reader.ParseFromFile(inputfile, reader_config))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pIndexBuffer = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}



	SAFE_RELEASE(m_pInputLayout);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	bool ret = tinyobj::LoadObj(



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::ObjReader reader;



	txDesc.SampleDesc.Count = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_BUFFER_DESC ibDesc;

	txDesc.ArraySize = 1;





		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pSampler);

		pVList[i] = vertexlist[i];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];







{

	SDL_DestroyTexture(tex);

int main(int, char**)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.StructureByteStride = 0;

	ConstantLight    pntLight; //点光源

	m_VertexCount = vcount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

int SEGMENT = 36;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

		}

		SDL_Delay(1000);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (size_t s = 0; s < shapes.size(); s++)

#include <iostream>



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pInputLayout = NULL;

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Quit();

	auto& attrib = reader.GetAttrib();

			int num_vertices = shape.mesh.num_face_vertices[f];

int SEGMENT = 36;

	if (FAILED(hr))

#include <iostream>

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	int     vcount = vertexlist.size();

		return hr;

	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



struct ConstantLight {



			{

	vrData.pSysMem = &pVList[0];



 */

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//頂点シェーダー生成

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.TopLeftX = 0;

{

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	return 0;

	m_pTextureView = NULL;

	{

	for (int j = 0; j < icount; j++)

	vector<Vertex> vertexlist;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	scDesc.SampleDesc.Quality = 0;



		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	/*

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		&attrib,

		return hr;

		return hr;

		// Loop over faces(polygon)

	scDesc.BufferDesc.Height = rect.Height();

			switch (e.key.keysym.sym)

				vertex.push_back(vertex_tmp);

	enum KeyPressSurfaces

		{

#include <SDL.h>

	m_pSwapChain->Present(0, 0);

	vrData.SysMemSlicePitch = 0;

	//vector<WORD> index_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pSwapChain = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標



			index_offset += num_vertices;

		return 1;

		return hr;

};

		KEY_PRESS_SURFACE_DEFAULT,

		flags,

			}

			switch (e.key.keysym.sym)

	SDL_DestroyWindow(win);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		{

		1,







	m_pRenderTargetView = NULL;





		&level,

	vrData.SysMemSlicePitch = 0;

			{

	SAFE_RELEASE(m_pLightBuffer);



	SDL_DestroyTexture(tex);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			case SDLK_DOWN:

	cbDesc.MiscFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ibDesc.MiscFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (int i = 0; i < 3; i++)



	for (int i = 0; i < 3; i++)

		{

			{

				break;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_FreeSurface(bmp);

		&scDesc,

		}

	m_pSampler = NULL;

			case SDLK_DOWN:

		SDL_RenderClear(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_UP,

	/*



		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	{

	for (size_t s = 0; s < shapes.size(); s++)

	//ビューポート設定

	SAFE_RELEASE(m_pImmediateContext);

	m_pDepthStencilTexture = NULL;



	}

		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	auto& materials = reader.GetMaterials();

	{

	}

void CD3DTest::Render()

	}*/

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantMaterial material; //物体の質感

};

	//定数バッファ作成

#include "DirectXManager.h"



	if (FAILED(hr))

			{

	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC cbDesc;

	auto& attrib = reader.GetAttrib();



	txDesc.MiscFlags = 0;

	if (FAILED(hr))

};

			{



}

	m_pTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;

		SDL_RenderPresent(ren);

				break;

	UINT flags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;



	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	for (const auto& shape : shapes)

	SDL_DestroyWindow(win);

	UINT flags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pImmediateContext);

	if (!error.empty())

	SAFE_RELEASE(m_pTextureView);

	delete[] pIList;

	txDesc.SampleDesc.Count = 1;



	D3D11_BUFFER_DESC vbDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	/*

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.Height = rect.Height();

		&error,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.ArraySize = 1;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

			//Select surfaces based on key press

				tinyobj::real_t tx =

		}

	//Key press surfaces constants

		if (e.type == SDL_QUIT)

				indexlist.push_back(idx.vertex_index);



	dsDesc.Format = txDesc.Format;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Quit();

struct ConstantLightBuffer {

	WORD   icount = indexList.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

int main(int, char**)

	delete[] pIList;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		size_t index_offset = 0;  // インデントのオフセット

void CD3DTest::Render()

		if (!ret)

	SAFE_RELEASE(m_pDevice);

	tinyobj::ObjReaderConfig reader_config;

		KEY_PRESS_SURFACE_TOTAL

struct ConstantLightBuffer {



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];







	m_Viewport.TopLeftY = 0;





	}

	cbDesc.StructureByteStride = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

		if (!reader.Error().empty())

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_TEXTURE2D_DESC txDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderClear(ren);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		1,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)



	XMFLOAT4 specular;          //反射(r,g,b)

	for (const auto& shape : shapes)

		else if (e.type == SDL_KEYDOWN)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.SampleDesc.Quality = 0;



	SAFE_RELEASE(m_pSwapChain);

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	{

	SAFE_RELEASE(m_pTextureView);

}



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	scDesc.SampleDesc.Quality = 0;



				tinyobj::real_t ty =

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			index_offset += num_vertices;

	if (!error.empty())

	txDesc.MiscFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	return hr;

#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 pos;               //座標(x,y,z)

		D3D11_SDK_VERSION,



				WORD index = idx.vertex_index;



	UINT flags = 0;

	m_pDevice = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMFLOAT4X4 projection;

		size_t index_offset = 0;

}
	XMFLOAT4 specular;          //反射(r,g,b)



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	enum KeyPressSurfaces

}

#ifdef _DEBUG

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		}

	while (SDL_PollEvent(&e) != 0)

	::GetClientRect(hwnd, &rect);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

	auto& attrib = reader.GetAttrib();

	//インデックスバッファ作成

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			exit(1);

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;



	SAFE_RELEASE(m_pVertexShader);

	{

	vrData.SysMemPitch = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ConstantMatrixBuffer cmb;

	txDesc.Width = rect.Width();



	m_pSwapChain->Present(0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	irData.pSysMem = &pIList[0];

	};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		return hr;

	SDL_DestroyRenderer(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

int main(int, char**)

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				break;

{

	Release();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Key press surfaces constants

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	return hr;

	WORD* pIList = new WORD[icount];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	/*

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.Windowed = TRUE;

	tinyobj::ObjReader reader;

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pDevice);

	//Key press surfaces constants

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	vbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.pSysMem = &pIList[0];

		flags,



			}



		delete[] pVList;

int SEGMENT = 36;



	//頂点シェーダー生成

	D3D_FEATURE_LEVEL level;

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;



	SAFE_RELEASE(m_pPixelShader);

{

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//First we need to start up SDL, and make sure it went ok

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;



				break;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			{

		KEY_PRESS_SURFACE_RIGHT,

	delete[] pIList;

	//vector<Vertex> vertex_t;

		SDL_Delay(1000);





	return;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

 */

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				vertex.push_back(vertex_tmp);

	irData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//vector<WORD> index_t;

	m_pVertexBuffer = NULL;



		return hr;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	auto& attrib = reader.GetAttrib();

	{

			//Select surfaces based on key press

#include "DirectXManager.h"

				tinyobj::real_t ty =

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyTexture(tex);

		&materials,





	txDesc.MiscFlags = 0;

	enum KeyPressSurfaces



	m_VertexCount = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.pSysMem = &pIList[0];

	m_pSwapChain = NULL;

	irData.SysMemPitch = 0;

	vbDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.MinDepth = 0.0f;

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





		return hr;

			case SDLK_DOWN:

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_Delay(1000);

	{

	return hr;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		{

		&shapes,

	SDL_DestroyWindow(win);

	SDL_FreeSurface(suf);

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_VertexCount = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	int     vcount = vertexlist.size();

		return hr;

	}

	for (size_t s = 0; s < shapes.size(); s++)



	if (FAILED(hr))



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	if (FAILED(hr))

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pSampler = NULL;

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t tx =

	D3D_FEATURE_LEVEL level;

		&error,

		&attrib,

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	m_IndexCount = 0;

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pDevice);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vrData.SysMemPitch = 0;



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);


