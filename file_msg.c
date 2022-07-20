		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

#endif

	auto& attrib = reader.GetAttrib();

	//vector<Vertex> vertex_t;

	vbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	}

				break;

		return hr;

				WORD index = idx.vertex_index;



	vbDesc.StructureByteStride = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	std::string inputfile = "test.obj";

		return hr;

	SAFE_RELEASE(m_pTextureView);

	txDesc.ArraySize = 1;

int SEGMENT = 36;

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	{

	scDesc.BufferDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}
				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	ConstantLight    pntLight; //点光源

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



};

	ibDesc.StructureByteStride = 0;

	};

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//深度ステンシルバッファ作成

				vertex.push_back(vertex_tmp);

	//Create Index



	tinyobj::ObjReaderConfig reader_config;

		1,

	m_pSampler = NULL;

	ConstantMatrixBuffer cmb;

};

		flags,

	int     vcount = vertexlist.size();

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ibDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

		if (!reader.Error().empty())

		m_pImmediateContext->ClearState();

	UINT strides = sizeof(Vertex);

				break;

	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.SampleDesc.Count = 1;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.pSysMem = &pVList[0];



		return hr;

	m_pDevice = NULL;

	//インデックスバッファ作成

	for (int j = 0; j < icount; j++)







				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	int     vcount = vertexlist.size();



	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	Release();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ConstantLightBuffer clb;

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

		NULL,

{



	m_pSampler = NULL;



	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	//First we need to start up SDL, and make sure it went ok

		&shapes,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD   icount = indexList.size();



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>



 */

	SAFE_RELEASE(m_pTextureView);



		size_t index_offset = 0;

};

		return hr;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

{



	m_Viewport.TopLeftY = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

		m_pImmediateContext->ClearState();

		SDL_RenderClear(ren);

	m_pSampler = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pTexture);

	tinyobj::attrib_t attrib;



		size_t index_offset = 0;  // インデントのオフセット

	HRESULT              hr;

		1,



	//Key press surfaces constants

	// Loop over shapes

	D3D11_SUBRESOURCE_DATA irData;



	m_IndexCount = icount;

		&shapes,







	{

	vrData.SysMemSlicePitch = 0;

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		if (!ret)

	XMFLOAT4 specular;          //反射(r,g,b)

CD3DTest::~CD3DTest()

		if (e.type == SDL_QUIT)

			case SDLK_DOWN:

	vbDesc.StructureByteStride = 0;

				// access to vertex

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);







		KEY_PRESS_SURFACE_RIGHT,

	//Clean up our objects and quit

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	pBackBuffer->Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::vector<tinyobj::material_t> materials;



	UINT strides = sizeof(Vertex);

		&attrib,

{

	cbDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 view;

	irData.SysMemPitch = 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

	m_pInputLayout = NULL;



	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	HRESULT              hr;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

		return hr;





		R"(cube.obj)");

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	return hr;

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				indexlist.push_back(idx.vertex_index);

	m_pTextureView = NULL;

		//User presses a key

		//User presses a key

		}

	//Clean up our objects and quit

	/*

#include <iostream>

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	scDesc.Windowed = TRUE;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <SDL.h>

	m_pRenderTargetView = NULL;



		D3D11_SDK_VERSION,



			switch (e.key.keysym.sym)

		&scDesc,

	m_VertexCount = vcount;

	SDL_Quit();

	tinyobj::ObjReader reader;

};

	}

	txDesc.Width = rect.Width();

	vector<Vertex> vertexlist;

{

			}

		}

	XMFLOAT4X4 world;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		KEY_PRESS_SURFACE_UP,



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				break;

	std::vector<tinyobj::material_t> materials;

struct ConstantLightBuffer {



		{

	m_pDepthStencilTexture = NULL;



	SDL_Quit();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

	LoadObj(vertexlist, indexList);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pIndexBuffer);

int main(int, char**)



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

		{

	//頂点シェーダー生成





	//テクスチャ読み込み

			case SDLK_DOWN:

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		R"(cube.obj)");

	SDL_FreeSurface(bmp);



	for (int i = 0; i < vcount; i++)

	cbDesc.MiscFlags = 0;

{

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pImmediateContext);

{



	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pIndexBuffer);

		{

	m_pPixelShader = NULL;

	std::string imagePath = "hello.bmp";

{

}
	txDesc.CPUAccessFlags = 0;

{

	SDL_Event e;



	for (int i = 0; i < 3; i++)

		}

	SDL_Quit();

		if (!ret)

	{

	UINT offsets = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

struct ConstantLight {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (m_pImmediateContext)

struct ConstantMaterial {

			{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

	SDL_Event e;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	scDesc.Windowed = TRUE;





	std::string inputfile = "test.obj";



	D3D11_BUFFER_DESC vbDesc;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantLight    pntLight; //点光源

	vrData.SysMemPitch = 0;

	m_pLightBuffer = NULL;



	//頂点レイアウト作成

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		D3D_DRIVER_TYPE_HARDWARE,

	float    nearZ = 0.1f;





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	scDesc.SampleDesc.Count = 1;

	//Create Index

	SAFE_RELEASE(m_pMatrixBuffer);

	auto& attrib = reader.GetAttrib();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMFLOAT4X4 view;

	vector<Vertex> vertexlist;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	CRect                rect;

	m_pDevice = NULL;



	for (int i = 0; i < vcount; i++)

	//ピクセルシェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	//ピクセルシェーダー生成

		pIList[j] = indexList[j];

		if (e.type == SDL_QUIT)

		delete[] pIList;



	cbDesc.MiscFlags = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.MipLevels = 1;



	// Loop over shapes

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//ピクセルシェーダー生成

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		{

	SDL_DestroyWindow(win);

	XMFLOAT4X4 projection;

		KEY_PRESS_SURFACE_UP,

	return 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	//ピクセルシェーダー生成

				tinyobj::real_t ty =



	auto& materials = reader.GetMaterials();

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pDevice = NULL;

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.StructureByteStride = 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

		size_t index_offset = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//Clean up our objects and quit

		m_pImmediateContext->ClearState();

	vbDesc.CPUAccessFlags = 0;







		m_pImmediateContext->ClearState();

			{

			index_offset += num_vertices;

/*

		}



				break;

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		pVList[i] = vertexlist[i];

	pBackBuffer->Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				// access to vertex

	SDL_DestroyWindow(win);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//テクスチャ読み込み



	//Create Index

	std::vector<tinyobj::shape_t> shapes;

		return hr;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pInputLayout);

				// access to vertex

	for (const auto& shape : shapes)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



			for (size_t v = 0; v < num_vertices; v++)

			//Select surfaces based on key press

		&level,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.Height = rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vrData.SysMemSlicePitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vrData.pSysMem = &pVList[0];

		SDL_RenderClear(ren);

	return 0;

	return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	m_pPixelShader = NULL;







{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);





	for (const auto& shape : shapes)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pTexture = NULL;

{





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		//User requests quit

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

void CD3DTest::Release()

	if (FAILED(hr))

	SDL_Quit();



	m_pRenderTargetView = NULL;

};

			{

	SAFE_RELEASE(m_pTextureView);

		if (!reader.Error().empty())

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				indexlist.push_back(idx.vertex_index);

#include <SDL.h>

		NULL,

	ConstantLightBuffer clb;

{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pTexture);

		NULL,

	}

 */

	if (FAILED(hr))



	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//テクスチャ読み込み



	//深度ステンシルバッファ作成

	return hr;

struct ConstantMatrixBuffer {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t ty =

	CRect                rect;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

		SDL_RenderPresent(ren);

{

	UINT flags = 0;





	LoadObj(vertexlist, indexList);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	SAFE_RELEASE(m_pDepthStencilView);



	reader_config.mtl_search_path = "./"; // Path to material files

	m_IndexCount = icount;

	txDesc.ArraySize = 1;

CD3DTest::CD3DTest()

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyTexture(tex);

};

}



	dsDesc.Format = txDesc.Format;





	if (FAILED(hr))

		delete[] pIList;



	{

	SDL_DestroyRenderer(ren);

void CD3DTest::Release()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{



	XMStoreFloat4(&clb.eyePos, eye);



				break;

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		size_t index_offset = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    farZ = 100.0f;

#include <iostream>



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.MipLevels = 1;

	std::vector<tinyobj::material_t> materials;

			{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				WORD index = idx.vertex_index;

	ibDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				tinyobj::real_t tx =

#include <iostream>

	SAFE_RELEASE(m_pPixelShader);





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			// Loop over vertices in the face.



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vrData.pSysMem = &pVList[0];

{

	scDesc.Windowed = TRUE;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

{



	vector<WORD> indexList;



	XMFLOAT4X4 world;

	return;



	UINT strides = sizeof(Vertex);

	m_Viewport.TopLeftX = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!error.empty())

				WORD index = idx.vertex_index;



		{

	D3D11_TEXTURE2D_DESC txDesc;



				break;



				tinyobj::real_t ty =

		exit(1);

			case SDLK_UP:



{

	SDL_Event e;

	scDesc.BufferDesc.Height = rect.Height();



				// access to vertex

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	tinyobj::ObjReaderConfig reader_config;

/*

		return hr;

	SDL_Quit();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		return hr;

	}

	UINT flags = 0;

	//定数バッファ作成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		if (e.type == SDL_QUIT)

	delete[] pVList;

 */

		// Loop over faces(polygon)

		m_pImmediateContext->ClearState();



	if (FAILED(hr))

	SDL_DestroyWindow(win);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pTexture);

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

		KEY_PRESS_SURFACE_RIGHT,

	Release();

	//テクスチャ読み込み







	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.Width = (FLOAT)rect.Width();



	SAFE_RELEASE(m_pDepthStencilView);

	UINT offsets = 0;

			exit(1);



	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_BUFFER_DESC vbDesc;

			for (size_t v = 0; v < fv; v++)



	//Key press surfaces constants

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

}
	D3D_FEATURE_LEVEL level;



		size_t index_offset = 0;

	std::string error;

#include <SDL.h>

	m_VertexCount = vcount;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	vrData.pSysMem = &pVList[0];



	m_Viewport.MinDepth = 0.0f;

		return 1;

		else if (e.type == SDL_KEYDOWN)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.MipLevels = 1;

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		SDL_Delay(1000);



	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4X4 view;

	ibDesc.StructureByteStride = 0;

	for (int j = 0; j < icount; j++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	scDesc.Windowed = TRUE;

		cout << "SDL_INIT_ERROR" << endl;

 */



	m_pDevice = NULL;

	m_pDepthStencilTexture = NULL;

	//インデックスバッファ作成

	m_VertexCount = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		}

	//ピクセルシェーダー生成

#endif

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	delete[] pVList;

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

			index_offset += fv;

	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;



		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vector<Vertex> vertexlist;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4X4 projection;

	{

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

}

	//深度ステンシルバッファ作成

	auto& shapes = reader.GetShapes();

	m_Viewport.MaxDepth = 1.0f;

	dsDesc.Format = txDesc.Format;

	//First we need to start up SDL, and make sure it went ok

	ibDesc.MiscFlags = 0;



	{

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Event e;

	scDesc.BufferCount = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





		&scDesc,

		KEY_PRESS_SURFACE_TOTAL

	m_pSampler = NULL;

	m_pSampler = NULL;



	tinyobj::attrib_t attrib;

	{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Quit();

	txDesc.ArraySize = 1;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;

		return hr;

		}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

		return hr;

		return hr;

};

		m_pImmediateContext->ClearState();

	//Create Index

	}

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		}

	for (int j = 0; j < icount; j++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::vector<tinyobj::shape_t> shapes;



		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,



	SAFE_RELEASE(m_pMatrixBuffer);

		if (e.type == SDL_QUIT)

		&m_pImmediateContext);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		return hr;

		KEY_PRESS_SURFACE_LEFT,

	for (int j = 0; j < icount; j++)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

 * Lesson 1: Hello World!

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_RenderClear(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pTexture);

	txDesc.MipLevels = 1;

	SDL_FreeSurface(suf);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftX = 0;

#endif

	return 0;

				tinyobj::real_t tx =

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

		&m_pImmediateContext);

	CRect                rect;

		KEY_PRESS_SURFACE_RIGHT,

		{

		&m_pImmediateContext);



	if (m_pImmediateContext)



	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		{

		// Loop over faces(polygon)

	XMFLOAT4 specular;          //反射(r,g,b)



	hr = D3D11CreateDeviceAndSwapChain(NULL,





	float    nearZ = 0.1f;

	vector<Vertex> vertexlist;

};

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#include <iostream>

			switch (e.key.keysym.sym)

	for (int j = 0; j < icount; j++)

	{



	m_pTextureView = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;

		return hr;



		SDL_RenderClear(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

		{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

				indexlist.push_back(idx.vertex_index);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&attrib,

	}



	txDesc.Height = rect.Height();

		return hr;





				WORD index = idx.vertex_index;

	dsDesc.Format = txDesc.Format;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		if (!ret)

	std::string inputfile = "test.obj";

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

int SEGMENT = 36;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{



		KEY_PRESS_SURFACE_UP,

		if (!ret)

	ConstantMaterial material; //物体の質感

	D3D_FEATURE_LEVEL level;



		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::GetClientRect(hwnd, &rect);

	m_pVertexBuffer = NULL;

			{



				// access to vertex

}

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext = NULL;





	m_pSampler = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

};

	//Key press surfaces constants

}

	float    farZ = 100.0f;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderClear(ren);

}
	}

	m_pTextureView = NULL;

	m_pVertexShader = NULL;



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&scDesc,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pLightBuffer = NULL;

	m_IndexCount = icount;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	//Create Index

		pVList[i] = vertexlist[i];

	cbDesc.MiscFlags = 0;

	//定数バッファ作成



	CRect                rect;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



			case SDLK_LEFT:



		pVList[i] = vertexlist[i];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

void CD3DTest::Release()

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_DestroyRenderer(ren);

	delete[] pIList;





	}

		//User requests quit

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	auto& materials = reader.GetMaterials();

			exit(1);



	SAFE_RELEASE(m_pTexture);

	m_pDevice = NULL;

	D3D11_TEXTURE2D_DESC txDesc;







	txDesc.Width = rect.Width();

	SDL_Quit();

void CD3DTest::Release()

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		pVList[i] = vertexlist[i];

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;



#include "DirectXManager.h"

	UINT strides = sizeof(Vertex);

	cbDesc.StructureByteStride = 0;

	vrData.SysMemSlicePitch = 0;



		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//頂点レイアウト作成

				// access to vertex

				// access to vertex

{



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyTexture(tex);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

	if (m_pImmediateContext)



		m_pImmediateContext->ClearState();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

				indexlist.push_back(idx.vertex_index);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&m_pImmediateContext);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

using std::cout; using std::endl;



	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	SAFE_RELEASE(m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMFLOAT4X4 view;

	auto& shapes = reader.GetShapes();

	while (SDL_PollEvent(&e) != 0)

	//頂点シェーダー生成

using std::cout; using std::endl;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ibDesc.CPUAccessFlags = 0;

{

	//頂点バッファ作成

	irData.SysMemSlicePitch = 0;

#define TINYOBJLOADER_IMPLEMENTATION

		size_t index_offset = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.SampleDesc.Quality = 0;

		&level,



		//User requests quit

	return 0;



	{

	m_Viewport.TopLeftY = 0;

	m_Viewport.MinDepth = 0.0f;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pLightBuffer);

		return hr;

}

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string imagePath = "hello.bmp";

	m_Viewport.Height = (FLOAT)rect.Height();

		return 1;

#include <SDL.h>

	XMFLOAT4X4 view;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

};

	txDesc.Width = rect.Width();

	if (FAILED(hr))

}

	UINT flags = 0;

	}

	SAFE_RELEASE(m_pMatrixBuffer);

	CRect                rect;

	m_pLightBuffer = NULL;

	m_pIndexBuffer = NULL;

	for (int i = 0; i < vcount; i++)

		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pInputLayout);

	WORD* pIList = new WORD[icount];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//深度ステンシルバッファ作成

				WORD index = idx.vertex_index;



	vbDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.SampleDesc.Quality = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.Width = (FLOAT)rect.Width();



{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;



	txDesc.MiscFlags = 0;

#include <iostream>

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Event e;

		}

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	//テクスチャ読み込み

	//深度ステンシルバッファ作成



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//頂点バッファ作成

				// access to vertex

	m_IndexCount = icount;

	D3D11_TEXTURE2D_DESC txDesc;



 * Lesson 1: Hello World!

CD3DTest::~CD3DTest()





	enum KeyPressSurfaces



	UINT flags = 0;

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.CPUAccessFlags = 0;

	txDesc.ArraySize = 1;

				// access to vertex

	if (FAILED(hr))



		}

	{

	D3D11_SAMPLER_DESC smpDesc;



	cbDesc.StructureByteStride = 0;

};

	SDL_DestroyTexture(tex);

	txDesc.Width = rect.Width();

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#define TINYOBJLOADER_IMPLEMENTATION

}
	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//Key press surfaces constants



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

 */

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			//Select surfaces based on key press

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.MiscFlags = 0;

{



	// Loop over shapes

	txDesc.MiscFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderClear(ren);

		}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	CRect                rect;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.CPUAccessFlags = 0;

	SDL_DestroyWindow(win);

	SDL_Quit();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string error;

				break;

	//インデックスバッファ作成

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::ObjReader reader;

		1,

	reader_config.mtl_search_path = "./"; // Path to material files

int SEGMENT = 36;

		delete[] pIList;

	m_pTextureView = NULL;

	return 0;

	D3D11_BUFFER_DESC cbDesc;



		// Loop over faces(polygon)

		return hr;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	dsDesc.Texture2D.MipSlice = 0;

		}

			}

	vector<WORD> indexList;

		//User requests quit

	if (FAILED(hr))

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_DestroyWindow(win);

	scDesc.BufferDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL level;

	m_Viewport.TopLeftY = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,



	txDesc.Height = rect.Height();

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pInputLayout = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				WORD index = idx.vertex_index;



	ID3D11Texture2D* pBackBuffer;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))



{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	enum KeyPressSurfaces

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

CD3DTest::~CD3DTest()

	m_pDevice = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		NULL,

int main(int, char**)

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	D3D11_SUBRESOURCE_DATA irData;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ConstantLight    pntLight; //点光源

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pInputLayout = NULL;



		&level,

	WORD   icount = indexList.size();

	if (m_pImmediateContext)

		{

	for (int j = 0; j < icount; j++)

	//頂点レイアウト作成



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext = NULL;

		D3D11_SDK_VERSION,

		return 1;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;

	SDL_FreeSurface(bmp);

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	bool ret = tinyobj::LoadObj(



	if (FAILED(hr))

#include "DirectXManager.h"

	SAFE_RELEASE(m_pLightBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		D3D_DRIVER_TYPE_HARDWARE,

		{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pIndexBuffer);

	enum KeyPressSurfaces



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		SDL_RenderClear(ren);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		SDL_RenderPresent(ren);

	ConstantLightBuffer clb;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexShader);





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

				break;

	};

	m_pVertexShader = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			case SDLK_LEFT:

		size_t index_offset = 0;  // インデントのオフセット

		pVList[i] = vertexlist[i];

			{

			case SDLK_DOWN:

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pRenderTargetView = NULL;

	{

	}

	cbDesc.StructureByteStride = 0;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pRenderTargetView);



			case SDLK_RIGHT:



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#ifdef _DEBUG

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//ビューポート設定

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	HRESULT              hr;

		//User requests quit

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_FreeSurface(bmp);

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#ifdef _DEBUG

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	D3D11_BUFFER_DESC ibDesc;

	D3D11_SUBRESOURCE_DATA irData;

	auto& attrib = reader.GetAttrib();

			{

	vrData.SysMemSlicePitch = 0;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (!error.empty())

	//深度ステンシルバッファ作成

 */

	irData.pSysMem = &pIList[0];

		m_pImmediateContext->ClearState();

	tinyobj::attrib_t attrib;

struct ConstantLightBuffer {

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_Viewport.MaxDepth = 1.0f;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

};

	{



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pSwapChain = NULL;

}

	m_VertexCount = vcount;

	std::string error;

		&m_pImmediateContext);

	//インデックスバッファ作成

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4X4 view;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_Quit();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	SAFE_RELEASE(m_pTextureView);



	for (int i = 0; i < vcount; i++)

	::GetClientRect(hwnd, &rect);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				vertex.push_back(vertex_tmp);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_IndexCount = icount;



				tinyobj::real_t ty =

void CD3DTest::Render()

	//Key press surfaces constants

		return 1;

	if (FAILED(hr))

struct ConstantLightBuffer {

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	if (FAILED(hr))

{

	cbDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			}



		exit(1);



	m_VertexCount = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

#include <iostream>

		&shapes,



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				// access to vertex



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		R"(cube.obj)");



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		{



		return 1;

	tinyobj::ObjReader reader;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{



	delete[] pIList;



	XMFLOAT4         ambient;  //環境光(r,g,b)

			}

	if (FAILED(hr))

int main(int, char**)

	D3D11_SAMPLER_DESC smpDesc;



	{

			}



	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//vector<WORD> index_t;



	//Vertex* pVList = new Vertex[vcount];

	pBackBuffer->Release();

	//頂点バッファ作成

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_RenderPresent(ren);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	if (FAILED(hr))

	if (m_pImmediateContext)

	float    farZ = 100.0f;

using std::cout; using std::endl;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

void CD3DTest::Release()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMFLOAT4 pos;               //座標(x,y,z)

	}

	vrData.SysMemSlicePitch = 0;



		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vector<Vertex> vertexlist;



	return;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_Viewport.MinDepth = 0.0f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	ConstantMaterial material; //物体の質感

void CD3DTest::Release()

};



struct ConstantMatrixBuffer {

	//深度ステンシルバッファ作成

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		size_t index_offset = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.StructureByteStride = 0;

	};

		KEY_PRESS_SURFACE_UP,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#define TINYOBJLOADER_IMPLEMENTATION

	vector<WORD> indexList;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	while (SDL_PollEvent(&e) != 0)

		return hr;



	SAFE_RELEASE(m_pSampler);

int main(int, char**)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

			case SDLK_DOWN:

	LoadObj(vertexlist, indexList);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





{

	cbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

		&shapes,

	if (m_pImmediateContext)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext = NULL;





	m_IndexCount = icount;

	{

	txDesc.ArraySize = 1;

		size_t index_offset = 0;

	}

	SAFE_RELEASE(m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

		pVList[i] = vertexlist[i];

	{

		//User presses a key



				indexlist.push_back(idx.vertex_index);

		return hr;

	scDesc.SampleDesc.Quality = 0;

				WORD index = idx.vertex_index;

		&m_pSwapChain,

		D3D_DRIVER_TYPE_HARDWARE,

			for (size_t v = 0; v < fv; v++)

		return hr;

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))





	SAFE_RELEASE(m_pInputLayout);

	}



		return hr;

 * Lesson 1: Hello World!

	XMFLOAT4 pos;               //座標(x,y,z)

	UINT flags = 0;

				vertex.push_back(vertex_tmp);





{



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	{

			case SDLK_LEFT:

	{

		D3D_DRIVER_TYPE_HARDWARE,

	//インデックスバッファ作成

			{

	tinyobj::ObjReaderConfig reader_config;

	std::string inputfile = "test.obj";

		}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pVertexBuffer);

#include <iostream>

				break;

	SDL_Quit();

	txDesc.CPUAccessFlags = 0;

	//インデックスバッファ作成

	scDesc.SampleDesc.Quality = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





		KEY_PRESS_SURFACE_RIGHT,

	if (m_pImmediateContext)

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

};



	XMFLOAT4 ambient;           //環境(r,g,b)

	for (int j = 0; j < icount; j++)

	// Loop over shapes

		flags,

	}

	m_Viewport.TopLeftX = 0;

	vrData.SysMemSlicePitch = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	delete[] pIList;

	CRect                rect;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SAFE_RELEASE(m_pVertexShader);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

				break;

				// access to vertex

	if (!error.empty())

		&m_pDevice,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	return 0;

				// access to vertex

	ibDesc.CPUAccessFlags = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    nearZ = 0.1f;

	UINT offsets = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

void CD3DTest::Render()





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

int main(int, char**)

			}

	std::string inputfile = "test.obj";



CD3DTest::~CD3DTest()



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//頂点シェーダー生成

	m_Viewport.MinDepth = 0.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	bool ret = tinyobj::LoadObj(

		m_pImmediateContext->ClearState();



		//User presses a key

		KEY_PRESS_SURFACE_UP,

	{

			{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantLightBuffer clb;





			index_offset += fv;

{

			index_offset += fv;

};

	D3D11_BUFFER_DESC cbDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

	//頂点レイアウト作成

				tinyobj::real_t tx =

				// access to vertex





	m_Viewport.MinDepth = 0.0f;

	delete[] pVList;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//vector<WORD> index_t;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

}

		NULL,



		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.MiscFlags = 0;





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pVertexShader = NULL;

	/*

	if (FAILED(hr))

}

	m_pDevice = NULL;

	tinyobj::ObjReader reader;

	}

		1,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SDL_DestroyTexture(tex);

	scDesc.SampleDesc.Quality = 0;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		delete[] pVList;

}

	//テクスチャ読み込み

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			case SDLK_DOWN:

	// Loop over shapes

		exit(1);

	m_Viewport.MaxDepth = 1.0f;

			}

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4X4 projection;

{

	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderClear(ren);

	m_pTextureView = NULL;

	if (FAILED(hr))



	HRESULT              hr;

	SAFE_RELEASE(m_pTextureView);

		delete[] pVList;



	{

	{

	D3D11_TEXTURE2D_DESC txDesc;

				indexlist.push_back(idx.vertex_index);

				vertex.push_back(vertex_tmp);

	//vector<Vertex> vertex_t;

	m_Viewport.Height = (FLOAT)rect.Height();

			// Loop over vertices in the face.

	/*

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyWindow(win);

void CD3DTest::Render()

		return hr;

	SDL_DestroyRenderer(ren);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	if (FAILED(hr))

		m_pImmediateContext->ClearState();

		&level,

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return 0;

	std::string error;

			default:

		if (!ret)

	SAFE_RELEASE(m_pRenderTargetView);

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点レイアウト作成

	vrData.pSysMem = &pVList[0];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <iostream>

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

				indexlist.push_back(idx.vertex_index);

		&level,

	ConstantLightBuffer clb;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		flags,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	/*

{

	//インデックスバッファ作成

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		//User requests quit

		{

struct ConstantLight {

	for (const auto& shape : shapes)

	{

	SDL_DestroyRenderer(ren);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += num_vertices;

	if (FAILED(hr))

		SDL_Delay(1000);



	irData.SysMemPitch = 0;

	//テクスチャ読み込み

		size_t index_offset = 0;

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		pLevels,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		pLevels,

/*

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pInputLayout);

	m_pTexture = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return hr;

	SAFE_RELEASE(m_pDepthStencilView);





	SDL_FreeSurface(suf);

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

				tinyobj::real_t ty =

	cbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	m_pMatrixBuffer = NULL;



	vrData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	{

int main(int, char**)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	Release();

	Release();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	std::string imagePath = "hello.bmp";

	txDesc.MipLevels = 1;

	ConstantLightBuffer clb;



	auto& materials = reader.GetMaterials();

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	txDesc.MipLevels = 1;

	{

	return 0;

	m_pVertexShader = NULL;

	//頂点レイアウト作成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				// access to vertex

	}

/*

	}



				// access to vertex

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	std::string inputfile = "test.obj";

	vrData.pSysMem = &pVList[0];



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSampler = NULL;

			default:

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		NULL,





	}

	enum KeyPressSurfaces



	txDesc.Width = rect.Width();



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_VertexCount = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			index_offset += fv;

	SAFE_RELEASE(m_pInputLayout);

			for (size_t v = 0; v < fv; v++)

		size_t index_offset = 0;  // インデントのオフセット



struct ConstantLight {



	vrData.pSysMem = &pVList[0];



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

int SEGMENT = 36;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.SampleDesc.Count = 1;

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	if (FAILED(hr))

	}

	m_pVertexBuffer = NULL;

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_LEFT,

	UINT flags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.MiscFlags = 0;

	m_pSwapChain->Present(0, 0);

	std::string error;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		}

	reader_config.mtl_search_path = "./"; // Path to material files

		m_pImmediateContext->ClearState();

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Quit();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

		size_t index_offset = 0;

			for (size_t v = 0; v < num_vertices; v++)



	{

struct ConstantMatrixBuffer {

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	cbDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;

	//深度ステンシルバッファ作成



	std::vector<tinyobj::material_t> materials;

	SDL_Quit();

		KEY_PRESS_SURFACE_DEFAULT,

	}

	m_Angle += XMConvertToRadians(1.0f);



		&scDesc,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		&attrib,

	m_VertexCount = 0;



			case SDLK_UP:

		delete[] pIList;

	vrData.SysMemPitch = 0;

	vrData.SysMemPitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::string error;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;







	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return 1;

	//頂点シェーダー生成

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}


	return 0;

	::GetClientRect(hwnd, &rect);

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//テクスチャ読み込み

	m_pSampler = NULL;



			switch (e.key.keysym.sym)

	if (FAILED(hr))

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	//Key press surfaces constants

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext = NULL;

	vbDesc.MiscFlags = 0;

			case SDLK_LEFT:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,





	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

		SDL_Delay(1000);

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	reader_config.mtl_search_path = "./"; // Path to material files

		pLevels,

			{

	}*/

	m_pImmediateContext = NULL;

	SDL_DestroyWindow(win);

		&materials,

				vertex.push_back(vertex_tmp);

		D3D11_SDK_VERSION,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		D3D_DRIVER_TYPE_HARDWARE,



	tinyobj::ObjReaderConfig reader_config;

	Vertex* pVList = new Vertex[vcount];



	vbDesc.CPUAccessFlags = 0;

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pVertexShader);



			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.SampleDesc.Count = 1;

	//Create Index

}

	};

	UINT strides = sizeof(Vertex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{





		SDL_RenderPresent(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		NULL,







	m_Viewport.MaxDepth = 1.0f;

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}

	pBackBuffer->Release();

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantLight    pntLight; //点光源

	vrData.SysMemPitch = 0;

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext = NULL;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t ty =

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pIndexBuffer = NULL;

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		cout << "SDL_INIT_ERROR" << endl;

CD3DTest::~CD3DTest()

	int     vcount = vertexlist.size();

	m_pSwapChain = NULL;

	auto& shapes = reader.GetShapes();



	//vector<WORD> index_t;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (!ret)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.SampleDesc.Count = 1;

		&scDesc,

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	irData.SysMemPitch = 0;



	ConstantMatrixBuffer cmb;

	SDL_DestroyTexture(tex);

	}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	scDesc.SampleDesc.Count = 1;

	m_pSampler = NULL;

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

		return hr;

	m_pMatrixBuffer = NULL;

	return hr;

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

int main(int, char**)

			}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pSampler);

				vertex.push_back(vertex_tmp);

		pLevels,

	cbDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_DestroyTexture(tex);

/*

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&level,



	scDesc.BufferDesc.Width = rect.Width();





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pIndexBuffer);



	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pSampler);

	tinyobj::ObjReader reader;

	Release();

	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			index_offset += num_vertices;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))



	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

	vrData.SysMemPitch = 0;

	bool ret = tinyobj::LoadObj(



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	XMFLOAT4X4 projection;







#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			}

		&scDesc,

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferDesc.Width = rect.Width();

		&error,

struct ConstantLight {

	XMFLOAT4         ambient;  //環境光(r,g,b)




