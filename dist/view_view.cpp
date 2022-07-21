struct ConstantMatrixBuffer {

{

	if (FAILED(hr))

	//定数バッファ作成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::string inputfile = "test.obj";

{

			index_offset += num_vertices;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.Width = rect.Width();

	{

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		{

	//深度ステンシルバッファ作成

				break;

	m_pDevice = NULL;

}





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



			{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			// Loop over vertices in the face.



		delete[] pVList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ConstantMaterial material; //物体の質感

	//Vertex* pVList = new Vertex[vcount];

	//ピクセルシェーダー生成



		&shapes,



	m_pIndexBuffer = NULL;

	::GetClientRect(hwnd, &rect);

#include <iostream>

		KEY_PRESS_SURFACE_DOWN,

		&materials,

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	{

	std::string inputfile = "test.obj";

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.MinDepth = 0.0f;

}

	Release();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	SAFE_RELEASE(m_pVertexShader);









{

	XMFLOAT4         eyePos;   //視点座標



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_UP:

	//頂点バッファ作成

	Vertex* pVList = new Vertex[vcount];



	UINT strides = sizeof(Vertex);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

	auto& attrib = reader.GetAttrib();

	{

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyWindow(win);



			case SDLK_DOWN:

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

CD3DTest::~CD3DTest()

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ConstantMatrixBuffer cmb;

	WORD   icount = indexList.size();



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pLightBuffer);

	m_VertexCount = 0;

	for (int i = 0; i < vcount; i++)

using std::cout; using std::endl;

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				vertex.push_back(vertex_tmp);

{

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	scDesc.SampleDesc.Quality = 0;

	txDesc.ArraySize = 1;



}



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

using std::cout; using std::endl;



	if (!error.empty())

	delete[] pIList;

		&scDesc,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};

	SDL_Quit();

}

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pInputLayout);

struct ConstantMatrixBuffer {

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			for (size_t v = 0; v < num_vertices; v++)



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

				break;

	};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	}



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



				WORD index = idx.vertex_index;

struct ConstantMatrixBuffer {

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}

		&materials,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	tinyobj::attrib_t attrib;





	}

HRESULT CD3DTest::Create(HWND hwnd)

	}

	UINT offsets = 0;

	//インデックスバッファ作成



	D3D11_BUFFER_DESC cbDesc;

	std::vector<tinyobj::material_t> materials;

	::ZeroMemory(&scDesc, sizeof(scDesc));

}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	WORD   icount = indexList.size();

	SDL_FreeSurface(suf);



	XMFLOAT4X4 view;

				WORD index = idx.vertex_index;

	m_pLightBuffer = NULL;

	//Vertex* pVList = new Vertex[vcount];

};



	{

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4X4 projection;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

		{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	SDL_DestroyWindow(win);

	irData.pSysMem = &pIList[0];

		if (e.type == SDL_QUIT)







	XMFLOAT4         ambient;  //環境光(r,g,b)

	//テクスチャ読み込み

		m_pImmediateContext->ClearState();

	reader_config.mtl_search_path = "./"; // Path to material files

#include <iostream>



}

CD3DTest::CD3DTest()



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SAFE_RELEASE(m_pRenderTargetView);

	ConstantLight    pntLight; //点光源

				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				break;

	m_pSwapChain = NULL;

				break;

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

/*

		pIList[j] = indexList[j];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//テクスチャ読み込み

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	txDesc.CPUAccessFlags = 0;

			case SDLK_DOWN:

{

	for (int i = 0; i < 3; i++)

	}





	}

		flags,

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vbDesc.StructureByteStride = 0;

	if (!error.empty())

				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);

	return 0;



{

	SAFE_RELEASE(m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

	return hr;

struct ConstantLight {

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	}

	{

	return;

{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;

	ID3D11Texture2D* pBackBuffer;

	enum KeyPressSurfaces



	m_Viewport.TopLeftX = 0;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			default:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	// Loop over shapes

	vrData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pPixelShader = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}



		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

{

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

#ifdef _DEBUG

		&m_pImmediateContext);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SAFE_RELEASE(m_pSwapChain);

		size_t index_offset = 0;

	delete[] pIList;

};

void CD3DTest::Render()

		&error,

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 specular;          //反射(r,g,b)

		&error,

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		delete[] pVList;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	for (int i = 0; i < 3; i++)





		SDL_RenderClear(ren);

	{

			// Loop over vertices in the face.



	//深度ステンシルバッファ作成



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	ibDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		{

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	std::vector<tinyobj::material_t> materials;

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				break;

				// access to vertex

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

};

	float    farZ = 100.0f;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			for (size_t v = 0; v < fv; v++)



#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4         eyePos;   //視点座標



	return 0;

				WORD index = idx.vertex_index;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

int SEGMENT = 36;

			int num_vertices = shape.mesh.num_face_vertices[f];



	vbDesc.MiscFlags = 0;

		return hr;



			}

	SAFE_RELEASE(m_pSwapChain);

	ConstantLightBuffer clb;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Release();



			exit(1);

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 specular;          //反射(r,g,b)







	ConstantMaterial material; //物体の質感

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{



	if (FAILED(hr))

	m_pVertexBuffer = NULL;

		&m_pSwapChain,

	{

	{

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))





	m_pIndexBuffer = NULL;

		}

	DXGI_SWAP_CHAIN_DESC scDesc;

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

	D3D11_SUBRESOURCE_DATA vrData;







		return hr;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	}





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	//Key press surfaces constants

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;







	{



	irData.SysMemSlicePitch = 0;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_DOWN,

	txDesc.MiscFlags = 0;





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

		return hr;

	return;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.eyePos, eye);

	irData.SysMemPitch = 0;

		return hr;

		&shapes,

	/*

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#include <SDL.h>

	}

		return 1;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//深度ステンシルバッファ作成

			case SDLK_LEFT:

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

		if (!reader.Error().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	SDL_Event e;



	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (const auto& shape : shapes)

	cbDesc.CPUAccessFlags = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		KEY_PRESS_SURFACE_UP,

	}

};

	dsDesc.Texture2D.MipSlice = 0;

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

void CD3DTest::Release()

	D3D11_BUFFER_DESC vbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	delete[] pIList;



		&m_pSwapChain,

	//ビューポート設定



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		pIList[j] = indexList[j];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			case SDLK_DOWN:

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	tinyobj::ObjReader reader;

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	D3D11_SAMPLER_DESC smpDesc;

#ifdef _DEBUG



	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

		size_t index_offset = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = vcount;

		{

		}



	XMStoreFloat4(&clb.eyePos, eye);

	m_pIndexBuffer = NULL;



	}



	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderCopy(ren, tex, NULL, NULL);



#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#endif

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (m_pImmediateContext)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	m_Viewport.MaxDepth = 1.0f;

			int num_vertices = shape.mesh.num_face_vertices[f];

	//Clean up our objects and quit

{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pSwapChain);

		return hr;



	vrData.pSysMem = &pVList[0];

				break;



	//頂点バッファ作成

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	auto& attrib = reader.GetAttrib();

	reader_config.mtl_search_path = "./"; // Path to material files

struct ConstantMaterial {



int SEGMENT = 36;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pVertexBuffer);

		&shapes,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		delete[] pIList;

}
#endif

	if (!reader.Warning().empty())

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	}

	m_pLightBuffer = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		size_t index_offset = 0;  // インデントのオフセット

		pVList[i] = vertexlist[i];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

CD3DTest::CD3DTest()

		return hr;

	{





		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderClear(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			switch (e.key.keysym.sym)

	SDL_DestroyWindow(win);







				break;

	XMFLOAT4X4 view;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	hr = D3D11CreateDeviceAndSwapChain(NULL,



#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pDevice);

	txDesc.SampleDesc.Quality = 0;

			default:



		exit(1);

		// Loop over faces(polygon)

	return hr;

	SDL_Quit();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	}





	auto& shapes = reader.GetShapes();



	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

		pVList[i] = vertexlist[i];

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	/*

	scDesc.SampleDesc.Count = 1;

	HRESULT              hr;

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	vrData.SysMemPitch = 0;

	dsDesc.Format = txDesc.Format;

				WORD index = idx.vertex_index;



	{



	ZeroMemory(&txDesc, sizeof(txDesc));



	{







		&m_pSwapChain,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_Viewport.Height = (FLOAT)rect.Height();

	for (int j = 0; j < icount; j++)



	m_pMatrixBuffer = NULL;

struct ConstantLightBuffer {



				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC ibDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		size_t index_offset = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;



	vrData.SysMemPitch = 0;

	{

				// access to vertex

	UINT offsets = 0;

			exit(1);

	XMStoreFloat4(&clb.eyePos, eye);



	LoadObj(vertexlist, indexList);



	m_pVertexShader = NULL;

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.MiscFlags = 0;

	if (!error.empty())

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&shapes,

	SDL_DestroyRenderer(ren);



#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4X4 world;

			// Loop over vertices in the face.

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{



		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				// access to vertex

	Release();



	Release();

	D3D11_SUBRESOURCE_DATA vrData;

		1,



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		cout << "SDL_INIT_ERROR" << endl;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

}

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_Delay(1000);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ID3D11Texture2D* pBackBuffer;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	txDesc.MiscFlags = 0;

	UINT offsets = 0;

		return hr;

	{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);







	Release();

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	cbDesc.CPUAccessFlags = 0;



	auto& shapes = reader.GetShapes();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			case SDLK_UP:

		delete[] pVList;

	XMFLOAT4 pos;               //座標(x,y,z)

	if (!error.empty())

	if (FAILED(hr))

	}

{

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pTexture = NULL;



	vbDesc.CPUAccessFlags = 0;



		}



	SDL_DestroyWindow(win);

			case SDLK_DOWN:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



}
	//ピクセルシェーダー生成

	if (m_pImmediateContext)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pTextureView);



				break;

			}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D_FEATURE_LEVEL level;

	m_pPixelShader = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		&m_pSwapChain,

	tinyobj::attrib_t attrib;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	SDL_DestroyTexture(tex);

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			exit(1);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		else if (e.type == SDL_KEYDOWN)

		m_pImmediateContext->ClearState();

{

	auto& attrib = reader.GetAttrib();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			{

		&scDesc,

	SAFE_RELEASE(m_pIndexBuffer);

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	int     vcount = vertexlist.size();

	if (FAILED(hr))



	SDL_DestroyRenderer(ren);

	scDesc.SampleDesc.Count = 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//First we need to start up SDL, and make sure it went ok

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	scDesc.SampleDesc.Count = 1;

	scDesc.BufferCount = 1;



	txDesc.SampleDesc.Count = 1;

		if (!reader.Error().empty())

	dsDesc.Format = txDesc.Format;

	tinyobj::ObjReaderConfig reader_config;

		SDL_RenderPresent(ren);

		&materials,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//ビューポート設定

 */

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	UINT flags = 0;

		&level,

		&level,

	if (FAILED(hr))

	if (FAILED(hr))



		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

		//User presses a key

		flags,

		SDL_Delay(1000);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pTextureView = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.StructureByteStride = 0;

		else if (e.type == SDL_KEYDOWN)

/*

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.MiscFlags = 0;



		size_t index_offset = 0;

#include <SDL.h>

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	if (FAILED(hr))



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

}

	UINT strides = sizeof(Vertex);

	ibDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	LoadObj(vertexlist, indexList);

		D3D11_SDK_VERSION,

	D3D11_SAMPLER_DESC smpDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (!reader.ParseFromFile(inputfile, reader_config))



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		SDL_RenderClear(ren);



	m_pVertexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::GetClientRect(hwnd, &rect);

	{



		pVList[i] = vertexlist[i];

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.MinDepth = 0.0f;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_DestroyTexture(tex);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vrData.SysMemPitch = 0;







	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	irData.SysMemPitch = 0;

	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

using std::cout; using std::endl;

		SDL_RenderPresent(ren);



	cbDesc.MiscFlags = 0;

}
		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyRenderer(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	auto& attrib = reader.GetAttrib();

	tinyobj::ObjReader reader;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

/*

			{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_FreeSurface(bmp);

int main(int, char**)

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

		&shapes,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//vector<Vertex> vertex_t;

			}





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}



	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	HRESULT              hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

		m_pImmediateContext->ClearState();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ConstantLightBuffer clb;

	txDesc.ArraySize = 1;

	vbDesc.MiscFlags = 0;

	m_pPixelShader = NULL;

			{

	m_pRenderTargetView = NULL;

	}



		size_t index_offset = 0;

		flags,

	::ZeroMemory(&scDesc, sizeof(scDesc));

			{



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D11_SUBRESOURCE_DATA vrData;

	irData.SysMemSlicePitch = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&scDesc,

	Vertex* pVList = new Vertex[vcount];

		flags,



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	vbDesc.CPUAccessFlags = 0;





	tinyobj::attrib_t attrib;

	//テクスチャ読み込み

	m_pRenderTargetView = NULL;



		SDL_RenderPresent(ren);

		//User requests quit

	vbDesc.MiscFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			for (size_t v = 0; v < fv; v++)



	m_pInputLayout = NULL;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

struct ConstantLight {

			index_offset += num_vertices;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pPixelShader = NULL;

{

	if (FAILED(hr))

	m_pVertexShader = NULL;

	ID3D11Texture2D* pBackBuffer;

	Release();



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::string imagePath = "hello.bmp";

	float    nearZ = 0.1f;

	if (FAILED(hr))

				break;

	vrData.SysMemPitch = 0;

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	delete[] pIList;

		{

	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	txDesc.MiscFlags = 0;

		NULL,

void CD3DTest::Render()

	m_pSampler = NULL;

	float    nearZ = 0.1f;

CD3DTest::~CD3DTest()

int main(int, char**)

				tinyobj::real_t ty =

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

struct ConstantLight {

			case SDLK_RIGHT:

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	int     vcount = vertexlist.size();

	irData.SysMemPitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		delete[] pIList;

	}



		}

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//Clean up our objects and quit

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pImmediateContext);

		&m_pSwapChain,

		//User requests quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4X4 projection;

	}

	XMFLOAT4X4 projection;

	{



	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

			break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

		if (!reader.Error().empty())

	std::string imagePath = "hello.bmp";

	{

	SAFE_RELEASE(m_pDepthStencilTexture);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	Vertex* pVList = new Vertex[vcount];

	//vector<Vertex> vertex_t;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//Vertex* pVList = new Vertex[vcount];

		}

		return hr;

	}



	LoadObj(vertexlist, indexList);



		if (!ret)





	m_pInputLayout = NULL;

void CD3DTest::Render()

	XMFLOAT4X4 projection;

		}

struct ConstantLightBuffer {

	CRect                rect;



	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			for (size_t v = 0; v < num_vertices; v++)

	}



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	delete[] pVList;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	delete[] pIList;

	scDesc.BufferCount = 1;



		return hr;



		{

	{

		delete[] pVList;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	dsDesc.Texture2D.MipSlice = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.OutputWindow = hwnd;



	}



}

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	txDesc.MipLevels = 1;

		cout << "SDL_INIT_ERROR" << endl;

	ConstantLight    pntLight; //点光源

		R"(cube.obj)");

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&attrib,



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SAFE_RELEASE(m_pPixelShader);

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	m_pLightBuffer = NULL;

	txDesc.ArraySize = 1;

	{

		KEY_PRESS_SURFACE_TOTAL

	m_pIndexBuffer = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#ifdef _DEBUG

		return hr;



	{

				// access to vertex

	auto& shapes = reader.GetShapes();

			default:

		&scDesc,



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	SAFE_RELEASE(m_pTextureView);



	SAFE_RELEASE(m_pVertexShader);

		if (!reader.Error().empty())

				indexlist.push_back(index);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&error,

	m_pVertexBuffer = NULL;

				break;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.pSysMem = &pIList[0];

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.Height = (FLOAT)rect.Height();

		D3D_DRIVER_TYPE_HARDWARE,



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				vertex.push_back(vertex_tmp);

	while (SDL_PollEvent(&e) != 0)

	ConstantMatrixBuffer cmb;



	SAFE_RELEASE(m_pSampler);

		&m_pImmediateContext);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_IndexCount = icount;

	D3D_FEATURE_LEVEL level;

	{

	return;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

		pIList[j] = indexList[j];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



#endif

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pSwapChain = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}
	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT offsets = 0;



	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DOWN,

		return hr;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SAFE_RELEASE(m_pIndexBuffer);

{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.pSysMem = &pVList[0];

		//User requests quit



		pVList[i] = vertexlist[i];

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pPixelShader = NULL;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	delete[] pIList;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



				WORD index = idx.vertex_index;

	SDL_FreeSurface(suf);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_Delay(1000);



int main(int, char**)

		}

				break;

	if (!reader.Warning().empty())

				indexlist.push_back(index);







		return hr;



	SAFE_RELEASE(m_pTexture);

			switch (e.key.keysym.sym)

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.StructureByteStride = 0;

			default:

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		pVList[i] = vertexlist[i];



	irData.pSysMem = &pIList[0];

		return hr;

	ConstantMatrixBuffer cmb;

	irData.SysMemPitch = 0;

		pIList[j] = indexList[j];



	WORD* pIList = new WORD[icount];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	{



	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pTextureView);



	Release();

		NULL,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

	scDesc.OutputWindow = hwnd;

			case SDLK_DOWN:

	Release();

	//頂点バッファ作成

}

	auto& shapes = reader.GetShapes();

#ifdef _DEBUG

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pInputLayout);

	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

	pBackBuffer->Release();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		SDL_Delay(1000);



	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

CD3DTest::CD3DTest()

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pPixelShader);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderClear(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				WORD index = idx.vertex_index;





	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



	SAFE_RELEASE(m_pDevice);



		return hr;

};

/*



		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	irData.SysMemPitch = 0;

	}*/

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

using std::cout; using std::endl;

		KEY_PRESS_SURFACE_UP,

}

	{

			for (size_t v = 0; v < num_vertices; v++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	ZeroMemory(&txDesc, sizeof(txDesc));

			// Loop over vertices in the face.

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_VertexCount = vcount;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//Key press surfaces constants

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	ibDesc.CPUAccessFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferCount = 1;

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//First we need to start up SDL, and make sure it went ok

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	LoadObj(vertexlist, indexList);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Height = rect.Height();



	D3D_FEATURE_LEVEL level;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

	txDesc.Width = rect.Width();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//テクスチャ読み込み

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&m_pImmediateContext);

	irData.SysMemPitch = 0;

		}

	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		m_pImmediateContext->ClearState();

};

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

struct ConstantMatrixBuffer {

	D3D_FEATURE_LEVEL level;





			{

	SAFE_RELEASE(m_pTexture);

	vrData.SysMemPitch = 0;

	txDesc.Width = rect.Width();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	//vector<WORD> index_t;

	for (int i = 0; i < vcount; i++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t tx =

struct ConstantMatrixBuffer {

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		if (e.type == SDL_QUIT)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.TopLeftX = 0;

	XMFLOAT4X4 world;

		return hr;

	if (m_pImmediateContext)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_DestroyTexture(tex);

	m_VertexCount = vcount;

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		{

		&scDesc,

			for (size_t v = 0; v < num_vertices; v++)

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.CPUAccessFlags = 0;

{

	cbDesc.StructureByteStride = 0;

}

#endif

	m_Viewport.Height = (FLOAT)rect.Height();





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Render()

	{

		NULL,



};



	std::string error;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



void CD3DTest::Release()

	//インデックスバッファ作成

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			{

			int num_vertices = shape.mesh.num_face_vertices[f];

		&attrib,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		//User requests quit



		return hr;

				// access to vertex

	float    fov = XMConvertToRadians(20.0f);

	SDL_DestroyRenderer(ren);

	Release();

	if (FAILED(hr))



	}

	//インデックスバッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

	}

				vertex.push_back(vertex_tmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{

			case SDLK_DOWN:





	XMFLOAT4 pos;               //座標(x,y,z)

{

	while (SDL_PollEvent(&e) != 0)

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4X4 world;

	m_pTextureView = NULL;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDevice);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	//深度ステンシルバッファ作成



}
	ConstantLightBuffer clb;

int SEGMENT = 36;

	SDL_DestroyTexture(tex);

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	::GetClientRect(hwnd, &rect);

	if (m_pImmediateContext)

				WORD index = idx.vertex_index;

	vbDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		NULL,

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);



	while (SDL_PollEvent(&e) != 0)





void CD3DTest::Release()

	m_pInputLayout = NULL;

		SDL_Delay(1000);

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		1,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





#include <SDL.h>

#ifdef _DEBUG

}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	m_pInputLayout = NULL;

		else if (e.type == SDL_KEYDOWN)

	scDesc.SampleDesc.Count = 1;

				WORD index = idx.vertex_index;

		{

	m_pInputLayout = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	cbDesc.StructureByteStride = 0;

{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))





HRESULT CD3DTest::Create(HWND hwnd)

	SDL_DestroyWindow(win);

			{

	HRESULT              hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);

	cbDesc.CPUAccessFlags = 0;

	m_pTexture = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	D3D11_BUFFER_DESC vbDesc;

	int     vcount = vertexlist.size();

struct ConstantMaterial {

}

	for (int j = 0; j < icount; j++)

	m_pInputLayout = NULL;

using std::cout; using std::endl;

		m_pImmediateContext->ClearState();

#include <SDL.h>

	dsDesc.Format = txDesc.Format;

}

			// Loop over vertices in the face.

	reader_config.mtl_search_path = "./"; // Path to material files



	float    fov = XMConvertToRadians(20.0f);



CD3DTest::~CD3DTest()

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

struct ConstantMaterial {

#include <SDL.h>

	{



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		KEY_PRESS_SURFACE_UP,

		&level,

	SAFE_RELEASE(m_pDevice);

	m_IndexCount = 0;

			default:



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

int main(int, char**)

	}

	txDesc.Height = rect.Height();

	return;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//Vertex* pVList = new Vertex[vcount];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;



	SDL_DestroyWindow(win);



			{



	SDL_FreeSurface(bmp);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		SDL_Delay(1000);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pInputLayout = NULL;

	vrData.pSysMem = &pVList[0];

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		{

	//Clean up our objects and quit

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.Height = rect.Height();



	if (FAILED(hr))

	UINT offsets = 0;



	XMFLOAT4 ambient;           //環境(r,g,b)



	{

	float    farZ = 100.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	float    nearZ = 0.1f;

		delete[] pVList;

	std::vector<tinyobj::shape_t> shapes;

{

		&shapes,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}



		&attrib,



}
	//Clean up our objects and quit

			index_offset += num_vertices;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.MinDepth = 0.0f;



				break;

		if (!ret)

	if (!reader.Warning().empty())

				vertex.push_back(vertex_tmp);

	m_Viewport.MinDepth = 0.0f;

			case SDLK_DOWN:

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				vertex.push_back(vertex_tmp);



		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pRenderTargetView);

	{

				break;

	XMStoreFloat4(&clb.eyePos, eye);

		flags,





	m_pVertexBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		NULL,



	D3D11_BUFFER_DESC cbDesc;



}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

	if (FAILED(hr))

	m_pTexture = NULL;

	m_IndexCount = 0;

	ConstantLight    pntLight; //点光源

		SDL_RenderCopy(ren, tex, NULL, NULL);

			case SDLK_LEFT:

HRESULT CD3DTest::Create(HWND hwnd)

	UINT strides = sizeof(Vertex);



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	}

#include <SDL.h>

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

				WORD index = idx.vertex_index;

		return hr;

			default:

	auto& attrib = reader.GetAttrib();

}


	m_pImmediateContext = NULL;

			case SDLK_LEFT:



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t ty =

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	auto& shapes = reader.GetShapes();

	for (int i = 0; i < 3; i++)

		exit(1);

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pSwapChain->Present(0, 0);

	WORD   icount = indexList.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		}

		&shapes,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	return 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);

	XMFLOAT4 pos;               //座標(x,y,z)

	return hr;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	SDL_FreeSurface(bmp);

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}

			switch (e.key.keysym.sym)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	{

	if (FAILED(hr))

			index_offset += num_vertices;

	SDL_DestroyTexture(tex);



	{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}



		1,

		&materials,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pInputLayout = NULL;

}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



#ifdef _DEBUG

	//Clean up our objects and quit

struct ConstantMatrixBuffer {

		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	SDL_Quit();

	vbDesc.StructureByteStride = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();

			}

	txDesc.MiscFlags = 0;

	enum KeyPressSurfaces

		D3D_DRIVER_TYPE_HARDWARE,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (int j = 0; j < icount; j++)

				WORD index = idx.vertex_index;

	SDL_DestroyRenderer(ren);

	m_pDepthStencilView = NULL;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_TEXTURE2D_DESC txDesc;

	std::vector<tinyobj::material_t> materials;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

		KEY_PRESS_SURFACE_DOWN,

	dsDesc.Format = txDesc.Format;



using std::cout; using std::endl;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_Viewport.MaxDepth = 1.0f;

		return hr;

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

			case SDLK_DOWN:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}



	vector<WORD> indexList;

	if (FAILED(hr))



	m_Viewport.TopLeftY = 0;

{

	{

	m_Viewport.MinDepth = 0.0f;



	SAFE_RELEASE(m_pIndexBuffer);

		SDL_Delay(1000);

	DXGI_SWAP_CHAIN_DESC scDesc;

	}



	m_IndexCount = icount;



	}



	{

				break;

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	};

	delete[] pVList;

	{

		flags,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			int num_vertices = shape.mesh.num_face_vertices[f];

	CRect                rect;

	//頂点バッファ作成

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	m_pTextureView = NULL;

		KEY_PRESS_SURFACE_RIGHT,

		&error,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	int     vcount = vertexlist.size();

	cbDesc.CPUAccessFlags = 0;

		R"(cube.obj)");

	m_Viewport.TopLeftY = 0;

	m_pSampler = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));





		if (!reader.Error().empty())



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyTexture(tex);

	D3D11_BUFFER_DESC ibDesc;

	SDL_FreeSurface(bmp);

	while (SDL_PollEvent(&e) != 0)

#endif

	m_pLightBuffer = NULL;

		return 1;

	SAFE_RELEASE(m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	auto& materials = reader.GetMaterials();

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;



	m_VertexCount = vcount;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pRenderTargetView);

		flags,

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

	//テクスチャ読み込み

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}*/

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&materials,

	UINT offsets = 0;

		D3D_DRIVER_TYPE_HARDWARE,





	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <SDL.h>

			case SDLK_UP:

	scDesc.Windowed = TRUE;

			{



	if (m_pImmediateContext)

	SDL_DestroyTexture(tex);

	m_Viewport.TopLeftX = 0;

		return hr;

	scDesc.Windowed = TRUE;

	XMFLOAT4X4 world;

	D3D_FEATURE_LEVEL level;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_IndexCount = 0;

			{

void CD3DTest::Render()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		SDL_Delay(1000);

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	for (const auto& shape : shapes)

				indexlist.push_back(index);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pTextureView);

	{

			case SDLK_RIGHT:



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	XMFLOAT4X4 projection;

struct ConstantLightBuffer {

	m_VertexCount = 0;

				tinyobj::real_t ty =

	auto& shapes = reader.GetShapes();



	hr = D3D11CreateDeviceAndSwapChain(NULL,



			default:



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.CPUAccessFlags = 0;

{

{



		&error,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				WORD index = idx.vertex_index;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	D3D11_SUBRESOURCE_DATA irData;

	}



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.BufferDesc.Height = rect.Height();

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		{



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	};

struct ConstantMatrixBuffer {

		cout << "SDL_INIT_ERROR" << endl;

	HRESULT              hr;



	/*

	cbDesc.CPUAccessFlags = 0;

			default:

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			{

			break;

struct ConstantMaterial {

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ConstantLight    pntLight; //点光源

				indexlist.push_back(idx.vertex_index);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::ObjReader reader;

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Viewport.MinDepth = 0.0f;

	irData.pSysMem = &pIList[0];



int main(int, char**)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

		KEY_PRESS_SURFACE_TOTAL





	m_pTexture = NULL;

		SDL_RenderClear(ren);



			{





				break;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			case SDLK_UP:

	D3D11_SUBRESOURCE_DATA vrData;

	reader_config.mtl_search_path = "./"; // Path to material files



	txDesc.SampleDesc.Count = 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < fv; v++)

	//頂点レイアウト作成

		}





	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_TOTAL

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (int i = 0; i < vcount; i++)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);







	ConstantLight    pntLight; //点光源



	m_VertexCount = vcount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

			}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			default:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

};

		//User presses a key

		}

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	scDesc.OutputWindow = hwnd;

	ibDesc.CPUAccessFlags = 0;

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点シェーダー生成



}

	{

	//Clean up our objects and quit

			for (size_t v = 0; v < fv; v++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderCopy(ren, tex, NULL, NULL);



	irData.SysMemPitch = 0;



	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;



		}

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	{

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_IndexCount = icount;

	SAFE_RELEASE(m_pPixelShader);



{

		}

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

{

	//頂点バッファ作成

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pVertexShader);

	irData.SysMemSlicePitch = 0;

	}*/

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.Width = rect.Width();

}



			case SDLK_RIGHT:

	//深度ステンシルバッファ作成





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

		1,



	txDesc.SampleDesc.Count = 1;

	cbDesc.StructureByteStride = 0;

	//Key press surfaces constants

		&m_pDevice,

	}

	m_pLightBuffer = NULL;

 * Lesson 1: Hello World!

	int     vcount = vertexlist.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



 * Lesson 1: Hello World!



			for (size_t v = 0; v < num_vertices; v++)

			{



	HRESULT              hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pDevice = NULL;



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.Windowed = TRUE;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (m_pImmediateContext)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	txDesc.SampleDesc.Quality = 0;

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	return 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		R"(cube.obj)");

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMFLOAT4X4 world;

	float    farZ = 100.0f;

		// Loop over faces(polygon)

	scDesc.BufferDesc.Width = rect.Width();

		D3D11_SDK_VERSION,

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		{



	//インデックスバッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	m_VertexCount = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				vertex.push_back(vertex_tmp);

			case SDLK_DOWN:

	}

		{

	XMFLOAT4X4 projection;

{

	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	float    nearZ = 0.1f;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<Vertex> vertex_t;



		else if (e.type == SDL_KEYDOWN)

		&level,

	SDL_DestroyWindow(win);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//頂点シェーダー生成



		&scDesc,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pSwapChain,

		}



	txDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_DOWN,

	txDesc.Height = rect.Height();

CD3DTest::~CD3DTest()

	txDesc.SampleDesc.Quality = 0;



	m_pDevice = NULL;





		SDL_Delay(1000);

			// Loop over vertices in the face.

int main(int, char**)



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	CRect                rect;



		}

	SDL_Quit();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

	m_pDevice = NULL;

	Release();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	tinyobj::ObjReader reader;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

		if (!ret)

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_BUFFER_DESC ibDesc;

	m_VertexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	HRESULT              hr;

	m_Viewport.MaxDepth = 1.0f;



		&m_pDevice,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;

		return hr;

	irData.SysMemPitch = 0;



	return hr;

	std::string imagePath = "hello.bmp";

	XMFLOAT4X4 projection;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.MiscFlags = 0;





	cbDesc.CPUAccessFlags = 0;

		flags,

	D3D11_BUFFER_DESC cbDesc;

	int     vcount = vertexlist.size();





int main(int, char**)

	scDesc.BufferCount = 1;

	D3D11_BUFFER_DESC ibDesc;

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	while (SDL_PollEvent(&e) != 0)



	LoadObj(vertexlist, indexList);

		return hr;

	std::vector<tinyobj::material_t> materials;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点バッファ作成

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))



	//vector<Vertex> vertex_t;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return 1;



HRESULT CD3DTest::Create(HWND hwnd)

	//Create Index

		return hr;

				tinyobj::real_t ty =

	//テクスチャ読み込み

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);



	{

				tinyobj::real_t tx =

	WORD* pIList = new WORD[icount];

		return hr;

	}

	dsDesc.Texture2D.MipSlice = 0;

		SDL_RenderPresent(ren);

		return hr;

			case SDLK_UP:

int SEGMENT = 36;

#include <SDL.h>

		SDL_Delay(1000);

			{



		KEY_PRESS_SURFACE_DEFAULT,

using std::cout; using std::endl;

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	tinyobj::ObjReader reader;





	//深度ステンシルバッファ作成



	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Vertex* pVList = new Vertex[vcount];

		return hr;



		&m_pSwapChain,

	//Key press surfaces constants

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (!reader.ParseFromFile(inputfile, reader_config))



	txDesc.SampleDesc.Count = 1;

		1,

	delete[] pIList;

	//定数バッファ作成

		KEY_PRESS_SURFACE_UP,

HRESULT CD3DTest::Create(HWND hwnd)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pVertexShader = NULL;

	scDesc.Windowed = TRUE;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	};

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	{

	HRESULT              hr;

			default:

	m_pDevice = NULL;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

		pLevels,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (e.type == SDL_QUIT)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

}

	if (FAILED(hr))

};

			case SDLK_LEFT:



	std::string inputfile = "test.obj";

			case SDLK_LEFT:

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			}



	vector<Vertex> vertexlist;



	//vector<Vertex> vertex_t;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);







	SAFE_RELEASE(m_pTextureView);

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		D3D11_SDK_VERSION,

				WORD index = idx.vertex_index;

	//First we need to start up SDL, and make sure it went ok

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

HRESULT CD3DTest::Create(HWND hwnd)

	auto& materials = reader.GetMaterials();

{

			{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	CRect                rect;



	for (int i = 0; i < vcount; i++)



	m_Viewport.MinDepth = 0.0f;



		if (e.type == SDL_QUIT)

	m_pSwapChain->Present(0, 0);

			default:

		}

		if (!ret)

	txDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMStoreFloat4(&clb.ambient, lightAmbient);

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 specular;          //反射(r,g,b)

			//Select surfaces based on key press

#include <iostream>

		return hr;

	return hr;



 */

	m_Viewport.TopLeftY = 0;

		{

	SDL_FreeSurface(bmp);

 */



			}



	SDL_Quit();





};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

			index_offset += num_vertices;

#include <iostream>

	SAFE_RELEASE(m_pVertexShader);

};

	SAFE_RELEASE(m_pInputLayout);

	txDesc.SampleDesc.Quality = 0;

	ibDesc.CPUAccessFlags = 0;

	{









void CD3DTest::Render()

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSampler = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4         eyePos;   //視点座標

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		delete[] pIList;





	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

struct ConstantMatrixBuffer {

	m_pSwapChain->Present(0, 0);

		// Loop over faces(polygon)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			index_offset += num_vertices;

				indexlist.push_back(index);

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&scDesc,

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext = NULL;



	//深度ステンシルバッファ作成

			case SDLK_LEFT:

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}
			index_offset += num_vertices;

	dsDesc.Format = txDesc.Format;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		// Loop over faces(polygon)

		pIList[j] = indexList[j];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderPresent(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		//User requests quit

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	};

};





	std::string error;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	irData.pSysMem = &pIList[0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pTextureView);

struct ConstantLight {

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (!reader.Warning().empty())

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vrData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftX = 0;

	UINT flags = 0;

	Release();

			index_offset += fv;

			{

	DXGI_SWAP_CHAIN_DESC scDesc;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

/*



	SDL_DestroyTexture(tex);

struct ConstantMaterial {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	WORD* pIList = new WORD[icount];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

		&m_pSwapChain,

struct ConstantLightBuffer {

	dsDesc.Format = txDesc.Format;

 * Lesson 1: Hello World!

{

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pImmediateContext);

	Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

	m_pRenderTargetView = NULL;

		return hr;



	SAFE_RELEASE(m_pIndexBuffer);



	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		cout << "SDL_INIT_ERROR" << endl;

{

		SDL_RenderPresent(ren);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_Delay(1000);

	}*/



		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		pIList[j] = indexList[j];

	m_Viewport.MaxDepth = 1.0f;

			{

	::ZeroMemory(&scDesc, sizeof(scDesc));

struct ConstantLightBuffer {

}



		&materials,

}

	txDesc.SampleDesc.Quality = 0;

CD3DTest::~CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyRenderer(ren);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

CD3DTest::CD3DTest()

	D3D11_SUBRESOURCE_DATA vrData;

		{

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_LEFT,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

 */

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

struct ConstantLightBuffer {

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				WORD index = idx.vertex_index;

	SDL_Event e;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{



}
	enum KeyPressSurfaces



				indexlist.push_back(idx.vertex_index);

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_BUFFER_DESC cbDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)



#include "DirectXManager.h"

				tinyobj::real_t tx =

}

		{



	SAFE_RELEASE(m_pTexture);

	return 0;

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pSampler);

				break;

	{



	{

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4X4 projection;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pMatrixBuffer = NULL;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	SAFE_RELEASE(m_pLightBuffer);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		delete[] pVList;

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pDevice = NULL;

		return hr;

				tinyobj::real_t tx =





		return hr;

			default:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_UP:

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

int main(int, char**)

		&m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	delete[] pIList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&materials,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	m_pDepthStencilTexture = NULL;

	ID3D11Texture2D* pBackBuffer;

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Quit();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Quit();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			}

		SDL_RenderClear(ren);

	for (int j = 0; j < icount; j++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		exit(1);

	D3D11_BUFFER_DESC vbDesc;

	//vector<WORD> index_t;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pSwapChain);

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pTexture);

	D3D11_BUFFER_DESC ibDesc;

	m_pTexture = NULL;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

{

		KEY_PRESS_SURFACE_DEFAULT,

		&scDesc,

				indexlist.push_back(index);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

};

			switch (e.key.keysym.sym)



	vbDesc.StructureByteStride = 0;

	LoadObj(vertexlist, indexList);

	ConstantLightBuffer clb;

	m_pSampler = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vrData.pSysMem = &pVList[0];

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(bmp);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	WORD* pIList = new WORD[icount];

	txDesc.MiscFlags = 0;

	return 0;

		SDL_RenderPresent(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{



	//ビューポート設定

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!error.empty())



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vrData.SysMemPitch = 0;

	if (FAILED(hr))

		pLevels,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



#include <iostream>

struct ConstantMaterial {

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		flags,







		// Loop over faces(polygon)

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Angle += XMConvertToRadians(1.0f);

}



	WORD   icount = indexList.size();

}

	}

		SDL_RenderClear(ren);

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				// access to vertex

		}

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_DestroyWindow(win);

	{

	//vector<WORD> index_t;

		SDL_RenderClear(ren);



}

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.StructureByteStride = 0;



	irData.SysMemPitch = 0;

	ibDesc.CPUAccessFlags = 0;

	{

	vbDesc.MiscFlags = 0;

		//User presses a key



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderClear(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_DestroyWindow(win);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

				// access to vertex

	{

{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

void CD3DTest::Render()



			{

	auto& materials = reader.GetMaterials();

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			{

	m_IndexCount = icount;



	{

#define TINYOBJLOADER_IMPLEMENTATION

		m_pImmediateContext->ClearState();

	txDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;

	m_Viewport.TopLeftX = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

};

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	m_VertexCount = 0;



	SAFE_RELEASE(m_pPixelShader);

		pVList[i] = vertexlist[i];

	vbDesc.StructureByteStride = 0;



	txDesc.Width = rect.Width();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	vbDesc.StructureByteStride = 0;



		D3D11_SDK_VERSION,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}
				indexlist.push_back(index);



	{

	m_VertexCount = vcount;



				tinyobj::real_t tx =



	vbDesc.StructureByteStride = 0;

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext = NULL;

	ibDesc.StructureByteStride = 0;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

		}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	D3D11_SAMPLER_DESC smpDesc;

	return hr;

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



#endif

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);



		&materials,

	ZeroMemory(&txDesc, sizeof(txDesc));



	{

	ibDesc.MiscFlags = 0;



		&materials,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_VertexCount = 0;

	txDesc.MiscFlags = 0;

	enum KeyPressSurfaces

	m_Viewport.TopLeftY = 0;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);



		{



		KEY_PRESS_SURFACE_UP,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	};

		if (e.type == SDL_QUIT)

{

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderClear(ren);

	if (!error.empty())

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

			index_offset += fv;

			{

	m_pVertexBuffer = NULL;

#include "DirectXManager.h"

	if (FAILED(hr))

	XMFLOAT4X4 view;

		&m_pImmediateContext);



		&scDesc,



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	ConstantLight    pntLight; //点光源

		//User requests quit

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Viewport.TopLeftY = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	WORD* pIList = new WORD[icount];



};

#endif

	//vector<Vertex> vertex_t;

	float    farZ = 100.0f;

/*

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}



	vbDesc.MiscFlags = 0;

}







CD3DTest::~CD3DTest()

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	if (FAILED(hr))

{







				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	UINT offsets = 0;

	{

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;



		pIList[j] = indexList[j];

	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//頂点シェーダー生成

	{

	//vector<WORD> index_t;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_pSwapChain->Present(0, 0);

				break;

	XMFLOAT4 specular;          //反射(r,g,b)

	};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ID3D11Texture2D* pBackBuffer;



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMFLOAT4X4 projection;



			{

	ConstantMaterial material; //物体の質感



	D3D11_TEXTURE2D_DESC txDesc;

			}

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	int     vcount = vertexlist.size();



	}

	vbDesc.StructureByteStride = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	return 0;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

	{

	std::string inputfile = "test.obj";



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	UINT flags = 0;

		pLevels,

	WORD* pIList = new WORD[icount];



struct ConstantMaterial {

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.CPUAccessFlags = 0;

#include <SDL.h>

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.CPUAccessFlags = 0;

	for (int j = 0; j < icount; j++)

		&error,

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 view;

	//Create Index

	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

	CRect                rect;

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	UINT flags = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vector<Vertex> vertexlist;



	SAFE_RELEASE(m_pDepthStencilView);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pImmediateContext);



			{

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4         ambient;  //環境光(r,g,b)

}


	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pSampler);

	std::string error;



	for (int i = 0; i < vcount; i++)

	//頂点レイアウト作成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Texture2D.MipSlice = 0;

	float    nearZ = 0.1f;

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			{



		return hr;

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_Delay(1000);

	m_Viewport.TopLeftY = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//Key press surfaces constants

	SDL_Event e;

	if (m_pImmediateContext)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Vertex* pVList = new Vertex[vcount];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pVertexBuffer = NULL;

		delete[] pVList;





	//定数バッファ作成

				vertex.push_back(vertex_tmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





void CD3DTest::Release()

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	Release();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		//User requests quit

#include <iostream>

		KEY_PRESS_SURFACE_UP,

	irData.pSysMem = &pIList[0];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Release();

	for (int i = 0; i < vcount; i++)

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	CRect                rect;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



};

	for (int i = 0; i < vcount; i++)

}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}*/

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.Height = rect.Height();

		if (!reader.Error().empty())

	::GetClientRect(hwnd, &rect);

	//Key press surfaces constants

	m_Viewport.TopLeftY = 0;



	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	int     vcount = vertexlist.size();



		SDL_RenderClear(ren);

		{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pDepthStencilTexture = NULL;

	cbDesc.MiscFlags = 0;

#include <iostream>



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;

	m_pSwapChain = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	}

	vrData.pSysMem = &pVList[0];

		size_t index_offset = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pImmediateContext);

	}

	scDesc.BufferDesc.Width = rect.Width();

	//vector<Vertex> vertex_t;

	//インデックスバッファ作成

	auto& shapes = reader.GetShapes();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	auto& shapes = reader.GetShapes();



	XMFLOAT4         ambient;  //環境光(r,g,b)



	for (int j = 0; j < icount; j++)

	std::string inputfile = "test.obj";

	m_pSampler = NULL;

	irData.pSysMem = &pIList[0];

	txDesc.ArraySize = 1;





	//深度ステンシルバッファ作成

	//ピクセルシェーダー生成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vector<WORD> indexList;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	scDesc.Windowed = TRUE;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pMatrixBuffer = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	m_IndexCount = 0;

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	//頂点バッファ作成



	return 0;

	return;

	txDesc.MipLevels = 1;

	for (int i = 0; i < 3; i++)



	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pVertexShader);



	//頂点バッファ作成

	UINT offsets = 0;



	txDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	irData.SysMemPitch = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

};

#include <iostream>



}

	}

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#endif

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pTexture);

	vbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		flags,

	D3D11_BUFFER_DESC ibDesc;

	/*

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string imagePath = "hello.bmp";

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyRenderer(ren);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		SDL_RenderClear(ren);



		&shapes,



				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 view;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.Height = rect.Height();



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

		m_pImmediateContext->ClearState();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

	{

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_DEFAULT,



	XMStoreFloat4(&clb.ambient, lightAmbient);

	while (SDL_PollEvent(&e) != 0)

	vrData.SysMemPitch = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA vrData;

	//Clean up our objects and quit



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			case SDLK_RIGHT:



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	//頂点レイアウト作成

struct ConstantMaterial {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantMaterial {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pInputLayout = NULL;



	while (SDL_PollEvent(&e) != 0)

#include <iostream>

		if (!ret)

	cbDesc.CPUAccessFlags = 0;

int SEGMENT = 36;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pTexture);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.TopLeftY = 0;

	::GetClientRect(hwnd, &rect);

	SDL_DestroyWindow(win);

	m_Viewport.Width = (FLOAT)rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	::ZeroMemory(&scDesc, sizeof(scDesc));

	//インデックスバッファ作成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//頂点レイアウト作成

	std::vector<tinyobj::material_t> materials;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyWindow(win);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

	return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	for (int i = 0; i < vcount; i++)

	float    fov = XMConvertToRadians(20.0f);





		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (m_pImmediateContext)

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

				break;

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#ifdef _DEBUG

#define TINYOBJLOADER_IMPLEMENTATION



		SDL_Delay(1000);

	}

	m_pPixelShader = NULL;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)



/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		// Loop over faces(polygon)

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}

	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	m_pDepthStencilTexture = NULL;

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4X4 view;



	m_Viewport.MaxDepth = 1.0f;

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	}



	std::string error;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	}

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return hr;

	m_IndexCount = icount;

		if (!reader.Error().empty())



	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDepthStencilView);

	//頂点レイアウト作成

	if (FAILED(hr))



	Release();

	for (const auto& shape : shapes)

	m_VertexCount = 0;

	{

	//頂点シェーダー生成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ConstantLight    pntLight; //点光源

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

		return 1;

		KEY_PRESS_SURFACE_TOTAL

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	tinyobj::attrib_t attrib;

	}

	if (FAILED(hr))

	SDL_Quit();



				WORD index = idx.vertex_index;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pInputLayout = NULL;



	};

	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//定数バッファ作成



			case SDLK_UP:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				break;

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{



	scDesc.BufferCount = 1;



		size_t index_offset = 0;

	txDesc.CPUAccessFlags = 0;



	txDesc.Height = rect.Height();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

}



	txDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pPixelShader);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}



	//定数バッファ作成

			case SDLK_RIGHT:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_DOWN,

		cout << "SDL_INIT_ERROR" << endl;



	scDesc.BufferDesc.Height = rect.Height();





{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

struct ConstantMatrixBuffer {

	std::string error;

				vertex.push_back(vertex_tmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	bool ret = tinyobj::LoadObj(

		delete[] pVList;

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 pos;               //座標(x,y,z)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

	//Clean up our objects and quit





	SAFE_RELEASE(m_pImmediateContext);

#include "DirectXManager.h"

	SDL_DestroyTexture(tex);



#include "DirectXManager.h"



	}

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			case SDLK_LEFT:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		R"(cube.obj)");

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Create Index

#ifdef _DEBUG

	if (FAILED(hr))



	};

#include <SDL.h>

	txDesc.Width = rect.Width();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

}

		m_pImmediateContext->ClearState();

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pVertexShader);

	D3D11_BUFFER_DESC vbDesc;

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	XMFLOAT4X4 view;

		}

}
	cbDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pTexture = NULL;

	m_pPixelShader = NULL;



 * Lesson 1: Hello World!



		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				break;

{

				tinyobj::real_t tx =

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

		}

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Render()

	std::string error;

	D3D11_SUBRESOURCE_DATA vrData;

	}

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pPixelShader);

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_BUFFER_DESC cbDesc;

{

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMaterial {

	SDL_DestroyTexture(tex);

	vrData.pSysMem = &pVList[0];



{

		return hr;

	m_Angle += XMConvertToRadians(1.0f);







	SDL_Event e;







		R"(cube.obj)");



	// Loop over shapes

		delete[] pVList;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			// Loop over vertices in the face.

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&attrib,

		return hr;

	m_pTextureView = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	LoadObj(vertexlist, indexList);

	enum KeyPressSurfaces

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pSampler = NULL;

	//頂点バッファ作成

		if (e.type == SDL_QUIT)



{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.eyePos, eye);

	//定数バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string imagePath = "hello.bmp";



struct ConstantLightBuffer {

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	SDL_FreeSurface(suf);

	D3D11_SUBRESOURCE_DATA irData;

int main(int, char**)

			}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	m_pSwapChain = NULL;

	{

	m_pSampler = NULL;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.SampleDesc.Quality = 0;

	//頂点レイアウト作成

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//vector<WORD> index_t;

	cbDesc.StructureByteStride = 0;

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

	::GetClientRect(hwnd, &rect);

		return hr;



	m_pTextureView = NULL;

	}

	UINT strides = sizeof(Vertex);

	UINT flags = 0;

	/*

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);









	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_VertexCount = 0;

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	}

				vertex.push_back(vertex_tmp);



	m_pMatrixBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

struct ConstantMatrixBuffer {

struct ConstantLightBuffer {

#include <SDL.h>

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//ビューポート設定

			case SDLK_RIGHT:

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

int main(int, char**)

	m_pVertexShader = NULL;

		return 1;



	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	ConstantLightBuffer clb;

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



struct ConstantLight {

#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.StructureByteStride = 0;

	return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			switch (e.key.keysym.sym)

		return hr;

		SDL_RenderPresent(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//インデックスバッファ作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.MiscFlags = 0;

		&materials,

			//Select surfaces based on key press



				tinyobj::real_t tx =

	for (int i = 0; i < vcount; i++)



			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pImmediateContext);

	//深度ステンシルバッファ作成

	dsDesc.Format = txDesc.Format;

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;

	m_IndexCount = icount;

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

/*

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pVertexShader);

	vbDesc.MiscFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pTextureView = NULL;

	irData.pSysMem = &pIList[0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&error,

	m_Viewport.Width = (FLOAT)rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	float    farZ = 100.0f;

	scDesc.BufferDesc.Width = rect.Width();

{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		size_t index_offset = 0;  // インデントのオフセット

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;



		return hr;

	scDesc.SampleDesc.Quality = 0;

	pBackBuffer->Release();

	m_pSwapChain->Present(0, 0);

		flags,

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

struct ConstantLight {





	txDesc.ArraySize = 1;

	//ビューポート設定

	txDesc.SampleDesc.Quality = 0;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pIndexBuffer);

/*

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_TEXTURE2D_DESC txDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	std::string error;



	vrData.SysMemSlicePitch = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTexture);

		SDL_RenderPresent(ren);

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		if (e.type == SDL_QUIT)

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,



		&m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.SampleDesc.Count = 1;



		SDL_RenderPresent(ren);





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

	//Create Index

	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferCount = 1;

	}

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}



	for (int i = 0; i < 3; i++)

	bool ret = tinyobj::LoadObj(

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	m_pTextureView = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	ibDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		&m_pSwapChain,

	//ビューポート設定

	//First we need to start up SDL, and make sure it went ok

	if (m_pImmediateContext)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

int main(int, char**)

		return 1;



		&scDesc,

	{



	vbDesc.MiscFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);


