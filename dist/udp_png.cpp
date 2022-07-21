

	m_pIndexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	std::vector<tinyobj::shape_t> shapes;

	for (int i = 0; i < vcount; i++)



	cbDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t tx =

};

	float    fov = XMConvertToRadians(20.0f);

				break;

	//深度ステンシルバッファ作成

	m_pRenderTargetView = NULL;

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

};



	{



	return 0;

		1,

	SAFE_RELEASE(m_pMatrixBuffer);

{

#endif

CD3DTest::~CD3DTest()

	for (int i = 0; i < 3; i++)

	SDL_Quit();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA irData;





int main(int, char**)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

using std::cout; using std::endl;

	}



	XMFLOAT4X4 world;

	XMFLOAT4 pos;               //座標(x,y,z)

}

	//頂点バッファ作成

	ibDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

		}

{

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

{

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;



	Release();

	XMFLOAT4X4 view;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	if (FAILED(hr))

	scDesc.BufferCount = 1;

		{



		return hr;

	XMFLOAT4X4 projection;

	// Loop over shapes

#include <SDL.h>



		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//vector<WORD> index_t;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pDevice);

	return 0;

	return 0;

	SDL_DestroyTexture(tex);

	vrData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.Warning().empty())



	//vector<Vertex> vertex_t;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	return 0;



		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		// Loop over faces(polygon)

	SDL_Quit();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		D3D_DRIVER_TYPE_HARDWARE,

			case SDLK_UP:

	{

	for (int j = 0; j < icount; j++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pVertexShader);



	int     vcount = vertexlist.size();

	SDL_DestroyTexture(tex);

	dsDesc.Texture2D.MipSlice = 0;



			}

		KEY_PRESS_SURFACE_TOTAL

	m_pDepthStencilView = NULL;



		KEY_PRESS_SURFACE_DOWN,



	//First we need to start up SDL, and make sure it went ok

	};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#define TINYOBJLOADER_IMPLEMENTATION



				vertex.push_back(vertex_tmp);

	}





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

	XMFLOAT4         eyePos;   //視点座標

	SDL_FreeSurface(suf);





		}

	for (int i = 0; i < vcount; i++)

	Release();



		return hr;

	{

	//頂点バッファ作成



 */

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成



	scDesc.BufferDesc.Width = rect.Width();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 ambient;           //環境(r,g,b)

};

	m_IndexCount = icount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;







	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ZeroMemory(&txDesc, sizeof(txDesc));



}

	m_IndexCount = 0;



	scDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_UP,

		return hr;

}
	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		&materials,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{



	//Vertex* pVList = new Vertex[vcount];

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty =

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::ObjReaderConfig reader_config;

	m_pSwapChain->Present(0, 0);



	irData.SysMemSlicePitch = 0;

				tinyobj::real_t ty =



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	dsDesc.Texture2D.MipSlice = 0;

	std::vector<tinyobj::material_t> materials;

				vertex.push_back(vertex_tmp);



	SDL_DestroyWindow(win);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



int main(int, char**)

	m_Viewport.TopLeftY = 0;

		}

		return 1;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	UINT strides = sizeof(Vertex);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//頂点シェーダー生成

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (int j = 0; j < icount; j++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.Windowed = TRUE;

	SDL_Quit();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}

{





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

int SEGMENT = 36;

	Release();

}

	D3D_FEATURE_LEVEL level;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}

		SDL_RenderClear(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

struct ConstantLight {





	D3D11_SUBRESOURCE_DATA irData;

	int     vcount = vertexlist.size();



	vbDesc.CPUAccessFlags = 0;

};

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	for (int j = 0; j < icount; j++)

		if (!ret)



/*

	SDL_FreeSurface(suf);

			switch (e.key.keysym.sym)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Quality = 0;

	//深度ステンシルバッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	}

		return hr;

	if (FAILED(hr))



	vrData.SysMemSlicePitch = 0;

	SDL_Event e;

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pDepthStencilView);

	{



	txDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		delete[] pVList;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	{

	m_pDepthStencilView = NULL;

	pBackBuffer->Release();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//vector<WORD> index_t;

	enum KeyPressSurfaces





		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;



		&m_pDevice,

	{

	SAFE_RELEASE(m_pPixelShader);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pImmediateContext);

				WORD index = idx.vertex_index;

	m_pTextureView = NULL;

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexShader);

	if (!error.empty())

};

};

	SDL_DestroyWindow(win);

	{

	scDesc.BufferDesc.Width = rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

#ifdef _DEBUG

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext = NULL;

	WORD   icount = indexList.size();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//定数バッファ作成

	LoadObj(vertexlist, indexList);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			index_offset += num_vertices;

/*





	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	ibDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		{

	SAFE_RELEASE(m_pMatrixBuffer);

#endif

	std::string inputfile = "test.obj";

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.MiscFlags = 0;



	if (FAILED(hr))

	if (FAILED(hr))

	return 0;



	XMFLOAT4         eyePos;   //視点座標





	cbDesc.MiscFlags = 0;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC vbDesc;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLightBuffer clb;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

CD3DTest::CD3DTest()





	SAFE_RELEASE(m_pInputLayout);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

				WORD index = idx.vertex_index;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

				vertex.push_back(vertex_tmp);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}

		pVList[i] = vertexlist[i];

	}

				break;

	WORD   icount = indexList.size();

 */

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	//ピクセルシェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			default:

#include <iostream>

	m_pLightBuffer = NULL;



	auto& shapes = reader.GetShapes();

	std::vector<tinyobj::material_t> materials;

	D3D11_SAMPLER_DESC smpDesc;

			switch (e.key.keysym.sym)

	tinyobj::ObjReader reader;



	UINT flags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b)

	dsDesc.Texture2D.MipSlice = 0;

		return hr;



	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	return hr;

		delete[] pIList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string error;



	SAFE_RELEASE(m_pIndexBuffer);

	{

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

struct ConstantMatrixBuffer {

			}

	m_pTextureView = NULL;



		return hr;



 * Lesson 1: Hello World!

	m_pSampler = NULL;

	cbDesc.StructureByteStride = 0;



	if (!reader.Warning().empty())

struct ConstantLight {

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{



	//テクスチャ読み込み

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	m_Viewport.Width = (FLOAT)rect.Width();



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		{



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//vector<Vertex> vertex_t;

		flags,

	txDesc.Height = rect.Height();

				vertex.push_back(vertex_tmp);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}
	SAFE_RELEASE(m_pImmediateContext);

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		exit(1);



	SAFE_RELEASE(m_pVertexShader);



	//ビューポート設定

	float    nearZ = 0.1f;

	m_pTexture = NULL;

		return hr;

	int     vcount = vertexlist.size();

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pSampler);

	bool ret = tinyobj::LoadObj(



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	}

	m_pImmediateContext = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				tinyobj::real_t ty =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#ifdef _DEBUG

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//Vertex* pVList = new Vertex[vcount];

	return hr;

	ConstantLightBuffer clb;

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.ArraySize = 1;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		{

	//深度ステンシルバッファ作成



	if (FAILED(hr))

	return hr;

			case SDLK_RIGHT:

	//テクスチャ読み込み

	SDL_DestroyRenderer(ren);



};

	SAFE_RELEASE(m_pPixelShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

HRESULT CD3DTest::Create(HWND hwnd)

		{

		&m_pDevice,

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_DestroyTexture(tex);

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	m_pTexture = NULL;

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			}

		}



	vector<WORD> indexList;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyWindow(win);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				break;

	SDL_Quit();



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.SampleDesc.Count = 1;





	if (FAILED(hr))



	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferCount = 1;

#include <iostream>

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;

	{



				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pTexture);





	cbDesc.CPUAccessFlags = 0;

	{

	{





	float    nearZ = 0.1f;

	dsDesc.Texture2D.MipSlice = 0;

	HRESULT              hr;





}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pTexture = NULL;

			//Select surfaces based on key press

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D_FEATURE_LEVEL level;

};

				break;



#define TINYOBJLOADER_IMPLEMENTATION

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pSampler);

	irData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_FreeSurface(bmp);

	vbDesc.StructureByteStride = 0;

	ConstantLight    pntLight; //点光源

	cbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

	tinyobj::ObjReaderConfig reader_config;

	}

		&m_pSwapChain,

		KEY_PRESS_SURFACE_DEFAULT,

	m_pMatrixBuffer = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		cout << "SDL_INIT_ERROR" << endl;





		{

	Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

int main(int, char**)

	//インデックスバッファ作成





	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	Release();



	std::string inputfile = "test.obj";



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//ピクセルシェーダー生成

		return hr;

 */

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_SAMPLER_DESC smpDesc;

	ConstantMaterial material; //物体の質感

 * Lesson 1: Hello World!



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	::ZeroMemory(&scDesc, sizeof(scDesc));

		{



	{

 * Lesson 1: Hello World!

	UINT flags = 0;

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}







	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

		SDL_Delay(1000);

{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		KEY_PRESS_SURFACE_UP,

	//vector<WORD> index_t;

				indexlist.push_back(index);

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	return 0;

		return hr;

		return 1;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4         eyePos;   //視点座標

	/*

		R"(cube.obj)");



	std::string imagePath = "hello.bmp";



			//Select surfaces based on key press

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

	m_pSwapChain = NULL;

	{

	ibDesc.StructureByteStride = 0;

#include <SDL.h>



	CRect                rect;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int j = 0; j < icount; j++)



}

	Release();

	m_IndexCount = 0;

#include <iostream>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDepthStencilTexture);

 */

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



#include <iostream>

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.Height = (FLOAT)rect.Height();



	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return 1;



		return hr;

int main(int, char**)

	HRESULT              hr;

	Vertex* pVList = new Vertex[vcount];

		pIList[j] = indexList[j];

		&scDesc,

	if (!reader.Warning().empty())

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.Format = txDesc.Format;

	}

	m_pSampler = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pDevice);

	for (int j = 0; j < icount; j++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext = NULL;

			{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderClear(ren);



#include <iostream>

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += fv;

		}

	SAFE_RELEASE(m_pInputLayout);

};

	};

	SAFE_RELEASE(m_pTextureView);

		NULL,





	m_pVertexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{



	vbDesc.CPUAccessFlags = 0;



{

		{

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		if (!ret)

		{

		return hr;

		//User requests quit

	}*/

void CD3DTest::Release()

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	delete[] pVList;

		SDL_RenderCopy(ren, tex, NULL, NULL);



				vertex.push_back(vertex_tmp);

	return hr;

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Angle += XMConvertToRadians(1.0f);

	//Vertex* pVList = new Vertex[vcount];





		}

struct ConstantMatrixBuffer {

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (!error.empty())

	ConstantMatrixBuffer cmb;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	delete[] pVList;

			//Select surfaces based on key press

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

}

		if (e.type == SDL_QUIT)

		flags,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pVertexShader = NULL;





	for (int i = 0; i < vcount; i++)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pLightBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;





	D3D11_TEXTURE2D_DESC txDesc;

	float    fov = XMConvertToRadians(20.0f);



		&level,

			//Select surfaces based on key press

	for (int i = 0; i < vcount; i++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				break;

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

		m_pImmediateContext->ClearState();

	//ピクセルシェーダー生成

	auto& attrib = reader.GetAttrib();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}





};

	}

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL

	m_pVertexShader = NULL;

		exit(1);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				// access to vertex

	XMFLOAT4X4 view;



		size_t index_offset = 0;



				vertex.push_back(vertex_tmp);

	return;

};

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Height = rect.Height();

	m_pSampler = NULL;

	WORD   icount = indexList.size();

		{

	};



	SAFE_RELEASE(m_pTextureView);

		}



		delete[] pVList;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::GetClientRect(hwnd, &rect);

	irData.SysMemSlicePitch = 0;

{

	m_Viewport.TopLeftY = 0;

	//頂点シェーダー生成

#include "DirectXManager.h"

	SAFE_RELEASE(m_pDepthStencilView);

	std::vector<tinyobj::shape_t> shapes;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pSampler);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SDL_FreeSurface(bmp);







	ConstantLightBuffer clb;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		else if (e.type == SDL_KEYDOWN)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	}





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_BUFFER_DESC cbDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		m_pImmediateContext->ClearState();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//vector<Vertex> vertex_t;

	m_pDepthStencilTexture = NULL;

		SDL_Delay(1000);

		1,

		return hr;

		pLevels,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		//User presses a key



	//vector<WORD> index_t;

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	if (FAILED(hr))





	if (!reader.ParseFromFile(inputfile, reader_config))

};

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

struct ConstantLight {

	}

#endif

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		cout << "SDL_INIT_ERROR" << endl;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	{

	if (!reader.Warning().empty())

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				indexlist.push_back(index);

};

		SDL_Delay(1000);

	vector<WORD> indexList;

		size_t index_offset = 0;

	Release();

	};

	//ビューポート設定

	float    fov = XMConvertToRadians(20.0f);

	ConstantLightBuffer clb;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

struct ConstantMaterial {

	int     vcount = vertexlist.size();

CD3DTest::~CD3DTest()

#include <iostream>

	{

	SAFE_RELEASE(m_pSampler);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.SampleDesc.Quality = 0;

	{

		D3D_DRIVER_TYPE_HARDWARE,

		}



	::GetClientRect(hwnd, &rect);

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (int j = 0; j < icount; j++)

	XMFLOAT4X4 world;



	LoadObj(vertexlist, indexList);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			for (size_t v = 0; v < fv; v++)

		delete[] pVList;

		&m_pSwapChain,



	ConstantLightBuffer clb;

			index_offset += num_vertices;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMFLOAT4X4 world;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



#include <SDL.h>



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//インデックスバッファ作成

				break;

		&m_pImmediateContext);

				WORD index = idx.vertex_index;

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	{

	//Create Index

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

struct ConstantLightBuffer {

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pPixelShader);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	m_pVertexShader = NULL;

		SDL_RenderClear(ren);

	m_pPixelShader = NULL;

#include <SDL.h>

	SAFE_RELEASE(m_pLightBuffer);

	//頂点バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilView);

				break;

			{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

#include <SDL.h>

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_DOWN,

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ID3D11Texture2D* pBackBuffer;

				WORD index = idx.vertex_index;

HRESULT CD3DTest::Create(HWND hwnd)

			{



	m_Viewport.TopLeftX = 0;

	WORD   icount = indexList.size();

		if (!reader.Error().empty())

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.ArraySize = 1;



	//ビューポート設定

	return 0;





		return hr;

	m_pVertexBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			}

	//頂点レイアウト作成

	//Clean up our objects and quit

};

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 projection;





	SDL_FreeSurface(bmp);

	//インデックスバッファ作成

	Release();

		R"(cube.obj)");



	SAFE_RELEASE(m_pDevice);

	}*/

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				WORD index = idx.vertex_index;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	for (int j = 0; j < icount; j++)

		return hr;

	if (!error.empty())

		SDL_Delay(1000);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		if (!ret)

	m_pLightBuffer = NULL;



CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_UP,

		}

		KEY_PRESS_SURFACE_RIGHT,

{

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	bool ret = tinyobj::LoadObj(

	if (m_pImmediateContext)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//定数バッファ作成



		return hr;

	{



			switch (e.key.keysym.sym)

	UINT offsets = 0;

	SAFE_RELEASE(m_pIndexBuffer);



	{

	m_Viewport.TopLeftX = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

}

	bool ret = tinyobj::LoadObj(

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				// access to vertex



		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	HRESULT              hr;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	auto& attrib = reader.GetAttrib();

		&level,

	}

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

			case SDLK_UP:



	vbDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	pBackBuffer->Release();

	m_pPixelShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

#include <SDL.h>

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pSampler);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

		pLevels,

	bool ret = tinyobj::LoadObj(

	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&m_pImmediateContext);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

};



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4X4 projection;

		cout << "SDL_INIT_ERROR" << endl;

	enum KeyPressSurfaces

	{



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	//頂点レイアウト作成

	}



		}

	m_pSwapChain->Present(0, 0);



	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLight    pntLight; //点光源

		&m_pDevice,

		return hr;

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User requests quit

	vrData.SysMemPitch = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Clean up our objects and quit

	LoadObj(vertexlist, indexList);



		R"(cube.obj)");



	if (FAILED(hr))



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		D3D11_SDK_VERSION,



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

 */

	{



		&m_pImmediateContext);

}



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		D3D_DRIVER_TYPE_HARDWARE,

#include <iostream>

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	};



	scDesc.BufferCount = 1;

		D3D_DRIVER_TYPE_HARDWARE,

};



	//vector<WORD> index_t;

	vector<WORD> indexList;

		&shapes,





	vector<WORD> indexList;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.MipLevels = 1;

	SDL_FreeSurface(bmp);

		{



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



struct ConstantLight {

	vrData.SysMemSlicePitch = 0;

	};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	int     vcount = vertexlist.size();



	m_pInputLayout = NULL;

	tinyobj::ObjReaderConfig reader_config;



CD3DTest::~CD3DTest()



	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//テクスチャ読み込み

		}

	m_pMatrixBuffer = NULL;

			{

	LoadObj(vertexlist, indexList);

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_RIGHT,

	m_VertexCount = vcount;

		flags,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pSampler = NULL;



			case SDLK_RIGHT:





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pTexture);

	scDesc.OutputWindow = hwnd;

	//定数バッファ作成

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))



		return hr;



	D3D11_TEXTURE2D_DESC txDesc;



		else if (e.type == SDL_KEYDOWN)





struct ConstantLight {

#include <iostream>

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))



	m_pDepthStencilTexture = NULL;



		SDL_Delay(1000);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_IndexCount = 0;

	m_pSwapChain->Present(0, 0);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;





	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	m_pTexture = NULL;

			index_offset += fv;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		//User presses a key

		return hr;

	HRESULT              hr;

			case SDLK_LEFT:

	ConstantLight    pntLight; //点光源

	m_pDepthStencilView = NULL;

	// Loop over shapes



	ID3D11Texture2D* pBackBuffer;

		flags,

	return;

	{



		KEY_PRESS_SURFACE_DOWN,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pPixelShader);

	m_VertexCount = 0;



	{

		return hr;

void CD3DTest::Render()

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				indexlist.push_back(index);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))





		return hr;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))



				tinyobj::real_t tx =

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		SDL_RenderPresent(ren);

	std::vector<tinyobj::shape_t> shapes;



		pVList[i] = vertexlist[i];

			}

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pTexture);

	return hr;

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			break;



	ibDesc.MiscFlags = 0;

	vbDesc.MiscFlags = 0;



	txDesc.ArraySize = 1;

			}

	WORD* pIList = new WORD[icount];

	SDL_FreeSurface(bmp);

	cbDesc.StructureByteStride = 0;



	if (FAILED(hr))

		{



	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pDepthStencilTexture);

		m_pImmediateContext->ClearState();

using std::cout; using std::endl;

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	txDesc.ArraySize = 1;



	SAFE_RELEASE(m_pDepthStencilView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&level,



	m_Viewport.Width = (FLOAT)rect.Width();

				vertex.push_back(vertex_tmp);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pTextureView);

	//ビューポート設定

}

	m_pDepthStencilView = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		return hr;



	//定数バッファ作成

		return hr;







		}

struct ConstantMatrixBuffer {

			}



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))





		KEY_PRESS_SURFACE_UP,

	tinyobj::ObjReaderConfig reader_config;

		&attrib,

{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    farZ = 100.0f;

			{

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		{

		{

#include "DirectXManager.h"

		return hr;

	UINT strides = sizeof(Vertex);

		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SAFE_RELEASE(m_pSampler);

	D3D11_TEXTURE2D_DESC txDesc;

	D3D_FEATURE_LEVEL level;

	{





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



			case SDLK_LEFT:

	ConstantMatrixBuffer cmb;



};

	{

	SDL_FreeSurface(bmp);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;

	SDL_FreeSurface(suf);

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	HRESULT              hr;

	txDesc.SampleDesc.Quality = 0;

		pLevels,

			int num_vertices = shape.mesh.num_face_vertices[f];



};



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.MiscFlags = 0;

	if (!reader.Warning().empty())

				break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		{

	LoadObj(vertexlist, indexList);

	m_Angle += XMConvertToRadians(1.0f);

		{



	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

			for (size_t v = 0; v < fv; v++)

/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

int main(int, char**)

		KEY_PRESS_SURFACE_DEFAULT,

	//頂点バッファ作成

	{

			{

			default:

	vrData.SysMemSlicePitch = 0;

	//ビューポート設定

	XMFLOAT4 ambient;           //環境(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

		&error,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ConstantMatrixBuffer cmb;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_IndexCount = icount;



	scDesc.BufferDesc.Height = rect.Height();

				// access to vertex

			break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





};

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pTexture);



	SAFE_RELEASE(m_pLightBuffer);

	WORD   icount = indexList.size();

		return hr;

	::GetClientRect(hwnd, &rect);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderPresent(ren);

		if (!ret)

	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pMatrixBuffer = NULL;

	m_Viewport.TopLeftX = 0;

};

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&attrib,

	D3D11_BUFFER_DESC cbDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}



		SDL_RenderCopy(ren, tex, NULL, NULL);

		pVList[i] = vertexlist[i];



	txDesc.CPUAccessFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		pVList[i] = vertexlist[i];

		&m_pSwapChain,

	std::vector<tinyobj::material_t> materials;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			}

	UINT strides = sizeof(Vertex);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			default:

			//Select surfaces based on key press

	//インデックスバッファ作成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 ambient;           //環境(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&attrib,

		if (e.type == SDL_QUIT)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext = NULL;

			switch (e.key.keysym.sym)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			}

	SAFE_RELEASE(m_pSampler);

int SEGMENT = 36;

				// access to vertex

		size_t index_offset = 0;

#ifdef _DEBUG



	SAFE_RELEASE(m_pSampler);

}

void CD3DTest::Render()

#endif

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC vbDesc;

	std::string inputfile = "test.obj";

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDevice = NULL;

	SDL_Quit();

	{

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;

	}



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.MipLevels = 1;

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pVertexBuffer);

	}

		&level,

/*

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4X4 world;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&m_pSwapChain,

	enum KeyPressSurfaces





				tinyobj::real_t tx =

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC ibDesc;



{





	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_BUFFER_DESC vbDesc;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int main(int, char**)

	XMFLOAT4X4 projection;

/*





	if (m_pImmediateContext)

	txDesc.ArraySize = 1;



struct ConstantLightBuffer {

	//ビューポート設定

	ConstantMatrixBuffer cmb;

		R"(cube.obj)");



	//頂点バッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

		{



	m_pVertexBuffer = NULL;

	// Loop over shapes



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{



	SAFE_RELEASE(m_pPixelShader);





	if (!reader.Warning().empty())

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	delete[] pVList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

	//頂点レイアウト作成

	}

	if (FAILED(hr))

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

 * Lesson 1: Hello World!

		if (!reader.Error().empty())

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pTexture = NULL;

	vector<Vertex> vertexlist;

		}

		KEY_PRESS_SURFACE_LEFT,

			for (size_t v = 0; v < fv; v++)

	dsDesc.Format = txDesc.Format;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点バッファ作成

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		size_t index_offset = 0;  // インデントのオフセット

{

			}



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		SDL_RenderClear(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	CRect                rect;

	std::vector<tinyobj::material_t> materials;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_TOTAL

	}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Quit();

		&m_pDevice,

	//テクスチャ読み込み



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyRenderer(ren);

	irData.SysMemPitch = 0;

	scDesc.SampleDesc.Count = 1;

	{

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	delete[] pIList;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

CD3DTest::~CD3DTest()



#include <iostream>

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

				indexlist.push_back(index);

	m_pLightBuffer = NULL;

	auto& attrib = reader.GetAttrib();

			{

	cbDesc.MiscFlags = 0;

		&scDesc,

	float    farZ = 100.0f;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	pBackBuffer->Release();

using std::cout; using std::endl;

		D3D11_SDK_VERSION,

};

		else if (e.type == SDL_KEYDOWN)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderClear(ren);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ConstantLightBuffer clb;

	SDL_DestroyTexture(tex);

}



			break;

		return hr;

				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_UP,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	flags |= D3D11_CREATE_DEVICE_DEBUG;



}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

		}

};



	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pLightBuffer);

				// access to vertex

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			break;

#include "DirectXManager.h"

	float    farZ = 100.0f;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pDevice = NULL;

	m_VertexCount = vcount;

				// access to vertex

	float    fov = XMConvertToRadians(20.0f);

	dsDesc.Texture2D.MipSlice = 0;



		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftY = 0;

			default:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		&m_pSwapChain,

	irData.SysMemSlicePitch = 0;



	{



	return hr;

		return 1;

	m_Viewport.TopLeftY = 0;

	UINT strides = sizeof(Vertex);

	//Clean up our objects and quit

	txDesc.Width = rect.Width();

	float    nearZ = 0.1f;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.StructureByteStride = 0;



	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			case SDLK_LEFT:

		size_t index_offset = 0;  // インデントのオフセット

		&m_pDevice,



		return hr;

		return hr;



	}

		//User presses a key

int SEGMENT = 36;

	if (FAILED(hr))

int main(int, char**)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

		return hr;

		pVList[i] = vertexlist[i];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	//First we need to start up SDL, and make sure it went ok

	//頂点バッファ作成

	vbDesc.MiscFlags = 0;

				tinyobj::real_t tx =

		pIList[j] = indexList[j];

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pSampler);



	}





	std::string imagePath = "hello.bmp";



CD3DTest::CD3DTest()

	scDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))







	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				vertex.push_back(vertex_tmp);

		}



	XMFLOAT4X4 world;

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



}

		//User requests quit

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

		flags,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	//vector<WORD> index_t;

	//頂点シェーダー生成



	vbDesc.CPUAccessFlags = 0;

	Release();

				break;



	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	WORD   icount = indexList.size();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	UINT offsets = 0;



{

		KEY_PRESS_SURFACE_UP,

	return 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



{

{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&level,

	int     vcount = vertexlist.size();

	m_Viewport.TopLeftY = 0;



	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{



	UINT offsets = 0;

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return;

		else if (e.type == SDL_KEYDOWN)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4         ambient;  //環境光(r,g,b)

}



		return hr;

}

		return hr;

		//User requests quit

				indexlist.push_back(idx.vertex_index);

	//Key press surfaces constants

				// access to vertex

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	return;

			exit(1);

		//User presses a key

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	DXGI_SWAP_CHAIN_DESC scDesc;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferDesc.Width = rect.Width();

		}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DOWN,

	{

	tinyobj::attrib_t attrib;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pIndexBuffer = NULL;

	m_pLightBuffer = NULL;

int main(int, char**)

		return hr;

	m_pLightBuffer = NULL;



	Release();



	SDL_DestroyWindow(win);



	XMFLOAT4         eyePos;   //視点座標

	std::vector<tinyobj::shape_t> shapes;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		exit(1);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;

	vector<Vertex> vertexlist;

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		delete[] pIList;

			switch (e.key.keysym.sym)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			index_offset += num_vertices;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	}

	SDL_DestroyWindow(win);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	HRESULT              hr;

#endif

	txDesc.MipLevels = 1;

	Release();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



#include "DirectXManager.h"

	m_pSwapChain->Present(0, 0);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	delete[] pVList;

	for (int j = 0; j < icount; j++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_SAMPLER_DESC smpDesc;

	m_pSwapChain = NULL;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty =



	SAFE_RELEASE(m_pDepthStencilTexture);

			break;

	m_VertexCount = 0;

	auto& materials = reader.GetMaterials();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	Release();

	//Vertex* pVList = new Vertex[vcount];

	/*

	txDesc.MiscFlags = 0;

	{

	std::vector<tinyobj::material_t> materials;

	UINT flags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4         ambient;  //環境光(r,g,b)



#endif

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}*/

	D3D11_BUFFER_DESC vbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	SAFE_RELEASE(m_pVertexShader);



				tinyobj::real_t tx =

};

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.Windowed = TRUE;

			{

	scDesc.Windowed = TRUE;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	WORD* pIList = new WORD[icount];

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_BUFFER_DESC ibDesc;

	{

		pIList[j] = indexList[j];

	WORD* pIList = new WORD[icount];

	std::vector<tinyobj::shape_t> shapes;

	tinyobj::ObjReaderConfig reader_config;

	m_pInputLayout = NULL;

				tinyobj::real_t ty =

	m_Viewport.TopLeftX = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.MinDepth = 0.0f;

		return hr;

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_UP,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pDevice);

	txDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		1,

};

	ibDesc.MiscFlags = 0;

};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return 0;

	txDesc.Height = rect.Height();

	if (FAILED(hr))

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);


