



				break;

	txDesc.SampleDesc.Quality = 0;

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

	{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

			index_offset += fv;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



}

		{

	scDesc.OutputWindow = hwnd;

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	scDesc.BufferCount = 1;



	XMFLOAT4         ambient;  //環境光(r,g,b)

		&scDesc,

		return hr;

	UINT flags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		&m_pDevice,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			// Loop over vertices in the face.





	SDL_DestroyWindow(win);

	if (FAILED(hr))

		{





	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t ty =

		KEY_PRESS_SURFACE_DOWN,

	if (m_pImmediateContext)

	{



		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#ifdef _DEBUG

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



struct ConstantMaterial {

	m_Angle += XMConvertToRadians(1.0f);

	ConstantMaterial material; //物体の質感

}





	SAFE_RELEASE(m_pPixelShader);

	//Create Index

		if (!reader.Error().empty())

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D_FEATURE_LEVEL level;





		delete[] pIList;

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

void CD3DTest::Release()



		&error,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	// Loop over shapes

	XMFLOAT4 pos;               //座標(x,y,z)







	std::vector<tinyobj::material_t> materials;

	ibDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

}

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	for (int j = 0; j < icount; j++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSwapChain->Present(0, 0);

void CD3DTest::Render()



			index_offset += num_vertices;

		D3D11_SDK_VERSION,

		return hr;

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pDevice = NULL;

	m_pDevice = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pSampler);

		m_pImmediateContext->ClearState();



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4(&clb.eyePos, eye);



	ConstantLightBuffer clb;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	m_pTexture = NULL;



	if (FAILED(hr))



	SAFE_RELEASE(m_pPixelShader);

	//深度ステンシルバッファ作成

		return hr;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	UINT flags = 0;

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



}

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pLightBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	auto& attrib = reader.GetAttrib();

		//User requests quit

	m_pInputLayout = NULL;

	vrData.pSysMem = &pVList[0];

	vbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	irData.SysMemSlicePitch = 0;





	m_pDepthStencilTexture = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	return hr;



	SAFE_RELEASE(m_pDepthStencilView);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMStoreFloat4(&clb.eyePos, eye);

	//Key press surfaces constants



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;





	D3D11_TEXTURE2D_DESC txDesc;

	m_pVertexShader = NULL;

		&scDesc,



	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		NULL,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	SAFE_RELEASE(m_pInputLayout);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain->Present(0, 0);





	scDesc.SampleDesc.Quality = 0;

		&scDesc,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.StructureByteStride = 0;

		&scDesc,



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.SampleDesc.Count = 1;



	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

		// Loop over faces(polygon)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

int SEGMENT = 36;

		cout << "SDL_INIT_ERROR" << endl;

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderClear(ren);

	}

		D3D_DRIVER_TYPE_HARDWARE,

				vertex.push_back(vertex_tmp);

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	vector<WORD> indexList;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

};

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pPixelShader);

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.MaxDepth = 1.0f;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	irData.SysMemSlicePitch = 0;



	D3D_FEATURE_LEVEL level;









	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		1,





	//テクスチャ読み込み

	D3D11_BUFFER_DESC ibDesc;



		&level,

};

	for (int i = 0; i < vcount; i++)

		cout << "SDL_INIT_ERROR" << endl;

	m_pDepthStencilView = NULL;

	m_IndexCount = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		pIList[j] = indexList[j];

	cbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&scDesc,

		{

	SDL_FreeSurface(suf);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pDepthStencilTexture = NULL;



	m_pDepthStencilTexture = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	m_IndexCount = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点バッファ作成

	for (const auto& shape : shapes)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.BufferCount = 1;





	m_pTextureView = NULL;

	return 0;



	ConstantLight    pntLight; //点光源

	//Clean up our objects and quit





	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4         eyePos;   //視点座標

	delete[] pIList;



using std::cout; using std::endl;

	LoadObj(vertexlist, indexList);

	m_pLightBuffer = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pRenderTargetView = NULL;



	vrData.pSysMem = &pVList[0];

	pBackBuffer->Release();

	SAFE_RELEASE(m_pSampler);

#include <iostream>

		}

	{

	std::vector<tinyobj::material_t> materials;

	D3D_FEATURE_LEVEL level;

	cbDesc.CPUAccessFlags = 0;

				break;

	}





	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

			{

	if (FAILED(hr))

struct ConstantLightBuffer {



	if (FAILED(hr))

		D3D11_SDK_VERSION,

HRESULT CD3DTest::Create(HWND hwnd)

}

	std::string imagePath = "hello.bmp";

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	reader_config.mtl_search_path = "./"; // Path to material files



	ConstantMatrixBuffer cmb;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vector<WORD> indexList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext = NULL;

		return hr;

	m_pDevice = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	ConstantLightBuffer clb;

	dsDesc.Texture2D.MipSlice = 0;

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyWindow(win);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 ambient;           //環境(r,g,b)

	for (const auto& shape : shapes)

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pIndexBuffer = NULL;

	while (SDL_PollEvent(&e) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		KEY_PRESS_SURFACE_UP,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{



	XMFLOAT4         ambient;  //環境光(r,g,b)

	//vector<WORD> index_t;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

	m_pDepthStencilView = NULL;

			case SDLK_RIGHT:



	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;





	m_Angle += XMConvertToRadians(1.0f);

{

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);



				vertex.push_back(vertex_tmp);

		if (e.type == SDL_QUIT)

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{





			{



CD3DTest::~CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



/*

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	for (int i = 0; i < 3; i++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Key press surfaces constants

	HRESULT              hr;





	//頂点レイアウト作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pDevice = NULL;

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	cbDesc.StructureByteStride = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <SDL.h>

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		if (e.type == SDL_QUIT)

}

};

	m_pLightBuffer = NULL;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	cbDesc.CPUAccessFlags = 0;



				WORD index = idx.vertex_index;

			int num_vertices = shape.mesh.num_face_vertices[f];



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.Height = rect.Height();

	txDesc.SampleDesc.Quality = 0;

#include <SDL.h>



	scDesc.Windowed = TRUE;

			case SDLK_DOWN:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}





	m_IndexCount = 0;

	auto& shapes = reader.GetShapes();

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	UINT flags = 0;

	float    fov = XMConvertToRadians(20.0f);

	//ビューポート設定

		SDL_RenderClear(ren);

}

				// access to vertex

	{

	cbDesc.MiscFlags = 0;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

	for (const auto& shape : shapes)

	XMFLOAT4X4 projection;

	delete[] pIList;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.CPUAccessFlags = 0;

	for (const auto& shape : shapes)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			int num_vertices = shape.mesh.num_face_vertices[f];

	Release();

	};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	auto& shapes = reader.GetShapes();

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

struct ConstantLight {





		if (e.type == SDL_QUIT)

CD3DTest::~CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)



#include <iostream>

}




				vertex.push_back(vertex_tmp);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&m_pDevice,

	if (m_pImmediateContext)

	m_pInputLayout = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return;

	m_VertexCount = 0;

	cbDesc.StructureByteStride = 0;



	m_Viewport.TopLeftY = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

	SAFE_RELEASE(m_pLightBuffer);



	vrData.SysMemPitch = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	//頂点レイアウト作成

struct ConstantLight {

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.MipLevels = 1;

	SDL_FreeSurface(bmp);

};



	D3D11_SUBRESOURCE_DATA vrData;

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	SAFE_RELEASE(m_pSwapChain);

		&materials,

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	SDL_FreeSurface(bmp);

		SDL_Delay(1000);

	//頂点バッファ作成

			for (size_t v = 0; v < fv; v++)



			break;

		KEY_PRESS_SURFACE_UP,

		{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	auto& shapes = reader.GetShapes();

{

		pVList[i] = vertexlist[i];

				break;

	return 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (m_pImmediateContext)



	m_VertexCount = 0;

		return hr;



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	std::string error;

	//vector<WORD> index_t;

	scDesc.BufferDesc.Height = rect.Height();

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();



		}



		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.MipLevels = 1;

		if (!reader.Error().empty())

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string error;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT flags = 0;

{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		D3D11_SDK_VERSION,

}

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		pLevels,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pIndexBuffer = NULL;

	if (m_pImmediateContext)



	bool ret = tinyobj::LoadObj(

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	//Key press surfaces constants

		return hr;

	HRESULT              hr;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	std::vector<tinyobj::shape_t> shapes;



	::GetClientRect(hwnd, &rect);

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				WORD index = idx.vertex_index;







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				// access to vertex

	scDesc.SampleDesc.Quality = 0;



}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		D3D11_SDK_VERSION,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		{



	m_pImmediateContext = NULL;

	bool ret = tinyobj::LoadObj(

	//Create Index

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);







	txDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pPixelShader);

		size_t index_offset = 0;  // インデントのオフセット

		&scDesc,

#include <iostream>

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

CD3DTest::CD3DTest()

			int num_vertices = shape.mesh.num_face_vertices[f];

	bool ret = tinyobj::LoadObj(

		SDL_RenderClear(ren);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

}

	for (int i = 0; i < 3; i++)

	dsDesc.Texture2D.MipSlice = 0;

/*



	HRESULT              hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;



	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	for (const auto& shape : shapes)

			for (size_t v = 0; v < fv; v++)

		else if (e.type == SDL_KEYDOWN)

		//User requests quit

	//頂点バッファ作成

	}

	m_pSwapChain = NULL;

	m_pTextureView = NULL;



	};

		pVList[i] = vertexlist[i];

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			default:

	SAFE_RELEASE(m_pDevice);

		}

				break;

	SDL_DestroyTexture(tex);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_Viewport.MinDepth = 0.0f;

	//頂点シェーダー生成

	scDesc.SampleDesc.Count = 1;

	ConstantLightBuffer clb;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		if (e.type == SDL_QUIT)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pRenderTargetView);



	reader_config.mtl_search_path = "./"; // Path to material files

	return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 specular;          //反射(r,g,b)



			case SDLK_UP:

	txDesc.Height = rect.Height();

		SDL_RenderPresent(ren);





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			for (size_t v = 0; v < fv; v++)

		if (!reader.Error().empty())

 */

	XMFLOAT4         ambient;  //環境光(r,g,b)

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	//頂点シェーダー生成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<Vertex> vertexlist;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_VertexCount = vcount;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

		&scDesc,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pVertexShader = NULL;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	ConstantMatrixBuffer cmb;

	dsDesc.Format = txDesc.Format;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//インデックスバッファ作成

	txDesc.SampleDesc.Quality = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	if (!error.empty())

	cbDesc.CPUAccessFlags = 0;

};

		{

			// Loop over vertices in the face.

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.SampleDesc.Count = 1;

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			index_offset += fv;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pTextureView);

void CD3DTest::Render()



		// Loop over faces(polygon)

	//頂点シェーダー生成

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pSwapChain);

	m_IndexCount = icount;







		size_t index_offset = 0;



	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,





};



		pLevels,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//Key press surfaces constants

	vector<WORD> indexList;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//vector<Vertex> vertex_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	WORD   icount = indexList.size();



			}

	m_pMatrixBuffer = NULL;



{



	txDesc.ArraySize = 1;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;



int SEGMENT = 36;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

		SDL_Delay(1000);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	}

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

			case SDLK_RIGHT:



 */



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

/*





		pVList[i] = vertexlist[i];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				// access to vertex

	scDesc.SampleDesc.Quality = 0;

		delete[] pIList;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

		//User requests quit

	SAFE_RELEASE(m_pPixelShader);

			int num_vertices = shape.mesh.num_face_vertices[f];



 */

	ConstantLightBuffer clb;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL level;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

 */

			// Loop over vertices in the face.

	//Key press surfaces constants

		SDL_RenderPresent(ren);

	{

		KEY_PRESS_SURFACE_DEFAULT,

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSwapChain = NULL;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_RenderPresent(ren);

				indexlist.push_back(index);



	XMFLOAT4X4 projection;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;



};

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		KEY_PRESS_SURFACE_DEFAULT,

	D3D_FEATURE_LEVEL level;

	m_pSwapChain->Present(0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pLightBuffer = NULL;

	txDesc.SampleDesc.Count = 1;

	//Clean up our objects and quit



		delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilView);

	dsDesc.Format = txDesc.Format;

		SDL_Delay(1000);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//頂点レイアウト作成



	m_pRenderTargetView = NULL;

	if (!error.empty())

	{

	SDL_FreeSurface(suf);

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//vector<Vertex> vertex_t;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_FreeSurface(bmp);

	m_pSwapChain = NULL;

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SDL_DestroyTexture(tex);







		return hr;

	float    farZ = 100.0f;

			switch (e.key.keysym.sym)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	for (const auto& shape : shapes)

	txDesc.SampleDesc.Count = 1;

	};

	{

};

	txDesc.MipLevels = 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.SampleDesc.Count = 1;

	m_pRenderTargetView = NULL;



	scDesc.BufferDesc.Height = rect.Height();

{

		&scDesc,

	XMFLOAT4 specular;          //反射(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.SampleDesc.Quality = 0;

		return hr;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	irData.SysMemPitch = 0;

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pMatrixBuffer);

	std::string inputfile = "test.obj";

	return hr;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&scDesc,



	if (FAILED(hr))

	//頂点シェーダー生成

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//Clean up our objects and quit

	txDesc.ArraySize = 1;

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		return hr;

		size_t index_offset = 0;  // インデントのオフセット

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

		size_t index_offset = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	tinyobj::ObjReaderConfig reader_config;

	Release();

};

	vector<WORD> indexList;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_SUBRESOURCE_DATA vrData;



	SDL_Quit();

	irData.SysMemPitch = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	m_pSwapChain->Present(0, 0);

	//頂点シェーダー生成

	txDesc.ArraySize = 1;

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

void CD3DTest::Render()

		&error,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pDevice,

		}

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	{

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		//User requests quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_VertexCount = vcount;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		}

	dsDesc.Texture2D.MipSlice = 0;



	//Vertex* pVList = new Vertex[vcount];

		return hr;

				tinyobj::real_t tx =

	//頂点シェーダー生成

}
	flags |= D3D11_CREATE_DEVICE_DEBUG;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	txDesc.SampleDesc.Count = 1;

	{

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

struct ConstantLightBuffer {



	SAFE_RELEASE(m_pTextureView);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pPixelShader);



	return;



	ID3D11Texture2D* pBackBuffer;

		NULL,



		return hr;

	m_Viewport.MaxDepth = 1.0f;

				vertex.push_back(vertex_tmp);



	};

		pLevels,

	m_VertexCount = vcount;





	while (SDL_PollEvent(&e) != 0)

	tinyobj::ObjReaderConfig reader_config;

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

#endif

	scDesc.SampleDesc.Quality = 0;

	delete[] pVList;

				indexlist.push_back(index);

	if (!error.empty())

		return hr;

	}

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	flags |= D3D11_CREATE_DEVICE_DEBUG;







	//vector<WORD> index_t;

		cout << "SDL_INIT_ERROR" << endl;



				indexlist.push_back(index);

				WORD index = idx.vertex_index;



		if (!ret)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	if (!reader.Warning().empty())

	m_pMatrixBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		//User requests quit



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

{

{

		return hr;

			exit(1);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

struct ConstantLight {





	int     vcount = vertexlist.size();



				WORD index = idx.vertex_index;



	m_pPixelShader = NULL;

{



		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pVertexBuffer);



	vbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

	m_pSwapChain->Present(0, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	for (int j = 0; j < icount; j++)

	std::string imagePath = "hello.bmp";

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& shapes = reader.GetShapes();

	Release();

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

	std::string inputfile = "test.obj";

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		if (e.type == SDL_QUIT)

	cbDesc.CPUAccessFlags = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pPixelShader);

	m_pLightBuffer = NULL;

	SDL_FreeSurface(suf);

	m_pImmediateContext = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



};

	txDesc.MiscFlags = 0;

	int     vcount = vertexlist.size();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vrData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;



	/*



	SDL_DestroyTexture(tex);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	irData.SysMemSlicePitch = 0;

	return hr;



	ID3D11Texture2D* pBackBuffer;

}
}





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&attrib,

	XMFLOAT4X4 projection;



	txDesc.Height = rect.Height();

	::GetClientRect(hwnd, &rect);

	CRect                rect;

{



	UINT flags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



			case SDLK_UP:

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	irData.SysMemPitch = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.CPUAccessFlags = 0;

			}

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

	for (size_t s = 0; s < shapes.size(); s++)

	LoadObj(vertexlist, indexList);

	ibDesc.StructureByteStride = 0;

	//Create Index

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







	SDL_Quit();

CD3DTest::CD3DTest()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Event e;

	m_pDepthStencilTexture = NULL;

	SDL_DestroyTexture(tex);



		KEY_PRESS_SURFACE_DOWN,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	::ZeroMemory(&scDesc, sizeof(scDesc));





	//頂点バッファ作成



	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			index_offset += num_vertices;



		size_t index_offset = 0;  // インデントのオフセット

				WORD index = idx.vertex_index;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 specular;          //反射(r,g,b)

	auto& shapes = reader.GetShapes();

	WORD* pIList = new WORD[icount];

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		NULL,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.CPUAccessFlags = 0;

	txDesc.MiscFlags = 0;





			for (size_t v = 0; v < fv; v++)

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderPresent(ren);



	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return 1;

	txDesc.SampleDesc.Count = 1;





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

		NULL,

			}

	//頂点バッファ作成

	//vector<WORD> index_t;

	m_pLightBuffer = NULL;

	}

	m_pInputLayout = NULL;

	cbDesc.MiscFlags = 0;



	m_Viewport.MaxDepth = 1.0f;





		&m_pImmediateContext);



			index_offset += num_vertices;

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				// access to vertex

	scDesc.SampleDesc.Count = 1;

	//頂点シェーダー生成

		flags,



	::GetClientRect(hwnd, &rect);

}

	m_Angle += XMConvertToRadians(1.0f);

		&scDesc,



		{



	delete[] pVList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

#include <iostream>







		}

struct ConstantMatrixBuffer {

	//頂点シェーダー生成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	XMFLOAT4X4 view;



				tinyobj::real_t ty =

struct ConstantLightBuffer {

	{

int main(int, char**)



}

		SDL_Delay(1000);

	for (const auto& shape : shapes)



	if (FAILED(hr))

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	return 0;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	scDesc.BufferCount = 1;

};

		delete[] pVList;

	txDesc.SampleDesc.Quality = 0;



				indexlist.push_back(idx.vertex_index);

				// access to vertex

		&m_pDevice,

	{



	irData.pSysMem = &pIList[0];



	vbDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		{

		}





{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

	m_pDepthStencilTexture = NULL;

	}

struct ConstantMaterial {

HRESULT CD3DTest::Create(HWND hwnd)



	//定数バッファ作成

		if (e.type == SDL_QUIT)

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pSwapChain);

{

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pRenderTargetView);

		{

	D3D11_SUBRESOURCE_DATA irData;

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#include <iostream>

	XMFLOAT4X4 world;

	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		{





		SDL_Delay(1000);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Count = 1;

	irData.pSysMem = &pIList[0];

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT flags = 0;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;



	m_pRenderTargetView = NULL;





				break;







	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pDepthStencilView = NULL;

			{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



CD3DTest::CD3DTest()

	return;

	ConstantLight    pntLight; //点光源

		SDL_Delay(1000);

	ConstantMaterial material; //物体の質感

				vertex.push_back(vertex_tmp);

	txDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

	SDL_DestroyWindow(win);



	m_pInputLayout = NULL;

	//インデックスバッファ作成



}
	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

{

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::string imagePath = "hello.bmp";

		return hr;



	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pIndexBuffer = NULL;

		D3D11_SDK_VERSION,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;





	vrData.pSysMem = &pVList[0];

			for (size_t v = 0; v < fv; v++)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	return 0;





#include <SDL.h>

		return hr;

	SDL_FreeSurface(suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	m_pDevice = NULL;

			case SDLK_UP:

	CRect                rect;

	vrData.SysMemPitch = 0;

/*

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyTexture(tex);



	scDesc.BufferCount = 1;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	std::vector<tinyobj::material_t> materials;

		cout << "SDL_INIT_ERROR" << endl;

	return hr;

		&m_pDevice,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderClear(ren);

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_LEFT,



	}





	SDL_FreeSurface(bmp);

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pSampler);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.Height = rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pPixelShader);

	}

		return hr;

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_DOWN,

	if (m_pImmediateContext)

			index_offset += num_vertices;

	float    fov = XMConvertToRadians(20.0f);



			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t ty =

	if (FAILED(hr))

/*

	ConstantMaterial material; //物体の質感

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	LoadObj(vertexlist, indexList);

		D3D11_SDK_VERSION,





		exit(1);



	cbDesc.MiscFlags = 0;



	Vertex* pVList = new Vertex[vcount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ty =

				break;

		return hr;

		pVList[i] = vertexlist[i];

	dsDesc.Format = txDesc.Format;

	//vector<WORD> index_t;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		D3D_DRIVER_TYPE_HARDWARE,



		SDL_RenderClear(ren);



}

		KEY_PRESS_SURFACE_TOTAL

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.Format = txDesc.Format;

		delete[] pVList;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

/*

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	return hr;

		SDL_RenderPresent(ren);

	delete[] pIList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4 pos;               //座標(x,y,z)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

struct ConstantLight {

	SDL_DestroyWindow(win);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



			for (size_t v = 0; v < fv; v++)



	SDL_Quit();

	}

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	txDesc.MiscFlags = 0;



		&level,

	SDL_FreeSurface(bmp);

	m_pTextureView = NULL;



	m_pDepthStencilView = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}
	std::vector<tinyobj::shape_t> shapes;

		&level,

}

	//vector<Vertex> vertex_t;

		return hr;

struct ConstantLight {

	vbDesc.MiscFlags = 0;

	}

	SDL_DestroyTexture(tex);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.MiscFlags = 0;

 */



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderPresent(ren);

}

}



	ConstantLight    pntLight; //点光源





	XMStoreFloat4(&clb.eyePos, eye);

	SDL_DestroyWindow(win);

	}*/



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

		SDL_Delay(1000);

		{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	//定数バッファ作成

using std::cout; using std::endl;

		return hr;

	SDL_FreeSurface(suf);

	std::vector<tinyobj::material_t> materials;



HRESULT CD3DTest::Create(HWND hwnd)







	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	ibDesc.CPUAccessFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				indexlist.push_back(idx.vertex_index);

{

			{

	XMStoreFloat4(&clb.material.specular, materialSpecular);



void CD3DTest::Render()

		}



				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		{

		}

		KEY_PRESS_SURFACE_DEFAULT,



				vertex.push_back(vertex_tmp);





		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.StructureByteStride = 0;

};

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//ビューポート設定



	SAFE_RELEASE(m_pTexture);

	m_Angle += XMConvertToRadians(1.0f);

	std::string inputfile = "test.obj";

		delete[] pIList;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&m_pDevice,

	m_pSwapChain->Present(0, 0);

	m_IndexCount = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pPixelShader);

	ConstantLightBuffer clb;

	irData.pSysMem = &pIList[0];

		return hr;

	if (m_pImmediateContext)

	scDesc.BufferCount = 1;

	ConstantMatrixBuffer cmb;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))



	std::vector<tinyobj::material_t> materials;

	m_pDepthStencilTexture = NULL;



		return hr;

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	/*

		//User requests quit

		&scDesc,

		&m_pSwapChain,

	if (!reader.Warning().empty())

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



{

	{

	vbDesc.MiscFlags = 0;

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	}

		}

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;

	D3D11_TEXTURE2D_DESC txDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ConstantMatrixBuffer cmb;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pImmediateContext);

	}

	tinyobj::attrib_t attrib;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			index_offset += fv;

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}



	auto& attrib = reader.GetAttrib();

		&shapes,

	m_IndexCount = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	//深度ステンシルバッファ作成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t ty =

	m_pSwapChain->Present(0, 0);

}

	std::vector<tinyobj::material_t> materials;

		size_t index_offset = 0;

		return hr;

	m_pInputLayout = NULL;

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pLightBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_UP:

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		cout << "SDL_INIT_ERROR" << endl;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#ifdef _DEBUG

	m_pIndexBuffer = NULL;

		&m_pSwapChain,

		{



	}

	SDL_DestroyRenderer(ren);



void CD3DTest::Render()

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

struct ConstantMatrixBuffer {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		R"(cube.obj)");

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	irData.SysMemSlicePitch = 0;

		1,

	tinyobj::ObjReader reader;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pMatrixBuffer = NULL;

	m_pVertexShader = NULL;

		&shapes,

	for (int i = 0; i < 3; i++)

		size_t index_offset = 0;  // インデントのオフセット

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

		&m_pDevice,

		}

		SDL_RenderPresent(ren);

	m_pTextureView = NULL;









	m_pTexture = NULL;

#include <iostream>

#include <iostream>

		}

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pDepthStencilView);



	SDL_Event e;

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pDepthStencilView = NULL;

		flags,

 */



		return hr;

	scDesc.BufferDesc.Width = rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ConstantLight    pntLight; //点光源

	ConstantMatrixBuffer cmb;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		if (e.type == SDL_QUIT)

int main(int, char**)

	UINT strides = sizeof(Vertex);

		NULL,

	return;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			case SDLK_RIGHT:

		return hr;

	for (int i = 0; i < vcount; i++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}





			for (size_t v = 0; v < fv; v++)

	txDesc.MipLevels = 1;

	vrData.SysMemSlicePitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_BUFFER_DESC ibDesc;

	}*/

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

		return hr;

};

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pIndexBuffer = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pLightBuffer = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pMatrixBuffer);

		pLevels,

	SDL_DestroyWindow(win);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#include <SDL.h>

	D3D_FEATURE_LEVEL level;

		//User requests quit

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			index_offset += fv;

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pRenderTargetView);

 */



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

	vbDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

int SEGMENT = 36;





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

struct ConstantMatrixBuffer {

	while (SDL_PollEvent(&e) != 0)

	::GetClientRect(hwnd, &rect);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);

		SDL_Delay(1000);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		}



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	enum KeyPressSurfaces

{

void CD3DTest::Render()

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		&materials,

	XMFLOAT4 pos;               //座標(x,y,z)

	//vector<WORD> index_t;

		{

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#endif

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_UP,



				WORD index = idx.vertex_index;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderPresent(ren);

	HRESULT              hr;

	pBackBuffer->Release();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	SAFE_RELEASE(m_pTexture);

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.BufferDesc.Height = rect.Height();

}

	txDesc.Height = rect.Height();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

#include "DirectXManager.h"

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

CD3DTest::CD3DTest()

		SDL_RenderClear(ren);

	//Create Index

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	tinyobj::ObjReader reader;

			}

{

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return 0;



	std::string error;







				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_IndexCount = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				indexlist.push_back(index);



	SAFE_RELEASE(m_pSwapChain);



		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pLightBuffer);



#include "DirectXManager.h"

				tinyobj::real_t ty =

		{

		pLevels,

	XMFLOAT4 specular;          //反射(r,g,b)

		KEY_PRESS_SURFACE_LEFT,



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		cout << "SDL_INIT_ERROR" << endl;

	}

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pPixelShader = NULL;

		}

		pLevels,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

		pLevels,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DOWN,

		cout << "SDL_INIT_ERROR" << endl;

	for (const auto& shape : shapes)

		if (!reader.Error().empty())

		}



	if (m_pImmediateContext)



#ifdef _DEBUG

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_FreeSurface(suf);

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.MipLevels = 1;

	//ピクセルシェーダー生成

int main(int, char**)



	std::string error;

		cout << "SDL_INIT_ERROR" << endl;

	std::string inputfile = "test.obj";

	//インデックスバッファ作成

	m_VertexCount = 0;

	if (FAILED(hr))



	m_pDepthStencilTexture = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

		R"(cube.obj)");



	ZeroMemory(&txDesc, sizeof(txDesc));

	{

		// Loop over faces(polygon)

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&scDesc,

	SAFE_RELEASE(m_pTexture);

		D3D_DRIVER_TYPE_HARDWARE,

	if (!error.empty())

	txDesc.MiscFlags = 0;

		D3D11_SDK_VERSION,

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	irData.SysMemPitch = 0;

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_BUFFER_DESC vbDesc;

	std::string error;



	ConstantMaterial material; //物体の質感

		delete[] pVList;

	m_pImmediateContext = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	auto& shapes = reader.GetShapes();

		if (!reader.Error().empty())

{

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pSwapChain);

	vector<WORD> indexList;

#include <iostream>

	SAFE_RELEASE(m_pDevice);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	txDesc.Width = rect.Width();

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

}

			for (size_t v = 0; v < fv; v++)

			index_offset += num_vertices;

	m_pImmediateContext = NULL;

void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//Clean up our objects and quit

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	SAFE_RELEASE(m_pInputLayout);

		R"(cube.obj)");

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	std::string imagePath = "hello.bmp";

	XMFLOAT4 ambient;           //環境(r,g,b)

	//インデックスバッファ作成



	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pDepthStencilTexture);

		size_t index_offset = 0;  // インデントのオフセット

	if (!reader.Warning().empty())





	txDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)

	SDL_DestroyTexture(tex);

	enum KeyPressSurfaces

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	int     vcount = vertexlist.size();





	//頂点バッファ作成

				vertex.push_back(vertex_tmp);

	D3D11_BUFFER_DESC ibDesc;



			exit(1);

		{

		return hr;

	//頂点シェーダー生成

	scDesc.BufferCount = 1;

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.StructureByteStride = 0;

	m_pVertexBuffer = NULL;

	m_pDepthStencilView = NULL;

	int     vcount = vertexlist.size();



	float    nearZ = 0.1f;

			}





	UINT strides = sizeof(Vertex);

	return 0;





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ConstantMaterial material; //物体の質感

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	WORD   icount = indexList.size();



				indexlist.push_back(index);

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pInputLayout);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.eyePos, eye);

	return 0;



	Release();

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.Windowed = TRUE;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDepthStencilView);



	XMStoreFloat4(&clb.ambient, lightAmbient);



	{

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			}

				indexlist.push_back(idx.vertex_index);

	}

	{

	m_pVertexShader = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vector<Vertex> vertexlist;

	m_pSwapChain = NULL;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		R"(cube.obj)");

void CD3DTest::Render()

	bool ret = tinyobj::LoadObj(

		&shapes,

struct ConstantMaterial {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Event e;





				break;

		&materials,

	enum KeyPressSurfaces



			exit(1);

	std::string inputfile = "test.obj";

	for (int i = 0; i < vcount; i++)

	SDL_FreeSurface(bmp);

		{





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





			{

	int     vcount = vertexlist.size();

	scDesc.Windowed = TRUE;

	txDesc.SampleDesc.Quality = 0;

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);











	m_pInputLayout = NULL;

		return hr;

	for (int i = 0; i < 3; i++)

	m_Viewport.TopLeftY = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 pos;               //座標(x,y,z)

	m_IndexCount = icount;

	scDesc.SampleDesc.Quality = 0;



	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (!reader.Warning().empty())

	return;





	}

	m_Viewport.MaxDepth = 1.0f;

	}

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_IndexCount = 0;

		}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Quit();



	auto& materials = reader.GetMaterials();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.Warning().empty())

CD3DTest::~CD3DTest()

	//頂点バッファ作成

	cbDesc.MiscFlags = 0;

		{

	cbDesc.MiscFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pDepthStencilTexture = NULL;

using std::cout; using std::endl;

	tinyobj::ObjReaderConfig reader_config;

	float    nearZ = 0.1f;



	UINT flags = 0;

			case SDLK_LEFT:



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	tinyobj::attrib_t attrib;

	delete[] pVList;

	m_pSwapChain = NULL;

	}





HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pDepthStencilTexture);

				break;

	}

	m_pVertexBuffer = NULL;



	XMFLOAT4X4 world;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (FAILED(hr))

		&materials,

	SDL_DestroyRenderer(ren);

	ConstantMaterial material; //物体の質感



		pVList[i] = vertexlist[i];

	for (int i = 0; i < vcount; i++)

	m_pDevice = NULL;

		&attrib,

		D3D11_SDK_VERSION,

		delete[] pVList;

}

				// access to vertex

int main(int, char**)

		SDL_RenderClear(ren);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				vertex.push_back(vertex_tmp);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		if (!ret)

	float    nearZ = 0.1f;

/*

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		//User requests quit

	m_pInputLayout = NULL;

	//First we need to start up SDL, and make sure it went ok

};

	return;

		SDL_Delay(1000);

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

	txDesc.Width = rect.Width();



	m_VertexCount = vcount;

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_TEXTURE2D_DESC txDesc;

using std::cout; using std::endl;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	CRect                rect;

	}

		}



{

	m_pImmediateContext = NULL;

	}

	{

};

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};

	auto& attrib = reader.GetAttrib();

};





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	tinyobj::ObjReader reader;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&level,

	scDesc.Windowed = TRUE;



{





#define TINYOBJLOADER_IMPLEMENTATION

		SDL_RenderClear(ren);

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DOWN,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		D3D_DRIVER_TYPE_HARDWARE,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_DestroyWindow(win);



	m_pPixelShader = NULL;

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	Release();

		{

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	HRESULT              hr;

		SDL_Delay(1000);

struct ConstantLightBuffer {

	if (FAILED(hr))

{

		pIList[j] = indexList[j];

	scDesc.BufferDesc.Width = rect.Width();

	m_pTextureView = NULL;

	Vertex* pVList = new Vertex[vcount];

		return 1;

		D3D_DRIVER_TYPE_HARDWARE,

			index_offset += num_vertices;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDevice);

		return hr;

}
			exit(1);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	txDesc.Width = rect.Width();





				break;

};

		KEY_PRESS_SURFACE_LEFT,



	}



	}

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{

}

{

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return hr;

	SAFE_RELEASE(m_pSampler);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantMatrixBuffer cmb;

	dsDesc.Format = txDesc.Format;

	reader_config.mtl_search_path = "./"; // Path to material files

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pTexture);



			{

	SAFE_RELEASE(m_pDepthStencilTexture);

	vrData.pSysMem = &pVList[0];

};

	}

	m_VertexCount = vcount;

		return hr;

	if (FAILED(hr))

	irData.SysMemPitch = 0;

		pIList[j] = indexList[j];

		if (!ret)

		{

		&scDesc,

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	delete[] pIList;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	//vector<Vertex> vertex_t;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (!reader.Error().empty())

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDepthStencilTexture = NULL;



}

	XMFLOAT4         ambient;  //環境光(r,g,b)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	DXGI_SWAP_CHAIN_DESC scDesc;

	WORD* pIList = new WORD[icount];



	scDesc.OutputWindow = hwnd;



	//Key press surfaces constants

		}

	m_Angle += XMConvertToRadians(1.0f);

void CD3DTest::Release()

	D3D11_BUFFER_DESC ibDesc;

	SDL_DestroyWindow(win);

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (m_pImmediateContext)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	CRect                rect;

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

};

	enum KeyPressSurfaces

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Angle += XMConvertToRadians(1.0f);

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			index_offset += fv;

				break;

	m_Viewport.Width = (FLOAT)rect.Width();

	pBackBuffer->Release();

	SDL_Event e;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Quit();

	SDL_Event e;

	dsDesc.Format = txDesc.Format;

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				indexlist.push_back(index);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_RIGHT:

		{

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pImmediateContext);



	scDesc.BufferCount = 1;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





		delete[] pIList;

};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantLight    pntLight; //点光源

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//深度ステンシルバッファ作成

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pSwapChain);

	ConstantLight    pntLight; //点光源

	XMFLOAT4X4 projection;

				break;

		SDL_RenderClear(ren);

	vbDesc.MiscFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION



		R"(cube.obj)");



	SDL_FreeSurface(suf);



	XMFLOAT4         eyePos;   //視点座標

		return hr;

		return hr;

	UINT strides = sizeof(Vertex);

	ConstantMatrixBuffer cmb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain->Present(0, 0);

		flags,

	if (FAILED(hr))



{

	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		exit(1);

	vector<WORD> indexList;

	tinyobj::attrib_t attrib;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_DOWN:

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		pLevels,

	{

	//Create Index

		SDL_RenderPresent(ren);

	ibDesc.MiscFlags = 0;

	SDL_Event e;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

				vertex.push_back(vertex_tmp);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderPresent(ren);

	irData.pSysMem = &pIList[0];

		}

	//頂点バッファ作成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantMatrixBuffer {



	ConstantLight    pntLight; //点光源

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.ambient, lightAmbient);



	scDesc.OutputWindow = hwnd;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pDepthStencilView = NULL;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





			}

	dsDesc.Format = txDesc.Format;

	SDL_DestroyRenderer(ren);

	//インデックスバッファ作成

int main(int, char**)

#include <iostream>

			switch (e.key.keysym.sym)

	{

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	//ピクセルシェーダー生成



				vertex.push_back(vertex_tmp);

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	irData.SysMemPitch = 0;

	pBackBuffer->Release();

	vrData.SysMemPitch = 0;





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	HRESULT              hr;

	return 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	SDL_FreeSurface(bmp);

	D3D11_BUFFER_DESC cbDesc;



int main(int, char**)

#include <SDL.h>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//ビューポート設定





struct ConstantMatrixBuffer {

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

		SDL_Delay(1000);

	//定数バッファ作成

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext = NULL;

#endif

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	dsDesc.Texture2D.MipSlice = 0;

		SDL_RenderPresent(ren);





	ZeroMemory(&txDesc, sizeof(txDesc));

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		D3D_DRIVER_TYPE_HARDWARE,

	ConstantMaterial material; //物体の質感

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ConstantMatrixBuffer cmb;

	return hr;

	SAFE_RELEASE(m_pVertexShader);

		NULL,

				break;

				WORD index = idx.vertex_index;

			}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	Release();

	//Clean up our objects and quit

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDevice);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	SAFE_RELEASE(m_pLightBuffer);

};



}


	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pDepthStencilView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

{

	SAFE_RELEASE(m_pTextureView);

	dsDesc.Texture2D.MipSlice = 0;



{



	ConstantLight    pntLight; //点光源

using std::cout; using std::endl;

	m_pDepthStencilTexture = NULL;

	scDesc.OutputWindow = hwnd;

		&materials,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	irData.pSysMem = &pIList[0];

	D3D11_TEXTURE2D_DESC txDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pVertexBuffer = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//First we need to start up SDL, and make sure it went ok



	}

		}



	SAFE_RELEASE(m_pVertexShader);



	txDesc.SampleDesc.Quality = 0;





}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//First we need to start up SDL, and make sure it went ok



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ConstantLightBuffer clb;

	scDesc.SampleDesc.Count = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



 * Lesson 1: Hello World!

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(bmp);

	for (const auto& shape : shapes)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



int main(int, char**)

		return hr;

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	m_VertexCount = vcount;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();



	if (FAILED(hr))

{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	if (SDL_Init(SDL_INIT_VIDEO != 0))



	float    nearZ = 0.1f;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		delete[] pIList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&attrib,





	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

/*

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	}*/



{

			index_offset += num_vertices;







	SDL_FreeSurface(suf);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.MiscFlags = 0;



		//User requests quit

	m_Viewport.MaxDepth = 1.0f;

#include "DirectXManager.h"

}





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			case SDLK_DOWN:

{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	{

		if (e.type == SDL_QUIT)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		//User requests quit

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

			index_offset += fv;

	scDesc.BufferDesc.Height = rect.Height();

	for (const auto& shape : shapes)

	}

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

			case SDLK_DOWN:

				// access to vertex



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//頂点バッファ作成

{

	D3D11_BUFFER_DESC vbDesc;

	m_pLightBuffer = NULL;





		return hr;

		R"(cube.obj)");

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyTexture(tex);

	//First we need to start up SDL, and make sure it went ok

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

				break;

}



	m_pSwapChain->Present(0, 0);

				WORD index = idx.vertex_index;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	//定数バッファ作成



	Release();

	while (SDL_PollEvent(&e) != 0)

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)

	return 0;

	//頂点バッファ作成

	m_pDepthStencilTexture = NULL;

	SDL_Quit();

			case SDLK_RIGHT:

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);



	for (int j = 0; j < icount; j++)

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pLightBuffer);

	vrData.pSysMem = &pVList[0];



	dsDesc.Texture2D.MipSlice = 0;



	}

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))



	scDesc.SampleDesc.Count = 1;

		1,





	SAFE_RELEASE(m_pVertexShader);



	//テクスチャ読み込み

	txDesc.CPUAccessFlags = 0;

		return hr;

				// access to vertex

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pSwapChain->Present(0, 0);

		&shapes,



struct ConstantMatrixBuffer {



	if (!reader.Warning().empty())

				break;

}
	//頂点バッファ作成

	irData.SysMemSlicePitch = 0;



	irData.SysMemPitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&scDesc,

};

	SAFE_RELEASE(m_pInputLayout);

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

		&attrib,

	cbDesc.CPUAccessFlags = 0;

	};

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4X4 view;

	}

	{

	auto& materials = reader.GetMaterials();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pLightBuffer = NULL;

	//vector<WORD> index_t;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&attrib,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		else if (e.type == SDL_KEYDOWN)

	vbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;



}


	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyWindow(win);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

		return 1;

	{

	if (FAILED(hr))

	std::string inputfile = "test.obj";

			index_offset += num_vertices;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT





				break;

	//Clean up our objects and quit

#ifdef _DEBUG



		pVList[i] = vertexlist[i];

				vertex.push_back(vertex_tmp);

	m_pDepthStencilView = NULL;

	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	m_pInputLayout = NULL;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 specular;          //反射(r,g,b)

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



			default:







	{

{

				break;

		KEY_PRESS_SURFACE_LEFT,

		KEY_PRESS_SURFACE_RIGHT,

	vrData.SysMemPitch = 0;



	XMStoreFloat4(&clb.ambient, lightAmbient);

		&m_pImmediateContext);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			{

		&m_pDevice,

		}



 * Lesson 1: Hello World!

	ibDesc.MiscFlags = 0;

		exit(1);

	SDL_FreeSurface(bmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pLightBuffer);



		KEY_PRESS_SURFACE_TOTAL

		}

};

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_Delay(1000);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}



}

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}

		return hr;



	}

				WORD index = idx.vertex_index;

 * Lesson 1: Hello World!

	{



	m_pDepthStencilView = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

using std::cout; using std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = 0;

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Quit();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	tinyobj::ObjReader reader;



	vrData.SysMemPitch = 0;



	m_pIndexBuffer = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (size_t s = 0; s < shapes.size(); s++)

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	SDL_Event e;

	scDesc.OutputWindow = hwnd;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

 */



	{



	m_VertexCount = vcount;

		return hr;

struct ConstantLight {

	if (m_pImmediateContext)

		//User requests quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_VertexCount = 0;

		SDL_RenderClear(ren);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		{

		1,

}

	int     vcount = vertexlist.size();



	//First we need to start up SDL, and make sure it went ok



	SAFE_RELEASE(m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		}



}

	//テクスチャ読み込み

	m_pLightBuffer = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pVertexBuffer);

	m_pDevice = NULL;

	WORD* pIList = new WORD[icount];







		m_pImmediateContext->ClearState();

	CRect                rect;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;



	txDesc.Width = rect.Width();

			break;

{

		// Loop over faces(polygon)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantMatrixBuffer {



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 world;

	//Vertex* pVList = new Vertex[vcount];

	delete[] pIList;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//頂点バッファ作成

		{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ConstantLightBuffer clb;

		return hr;

			case SDLK_LEFT:

	scDesc.OutputWindow = hwnd;

	m_pTextureView = NULL;

	{

		SDL_Delay(1000);

		&materials,

#include <iostream>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

 * Lesson 1: Hello World!

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.SampleDesc.Quality = 0;

	auto& attrib = reader.GetAttrib();

};

}

		{

		R"(cube.obj)");

	::GetClientRect(hwnd, &rect);

	D3D_FEATURE_LEVEL level;

		return hr;







	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<WORD> index_t;

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

struct ConstantMatrixBuffer {

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ID3D11Texture2D* pBackBuffer;

#include <SDL.h>

		KEY_PRESS_SURFACE_LEFT,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()

	ConstantLight    pntLight; //点光源

	}

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	{

	float    fov = XMConvertToRadians(20.0f);

	ConstantLight    pntLight; //点光源

};

	scDesc.SampleDesc.Quality = 0;

			//Select surfaces based on key press

		SDL_RenderClear(ren);

	dsDesc.Format = txDesc.Format;

};

	txDesc.Width = rect.Width();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		else if (e.type == SDL_KEYDOWN)

	}

	if (FAILED(hr))



		SDL_RenderPresent(ren);





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		exit(1);

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.MipLevels = 1;



	DXGI_SWAP_CHAIN_DESC scDesc;

};

	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexShader);

int main(int, char**)

	scDesc.BufferCount = 1;

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		{

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		R"(cube.obj)");



	pBackBuffer->Release();

	auto& attrib = reader.GetAttrib();

	//定数バッファ作成



			}

			default:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	if (FAILED(hr))





		if (!ret)

	scDesc.BufferDesc.Width = rect.Width();



	//テクスチャ読み込み

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

struct ConstantLight {

	vrData.SysMemPitch = 0;

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantLightBuffer {

	XMFLOAT4X4 projection;

			case SDLK_DOWN:



		pLevels,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

};

	Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

 * Lesson 1: Hello World!

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vrData.SysMemSlicePitch = 0;

		&level,

	XMFLOAT4X4 view;

	SDL_FreeSurface(suf);

	XMFLOAT4 specular;          //反射(r,g,b)



	for (int j = 0; j < icount; j++)



	m_VertexCount = vcount;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pDevice);

	delete[] pVList;

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//テクスチャ読み込み

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_DOWN,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//vector<WORD> index_t;

	m_pRenderTargetView = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_SUBRESOURCE_DATA vrData;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	{

	m_Viewport.Width = (FLOAT)rect.Width();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//テクスチャ読み込み

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

	m_pSwapChain = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	}

		{

	SAFE_RELEASE(m_pVertexShader);





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

			{





			index_offset += num_vertices;

	bool ret = tinyobj::LoadObj(

	ibDesc.MiscFlags = 0;

{





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

	D3D11_TEXTURE2D_DESC txDesc;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;

	if (!error.empty())

struct ConstantMatrixBuffer {

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

			}

	}

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(idx.vertex_index);

		//User presses a key

	m_pVertexShader = NULL;



	scDesc.SampleDesc.Count = 1;

		// Loop over faces(polygon)

	m_Viewport.TopLeftX = 0;

	// Loop over shapes

	cbDesc.CPUAccessFlags = 0;

	m_pRenderTargetView = NULL;

		SDL_RenderClear(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	UINT offsets = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#include <iostream>

{

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

struct ConstantLight {

		&level,

	// Loop over shapes

}
	WORD   icount = indexList.size();





	ZeroMemory(&txDesc, sizeof(txDesc));

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 projection;

	if (FAILED(hr))

#include <SDL.h>

		return hr;

				tinyobj::real_t tx =

		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//テクスチャ読み込み



			}

	XMFLOAT4         eyePos;   //視点座標

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

int main(int, char**)

	}

	XMFLOAT4         eyePos;   //視点座標

	delete[] pIList;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyWindow(win);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string error;

	txDesc.Height = rect.Height();

		SDL_Delay(1000);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vrData.pSysMem = &pVList[0];

struct ConstantLight {

	XMFLOAT4 pos;               //座標(x,y,z)

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pInputLayout);

	vector<Vertex> vertexlist;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	return 0;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	pBackBuffer->Release();

	}

	vrData.pSysMem = &pVList[0];





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;



		{

			default:

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

		KEY_PRESS_SURFACE_UP,

	SDL_Quit();

	cbDesc.CPUAccessFlags = 0;





	m_pInputLayout = NULL;



	tinyobj::ObjReader reader;

	scDesc.Windowed = TRUE;

	SDL_Event e;

		R"(cube.obj)");

	D3D11_BUFFER_DESC ibDesc;

			}





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	UINT offsets = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



		return hr;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.TopLeftX = 0;

			index_offset += num_vertices;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.SampleDesc.Count = 1;



		if (e.type == SDL_QUIT)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	ConstantMatrixBuffer cmb;



	}



		KEY_PRESS_SURFACE_DOWN,

	//ビューポート設定

				break;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			default:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext = NULL;

				tinyobj::real_t ty =



	pBackBuffer->Release();

	std::vector<tinyobj::shape_t> shapes;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

	}

	ConstantLightBuffer clb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMaterial {

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.SampleDesc.Quality = 0;

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}

	m_VertexCount = 0;

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pTexture);

	::GetClientRect(hwnd, &rect);

HRESULT CD3DTest::Create(HWND hwnd)





	cbDesc.StructureByteStride = 0;



	if (!reader.Warning().empty())

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		KEY_PRESS_SURFACE_UP,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return 1;

		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	return 0;

		&m_pSwapChain,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



}


	irData.pSysMem = &pIList[0];



	irData.pSysMem = &pIList[0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&error,

	{

	//First we need to start up SDL, and make sure it went ok

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}



	cbDesc.CPUAccessFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ibDesc.StructureByteStride = 0;



	::GetClientRect(hwnd, &rect);

	LoadObj(vertexlist, indexList);

	enum KeyPressSurfaces



		cout << "SDL_INIT_ERROR" << endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pDevice = NULL;

	SDL_FreeSurface(suf);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	pBackBuffer->Release();

	/*



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



}



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		flags,

	DXGI_SWAP_CHAIN_DESC scDesc;

			{



				WORD index = idx.vertex_index;

	XMFLOAT4X4 view;

int main(int, char**)





	UINT flags = 0;

	irData.pSysMem = &pIList[0];



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		exit(1);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (!reader.Warning().empty())



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Key press surfaces constants

	D3D11_BUFFER_DESC vbDesc;





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();



		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

/*

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	float    farZ = 100.0f;

		SDL_RenderClear(ren);





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				break;

	SAFE_RELEASE(m_pTextureView);



{



	XMFLOAT4 pos;               //座標(x,y,z)



				break;

	delete[] pIList;

	if (FAILED(hr))

			case SDLK_UP:

	{

	UINT strides = sizeof(Vertex);

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	ID3D11Texture2D* pBackBuffer;

	m_pLightBuffer = NULL;





		return hr;

		KEY_PRESS_SURFACE_LEFT,

	m_pTextureView = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Quit();

#include "DirectXManager.h"



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	for (const auto& shape : shapes)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <SDL.h>

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string inputfile = "test.obj";



	if (FAILED(hr))

	}



	vbDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	m_pTextureView = NULL;



			{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



}

		{

	delete[] pVList;



	if (!reader.Warning().empty())

	/*

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_RenderClear(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

		return hr;

	cbDesc.CPUAccessFlags = 0;

	for (int i = 0; i < vcount; i++)



		pVList[i] = vertexlist[i];

	cbDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}







	if (FAILED(hr))

		}

	ConstantLightBuffer clb;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		delete[] pIList;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pInputLayout);

	float    nearZ = 0.1f;



	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);



	m_pVertexBuffer = NULL;

};

}

	if (!reader.Warning().empty())

 */

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	m_VertexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_IndexCount = icount;

		return hr;

	{

	m_pTextureView = NULL;

	ConstantLightBuffer clb;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	if (m_pImmediateContext)



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	//深度ステンシルバッファ作成

				vertex.push_back(vertex_tmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



			{

	ConstantMatrixBuffer cmb;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				// access to vertex



	UINT flags = 0;

		if (!ret)



void CD3DTest::Release()

{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

		}

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.eyePos, eye);





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;

		&materials,

	vrData.SysMemPitch = 0;

	}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.TopLeftY = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

HRESULT CD3DTest::Create(HWND hwnd)

				WORD index = idx.vertex_index;



		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//頂点バッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



struct ConstantMaterial {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

{

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pMatrixBuffer);

	D3D_FEATURE_LEVEL level;



	vector<Vertex> vertexlist;

	pBackBuffer->Release();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



struct ConstantLight {

			index_offset += fv;

	m_pTexture = NULL;

};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ConstantMatrixBuffer cmb;

	ConstantMatrixBuffer cmb;



		&scDesc,

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&level,



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//Vertex* pVList = new Vertex[vcount];

	m_IndexCount = 0;

	//ビューポート設定

			int num_vertices = shape.mesh.num_face_vertices[f];



			switch (e.key.keysym.sym)

			{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pImmediateContext);

	return 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			break;

		&attrib,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	irData.SysMemPitch = 0;

{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.Windowed = TRUE;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vrData.SysMemPitch = 0;

{

				indexlist.push_back(idx.vertex_index);

		if (!ret)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				// access to vertex

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	std::vector<tinyobj::material_t> materials;

				// access to vertex

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.CPUAccessFlags = 0;

	{



	}



	XMFLOAT4 ambient;           //環境(r,g,b)



		if (!ret)

{

	auto& attrib = reader.GetAttrib();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	std::string imagePath = "hello.bmp";

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	return hr;

				tinyobj::real_t tx =

};

{

	vrData.pSysMem = &pVList[0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_LEFT,



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.eyePos, eye);





	vbDesc.StructureByteStride = 0;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_Viewport.Height = (FLOAT)rect.Height();

#include <iostream>

		}

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	//定数バッファ作成

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 projection;

	m_pTexture = NULL;

			case SDLK_LEFT:

	}



		return hr;

	SAFE_RELEASE(m_pDevice);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<WORD> index_t;

	}*/





		&m_pImmediateContext);



	if (FAILED(hr))

		R"(cube.obj)");

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	txDesc.MiscFlags = 0;

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				indexlist.push_back(index);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		SDL_Delay(1000);

	XMFLOAT4 pos;               //座標(x,y,z)



		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantMaterial {



	for (const auto& shape : shapes)

	XMFLOAT4X4 view;

	while (SDL_PollEvent(&e) != 0)

	{



	m_pVertexShader = NULL;

		&m_pImmediateContext);

		return hr;

	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC vbDesc;

	m_pIndexBuffer = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pMatrixBuffer);



{

	txDesc.Width = rect.Width();

		&materials,

		KEY_PRESS_SURFACE_UP,

	cbDesc.MiscFlags = 0;



	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t ty =

	m_pDepthStencilView = NULL;

			case SDLK_LEFT:

		KEY_PRESS_SURFACE_TOTAL

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	std::string imagePath = "hello.bmp";

	{

	tinyobj::attrib_t attrib;

			case SDLK_DOWN:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Event e;

	return 0;

		R"(cube.obj)");

	SAFE_RELEASE(m_pVertexShader);

	m_pTexture = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

		D3D11_SDK_VERSION,

void CD3DTest::Render()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_BUFFER_DESC vbDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;



	while (SDL_PollEvent(&e) != 0)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.ArraySize = 1;

	ConstantLightBuffer clb;

	XMFLOAT4         eyePos;   //視点座標

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SDL_DestroyRenderer(ren);

	for (int i = 0; i < vcount; i++)

	WORD* pIList = new WORD[icount];

	irData.SysMemSlicePitch = 0;

		SDL_Delay(1000);

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext = NULL;

	for (const auto& shape : shapes)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				// access to vertex

		exit(1);

	}

	scDesc.Windowed = TRUE;

	CRect                rect;

		cout << "SDL_INIT_ERROR" << endl;



		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.SampleDesc.Count = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pIndexBuffer = NULL;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//Vertex* pVList = new Vertex[vcount];





	if (FAILED(hr))

			switch (e.key.keysym.sym)

		pLevels,

	ConstantMaterial material; //物体の質感

#ifdef _DEBUG



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Count = 1;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	for (int i = 0; i < vcount; i++)



				indexlist.push_back(idx.vertex_index);



	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	if (!reader.Warning().empty())

	SDL_FreeSurface(bmp);

	ibDesc.StructureByteStride = 0;



				// access to vertex

	tinyobj::ObjReader reader;

		return hr;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	tinyobj::ObjReader reader;

			index_offset += num_vertices;

struct ConstantMaterial {



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	auto& materials = reader.GetMaterials();

				indexlist.push_back(idx.vertex_index);

	D3D11_TEXTURE2D_DESC txDesc;

	ibDesc.MiscFlags = 0;



struct ConstantLightBuffer {



	//インデックスバッファ作成

		D3D_DRIVER_TYPE_HARDWARE,

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (const auto& shape : shapes)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.TopLeftY = 0;





 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	};



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Quit();

			}

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	/*

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

			case SDLK_RIGHT:



	scDesc.Windowed = TRUE;

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	UINT offsets = 0;



				break;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Event e;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//vector<Vertex> vertex_t;

		return hr;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		// Loop over faces(polygon)



	if (FAILED(hr))

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	SDL_DestroyWindow(win);

		NULL,



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

	{

	int     vcount = vertexlist.size();

	//ピクセルシェーダー生成

			}

{

	m_Viewport.Width = (FLOAT)rect.Width();



	float    nearZ = 0.1f;





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pVertexShader = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		D3D11_SDK_VERSION,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	bool ret = tinyobj::LoadObj(

	while (SDL_PollEvent(&e) != 0)

	irData.SysMemSlicePitch = 0;

	bool ret = tinyobj::LoadObj(

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD* pIList = new WORD[icount];

		pVList[i] = vertexlist[i];

		return hr;

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.StructureByteStride = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_IndexCount = icount;

		{

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;





	Release();

	UINT offsets = 0;

		&m_pSwapChain,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string error;

	{

		{

	m_pLightBuffer = NULL;

	}

	{

/*





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//定数バッファ作成

	UINT flags = 0;

	//インデックスバッファ作成

	m_pDepthStencilTexture = NULL;

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SAFE_RELEASE(m_pVertexShader);

		D3D11_SDK_VERSION,



	//ピクセルシェーダー生成

				// access to vertex

#include "DirectXManager.h"

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	ConstantLightBuffer clb;



	WORD   icount = indexList.size();

	float    farZ = 100.0f;







	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ConstantLight    pntLight; //点光源

CD3DTest::CD3DTest()

#include "DirectXManager.h"

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			// Loop over vertices in the face.





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		if (e.type == SDL_QUIT)



	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pVertexShader);

		// Loop over faces(polygon)

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	UINT offsets = 0;

{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

struct ConstantLightBuffer {

	vector<WORD> indexList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}



#include <SDL.h>

				// access to vertex



	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	}

{

	}

		return hr;

	SDL_DestroyTexture(tex);

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}

	vrData.pSysMem = &pVList[0];





				// access to vertex

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	auto& materials = reader.GetMaterials();


