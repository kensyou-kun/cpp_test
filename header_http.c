			for (size_t v = 0; v < fv; v++)

			{

	/*

		SDL_Delay(1000);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//深度ステンシルバッファ作成

	ConstantMatrixBuffer cmb;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	Release();

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	delete[] pVList;

	SDL_FreeSurface(bmp);

		{

	for (int i = 0; i < vcount; i++)

	m_pRenderTargetView = NULL;



	vrData.pSysMem = &pVList[0];

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

				vertex.push_back(vertex_tmp);

};



	}

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

		&error,

/*

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D11_BUFFER_DESC ibDesc;



				indexlist.push_back(index);



	m_pVertexShader = NULL;





	vbDesc.CPUAccessFlags = 0;

		pLevels,

			{

	delete[] pIList;



	vrData.pSysMem = &pVList[0];

	XMFLOAT4 pos;               //座標(x,y,z)

		{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		if (e.type == SDL_QUIT)

	{

	ibDesc.MiscFlags = 0;

		{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}

	std::vector<tinyobj::material_t> materials;

		&m_pSwapChain,

				tinyobj::real_t tx =

		exit(1);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



};

	m_pImmediateContext = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//頂点バッファ作成

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{



	}



	SDL_DestroyWindow(win);

	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_Viewport.MinDepth = 0.0f;

{

struct ConstantMaterial {



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemSlicePitch = 0;

	{

#endif

		&m_pImmediateContext);





		SDL_RenderCopy(ren, tex, NULL, NULL);

	ConstantMaterial material; //物体の質感

using std::cout; using std::endl;

}

	SAFE_RELEASE(m_pTexture);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	{





				break;

		return 1;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)

		pVList[i] = vertexlist[i];

		return hr;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#include <iostream>



		&scDesc,

	txDesc.ArraySize = 1;

	if (m_pImmediateContext)

		exit(1);



	if (m_pImmediateContext)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				break;

	/*

int SEGMENT = 36;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

}


	ConstantMaterial material; //物体の質感

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&scDesc,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		// Loop over faces(polygon)

	D3D11_BUFFER_DESC cbDesc;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



int main(int, char**)

				indexlist.push_back(index);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.MipLevels = 1;

	//Create Index

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		pVList[i] = vertexlist[i];



				WORD index = idx.vertex_index;

	{

	m_IndexCount = 0;

#define TINYOBJLOADER_IMPLEMENTATION



		return hr;



	}

		D3D11_SDK_VERSION,



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::vector<tinyobj::shape_t> shapes;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

void CD3DTest::Render()

	m_pRenderTargetView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_IndexCount = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		D3D11_SDK_VERSION,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//vector<WORD> index_t;

 * Lesson 1: Hello World!

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pRenderTargetView = NULL;

		{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

{

	XMFLOAT4 ambient;           //環境(r,g,b)

};

void CD3DTest::Render()

	m_IndexCount = 0;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pLightBuffer);

		//User presses a key

		KEY_PRESS_SURFACE_UP,

	{

 */

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			{

	m_pIndexBuffer = NULL;



		if (!reader.Error().empty())

	XMFLOAT4 specular;          //反射(r,g,b)



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

/*



		pIList[j] = indexList[j];

	vrData.pSysMem = &pVList[0];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DEFAULT,

		&level,





	float    farZ = 100.0f;

		// Loop over faces(polygon)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    fov = XMConvertToRadians(20.0f);

				indexlist.push_back(idx.vertex_index);

			// Loop over vertices in the face.

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

	m_pPixelShader = NULL;



				indexlist.push_back(index);

int main(int, char**)

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pLightBuffer = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

{

		if (!reader.Error().empty())

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





		if (!ret)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	tinyobj::ObjReaderConfig reader_config;

	{

	}

				tinyobj::real_t tx =

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	//定数バッファ作成

	SDL_Quit();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDevice = NULL;

}

	ibDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				break;

		&materials,

	if (FAILED(hr))

				// access to vertex

	bool ret = tinyobj::LoadObj(

};

	float    nearZ = 0.1f;



		1,

};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

struct ConstantMaterial {

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Event e;



	XMStoreFloat4(&clb.eyePos, eye);

	if (!reader.ParseFromFile(inputfile, reader_config))

 * Lesson 1: Hello World!

	}





		SDL_Delay(1000);

	if (FAILED(hr))





	//Create Index



		&m_pDevice,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_FreeSurface(bmp);

	D3D11_BUFFER_DESC vbDesc;

	if (m_pImmediateContext)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				WORD index = idx.vertex_index;

HRESULT CD3DTest::Create(HWND hwnd)

			}

			case SDLK_UP:

			switch (e.key.keysym.sym)

	std::vector<tinyobj::material_t> materials;





	m_Viewport.MinDepth = 0.0f;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	HRESULT              hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

			for (size_t v = 0; v < fv; v++)

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

		return hr;



		KEY_PRESS_SURFACE_LEFT,

	{

	m_pDepthStencilView = NULL;

			for (size_t v = 0; v < fv; v++)

	cbDesc.CPUAccessFlags = 0;

		return hr;

	Release();

{

	cbDesc.StructureByteStride = 0;





	std::string error;



	vbDesc.CPUAccessFlags = 0;



	ibDesc.StructureByteStride = 0;

		}



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

};

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pVertexBuffer = NULL;

struct ConstantMaterial {



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

struct ConstantMaterial {

		delete[] pIList;

		{

};

	enum KeyPressSurfaces

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	float    farZ = 100.0f;

	m_pVertexBuffer = NULL;

		//User presses a key

	bool ret = tinyobj::LoadObj(

	tinyobj::attrib_t attrib;

			{

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    nearZ = 0.1f;

		return hr;

	m_IndexCount = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.SysMemSlicePitch = 0;

	scDesc.SampleDesc.Quality = 0;

	ibDesc.MiscFlags = 0;

#endif

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//頂点バッファ作成



				break;

		if (!reader.Error().empty())

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

				indexlist.push_back(index);

	if (!reader.ParseFromFile(inputfile, reader_config))

	//定数バッファ作成

	if (m_pImmediateContext)

	std::string imagePath = "hello.bmp";

				break;

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 diffuse;           //拡散(r,g,b)





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	dsDesc.Format = txDesc.Format;

	auto& materials = reader.GetMaterials();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	tinyobj::ObjReaderConfig reader_config;

		return hr;





	/*



	m_Viewport.TopLeftX = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	delete[] pVList;

	m_Viewport.MaxDepth = 1.0f;

#include "DirectXManager.h"



	//深度ステンシルバッファ作成

	return;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	::GetClientRect(hwnd, &rect);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		SDL_RenderPresent(ren);

	{

	vrData.SysMemPitch = 0;

		return hr;

	std::string inputfile = "test.obj";

	m_Viewport.MinDepth = 0.0f;

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	{





	vector<Vertex> vertexlist;

		{

				WORD index = idx.vertex_index;

	}

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				indexlist.push_back(index);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{

			{



		&error,

	vector<Vertex> vertexlist;

	UINT strides = sizeof(Vertex);



	m_pSwapChain = NULL;

	D3D_FEATURE_LEVEL level;

	std::string error;

		&m_pSwapChain,



	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC ibDesc;

			for (size_t v = 0; v < fv; v++)

	};

	SAFE_RELEASE(m_pLightBuffer);

	std::string imagePath = "hello.bmp";

		return hr;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



}

	cbDesc.StructureByteStride = 0;

#ifdef _DEBUG

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//Key press surfaces constants

	vbDesc.StructureByteStride = 0;

		return hr;

{



};



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		{









	txDesc.SampleDesc.Count = 1;

			switch (e.key.keysym.sym)

	dsDesc.Texture2D.MipSlice = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//Vertex* pVList = new Vertex[vcount];

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

			exit(1);







	delete[] pIList;

	float    fov = XMConvertToRadians(20.0f);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

		SDL_RenderPresent(ren);

{

		{

}



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.TopLeftX = 0;



	m_Viewport.TopLeftY = 0;

	for (int i = 0; i < 3; i++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

#include <iostream>



	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.Warning().empty())

			default:

	m_pPixelShader = NULL;

	irData.pSysMem = &pIList[0];

#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

	vrData.SysMemPitch = 0;

	scDesc.BufferDesc.Height = rect.Height();

	for (int i = 0; i < 3; i++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//ビューポート設定

{



		KEY_PRESS_SURFACE_TOTAL

		delete[] pIList;

			break;



	Release();

			index_offset += num_vertices;

	//定数バッファ作成

	m_pDepthStencilTexture = NULL;



using std::cout; using std::endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Width = rect.Width();

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTexture);

		pVList[i] = vertexlist[i];



	//Create Index

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	ConstantLightBuffer clb;





	for (size_t s = 0; s < shapes.size(); s++)

	ConstantLight    pntLight; //点光源

			{



			}

				// access to vertex

	tinyobj::ObjReader reader;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			default:

}

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (!reader.ParseFromFile(inputfile, reader_config))





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//vector<Vertex> vertex_t;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	vbDesc.CPUAccessFlags = 0;



CD3DTest::CD3DTest()

		cout << "SDL_INIT_ERROR" << endl;

				break;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D11_SUBRESOURCE_DATA irData;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (!ret)

		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



void CD3DTest::Release()

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		&m_pDevice,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4X4 world;

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}

		return hr;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 */

	m_Viewport.TopLeftY = 0;



		size_t index_offset = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

{

	std::string error;

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_LEFT:

	//深度ステンシルバッファ作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pMatrixBuffer);

#include <SDL.h>

	ibDesc.StructureByteStride = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	delete[] pIList;

	tinyobj::ObjReaderConfig reader_config;

			//Select surfaces based on key press



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];







				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





		D3D11_SDK_VERSION,



	pBackBuffer->Release();



	if (!reader.Warning().empty())

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_DestroyWindow(win);



	/*

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pPixelShader);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_Viewport.MaxDepth = 1.0f;



				WORD index = idx.vertex_index;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;



		delete[] pVList;

				WORD index = idx.vertex_index;

	std::string inputfile = "test.obj";

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		//User requests quit





		SDL_Delay(1000);

	WORD* pIList = new WORD[icount];

};

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.TopLeftY = 0;



CD3DTest::~CD3DTest()

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::vector<tinyobj::material_t> materials;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;

			case SDLK_RIGHT:

int main(int, char**)

	if (FAILED(hr))

	}

	//頂点バッファ作成

#ifdef _DEBUG

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//Key press surfaces constants

#include <SDL.h>

			default:

	//ピクセルシェーダー生成

	irData.SysMemSlicePitch = 0;



		&materials,

				vertex.push_back(vertex_tmp);

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//定数バッファ作成





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderPresent(ren);

	if (m_pImmediateContext)



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	txDesc.ArraySize = 1;

	cbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pVList;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	pBackBuffer->Release();

	ConstantLight    pntLight; //点光源

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				WORD index = idx.vertex_index;

	std::string inputfile = "test.obj";

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

};

	//深度ステンシルバッファ作成

	ConstantMatrixBuffer cmb;

			case SDLK_LEFT:



	vector<WORD> indexList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pInputLayout);

			for (size_t v = 0; v < fv; v++)

{

	enum KeyPressSurfaces

		return hr;

	txDesc.SampleDesc.Quality = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;  // インデントのオフセット

	dsDesc.Format = txDesc.Format;



	ConstantMatrixBuffer cmb;

};

	m_pSampler = NULL;

	txDesc.SampleDesc.Count = 1;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		pIList[j] = indexList[j];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	/*

#include "DirectXManager.h"

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += fv;

	SAFE_RELEASE(m_pPixelShader);

	m_pSwapChain = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pTextureView = NULL;

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			case SDLK_UP:

	SAFE_RELEASE(m_pPixelShader);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

int SEGMENT = 36;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	//Vertex* pVList = new Vertex[vcount];



	tinyobj::attrib_t attrib;

		{

}

	SAFE_RELEASE(m_pDepthStencilView);



		&m_pSwapChain,

			{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pTexture);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pSampler);

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

			case SDLK_LEFT:

				break;

	{



		return hr;

			case SDLK_DOWN:

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,



	for (int i = 0; i < 3; i++)

	auto& attrib = reader.GetAttrib();

	for (const auto& shape : shapes)

}

	//vector<Vertex> vertex_t;



	txDesc.Usage = D3D11_USAGE_DEFAULT;



	tinyobj::attrib_t attrib;



	delete[] pIList;

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

	::ZeroMemory(&scDesc, sizeof(scDesc));

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.ArraySize = 1;

	}



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.CPUAccessFlags = 0;

		R"(cube.obj)");

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

			index_offset += fv;

	if (!reader.Warning().empty())



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilTexture);



	{

	//頂点レイアウト作成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pVertexShader);

{



using std::cout; using std::endl;

	vrData.pSysMem = &pVList[0];

			//Select surfaces based on key press

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pSwapChain->Present(0, 0);



	//テクスチャ読み込み

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}



	HRESULT              hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pSwapChain);

			index_offset += fv;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

	scDesc.SampleDesc.Count = 1;



	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	};

				break;

	m_Viewport.MaxDepth = 1.0f;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string inputfile = "test.obj";

	//ピクセルシェーダー生成

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;





		KEY_PRESS_SURFACE_TOTAL

	{

				break;

			// Loop over vertices in the face.

	scDesc.BufferCount = 1;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	//Clean up our objects and quit

struct ConstantLight {

	UINT flags = 0;

	}

	SDL_FreeSurface(bmp);

		}



	txDesc.Usage = D3D11_USAGE_DEFAULT;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		{

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int i = 0; i < 3; i++)

	scDesc.SampleDesc.Count = 1;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pSwapChain = NULL;

	}

	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D_FEATURE_LEVEL level;

	pBackBuffer->Release();





	if (FAILED(hr))





	m_pDepthStencilView = NULL;

struct ConstantMaterial {



{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vrData.pSysMem = &pVList[0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

		if (e.type == SDL_QUIT)

#include <iostream>

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.SampleDesc.Quality = 0;

	bool ret = tinyobj::LoadObj(



	delete[] pVList;

#include <SDL.h>

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::~CD3DTest()

	//頂点レイアウト作成



	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		m_pImmediateContext->ClearState();

	SDL_DestroyTexture(tex);

		&materials,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_BUFFER_DESC cbDesc;

	LoadObj(vertexlist, indexList);

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	//頂点レイアウト作成

{



			case SDLK_UP:



	SDL_DestroyWindow(win);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		//User requests quit



		}



	hr = D3D11CreateDeviceAndSwapChain(NULL,

int SEGMENT = 36;

				WORD index = idx.vertex_index;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	CRect                rect;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pIndexBuffer = NULL;

	vrData.SysMemSlicePitch = 0;

{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			case SDLK_UP:

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

				break;

	D3D11_SUBRESOURCE_DATA irData;



	//テクスチャ読み込み

			exit(1);

	ID3D11Texture2D* pBackBuffer;

	for (int j = 0; j < icount; j++)



	delete[] pIList;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	UINT offsets = 0;





 */

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

		{

	txDesc.MipLevels = 1;

	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		delete[] pVList;

struct ConstantMaterial {

			exit(1);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	auto& materials = reader.GetMaterials();

	scDesc.OutputWindow = hwnd;

{

	XMFLOAT4         ambient;  //環境光(r,g,b)





	SAFE_RELEASE(m_pTextureView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.StructureByteStride = 0;

	}

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.SampleDesc.Quality = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4X4 projection;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	return;



	std::string imagePath = "hello.bmp";

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//Create Index

	cbDesc.CPUAccessFlags = 0;

{

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::vector<tinyobj::shape_t> shapes;

	return;

		pVList[i] = vertexlist[i];



			case SDLK_RIGHT:

}

	{

		size_t index_offset = 0;

	dsDesc.Format = txDesc.Format;

	XMFLOAT4X4 projection;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	LoadObj(vertexlist, indexList);

	scDesc.BufferDesc.Width = rect.Width();

	m_pMatrixBuffer = NULL;



	SDL_Quit();

	}



		1,

			case SDLK_RIGHT:

	for (int i = 0; i < 3; i++)

	pBackBuffer->Release();

	scDesc.BufferDesc.Width = rect.Width();

	vrData.pSysMem = &pVList[0];

	txDesc.MipLevels = 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

	UINT offsets = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

#endif

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD   icount = indexList.size();

	delete[] pVList;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Quit();

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	D3D11_BUFFER_DESC ibDesc;

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	m_pInputLayout = NULL;

				tinyobj::real_t ty =

	{



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pMatrixBuffer = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyWindow(win);

	std::vector<tinyobj::shape_t> shapes;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

}

	Vertex* pVList = new Vertex[vcount];

}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

CD3DTest::~CD3DTest()

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		size_t index_offset = 0;  // インデントのオフセット

	tinyobj::ObjReader reader;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pIndexBuffer);



			case SDLK_RIGHT:

			for (size_t v = 0; v < num_vertices; v++)

#endif



	SAFE_RELEASE(m_pRenderTargetView);

	UINT offsets = 0;

			case SDLK_UP:

	m_IndexCount = 0;

	irData.pSysMem = &pIList[0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Quit();



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

		size_t index_offset = 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	m_VertexCount = vcount;

		return hr;







			exit(1);

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



}


	if (!reader.ParseFromFile(inputfile, reader_config))

	ID3D11Texture2D* pBackBuffer;



		KEY_PRESS_SURFACE_TOTAL

		}

	SAFE_RELEASE(m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	m_pTexture = NULL;

				break;





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

};

	if (FAILED(hr))

		flags,



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		KEY_PRESS_SURFACE_DOWN,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	vector<Vertex> vertexlist;

	std::string imagePath = "hello.bmp";

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

	enum KeyPressSurfaces

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pTexture);

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pImmediateContext);

	for (const auto& shape : shapes)

				tinyobj::real_t ty =

	}



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	// Loop over shapes

		&level,

/*

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.MipLevels = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderClear(ren);

	scDesc.OutputWindow = hwnd;

	XMFLOAT4 ambient;           //環境(r,g,b)

using std::cout; using std::endl;

	if (FAILED(hr))

	vector<WORD> indexList;

	m_pIndexBuffer = NULL;





	m_pTextureView = NULL;

		&m_pSwapChain,

				// access to vertex

	if (FAILED(hr))

	delete[] pVList;

	::GetClientRect(hwnd, &rect);

{

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		}

			exit(1);

	for (int i = 0; i < 3; i++)

	m_pPixelShader = NULL;

		KEY_PRESS_SURFACE_DOWN,

	delete[] pVList;

	m_VertexCount = vcount;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	scDesc.SampleDesc.Quality = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

#include <iostream>

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMFLOAT4 pos;               //座標(x,y,z)

#include <iostream>

	vrData.SysMemSlicePitch = 0;

				break;

		&m_pDevice,

	m_pPixelShader = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.CPUAccessFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;



		pLevels,

		SDL_Delay(1000);



	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

		D3D11_SDK_VERSION,





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pVertexShader);





#include "DirectXManager.h"

		&level,

	D3D11_SUBRESOURCE_DATA irData;

		// Loop over faces(polygon)

	dsDesc.Texture2D.MipSlice = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&m_pDevice,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	std::string inputfile = "test.obj";

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	ConstantLightBuffer clb;

	XMFLOAT4X4 projection;

		pLevels,

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pDevice = NULL;

		delete[] pIList;

		{

	int     vcount = vertexlist.size();



	pBackBuffer->Release();

	{

	SAFE_RELEASE(m_pDepthStencilView);

struct ConstantMatrixBuffer {

	if (FAILED(hr))

			index_offset += num_vertices;

	scDesc.BufferDesc.Width = rect.Width();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyWindow(win);



	D3D11_SUBRESOURCE_DATA irData;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (m_pImmediateContext)



	m_Viewport.MaxDepth = 1.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	for (int i = 0; i < vcount; i++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	SAFE_RELEASE(m_pIndexBuffer);

	m_Viewport.TopLeftX = 0;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	}

	m_VertexCount = 0;

		{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		return hr;

	{

#endif

{

				// access to vertex



				break;



		delete[] pVList;

int main(int, char**)



	XMFLOAT4X4 view;

	m_pVertexShader = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pVertexShader);

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;



	//頂点シェーダー生成

	SAFE_RELEASE(m_pDevice);

	vbDesc.MiscFlags = 0;



		SDL_RenderPresent(ren);

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyTexture(tex);

	//Vertex* pVList = new Vertex[vcount];

	m_pDepthStencilView = NULL;

		return hr;

	// Loop over shapes

	{



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4X4 world;

	if (FAILED(hr))

struct ConstantMaterial {



			case SDLK_LEFT:

}
		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	//ビューポート設定

	{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pTextureView = NULL;



	txDesc.ArraySize = 1;

#include <iostream>



		pVList[i] = vertexlist[i];

		}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	scDesc.SampleDesc.Count = 1;



	{

	txDesc.ArraySize = 1;

struct ConstantLight {

	vrData.SysMemSlicePitch = 0;

		SDL_RenderPresent(ren);

	irData.pSysMem = &pIList[0];

	//頂点バッファ作成

	return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	tinyobj::ObjReaderConfig reader_config;





	if (FAILED(hr))

			case SDLK_LEFT:

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.OutputWindow = hwnd;



	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		{

int main(int, char**)

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

				indexlist.push_back(index);

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

		//User requests quit

			// Loop over vertices in the face.

		}

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		delete[] pIList;

	//頂点バッファ作成

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

		&m_pSwapChain,





		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感

		R"(cube.obj)");



	UINT offsets = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pIndexBuffer = NULL;

	txDesc.ArraySize = 1;







		return 1;

	HRESULT              hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

}
			case SDLK_UP:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		//User requests quit

	m_pDepthStencilView = NULL;

	/*

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pSwapChain,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pTexture);

 * Lesson 1: Hello World!

	D3D_FEATURE_LEVEL level;

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferDesc.Width = rect.Width();

	//Vertex* pVList = new Vertex[vcount];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	::GetClientRect(hwnd, &rect);

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

CD3DTest::CD3DTest()

#include <iostream>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext = NULL;

		exit(1);





	m_VertexCount = vcount;

	txDesc.Width = rect.Width();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Quit();

	for (int i = 0; i < 3; i++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pInputLayout);



	D3D11_TEXTURE2D_DESC txDesc;

	for (int j = 0; j < icount; j++)

}





		&error,

	cbDesc.MiscFlags = 0;

			index_offset += fv;

			case SDLK_UP:



	}

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;



	pBackBuffer->Release();

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	if (FAILED(hr))



	m_Viewport.MaxDepth = 1.0f;

		SDL_RenderPresent(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.CPUAccessFlags = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}



CD3DTest::~CD3DTest()

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pLightBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SAFE_RELEASE(m_pSwapChain);

	for (int i = 0; i < 3; i++)

		delete[] pIList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_IndexCount = icount;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 ambient;           //環境(r,g,b)



	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

		return hr;

		exit(1);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	CRect                rect;



		&scDesc,

				break;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

};

{



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

		{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMStoreFloat4(&clb.eyePos, eye);

		}



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	float    fov = XMConvertToRadians(20.0f);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	//vector<Vertex> vertex_t;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



	for (int j = 0; j < icount; j++)



	std::vector<tinyobj::material_t> materials;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	{

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t ty =

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pTexture = NULL;

	SDL_DestroyWindow(win);



				tinyobj::real_t ty =

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	/*

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	m_pLightBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Width = rect.Width();

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Vertex* pVList = new Vertex[vcount];



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pIndexBuffer = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	auto& shapes = reader.GetShapes();

};

	}

using std::cout; using std::endl;

	D3D11_TEXTURE2D_DESC txDesc;

 */

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderClear(ren);

int main(int, char**)

};

	for (int i = 0; i < 3; i++)



	//Clean up our objects and quit

	tinyobj::ObjReaderConfig reader_config;

	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

			{



	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	if (m_pImmediateContext)

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			{

	if (!reader.ParseFromFile(inputfile, reader_config))

HRESULT CD3DTest::Create(HWND hwnd)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

	}

				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	WORD* pIList = new WORD[icount];



	dsDesc.Format = txDesc.Format;

	{

	dsDesc.Format = txDesc.Format;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	for (int i = 0; i < vcount; i++)

using std::cout; using std::endl;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

 */

	XMFLOAT4X4 view;

struct ConstantMatrixBuffer {

			{

	//ビューポート設定

	}



#include <iostream>

	D3D11_BUFFER_DESC vbDesc;

			}



	//vector<Vertex> vertex_t;

	while (SDL_PollEvent(&e) != 0)

#ifdef _DEBUG

	irData.SysMemSlicePitch = 0;

{

	//深度ステンシルバッファ作成

	tinyobj::ObjReaderConfig reader_config;



	/*



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}

{

	float    farZ = 100.0f;

		D3D11_SDK_VERSION,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		D3D11_SDK_VERSION,

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))



	{

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;



	D3D11_SUBRESOURCE_DATA irData;

 */

	std::string inputfile = "test.obj";

		pIList[j] = indexList[j];

	txDesc.ArraySize = 1;

	cbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



void CD3DTest::Render()

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	for (size_t s = 0; s < shapes.size(); s++)



	Release();

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;

	m_pTexture = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





			{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_FreeSurface(suf);

	tinyobj::ObjReaderConfig reader_config;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vector<WORD> indexList;

/*

	enum KeyPressSurfaces



int main(int, char**)

	irData.SysMemSlicePitch = 0;



				WORD index = idx.vertex_index;

	scDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD   icount = indexList.size();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemSlicePitch = 0;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//vector<Vertex> vertex_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	//深度ステンシルバッファ作成

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

		&level,

	//頂点バッファ作成

	{

#include <SDL.h>

	vbDesc.CPUAccessFlags = 0;

	txDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);



};



	std::string error;

	{

	SDL_Quit();



		pLevels,

	// Loop over shapes

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}

	//vector<Vertex> vertex_t;



	float    fov = XMConvertToRadians(20.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		{

	m_IndexCount = icount;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pImmediateContext);



	std::string imagePath = "hello.bmp";

		&materials,

	D3D11_SUBRESOURCE_DATA irData;

				vertex.push_back(vertex_tmp);

};

	{

	SAFE_RELEASE(m_pSwapChain);



	D3D11_SAMPLER_DESC smpDesc;

	m_pSampler = NULL;

	SDL_DestroyTexture(tex);

}
	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	Release();

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pVertexBuffer);

	m_VertexCount = 0;

	SAFE_RELEASE(m_pVertexShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	D3D11_BUFFER_DESC ibDesc;

struct ConstantMatrixBuffer {



	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!error.empty())

	std::string inputfile = "test.obj";

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <SDL.h>

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



			default:

	pBackBuffer->Release();

	}

			switch (e.key.keysym.sym)

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&m_pImmediateContext);





}

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	SDL_DestroyTexture(tex);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

		&materials,

		{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

int main(int, char**)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pInputLayout = NULL;





	auto& shapes = reader.GetShapes();

	}

	m_pDepthStencilView = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

				break;

		return hr;

	// Loop over shapes

	//頂点バッファ作成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4X4 world;



		KEY_PRESS_SURFACE_LEFT,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//定数バッファ作成

	SAFE_RELEASE(m_pPixelShader);

		}

}
		KEY_PRESS_SURFACE_DOWN,

		&level,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += fv;



		if (!reader.Error().empty())





	m_pPixelShader = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	Vertex* pVList = new Vertex[vcount];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pInputLayout);

		&m_pSwapChain,

	SDL_DestroyTexture(tex);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

	SAFE_RELEASE(m_pIndexBuffer);

	//Create Index

	cbDesc.MiscFlags = 0;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pSampler = NULL;

#endif



		SDL_RenderPresent(ren);

		return 1;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//ビューポート設定



				break;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	UINT offsets = 0;

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

			{

		&materials,





		if (e.type == SDL_QUIT)

				break;

	m_Viewport.TopLeftX = 0;

int main(int, char**)

		}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

	SDL_DestroyRenderer(ren);

		{

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_pMatrixBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



};

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

		KEY_PRESS_SURFACE_UP,

				break;

	m_Viewport.TopLeftX = 0;



		&attrib,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		else if (e.type == SDL_KEYDOWN)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.CPUAccessFlags = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.SampleDesc.Count = 1;

			index_offset += fv;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				WORD index = idx.vertex_index;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

int main(int, char**)

		&shapes,

		pIList[j] = indexList[j];

				break;

		KEY_PRESS_SURFACE_UP,



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vrData.SysMemSlicePitch = 0;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&attrib,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pTexture = NULL;



	}

	if (!error.empty())

int main(int, char**)

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 view;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&scDesc,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





				break;

	{

	m_pTexture = NULL;

{

	for (int i = 0; i < 3; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyRenderer(ren);

		&scDesc,

	SDL_DestroyTexture(tex);





};



		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pTexture);

	m_pTexture = NULL;

	m_pPixelShader = NULL;

		}





	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pInputLayout);

	}

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&error,

	ibDesc.MiscFlags = 0;

		&error,

		{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	Release();

	{

 * Lesson 1: Hello World!



{

	tinyobj::attrib_t attrib;

	{



	{

	for (int i = 0; i < 3; i++)







				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_FreeSurface(bmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pDepthStencilView);



	SDL_FreeSurface(suf);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC vbDesc;

		m_pImmediateContext->ClearState();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				break;

	//Vertex* pVList = new Vertex[vcount];

	m_pSampler = NULL;



	SAFE_RELEASE(m_pTexture);

};

#include <iostream>

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pTexture);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{









				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return 0;

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				break;

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);



	}

	Release();

	m_pImmediateContext = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

}

			// Loop over vertices in the face.

	{

	SAFE_RELEASE(m_pSampler);

struct ConstantMatrixBuffer {

		m_pImmediateContext->ClearState();



	scDesc.OutputWindow = hwnd;

	::GetClientRect(hwnd, &rect);

			default:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{







		KEY_PRESS_SURFACE_LEFT,



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pTexture = NULL;



	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);



		&scDesc,

		//User presses a key



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	std::string error;

		SDL_RenderPresent(ren);

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&scDesc,

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	WORD   icount = indexList.size();

		KEY_PRESS_SURFACE_TOTAL

}

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))









	D3D11_TEXTURE2D_DESC txDesc;

				WORD index = idx.vertex_index;

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

		NULL,

	auto& attrib = reader.GetAttrib();

	CRect                rect;

	m_pInputLayout = NULL;

	m_Viewport.MinDepth = 0.0f;

	txDesc.Height = rect.Height();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_RIGHT:

	m_pDevice = NULL;

	txDesc.SampleDesc.Quality = 0;

	::GetClientRect(hwnd, &rect);

	m_pSwapChain = NULL;

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		return hr;



	if (FAILED(hr))

		}

	SAFE_RELEASE(m_pImmediateContext);




