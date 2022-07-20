	XMFLOAT4 specular;          //反射(r,g,b)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

	XMFLOAT4X4 projection;

	tinyobj::ObjReader reader;

				tinyobj::real_t ty =

struct ConstantLightBuffer {

		return hr;



	m_Viewport.MinDepth = 0.0f;

		return hr;



		//User presses a key

	SDL_DestroyRenderer(ren);

	m_pTextureView = NULL;







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

#include "DirectXManager.h"

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pTextureView = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ZeroMemory(&txDesc, sizeof(txDesc));



	float    fov = XMConvertToRadians(20.0f);

 */

	D3D11_SAMPLER_DESC smpDesc;

CD3DTest::CD3DTest()



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

HRESULT CD3DTest::Create(HWND hwnd)

#include <SDL.h>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.SampleDesc.Count = 1;



	m_pIndexBuffer = NULL;



	m_pMatrixBuffer = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	for (size_t s = 0; s < shapes.size(); s++)





	m_Viewport.TopLeftY = 0;

	auto& shapes = reader.GetShapes();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	pBackBuffer->Release();

	cbDesc.CPUAccessFlags = 0;

	// Loop over shapes

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	LoadObj(vertexlist, indexList);



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pIndexBuffer = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

};





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	CRect                rect;

	/*

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

	txDesc.Width = rect.Width();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				vertex.push_back(vertex_tmp);

	m_pLightBuffer = NULL;

	UINT strides = sizeof(Vertex);

	enum KeyPressSurfaces

	return 0;

	}



	//頂点レイアウト作成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

	if (!error.empty())



	vrData.SysMemPitch = 0;

	}

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	Release();

	m_VertexCount = 0;

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&attrib,

	txDesc.Width = rect.Width();

	SDL_Event e;

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))



			{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		else if (e.type == SDL_KEYDOWN)



	{



			switch (e.key.keysym.sym)

	for (int i = 0; i < vcount; i++)

	//vector<Vertex> vertex_t;

		else if (e.type == SDL_KEYDOWN)



	bool ret = tinyobj::LoadObj(

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		// Loop over faces(polygon)

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	::GetClientRect(hwnd, &rect);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4X4 world;





	m_pImmediateContext = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_Delay(1000);

 */



};





	SAFE_RELEASE(m_pVertexBuffer);

		&scDesc,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vrData.pSysMem = &pVList[0];

	Release();



		&m_pDevice,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





		D3D11_SDK_VERSION,

	{

	SAFE_RELEASE(m_pDevice);

			// Loop over vertices in the face.

	std::string imagePath = "hello.bmp";

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	cbDesc.MiscFlags = 0;



	}

	/*

}







	m_Viewport.MinDepth = 0.0f;

/*

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

CD3DTest::CD3DTest()

	D3D_FEATURE_LEVEL level;

	if (m_pImmediateContext)

CD3DTest::~CD3DTest()

	m_Viewport.MinDepth = 0.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pDepthStencilTexture = NULL;

	txDesc.MiscFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//深度ステンシルバッファ作成



	pBackBuffer->Release();

	/*

	m_VertexCount = 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

};

	ibDesc.CPUAccessFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pSwapChain = NULL;

	m_pIndexBuffer = NULL;

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		exit(1);

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pVertexBuffer = NULL;

		size_t index_offset = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		exit(1);

	SAFE_RELEASE(m_pImmediateContext);

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

			case SDLK_RIGHT:





			}

	cbDesc.StructureByteStride = 0;



	return;

	//Vertex* pVList = new Vertex[vcount];

#endif

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ConstantMatrixBuffer cmb;

		if (!reader.Error().empty())

#include <SDL.h>

	{

	return hr;

	if (FAILED(hr))



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	dsDesc.Format = txDesc.Format;



			case SDLK_RIGHT:

	enum KeyPressSurfaces

		SDL_RenderPresent(ren);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	// Loop over shapes

	std::vector<tinyobj::material_t> materials;

				break;



	ID3D11Texture2D* pBackBuffer;

}

{

	delete[] pIList;

	txDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//vector<Vertex> vertex_t;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Vertex* pVList = new Vertex[vcount];

	m_pDepthStencilTexture = NULL;





		SDL_Delay(1000);

			{

	irData.SysMemSlicePitch = 0;

		{

	SAFE_RELEASE(m_pInputLayout);

				// access to vertex

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	scDesc.SampleDesc.Count = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

	cbDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (!reader.Warning().empty())

		1,



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		D3D11_SDK_VERSION,

	//Clean up our objects and quit

		D3D11_SDK_VERSION,

	dsDesc.Texture2D.MipSlice = 0;

		//User presses a key

	//深度ステンシルバッファ作成



	cbDesc.StructureByteStride = 0;

}
	XMFLOAT4 pos;               //座標(x,y,z)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	while (SDL_PollEvent(&e) != 0)

	}

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





		if (!ret)



	tinyobj::attrib_t attrib;

	UINT strides = sizeof(Vertex);

	if (m_pImmediateContext)

}

	m_pDepthStencilTexture = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

using std::cout; using std::endl;

	if (FAILED(hr))

CD3DTest::CD3DTest()

		return hr;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		NULL,

	m_pTextureView = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	bool ret = tinyobj::LoadObj(

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Vertex* pVList = new Vertex[vcount];

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	//頂点シェーダー生成

 */

	vector<Vertex> vertexlist;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}

	{





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

	SDL_DestroyTexture(tex);

int main(int, char**)

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		&m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	// Loop over shapes

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



};

	HRESULT              hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{



			exit(1);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (!reader.Error().empty())

	for (int j = 0; j < icount; j++)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{



	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SDL_Event e;



	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	m_pInputLayout = NULL;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		// Loop over faces(polygon)

		delete[] pVList;

		R"(cube.obj)");

	/*

	D3D11_SAMPLER_DESC smpDesc;

	Vertex* pVList = new Vertex[vcount];

	tinyobj::attrib_t attrib;

	{



{

	float    nearZ = 0.1f;

	SDL_Quit();

	int     vcount = vertexlist.size();

		return hr;

struct ConstantMatrixBuffer {

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_Delay(1000);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_BUFFER_DESC vbDesc;

{

 * Lesson 1: Hello World!

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	delete[] pIList;

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.MiscFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pDepthStencilView = NULL;

		}

	m_pMatrixBuffer = NULL;

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.SampleDesc.Quality = 0;

	SDL_DestroyRenderer(ren);





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

		&error,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pRenderTargetView = NULL;

	//深度ステンシルバッファ作成



	delete[] pVList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD   icount = indexList.size();

		&m_pSwapChain,

	float    fov = XMConvertToRadians(20.0f);



	::GetClientRect(hwnd, &rect);





	SAFE_RELEASE(m_pLightBuffer);



	SDL_Event e;

	vrData.SysMemPitch = 0;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				// access to vertex

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_DOWN,

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	//Clean up our objects and quit

	XMFLOAT4X4 world;

	txDesc.SampleDesc.Quality = 0;

	float    farZ = 100.0f;

#include "DirectXManager.h"

	}





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	std::string error;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.MiscFlags = 0;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pPixelShader);

	SDL_Event e;

		cout << "SDL_INIT_ERROR" << endl;

	vector<Vertex> vertexlist;



		D3D_DRIVER_TYPE_HARDWARE,

		delete[] pIList;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vrData.SysMemSlicePitch = 0;

	{

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				WORD index = idx.vertex_index;



		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

using std::cout; using std::endl;

	std::vector<tinyobj::material_t> materials;







	tinyobj::ObjReaderConfig reader_config;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4X4 world;



	for (size_t s = 0; s < shapes.size(); s++)

	for (int i = 0; i < vcount; i++)

	if (!reader.ParseFromFile(inputfile, reader_config))

#endif

	ZeroMemory(&txDesc, sizeof(txDesc));

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vector<Vertex> vertexlist;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pRenderTargetView = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Width = rect.Width();

	cbDesc.StructureByteStride = 0;



	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pDepthStencilTexture);

	dsDesc.Texture2D.MipSlice = 0;

		}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#endif

				break;





	for (int i = 0; i < vcount; i++)

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pImmediateContext = NULL;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float    fov = XMConvertToRadians(20.0f);

	float    farZ = 100.0f;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



			for (size_t v = 0; v < num_vertices; v++)

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pVertexShader = NULL;

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Create Index

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

		else if (e.type == SDL_KEYDOWN)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	WORD* pIList = new WORD[icount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



#include <iostream>

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	Vertex* pVList = new Vertex[vcount];

	vrData.SysMemPitch = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

			// Loop over vertices in the face.

HRESULT CD3DTest::Create(HWND hwnd)

	return;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

	m_pVertexShader = NULL;

	//vector<WORD> index_t;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Event e;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	HRESULT              hr;

		SDL_RenderPresent(ren);



	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	::GetClientRect(hwnd, &rect);

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			{



	float    nearZ = 0.1f;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	ConstantLightBuffer clb;

		{

	if (FAILED(hr))



			case SDLK_RIGHT:

	XMFLOAT4 ambient;           //環境(r,g,b)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





		delete[] pVList;

	SAFE_RELEASE(m_pImmediateContext);





	m_pVertexBuffer = NULL;

	if (FAILED(hr))



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	ConstantLightBuffer clb;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexBuffer);

	WORD   icount = indexList.size();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			{

		{

			break;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



			case SDLK_DOWN:

{

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				break;

int SEGMENT = 36;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);



	ibDesc.MiscFlags = 0;

		return hr;

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

		}

	ConstantMatrixBuffer cmb;

	for (size_t s = 0; s < shapes.size(); s++)

		&error,





	txDesc.MipLevels = 1;

#include "DirectXManager.h"

	m_Viewport.MinDepth = 0.0f;

	return;

	cbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//頂点レイアウト作成

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	// Loop over shapes

	ibDesc.CPUAccessFlags = 0;

	Release();

	WORD* pIList = new WORD[icount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok

	//定数バッファ作成

	SAFE_RELEASE(m_pSampler);

	vrData.SysMemSlicePitch = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SAFE_RELEASE(m_pDevice);

		&m_pSwapChain,

	SAFE_RELEASE(m_pMatrixBuffer);

	m_IndexCount = icount;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	scDesc.BufferDesc.Width = rect.Width();

				WORD index = idx.vertex_index;

		// Loop over faces(polygon)

	HRESULT              hr;

	if (!error.empty())

}

		NULL,

			int num_vertices = shape.mesh.num_face_vertices[f];

{

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}



	if (m_pImmediateContext)

	cbDesc.CPUAccessFlags = 0;



	cbDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

		if (!reader.Error().empty())

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	reader_config.mtl_search_path = "./"; // Path to material files

	{

				break;

	while (SDL_PollEvent(&e) != 0)

		//User presses a key

			break;



	//First we need to start up SDL, and make sure it went ok



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.SysMemSlicePitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;



	SDL_Quit();

		return hr;

		{

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				// access to vertex



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&level,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				break;

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pPixelShader);





	m_Viewport.Width = (FLOAT)rect.Width();

			case SDLK_RIGHT:



	m_VertexCount = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			case SDLK_LEFT:



	ConstantMatrixBuffer cmb;

		SDL_RenderClear(ren);

	int     vcount = vertexlist.size();

		&m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyRenderer(ren);

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	}

	tinyobj::ObjReader reader;

		{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	}

				// access to vertex



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		}

	m_pDepthStencilView = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.CPUAccessFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyWindow(win);

	m_IndexCount = icount;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pLightBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	};

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#endif



			{

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

		SDL_RenderClear(ren);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		// Loop over faces(polygon)

		if (e.type == SDL_QUIT)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		pVList[i] = vertexlist[i];

	}

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.MipLevels = 1;

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.StructureByteStride = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			{

		}

				break;

	SDL_FreeSurface(suf);

	if (FAILED(hr))

	/*

		return hr;

	SAFE_RELEASE(m_pTextureView);

		pLevels,

#define TINYOBJLOADER_IMPLEMENTATION



	XMFLOAT4X4 projection;

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_pIndexBuffer = NULL;

		&scDesc,

		}

	m_Viewport.TopLeftY = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			case SDLK_UP:

	::ZeroMemory(&scDesc, sizeof(scDesc));



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.SampleDesc.Count = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&scDesc,

	//vector<WORD> index_t;





		&m_pDevice,



		D3D_DRIVER_TYPE_HARDWARE,

	UINT flags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	irData.SysMemPitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pVertexBuffer = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		D3D11_SDK_VERSION,

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



			case SDLK_UP:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	m_VertexCount = 0;

	for (int i = 0; i < 3; i++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#endif

	SAFE_RELEASE(m_pImmediateContext);

	reader_config.mtl_search_path = "./"; // Path to material files

	std::string inputfile = "test.obj";

struct ConstantLight {



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	while (SDL_PollEvent(&e) != 0)





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pPixelShader = NULL;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Format = txDesc.Format;

	SDL_DestroyTexture(tex);



	vector<WORD> indexList;

{

		SDL_RenderPresent(ren);



	{

		}

	ibDesc.CPUAccessFlags = 0;

			{

		return hr;

		&level,

	}

				break;



struct ConstantLight {

	enum KeyPressSurfaces

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	SDL_DestroyWindow(win);

{

				indexlist.push_back(idx.vertex_index);

	//ピクセルシェーダー生成





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;

				WORD index = idx.vertex_index;





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{

	float    fov = XMConvertToRadians(20.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				// access to vertex

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	m_pPixelShader = NULL;

	cbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);



		// Loop over faces(polygon)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<WORD> indexList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pVertexBuffer);

void CD3DTest::Release()

		return hr;

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t tx =

		&attrib,



	/*

	float    nearZ = 0.1f;



		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];



}



	XMStoreFloat4(&clb.material.specular, materialSpecular);

			default:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

	//Key press surfaces constants

	irData.SysMemPitch = 0;



}

				break;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				indexlist.push_back(index);

	txDesc.MipLevels = 1;

			case SDLK_DOWN:

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	HRESULT              hr;

	if (FAILED(hr))

				tinyobj::real_t ty =

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

/*

		}

	m_pLightBuffer = NULL;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	vbDesc.StructureByteStride = 0;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_DestroyTexture(tex);

	cbDesc.CPUAccessFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4X4 view;

	vbDesc.MiscFlags = 0;



	XMFLOAT4X4 view;

		// Loop over faces(polygon)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				WORD index = idx.vertex_index;

			{

	int     vcount = vertexlist.size();

		D3D_DRIVER_TYPE_HARDWARE,



	m_Viewport.TopLeftY = 0;

	vbDesc.StructureByteStride = 0;

	ConstantMaterial material; //物体の質感

			{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

int SEGMENT = 36;

}

	HRESULT              hr;

	SAFE_RELEASE(m_pTexture);

	Release();

	XMFLOAT4         ambient;  //環境光(r,g,b)



	}

	tinyobj::ObjReaderConfig reader_config;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	XMFLOAT4         eyePos;   //視点座標

	int     vcount = vertexlist.size();

	//vector<Vertex> vertex_t;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferCount = 1;

		size_t index_offset = 0;

	// Loop over shapes

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Create Index

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	// Loop over shapes

	}

/*

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	pBackBuffer->Release();

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			switch (e.key.keysym.sym)

	XMFLOAT4 specular;          //反射(r,g,b)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pSwapChain->Present(0, 0);

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		D3D11_SDK_VERSION,

	HRESULT              hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	// Loop over shapes



				indexlist.push_back(index);

		{

			{



	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	std::string inputfile = "test.obj";

	{

	SAFE_RELEASE(m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		SDL_RenderPresent(ren);

#endif

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_FreeSurface(suf);

	if (FAILED(hr))





	//頂点バッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.MipLevels = 1;

	CRect                rect;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;



		}

	if (FAILED(hr))



	cbDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pLightBuffer);



		KEY_PRESS_SURFACE_UP,

	{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	WORD   icount = indexList.size();



	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

CD3DTest::CD3DTest()

		{

	//Key press surfaces constants

	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	/*

	SAFE_RELEASE(m_pIndexBuffer);



			index_offset += num_vertices;

	XMFLOAT4 specular;          //反射(r,g,b)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

int main(int, char**)



	m_pTexture = NULL;

				vertex.push_back(vertex_tmp);

}

int main(int, char**)



#include <SDL.h>

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pVertexBuffer);

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pInputLayout = NULL;

	m_Angle += XMConvertToRadians(1.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		pLevels,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	for (const auto& shape : shapes)

{

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	}







	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Vertex* pVList = new Vertex[vcount];

	UINT flags = 0;

	ID3D11Texture2D* pBackBuffer;





	scDesc.SampleDesc.Quality = 0;

	txDesc.ArraySize = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	{

	pBackBuffer->Release();

}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

{

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

#include <SDL.h>

	txDesc.MipLevels = 1;

	XMFLOAT4 specular;          //反射(r,g,b)

	std::string error;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	{

		SDL_RenderClear(ren);

	m_Viewport.MaxDepth = 1.0f;





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	m_pPixelShader = NULL;



	m_VertexCount = 0;

	return 0;

	irData.SysMemSlicePitch = 0;

	m_pDepthStencilTexture = NULL;

	Vertex* pVList = new Vertex[vcount];

	{



	m_pSwapChain->Present(0, 0);

	vrData.SysMemSlicePitch = 0;



	m_Viewport.TopLeftY = 0;

			switch (e.key.keysym.sym)



#ifdef _DEBUG

{

		KEY_PRESS_SURFACE_UP,

				break;

		delete[] pIList;

			case SDLK_RIGHT:

			}

	ConstantMaterial material; //物体の質感

		SDL_Delay(1000);

		pVList[i] = vertexlist[i];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4X4 projection;

		pIList[j] = indexList[j];

	cbDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	vrData.SysMemPitch = 0;



				break;



			case SDLK_RIGHT:



		&error,



	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			exit(1);

			}

		KEY_PRESS_SURFACE_DEFAULT,

struct ConstantLightBuffer {

	m_Viewport.TopLeftY = 0;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		&m_pImmediateContext);

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pPixelShader);



	m_Viewport.Height = (FLOAT)rect.Height();





 */



	DXGI_SWAP_CHAIN_DESC scDesc;







	cbDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4X4 view;

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);

	SDL_Quit();

struct ConstantMaterial {

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pTexture = NULL;





	std::string imagePath = "hello.bmp";



	for (int i = 0; i < vcount; i++)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ConstantLight    pntLight; //点光源

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ConstantLightBuffer clb;



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pLightBuffer = NULL;

	ConstantMaterial material; //物体の質感

}

		&error,

	XMFLOAT4         eyePos;   //視点座標





		&m_pDevice,

				// access to vertex

	{



void CD3DTest::Render()

	// Loop over shapes



	return 0;



		if (!ret)



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_FreeSurface(bmp);

			case SDLK_RIGHT:

	D3D11_SUBRESOURCE_DATA irData;

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		1,

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		//User requests quit

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			for (size_t v = 0; v < num_vertices; v++)



	//ビューポート設定

	::GetClientRect(hwnd, &rect);

}

	m_Viewport.Height = (FLOAT)rect.Height();

	}*/

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

	SDL_Quit();

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext = NULL;

		if (e.type == SDL_QUIT)

		size_t index_offset = 0;

	SAFE_RELEASE(m_pTextureView);



	scDesc.SampleDesc.Count = 1;

	SDL_DestroyWindow(win);

	std::vector<tinyobj::material_t> materials;

			exit(1);



	UINT flags = 0;



	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&m_pSwapChain,

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pDevice = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

	for (int i = 0; i < vcount; i++)

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

		m_pImmediateContext->ClearState();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	txDesc.CPUAccessFlags = 0;

		&m_pDevice,

		}

		return hr;

	if (FAILED(hr))

	m_pPixelShader = NULL;

	m_IndexCount = icount;









	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

using std::cout; using std::endl;

				// access to vertex

		return hr;



{

	XMFLOAT4         eyePos;   //視点座標

			switch (e.key.keysym.sym)



		size_t index_offset = 0;  // インデントのオフセット

	{

			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		// Loop over faces(polygon)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.ArraySize = 1;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vector<Vertex> vertexlist;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

#include <iostream>

	txDesc.SampleDesc.Quality = 0;





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

		SDL_RenderPresent(ren);

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pTexture);

				break;

struct ConstantMatrixBuffer {

	SDL_FreeSurface(suf);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		1,





	float    farZ = 100.0f;

	SAFE_RELEASE(m_pRenderTargetView);

{



{

		{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.Height = (FLOAT)rect.Height();

	//頂点シェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&materials,



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vrData.SysMemSlicePitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			for (size_t v = 0; v < fv; v++)

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			switch (e.key.keysym.sym)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

		&error,

	tinyobj::attrib_t attrib;

	m_VertexCount = 0;

};



	//First we need to start up SDL, and make sure it went ok

	{

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	tinyobj::ObjReader reader;

			}



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_SUBRESOURCE_DATA vrData;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

		if (!reader.Error().empty())

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLight    pntLight; //点光源

	m_VertexCount = 0;

	//Vertex* pVList = new Vertex[vcount];

			int num_vertices = shape.mesh.num_face_vertices[f];

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t ty =



		SDL_RenderClear(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<WORD> index_t;

	XMFLOAT4X4 projection;

#include <iostream>

		&scDesc,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

};

	vector<WORD> indexList;



	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pSwapChain);



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (!ret)

		//User presses a key



	//頂点レイアウト作成

		{

	cbDesc.CPUAccessFlags = 0;

		return hr;



	for (size_t s = 0; s < shapes.size(); s++)

		delete[] pVList;



	vbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		if (!ret)

	m_pSwapChain = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	ConstantMaterial material; //物体の質感



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    farZ = 100.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLight {

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	vector<Vertex> vertexlist;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.SampleDesc.Count = 1;

	m_Viewport.TopLeftY = 0;



	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;





	vector<Vertex> vertexlist;



{

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	SDL_FreeSurface(bmp);

	float    fov = XMConvertToRadians(20.0f);

	std::string error;

	cbDesc.CPUAccessFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pTextureView);

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





}

		{

			case SDLK_RIGHT:

	m_IndexCount = 0;

CD3DTest::~CD3DTest()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSampler = NULL;



	SDL_Event e;

	//深度ステンシルバッファ作成



	}*/

	SAFE_RELEASE(m_pMatrixBuffer);

		KEY_PRESS_SURFACE_RIGHT,

	irData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

};





				// access to vertex

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pRenderTargetView);

		&attrib,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





	SDL_Event e;

	bool ret = tinyobj::LoadObj(



CD3DTest::~CD3DTest()

	Vertex* pVList = new Vertex[vcount];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

struct ConstantLight {

	LoadObj(vertexlist, indexList);

			}

	//頂点レイアウト作成

		&attrib,

			switch (e.key.keysym.sym)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.SampleDesc.Count = 1;

		NULL,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_FreeSurface(suf);

			for (size_t v = 0; v < fv; v++)



	if (!reader.Warning().empty())

		SDL_RenderPresent(ren);

			exit(1);

		&m_pSwapChain,



	SAFE_RELEASE(m_pSwapChain);

	vrData.SysMemPitch = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	}

	XMFLOAT4 pos;               //座標(x,y,z)

{

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	int     vcount = vertexlist.size();

	SDL_FreeSurface(suf);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ibDesc.MiscFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pSwapChain->Present(0, 0);

#include "DirectXManager.h"

		pIList[j] = indexList[j];

	dsDesc.Texture2D.MipSlice = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	ConstantLight    pntLight; //点光源

	if (!reader.Warning().empty())

};

	UINT flags = 0;

	scDesc.BufferCount = 1;

#define TINYOBJLOADER_IMPLEMENTATION

	{

	//vector<Vertex> vertex_t;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&attrib,



	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_VertexCount = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

		}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vrData.SysMemPitch = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

	CRect                rect;

 * Lesson 1: Hello World!

			{

	XMFLOAT4X4 projection;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		flags,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ID3D11Texture2D* pBackBuffer;

	//ピクセルシェーダー生成





{

	//ビューポート設定

			{

	HRESULT              hr;

		size_t index_offset = 0;  // インデントのオフセット

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			index_offset += fv;

	m_pVertexBuffer = NULL;

	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;



		pVList[i] = vertexlist[i];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	m_pIndexBuffer = NULL;

	//頂点シェーダー生成

	txDesc.MipLevels = 1;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		return hr;

	Release();

};



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



			case SDLK_UP:

	std::string error;



	m_pImmediateContext = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	dsDesc.Texture2D.MipSlice = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pTextureView = NULL;



	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.MaxDepth = 1.0f;

int main(int, char**)

	{

				tinyobj::real_t ty =



	//Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Count = 1;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	LoadObj(vertexlist, indexList);

	SDL_Quit();

	m_IndexCount = icount;

	{

	ConstantMaterial material; //物体の質感

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_DestroyWindow(win);



				indexlist.push_back(index);

		KEY_PRESS_SURFACE_RIGHT,



	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	Vertex* pVList = new Vertex[vcount];

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				break;

	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



				break;

};



	//ビューポート設定

		SDL_Delay(1000);

		}

		SDL_RenderClear(ren);

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D_FEATURE_LEVEL level;

	/*

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Viewport.Width = (FLOAT)rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	D3D11_TEXTURE2D_DESC txDesc;

	{

	Vertex* pVList = new Vertex[vcount];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pDevice = NULL;

};

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SAFE_RELEASE(m_pSampler);

	m_pDevice = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





void CD3DTest::Release()

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_DestroyTexture(tex);

	HRESULT              hr;

	}





	flags |= D3D11_CREATE_DEVICE_DEBUG;

			case SDLK_RIGHT:



		return hr;

				tinyobj::real_t tx =

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& materials = reader.GetMaterials();

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pVertexShader);

	m_pInputLayout = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	//Vertex* pVList = new Vertex[vcount];

	::GetClientRect(hwnd, &rect);

	scDesc.SampleDesc.Quality = 0;

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	//定数バッファ作成

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.MinDepth = 0.0f;

	//vector<Vertex> vertex_t;

	}



	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Quit();



			for (size_t v = 0; v < num_vertices; v++)

		}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	while (SDL_PollEvent(&e) != 0)



		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		KEY_PRESS_SURFACE_RIGHT,

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

};

CD3DTest::CD3DTest()

	m_Viewport.TopLeftY = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



				break;

	vbDesc.MiscFlags = 0;



		delete[] pIList;

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_DOWN,

	m_pSampler = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.SampleDesc.Count = 1;

	pBackBuffer->Release();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	auto& attrib = reader.GetAttrib();

				WORD index = idx.vertex_index;

	SDL_FreeSurface(bmp);

	m_pDepthStencilTexture = NULL;

	SDL_DestroyWindow(win);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	for (const auto& shape : shapes)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);



				break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}



			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t tx =

	//vector<WORD> index_t;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.MiscFlags = 0;

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Event e;



	SAFE_RELEASE(m_pTexture);

	std::string imagePath = "hello.bmp";



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



CD3DTest::~CD3DTest()

	m_pVertexBuffer = NULL;

	/*

	vbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

		&level,

	//vector<Vertex> vertex_t;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	Release();





	//頂点シェーダー生成

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.BufferCount = 1;

	{

	m_pSwapChain = NULL;

	m_Angle += XMConvertToRadians(1.0f);

		&error,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pMatrixBuffer = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext = NULL;

	vector<Vertex> vertexlist;

	if (FAILED(hr))



			{

	// Loop over shapes

	}

		NULL,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.Height = rect.Height();



	m_pIndexBuffer = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



		&m_pDevice,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//頂点レイアウト作成

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	m_IndexCount = icount;

	m_Viewport.TopLeftX = 0;

	m_pTextureView = NULL;

	irData.SysMemSlicePitch = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#include <iostream>

			case SDLK_LEFT:

		KEY_PRESS_SURFACE_DOWN,



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMFLOAT4         ambient;  //環境光(r,g,b)

		size_t index_offset = 0;  // インデントのオフセット

	auto& materials = reader.GetMaterials();



		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

		flags,



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_RIGHT,

}

	Release();

	XMFLOAT4         eyePos;   //視点座標

}


#include <SDL.h>

		{

	}

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pSampler);

			case SDLK_RIGHT:

	}

#ifdef _DEBUG

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	std::string error;

	ConstantLightBuffer clb;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				// access to vertex

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	m_pLightBuffer = NULL;

		if (!reader.Error().empty())

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSampler);



	WORD   icount = indexList.size();

	for (int j = 0; j < icount; j++)

		return 1;

}





				tinyobj::real_t ty =

	LoadObj(vertexlist, indexList);



		//User requests quit

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		1,

		return hr;

			//Select surfaces based on key press

	//頂点シェーダー生成

using std::cout; using std::endl;

	D3D11_SAMPLER_DESC smpDesc;

	dsDesc.Format = txDesc.Format;



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

}

	ibDesc.StructureByteStride = 0;

	delete[] pVList;

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t ty =

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

struct ConstantMaterial {

		delete[] pIList;



		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pMatrixBuffer);



#include <SDL.h>

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.StructureByteStride = 0;

	vrData.pSysMem = &pVList[0];



		else if (e.type == SDL_KEYDOWN)

		&attrib,

	Release();



	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_RIGHT,





	std::string inputfile = "test.obj";



			default:

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		&scDesc,

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	D3D11_SAMPLER_DESC smpDesc;

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (m_pImmediateContext)



	m_pTextureView = NULL;

	if (!error.empty())

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	m_pImmediateContext = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				indexlist.push_back(idx.vertex_index);

			index_offset += num_vertices;

	vbDesc.MiscFlags = 0;

	//定数バッファ作成





	ibDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.MipLevels = 1;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

}
	std::string inputfile = "test.obj";

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];







	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		m_pImmediateContext->ClearState();

		delete[] pVList;

	if (FAILED(hr))

		&scDesc,

	SDL_DestroyRenderer(ren);

	txDesc.SampleDesc.Quality = 0;



	}





		&m_pSwapChain,

		KEY_PRESS_SURFACE_DEFAULT,

				break;

		//User requests quit

			for (size_t v = 0; v < fv; v++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (m_pImmediateContext)

		1,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&level,

	{





}
		R"(cube.obj)");

	//Create Index

	XMFLOAT4X4 world;

}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.CPUAccessFlags = 0;

			{





	vector<WORD> indexList;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		delete[] pIList;

	cbDesc.CPUAccessFlags = 0;





		}

	}*/

	XMStoreFloat4(&clb.eyePos, eye);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//Vertex* pVList = new Vertex[vcount];

	enum KeyPressSurfaces



	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pLightBuffer = NULL;



	for (int i = 0; i < vcount; i++)

}

			default:

struct ConstantMatrixBuffer {

{

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::GetClientRect(hwnd, &rect);

		return hr;



	SAFE_RELEASE(m_pIndexBuffer);

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_DEFAULT,



	ID3D11Texture2D* pBackBuffer;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



	if (FAILED(hr))

		delete[] pIList;

	return;



struct ConstantLightBuffer {

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SDL_DestroyTexture(tex);

	}

		R"(cube.obj)");



	}





	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (!reader.Error().empty())

	cbDesc.CPUAccessFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

}

	//深度ステンシルバッファ作成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





#include <iostream>

	XMStoreFloat4(&clb.ambient, lightAmbient);



	irData.pSysMem = &pIList[0];

	SDL_FreeSurface(bmp);

	Release();

	for (const auto& shape : shapes)

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_UP:

	auto& materials = reader.GetMaterials();

	WORD* pIList = new WORD[icount];

				indexlist.push_back(idx.vertex_index);

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		&scDesc,



	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





		&materials,

		cout << "SDL_INIT_ERROR" << endl;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.SampleDesc.Count = 1;

		return hr;

	m_pSwapChain = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

		SDL_RenderPresent(ren);



}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}



	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

{

				// access to vertex

}

}

	txDesc.Width = rect.Width();

	m_pVertexBuffer = NULL;

	vbDesc.StructureByteStride = 0;



	//ピクセルシェーダー生成

	return 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	txDesc.Height = rect.Height();

		&m_pDevice,





	m_pPixelShader = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		SDL_Delay(1000);

struct ConstantLightBuffer {

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	// Loop over shapes

#include <SDL.h>

	D3D11_BUFFER_DESC vbDesc;

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyWindow(win);

	//深度ステンシルバッファ作成

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pImmediateContext);

		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_IndexCount = 0;

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void CD3DTest::Release()

	m_pIndexBuffer = NULL;



CD3DTest::~CD3DTest()



	{





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{



	WORD   icount = indexList.size();

	{

	m_pPixelShader = NULL;

		//User requests quit

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

int main(int, char**)

		&attrib,

	m_pTexture = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



			case SDLK_LEFT:

	SDL_Quit();

		}

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ZeroMemory(&txDesc, sizeof(txDesc));

		}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.SampleDesc.Quality = 0;

{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pRenderTargetView);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	vrData.SysMemSlicePitch = 0;

	std::string error;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.ArraySize = 1;



				break;

	//頂点バッファ作成

	if (FAILED(hr))



		pIList[j] = indexList[j];

	SDL_DestroyRenderer(ren);

				break;

#include <iostream>

	Vertex* pVList = new Vertex[vcount];

	ibDesc.CPUAccessFlags = 0;



				break;

	XMFLOAT4 pos;               //座標(x,y,z)

 */

	{

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

		return hr;



	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderPresent(ren);

	//ピクセルシェーダー生成

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pMatrixBuffer);



		m_pImmediateContext->ClearState();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		SDL_RenderClear(ren);

{

#include "DirectXManager.h"

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		NULL,

	if (FAILED(hr))

	for (const auto& shape : shapes)





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		// Loop over faces(polygon)

		return hr;

		return hr;







	XMStoreFloat4(&clb.material.ambient, materialAmbient);









				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderPresent(ren);

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

#endif

	m_pInputLayout = NULL;



	D3D11_SAMPLER_DESC smpDesc;







	return hr;

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	Release();



	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_FreeSurface(suf);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Event e;

	{

		}

	m_pInputLayout = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



using std::cout; using std::endl;

struct ConstantLightBuffer {

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.Height = rect.Height();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	m_pSwapChain = NULL;

		NULL,

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.CPUAccessFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			switch (e.key.keysym.sym)

	::GetClientRect(hwnd, &rect);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		if (!reader.Error().empty())



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	if (!error.empty())

	txDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_LEFT,

				vertex.push_back(vertex_tmp);

#include <SDL.h>

	txDesc.CPUAccessFlags = 0;

	pBackBuffer->Release();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

	m_IndexCount = icount;

		return hr;

	vbDesc.StructureByteStride = 0;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemSlicePitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			index_offset += fv;

	cbDesc.CPUAccessFlags = 0;

	m_pSwapChain = NULL;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantLight    pntLight; //点光源



	SAFE_RELEASE(m_pDepthStencilView);



	XMFLOAT4X4 world;

	D3D11_TEXTURE2D_DESC txDesc;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	Vertex* pVList = new Vertex[vcount];



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pMatrixBuffer = NULL;

		return hr;

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t ty =

	m_pLightBuffer = NULL;

	pBackBuffer->Release();

struct ConstantLight {

	txDesc.MiscFlags = 0;

				break;

	dsDesc.Format = txDesc.Format;

	std::string inputfile = "test.obj";



	float    nearZ = 0.1f;

	if (m_pImmediateContext)



	UINT strides = sizeof(Vertex);

	m_IndexCount = icount;

using std::cout; using std::endl;

	//vector<Vertex> vertex_t;

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			//Select surfaces based on key press





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return;





	txDesc.Height = rect.Height();

	scDesc.BufferCount = 1;

		size_t index_offset = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyRenderer(ren);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

	vrData.SysMemPitch = 0;

	if (m_pImmediateContext)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	// Loop over shapes



				vertex.push_back(vertex_tmp);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Vertex* pVList = new Vertex[vcount];

	cbDesc.StructureByteStride = 0;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::string inputfile = "test.obj";

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&shapes,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::string inputfile = "test.obj";

	vector<Vertex> vertexlist;

				vertex.push_back(vertex_tmp);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		flags,

	int     vcount = vertexlist.size();



			case SDLK_LEFT:

	XMFLOAT4 pos;               //座標(x,y,z)

	dsDesc.Format = txDesc.Format;

	m_Viewport.MinDepth = 0.0f;

	};

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	std::string error;

		SDL_Delay(1000);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

			case SDLK_UP:

	for (int i = 0; i < 3; i++)



	SDL_DestroyTexture(tex);



	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<WORD> indexList;

		&level,

	XMStoreFloat4(&clb.eyePos, eye);

			{

		&materials,

	SDL_DestroyTexture(tex);

	/*

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext = NULL;

			case SDLK_LEFT:



		return 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.ArraySize = 1;

	m_pVertexShader = NULL;



	HRESULT              hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA vrData;

		&m_pDevice,

	D3D11_SUBRESOURCE_DATA vrData;





struct ConstantMatrixBuffer {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vbDesc.CPUAccessFlags = 0;





	vrData.pSysMem = &pVList[0];

	vector<WORD> indexList;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (int i = 0; i < vcount; i++)

	cbDesc.StructureByteStride = 0;

};

		D3D_DRIVER_TYPE_HARDWARE,

				// access to vertex

	m_VertexCount = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.ArraySize = 1;

	//頂点レイアウト作成

	}

	//Key press surfaces constants

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			index_offset += num_vertices;

				tinyobj::real_t tx =



	}

	txDesc.SampleDesc.Count = 1;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ZeroMemory(&txDesc, sizeof(txDesc));

		KEY_PRESS_SURFACE_RIGHT,

{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	txDesc.CPUAccessFlags = 0;

		SDL_RenderPresent(ren);

				break;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	XMFLOAT4 specular;          //反射(r,g,b)



	bool ret = tinyobj::LoadObj(

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

	LoadObj(vertexlist, indexList);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			index_offset += num_vertices;

	ibDesc.MiscFlags = 0;

		&shapes,





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.StructureByteStride = 0;

			case SDLK_UP:

		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4X4 world;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	ConstantLightBuffer clb;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	XMFLOAT4         eyePos;   //視点座標

	//vector<WORD> index_t;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::material_t> materials;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		R"(cube.obj)");

		{



	return 0;

	while (SDL_PollEvent(&e) != 0)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_IndexCount = icount;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{

{





	Vertex* pVList = new Vertex[vcount];

	}



	SAFE_RELEASE(m_pMatrixBuffer);

	UINT strides = sizeof(Vertex);

				break;

			case SDLK_UP:

	txDesc.SampleDesc.Count = 1;

	D3D11_BUFFER_DESC ibDesc;

	D3D11_TEXTURE2D_DESC txDesc;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	float    nearZ = 0.1f;

	txDesc.Width = rect.Width();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	float    farZ = 100.0f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{



	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	int     vcount = vertexlist.size();



	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{



	m_pRenderTargetView = NULL;

	std::string error;

		//User presses a key

	//vector<WORD> index_t;

	{

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_FreeSurface(bmp);

			}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pImmediateContext);





		&m_pImmediateContext);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



{

	SDL_DestroyWindow(win);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//vector<Vertex> vertex_t;

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };


