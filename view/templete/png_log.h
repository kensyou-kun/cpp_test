	m_Viewport.Height = (FLOAT)rect.Height();

	ibDesc.CPUAccessFlags = 0;



#include <iostream>

	SAFE_RELEASE(m_pTexture);

			case SDLK_DOWN:



		&m_pDevice,

				// access to vertex

			{

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		pIList[j] = indexList[j];

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	{

	//頂点レイアウト作成

	if (!error.empty())

}

		D3D11_SDK_VERSION,

	std::vector<tinyobj::material_t> materials;



	SDL_DestroyTexture(tex);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	delete[] pIList;

#ifdef _DEBUG

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float    nearZ = 0.1f;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	//ピクセルシェーダー生成

	SDL_DestroyWindow(win);

struct ConstantLight {

	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;

	std::string inputfile = "test.obj";



	delete[] pVList;



	}*/

			//Select surfaces based on key press

		D3D11_SDK_VERSION,

{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	LoadObj(vertexlist, indexList);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		//User presses a key

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		if (!ret)

	//ビューポート設定

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	m_Viewport.MaxDepth = 1.0f;





	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

};

	vector<Vertex> vertexlist;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D_FEATURE_LEVEL level;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pIndexBuffer);





#include "DirectXManager.h"

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			switch (e.key.keysym.sym)

	}



	return 0;

	m_pDepthStencilTexture = NULL;

	HRESULT              hr;

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4X4 view;



	m_Viewport.MinDepth = 0.0f;

		SDL_Delay(1000);

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	txDesc.MipLevels = 1;





	}

				break;

	//ピクセルシェーダー生成

	scDesc.SampleDesc.Quality = 0;

				break;





	auto& materials = reader.GetMaterials();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Width = rect.Width();



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

HRESULT CD3DTest::Create(HWND hwnd)



	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_SAMPLER_DESC smpDesc;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

#define TINYOBJLOADER_IMPLEMENTATION

	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderClear(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

		size_t index_offset = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	}



	m_pSampler = NULL;

	WORD* pIList = new WORD[icount];

	vrData.pSysMem = &pVList[0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	bool ret = tinyobj::LoadObj(

	if (!reader.Warning().empty())

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pLightBuffer);



	D3D11_BUFFER_DESC ibDesc;

			// Loop over vertices in the face.

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pSwapChain->Present(0, 0);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{

		else if (e.type == SDL_KEYDOWN)



	float    farZ = 100.0f;

	SDL_Quit();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Event e;



	vector<Vertex> vertexlist;

		return hr;

CD3DTest::CD3DTest()

	m_pDevice = NULL;

	}

		SDL_Delay(1000);

			{

	//頂点シェーダー生成



		cout << "SDL_INIT_ERROR" << endl;

	//頂点レイアウト作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	reader_config.mtl_search_path = "./"; // Path to material files

		//User presses a key

		KEY_PRESS_SURFACE_DEFAULT,

	{



	D3D11_BUFFER_DESC cbDesc;

	for (const auto& shape : shapes)

	tinyobj::ObjReader reader;







#endif

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	float    fov = XMConvertToRadians(20.0f);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pMatrixBuffer = NULL;

	//定数バッファ作成

}



#include <SDL.h>

	scDesc.Windowed = TRUE;

				// access to vertex

};

	float    fov = XMConvertToRadians(20.0f);

}

		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		SDL_RenderPresent(ren);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pIList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	irData.pSysMem = &pIList[0];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	{

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.eyePos, eye);



	};



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





			for (size_t v = 0; v < num_vertices; v++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT offsets = 0;



void CD3DTest::Render()



	if (FAILED(hr))

				break;



	txDesc.Width = rect.Width();



				tinyobj::real_t ty =

	m_Angle += XMConvertToRadians(1.0f);

			switch (e.key.keysym.sym)



	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();



{

	}*/





		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))



	while (SDL_PollEvent(&e) != 0)

{

	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		return hr;

	{

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

		SDL_Delay(1000);





	//vector<WORD> index_t;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	cbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)



	SAFE_RELEASE(m_pTexture);

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SDL_Quit();

			index_offset += num_vertices;

}
				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vector<WORD> indexList;

	float    nearZ = 0.1f;



	irData.SysMemPitch = 0;



				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}

	pBackBuffer->Release();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_BUFFER_DESC ibDesc;

	std::string imagePath = "hello.bmp";

		R"(cube.obj)");





		SDL_RenderClear(ren);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		size_t index_offset = 0;

	{

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pPixelShader);

		&error,

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_VertexCount = 0;

		&level,

		&m_pDevice,

#include <iostream>

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

				break;

	m_pIndexBuffer = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

			switch (e.key.keysym.sym)

	WORD* pIList = new WORD[icount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		else if (e.type == SDL_KEYDOWN)

		{

	SAFE_RELEASE(m_pSampler);

		SDL_RenderClear(ren);

			case SDLK_LEFT:

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//ピクセルシェーダー生成

		if (!ret)

	m_pDevice = NULL;

			for (size_t v = 0; v < num_vertices; v++)

	return 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	pBackBuffer->Release();



		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		exit(1);

	delete[] pIList;



	WORD   icount = indexList.size();



	int     vcount = vertexlist.size();

using std::cout; using std::endl;

	D3D_FEATURE_LEVEL level;

	if (!error.empty())

		return hr;



	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	//Key press surfaces constants

			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.MipLevels = 1;

	//頂点バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	for (int i = 0; i < 3; i++)



			case SDLK_DOWN:

	::GetClientRect(hwnd, &rect);

	HRESULT              hr;





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

			break;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	Vertex* pVList = new Vertex[vcount];

			default:

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;





				WORD index = idx.vertex_index;

		SDL_Delay(1000);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{

				tinyobj::real_t ty =



	m_pLightBuffer = NULL;

		pLevels,

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	Release();



		KEY_PRESS_SURFACE_LEFT,



	// Loop over shapes

	for (int i = 0; i < 3; i++)

	}

	vrData.pSysMem = &pVList[0];

}

		KEY_PRESS_SURFACE_DOWN,

#include <SDL.h>

	if (FAILED(hr))

		&materials,

	}

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(idx.vertex_index);

	//vector<WORD> index_t;

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_DOWN:



#include <SDL.h>

};

	m_pSampler = NULL;

	cbDesc.CPUAccessFlags = 0;

	m_pTextureView = NULL;



	m_pVertexShader = NULL;

		return hr;

int main(int, char**)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pDepthStencilTexture);

HRESULT CD3DTest::Create(HWND hwnd)

	if (!reader.Warning().empty())

	auto& materials = reader.GetMaterials();

};

		NULL,

	SDL_Event e;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	if (FAILED(hr))

	irData.SysMemPitch = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.Width = rect.Width();

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4X4 world;





	//頂点バッファ作成

	cbDesc.MiscFlags = 0;

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

/*

	//深度ステンシルバッファ作成

		{

};



		KEY_PRESS_SURFACE_DEFAULT,

	{

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			break;

int SEGMENT = 36;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	//Create Index



		SDL_Delay(1000);

};

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		//User presses a key

	{



	SAFE_RELEASE(m_pPixelShader);



		delete[] pVList;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			exit(1);

		}



	std::string imagePath = "hello.bmp";

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 * Lesson 1: Hello World!



	SAFE_RELEASE(m_pIndexBuffer);

		{

	//Key press surfaces constants





		SDL_RenderCopy(ren, tex, NULL, NULL);

		else if (e.type == SDL_KEYDOWN)

			switch (e.key.keysym.sym)

		return hr;

			exit(1);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pVertexShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				WORD index = idx.vertex_index;



	return 0;

		//User requests quit

		return hr;

	std::string imagePath = "hello.bmp";



	ibDesc.StructureByteStride = 0;

		return hr;

	if (FAILED(hr))



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantLightBuffer clb;

	ConstantLight    pntLight; //点光源

#include <iostream>

	m_pVertexShader = NULL;

	SDL_Quit();

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.MinDepth = 0.0f;

	//深度ステンシルバッファ作成



	auto& attrib = reader.GetAttrib();

void CD3DTest::Render()

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	float    farZ = 100.0f;

		cout << "SDL_INIT_ERROR" << endl;



	if (m_pImmediateContext)

	txDesc.Height = rect.Height();

			switch (e.key.keysym.sym)

	scDesc.OutputWindow = hwnd;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_Event e;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);







	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	return;

	cbDesc.StructureByteStride = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



struct ConstantMaterial {

	ibDesc.StructureByteStride = 0;





			index_offset += num_vertices;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

struct ConstantMaterial {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	scDesc.Windowed = TRUE;

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

		return hr;

			break;





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				break;



		}

	ZeroMemory(&txDesc, sizeof(txDesc));

			int num_vertices = shape.mesh.num_face_vertices[f];

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.eyePos, eye);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	float    nearZ = 0.1f;

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pTexture);

	while (SDL_PollEvent(&e) != 0)

		&m_pImmediateContext);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::string error;

}

	}

	XMFLOAT4X4 projection;

	txDesc.SampleDesc.Count = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

			break;

	m_pImmediateContext = NULL;



	{

	m_pPixelShader = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderClear(ren);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	float    farZ = 100.0f;

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.MiscFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		cout << "SDL_INIT_ERROR" << endl;

	//vector<Vertex> vertex_t;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pLightBuffer);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& attrib = reader.GetAttrib();

	m_pTexture = NULL;



	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pSwapChain);

	std::string inputfile = "test.obj";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLight    pntLight; //点光源

	for (int i = 0; i < vcount; i++)

	pBackBuffer->Release();

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	Release();



		m_pImmediateContext->ClearState();

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;

		return 1;

	m_pVertexBuffer = NULL;

struct ConstantLight {





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	cbDesc.CPUAccessFlags = 0;



}






				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_Delay(1000);

	float    fov = XMConvertToRadians(20.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//頂点シェーダー生成

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	}*/

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pIndexBuffer = NULL;

{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





		&attrib,

	SDL_DestroyRenderer(ren);

	//テクスチャ読み込み

	//First we need to start up SDL, and make sure it went ok

		&attrib,

	tinyobj::ObjReaderConfig reader_config;

	txDesc.SampleDesc.Count = 1;

	UINT offsets = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	XMFLOAT4X4 projection;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

			for (size_t v = 0; v < fv; v++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4X4 world;

		&m_pDevice,



}

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vrData.pSysMem = &pVList[0];

	txDesc.SampleDesc.Count = 1;

	m_pMatrixBuffer = NULL;

 * Lesson 1: Hello World!

	D3D11_SUBRESOURCE_DATA irData;



	//頂点バッファ作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

/*

	m_pSwapChain = NULL;

	txDesc.MiscFlags = 0;

}
				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{

	tinyobj::ObjReaderConfig reader_config;



		&m_pDevice,



		&scDesc,

		&m_pSwapChain,

	D3D11_BUFFER_DESC ibDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

 */





		//User presses a key

	{

		flags,





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		delete[] pIList;

		return hr;

	}

	/*



	{

				WORD index = idx.vertex_index;

	D3D_FEATURE_LEVEL level;

		&m_pSwapChain,

			break;





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		}

				break;

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	float    nearZ = 0.1f;

{

	{

				// access to vertex

			case SDLK_LEFT:

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			}



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	SDL_FreeSurface(suf);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

}

	//テクスチャ読み込み

CD3DTest::~CD3DTest()

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				vertex.push_back(vertex_tmp);

	scDesc.BufferDesc.Height = rect.Height();

 */

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	int     vcount = vertexlist.size();

#include <SDL.h>

		else if (e.type == SDL_KEYDOWN)

}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				// access to vertex



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_BUFFER_DESC cbDesc;



};

		{

		NULL,

	{

	m_VertexCount = vcount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



struct ConstantMaterial {

	}

{



			for (size_t v = 0; v < fv; v++)

	tinyobj::ObjReader reader;

		flags,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{

		return hr;

{



	if (FAILED(hr))

		&attrib,

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantLightBuffer {

		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::ObjReader reader;

	m_pTextureView = NULL;

		return hr;

	m_VertexCount = 0;

	{

struct ConstantLightBuffer {

	SDL_Quit();

			exit(1);

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	hr = D3D11CreateDeviceAndSwapChain(NULL,







	SAFE_RELEASE(m_pSampler);

		{

	txDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_DEFAULT,

	}



	{

			index_offset += fv;

struct ConstantLightBuffer {

#include "DirectXManager.h"

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.Height = rect.Height();





		SDL_RenderPresent(ren);

	}

	// Loop over shapes

{

	float    farZ = 100.0f;

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_DestroyTexture(tex);





	D3D11_BUFFER_DESC ibDesc;

		&m_pSwapChain,

			index_offset += fv;

	for (const auto& shape : shapes)



			default:

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	//First we need to start up SDL, and make sure it went ok

	m_Viewport.TopLeftX = 0;

{

	D3D11_BUFFER_DESC cbDesc;

			exit(1);

		&m_pImmediateContext);

	SDL_DestroyWindow(win);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			{

	SDL_DestroyTexture(tex);

	txDesc.MipLevels = 1;



	SAFE_RELEASE(m_pDevice);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

			{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				indexlist.push_back(idx.vertex_index);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&shapes,

			index_offset += fv;



		return hr;

	cbDesc.MiscFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

using std::cout; using std::endl;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			for (size_t v = 0; v < fv; v++)

	int     vcount = vertexlist.size();

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyRenderer(ren);

	{

	SDL_DestroyTexture(tex);



	m_pSwapChain = NULL;

	delete[] pVList;

}

}



	SAFE_RELEASE(m_pTexture);



			{



	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		SDL_RenderPresent(ren);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

	if (!error.empty())

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

 */

	vbDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pSwapChain->Present(0, 0);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			case SDLK_RIGHT:

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	UINT offsets = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	Release();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	scDesc.BufferDesc.Width = rect.Width();





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SAFE_RELEASE(m_pSampler);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));



}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	D3D11_BUFFER_DESC cbDesc;

			}

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

			//Select surfaces based on key press

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		if (e.type == SDL_QUIT)

	SDL_Event e;

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vector<Vertex> vertexlist;







	SDL_DestroyWindow(win);



	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pVertexShader);





		SDL_Delay(1000);



	SDL_DestroyTexture(tex);

int main(int, char**)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D11_BUFFER_DESC ibDesc;

	m_pRenderTargetView = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





				break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};

		KEY_PRESS_SURFACE_LEFT,

		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_IndexCount = 0;



			}

	std::string imagePath = "hello.bmp";

			//Select surfaces based on key press

	::GetClientRect(hwnd, &rect);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	if (!error.empty())

	if (!error.empty())

		SDL_RenderPresent(ren);

	//頂点バッファ作成

	SDL_Quit();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pSwapChain);

			{

	scDesc.BufferCount = 1;

	irData.SysMemSlicePitch = 0;

	Vertex* pVList = new Vertex[vcount];

	m_Angle += XMConvertToRadians(1.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				WORD index = idx.vertex_index;



	//vector<WORD> index_t;

	XMFLOAT4         ambient;  //環境光(r,g,b)



#define TINYOBJLOADER_IMPLEMENTATION

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderClear(ren);

int main(int, char**)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	SAFE_RELEASE(m_pSampler);

		D3D11_SDK_VERSION,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC cbDesc;



		&level,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	return 0;

		return hr;

		KEY_PRESS_SURFACE_DOWN,

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	::ZeroMemory(&scDesc, sizeof(scDesc));

			index_offset += fv;

	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;



#include <SDL.h>

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	{

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	ibDesc.CPUAccessFlags = 0;



CD3DTest::~CD3DTest()

	auto& materials = reader.GetMaterials();

 * Lesson 1: Hello World!

				indexlist.push_back(index);

	dsDesc.Format = txDesc.Format;

		&scDesc,

		return hr;

			case SDLK_LEFT:

		{

	HRESULT              hr;





	bool ret = tinyobj::LoadObj(

		R"(cube.obj)");

				break;

	LoadObj(vertexlist, indexList);

			for (size_t v = 0; v < num_vertices; v++)

	//頂点レイアウト作成

	HRESULT              hr;



		return 1;

	D3D11_BUFFER_DESC ibDesc;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



			default:

	scDesc.OutputWindow = hwnd;

		SDL_RenderPresent(ren);

	//頂点レイアウト作成

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pTexture);

};

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pSwapChain->Present(0, 0);



			case SDLK_DOWN:

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		&m_pDevice,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);











{

	m_pVertexShader = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//定数バッファ作成

		NULL,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDepthStencilTexture = NULL;

			}



	SDL_FreeSurface(bmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pVertexShader = NULL;

		size_t index_offset = 0;  // インデントのオフセット

		if (!reader.Error().empty())

}





	D3D11_TEXTURE2D_DESC txDesc;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



};

{

		flags,

		}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			case SDLK_LEFT:

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

int main(int, char**)

	};

	if (FAILED(hr))

	pBackBuffer->Release();



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

using std::cout; using std::endl;



	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//Key press surfaces constants

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	{

			{

		{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

			//Select surfaces based on key press

	scDesc.BufferCount = 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	/*

	}*/

	}

	vrData.pSysMem = &pVList[0];

	::GetClientRect(hwnd, &rect);

	/*

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		&scDesc,

		SDL_RenderClear(ren);



	SDL_FreeSurface(bmp);

	XMStoreFloat4(&clb.eyePos, eye);

	Release();



		if (!reader.Error().empty())

	::GetClientRect(hwnd, &rect);

		}

		m_pImmediateContext->ClearState();

				// access to vertex

#include <iostream>

		KEY_PRESS_SURFACE_UP,

	for (const auto& shape : shapes)

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				indexlist.push_back(idx.vertex_index);

			{

{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

	m_pVertexShader = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	D3D11_BUFFER_DESC cbDesc;



#include <SDL.h>

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderPresent(ren);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#endif



		// Loop over faces(polygon)

	Vertex* pVList = new Vertex[vcount];

				break;

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		{

	if (FAILED(hr))

			default:

	cbDesc.CPUAccessFlags = 0;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

		&level,

			index_offset += fv;

	m_IndexCount = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pIList;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pLightBuffer = NULL;





int main(int, char**)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//First we need to start up SDL, and make sure it went ok

	scDesc.OutputWindow = hwnd;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		delete[] pIList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			}

	float    nearZ = 0.1f;

	m_VertexCount = vcount;

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pVertexBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

			for (size_t v = 0; v < fv; v++)

		R"(cube.obj)");

	Vertex* pVList = new Vertex[vcount];

#include <iostream>

	{

		}

	}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//テクスチャ読み込み

	}

				break;

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

};

	bool ret = tinyobj::LoadObj(

		&scDesc,

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.OutputWindow = hwnd;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	vrData.SysMemPitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			exit(1);

	{

		return hr;

	m_IndexCount = 0;

		if (!ret)

	return hr;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

/*

	cbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;

	for (int j = 0; j < icount; j++)

	D3D11_BUFFER_DESC vbDesc;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pSampler = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_IndexCount = 0;

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&level,

#include <iostream>

		}

		&shapes,

void CD3DTest::Release()

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	scDesc.Windowed = TRUE;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			case SDLK_LEFT:

		NULL,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

			case SDLK_LEFT:



	SAFE_RELEASE(m_pDepthStencilView);

/*

	for (size_t s = 0; s < shapes.size(); s++)

	if (!reader.Warning().empty())



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>

	{

	m_pVertexShader = NULL;

	//テクスチャ読み込み

	CRect                rect;

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	UINT offsets = 0;

		NULL,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_SUBRESOURCE_DATA vrData;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMFLOAT4X4 projection;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	ConstantLightBuffer clb;

	D3D11_TEXTURE2D_DESC txDesc;

	ID3D11Texture2D* pBackBuffer;



int main(int, char**)

	}



		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()



			{

}

void CD3DTest::Release()



	WORD* pIList = new WORD[icount];





	//頂点レイアウト作成



		return hr;



	int     vcount = vertexlist.size();

	Vertex* pVList = new Vertex[vcount];

	return hr;



				break;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_UP,

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

#include "DirectXManager.h"

	cbDesc.CPUAccessFlags = 0;



	m_Viewport.MaxDepth = 1.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyWindow(win);

		&attrib,

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void CD3DTest::Render()

	SDL_Event e;

		if (!reader.Error().empty())

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		SDL_RenderClear(ren);

	m_pVertexBuffer = NULL;

	UINT strides = sizeof(Vertex);

	m_pVertexBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pRenderTargetView = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (int i = 0; i < 3; i++)

			{

		}



		&level,



		&materials,

		SDL_RenderPresent(ren);

	m_pSwapChain->Present(0, 0);



		KEY_PRESS_SURFACE_DEFAULT,

		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (m_pImmediateContext)

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	scDesc.SampleDesc.Count = 1;



	m_pPixelShader = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

};

	SDL_FreeSurface(suf);



	if (!reader.Warning().empty())

HRESULT CD3DTest::Create(HWND hwnd)

	m_pInputLayout = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;



};

	//ビューポート設定



	cbDesc.StructureByteStride = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

	}

	/*

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	while (SDL_PollEvent(&e) != 0)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			int num_vertices = shape.mesh.num_face_vertices[f];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	D3D11_SUBRESOURCE_DATA vrData;



	cbDesc.MiscFlags = 0;

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

		exit(1);

	SDL_DestroyWindow(win);

			case SDLK_LEFT:

void CD3DTest::Release()

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.OutputWindow = hwnd;



	SDL_Event e;

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	m_pVertexBuffer = NULL;

	{





	SDL_Event e;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.CPUAccessFlags = 0;

	//Key press surfaces constants

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



			switch (e.key.keysym.sym)

	UINT strides = sizeof(Vertex);

 */

				tinyobj::real_t tx =

	UINT offsets = 0;







		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_BUFFER_DESC cbDesc;

	m_VertexCount = vcount;

	{

#include <iostream>

	tinyobj::ObjReaderConfig reader_config;

	scDesc.BufferDesc.Height = rect.Height();

{

		pVList[i] = vertexlist[i];



	m_pTextureView = NULL;

	if (FAILED(hr))

		{

};

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return 0;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pTexture = NULL;

	Vertex* pVList = new Vertex[vcount];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_TEXTURE2D_DESC txDesc;

#include <SDL.h>

	txDesc.ArraySize = 1;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		KEY_PRESS_SURFACE_RIGHT,

	};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			// Loop over vertices in the face.

	}

	return 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	for (int i = 0; i < vcount; i++)

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

 */

{

	m_Angle += XMConvertToRadians(1.0f);



	irData.SysMemPitch = 0;



	m_Viewport.TopLeftX = 0;

	scDesc.BufferCount = 1;

	float    fov = XMConvertToRadians(20.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pVertexBuffer = NULL;

	m_pSwapChain = NULL;

	if (FAILED(hr))



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vector<WORD> indexList;

	//深度ステンシルバッファ作成

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pVertexShader = NULL;



		// Loop over faces(polygon)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;









	SAFE_RELEASE(m_pLightBuffer);

	txDesc.MipLevels = 1;

	UINT offsets = 0;





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.TopLeftX = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	txDesc.MipLevels = 1;

	if (FAILED(hr))

		}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

	irData.SysMemPitch = 0;

	delete[] pVList;





 * Lesson 1: Hello World!

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string imagePath = "hello.bmp";

			}

	delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Angle += XMConvertToRadians(1.0f);

	return hr;

		&m_pSwapChain,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



int main(int, char**)

	m_pDepthStencilView = NULL;



	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

void CD3DTest::Render()



	::GetClientRect(hwnd, &rect);



			case SDLK_DOWN:



	LoadObj(vertexlist, indexList);

	SDL_DestroyWindow(win);

	{

	//vector<WORD> index_t;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}

	m_Angle += XMConvertToRadians(1.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (const auto& shape : shapes)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pVertexBuffer = NULL;

}

};



}

	vbDesc.MiscFlags = 0;

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	{



	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4X4 projection;



	SAFE_RELEASE(m_pMatrixBuffer);

	delete[] pIList;

		}

	}*/

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	dsDesc.Format = txDesc.Format;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			default:







	/*



struct ConstantLight {

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	bool ret = tinyobj::LoadObj(







	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

			for (size_t v = 0; v < num_vertices; v++)



		return hr;



		}

	txDesc.Width = rect.Width();

	WORD* pIList = new WORD[icount];

		size_t index_offset = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_RIGHT,

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pDepthStencilTexture);



	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			exit(1);

	SAFE_RELEASE(m_pSwapChain);

	UINT strides = sizeof(Vertex);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};





	ConstantMaterial material; //物体の質感

	{

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



			int num_vertices = shape.mesh.num_face_vertices[f];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//ピクセルシェーダー生成

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t ty =

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDepthStencilView);

	auto& attrib = reader.GetAttrib();

	// Loop over shapes

		&scDesc,

	cbDesc.MiscFlags = 0;

			index_offset += num_vertices;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点シェーダー生成

	UINT strides = sizeof(Vertex);

				WORD index = idx.vertex_index;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.SampleDesc.Quality = 0;

	irData.SysMemSlicePitch = 0;



{

		&shapes,

	int     vcount = vertexlist.size();

	m_pPixelShader = NULL;

			case SDLK_DOWN:



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			index_offset += fv;

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_TOTAL

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

};

				indexlist.push_back(index);

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

	//ピクセルシェーダー生成

};

	XMFLOAT4X4 view;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.MipLevels = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_Delay(1000);



	scDesc.Windowed = TRUE;

	D3D11_BUFFER_DESC cbDesc;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	}

		KEY_PRESS_SURFACE_TOTAL

#include "DirectXManager.h"

		SDL_RenderCopy(ren, tex, NULL, NULL);







				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	/*



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		1,

	txDesc.MiscFlags = 0;



	m_Viewport.TopLeftX = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#ifdef _DEBUG

		D3D_DRIVER_TYPE_HARDWARE,



		if (!ret)

		D3D11_SDK_VERSION,



				break;

	m_pSwapChain->Present(0, 0);

	return;

	}



		pIList[j] = indexList[j];

		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

				WORD index = idx.vertex_index;

	//Create Index

			for (size_t v = 0; v < fv; v++)

		cout << "SDL_INIT_ERROR" << endl;

	m_pLightBuffer = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	SDL_DestroyTexture(tex);

	{

	// Loop over shapes





	txDesc.Width = rect.Width();

	if (FAILED(hr))

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





		if (!reader.Error().empty())

		&level,

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_RIGHT,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	if (!error.empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pDepthStencilTexture = NULL;

	cbDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);



	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	UINT flags = 0;

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pPixelShader);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

	//Clean up our objects and quit

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



		return hr;

	for (int i = 0; i < 3; i++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}
	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&attrib,

	if (FAILED(hr))



	XMFLOAT4X4 view;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				break;

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4X4 projection;

	};





	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点バッファ作成

		KEY_PRESS_SURFACE_UP,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

		{



		pVList[i] = vertexlist[i];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	SAFE_RELEASE(m_pIndexBuffer);

	CRect                rect;



		pVList[i] = vertexlist[i];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		KEY_PRESS_SURFACE_DEFAULT,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!reader.Warning().empty())

	if (FAILED(hr))

	//ビューポート設定



#include <SDL.h>



	XMFLOAT4 ambient;           //環境(r,g,b)

	while (SDL_PollEvent(&e) != 0)

		SDL_Delay(1000);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

	//ピクセルシェーダー生成

	UINT flags = 0;

	return 0;

	txDesc.Height = rect.Height();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

 * Lesson 1: Hello World!

	// Loop over shapes

	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty =



	if (FAILED(hr))

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	}

		SDL_Delay(1000);

	}

	vbDesc.StructureByteStride = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pDepthStencilTexture);

		size_t index_offset = 0;

#ifdef _DEBUG

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		return hr;

	/*

}




			}

struct ConstantMaterial {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.Windowed = TRUE;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		NULL,

		pLevels,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



#include "DirectXManager.h"

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			// Loop over vertices in the face.

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	reader_config.mtl_search_path = "./"; // Path to material files

int main(int, char**)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			index_offset += fv;

	CRect                rect;

	//頂点シェーダー生成

	//ピクセルシェーダー生成



				WORD index = idx.vertex_index;

		&m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Angle += XMConvertToRadians(1.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4X4 view;

	::GetClientRect(hwnd, &rect);

	//vector<Vertex> vertex_t;



struct ConstantMaterial {

	//First we need to start up SDL, and make sure it went ok

		&shapes,

}



				// access to vertex

	XMFLOAT4 pos;               //座標(x,y,z)

				indexlist.push_back(idx.vertex_index);

	txDesc.Width = rect.Width();

				break;

	m_pDepthStencilTexture = NULL;

	m_pDepthStencilView = NULL;

		&m_pSwapChain,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				WORD index = idx.vertex_index;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	for (size_t s = 0; s < shapes.size(); s++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

	{

	m_VertexCount = 0;

			for (size_t v = 0; v < fv; v++)



				tinyobj::real_t tx =

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.TopLeftY = 0;

	XMFLOAT4X4 world;

	ConstantMaterial material; //物体の質感



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

		SDL_Delay(1000);

		return hr;



	enum KeyPressSurfaces

	D3D11_BUFFER_DESC ibDesc;

	return 0;

	m_pVertexBuffer = NULL;

				break;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D_FEATURE_LEVEL level;



struct ConstantLight {

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	return 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	ConstantLightBuffer clb;

	irData.pSysMem = &pIList[0];







	auto& shapes = reader.GetShapes();

		D3D_DRIVER_TYPE_HARDWARE,





	auto& attrib = reader.GetAttrib();

			// Loop over vertices in the face.



	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

		return hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			index_offset += fv;

		KEY_PRESS_SURFACE_DEFAULT,



int SEGMENT = 36;

	cbDesc.StructureByteStride = 0;

}
	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	delete[] pIList;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pSwapChain = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Clean up our objects and quit

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{





	while (SDL_PollEvent(&e) != 0)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#include <SDL.h>

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#include <iostream>

	SDL_Quit();

	m_pPixelShader = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	/*

		{



	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t ty =



	m_pDevice = NULL;

			case SDLK_DOWN:

	for (const auto& shape : shapes)

	txDesc.Width = rect.Width();

	m_pTextureView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SDL_FreeSurface(suf);

	vector<WORD> indexList;

	m_pLightBuffer = NULL;

		}

		if (e.type == SDL_QUIT)



		delete[] pVList;

	//Vertex* pVList = new Vertex[vcount];

	};



	{



	XMFLOAT4 pos;               //座標(x,y,z)

void CD3DTest::Release()

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

		//User requests quit

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

	m_pRenderTargetView = NULL;



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.MiscFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{



	scDesc.BufferDesc.Height = rect.Height();

				break;







	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	m_pInputLayout = NULL;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.ArraySize = 1;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;

			for (size_t v = 0; v < num_vertices; v++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	txDesc.Width = rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	std::string inputfile = "test.obj";



	m_pTextureView = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;



	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

	WORD* pIList = new WORD[icount];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

};

	SDL_FreeSurface(suf);

	std::vector<tinyobj::material_t> materials;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			break;

	SAFE_RELEASE(m_pVertexShader);

	m_pTextureView = NULL;

			index_offset += num_vertices;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			exit(1);



	::ZeroMemory(&scDesc, sizeof(scDesc));

			for (size_t v = 0; v < num_vertices; v++)

			// Loop over vertices in the face.

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

				vertex.push_back(vertex_tmp);

	XMFLOAT4 ambient;           //環境(r,g,b)





	scDesc.BufferCount = 1;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!reader.Error().empty())

			//Select surfaces based on key press

	}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//vector<WORD> index_t;

	XMFLOAT4X4 view;

	SDL_Quit();



	scDesc.Windowed = TRUE;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pMatrixBuffer);

			default:

	SAFE_RELEASE(m_pIndexBuffer);



		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//頂点レイアウト作成

	D3D11_SUBRESOURCE_DATA vrData;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



struct ConstantLightBuffer {

	UINT strides = sizeof(Vertex);

	std::string error;



{



	D3D11_BUFFER_DESC ibDesc;

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	return 0;

	//vector<WORD> index_t;

	SDL_DestroyRenderer(ren);



	for (int i = 0; i < 3; i++)

	SDL_FreeSurface(bmp);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.MiscFlags = 0;

void CD3DTest::Render()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

		//User requests quit

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pPixelShader = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.Format = txDesc.Format;

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pIndexBuffer);



		return hr;

	if (!reader.Warning().empty())

	UINT strides = sizeof(Vertex);

struct ConstantMatrixBuffer {

			case SDLK_RIGHT:

	ibDesc.MiscFlags = 0;



	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (!error.empty())

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.MipLevels = 1;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





		}

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSampler);

				vertex.push_back(vertex_tmp);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pInputLayout = NULL;

		return hr;

	pBackBuffer->Release();



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderClear(ren);

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//深度ステンシルバッファ作成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 pos;               //座標(x,y,z)

		return 1;

	m_pMatrixBuffer = NULL;

#include <iostream>

	m_pInputLayout = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pSampler);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			index_offset += fv;

	::GetClientRect(hwnd, &rect);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	SDL_Event e;







void CD3DTest::Release()

		return hr;

	m_pRenderTargetView = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



}

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	for (int i = 0; i < vcount; i++)

		{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		KEY_PRESS_SURFACE_RIGHT,



	//定数バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))





	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		{

	return 0;

	m_pSampler = NULL;

}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		//User requests quit

		if (!ret)

	};

	SAFE_RELEASE(m_pIndexBuffer);



	SDL_Quit();

		return hr;

	if (FAILED(hr))

		return hr;

	//Key press surfaces constants

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	XMFLOAT4 specular;          //反射(r,g,b)

		SDL_RenderClear(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t tx =

	m_pImmediateContext = NULL;

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

				tinyobj::real_t ty =

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				indexlist.push_back(index);





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <iostream>

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pLightBuffer = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ibDesc.CPUAccessFlags = 0;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

}



	m_pRenderTargetView = NULL;

	std::vector<tinyobj::material_t> materials;

				vertex.push_back(vertex_tmp);

				vertex.push_back(vertex_tmp);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{



	//vector<Vertex> vertex_t;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		KEY_PRESS_SURFACE_LEFT,



	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.MipLevels = 1;

	//ピクセルシェーダー生成

	{

				WORD index = idx.vertex_index;



	XMFLOAT4 pos;               //座標(x,y,z)







}

	SDL_FreeSurface(suf);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC ibDesc;

	m_Viewport.TopLeftY = 0;

	WORD* pIList = new WORD[icount];

	m_Viewport.MinDepth = 0.0f;



	m_pVertexShader = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			index_offset += num_vertices;

	m_pInputLayout = NULL;

	m_Viewport.MaxDepth = 1.0f;

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			}

	scDesc.OutputWindow = hwnd;

#include <SDL.h>

struct ConstantMaterial {

	if (FAILED(hr))



		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.SysMemSlicePitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.TopLeftY = 0;

		{

		return 1;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	float    fov = XMConvertToRadians(20.0f);



		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SAFE_RELEASE(m_pTexture);

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pImmediateContext);



	if (!error.empty())



		&shapes,

		R"(cube.obj)");

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	WORD   icount = indexList.size();

			for (size_t v = 0; v < num_vertices; v++)

	{

	txDesc.Width = rect.Width();

	vrData.pSysMem = &pVList[0];

		SDL_Delay(1000);

{



	}

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&error,

	D3D11_SUBRESOURCE_DATA irData;

	}

	{

	txDesc.Width = rect.Width();

	ZeroMemory(&txDesc, sizeof(txDesc));



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.pSysMem = &pIList[0];

 */

HRESULT CD3DTest::Create(HWND hwnd)



	};

			}



		R"(cube.obj)");

		&materials,

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	WORD   icount = indexList.size();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			for (size_t v = 0; v < num_vertices; v++)

				WORD index = idx.vertex_index;

	SDL_FreeSurface(bmp);

	//Vertex* pVList = new Vertex[vcount];

	{

{

	cbDesc.StructureByteStride = 0;



			case SDLK_UP:

		pVList[i] = vertexlist[i];

				break;

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//ビューポート設定

	ConstantLightBuffer clb;

	m_pImmediateContext = NULL;

	D3D11_TEXTURE2D_DESC txDesc;



	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

	WORD   icount = indexList.size();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&m_pSwapChain,

	m_Viewport.MaxDepth = 1.0f;

		}

	{

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	XMFLOAT4X4 view;

		return hr;





}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (m_pImmediateContext)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantLightBuffer {

		1,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}*/

	}



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	dsDesc.Texture2D.MipSlice = 0;

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pVertexBuffer);

	for (int i = 0; i < vcount; i++)

	//ピクセルシェーダー生成



	txDesc.ArraySize = 1;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	ibDesc.CPUAccessFlags = 0;



		SDL_Delay(1000);

{



	if (!reader.Warning().empty())

		SDL_RenderClear(ren);



	}

 * Lesson 1: Hello World!

	for (int j = 0; j < icount; j++)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	auto& attrib = reader.GetAttrib();

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

};

	WORD* pIList = new WORD[icount];

	SDL_DestroyTexture(tex);

		exit(1);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

	Vertex* pVList = new Vertex[vcount];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return hr;

	reader_config.mtl_search_path = "./"; // Path to material files



}

	reader_config.mtl_search_path = "./"; // Path to material files

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_TEXTURE2D_DESC txDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	txDesc.SampleDesc.Count = 1;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		{

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < vcount; i++)

	}

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

		SDL_RenderPresent(ren);

struct ConstantMaterial {

	cbDesc.MiscFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::CD3DTest()

	ibDesc.MiscFlags = 0;





			case SDLK_RIGHT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (!error.empty())



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.Height = rect.Height();



	if (m_pImmediateContext)

		&level,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	pBackBuffer->Release();

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.OutputWindow = hwnd;

	//ビューポート設定

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_RenderClear(ren);



	HRESULT              hr;

		{

		// Loop over faces(polygon)

	HRESULT              hr;

	Release();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD* pIList = new WORD[icount];

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.StructureByteStride = 0;

struct ConstantLight {

			for (size_t v = 0; v < fv; v++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

		flags,







}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];

}

	cbDesc.MiscFlags = 0;

		SDL_Delay(1000);

	CRect                rect;

	//頂点シェーダー生成



	SAFE_RELEASE(m_pVertexShader);



	for (size_t s = 0; s < shapes.size(); s++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

 * Lesson 1: Hello World!





	SAFE_RELEASE(m_pLightBuffer);

		D3D11_SDK_VERSION,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.SampleDesc.Quality = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	ibDesc.StructureByteStride = 0;



				break;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	{



#include "DirectXManager.h"



struct ConstantMaterial {

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	D3D11_BUFFER_DESC ibDesc;

	m_pSwapChain->Present(0, 0);

#include <iostream>

	scDesc.Windowed = TRUE;

			}

		&level,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		//User presses a key

			exit(1);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	UINT flags = 0;

};

		delete[] pVList;

	pBackBuffer->Release();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pPixelShader = NULL;



	auto& shapes = reader.GetShapes();

				vertex.push_back(vertex_tmp);



		pVList[i] = vertexlist[i];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pIndexBuffer = NULL;

	for (int j = 0; j < icount; j++)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		}

	m_pImmediateContext = NULL;



	//インデックスバッファ作成



	m_pDepthStencilTexture = NULL;

			//Select surfaces based on key press

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	//vector<Vertex> vertex_t;

	//Clean up our objects and quit

	if (FAILED(hr))



struct ConstantMatrixBuffer {

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

}

		&error,

 */



struct ConstantMaterial {

		SDL_Delay(1000);

	ConstantLight    pntLight; //点光源



		NULL,

	while (SDL_PollEvent(&e) != 0)

	LoadObj(vertexlist, indexList);

	m_pMatrixBuffer = NULL;



				tinyobj::real_t tx =



	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

};



	SDL_DestroyRenderer(ren);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



int main(int, char**)

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		return hr;



	if (FAILED(hr))

		&m_pImmediateContext);

	if (FAILED(hr))

	{

	{

		pLevels,



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	HRESULT              hr;



#ifdef _DEBUG

	HRESULT              hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.Warning().empty())

			break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.CPUAccessFlags = 0;

};

	{

};



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ID3D11Texture2D* pBackBuffer;

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	for (const auto& shape : shapes)



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	delete[] pVList;

	irData.pSysMem = &pIList[0];

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

	}

	m_pSampler = NULL;

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;



		D3D_DRIVER_TYPE_HARDWARE,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		KEY_PRESS_SURFACE_TOTAL

#include "DirectXManager.h"

			break;

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&error,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	delete[] pVList;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	reader_config.mtl_search_path = "./"; // Path to material files

	for (size_t s = 0; s < shapes.size(); s++)

	m_pLightBuffer = NULL;

		return hr;

		NULL,

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pImmediateContext);

	SDL_FreeSurface(suf);

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vrData.SysMemSlicePitch = 0;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&attrib,

	D3D11_BUFFER_DESC cbDesc;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_BUFFER_DESC vbDesc;

	vrData.pSysMem = &pVList[0];

		KEY_PRESS_SURFACE_TOTAL

	D3D11_BUFFER_DESC cbDesc;





#include <iostream>

		KEY_PRESS_SURFACE_TOTAL

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.SampleDesc.Count = 1;

	//vector<WORD> index_t;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);







	std::string inputfile = "test.obj";

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	ConstantMatrixBuffer cmb;

		cout << "SDL_INIT_ERROR" << endl;

		SDL_RenderPresent(ren);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	auto& materials = reader.GetMaterials();

	{

				vertex.push_back(vertex_tmp);

	WORD   icount = indexList.size();



			case SDLK_DOWN:

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

	m_Viewport.TopLeftY = 0;

		}

	{

#endif

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

		delete[] pVList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み



};

	//頂点レイアウト作成

		&scDesc,

}

	vector<Vertex> vertexlist;

	pBackBuffer->Release();

		&materials,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



{

			exit(1);

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (m_pImmediateContext)

	XMFLOAT4 specular;          //反射(r,g,b)

	std::string inputfile = "test.obj";

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pVertexShader = NULL;

{



	txDesc.SampleDesc.Count = 1;



	std::string inputfile = "test.obj";

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pDepthStencilTexture = NULL;

		delete[] pIList;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float    nearZ = 0.1f;

	m_Viewport.TopLeftY = 0;

	dsDesc.Texture2D.MipSlice = 0;

			{

		m_pImmediateContext->ClearState();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

		{

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyWindow(win);

 * Lesson 1: Hello World!



			for (size_t v = 0; v < fv; v++)

	//頂点バッファ作成



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext = NULL;





	m_pVertexShader = NULL;

	for (int i = 0; i < 3; i++)

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	}*/

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	//頂点バッファ作成

	cbDesc.StructureByteStride = 0;

	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext = NULL;

	float    nearZ = 0.1f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	Release();

int main(int, char**)

	delete[] pIList;

	m_pDevice = NULL;

#include "DirectXManager.h"

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SAMPLER_DESC smpDesc;

CD3DTest::~CD3DTest()

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

	if (FAILED(hr))

				tinyobj::real_t tx =

	auto& materials = reader.GetMaterials();

	for (size_t s = 0; s < shapes.size(); s++)

	m_pSwapChain = NULL;

			default:

		KEY_PRESS_SURFACE_UP,





	XMFLOAT4X4 view;

		&m_pDevice,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		if (!reader.Error().empty())





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		//User presses a key



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	//頂点バッファ作成

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pTexture);

};

	{

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	irData.pSysMem = &pIList[0];

	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC cbDesc;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}



#endif

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				vertex.push_back(vertex_tmp);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_Viewport.TopLeftX = 0;

		&m_pImmediateContext);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;  // インデントのオフセット



	vector<WORD> indexList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4X4 view;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	pBackBuffer->Release();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&scDesc,

	}

	vrData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				indexlist.push_back(idx.vertex_index);

	ibDesc.StructureByteStride = 0;

			}



		return hr;

	irData.SysMemSlicePitch = 0;

		flags,

	SDL_DestroyTexture(tex);

		return hr;

	scDesc.BufferCount = 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pLightBuffer);

	}

	D3D_FEATURE_LEVEL level;









	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t tx =



	m_Viewport.TopLeftY = 0;



	vrData.pSysMem = &pVList[0];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



struct ConstantLight {

	SDL_DestroyWindow(win);

	Vertex* pVList = new Vertex[vcount];

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		delete[] pIList;

	txDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.OutputWindow = hwnd;

	//ピクセルシェーダー生成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext = NULL;



	if (FAILED(hr))

	SDL_DestroyWindow(win);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			case SDLK_DOWN:

	//ビューポート設定

		pLevels,





	XMStoreFloat4(&clb.material.specular, materialSpecular);



	//頂点シェーダー生成

		}

 */

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		delete[] pIList;

	SDL_Event e;



		}

	//頂点レイアウト作成

		&level,

	txDesc.SampleDesc.Count = 1;

		flags,

	m_pSwapChain->Present(0, 0);



	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pDevice);

int main(int, char**)

	bool ret = tinyobj::LoadObj(



{

	Release();

		KEY_PRESS_SURFACE_DEFAULT,

		&attrib,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_VertexCount = vcount;

			case SDLK_UP:

	m_pSwapChain = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	tinyobj::ObjReader reader;

			//Select surfaces based on key press

			int num_vertices = shape.mesh.num_face_vertices[f];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			}

			{







		if (!reader.Error().empty())

	m_VertexCount = 0;

	return 0;



	}

};

	SAFE_RELEASE(m_pMatrixBuffer);



		else if (e.type == SDL_KEYDOWN)

};

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_TOTAL



#include <iostream>

	dsDesc.Texture2D.MipSlice = 0;

};

	m_pLightBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pTextureView);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	dsDesc.Format = txDesc.Format;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

	float    farZ = 100.0f;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

			}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 specular;          //反射(r,g,b)

};





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

				// access to vertex

int main(int, char**)

	m_pMatrixBuffer = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

	irData.SysMemPitch = 0;

	D3D11_BUFFER_DESC vbDesc;

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

}

{

		return hr;

struct ConstantMaterial {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	if (FAILED(hr))

		&scDesc,

	for (size_t s = 0; s < shapes.size(); s++)

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Quit();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_SUBRESOURCE_DATA vrData;

	for (int j = 0; j < icount; j++)

			switch (e.key.keysym.sym)

				tinyobj::real_t ty =

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		pVList[i] = vertexlist[i];

			}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);



			// Loop over vertices in the face.

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			{

	SDL_DestroyRenderer(ren);

}

		SDL_RenderClear(ren);

	std::vector<tinyobj::material_t> materials;



	auto& attrib = reader.GetAttrib();

#include <iostream>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	dsDesc.Texture2D.MipSlice = 0;

#endif

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{

				tinyobj::real_t ty =

				tinyobj::real_t tx =

	{

};

	std::vector<tinyobj::shape_t> shapes;

};

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pVertexBuffer = NULL;

void CD3DTest::Release()

	std::vector<tinyobj::material_t> materials;

	//頂点レイアウト作成

				tinyobj::real_t ty =

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#include <iostream>



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::CD3DTest()



		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	Release();

		return hr;

		&m_pSwapChain,

			{

	for (int i = 0; i < vcount; i++)

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 view;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();



		{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}*/

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return 0;

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&m_pImmediateContext);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	return 0;



			//Select surfaces based on key press

		&m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}

	D3D11_SUBRESOURCE_DATA vrData;

	irData.pSysMem = &pIList[0];



		SDL_RenderCopy(ren, tex, NULL, NULL);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		pIList[j] = indexList[j];

#include <SDL.h>

	float    farZ = 100.0f;

		NULL,

	scDesc.SampleDesc.Count = 1;

		&attrib,

	cbDesc.MiscFlags = 0;



	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantMatrixBuffer cmb;

	m_IndexCount = 0;



			break;

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pImmediateContext);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	if (!reader.ParseFromFile(inputfile, reader_config))

	float    fov = XMConvertToRadians(20.0f);

	for (int i = 0; i < vcount; i++)

	cbDesc.MiscFlags = 0;

	pBackBuffer->Release();

				tinyobj::real_t ty =

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	float    farZ = 100.0f;

void CD3DTest::Release()

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	Vertex* pVList = new Vertex[vcount];

	int     vcount = vertexlist.size();



	txDesc.SampleDesc.Quality = 0;

		exit(1);

			}



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{



			exit(1);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

	}

{

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_DOWN,

		else if (e.type == SDL_KEYDOWN)

	HRESULT              hr;

{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))





		SDL_Delay(1000);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Width = rect.Width();

			int num_vertices = shape.mesh.num_face_vertices[f];

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	SAFE_RELEASE(m_pLightBuffer);

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			for (size_t v = 0; v < num_vertices; v++)

	// Loop over shapes

		delete[] pIList;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

CD3DTest::CD3DTest()

/*

	SDL_DestroyTexture(tex);

	txDesc.MiscFlags = 0;

void CD3DTest::Release()

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#endif





	SAFE_RELEASE(m_pSampler);

	}

	SDL_DestroyRenderer(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				break;

	{

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	//Key press surfaces constants

	XMFLOAT4         eyePos;   //視点座標

				// access to vertex

	{

	//Vertex* pVList = new Vertex[vcount];

	txDesc.Height = rect.Height();





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

void CD3DTest::Release()

	ConstantMatrixBuffer cmb;







		return hr;

}

	{



HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_TEXTURE2D_DESC txDesc;

void CD3DTest::Render()



	XMFLOAT4X4 view;

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.MipLevels = 1;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pDepthStencilTexture);

		else if (e.type == SDL_KEYDOWN)

	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pTexture);

	float    farZ = 100.0f;

		// Loop over faces(polygon)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



}

		{



		delete[] pVList;

			int num_vertices = shape.mesh.num_face_vertices[f];

			{

			}

	{

{



	m_Viewport.MinDepth = 0.0f;

#include <SDL.h>



}
				break;

		}

	return 0;

	for (size_t s = 0; s < shapes.size(); s++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pVertexShader);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <SDL.h>

		return hr;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pDepthStencilView);

	//頂点シェーダー生成

	SDL_DestroyRenderer(ren);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&m_pSwapChain,

	irData.SysMemSlicePitch = 0;

	if (!reader.Warning().empty())

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

		pVList[i] = vertexlist[i];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

	//テクスチャ読み込み

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		pVList[i] = vertexlist[i];

#ifdef _DEBUG

	txDesc.SampleDesc.Quality = 0;

	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pImmediateContext);

	Release();

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pInputLayout = NULL;

		return hr;





	return 0;

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





		return hr;

int main(int, char**)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

#include <SDL.h>



}

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pImmediateContext);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	}

	SDL_DestroyTexture(tex);

	if (!error.empty())

	XMFLOAT4X4 projection;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SAFE_RELEASE(m_pSwapChain);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				vertex.push_back(vertex_tmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		// Loop over faces(polygon)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



			// Loop over vertices in the face.

	std::vector<tinyobj::shape_t> shapes;

			{

	for (size_t s = 0; s < shapes.size(); s++)



	m_pVertexShader = NULL;

		R"(cube.obj)");

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	return;



	std::string error;

		pIList[j] = indexList[j];



		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//Clean up our objects and quit

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

		{



	if (FAILED(hr))

	{

	scDesc.SampleDesc.Count = 1;

	UINT strides = sizeof(Vertex);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ConstantMatrixBuffer cmb;



	float    nearZ = 0.1f;

		1,

};

			}

		{

	D3D11_BUFFER_DESC cbDesc;

	scDesc.OutputWindow = hwnd;

{

	//Clean up our objects and quit

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.CPUAccessFlags = 0;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pTexture = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyTexture(tex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

void CD3DTest::Release()

	ZeroMemory(&txDesc, sizeof(txDesc));

			}

	SDL_FreeSurface(suf);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

}

	if (FAILED(hr))

		return hr;

	Release();

	DXGI_SWAP_CHAIN_DESC scDesc;



	SDL_Quit();

	SAFE_RELEASE(m_pMatrixBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		{

				WORD index = idx.vertex_index;

			{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (e.type == SDL_QUIT)

				break;



		KEY_PRESS_SURFACE_RIGHT,

	}

	m_pTexture = NULL;



{

			// Loop over vertices in the face.

		D3D11_SDK_VERSION,

		&m_pDevice,

		else if (e.type == SDL_KEYDOWN)

	txDesc.SampleDesc.Count = 1;

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_RIGHT,

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	//頂点レイアウト作成

	XMFLOAT4X4 view;



		return hr;

	delete[] pVList;

				// access to vertex

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pTextureView = NULL;

				break;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int main(int, char**)

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pLightBuffer);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.CPUAccessFlags = 0;



	vector<WORD> indexList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		NULL,



{

{

{

			case SDLK_DOWN:

		return hr;

{

CD3DTest::~CD3DTest()

	};

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);





		delete[] pIList;

		{



	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		KEY_PRESS_SURFACE_DEFAULT,



	vbDesc.StructureByteStride = 0;



	scDesc.BufferCount = 1;



	//テクスチャ読み込み

using std::cout; using std::endl;

	CRect                rect;

	{

		pIList[j] = indexList[j];

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_LEFT:

	m_pSwapChain->Present(0, 0);

	bool ret = tinyobj::LoadObj(

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	pBackBuffer->Release();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	delete[] pIList;

	m_pIndexBuffer = NULL;

				WORD index = idx.vertex_index;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return;

		&scDesc,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.Windowed = TRUE;



		return hr;

	vrData.pSysMem = &pVList[0];

{

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_FreeSurface(bmp);

/*

	}



	m_pMatrixBuffer = NULL;

	m_pInputLayout = NULL;





	vector<WORD> indexList;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pLightBuffer = NULL;

	cbDesc.MiscFlags = 0;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Viewport.MinDepth = 0.0f;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D_FEATURE_LEVEL level;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.eyePos, eye);



		&m_pSwapChain,

#endif

	SDL_Event e;

				indexlist.push_back(idx.vertex_index);

		if (e.type == SDL_QUIT)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	for (int i = 0; i < vcount; i++)

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D11_BUFFER_DESC ibDesc;





	DXGI_SWAP_CHAIN_DESC scDesc;

	{



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	};

		{





	{

};

	if (m_pImmediateContext)

{

			}

		return hr;

				vertex.push_back(vertex_tmp);

	ibDesc.MiscFlags = 0;

	}

	{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::CD3DTest()



		SDL_RenderPresent(ren);







	//ピクセルシェーダー生成

{

				break;

	vector<WORD> indexList;

		&shapes,

	m_pSampler = NULL;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	delete[] pIList;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		return hr;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	for (int i = 0; i < vcount; i++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_TOTAL

	txDesc.MipLevels = 1;





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

int main(int, char**)

	XMFLOAT4 specular;          //反射(r,g,b)

	LoadObj(vertexlist, indexList);

		}

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.ArraySize = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_SUBRESOURCE_DATA irData;

	std::string imagePath = "hello.bmp";

		return hr;

	HRESULT              hr;



			}

		KEY_PRESS_SURFACE_DEFAULT,

	m_pMatrixBuffer = NULL;





				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC cbDesc;



	D3D11_BUFFER_DESC vbDesc;

	pBackBuffer->Release();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	UINT strides = sizeof(Vertex);

using std::cout; using std::endl;

	txDesc.MipLevels = 1;

	XMFLOAT4 pos;               //座標(x,y,z)

		&m_pImmediateContext);

	}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		if (e.type == SDL_QUIT)

	txDesc.Width = rect.Width();

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//頂点レイアウト作成

{

	return 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pRenderTargetView);

	float    farZ = 100.0f;



	//Create Index

		if (!reader.Error().empty())

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

int main(int, char**)

	if (!reader.ParseFromFile(inputfile, reader_config))

	for (int i = 0; i < 3; i++)

	auto& shapes = reader.GetShapes();

		SDL_RenderClear(ren);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <SDL.h>



	m_IndexCount = icount;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

}

{

	SAFE_RELEASE(m_pVertexBuffer);



	if (FAILED(hr))

	//Clean up our objects and quit

		{

		}

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		if (!reader.Error().empty())

			case SDLK_RIGHT:

using std::cout; using std::endl;

{

		NULL,

	{

	vrData.pSysMem = &pVList[0];

}
	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		return hr;

		R"(cube.obj)");





		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.SampleDesc.Count = 1;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

			exit(1);

	if (FAILED(hr))

	SDL_FreeSurface(suf);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	D3D11_BUFFER_DESC ibDesc;

	txDesc.SampleDesc.Count = 1;

{

	vrData.SysMemPitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return;

	{

	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferCount = 1;



		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	CRect                rect;

	}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];







	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

		}

	//頂点レイアウト作成

	SAFE_RELEASE(m_pMatrixBuffer);



				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



}

	UINT flags = 0;

struct ConstantLight {



}



	}

			}

			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{



	Release();

	m_Viewport.TopLeftY = 0;

	m_pTexture = NULL;

			{

	SAFE_RELEASE(m_pRenderTargetView);

	{



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_Viewport.Width = (FLOAT)rect.Width();



	m_pSwapChain = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pVertexShader = NULL;





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pDevice);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	delete[] pIList;

	for (int i = 0; i < 3; i++)

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_UP,



	//Create Index

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);




