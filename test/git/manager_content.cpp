		return 1;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



struct ConstantMaterial {





	if (!reader.Warning().empty())

	//ビューポート設定

				WORD index = idx.vertex_index;







	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	if (m_pImmediateContext)

	vbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_RIGHT,

	}

	//ピクセルシェーダー生成

				tinyobj::real_t tx =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

		pIList[j] = indexList[j];

	irData.SysMemPitch = 0;

		return hr;

	vector<WORD> indexList;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.ArraySize = 1;

				// access to vertex

	scDesc.SampleDesc.Count = 1;

				// access to vertex

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	ConstantLight    pntLight; //点光源

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				break;

	irData.SysMemPitch = 0;

	ConstantMaterial material; //物体の質感

{

		return hr;

		SDL_RenderPresent(ren);

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Quality = 0;

	vbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	Release();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		//User requests quit

			case SDLK_LEFT:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	scDesc.BufferCount = 1;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	ConstantMaterial material; //物体の質感

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;



	SAFE_RELEASE(m_pDepthStencilView);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//定数バッファ作成

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	LoadObj(vertexlist, indexList);



	};

				WORD index = idx.vertex_index;







	//頂点シェーダー生成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	irData.pSysMem = &pIList[0];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Quality = 0;

		&level,

			{

				break;

	m_pSampler = NULL;

		pIList[j] = indexList[j];

	txDesc.ArraySize = 1;



	//Key press surfaces constants

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pDevice);

	auto& materials = reader.GetMaterials();

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SAFE_RELEASE(m_pPixelShader);

		return hr;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

#include <iostream>

	SAFE_RELEASE(m_pTextureView);

	txDesc.Width = rect.Width();



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include <iostream>

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pDevice);



	//テクスチャ読み込み

			}

 */

	m_pRenderTargetView = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

};

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

				// access to vertex

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	{

		&error,

		{

void CD3DTest::Release()



	//頂点シェーダー生成

	//深度ステンシルバッファ作成

	std::string inputfile = "test.obj";

		{

	m_Angle += XMConvertToRadians(1.0f);

struct ConstantLight {

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

int main(int, char**)

#include <iostream>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		//User presses a key

		m_pImmediateContext->ClearState();

		return hr;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	for (int i = 0; i < vcount; i++)

}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int SEGMENT = 36;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	scDesc.SampleDesc.Quality = 0;

		&error,

}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	auto& shapes = reader.GetShapes();

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vector<WORD> indexList;

	scDesc.Windowed = TRUE;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	txDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	cbDesc.StructureByteStride = 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



	m_VertexCount = vcount;





		SDL_RenderClear(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



			case SDLK_DOWN:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点レイアウト作成

		return hr;

	int     vcount = vertexlist.size();

				break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Quit();

	SAFE_RELEASE(m_pTextureView);

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{

		{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Quality = 0;



}
	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vector<Vertex> vertexlist;

	{

	txDesc.SampleDesc.Quality = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	SAFE_RELEASE(m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4X4 projection;

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		size_t index_offset = 0;

	LoadObj(vertexlist, indexList);





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pTextureView);

	}

	if (m_pImmediateContext)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyWindow(win);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

	SAFE_RELEASE(m_pSwapChain);

		return hr;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t tx =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	WORD* pIList = new WORD[icount];

	//vector<WORD> index_t;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.CPUAccessFlags = 0;

	for (const auto& shape : shapes)



	ConstantMatrixBuffer cmb;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);







	UINT offsets = 0;

	auto& materials = reader.GetMaterials();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.MipLevels = 1;

	//頂点バッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

#define TINYOBJLOADER_IMPLEMENTATION

		//User presses a key

	m_Viewport.Width = (FLOAT)rect.Width();



	}

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		R"(cube.obj)");

			switch (e.key.keysym.sym)

			}



#define TINYOBJLOADER_IMPLEMENTATION

	//頂点シェーダー生成

	if (FAILED(hr))

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;

	}

	//頂点シェーダー生成

				break;

		SDL_RenderClear(ren);

			switch (e.key.keysym.sym)

				WORD index = idx.vertex_index;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantMatrixBuffer cmb;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

		return hr;

	m_pDevice = NULL;

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_FreeSurface(suf);





	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		if (!ret)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&scDesc,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_VertexCount = 0;

	m_VertexCount = 0;





	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_DestroyTexture(tex);

{

	{

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_TOTAL

	{

	m_pImmediateContext = NULL;



	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

			exit(1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SAFE_RELEASE(m_pDevice);

void CD3DTest::Render()

	//Clean up our objects and quit

		R"(cube.obj)");



	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	WORD* pIList = new WORD[icount];

	irData.SysMemSlicePitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

CD3DTest::~CD3DTest()



	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//Key press surfaces constants



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	m_VertexCount = 0;

	std::vector<tinyobj::shape_t> shapes;

	auto& materials = reader.GetMaterials();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			// Loop over vertices in the face.

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vector<WORD> indexList;

	dsDesc.Format = txDesc.Format;

				break;

				break;

		return hr;

			//Select surfaces based on key press



				break;

	{



	DXGI_SWAP_CHAIN_DESC scDesc;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//定数バッファ作成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pInputLayout = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		D3D_DRIVER_TYPE_HARDWARE,



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



{



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	m_IndexCount = 0;

	//頂点シェーダー生成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.MiscFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&materials,

	m_Viewport.TopLeftY = 0;

	delete[] pIList;

			switch (e.key.keysym.sym)

		}

				indexlist.push_back(index);

	cbDesc.CPUAccessFlags = 0;



				tinyobj::real_t tx =

		&m_pSwapChain,

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	scDesc.BufferDesc.Height = rect.Height();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	::GetClientRect(hwnd, &rect);

	SDL_FreeSurface(bmp);

			case SDLK_RIGHT:

		R"(cube.obj)");

	ConstantMatrixBuffer cmb;

	txDesc.SampleDesc.Count = 1;



		&m_pImmediateContext);

CD3DTest::CD3DTest()



	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pDepthStencilTexture = NULL;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	SDL_Quit();



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		size_t index_offset = 0;  // インデントのオフセット

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		flags,





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	}

	ConstantMaterial material; //物体の質感

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.BufferDesc.Height = rect.Height();

			//Select surfaces based on key press



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	};



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4 pos;               //座標(x,y,z)

CD3DTest::~CD3DTest()

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pSwapChain = NULL;

		SDL_RenderPresent(ren);

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	enum KeyPressSurfaces

}

	txDesc.SampleDesc.Count = 1;

	ConstantLightBuffer clb;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

		1,

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

	m_pLightBuffer = NULL;

	{



			}

	scDesc.OutputWindow = hwnd;

 * Lesson 1: Hello World!

			exit(1);



		if (!ret)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

 */





			int num_vertices = shape.mesh.num_face_vertices[f];

		exit(1);

		{

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pDevice = NULL;

	SDL_DestroyWindow(win);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		KEY_PRESS_SURFACE_DOWN,



	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_RIGHT:

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();

#endif





	enum KeyPressSurfaces

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		&level,

	std::string imagePath = "hello.bmp";

		R"(cube.obj)");

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_RenderClear(ren);



	m_pMatrixBuffer = NULL;

		{

	vbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	return;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

	scDesc.SampleDesc.Count = 1;

	{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.MiscFlags = 0;



			//Select surfaces based on key press



	XMFLOAT4         eyePos;   //視点座標



		return hr;

	D3D11_SAMPLER_DESC smpDesc;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





{

			//Select surfaces based on key press

		if (e.type == SDL_QUIT)

	m_pIndexBuffer = NULL;

		NULL,

};

	scDesc.BufferDesc.Height = rect.Height();

	for (int i = 0; i < 3; i++)

			}



	WORD* pIList = new WORD[icount];

				WORD index = idx.vertex_index;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4         eyePos;   //視点座標

		size_t index_offset = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			case SDLK_DOWN:

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (!error.empty())

	m_pPixelShader = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    nearZ = 0.1f;

			case SDLK_DOWN:

{

	UINT offsets = 0;

				WORD index = idx.vertex_index;

	XMFLOAT4 pos;               //座標(x,y,z)

		pVList[i] = vertexlist[i];

	//インデックスバッファ作成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		R"(cube.obj)");

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//vector<WORD> index_t;

	if (FAILED(hr))



	}

	D3D11_BUFFER_DESC ibDesc;

	for (int i = 0; i < 3; i++)

	}

				tinyobj::real_t ty =

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





		return hr;

	XMFLOAT4X4 world;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		D3D11_SDK_VERSION,

}



			case SDLK_DOWN:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		exit(1);

		cout << "SDL_INIT_ERROR" << endl;

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	{

	{

	if (m_pImmediateContext)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	auto& shapes = reader.GetShapes();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





		{

	SAFE_RELEASE(m_pImmediateContext);

{

	txDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_UP,

	//Vertex* pVList = new Vertex[vcount];

{

	{



				break;

	std::string imagePath = "hello.bmp";

	irData.SysMemSlicePitch = 0;

		return hr;

void CD3DTest::Render()



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		if (!ret)

	m_pInputLayout = NULL;



int main(int, char**)

	vbDesc.CPUAccessFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];



	ConstantLightBuffer clb;



	float    farZ = 100.0f;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

 * Lesson 1: Hello World!



	//インデックスバッファ作成

	//Key press surfaces constants

		&materials,

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.eyePos, eye);

		//User requests quit

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.MiscFlags = 0;

		if (e.type == SDL_QUIT)

	UINT flags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

void CD3DTest::Render()

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

}

	XMFLOAT4X4 view;

	float    fov = XMConvertToRadians(20.0f);

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	}



		// Loop over faces(polygon)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pRenderTargetView = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			{

	XMFLOAT4         eyePos;   //視点座標

				break;

	//定数バッファ作成

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	m_Viewport.MaxDepth = 1.0f;

	}

	vbDesc.StructureByteStride = 0;

	m_pMatrixBuffer = NULL;



	SAFE_RELEASE(m_pDepthStencilTexture);



HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pDevice);

		cout << "SDL_INIT_ERROR" << endl;

	{

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pSampler);

		KEY_PRESS_SURFACE_RIGHT,

}
	{

	XMFLOAT4X4 projection;

	if (FAILED(hr))



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	{

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::string error;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





		return hr;

	SDL_DestroyTexture(tex);

	while (SDL_PollEvent(&e) != 0)

}
	ID3D11Texture2D* pBackBuffer;

	scDesc.SampleDesc.Quality = 0;

	if (!reader.Warning().empty())

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	m_pSampler = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.SampleDesc.Count = 1;

{

	//定数バッファ作成



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



			{

	{

		{



		}

	//定数バッファ作成

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::string inputfile = "test.obj";



	scDesc.SampleDesc.Count = 1;



	ibDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Count = 1;

};

		return hr;



	vector<WORD> indexList;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		return hr;

			// Loop over vertices in the face.

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pDepthStencilTexture);

	irData.pSysMem = &pIList[0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}





	SDL_DestroyRenderer(ren);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				break;

	scDesc.SampleDesc.Count = 1;

	ibDesc.StructureByteStride = 0;

			exit(1);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{

}

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantLight {



	txDesc.Height = rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



struct ConstantMatrixBuffer {

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.SampleDesc.Count = 1;

				vertex.push_back(vertex_tmp);



	if (FAILED(hr))



	auto& attrib = reader.GetAttrib();

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	SAFE_RELEASE(m_pSampler);

	{

		//User requests quit

	for (size_t s = 0; s < shapes.size(); s++)





}
	scDesc.BufferDesc.Height = rect.Height();

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		// Loop over faces(polygon)

		if (!reader.Error().empty())

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

	//頂点シェーダー生成



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pDevice = NULL;



	HRESULT              hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);





			}

			case SDLK_LEFT:

	SAFE_RELEASE(m_pMatrixBuffer);

	ConstantLightBuffer clb;

	dsDesc.Format = txDesc.Format;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			default:



	if (FAILED(hr))





	m_IndexCount = 0;





		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	}



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		D3D_DRIVER_TYPE_HARDWARE,

#include <SDL.h>



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;



	float    farZ = 100.0f;

	m_pMatrixBuffer = NULL;



			//Select surfaces based on key press

{

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{

	m_pPixelShader = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);









		return hr;

		flags,

	//vector<Vertex> vertex_t;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantMatrixBuffer cmb;



			default:

	m_VertexCount = vcount;

	cbDesc.StructureByteStride = 0;



				WORD index = idx.vertex_index;

#include <iostream>

	m_VertexCount = vcount;

	}

			}

	while (SDL_PollEvent(&e) != 0)

CD3DTest::~CD3DTest()



	dsDesc.Texture2D.MipSlice = 0;

	ibDesc.StructureByteStride = 0;

		&shapes,

		return hr;

	SAFE_RELEASE(m_pSampler);



		else if (e.type == SDL_KEYDOWN)

struct ConstantLight {

	irData.SysMemPitch = 0;

{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pSwapChain = NULL;



	}



		}

			{

		if (!ret)

	vbDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pDevice = NULL;

		if (!ret)

			case SDLK_LEFT:

			case SDLK_LEFT:

}

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	irData.SysMemPitch = 0;

	//Key press surfaces constants

	pBackBuffer->Release();

	m_IndexCount = 0;



			case SDLK_UP:



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	m_pSwapChain = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	XMFLOAT4X4 world;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))





	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);

	if (FAILED(hr))

	if (FAILED(hr))

{

		D3D11_SDK_VERSION,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			default:

	irData.SysMemPitch = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));



#include <SDL.h>

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	XMStoreFloat4(&clb.eyePos, eye);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	std::string imagePath = "hello.bmp";

	//Clean up our objects and quit

			default:

	float    farZ = 100.0f;







};



	}

using std::cout; using std::endl;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			break;

	SAFE_RELEASE(m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			{

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReader reader;



	for (size_t s = 0; s < shapes.size(); s++)

};

	scDesc.Windowed = TRUE;

		1,



	SAFE_RELEASE(m_pDepthStencilTexture);



#ifdef _DEBUG

	txDesc.Width = rect.Width();

	float    fov = XMConvertToRadians(20.0f);

	m_pTexture = NULL;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	auto& materials = reader.GetMaterials();

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				break;

		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	};

		pIList[j] = indexList[j];

		&m_pDevice,

	SAFE_RELEASE(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



#include <SDL.h>

	for (size_t s = 0; s < shapes.size(); s++)

		1,





	SDL_DestroyWindow(win);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		m_pImmediateContext->ClearState();

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!error.empty())

int main(int, char**)







	XMStoreFloat4(&clb.ambient, lightAmbient);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	m_VertexCount = vcount;



	/*

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 projection;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			case SDLK_RIGHT:

	/*

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		//User requests quit

			exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{



			{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pTexture = NULL;

	//vector<Vertex> vertex_t;

	ibDesc.MiscFlags = 0;



			// Loop over vertices in the face.

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return 1;

	m_pTexture = NULL;

CD3DTest::~CD3DTest()

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.SampleDesc.Quality = 0;

	UINT strides = sizeof(Vertex);



	XMFLOAT4 pos;               //座標(x,y,z)

{

	float    farZ = 100.0f;

	if (m_pImmediateContext)

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.Width = rect.Width();

	{

	SDL_DestroyTexture(tex);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//Clean up our objects and quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



				break;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

	txDesc.MiscFlags = 0;

	m_pInputLayout = NULL;

	{

		KEY_PRESS_SURFACE_DEFAULT,

		}

		D3D11_SDK_VERSION,



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		exit(1);

void CD3DTest::Release()

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		{

};

	D3D_FEATURE_LEVEL level;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	tinyobj::attrib_t attrib;

			//Select surfaces based on key press

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			{



			{

	if (FAILED(hr))

	}

				vertex.push_back(vertex_tmp);

	}

		cout << "SDL_INIT_ERROR" << endl;

	//ピクセルシェーダー生成

				break;



		SDL_Delay(1000);

			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Quit();

}

		//User requests quit

	//Key press surfaces constants

	m_Viewport.TopLeftY = 0;

{

		&materials,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pRenderTargetView = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

};

	SDL_Event e;





		}

		&materials,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





		}

	return 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		//User presses a key

	m_Viewport.TopLeftY = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

	txDesc.MipLevels = 1;

		//User requests quit

				// access to vertex

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pIndexBuffer);



	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pPixelShader = NULL;

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	scDesc.BufferCount = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	UINT offsets = 0;



		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderPresent(ren);

#include <iostream>

}

 */





struct ConstantLight {

	//Vertex* pVList = new Vertex[vcount];

			//Select surfaces based on key press

		{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{



	SAFE_RELEASE(m_pTexture);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//Vertex* pVList = new Vertex[vcount];

	CRect                rect;

		NULL,



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

#include <iostream>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	// Loop over shapes

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_LEFT:

		delete[] pIList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyRenderer(ren);

	vbDesc.MiscFlags = 0;



			default:

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

struct ConstantLight {

	m_pVertexBuffer = NULL;

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			switch (e.key.keysym.sym)

	//First we need to start up SDL, and make sure it went ok

	SDL_FreeSurface(bmp);



		&level,

		1,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	m_pSampler = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.CPUAccessFlags = 0;

			case SDLK_RIGHT:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

		SDL_RenderPresent(ren);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			exit(1);

	m_pTexture = NULL;

{

	XMFLOAT4         eyePos;   //視点座標

	enum KeyPressSurfaces

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//頂点シェーダー生成

	D3D11_BUFFER_DESC cbDesc;

	HRESULT              hr;

	SAFE_RELEASE(m_pSwapChain);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	float    nearZ = 0.1f;

				break;



				// access to vertex

int SEGMENT = 36;

		pIList[j] = indexList[j];

	//ピクセルシェーダー生成

	}



	return 0;

	//ビューポート設定

	vector<Vertex> vertexlist;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyWindow(win);

	m_IndexCount = 0;

	for (int j = 0; j < icount; j++)

	SDL_DestroyTexture(tex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

		SDL_Delay(1000);

	m_pDepthStencilTexture = NULL;

	tinyobj::ObjReaderConfig reader_config;

	{

		&scDesc,

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		D3D11_SDK_VERSION,

	{

		R"(cube.obj)");



		// Loop over faces(polygon)

	Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Quality = 0;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pVertexBuffer);



	{

		KEY_PRESS_SURFACE_DEFAULT,

}

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pSwapChain->Present(0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		// Loop over faces(polygon)

struct ConstantLight {

}

	m_VertexCount = vcount;

	//vector<Vertex> vertex_t;

		&materials,



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vrData.SysMemSlicePitch = 0;



	SDL_Event e;

	bool ret = tinyobj::LoadObj(

		return hr;



	{

	return;

#ifdef _DEBUG

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pIndexBuffer = NULL;

};

	vbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.OutputWindow = hwnd;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)

		&m_pImmediateContext);

		KEY_PRESS_SURFACE_LEFT,

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ID3D11Texture2D* pBackBuffer;

		}

struct ConstantLight {

	//Clean up our objects and quit

	return hr;



	SDL_Event e;







struct ConstantMaterial {

	XMFLOAT4X4 projection;

	m_Viewport.TopLeftX = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		{

};

		}

			case SDLK_LEFT:

		return hr;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>

		KEY_PRESS_SURFACE_RIGHT,

	bool ret = tinyobj::LoadObj(

			case SDLK_DOWN:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_Viewport.TopLeftY = 0;

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

};

	XMFLOAT4 ambient;           //環境(r,g,b)



	enum KeyPressSurfaces

				break;

	if (FAILED(hr))



	D3D11_BUFFER_DESC vbDesc;





	if (FAILED(hr))

			case SDLK_DOWN:

	scDesc.BufferDesc.Height = rect.Height();



		// Loop over faces(polygon)

#include <SDL.h>

void CD3DTest::Release()

	m_pTexture = NULL;



	{

{

	SAFE_RELEASE(m_pTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_BUFFER_DESC cbDesc;

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	}

		return hr;

		//User requests quit

		&error,

	ibDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>

	SAFE_RELEASE(m_pImmediateContext);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}





{

			for (size_t v = 0; v < fv; v++)

	D3D11_SUBRESOURCE_DATA vrData;

			{

	if (FAILED(hr))

{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		//User requests quit

	if (FAILED(hr))

				// access to vertex

		{

	vrData.pSysMem = &pVList[0];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

HRESULT CD3DTest::Create(HWND hwnd)

	WORD* pIList = new WORD[icount];

};

	D3D11_TEXTURE2D_DESC txDesc;

	{





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

struct ConstantLight {

	SAFE_RELEASE(m_pVertexShader);

	irData.pSysMem = &pIList[0];



	m_pTexture = NULL;

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}



};

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	scDesc.SampleDesc.Quality = 0;

			break;

	// Loop over shapes

	//First we need to start up SDL, and make sure it went ok



	scDesc.SampleDesc.Count = 1;



	enum KeyPressSurfaces

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		pVList[i] = vertexlist[i];



{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))





	tinyobj::ObjReader reader;

		{

	std::string imagePath = "hello.bmp";

};

				vertex.push_back(vertex_tmp);

{

	return 0;



	SAFE_RELEASE(m_pTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	return hr;

		}

	return 0;

	int     vcount = vertexlist.size();

		SDL_RenderPresent(ren);

	D3D11_SAMPLER_DESC smpDesc;

		}

	LoadObj(vertexlist, indexList);

	ConstantLight    pntLight; //点光源

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ConstantMaterial material; //物体の質感

	hr = D3D11CreateDeviceAndSwapChain(NULL,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_IndexCount = icount;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pSampler);

		size_t index_offset = 0;  // インデントのオフセット



			exit(1);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.SysMemSlicePitch = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_DOWN:





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pTextureView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pImmediateContext);

		flags,

		&attrib,

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

				break;

		if (!reader.Error().empty())

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pInputLayout = NULL;

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

		exit(1);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}

		&materials,

	SAFE_RELEASE(m_pVertexShader);

	UINT flags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

			case SDLK_DOWN:

		delete[] pIList;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		pLevels,

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pDepthStencilView = NULL;

	XMFLOAT4X4 view;

	//テクスチャ読み込み

	dsDesc.Format = txDesc.Format;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	{

	ConstantLight    pntLight; //点光源



	/*

	//定数バッファ作成

		size_t index_offset = 0;  // インデントのオフセット

	UINT offsets = 0;

	SAFE_RELEASE(m_pMatrixBuffer);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			// Loop over vertices in the face.

	m_pLightBuffer = NULL;





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)







	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	// Loop over shapes

		SDL_RenderClear(ren);

		&error,

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pSwapChain = NULL;

struct ConstantLightBuffer {



		&scDesc,

	D3D11_SUBRESOURCE_DATA vrData;



	DXGI_SWAP_CHAIN_DESC scDesc;

				indexlist.push_back(idx.vertex_index);

	//Vertex* pVList = new Vertex[vcount];

			index_offset += num_vertices;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		pVList[i] = vertexlist[i];



	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.SampleDesc.Count = 1;

	txDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pDepthStencilView = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}

};

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		R"(cube.obj)");

	for (const auto& shape : shapes)

	int     vcount = vertexlist.size();

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.CPUAccessFlags = 0;



	scDesc.SampleDesc.Quality = 0;

			//Select surfaces based on key press

			case SDLK_UP:





			//Select surfaces based on key press

	Release();

using std::cout; using std::endl;

	bool ret = tinyobj::LoadObj(

		&shapes,

	ibDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit



	}



			{







		//User requests quit

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_BUFFER_DESC cbDesc;

		flags,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	return;

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	auto& attrib = reader.GetAttrib();

	txDesc.SampleDesc.Quality = 0;

	Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::attrib_t attrib;

		&m_pImmediateContext);

	UINT offsets = 0;

	enum KeyPressSurfaces

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string error;



	LoadObj(vertexlist, indexList);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#include <iostream>



	m_Viewport.TopLeftY = 0;

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vector<Vertex> vertexlist;

	XMFLOAT4         ambient;  //環境光(r,g,b)

#ifdef _DEBUG

 * Lesson 1: Hello World!

	return 0;





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

CD3DTest::CD3DTest()

	m_pIndexBuffer = NULL;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_SUBRESOURCE_DATA vrData;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			case SDLK_DOWN:

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	std::vector<tinyobj::shape_t> shapes;

	m_pIndexBuffer = NULL;

		else if (e.type == SDL_KEYDOWN)

	m_pDepthStencilView = NULL;

		{





	float    nearZ = 0.1f;

	}

		SDL_RenderPresent(ren);



	ibDesc.StructureByteStride = 0;



	m_pDepthStencilTexture = NULL;

		//User presses a key

	SAFE_RELEASE(m_pTextureView);



#endif

	while (SDL_PollEvent(&e) != 0)

		&m_pImmediateContext);

		SDL_RenderClear(ren);

	cbDesc.StructureByteStride = 0;

		pLevels,



	SDL_FreeSurface(suf);

	}

	XMFLOAT4X4 projection;

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	ConstantLightBuffer clb;







	D3D11_BUFFER_DESC ibDesc;

	m_pInputLayout = NULL;

	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pVertexShader);



/*

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantMaterial material; //物体の質感

	XMFLOAT4 pos;               //座標(x,y,z)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

		&m_pDevice,

#include <iostream>



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





void CD3DTest::Render()



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		&scDesc,

				break;

	{

	DXGI_SWAP_CHAIN_DESC scDesc;



				WORD index = idx.vertex_index;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	for (int i = 0; i < vcount; i++)

	bool ret = tinyobj::LoadObj(

	auto& attrib = reader.GetAttrib();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pImmediateContext);

				WORD index = idx.vertex_index;

	{

			for (size_t v = 0; v < fv; v++)

	delete[] pVList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vector<WORD> indexList;

CD3DTest::~CD3DTest()

	SDL_FreeSurface(bmp);

	//頂点シェーダー生成

};

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

	XMFLOAT4 specular;          //反射(r,g,b)

		if (!reader.Error().empty())

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;



struct ConstantMaterial {

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#include <SDL.h>



	//インデックスバッファ作成

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.TopLeftY = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



void CD3DTest::Render()

				WORD index = idx.vertex_index;

	for (const auto& shape : shapes)

	m_Viewport.TopLeftY = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.Height = (FLOAT)rect.Height();



		KEY_PRESS_SURFACE_DEFAULT,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.SampleDesc.Count = 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//テクスチャ読み込み

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Quit();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Width = rect.Width();

		}

#include <SDL.h>

	if (FAILED(hr))



	if (FAILED(hr))

		&materials,

	for (int j = 0; j < icount; j++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

CD3DTest::CD3DTest()

		}

	}



				break;

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pTextureView);

	SDL_Event e;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	enum KeyPressSurfaces

	cbDesc.MiscFlags = 0;

			index_offset += fv;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.OutputWindow = hwnd;

		&error,

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;



}
	{

	{

	//頂点レイアウト作成

	{

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderPresent(ren);

	SDL_DestroyTexture(tex);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferDesc.Height = rect.Height();



	{

		// Loop over faces(polygon)

	m_pDepthStencilView = NULL;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	for (int i = 0; i < vcount; i++)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		if (!ret)

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	ID3D11Texture2D* pBackBuffer;

int main(int, char**)

	return 0;

	//First we need to start up SDL, and make sure it went ok

	SDL_Event e;

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&m_pImmediateContext);

				tinyobj::real_t ty =

			{

#endif

	m_pDepthStencilView = NULL;

		&m_pSwapChain,

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

	}*/

	vbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);



				// access to vertex



};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

{

	return 0;



	if (FAILED(hr))



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//vector<Vertex> vertex_t;

		R"(cube.obj)");



	}

	SDL_DestroyWindow(win);

	}

	m_pDepthStencilView = NULL;

	}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Clean up our objects and quit

#include <iostream>

	scDesc.BufferCount = 1;



CD3DTest::~CD3DTest()



	if (FAILED(hr))

		return hr;



}

	//定数バッファ作成



}

	pBackBuffer->Release();

		&scDesc,

	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	irData.pSysMem = &pIList[0];





	{



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

			for (size_t v = 0; v < fv; v++)

	m_VertexCount = 0;

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	tinyobj::attrib_t attrib;

	WORD   icount = indexList.size();

		&m_pDevice,





	if (FAILED(hr))



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_DestroyWindow(win);

}


		return hr;

	//Vertex* pVList = new Vertex[vcount];

	return 0;

	SAFE_RELEASE(m_pVertexBuffer);

			index_offset += num_vertices;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	delete[] pIList;

	Release();

	scDesc.SampleDesc.Count = 1;

	for (int j = 0; j < icount; j++)



	m_pRenderTargetView = NULL;

	}

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		return hr;

		// Loop over faces(polygon)

	//テクスチャ読み込み

		D3D_DRIVER_TYPE_HARDWARE,

	bool ret = tinyobj::LoadObj(

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_Delay(1000);

	ZeroMemory(&txDesc, sizeof(txDesc));

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//ピクセルシェーダー生成

	SDL_DestroyTexture(tex);

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT flags = 0;

		return hr;

	//定数バッファ作成

{

			switch (e.key.keysym.sym)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	DXGI_SWAP_CHAIN_DESC scDesc;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	}

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vbDesc.StructureByteStride = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pPixelShader);

		return 1;

	SAFE_RELEASE(m_pSwapChain);

};

		pVList[i] = vertexlist[i];



	irData.SysMemSlicePitch = 0;

		&attrib,

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D_FEATURE_LEVEL level;

				break;

	SAFE_RELEASE(m_pVertexBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	m_Angle += XMConvertToRadians(1.0f);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}
	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_BUFFER_DESC vbDesc;

	for (int j = 0; j < icount; j++)

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_DEFAULT,

struct ConstantLight {

				indexlist.push_back(idx.vertex_index);

 * Lesson 1: Hello World!



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pSampler);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain->Present(0, 0);



	enum KeyPressSurfaces

struct ConstantMatrixBuffer {

#include <iostream>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ty =



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.TopLeftY = 0;



	m_IndexCount = icount;

		return hr;

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ibDesc.CPUAccessFlags = 0;

int SEGMENT = 36;

			exit(1);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	m_IndexCount = 0;

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//vector<WORD> index_t;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//頂点レイアウト作成

	if (FAILED(hr))

			break;

	m_pVertexBuffer = NULL;

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))



	for (int i = 0; i < 3; i++)





	delete[] pIList;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderCopy(ren, tex, NULL, NULL);

{





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ibDesc.CPUAccessFlags = 0;

	}

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	if (FAILED(hr))

	return;

				tinyobj::real_t tx =

	SDL_Event e;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				// access to vertex

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	/*



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	return;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_UP,

				break;

	//First we need to start up SDL, and make sure it went ok

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	D3D11_BUFFER_DESC vbDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (!reader.Warning().empty())

	if (!error.empty())

	if (FAILED(hr))

	return 0;

{

{

		if (!reader.Error().empty())

}

	tinyobj::ObjReaderConfig reader_config;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		KEY_PRESS_SURFACE_RIGHT,





	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;







	m_IndexCount = 0;

	m_Viewport.MinDepth = 0.0f;



		return hr;



{

struct ConstantLightBuffer {

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pPixelShader);

			case SDLK_RIGHT:



	auto& materials = reader.GetMaterials();

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (int i = 0; i < vcount; i++)

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





		return hr;

		&error,

	txDesc.Height = rect.Height();



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferCount = 1;

	SDL_Quit();

		pIList[j] = indexList[j];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.ArraySize = 1;

struct ConstantMatrixBuffer {

	m_pIndexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);







		if (!reader.Error().empty())

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	txDesc.ArraySize = 1;

	std::vector<tinyobj::shape_t> shapes;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.MiscFlags = 0;

	if (m_pImmediateContext)

		&m_pDevice,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&materials,

	{



	auto& materials = reader.GetMaterials();



	cbDesc.CPUAccessFlags = 0;







	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;

	SDL_Event e;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

		&m_pSwapChain,

 */

	{

	if (FAILED(hr))

		}

	m_pInputLayout = NULL;

	//Key press surfaces constants

	::ZeroMemory(&scDesc, sizeof(scDesc));

		delete[] pIList;

int main(int, char**)

		return hr;

	{

	vbDesc.StructureByteStride = 0;

	return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.SampleDesc.Quality = 0;





	int     vcount = vertexlist.size();

	m_pMatrixBuffer = NULL;

	::GetClientRect(hwnd, &rect);





	//vector<WORD> index_t;

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;



	}

	SDL_FreeSurface(bmp);

	}

			for (size_t v = 0; v < fv; v++)

		SDL_RenderPresent(ren);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_FreeSurface(suf);

	return 0;

		KEY_PRESS_SURFACE_RIGHT,

{

	scDesc.OutputWindow = hwnd;

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pVertexBuffer);



	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.Width = rect.Width();



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	::GetClientRect(hwnd, &rect);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

int main(int, char**)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	m_pSwapChain->Present(0, 0);



		&level,

	}



	}

		SDL_RenderPresent(ren);

	//頂点シェーダー生成

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vector<WORD> indexList;

	scDesc.OutputWindow = hwnd;

		{

	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.BufferDesc.Height = rect.Height();

};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.Width = rect.Width();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

 * Lesson 1: Hello World!







		}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//頂点シェーダー生成

				break;

	pBackBuffer->Release();

				break;

		D3D_DRIVER_TYPE_HARDWARE,



	txDesc.MipLevels = 1;

		else if (e.type == SDL_KEYDOWN)

		{

	while (SDL_PollEvent(&e) != 0)



		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_UP,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				// access to vertex

	if (FAILED(hr))

			//Select surfaces based on key press



	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



				break;

	}

		return hr;

	{

	txDesc.Height = rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ConstantMaterial material; //物体の質感

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	}

	ibDesc.StructureByteStride = 0;

void CD3DTest::Release()

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.Width = rect.Width();

	m_pPixelShader = NULL;

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

/*

	//Clean up our objects and quit

	if (FAILED(hr))

		return hr;

				break;

	if (FAILED(hr))

	}

	D3D11_BUFFER_DESC vbDesc;

	m_pPixelShader = NULL;

	SDL_FreeSurface(suf);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				break;



	cbDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

	tinyobj::attrib_t attrib;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	//定数バッファ作成

	std::vector<tinyobj::shape_t> shapes;

	m_Viewport.Height = (FLOAT)rect.Height();



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

		return 1;



	m_Viewport.TopLeftX = 0;

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_IndexCount = icount;



	ConstantLightBuffer clb;

HRESULT CD3DTest::Create(HWND hwnd)

	LoadObj(vertexlist, indexList);

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	ConstantLightBuffer clb;

	UINT offsets = 0;

#include <SDL.h>

	/*

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pVertexShader);

	txDesc.SampleDesc.Count = 1;

	Vertex* pVList = new Vertex[vcount];

	m_pInputLayout = NULL;



		SDL_RenderPresent(ren);

	m_Viewport.MinDepth = 0.0f;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				// access to vertex



#include <iostream>

		return hr;

	// Loop over shapes



	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		return hr;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	{

	if (FAILED(hr))

				// access to vertex

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	}

		return 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&error,



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			case SDLK_UP:

	dsDesc.Texture2D.MipSlice = 0;

		exit(1);

	m_pImmediateContext = NULL;

CD3DTest::CD3DTest()





	//ビューポート設定

	m_IndexCount = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	Release();

	WORD* pIList = new WORD[icount];

	D3D11_TEXTURE2D_DESC txDesc;

int main(int, char**)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.MiscFlags = 0;

};

	XMFLOAT4X4 world;

		}

	std::vector<tinyobj::shape_t> shapes;

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#ifdef _DEBUG

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_DestroyRenderer(ren);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_FreeSurface(bmp);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;

	m_pInputLayout = NULL;

	//インデックスバッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferDesc.Width = rect.Width();

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pPixelShader);



	SDL_FreeSurface(bmp);

		pIList[j] = indexList[j];

	//Vertex* pVList = new Vertex[vcount];

};

	ID3D11Texture2D* pBackBuffer;



	XMFLOAT4X4 view;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))



				indexlist.push_back(index);

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemPitch = 0;



	for (int i = 0; i < 3; i++)



		&m_pImmediateContext);

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{

	SAFE_RELEASE(m_pVertexShader);

}


	scDesc.Windowed = TRUE;

 * Lesson 1: Hello World!

{

	delete[] pVList;

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pIndexBuffer);

{

	m_pTexture = NULL;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		pVList[i] = vertexlist[i];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	enum KeyPressSurfaces

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				break;

	cbDesc.CPUAccessFlags = 0;



		&m_pSwapChain,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	//Key press surfaces constants

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

void CD3DTest::Render()

	txDesc.Width = rect.Width();

			{

	return hr;

	//First we need to start up SDL, and make sure it went ok



}

		}

	{

	SAFE_RELEASE(m_pRenderTargetView);

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	}

		D3D11_SDK_VERSION,

	vrData.SysMemSlicePitch = 0;

	enum KeyPressSurfaces

	WORD* pIList = new WORD[icount];

			case SDLK_UP:



	SAFE_RELEASE(m_pDevice);



	m_pMatrixBuffer = NULL;

		R"(cube.obj)");

	HRESULT              hr;

		SDL_RenderPresent(ren);

	{

	if (FAILED(hr))

			// Loop over vertices in the face.

	return;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	delete[] pVList;

	delete[] pIList;

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;



	XMFLOAT4X4 view;

void CD3DTest::Release()

	Release();

	SAFE_RELEASE(m_pTexture);



			{

	//頂点バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





			}



			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pVertexShader);

	m_pSampler = NULL;

int main(int, char**)

int SEGMENT = 36;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Quit();

	m_Viewport.MaxDepth = 1.0f;

	//インデックスバッファ作成

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				// access to vertex



	if (m_pImmediateContext)

		flags,





	for (const auto& shape : shapes)



	SAFE_RELEASE(m_pDevice);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				WORD index = idx.vertex_index;



	m_pRenderTargetView = NULL;



			}

		{



	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

		SDL_RenderClear(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			}

	m_Viewport.TopLeftY = 0;

};

{

void CD3DTest::Render()

	m_Viewport.MaxDepth = 1.0f;

CD3DTest::~CD3DTest()

	{

	cbDesc.MiscFlags = 0;

		&shapes,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	SAFE_RELEASE(m_pTexture);

	m_pDepthStencilTexture = NULL;

		delete[] pIList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			default:

	txDesc.SampleDesc.Count = 1;





		size_t index_offset = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&shapes,

};

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				break;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pSampler);

	m_VertexCount = 0;

struct ConstantLight {

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	CRect                rect;



	XMFLOAT4 specular;          //反射(r,g,b)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

			break;

	cbDesc.MiscFlags = 0;



	txDesc.Height = rect.Height();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))



	SAFE_RELEASE(m_pLightBuffer);

	m_Viewport.TopLeftX = 0;

	m_IndexCount = icount;

		{

			case SDLK_DOWN:

				vertex.push_back(vertex_tmp);

	Vertex* pVList = new Vertex[vcount];

		return hr;

	}

	enum KeyPressSurfaces

	cbDesc.StructureByteStride = 0;

using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	}

				// access to vertex

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	D3D11_TEXTURE2D_DESC txDesc;

		return hr;



				// access to vertex

#include <SDL.h>



	vbDesc.StructureByteStride = 0;

		return hr;

	SAFE_RELEASE(m_pTexture);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&level,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vbDesc.MiscFlags = 0;

struct ConstantLightBuffer {

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

		pLevels,

	if (FAILED(hr))



}

	m_pSampler = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	for (const auto& shape : shapes)

	//テクスチャ読み込み

	//Clean up our objects and quit

}

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{



			// Loop over vertices in the face.

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



};

				break;

		return hr;

		&m_pSwapChain,

		}

	SAFE_RELEASE(m_pDevice);

	scDesc.BufferCount = 1;

	txDesc.Height = rect.Height();

	{



	SDL_DestroyWindow(win);

	cbDesc.MiscFlags = 0;

			}

	SDL_Quit();

	cbDesc.CPUAccessFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&materials,

	/*

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vector<Vertex> vertexlist;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4 attenuate;         //減衰(a,b,c)





};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vbDesc.MiscFlags = 0;



		return hr;

	//定数バッファ作成

	for (int i = 0; i < 3; i++)

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Release();



};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//頂点レイアウト作成

		SDL_Delay(1000);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}

		return hr;

		delete[] pVList;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	/*

			case SDLK_LEFT:

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				indexlist.push_back(index);

		return hr;



	vector<Vertex> vertexlist;

		if (e.type == SDL_QUIT)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext = NULL;

	XMFLOAT4X4 projection;

				indexlist.push_back(index);



	irData.SysMemPitch = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pPixelShader = NULL;

	}*/

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				// access to vertex

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

	delete[] pVList;



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	float    farZ = 100.0f;



	D3D11_SUBRESOURCE_DATA irData;

void CD3DTest::Render()

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4         eyePos;   //視点座標

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

	auto& materials = reader.GetMaterials();

/*

	}

	//インデックスバッファ作成

	/*

}

};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ConstantLightBuffer clb;

		&m_pDevice,

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			}



	cbDesc.MiscFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vrData.SysMemPitch = 0;

				break;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{



CD3DTest::CD3DTest()

	return 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))





			}

	XMFLOAT4X4 projection;

	for (size_t s = 0; s < shapes.size(); s++)

	D3D11_SUBRESOURCE_DATA vrData;

			// Loop over vertices in the face.

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pDevice = NULL;



	vector<WORD> indexList;

		&attrib,

	float    farZ = 100.0f;

		//User presses a key

	vrData.SysMemSlicePitch = 0;



				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_DestroyRenderer(ren);

	SDL_FreeSurface(suf);

	cbDesc.MiscFlags = 0;

	auto& materials = reader.GetMaterials();

}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

int main(int, char**)



	m_IndexCount = icount;

			case SDLK_UP:

	SDL_Quit();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferCount = 1;

	//ビューポート設定

	return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	WORD* pIList = new WORD[icount];

using std::cout; using std::endl;

	SAFE_RELEASE(m_pDevice);

	{

	if (FAILED(hr))

	if (FAILED(hr))

		{

 * Lesson 1: Hello World!

struct ConstantLightBuffer {

	vbDesc.StructureByteStride = 0;

	dsDesc.Format = txDesc.Format;

		&m_pImmediateContext);

	m_Viewport.MaxDepth = 1.0f;

	};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;



		&scDesc,

};

	pBackBuffer->Release();



	WORD* pIList = new WORD[icount];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Key press surfaces constants

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit





	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.ambient, lightAmbient);



		SDL_RenderClear(ren);



	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_SUBRESOURCE_DATA vrData;

	}



		delete[] pVList;

		cout << "SDL_INIT_ERROR" << endl;

	ConstantMatrixBuffer cmb;

		R"(cube.obj)");

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			{

	XMFLOAT4 ambient;           //環境(r,g,b)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	//頂点レイアウト作成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.SampleDesc.Count = 1;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;







/*

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



/*

	for (size_t s = 0; s < shapes.size(); s++)

	D3D11_SAMPLER_DESC smpDesc;

	};



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

	scDesc.BufferDesc.Width = rect.Width();

	}

			case SDLK_UP:

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vrData.SysMemPitch = 0;

	Vertex* pVList = new Vertex[vcount];

		NULL,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

#endif

	ibDesc.StructureByteStride = 0;

	}

	m_Viewport.TopLeftX = 0;



};

	return hr;

		&m_pImmediateContext);

		//User requests quit

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))



	D3D11_SUBRESOURCE_DATA vrData;

		return 1;

	if (FAILED(hr))

	m_pSampler = NULL;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	scDesc.Windowed = TRUE;

				tinyobj::real_t ty =

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vector<Vertex> vertexlist;

		1,





	//First we need to start up SDL, and make sure it went ok

	cbDesc.StructureByteStride = 0;

	tinyobj::ObjReader reader;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



			case SDLK_LEFT:

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderClear(ren);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	}*/

	m_pImmediateContext = NULL;

{

		&error,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	ibDesc.StructureByteStride = 0;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));



	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{



	D3D11_BUFFER_DESC cbDesc;

	m_pDepthStencilTexture = NULL;

	}

	if (FAILED(hr))



	m_Viewport.Width = (FLOAT)rect.Width();

	{



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))





		SDL_RenderPresent(ren);

		return hr;

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		return hr;

	std::string error;

	//Clean up our objects and quit

	SAFE_RELEASE(m_pSwapChain);


