	UINT strides = sizeof(Vertex);

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



{



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.Height = rect.Height();

	m_VertexCount = vcount;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_Delay(1000);

	return;

	m_Viewport.TopLeftX = 0;

	m_pDepthStencilTexture = NULL;

	m_pVertexShader = NULL;

{

		{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			default:

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

/*

	D3D11_SAMPLER_DESC smpDesc;



	auto& materials = reader.GetMaterials();

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 pos;               //座標(x,y,z)

{

		{

				WORD index = idx.vertex_index;

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//ピクセルシェーダー生成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		1,



	SDL_FreeSurface(bmp);

	while (SDL_PollEvent(&e) != 0)

	cbDesc.StructureByteStride = 0;

	//ビューポート設定

		if (e.type == SDL_QUIT)

	return hr;

			index_offset += fv;

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pDepthStencilTexture);

void CD3DTest::Render()

#endif



}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_UP:

		SDL_RenderClear(ren);

	LoadObj(vertexlist, indexList);



	SAFE_RELEASE(m_pRenderTargetView);





	m_pSampler = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    nearZ = 0.1f;

	m_pSampler = NULL;

	irData.SysMemPitch = 0;

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pSwapChain->Present(0, 0);

			index_offset += fv;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_pInputLayout = NULL;

	txDesc.SampleDesc.Count = 1;

		if (!reader.Error().empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	CRect                rect;

	if (m_pImmediateContext)

	SDL_DestroyTexture(tex);

struct ConstantMatrixBuffer {

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



#endif

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

		return hr;

				tinyobj::real_t tx =



struct ConstantMaterial {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

		}

	D3D11_BUFFER_DESC vbDesc;

};

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Width = rect.Width();

	}



		{



	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#include <iostream>



		return hr;





{

	//テクスチャ読み込み

	if (FAILED(hr))

	}

	ibDesc.StructureByteStride = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	ConstantLightBuffer clb;

			break;

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pImmediateContext);





		KEY_PRESS_SURFACE_LEFT,

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];







				break;

	//頂点シェーダー生成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	while (SDL_PollEvent(&e) != 0)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

		flags,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	while (SDL_PollEvent(&e) != 0)

				break;

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_DEFAULT,

	return;

	//ビューポート設定

	// Loop over shapes

	m_Viewport.MaxDepth = 1.0f;

};

	m_Angle += XMConvertToRadians(1.0f);



	vector<WORD> indexList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit

	m_pRenderTargetView = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_FreeSurface(bmp);

		return hr;

	{



	return 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	// Loop over shapes

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderPresent(ren);

		pIList[j] = indexList[j];



using std::cout; using std::endl;

	dsDesc.Texture2D.MipSlice = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		exit(1);

	SAFE_RELEASE(m_pSampler);

	m_IndexCount = 0;



#include <SDL.h>

		SDL_RenderClear(ren);

			// Loop over vertices in the face.

#endif

	SDL_FreeSurface(bmp);

	m_IndexCount = icount;

		}

	txDesc.SampleDesc.Quality = 0;

	int     vcount = vertexlist.size();

	cbDesc.MiscFlags = 0;

	m_pIndexBuffer = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

			}

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	WORD* pIList = new WORD[icount];

			int num_vertices = shape.mesh.num_face_vertices[f];

	//Key press surfaces constants

	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_UP,

void CD3DTest::Render()



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

#include "DirectXManager.h"

	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	//First we need to start up SDL, and make sure it went ok

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))



	return 0;

{



	m_IndexCount = icount;

	}

	DXGI_SWAP_CHAIN_DESC scDesc;

	for (int i = 0; i < 3; i++)

	m_pDevice = NULL;

	auto& attrib = reader.GetAttrib();



				// access to vertex

	std::string error;

	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	WORD* pIList = new WORD[icount];

int SEGMENT = 36;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pVertexShader = NULL;

	Release();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	//Key press surfaces constants

		SDL_RenderClear(ren);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pTexture);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderPresent(ren);

	vector<Vertex> vertexlist;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{



};

			case SDLK_RIGHT:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderClear(ren);

#endif

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Clean up our objects and quit

	m_pSwapChain->Present(0, 0);

	m_pRenderTargetView = NULL;

	CRect                rect;



}

	if (!reader.Warning().empty())

	m_Viewport.MinDepth = 0.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pPixelShader);



	txDesc.CPUAccessFlags = 0;

			default:

			default:

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ibDesc.CPUAccessFlags = 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	WORD* pIList = new WORD[icount];

		SDL_RenderClear(ren);

		&m_pSwapChain,

	/*

	//頂点レイアウト作成

	//インデックスバッファ作成

	XMFLOAT4         ambient;  //環境光(r,g,b)



			{

	XMFLOAT4X4 projection;

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		pIList[j] = indexList[j];



	txDesc.CPUAccessFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



}

	D3D11_SUBRESOURCE_DATA irData;

using std::cout; using std::endl;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		m_pImmediateContext->ClearState();

	SDL_DestroyTexture(tex);



		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

};

		//User requests quit

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	vbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

}



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	float    nearZ = 0.1f;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

int main(int, char**)

				break;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (m_pImmediateContext)

		KEY_PRESS_SURFACE_DEFAULT,

		cout << "SDL_INIT_ERROR" << endl;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.Width = rect.Width();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4X4 projection;

		&scDesc,

	if (!error.empty())

			//Select surfaces based on key press

	SAFE_RELEASE(m_pTexture);

				indexlist.push_back(idx.vertex_index);

		exit(1);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pSwapChain->Present(0, 0);

	m_pLightBuffer = NULL;

			//Select surfaces based on key press

	scDesc.OutputWindow = hwnd;

	txDesc.SampleDesc.Quality = 0;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

	irData.pSysMem = &pIList[0];

		exit(1);

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTexture);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.Windowed = TRUE;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D_FEATURE_LEVEL level;



		&attrib,

		size_t index_offset = 0;



{



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	CRect                rect;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::string error;

	{

	WORD   icount = indexList.size();

	for (int j = 0; j < icount; j++)

	{



	cbDesc.CPUAccessFlags = 0;

			{

		{



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		1,

	cbDesc.CPUAccessFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pSwapChain);

				// access to vertex

	delete[] pVList;

	SAFE_RELEASE(m_pSwapChain);



		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{



};

	vrData.SysMemSlicePitch = 0;



	vrData.SysMemPitch = 0;

	XMFLOAT4         eyePos;   //視点座標



	for (int i = 0; i < 3; i++)

		//User requests quit

	for (int i = 0; i < 3; i++)

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::vector<tinyobj::shape_t> shapes;



	{

		}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;

	vector<WORD> indexList;







			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4X4 projection;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		}

		1,

	m_pSwapChain = NULL;



		return hr;

	if (FAILED(hr))

			index_offset += fv;





	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pSwapChain);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//定数バッファ作成

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		size_t index_offset = 0;

		size_t index_offset = 0;  // インデントのオフセット

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

	txDesc.SampleDesc.Quality = 0;

		if (!reader.Error().empty())

#define TINYOBJLOADER_IMPLEMENTATION

	irData.pSysMem = &pIList[0];

	for (int i = 0; i < vcount; i++)

	scDesc.BufferDesc.Height = rect.Height();

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//深度ステンシルバッファ作成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	// Loop over shapes

};

	if (FAILED(hr))

	Release();



	SDL_FreeSurface(suf);



	std::vector<tinyobj::material_t> materials;





	pBackBuffer->Release();

		KEY_PRESS_SURFACE_UP,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.Width = (FLOAT)rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_IndexCount = icount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	bool ret = tinyobj::LoadObj(

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#ifdef _DEBUG

	float    nearZ = 0.1f;



	m_Viewport.MinDepth = 0.0f;

			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    fov = XMConvertToRadians(20.0f);



	::GetClientRect(hwnd, &rect);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	return 0;

		{

	std::string error;

	XMFLOAT4X4 projection;

	enum KeyPressSurfaces

	scDesc.Windowed = TRUE;





			switch (e.key.keysym.sym)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			}

	SAFE_RELEASE(m_pVertexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SAFE_RELEASE(m_pSwapChain);



			index_offset += num_vertices;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



	WORD   icount = indexList.size();

	}

};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		pIList[j] = indexList[j];

		&attrib,

{



	D3D11_BUFFER_DESC ibDesc;

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

			{



	if (SDL_Init(SDL_INIT_VIDEO != 0))

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			{

	m_pSwapChain = NULL;

	auto& attrib = reader.GetAttrib();

		return hr;

	for (int i = 0; i < vcount; i++)

		&level,

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))



	m_pRenderTargetView = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		pLevels,



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		{

void CD3DTest::Render()

{

	m_IndexCount = icount;

		pIList[j] = indexList[j];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	::GetClientRect(hwnd, &rect);

		return hr;

				indexlist.push_back(idx.vertex_index);

		pIList[j] = indexList[j];



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				// access to vertex

void CD3DTest::Release()



		1,

	}

	}

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	}*/

			switch (e.key.keysym.sym)





	m_IndexCount = icount;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		m_pImmediateContext->ClearState();

		}

	SAFE_RELEASE(m_pMatrixBuffer);

	tinyobj::attrib_t attrib;

		// Loop over faces(polygon)

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}

			}

			case SDLK_LEFT:

{

		return hr;







		return hr;

	ConstantMatrixBuffer cmb;

	return 0;

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	SAFE_RELEASE(m_pVertexShader);

		NULL,

	SAFE_RELEASE(m_pDevice);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			default:

	::GetClientRect(hwnd, &rect);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_Delay(1000);

	//頂点バッファ作成



	float    fov = XMConvertToRadians(20.0f);

	auto& materials = reader.GetMaterials();

	{

			}





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;

		else if (e.type == SDL_KEYDOWN)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				WORD index = idx.vertex_index;

			//Select surfaces based on key press



	return 0;

		}



	//vector<Vertex> vertex_t;

		SDL_Delay(1000);



	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

	dsDesc.Texture2D.MipSlice = 0;

	//Key press surfaces constants

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	std::string error;

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

void CD3DTest::Render()

}

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_RIGHT,

	SDL_FreeSurface(suf);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;

				WORD index = idx.vertex_index;



};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	}

	SDL_FreeSurface(bmp);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);







	dsDesc.Format = txDesc.Format;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		SDL_RenderCopy(ren, tex, NULL, NULL);



struct ConstantMaterial {

				// access to vertex

			for (size_t v = 0; v < num_vertices; v++)

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			//Select surfaces based on key press



	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ConstantLightBuffer clb;

using std::cout; using std::endl;

	}

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	{

	//深度ステンシルバッファ作成

			//Select surfaces based on key press

	auto& materials = reader.GetMaterials();

		pLevels,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pSwapChain = NULL;

		&shapes,

		m_pImmediateContext->ClearState();

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4X4 projection;

	float    farZ = 100.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::GetClientRect(hwnd, &rect);

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





			}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string imagePath = "hello.bmp";

	m_pLightBuffer = NULL;

	if (m_pImmediateContext)

{



	//Create Index

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_SUBRESOURCE_DATA vrData;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);

{

		return hr;

				break;

	m_Viewport.TopLeftY = 0;

	SDL_Quit();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

				vertex.push_back(vertex_tmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	irData.pSysMem = &pIList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				indexlist.push_back(index);

	//ピクセルシェーダー生成

	//vector<WORD> index_t;



		NULL,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			case SDLK_DOWN:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		&shapes,

		D3D_DRIVER_TYPE_HARDWARE,

	/*



#include <SDL.h>

			}

		}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





		}

	}

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	SDL_Quit();



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	{

			case SDLK_LEFT:



	D3D11_BUFFER_DESC cbDesc;

		1,

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyRenderer(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pRenderTargetView = NULL;

int SEGMENT = 36;

	//First we need to start up SDL, and make sure it went ok

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_SUBRESOURCE_DATA vrData;

		KEY_PRESS_SURFACE_DOWN,



	m_pDepthStencilTexture = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 pos;               //座標(x,y,z)

		size_t index_offset = 0;  // インデントのオフセット

	m_Angle += XMConvertToRadians(1.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void CD3DTest::Release()

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

		&m_pDevice,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string error;

		pLevels,

	WORD* pIList = new WORD[icount];

			//Select surfaces based on key press

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include <iostream>

	while (SDL_PollEvent(&e) != 0)

				break;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		else if (e.type == SDL_KEYDOWN)

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	tinyobj::ObjReaderConfig reader_config;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#include <SDL.h>

	std::string error;

	std::string imagePath = "hello.bmp";

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	UINT flags = 0;

	vector<Vertex> vertexlist;

	{

				break;

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	std::vector<tinyobj::material_t> materials;

#ifdef _DEBUG

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    farZ = 100.0f;



			case SDLK_DOWN:

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			index_offset += num_vertices;



	txDesc.Width = rect.Width();

	if (!error.empty())



void CD3DTest::Release()



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4         ambient;  //環境光(r,g,b)



struct ConstantLightBuffer {

	m_Viewport.TopLeftY = 0;

	D3D11_BUFFER_DESC ibDesc;



			case SDLK_UP:

}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	//First we need to start up SDL, and make sure it went ok



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilView = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		delete[] pIList;

#include "DirectXManager.h"

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	//Vertex* pVList = new Vertex[vcount];

	std::vector<tinyobj::shape_t> shapes;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.TopLeftY = 0;

	enum KeyPressSurfaces

	m_pLightBuffer = NULL;

		D3D11_SDK_VERSION,

		SDL_RenderClear(ren);



	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

	vbDesc.MiscFlags = 0;

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		R"(cube.obj)");

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	std::string error;

	}



		return hr;

	};





	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

		&materials,

		KEY_PRESS_SURFACE_RIGHT,



	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		size_t index_offset = 0;  // インデントのオフセット

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pLightBuffer = NULL;



		KEY_PRESS_SURFACE_LEFT,



		delete[] pIList;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t tx =



	UINT flags = 0;



			//Select surfaces based on key press

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//Clean up our objects and quit

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

	int     vcount = vertexlist.size();

		exit(1);

}

			case SDLK_DOWN:

	SDL_Event e;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	m_pTexture = NULL;



	if (FAILED(hr))



	};

	scDesc.SampleDesc.Count = 1;

	std::vector<tinyobj::material_t> materials;

		return 1;

#endif

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);

	return;

	SAFE_RELEASE(m_pDevice);





	D3D11_SUBRESOURCE_DATA vrData;

	Release();

	std::string error;

};

		&attrib,



	scDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < vcount; i++)



	enum KeyPressSurfaces

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		//User requests quit

		else if (e.type == SDL_KEYDOWN)

		KEY_PRESS_SURFACE_TOTAL





void CD3DTest::Render()

			for (size_t v = 0; v < num_vertices; v++)



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}



	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pIndexBuffer = NULL;

	}

	return hr;

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				break;

	}

	UINT flags = 0;

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}*/

	SDL_Quit();

};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

			exit(1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4X4 view;

	UINT offsets = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	for (size_t s = 0; s < shapes.size(); s++)

}

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.StructureByteStride = 0;

#include <iostream>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	auto& attrib = reader.GetAttrib();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				indexlist.push_back(idx.vertex_index);



	CRect                rect;

	return;

		delete[] pIList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			}

	if (FAILED(hr))



				// access to vertex

	//ピクセルシェーダー生成

		pIList[j] = indexList[j];



		SDL_Delay(1000);

		exit(1);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_TEXTURE2D_DESC txDesc;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

	{

	scDesc.BufferDesc.Height = rect.Height();



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&attrib,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);

	m_pDevice = NULL;

	//深度ステンシルバッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	m_pVertexBuffer = NULL;

}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

		{

	SDL_FreeSurface(bmp);

	txDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	bool ret = tinyobj::LoadObj(

void CD3DTest::Render()

	Release();

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pImmediateContext);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pRenderTargetView = NULL;

	::GetClientRect(hwnd, &rect);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	//vector<Vertex> vertex_t;

		&m_pDevice,



	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderClear(ren);

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

}

	for (size_t s = 0; s < shapes.size(); s++)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	irData.SysMemSlicePitch = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyRenderer(ren);

	ConstantMaterial material; //物体の質感

	return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	Release();

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//深度ステンシルバッファ作成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.CPUAccessFlags = 0;

		}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		if (e.type == SDL_QUIT)

	m_Viewport.TopLeftX = 0;



	SAFE_RELEASE(m_pSampler);

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	//First we need to start up SDL, and make sure it went ok

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	return;



		pLevels,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{

	D3D11_SUBRESOURCE_DATA irData;



	if (m_pImmediateContext)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	};

	//深度ステンシルバッファ作成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		R"(cube.obj)");

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		R"(cube.obj)");

int main(int, char**)

	//頂点シェーダー生成

		SDL_Delay(1000);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//vector<WORD> index_t;





	UINT flags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				WORD index = idx.vertex_index;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&scDesc,

	SAFE_RELEASE(m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点シェーダー生成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Quit();

	if (FAILED(hr))



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 specular;          //反射(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

		return hr;

				// access to vertex

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t tx =

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		SDL_RenderPresent(ren);



		return hr;

void CD3DTest::Release()



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ibDesc.CPUAccessFlags = 0;

		flags,

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		R"(cube.obj)");



	vector<Vertex> vertexlist;

		{



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		if (e.type == SDL_QUIT)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			}

	m_pVertexBuffer = NULL;



	tinyobj::attrib_t attrib;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	vbDesc.StructureByteStride = 0;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		size_t index_offset = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		flags,



{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		pVList[i] = vertexlist[i];

	m_pDevice = NULL;

	//頂点シェーダー生成

	SAFE_RELEASE(m_pDevice);





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMFLOAT4X4 projection;

	XMFLOAT4X4 projection;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pVertexBuffer = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				// access to vertex

	enum KeyPressSurfaces

	scDesc.BufferDesc.Width = rect.Width();

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

		D3D11_SDK_VERSION,

		&m_pSwapChain,

		delete[] pIList;

	XMFLOAT4X4 world;

#define TINYOBJLOADER_IMPLEMENTATION

	while (SDL_PollEvent(&e) != 0)

	{

			default:



	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

	m_Angle += XMConvertToRadians(1.0f);

	tinyobj::attrib_t attrib;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

			case SDLK_LEFT:



		return hr;

	HRESULT              hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pInputLayout);

		}





	tinyobj::ObjReader reader;

			for (size_t v = 0; v < num_vertices; v++)

		&materials,



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 projection;

		{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.Width = rect.Width();

	for (size_t s = 0; s < shapes.size(); s++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	auto& shapes = reader.GetShapes();

		D3D_DRIVER_TYPE_HARDWARE,

	//頂点シェーダー生成

	XMFLOAT4         eyePos;   //視点座標

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;





	int     vcount = vertexlist.size();



		if (!ret)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)





	cbDesc.StructureByteStride = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_DOWN,

};

#endif

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_LEFT:

	txDesc.MipLevels = 1;

			case SDLK_RIGHT:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	tinyobj::ObjReader reader;

		else if (e.type == SDL_KEYDOWN)

	std::string inputfile = "test.obj";

	LoadObj(vertexlist, indexList);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::vector<tinyobj::shape_t> shapes;

		{



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				// access to vertex

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	cbDesc.CPUAccessFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	for (const auto& shape : shapes)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



#endif



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	};

};



};



	//Clean up our objects and quit

	UINT flags = 0;

		// Loop over faces(polygon)





	std::string imagePath = "hello.bmp";

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pVertexShader);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

		D3D11_SDK_VERSION,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		delete[] pVList;

int SEGMENT = 36;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.ArraySize = 1;

HRESULT CD3DTest::Create(HWND hwnd)

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	SAFE_RELEASE(m_pIndexBuffer);

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	HRESULT              hr;

	SDL_Event e;

				// access to vertex

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	XMFLOAT4X4 world;

	if (FAILED(hr))

	XMFLOAT4X4 view;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemPitch = 0;

	auto& attrib = reader.GetAttrib();

	return;

	delete[] pIList;

		size_t index_offset = 0;

	m_pPixelShader = NULL;

		R"(cube.obj)");

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

	float    farZ = 100.0f;



		&m_pSwapChain,

	SDL_Event e;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.ambient, lightAmbient);



	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//頂点レイアウト作成

	//頂点バッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	for (int i = 0; i < vcount; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&txDesc, sizeof(txDesc));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))



		cout << "SDL_INIT_ERROR" << endl;

	/*

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	Release();

			}

		delete[] pIList;

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	UINT offsets = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



			for (size_t v = 0; v < num_vertices; v++)



	SDL_DestroyWindow(win);

	return 0;

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pDepthStencilView);



	// Loop over shapes

	SAFE_RELEASE(m_pVertexShader);

	irData.SysMemPitch = 0;

	cbDesc.StructureByteStride = 0;

	{

			case SDLK_RIGHT:

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	pBackBuffer->Release();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



struct ConstantMatrixBuffer {

	SDL_DestroyTexture(tex);





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#endif



	scDesc.BufferCount = 1;



	m_IndexCount = icount;

	scDesc.OutputWindow = hwnd;

	vector<WORD> indexList;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&shapes,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				// access to vertex

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

		NULL,

				break;

	{

			{

	if (!error.empty())

	while (SDL_PollEvent(&e) != 0)

	txDesc.Width = rect.Width();





	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);



 */

	bool ret = tinyobj::LoadObj(

	}

	/*

};

	};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



#include <SDL.h>

	m_VertexCount = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.MiscFlags = 0;

				break;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string imagePath = "hello.bmp";



}

	cbDesc.CPUAccessFlags = 0;

}

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	HRESULT              hr;

	m_pVertexShader = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pTextureView);

	}



		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



};

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	cbDesc.MiscFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_DOWN:

	m_Viewport.TopLeftX = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	irData.SysMemSlicePitch = 0;



	SDL_Quit();

	}

		}

/*

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pTextureView = NULL;

		pVList[i] = vertexlist[i];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	return hr;

	}

	for (int i = 0; i < 3; i++)

{





	irData.SysMemSlicePitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

/*



	if (!reader.Warning().empty())

	if (!error.empty())

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



};



	enum KeyPressSurfaces

	for (const auto& shape : shapes)

			case SDLK_LEFT:

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

};



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			index_offset += fv;



		}





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	irData.pSysMem = &pIList[0];

				indexlist.push_back(index);





	XMStoreFloat4(&clb.ambient, lightAmbient);

void CD3DTest::Render()

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	WORD   icount = indexList.size();

	txDesc.MipLevels = 1;



	txDesc.SampleDesc.Count = 1;

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pPixelShader);

		return hr;

		NULL,

}
	if (FAILED(hr))

	if (FAILED(hr))

	vector<Vertex> vertexlist;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

	}



	m_pLightBuffer = NULL;

	{

	SAFE_RELEASE(m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))



	{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	//頂点レイアウト作成

			case SDLK_UP:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



{

	if (FAILED(hr))

	{

				vertex.push_back(vertex_tmp);

	std::string imagePath = "hello.bmp";

struct ConstantLightBuffer {

	txDesc.Height = rect.Height();



}

	return;

	m_pVertexBuffer = NULL;

	{

	SAFE_RELEASE(m_pVertexBuffer);

	pBackBuffer->Release();

	if (m_pImmediateContext)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

			break;

	enum KeyPressSurfaces

	XMFLOAT4X4 view;





	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Viewport.MinDepth = 0.0f;

	{

			{

				indexlist.push_back(index);

	ZeroMemory(&txDesc, sizeof(txDesc));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&shapes,

		SDL_Delay(1000);

			for (size_t v = 0; v < num_vertices; v++)



	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		exit(1);

	txDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			index_offset += fv;

	//定数バッファ作成

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Count = 1;



	vrData.SysMemPitch = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pIndexBuffer);

	vector<WORD> indexList;



		KEY_PRESS_SURFACE_UP,

	for (int j = 0; j < icount; j++)

		return hr;

	{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC cbDesc;

	pBackBuffer->Release();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

void CD3DTest::Render()

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//ビューポート設定

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.Height = (FLOAT)rect.Height();

	//ビューポート設定



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_DestroyTexture(tex);

		if (e.type == SDL_QUIT)

};

	vrData.pSysMem = &pVList[0];

	cbDesc.MiscFlags = 0;

	delete[] pVList;

	m_pDepthStencilTexture = NULL;

	//Key press surfaces constants



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_Delay(1000);

#include <iostream>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	{

	if (FAILED(hr))



	if (!reader.Warning().empty())

		m_pImmediateContext->ClearState();

	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pInputLayout);

		size_t index_offset = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//Vertex* pVList = new Vertex[vcount];

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_Viewport.TopLeftY = 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	if (!reader.Warning().empty())



	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//ピクセルシェーダー生成

				indexlist.push_back(idx.vertex_index);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	m_pTextureView = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_SAMPLER_DESC smpDesc;

};

	ConstantLight    pntLight; //点光源

	scDesc.OutputWindow = hwnd;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;



		}

	SAFE_RELEASE(m_pLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

		pLevels,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	irData.pSysMem = &pIList[0];



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			index_offset += num_vertices;

}



	//Key press surfaces constants

	vrData.pSysMem = &pVList[0];

	{



	SAFE_RELEASE(m_pMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))



	Vertex* pVList = new Vertex[vcount];



	cbDesc.StructureByteStride = 0;



	{

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	}



		KEY_PRESS_SURFACE_RIGHT,

	bool ret = tinyobj::LoadObj(

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//テクスチャ読み込み

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	if (FAILED(hr))



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	irData.pSysMem = &pIList[0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		D3D_DRIVER_TYPE_HARDWARE,

	for (int i = 0; i < 3; i++)

#include <iostream>



}

			{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	}*/

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



 */

		if (e.type == SDL_QUIT)

	UINT strides = sizeof(Vertex);

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	WORD* pIList = new WORD[icount];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vrData.pSysMem = &pVList[0];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

		delete[] pVList;

	SDL_Event e;

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

};

	SAFE_RELEASE(m_pVertexShader);

}
	ID3D11Texture2D* pBackBuffer;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

struct ConstantLight {

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pSwapChain,

	}

struct ConstantLight {

	if (!reader.ParseFromFile(inputfile, reader_config))

	auto& shapes = reader.GetShapes();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 projection;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	Release();

	scDesc.SampleDesc.Count = 1;

	while (SDL_PollEvent(&e) != 0)





		// Loop over faces(polygon)

		pLevels,





		SDL_RenderClear(ren);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



			index_offset += num_vertices;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4X4 world;

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 specular;          //反射(r,g,b)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

void CD3DTest::Release()

struct ConstantMatrixBuffer {

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.MiscFlags = 0;

	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyTexture(tex);



	//Key press surfaces constants

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilView);

			}

		exit(1);

	auto& attrib = reader.GetAttrib();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	std::string error;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}
	m_pSwapChain = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	XMFLOAT4 pos;               //座標(x,y,z)

	//ビューポート設定

			{

	{

		&scDesc,

		return hr;

	Release();

	ConstantLight    pntLight; //点光源

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		if (!reader.Error().empty())

	{

				indexlist.push_back(index);





	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vector<WORD> indexList;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);







				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				// access to vertex



	{



	std::string imagePath = "hello.bmp";

	dsDesc.Format = txDesc.Format;

		return hr;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return hr;



	SDL_DestroyRenderer(ren);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_SUBRESOURCE_DATA vrData;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_BUFFER_DESC ibDesc;



	scDesc.OutputWindow = hwnd;







	SAFE_RELEASE(m_pMatrixBuffer);



				WORD index = idx.vertex_index;

	if (!reader.Warning().empty())

	m_pVertexShader = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	Release();

	SAFE_RELEASE(m_pIndexBuffer);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



};

		&scDesc,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);


