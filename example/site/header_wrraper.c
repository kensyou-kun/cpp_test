	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		if (e.type == SDL_QUIT)

		//User requests quit

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	return hr;



		&materials,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				break;

	int     vcount = vertexlist.size();

		{

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	return hr;

}

				vertex.push_back(vertex_tmp);

};



	txDesc.Height = rect.Height();



	SDL_DestroyWindow(win);

	{

	vector<WORD> indexList;

				vertex.push_back(vertex_tmp);

	// Loop over shapes

};

#include <SDL.h>

	ConstantLightBuffer clb;

	ID3D11Texture2D* pBackBuffer;



		{

	UINT flags = 0;

		return hr;

	ConstantLight    pntLight; //点光源

}
			}

	txDesc.SampleDesc.Count = 1;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

	m_pImmediateContext = NULL;

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		size_t index_offset = 0;  // インデントのオフセット





	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pDevice);

			// Loop over vertices in the face.

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pVertexShader = NULL;

	m_IndexCount = icount;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pTexture = NULL;

		return hr;

	m_Angle += XMConvertToRadians(1.0f);



		return hr;

	txDesc.Height = rect.Height();

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.eyePos, eye);

		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



using std::cout; using std::endl;

		D3D11_SDK_VERSION,

	XMFLOAT4 ambient;           //環境(r,g,b)

	std::vector<tinyobj::shape_t> shapes;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	::ZeroMemory(&scDesc, sizeof(scDesc));

		flags,

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

		D3D_DRIVER_TYPE_HARDWARE,



	m_pTextureView = NULL;

	{

	if (FAILED(hr))



{





};



HRESULT CD3DTest::Create(HWND hwnd)

	m_pMatrixBuffer = NULL;

			default:

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

		return hr;

			exit(1);



			case SDLK_LEFT:

	//頂点シェーダー生成

	D3D11_SAMPLER_DESC smpDesc;

		}

	XMFLOAT4X4 projection;

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

{

}



	if (!reader.ParseFromFile(inputfile, reader_config))

	//頂点シェーダー生成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pImmediateContext);

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	std::string inputfile = "test.obj";

	auto& shapes = reader.GetShapes();

	float    fov = XMConvertToRadians(20.0f);

	return;

	UINT offsets = 0;



	auto& attrib = reader.GetAttrib();

struct ConstantLight {

	auto& materials = reader.GetMaterials();

			break;

#ifdef _DEBUG

		KEY_PRESS_SURFACE_LEFT,

	m_pTexture = NULL;

		return hr;

}

	m_pDepthStencilTexture = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		KEY_PRESS_SURFACE_RIGHT,

	float    farZ = 100.0f;

int SEGMENT = 36;

		return hr;



			index_offset += num_vertices;

	m_Viewport.TopLeftX = 0;



		else if (e.type == SDL_KEYDOWN)

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	//テクスチャ読み込み



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//First we need to start up SDL, and make sure it went ok

{

	SAFE_RELEASE(m_pSampler);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	{

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_VertexCount = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//ビューポート設定



		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);





{

	//テクスチャ読み込み



			}

	WORD   icount = indexList.size();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	int     vcount = vertexlist.size();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pTexture = NULL;

		&error,

	m_pSampler = NULL;

struct ConstantMaterial {

}

		return hr;

	SAFE_RELEASE(m_pTexture);

	m_Viewport.Width = (FLOAT)rect.Width();

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_UP,

};

			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;



	//vector<Vertex> vertex_t;



		return hr;

		SDL_RenderPresent(ren);

		SDL_RenderClear(ren);



	scDesc.SampleDesc.Count = 1;

	if (!reader.Warning().empty())

				break;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSwapChain = NULL;

	txDesc.ArraySize = 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			exit(1);



 * Lesson 1: Hello World!

int main(int, char**)



	SDL_DestroyWindow(win);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::vector<tinyobj::shape_t> shapes;

				break;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDevice);







	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	irData.SysMemSlicePitch = 0;





				tinyobj::real_t tx =

	ConstantLight    pntLight; //点光源

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDevice);



	::GetClientRect(hwnd, &rect);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

int main(int, char**)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 ambient;           //環境(r,g,b)





	delete[] pIList;

	txDesc.CPUAccessFlags = 0;



}

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}*/

	//vector<WORD> index_t;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pTexture);

	while (SDL_PollEvent(&e) != 0)

CD3DTest::~CD3DTest()

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	float    fov = XMConvertToRadians(20.0f);

	for (int i = 0; i < 3; i++)





		KEY_PRESS_SURFACE_DOWN,

	scDesc.OutputWindow = hwnd;

{

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pVertexShader);

	WORD* pIList = new WORD[icount];

		flags,

		if (!reader.Error().empty())









	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





				break;



	//頂点バッファ作成

	SDL_Quit();

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyRenderer(ren);



		1,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	UINT offsets = 0;

		{

				WORD index = idx.vertex_index;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;



}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#include <iostream>

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				WORD index = idx.vertex_index;

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include <SDL.h>

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.SampleDesc.Quality = 0;

			default:

		// Loop over faces(polygon)

	for (int i = 0; i < 3; i++)

	vbDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLight    pntLight; //点光源

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	{

{

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

	}

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_Viewport.MaxDepth = 1.0f;

		R"(cube.obj)");

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vrData.SysMemPitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			break;

#define TINYOBJLOADER_IMPLEMENTATION

			exit(1);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 world;

	m_pSwapChain = NULL;

	ID3D11Texture2D* pBackBuffer;





	::ZeroMemory(&scDesc, sizeof(scDesc));



			//Select surfaces based on key press

#include <iostream>

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.StructureByteStride = 0;

				// access to vertex

	txDesc.SampleDesc.Quality = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	float    nearZ = 0.1f;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	// Loop over shapes





	irData.SysMemPitch = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

}


			exit(1);

				break;



#include <iostream>



		KEY_PRESS_SURFACE_TOTAL

int main(int, char**)



	D3D11_BUFFER_DESC ibDesc;

		}

		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pLightBuffer);

		m_pImmediateContext->ClearState();

	m_VertexCount = vcount;

				tinyobj::real_t ty =



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	std::string imagePath = "hello.bmp";

 */

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4X4 projection;

	}

			case SDLK_RIGHT:

	}

				// access to vertex







		&attrib,



	}

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	}

				indexlist.push_back(idx.vertex_index);

		&attrib,

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}
	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pVertexBuffer);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	Release();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Key press surfaces constants

	{

CD3DTest::CD3DTest()

	m_pInputLayout = NULL;

struct ConstantMaterial {

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//Key press surfaces constants

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	m_pImmediateContext = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	ConstantMaterial material; //物体の質感

	m_pLightBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

		&shapes,



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}*/

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyTexture(tex);





	if (FAILED(hr))

using std::cout; using std::endl;

}
	cbDesc.CPUAccessFlags = 0;

		1,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.SampleDesc.Count = 1;

	SDL_Event e;



	m_Viewport.MaxDepth = 1.0f;

	D3D11_SUBRESOURCE_DATA vrData;



	vector<Vertex> vertexlist;



				break;

		KEY_PRESS_SURFACE_DEFAULT,

	int     vcount = vertexlist.size();



				vertex.push_back(vertex_tmp);

	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	if (m_pImmediateContext)

			exit(1);

			// Loop over vertices in the face.

	m_pVertexBuffer = NULL;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT strides = sizeof(Vertex);

			switch (e.key.keysym.sym)

	m_pDepthStencilView = NULL;



	txDesc.MiscFlags = 0;

				break;

	//ビューポート設定

	txDesc.SampleDesc.Count = 1;

struct ConstantMaterial {

			// Loop over vertices in the face.

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Quit();

	SDL_DestroyRenderer(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA irData;

	while (SDL_PollEvent(&e) != 0)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC ibDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	if (FAILED(hr))



	{

		KEY_PRESS_SURFACE_DOWN,

	ID3D11Texture2D* pBackBuffer;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pLightBuffer = NULL;

void CD3DTest::Render()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SAFE_RELEASE(m_pImmediateContext);

		&shapes,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 specular;          //反射(r,g,b)

	scDesc.BufferDesc.Height = rect.Height();



	XMStoreFloat4(&clb.eyePos, eye);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pSampler);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC ibDesc;

	if (!reader.ParseFromFile(inputfile, reader_config))

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_DestroyRenderer(ren);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



	m_Viewport.MaxDepth = 1.0f;



	irData.pSysMem = &pIList[0];

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftX = 0;

			index_offset += fv;

	bool ret = tinyobj::LoadObj(

	m_pDepthStencilTexture = NULL;

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	delete[] pIList;

	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pVertexBuffer = NULL;

	}*/

	SDL_DestroyWindow(win);



	UINT offsets = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

		}

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		cout << "SDL_INIT_ERROR" << endl;

			switch (e.key.keysym.sym)

			for (size_t v = 0; v < num_vertices; v++)



	for (int i = 0; i < vcount; i++)

	UINT flags = 0;

		exit(1);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

	DXGI_SWAP_CHAIN_DESC scDesc;



		SDL_RenderClear(ren);

		SDL_Delay(1000);

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	reader_config.mtl_search_path = "./"; // Path to material files

	m_Viewport.TopLeftX = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			break;

				// access to vertex

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

		delete[] pVList;

		&attrib,

	}



	for (size_t s = 0; s < shapes.size(); s++)

	Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	scDesc.Windowed = TRUE;

	//深度ステンシルバッファ作成

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.MiscFlags = 0;

	txDesc.ArraySize = 1;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pSwapChain);

				break;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	reader_config.mtl_search_path = "./"; // Path to material files

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.MiscFlags = 0;

		size_t index_offset = 0;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyTexture(tex);

		R"(cube.obj)");

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		}

	scDesc.OutputWindow = hwnd;

	txDesc.Width = rect.Width();



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	delete[] pIList;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Quit();

			//Select surfaces based on key press

	irData.pSysMem = &pIList[0];

	UINT offsets = 0;

	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_DOWN,

{

		return hr;



		{

	//Create Index

	std::vector<tinyobj::material_t> materials;

	//First we need to start up SDL, and make sure it went ok

			index_offset += fv;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_RIGHT:

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	delete[] pIList;

			exit(1);





			// Loop over vertices in the face.

				break;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			break;

	}

	auto& materials = reader.GetMaterials();



	}

	}







}
CD3DTest::CD3DTest()

	ConstantLightBuffer clb;



		SDL_Delay(1000);

	Release();

	txDesc.SampleDesc.Count = 1;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



{

				WORD index = idx.vertex_index;

		}

	{

	//頂点バッファ作成

	return;

		pVList[i] = vertexlist[i];

	}

	SDL_DestroyTexture(tex);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	pBackBuffer->Release();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		cout << "SDL_INIT_ERROR" << endl;

		{





		}

	CRect                rect;

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	dsDesc.Texture2D.MipSlice = 0;

	std::string imagePath = "hello.bmp";

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		flags,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	tinyobj::ObjReader reader;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		{

	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

		&error,

				WORD index = idx.vertex_index;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	delete[] pVList;

	std::string imagePath = "hello.bmp";

	}*/



	}

		else if (e.type == SDL_KEYDOWN)

	WORD   icount = indexList.size();



		&shapes,

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//定数バッファ作成



	}

};

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	/*

			break;

};

#include "DirectXManager.h"

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	XMFLOAT4X4 projection;

		KEY_PRESS_SURFACE_RIGHT,

			case SDLK_LEFT:

struct ConstantMatrixBuffer {

	if (FAILED(hr))



	m_Viewport.TopLeftY = 0;

	UINT offsets = 0;

		D3D11_SDK_VERSION,



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_IndexCount = icount;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pDepthStencilView = NULL;

	{

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

	vrData.pSysMem = &pVList[0];

				vertex.push_back(vertex_tmp);

	return 0;

	{



				break;

	float    fov = XMConvertToRadians(20.0f);

	//深度ステンシルバッファ作成

}

	for (int i = 0; i < vcount; i++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

/*

	if (!reader.Warning().empty())

		SDL_RenderPresent(ren);

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (m_pImmediateContext)



		D3D11_SDK_VERSION,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_UP,

	}

		SDL_RenderPresent(ren);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t ty =

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))



		flags,

	{

			case SDLK_DOWN:

}
	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	int     vcount = vertexlist.size();



	//頂点バッファ作成

	D3D11_SUBRESOURCE_DATA vrData;

			break;

	float    farZ = 100.0f;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//頂点バッファ作成

	m_VertexCount = vcount;

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				break;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;



		&scDesc,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_UP,

	D3D_FEATURE_LEVEL level;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(index);

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& materials = reader.GetMaterials();

			case SDLK_UP:

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		m_pImmediateContext->ClearState();

	vector<Vertex> vertexlist;

	auto& shapes = reader.GetShapes();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_Viewport.TopLeftX = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{



	m_IndexCount = icount;

	WORD* pIList = new WORD[icount];

	{

	scDesc.OutputWindow = hwnd;



			//Select surfaces based on key press

	m_pVertexBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftY = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLight    pntLight; //点光源

	//テクスチャ読み込み

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	SDL_DestroyWindow(win);



	}

	Release();





	//ピクセルシェーダー生成

CD3DTest::CD3DTest()

		1,

	//First we need to start up SDL, and make sure it went ok



	int     vcount = vertexlist.size();

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		if (!reader.Error().empty())

	cbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

int main(int, char**)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pTextureView = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_Delay(1000);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		KEY_PRESS_SURFACE_DOWN,

		if (!reader.Error().empty())

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				break;



		return 1;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

}



	//Clean up our objects and quit





#define TINYOBJLOADER_IMPLEMENTATION

}

	//ピクセルシェーダー生成

#endif

	m_Angle += XMConvertToRadians(1.0f);

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pMatrixBuffer = NULL;

	return hr;

			// Loop over vertices in the face.

	{

	vrData.pSysMem = &pVList[0];



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



}

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	//頂点バッファ作成

	return 0;

		if (e.type == SDL_QUIT)

	WORD* pIList = new WORD[icount];

		pVList[i] = vertexlist[i];

		size_t index_offset = 0;  // インデントのオフセット



{



	m_pMatrixBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ConstantLight    pntLight; //点光源

	std::string imagePath = "hello.bmp";

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferDesc.Width = rect.Width();

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	tinyobj::ObjReaderConfig reader_config;

	txDesc.ArraySize = 1;

	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{



	//Key press surfaces constants

	UINT offsets = 0;

	D3D11_SAMPLER_DESC smpDesc;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pSampler);

			{

	}

				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		pLevels,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}



	SAFE_RELEASE(m_pImmediateContext);

		return hr;

			//Select surfaces based on key press

};

		SDL_RenderPresent(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;



};

	/*

		return hr;

		&attrib,

	std::string inputfile = "test.obj";

		return hr;

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

{

		KEY_PRESS_SURFACE_DOWN,

{

			case SDLK_RIGHT:





	for (int i = 0; i < 3; i++)

	}

{

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Quit();

	UINT flags = 0;

/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	float    nearZ = 0.1f;



	}

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

	{

	//ビューポート設定





	m_pDepthStencilView = NULL;

	scDesc.SampleDesc.Quality = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	if (FAILED(hr))

	for (const auto& shape : shapes)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Clean up our objects and quit

	::ZeroMemory(&scDesc, sizeof(scDesc));



		size_t index_offset = 0;

		SDL_RenderPresent(ren);

	LoadObj(vertexlist, indexList);

{

	vrData.SysMemPitch = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&error,

}



	cbDesc.CPUAccessFlags = 0;

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			switch (e.key.keysym.sym)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.StructureByteStride = 0;

	return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4         eyePos;   //視点座標

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





			}



	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferDesc.Width = rect.Width();

				vertex.push_back(vertex_tmp);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	bool ret = tinyobj::LoadObj(

}




	m_Angle += XMConvertToRadians(1.0f);

				break;

			case SDLK_UP:



	m_Viewport.MaxDepth = 1.0f;



			case SDLK_LEFT:

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.BufferDesc.Height = rect.Height();

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

CD3DTest::CD3DTest()

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_UP,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT offsets = 0;

		pVList[i] = vertexlist[i];

#define TINYOBJLOADER_IMPLEMENTATION



	UINT strides = sizeof(Vertex);

	WORD* pIList = new WORD[icount];

	D3D_FEATURE_LEVEL level;

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

		if (!reader.Error().empty())



}
	txDesc.MiscFlags = 0;

	float    nearZ = 0.1f;



#ifdef _DEBUG

	{

	m_pImmediateContext = NULL;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{







	//Key press surfaces constants

				vertex.push_back(vertex_tmp);



	{

	m_pPixelShader = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

int SEGMENT = 36;

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::string imagePath = "hello.bmp";

	{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		if (e.type == SDL_QUIT)

	txDesc.SampleDesc.Quality = 0;

#ifdef _DEBUG

	Release();

HRESULT CD3DTest::Create(HWND hwnd)



	cbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferCount = 1;



{

	::GetClientRect(hwnd, &rect);

	//頂点シェーダー生成

		SDL_RenderPresent(ren);

};



		return 1;

		pLevels,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		{

		delete[] pVList;

{

HRESULT CD3DTest::Create(HWND hwnd)

	delete[] pVList;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		return hr;



	scDesc.OutputWindow = hwnd;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.MiscFlags = 0;

	{

				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.MiscFlags = 0;



};

	D3D11_BUFFER_DESC vbDesc;

	tinyobj::attrib_t attrib;



			//Select surfaces based on key press



	auto& materials = reader.GetMaterials();



		return hr;

	XMFLOAT4         eyePos;   //視点座標

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_IndexCount = icount;

	XMFLOAT4X4 view;

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

			}





	vrData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	std::string inputfile = "test.obj";



	SDL_Quit();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				break;

	return hr;

	UINT offsets = 0;

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		delete[] pVList;

		D3D11_SDK_VERSION,





};

 * Lesson 1: Hello World!





#include <SDL.h>

#include <iostream>

	SDL_FreeSurface(suf);

	{

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			case SDLK_LEFT:

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	XMFLOAT4X4 view;

	txDesc.ArraySize = 1;





		delete[] pIList;

	{

				WORD index = idx.vertex_index;

	//頂点レイアウト作成

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;



				break;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			switch (e.key.keysym.sym)

	SDL_FreeSurface(bmp);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	};

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;



		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		SDL_RenderPresent(ren);

		return hr;

	{

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}*/

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pDevice);

		}

	D3D11_BUFFER_DESC vbDesc;



	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Width = rect.Width();

	enum KeyPressSurfaces

	float    fov = XMConvertToRadians(20.0f);

		SDL_Delay(1000);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4X4 view;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

	// Loop over shapes

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_Viewport.MaxDepth = 1.0f;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pVertexShader = NULL;

	ibDesc.MiscFlags = 0;

	txDesc.Height = rect.Height();

	//頂点バッファ作成



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

			exit(1);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilView = NULL;

	m_pLightBuffer = NULL;

	irData.SysMemPitch = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		m_pImmediateContext->ClearState();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	tinyobj::attrib_t attrib;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	//First we need to start up SDL, and make sure it went ok

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点レイアウト作成



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

		SDL_RenderClear(ren);

				WORD index = idx.vertex_index;

	}

		R"(cube.obj)");



struct ConstantLight {

	//Create Index





	if (FAILED(hr))



	};



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			case SDLK_UP:

	if (FAILED(hr))

		1,



		return hr;

				// access to vertex

{

	//Create Index

		KEY_PRESS_SURFACE_RIGHT,

	bool ret = tinyobj::LoadObj(

	enum KeyPressSurfaces

	tinyobj::ObjReaderConfig reader_config;

	Release();

	XMFLOAT4 pos;               //座標(x,y,z)

				// access to vertex

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	CRect                rect;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;

	dsDesc.Format = txDesc.Format;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		NULL,



				tinyobj::real_t tx =







				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



			case SDLK_DOWN:

				tinyobj::real_t tx =



	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&m_pImmediateContext);

	SAFE_RELEASE(m_pInputLayout);

	m_Viewport.TopLeftX = 0;

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.OutputWindow = hwnd;

	m_pDevice = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		SDL_RenderPresent(ren);

{



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//vector<Vertex> vertex_t;

				indexlist.push_back(index);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//頂点レイアウト作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ConstantMaterial material; //物体の質感

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

			exit(1);

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pDevice = NULL;

	m_Viewport.MaxDepth = 1.0f;



	//ピクセルシェーダー生成

	{

	D3D11_SUBRESOURCE_DATA vrData;

		{



			}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	pBackBuffer->Release();



}

	m_pVertexShader = NULL;

		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.Width = rect.Width();

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{

	txDesc.MipLevels = 1;



	m_Angle += XMConvertToRadians(1.0f);

	}

	pBackBuffer->Release();



			case SDLK_DOWN:

	delete[] pVList;

			index_offset += fv;

		&shapes,

	return 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

 */

#include <iostream>



	XMFLOAT4 pos;               //座標(x,y,z)





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.Texture2D.MipSlice = 0;

	//頂点レイアウト作成

	return hr;



	txDesc.MipLevels = 1;

};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//Vertex* pVList = new Vertex[vcount];

	//定数バッファ作成

		SDL_Delay(1000);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		pIList[j] = indexList[j];



	//ピクセルシェーダー生成



	//定数バッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyWindow(win);

	}

	delete[] pVList;



{

	txDesc.MipLevels = 1;

	m_pSampler = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//頂点レイアウト作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

int SEGMENT = 36;

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	SDL_DestroyWindow(win);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pSwapChain);

		D3D_DRIVER_TYPE_HARDWARE,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}
		if (!reader.Error().empty())

	{

			case SDLK_UP:

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	delete[] pIList;

CD3DTest::~CD3DTest()

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_TOTAL





	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点シェーダー生成

	m_IndexCount = icount;

	std::string inputfile = "test.obj";

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

	}*/

	if (FAILED(hr))

{

	tinyobj::ObjReader reader;



	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	}



		&m_pDevice,

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pTextureView);



	txDesc.MipLevels = 1;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	dsDesc.Format = txDesc.Format;

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_IndexCount = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	for (int j = 0; j < icount; j++)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

	vrData.SysMemSlicePitch = 0;

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_DOWN,

	SDL_DestroyRenderer(ren);



{

	SDL_FreeSurface(suf);

	D3D_FEATURE_LEVEL level;

	cbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

	}

		return hr;





	m_pSwapChain->Present(0, 0);

	ConstantLightBuffer clb;

	bool ret = tinyobj::LoadObj(

	for (int j = 0; j < icount; j++)

		KEY_PRESS_SURFACE_DEFAULT,

	m_Angle += XMConvertToRadians(1.0f);

int main(int, char**)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	bool ret = tinyobj::LoadObj(

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	return hr;

	cbDesc.CPUAccessFlags = 0;

	SDL_Quit();

}

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pDepthStencilView);



	D3D_FEATURE_LEVEL level;

		KEY_PRESS_SURFACE_TOTAL

		return hr;

		return hr;

	// Loop over shapes

	UINT flags = 0;

	m_VertexCount = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_Delay(1000);

	auto& shapes = reader.GetShapes();

		&scDesc,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	std::vector<tinyobj::shape_t> shapes;

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pTexture);

		//User presses a key

	}

	//ビューポート設定

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		{

	UINT offsets = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{



	SAFE_RELEASE(m_pDevice);

	vbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b)



	txDesc.MipLevels = 1;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	m_VertexCount = vcount;

		NULL,



	//頂点バッファ作成

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pImmediateContext);

	if (!reader.ParseFromFile(inputfile, reader_config))

 */

	vector<WORD> indexList;

	bool ret = tinyobj::LoadObj(

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDevice);

	scDesc.SampleDesc.Quality = 0;

CD3DTest::CD3DTest()

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Quit();

	if (FAILED(hr))

		pLevels,

		&m_pImmediateContext);





	auto& materials = reader.GetMaterials();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	scDesc.OutputWindow = hwnd;

	for (const auto& shape : shapes)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext = NULL;



struct ConstantMaterial {

	UINT strides = sizeof(Vertex);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	for (const auto& shape : shapes)

{











	//vector<Vertex> vertex_t;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	DXGI_SWAP_CHAIN_DESC scDesc;

	//Vertex* pVList = new Vertex[vcount];

		exit(1);

	UINT flags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

		return hr;

		D3D11_SDK_VERSION,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

		}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	SDL_DestroyWindow(win);

}

	SDL_Quit();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				WORD index = idx.vertex_index;

	tinyobj::ObjReaderConfig reader_config;

		return 1;

	m_pSwapChain->Present(0, 0);

struct ConstantMaterial {

	for (int i = 0; i < 3; i++)

}

#include <SDL.h>

	ID3D11Texture2D* pBackBuffer;



	cbDesc.MiscFlags = 0;

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	CRect                rect;



	m_pDepthStencilTexture = NULL;

		pLevels,

	//頂点シェーダー生成



		//User requests quit



	m_pDepthStencilView = NULL;

	Release();



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);





	cbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

struct ConstantLight {

	if (FAILED(hr))

		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		size_t index_offset = 0;  // インデントのオフセット

	ID3D11Texture2D* pBackBuffer;



}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	XMFLOAT4X4 world;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::vector<tinyobj::shape_t> shapes;



	txDesc.MiscFlags = 0;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	SDL_Quit();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		pVList[i] = vertexlist[i];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	UINT offsets = 0;

	D3D11_BUFFER_DESC vbDesc;



		size_t index_offset = 0;

	//定数バッファ作成

	SAFE_RELEASE(m_pMatrixBuffer);

	//Clean up our objects and quit

	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_Viewport.TopLeftX = 0;

	m_pIndexBuffer = NULL;



	float    fov = XMConvertToRadians(20.0f);

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//Vertex* pVList = new Vertex[vcount];

		flags,

	//インデックスバッファ作成

	UINT flags = 0;

		SDL_Delay(1000);

			exit(1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

CD3DTest::CD3DTest()

		if (!ret)

	SAFE_RELEASE(m_pVertexShader);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

#endif

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

		return hr;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		SDL_RenderPresent(ren);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		delete[] pIList;



	scDesc.BufferCount = 1;

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	Vertex* pVList = new Vertex[vcount];

		&m_pSwapChain,

	{

	delete[] pIList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>



	ibDesc.CPUAccessFlags = 0;

	}*/

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

			for (size_t v = 0; v < fv; v++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

			{

		delete[] pIList;

		else if (e.type == SDL_KEYDOWN)

		return hr;

	m_Viewport.TopLeftY = 0;

	tinyobj::attrib_t attrib;

	LoadObj(vertexlist, indexList);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{



			index_offset += fv;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

};

			case SDLK_LEFT:

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_IndexCount = icount;


