



			case SDLK_UP:

		{

	m_pPixelShader = NULL;

		return hr;

	m_VertexCount = 0;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&shapes,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

void CD3DTest::Release()

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		NULL,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_VertexCount = 0;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t ty =



	WORD   icount = indexList.size();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&m_pSwapChain,

	{

		&m_pDevice,

	WORD* pIList = new WORD[icount];

		&level,

	{

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			case SDLK_LEFT:

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pTextureView = NULL;

				indexlist.push_back(idx.vertex_index);

	//ピクセルシェーダー生成

	m_pTexture = NULL;

	m_Viewport.MinDepth = 0.0f;



	enum KeyPressSurfaces

			{

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.eyePos, eye);

	irData.SysMemPitch = 0;

		SDL_Delay(1000);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyRenderer(ren);

	ConstantMaterial material; //物体の質感

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

		if (!reader.Error().empty())

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

				tinyobj::real_t ty =



		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#include "DirectXManager.h"

	auto& materials = reader.GetMaterials();

	m_pRenderTargetView = NULL;

	//頂点バッファ作成

	//頂点シェーダー生成

#include <SDL.h>

		}

				break;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.Height = rect.Height();

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

		KEY_PRESS_SURFACE_LEFT,



				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyTexture(tex);

			for (size_t v = 0; v < num_vertices; v++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.MiscFlags = 0;



	txDesc.CPUAccessFlags = 0;

	// Loop over shapes

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<WORD> indexList;

	SDL_FreeSurface(suf);

		return hr;

	};



	tinyobj::ObjReader reader;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		exit(1);

	m_pDevice = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_UP,



	Release();

	float    fov = XMConvertToRadians(20.0f);

	::GetClientRect(hwnd, &rect);

		D3D11_SDK_VERSION,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//vector<WORD> index_t;



	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

			case SDLK_LEFT:

	if (FAILED(hr))

}

				vertex.push_back(vertex_tmp);

	if (!reader.ParseFromFile(inputfile, reader_config))



	//Vertex* pVList = new Vertex[vcount];

		return hr;

		1,



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		//User requests quit

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	tinyobj::ObjReader reader;

			{



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	D3D11_SUBRESOURCE_DATA irData;

}
	ibDesc.StructureByteStride = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Quit();

			{

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#include <iostream>



	::GetClientRect(hwnd, &rect);

		&shapes,







	D3D11_TEXTURE2D_DESC txDesc;

	vbDesc.StructureByteStride = 0;

	//Clean up our objects and quit



	bool ret = tinyobj::LoadObj(

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&error,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





			for (size_t v = 0; v < num_vertices; v++)

			int num_vertices = shape.mesh.num_face_vertices[f];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	{

		{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	ibDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

		1,

};



		D3D_DRIVER_TYPE_HARDWARE,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		flags,

	txDesc.Height = rect.Height();



	txDesc.Height = rect.Height();



struct ConstantMatrixBuffer {

			case SDLK_DOWN:

			case SDLK_UP:



	for (int i = 0; i < 3; i++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	enum KeyPressSurfaces

 * Lesson 1: Hello World!

	SDL_Quit();

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_LEFT,

	ZeroMemory(&txDesc, sizeof(txDesc));

#include "DirectXManager.h"

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.CPUAccessFlags = 0;

};



	D3D_FEATURE_LEVEL level;

CD3DTest::CD3DTest()

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//Key press surfaces constants

	::GetClientRect(hwnd, &rect);

	auto& attrib = reader.GetAttrib();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

		KEY_PRESS_SURFACE_UP,



		return hr;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



CD3DTest::CD3DTest()

	return 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&attrib,

	D3D11_SUBRESOURCE_DATA vrData;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	UINT strides = sizeof(Vertex);



	dsDesc.Texture2D.MipSlice = 0;





	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		R"(cube.obj)");

	::GetClientRect(hwnd, &rect);

	m_pDevice = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				WORD index = idx.vertex_index;

}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	auto& shapes = reader.GetShapes();

			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	UINT offsets = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	txDesc.CPUAccessFlags = 0;



	}



	WORD* pIList = new WORD[icount];



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

int SEGMENT = 36;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pSwapChain);



{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

	LoadObj(vertexlist, indexList);

	D3D_FEATURE_LEVEL level;



				break;

			default:

	m_VertexCount = vcount;



	SDL_DestroyRenderer(ren);

	}

				WORD index = idx.vertex_index;

		return hr;

	m_pDepthStencilTexture = NULL;

#include <iostream>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				break;

		exit(1);



	return 0;





	if (FAILED(hr))

	m_VertexCount = 0;

 */

	m_Angle += XMConvertToRadians(1.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pIndexBuffer = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	::GetClientRect(hwnd, &rect);

{

	txDesc.SampleDesc.Quality = 0;

	m_pDepthStencilView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA vrData;

		NULL,

}


	ZeroMemory(&txDesc, sizeof(txDesc));

		{

			break;

	float    farZ = 100.0f;



	}

			for (size_t v = 0; v < fv; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.Width = (FLOAT)rect.Width();

{

{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			//Select surfaces based on key press

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));







	if (FAILED(hr))

				break;



	}

		&error,

{



};

struct ConstantLight {





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			{

		return hr;





		SDL_RenderCopy(ren, tex, NULL, NULL);

			{

		return hr;

	SDL_FreeSurface(bmp);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.CPUAccessFlags = 0;

		&m_pDevice,

	if (FAILED(hr))

		//User requests quit

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{

}



	D3D11_SAMPLER_DESC smpDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	Release();

	pBackBuffer->Release();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	delete[] pVList;

		D3D11_SDK_VERSION,



	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}


	XMFLOAT4X4 view;

			index_offset += fv;

	}*/

	delete[] pVList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	int     vcount = vertexlist.size();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	tinyobj::ObjReader reader;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.OutputWindow = hwnd;

	m_pSwapChain = NULL;

			break;

	if (FAILED(hr))



		D3D_DRIVER_TYPE_HARDWARE,

	ConstantMatrixBuffer cmb;



struct ConstantLight {

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MipLevels = 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ConstantMaterial material; //物体の質感

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Release();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.StructureByteStride = 0;

		1,



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

};



	SDL_DestroyWindow(win);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			{

		//User presses a key

	ZeroMemory(&txDesc, sizeof(txDesc));

		size_t index_offset = 0;



	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.Height = rect.Height();

				tinyobj::real_t ty =



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



struct ConstantLight {

			//Select surfaces based on key press

			//Select surfaces based on key press

	SDL_DestroyTexture(tex);

HRESULT CD3DTest::Create(HWND hwnd)

	//深度ステンシルバッファ作成

		return hr;

	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	return 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			case SDLK_RIGHT:

	ibDesc.MiscFlags = 0;

			}

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_TEXTURE2D_DESC txDesc;



	irData.pSysMem = &pIList[0];

#include <iostream>

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	SDL_Event e;



	m_pInputLayout = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<Vertex> vertex_t;

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))



	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		NULL,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



			break;

	HRESULT              hr;

	m_pPixelShader = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float    fov = XMConvertToRadians(20.0f);

	for (int j = 0; j < icount; j++)



#include <SDL.h>

	//vector<WORD> index_t;

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.CPUAccessFlags = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

CD3DTest::~CD3DTest()

	delete[] pVList;

		if (!ret)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ConstantLight    pntLight; //点光源

	irData.SysMemPitch = 0;

int main(int, char**)



	SAFE_RELEASE(m_pImmediateContext);



	scDesc.Windowed = TRUE;

	if (FAILED(hr))

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderPresent(ren);





				vertex.push_back(vertex_tmp);

	m_pTexture = NULL;

}

		SDL_Delay(1000);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pDevice,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

	pBackBuffer->Release();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.MiscFlags = 0;

			default:

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantLightBuffer {



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;

{

int main(int, char**)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	UINT strides = sizeof(Vertex);



		&m_pImmediateContext);

	for (int i = 0; i < 3; i++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





				WORD index = idx.vertex_index;

		D3D11_SDK_VERSION,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

int main(int, char**)



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

CD3DTest::~CD3DTest()

	ibDesc.CPUAccessFlags = 0;





	m_VertexCount = 0;



		return hr;





			case SDLK_LEFT:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (const auto& shape : shapes)

				break;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	ibDesc.MiscFlags = 0;

		else if (e.type == SDL_KEYDOWN)





	SDL_Quit();

		&m_pDevice,



#include <SDL.h>

	cbDesc.MiscFlags = 0;

int main(int, char**)

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//インデックスバッファ作成

	cbDesc.StructureByteStride = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		size_t index_offset = 0;



	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	if (FAILED(hr))

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_DOWN:



int main(int, char**)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		&error,

		NULL,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			{

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.MiscFlags = 0;

	UINT flags = 0;

{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//ビューポート設定

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);



	{

	ConstantLightBuffer clb;

	ConstantMaterial material; //物体の質感

	bool ret = tinyobj::LoadObj(

			index_offset += fv;

		size_t index_offset = 0;



	WORD   icount = indexList.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);







	txDesc.Width = rect.Width();

/*



		&attrib,

	//First we need to start up SDL, and make sure it went ok

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_DestroyTexture(tex);

{

	scDesc.BufferDesc.Height = rect.Height();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Angle += XMConvertToRadians(1.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	scDesc.Windowed = TRUE;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4X4 world;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	CRect                rect;

				break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#endif

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	tinyobj::ObjReaderConfig reader_config;

	std::string imagePath = "hello.bmp";

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	irData.SysMemPitch = 0;

		&m_pImmediateContext);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Viewport.MinDepth = 0.0f;

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_DestroyTexture(tex);

		SDL_Delay(1000);

	txDesc.ArraySize = 1;

			case SDLK_DOWN:

	SDL_Quit();

	//Clean up our objects and quit

	tinyobj::ObjReader reader;









	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ConstantLight    pntLight; //点光源

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ConstantMatrixBuffer cmb;

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;



	Release();

		&error,

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



{



	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		&m_pSwapChain,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	ConstantLightBuffer clb;

		return hr;



	m_pVertexBuffer = NULL;

{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	tinyobj::attrib_t attrib;

			exit(1);

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	txDesc.MiscFlags = 0;



			//Select surfaces based on key press



	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.TopLeftX = 0;



	m_Viewport.TopLeftX = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				vertex.push_back(vertex_tmp);

}

CD3DTest::CD3DTest()



	for (int j = 0; j < icount; j++)



	m_pInputLayout = NULL;

		return hr;

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	scDesc.Windowed = TRUE;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

		}

				break;

	ibDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	DXGI_SWAP_CHAIN_DESC scDesc;

};

	SAFE_RELEASE(m_pLightBuffer);



	m_pSwapChain->Present(0, 0);

		if (!ret)

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4X4 world;

			case SDLK_LEFT:

	SAFE_RELEASE(m_pIndexBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		if (!reader.Error().empty())





}

	if (!reader.Warning().empty())

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SAFE_RELEASE(m_pVertexBuffer);



	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	int     vcount = vertexlist.size();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.MinDepth = 0.0f;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pSwapChain,

	float    aspect = m_Viewport.Width / m_Viewport.Height;



{

	}

	m_IndexCount = icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



	m_pRenderTargetView = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_FreeSurface(suf);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	{

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pDepthStencilTexture = NULL;

	float    nearZ = 0.1f;

	for (int i = 0; i < vcount; i++)

			{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pTexture = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pDepthStencilTexture = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

struct ConstantLight {

}

	m_pInputLayout = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;



	txDesc.Height = rect.Height();



	//テクスチャ読み込み

				// access to vertex

		&shapes,



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	float    farZ = 100.0f;

	}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

using std::cout; using std::endl;

	if (FAILED(hr))

		// Loop over faces(polygon)

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Width = rect.Width();

			}

#define TINYOBJLOADER_IMPLEMENTATION

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pVertexBuffer);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		cout << "SDL_INIT_ERROR" << endl;

	return 0;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pInputLayout = NULL;







	vrData.SysMemPitch = 0;

void CD3DTest::Release()



	std::vector<tinyobj::material_t> materials;

			default:

	m_pMatrixBuffer = NULL;

	SDL_DestroyTexture(tex);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&shapes,

	HRESULT              hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantLight {

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	//テクスチャ読み込み

	tinyobj::ObjReader reader;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	// Loop over shapes

			case SDLK_RIGHT:

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyWindow(win);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



#include <iostream>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_Viewport.Width = (FLOAT)rect.Width();

		NULL,

	for (int i = 0; i < 3; i++)

#include <SDL.h>



	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))



	ID3D11Texture2D* pBackBuffer;

		//User presses a key

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

 * Lesson 1: Hello World!

	scDesc.SampleDesc.Count = 1;

		delete[] pIList;

	reader_config.mtl_search_path = "./"; // Path to material files

	{



	XMFLOAT4X4 world;

		D3D11_SDK_VERSION,

		return hr;

	auto& materials = reader.GetMaterials();

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	vbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

			default:

	if (FAILED(hr))





{







	XMFLOAT4 pos;               //座標(x,y,z)



	D3D11_SUBRESOURCE_DATA irData;

	float    nearZ = 0.1f;

	m_pVertexShader = NULL;



				tinyobj::real_t tx =

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	{

		return hr;

	SDL_DestroyWindow(win);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

			//Select surfaces based on key press

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	return hr;

	if (FAILED(hr))

				// access to vertex

			case SDLK_DOWN:

	float    nearZ = 0.1f;

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			// Loop over vertices in the face.

	delete[] pIList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.Windowed = TRUE;

	m_IndexCount = icount;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (!reader.ParseFromFile(inputfile, reader_config))



	ibDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         eyePos;   //視点座標

	if (!error.empty())





	scDesc.BufferDesc.Width = rect.Width();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	};

		&level,



		SDL_RenderClear(ren);

	ibDesc.MiscFlags = 0;

	//vector<Vertex> vertex_t;

		SDL_RenderClear(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#include <iostream>



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pDepthStencilTexture = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	for (const auto& shape : shapes)

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	m_IndexCount = icount;

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))



		&attrib,

		}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	dsDesc.Format = txDesc.Format;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	int     vcount = vertexlist.size();

	Release();

	Release();



		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

{

	vector<WORD> indexList;

			// Loop over vertices in the face.

			{

	D3D11_SUBRESOURCE_DATA irData;



struct ConstantLight {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	LoadObj(vertexlist, indexList);

		{

	scDesc.SampleDesc.Quality = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

};



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pTexture = NULL;

void CD3DTest::Release()



	XMStoreFloat4(&clb.ambient, lightAmbient);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;

	m_pTexture = NULL;

		}

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	//ピクセルシェーダー生成

				break;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

using std::cout; using std::endl;

	if (FAILED(hr))





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	std::string error;

	m_Viewport.MinDepth = 0.0f;

			for (size_t v = 0; v < fv; v++)

		}

	if (m_pImmediateContext)

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

/*

{

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pTexture);



	for (const auto& shape : shapes)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	if (FAILED(hr))



	tinyobj::ObjReader reader;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	//インデックスバッファ作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Release()

	txDesc.MipLevels = 1;

		// Loop over faces(polygon)



	for (int j = 0; j < icount; j++)

	LoadObj(vertexlist, indexList);



	txDesc.ArraySize = 1;

	D3D11_BUFFER_DESC cbDesc;

	m_pInputLayout = NULL;

	scDesc.SampleDesc.Quality = 0;







	std::vector<tinyobj::shape_t> shapes;

	{





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	txDesc.ArraySize = 1;

	ibDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	return hr;



	scDesc.Windowed = TRUE;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_FreeSurface(suf);

	//Vertex* pVList = new Vertex[vcount];



struct ConstantLight {

		&m_pDevice,

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pSampler);

	UINT offsets = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		if (!reader.Error().empty())



	if (FAILED(hr))





	for (const auto& shape : shapes)

	auto& materials = reader.GetMaterials();



}



	D3D11_BUFFER_DESC vbDesc;

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

{





	XMStoreFloat4(&clb.eyePos, eye);

	ZeroMemory(&txDesc, sizeof(txDesc));



struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	SAFE_RELEASE(m_pTexture);

	m_VertexCount = vcount;

	m_Viewport.TopLeftX = 0;

};

	std::string error;

	if (!reader.ParseFromFile(inputfile, reader_config))

	WORD* pIList = new WORD[icount];

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_DOWN,

	/*

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;







	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

#include <iostream>

		&error,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pTextureView);



		if (e.type == SDL_QUIT)

	scDesc.Windowed = TRUE;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	delete[] pVList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

struct ConstantMaterial {

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return 1;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<Vertex> vertexlist;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	m_pLightBuffer = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		D3D_DRIVER_TYPE_HARDWARE,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			{

		KEY_PRESS_SURFACE_LEFT,

		return hr;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pImmediateContext = NULL;

	// Loop over shapes





		size_t index_offset = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.CPUAccessFlags = 0;

		flags,

				break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		1,

	UINT strides = sizeof(Vertex);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}*/

	delete[] pVList;

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.MiscFlags = 0;

	m_pVertexShader = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			index_offset += num_vertices;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		pLevels,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

#define TINYOBJLOADER_IMPLEMENTATION

	vrData.SysMemPitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC cbDesc;

	//頂点バッファ作成

	for (const auto& shape : shapes)

	m_pPixelShader = NULL;

	return 0;

};

		1,



	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	hr = D3D11CreateDeviceAndSwapChain(NULL,

		pIList[j] = indexList[j];

			index_offset += num_vertices;

	SAFE_RELEASE(m_pRenderTargetView);

	{

	};

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

		}

		{



void CD3DTest::Render()

	vbDesc.MiscFlags = 0;

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//頂点レイアウト作成

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

{

	if (FAILED(hr))

			default:



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

 * Lesson 1: Hello World!

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pSampler = NULL;



	D3D_FEATURE_LEVEL level;

				tinyobj::real_t tx =

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.Windowed = TRUE;

void CD3DTest::Release()

	delete[] pVList;

			for (size_t v = 0; v < num_vertices; v++)



			}





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			{

			exit(1);

	txDesc.SampleDesc.Quality = 0;

		{

	for (int j = 0; j < icount; j++)

	vector<Vertex> vertexlist;

	auto& shapes = reader.GetShapes();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

		SDL_RenderPresent(ren);

	}

		{

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	if (FAILED(hr))

	XMFLOAT4X4 projection;

	if (FAILED(hr))



	SAFE_RELEASE(m_pTexture);

		return hr;

		pLevels,

		if (e.type == SDL_QUIT)

};

		//User requests quit

	ConstantLight    pntLight; //点光源

		{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	vbDesc.CPUAccessFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

		return hr;

	{

			case SDLK_LEFT:

	scDesc.Windowed = TRUE;

	D3D11_BUFFER_DESC ibDesc;

				vertex.push_back(vertex_tmp);

	vbDesc.MiscFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.CPUAccessFlags = 0;

		pVList[i] = vertexlist[i];

	ibDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

#include <SDL.h>

void CD3DTest::Render()

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_RenderPresent(ren);



	ibDesc.CPUAccessFlags = 0;

		flags,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_IndexCount = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Height = rect.Height();

	SDL_Quit();

	SDL_DestroyWindow(win);



	UINT strides = sizeof(Vertex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



#ifdef _DEBUG

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		// Loop over faces(polygon)

	m_pInputLayout = NULL;



	HRESULT              hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	//Vertex* pVList = new Vertex[vcount];

			default:

	std::vector<tinyobj::shape_t> shapes;

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	scDesc.BufferDesc.Height = rect.Height();



	XMFLOAT4 ambient;           //環境(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_DestroyWindow(win);

		SDL_Delay(1000);

	std::string imagePath = "hello.bmp";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	Release();



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.MaxDepth = 1.0f;



		return hr;

		return hr;

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	float    fov = XMConvertToRadians(20.0f);

		1,

	float    nearZ = 0.1f;

		exit(1);

	return 0;

	std::string imagePath = "hello.bmp";



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	UINT flags = 0;

			for (size_t v = 0; v < fv; v++)

		D3D_DRIVER_TYPE_HARDWARE,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		// Loop over faces(polygon)



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string imagePath = "hello.bmp";



		return 1;

	SDL_FreeSurface(bmp);

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		size_t index_offset = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	{



		size_t index_offset = 0;  // インデントのオフセット





				indexlist.push_back(index);

		KEY_PRESS_SURFACE_DEFAULT,

	float    fov = XMConvertToRadians(20.0f);

	return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	{

	for (int i = 0; i < vcount; i++)

			for (size_t v = 0; v < num_vertices; v++)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Quit();

}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	ConstantLight    pntLight; //点光源

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#include <iostream>

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.CPUAccessFlags = 0;

	txDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	{

	txDesc.SampleDesc.Count = 1;

#include <SDL.h>

	XMStoreFloat4(&clb.eyePos, eye);

	float    nearZ = 0.1f;

	vbDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);

		exit(1);

	SAFE_RELEASE(m_pVertexBuffer);

	auto& materials = reader.GetMaterials();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	/*

		delete[] pIList;

	cbDesc.CPUAccessFlags = 0;



		D3D11_SDK_VERSION,

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	std::string error;

	D3D11_SAMPLER_DESC smpDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&materials,

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pMatrixBuffer);

	HRESULT              hr;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		R"(cube.obj)");

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_pTextureView = NULL;

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	float    nearZ = 0.1f;

	m_pSwapChain = NULL;

				indexlist.push_back(index);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		&error,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (!reader.Warning().empty())

		&scDesc,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4X4 world;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}





	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&m_pImmediateContext);

{

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	Vertex* pVList = new Vertex[vcount];



		delete[] pVList;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyTexture(tex);



	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t tx =

	irData.SysMemPitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_TEXTURE2D_DESC txDesc;

#include "DirectXManager.h"

	CRect                rect;

		}

		m_pImmediateContext->ClearState();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.MipLevels = 1;

	UINT flags = 0;



	{



	std::string imagePath = "hello.bmp";



	irData.pSysMem = &pIList[0];



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	ibDesc.CPUAccessFlags = 0;

	for (const auto& shape : shapes)

	XMFLOAT4X4 view;

	ConstantLight    pntLight; //点光源



CD3DTest::~CD3DTest()

	m_pVertexShader = NULL;





	vector<WORD> indexList;

		}



		// Loop over faces(polygon)

	SAFE_RELEASE(m_pSampler);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		&shapes,

		NULL,

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_pVertexShader = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	}



	m_pDepthStencilTexture = NULL;

			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_UP,

	//Vertex* pVList = new Vertex[vcount];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			break;

	m_pSwapChain->Present(0, 0);

}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.SampleDesc.Quality = 0;

 * Lesson 1: Hello World!

		pLevels,

	vector<Vertex> vertexlist;

	vbDesc.StructureByteStride = 0;

	m_pVertexBuffer = NULL;

	std::vector<tinyobj::material_t> materials;

struct ConstantMatrixBuffer {

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Render()

	XMFLOAT4 pos;               //座標(x,y,z)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.TopLeftX = 0;



void CD3DTest::Release()

		m_pImmediateContext->ClearState();



	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pRenderTargetView);

				indexlist.push_back(index);

	}



CD3DTest::CD3DTest()

	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);



	//Vertex* pVList = new Vertex[vcount];

	return 0;

	cbDesc.MiscFlags = 0;

	//Create Index



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点バッファ作成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//Key press surfaces constants

	SAFE_RELEASE(m_pDepthStencilView);

	m_pMatrixBuffer = NULL;



struct ConstantMatrixBuffer {

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	UINT offsets = 0;



	{

	ibDesc.StructureByteStride = 0;

	delete[] pIList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		else if (e.type == SDL_KEYDOWN)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.TopLeftX = 0;

	UINT flags = 0;

	m_pVertexBuffer = NULL;

		}

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	}





	SDL_DestroyRenderer(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	/*

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pTextureView = NULL;

		1,



	scDesc.BufferCount = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.Width = rect.Width();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//Create Index

		SDL_RenderPresent(ren);

	XMFLOAT4X4 projection;

int main(int, char**)

		return hr;

	m_Viewport.TopLeftY = 0;

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_TOTAL

};

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pDevice);

			case SDLK_DOWN:

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.MiscFlags = 0;

			break;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		{

	dsDesc.Texture2D.MipSlice = 0;



	irData.SysMemSlicePitch = 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	D3D11_SUBRESOURCE_DATA irData;

	//Key press surfaces constants

void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;

	//Key press surfaces constants

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		delete[] pVList;

				break;

	auto& attrib = reader.GetAttrib();

	m_Viewport.MaxDepth = 1.0f;

#include <SDL.h>



	HRESULT              hr;

	ibDesc.StructureByteStride = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	if (m_pImmediateContext)

		&m_pDevice,

	{

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	UINT strides = sizeof(Vertex);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

#include <SDL.h>

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&m_pDevice,



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



		SDL_RenderPresent(ren);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

		return hr;





	m_pTextureView = NULL;



	tinyobj::ObjReaderConfig reader_config;

	delete[] pVList;

		}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		KEY_PRESS_SURFACE_DOWN,

		SDL_RenderClear(ren);



	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_UP,

	if (!error.empty())

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				break;





	::GetClientRect(hwnd, &rect);

};

	//vector<Vertex> vertex_t;

	CRect                rect;

	SDL_Quit();

	m_IndexCount = 0;

	if (m_pImmediateContext)

		SDL_RenderClear(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pSampler);

			case SDLK_RIGHT:



CD3DTest::~CD3DTest()

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

}



{

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

HRESULT CD3DTest::Create(HWND hwnd)

		return 1;



		size_t index_offset = 0;

using std::cout; using std::endl;



	m_VertexCount = vcount;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);

		return hr;

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	UINT flags = 0;





		}

			for (size_t v = 0; v < num_vertices; v++)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	for (size_t s = 0; s < shapes.size(); s++)

 */

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int i = 0; i < 3; i++)

	return 0;

			{

	ID3D11Texture2D* pBackBuffer;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t ty =

	{

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.MiscFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	ConstantLightBuffer clb;

	m_pVertexShader = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	DXGI_SWAP_CHAIN_DESC scDesc;

int main(int, char**)

		exit(1);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

int main(int, char**)

		KEY_PRESS_SURFACE_RIGHT,

	float    nearZ = 0.1f;

	m_pDevice = NULL;



		pLevels,

	scDesc.BufferCount = 1;

	ConstantLightBuffer clb;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		D3D11_SDK_VERSION,

	D3D_FEATURE_LEVEL level;

			}

	//Vertex* pVList = new Vertex[vcount];



	//First we need to start up SDL, and make sure it went ok

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_SUBRESOURCE_DATA irData;

			switch (e.key.keysym.sym)

		return hr;



		SDL_RenderClear(ren);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderPresent(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				// access to vertex

	float    fov = XMConvertToRadians(20.0f);

		return hr;



{

	auto& materials = reader.GetMaterials();

				// access to vertex

	auto& shapes = reader.GetShapes();

		&m_pDevice,

	XMFLOAT4 specular;          //反射(r,g,b)

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDepthStencilTexture);



	vbDesc.CPUAccessFlags = 0;

	pBackBuffer->Release();

{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	return 0;

	scDesc.BufferDesc.Width = rect.Width();

	m_pDevice = NULL;

				break;

	float    fov = XMConvertToRadians(20.0f);



	//Create Index

	//Clean up our objects and quit

		pVList[i] = vertexlist[i];

	vector<WORD> indexList;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SAFE_RELEASE(m_pDepthStencilView);

		&m_pImmediateContext);

	txDesc.ArraySize = 1;

#include "DirectXManager.h"

#ifdef _DEBUG



	}

	enum KeyPressSurfaces

		SDL_RenderPresent(ren);

	scDesc.Windowed = TRUE;





		1,

		&shapes,

	// Loop over shapes

	vbDesc.CPUAccessFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//First we need to start up SDL, and make sure it went ok



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		NULL,



	float    fov = XMConvertToRadians(20.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

#include <iostream>

	cbDesc.CPUAccessFlags = 0;

		NULL,



		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vrData.SysMemPitch = 0;

				tinyobj::real_t ty =

}
	SAFE_RELEASE(m_pDepthStencilTexture);



	}

	SAFE_RELEASE(m_pTexture);

	//頂点バッファ作成

	//vector<WORD> index_t;

		&shapes,

	if (!reader.Warning().empty())

	/*

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	auto& attrib = reader.GetAttrib();

	//Vertex* pVList = new Vertex[vcount];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

			{

		NULL,

	m_pRenderTargetView = NULL;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

		exit(1);

			{



				// access to vertex

	SAFE_RELEASE(m_pImmediateContext);

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	//定数バッファ作成

	::GetClientRect(hwnd, &rect);

	vrData.pSysMem = &pVList[0];

	//Clean up our objects and quit

		pVList[i] = vertexlist[i];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	//ピクセルシェーダー生成

	UINT strides = sizeof(Vertex);

	vbDesc.StructureByteStride = 0;

	vbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		NULL,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_IndexCount = icount;

		pIList[j] = indexList[j];

	irData.SysMemPitch = 0;

			break;

		{

}

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pDepthStencilView);

			case SDLK_UP:

		&m_pImmediateContext);





	m_Viewport.TopLeftX = 0;

	//頂点シェーダー生成



	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	bool ret = tinyobj::LoadObj(

	scDesc.BufferDesc.Width = rect.Width();

	m_VertexCount = vcount;



	std::string inputfile = "test.obj";

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		exit(1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pIndexBuffer = NULL;

}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include <iostream>

	SAFE_RELEASE(m_pImmediateContext);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	scDesc.OutputWindow = hwnd;

	return 0;

	scDesc.SampleDesc.Count = 1;

	UINT flags = 0;

	}



int SEGMENT = 36;

	scDesc.Windowed = TRUE;

	{

		KEY_PRESS_SURFACE_DOWN,





		SDL_RenderPresent(ren);

		exit(1);

}
	SAFE_RELEASE(m_pDevice);

			index_offset += num_vertices;

		SDL_RenderCopy(ren, tex, NULL, NULL);



				indexlist.push_back(index);



	//Key press surfaces constants

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				vertex.push_back(vertex_tmp);

	m_Angle += XMConvertToRadians(1.0f);

				// access to vertex

	Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};



		SDL_RenderPresent(ren);

	irData.SysMemSlicePitch = 0;

	D3D11_BUFFER_DESC cbDesc;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::string inputfile = "test.obj";

		return hr;

 */

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

		return hr;



HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	cbDesc.CPUAccessFlags = 0;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点シェーダー生成



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4X4 projection;



	Release();



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ConstantMatrixBuffer cmb;



	scDesc.Windowed = TRUE;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.StructureByteStride = 0;

{

	SDL_Event e;

};

	txDesc.SampleDesc.Quality = 0;

				break;



	//vector<Vertex> vertex_t;

		size_t index_offset = 0;  // インデントのオフセット



	SDL_Quit();

	hr = D3D11CreateDeviceAndSwapChain(NULL,



			case SDLK_LEFT:

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

	Release();

#include <iostream>

			for (size_t v = 0; v < num_vertices; v++)

	scDesc.OutputWindow = hwnd;

	m_pVertexShader = NULL;

	m_VertexCount = 0;

	WORD* pIList = new WORD[icount];

		else if (e.type == SDL_KEYDOWN)

		// Loop over faces(polygon)



CD3DTest::~CD3DTest()

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (e.type == SDL_QUIT)

struct ConstantMaterial {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#include <iostream>









	scDesc.BufferCount = 1;

HRESULT CD3DTest::Create(HWND hwnd)



	m_pRenderTargetView = NULL;



				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	Vertex* pVList = new Vertex[vcount];

	vector<WORD> indexList;

		m_pImmediateContext->ClearState();





{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#include <iostream>

#include <SDL.h>



	ConstantLight    pntLight; //点光源

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SDL_DestroyTexture(tex);



	//Create Index

HRESULT CD3DTest::Create(HWND hwnd)





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			case SDLK_RIGHT:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	cbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





	delete[] pVList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	{

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pIndexBuffer);

}

	}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		pIList[j] = indexList[j];

		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;

	m_pRenderTargetView = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pVertexShader = NULL;

	SDL_DestroyTexture(tex);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	scDesc.OutputWindow = hwnd;

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.MiscFlags = 0;



	txDesc.MipLevels = 1;

		if (!reader.Error().empty())

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			//Select surfaces based on key press

				break;

		{



	SDL_DestroyRenderer(ren);

	txDesc.SampleDesc.Quality = 0;

	m_IndexCount = 0;

		if (e.type == SDL_QUIT)

	DXGI_SWAP_CHAIN_DESC scDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

HRESULT CD3DTest::Create(HWND hwnd)



	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pMatrixBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		}

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.BufferDesc.Width = rect.Width();



		else if (e.type == SDL_KEYDOWN)

	for (int j = 0; j < icount; j++)

	WORD* pIList = new WORD[icount];



	m_pImmediateContext = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4         eyePos;   //視点座標

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

			//Select surfaces based on key press

		pLevels,



	}

		SDL_RenderPresent(ren);

	if (FAILED(hr))

{



		SDL_RenderPresent(ren);



		}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	if (FAILED(hr))



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

int SEGMENT = 36;

		SDL_RenderPresent(ren);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_TOTAL

	txDesc.CPUAccessFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pSwapChain->Present(0, 0);



		{



	//First we need to start up SDL, and make sure it went ok

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		pVList[i] = vertexlist[i];

		1,

	if (!reader.Warning().empty())

	float    farZ = 100.0f;

	D3D11_BUFFER_DESC ibDesc;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pInputLayout = NULL;

	m_pSwapChain->Present(0, 0);



	{

	//頂点バッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	ConstantLightBuffer clb;

		size_t index_offset = 0;

CD3DTest::~CD3DTest()



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

				indexlist.push_back(index);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		{

				break;



	cbDesc.StructureByteStride = 0;

		&m_pDevice,

		SDL_Delay(1000);

}

		delete[] pIList;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	DXGI_SWAP_CHAIN_DESC scDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	Vertex* pVList = new Vertex[vcount];

		return hr;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pImmediateContext);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	UINT flags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

struct ConstantMatrixBuffer {

		pLevels,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Event e;

	//深度ステンシルバッファ作成

	for (int i = 0; i < 3; i++)

		{

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#include <SDL.h>

	txDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pVertexBuffer = NULL;

				break;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SAFE_RELEASE(m_pTextureView);

		pLevels,

			break;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_FreeSurface(suf);



	return;



		return hr;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

	m_Viewport.TopLeftX = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.eyePos, eye);

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//頂点シェーダー生成

	::GetClientRect(hwnd, &rect);

	auto& shapes = reader.GetShapes();

		if (!ret)

	scDesc.Windowed = TRUE;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



}

	D3D11_BUFFER_DESC cbDesc;

		pLevels,

	m_Viewport.TopLeftY = 0;

	}

		&error,

	m_Viewport.MinDepth = 0.0f;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&attrib,

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	//First we need to start up SDL, and make sure it went ok

		D3D_DRIVER_TYPE_HARDWARE,

		&shapes,

}

	for (size_t s = 0; s < shapes.size(); s++)

}



		m_pImmediateContext->ClearState();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			for (size_t v = 0; v < fv; v++)

	m_pTexture = NULL;

	std::string imagePath = "hello.bmp";

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	ConstantMaterial material; //物体の質感

	}

#endif



	::GetClientRect(hwnd, &rect);

		1,



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&m_pDevice,



	CRect                rect;



	D3D11_SUBRESOURCE_DATA vrData;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				indexlist.push_back(index);

	vrData.SysMemSlicePitch = 0;

	txDesc.Width = rect.Width();

				vertex.push_back(vertex_tmp);

{

{

		if (e.type == SDL_QUIT)

	//Vertex* pVList = new Vertex[vcount];

	m_pSampler = NULL;

		return hr;

#endif

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	m_pIndexBuffer = NULL;

	vrData.pSysMem = &pVList[0];

		pLevels,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pDevice);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

	vbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	//定数バッファ作成

	m_pTexture = NULL;

		SDL_Delay(1000);

}
				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_VertexCount = 0;

	SAFE_RELEASE(m_pIndexBuffer);

#include <iostream>

	cbDesc.StructureByteStride = 0;

	}

			case SDLK_RIGHT:

		delete[] pIList;





		&m_pDevice,

	SAFE_RELEASE(m_pTexture);

	float    farZ = 100.0f;

			case SDLK_DOWN:

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	SDL_Quit();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ConstantMatrixBuffer cmb;



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (!error.empty())

	scDesc.BufferDesc.Height = rect.Height();



	txDesc.ArraySize = 1;

			exit(1);

#include <iostream>

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		// Loop over faces(polygon)

	for (int i = 0; i < vcount; i++)







		return hr;

	txDesc.Height = rect.Height();



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pRenderTargetView = NULL;



	return;

		delete[] pVList;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	txDesc.SampleDesc.Quality = 0;

	ConstantLightBuffer clb;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

				vertex.push_back(vertex_tmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.StructureByteStride = 0;

		NULL,

	vector<Vertex> vertexlist;



	std::vector<tinyobj::material_t> materials;

};

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pLightBuffer = NULL;

	}



				vertex.push_back(vertex_tmp);

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pIndexBuffer);

	}

			{



	m_IndexCount = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_TOTAL

	m_pIndexBuffer = NULL;

		SDL_Delay(1000);





struct ConstantLightBuffer {

	}



int main(int, char**)

	SDL_Quit();



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	SAFE_RELEASE(m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

			index_offset += num_vertices;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			case SDLK_RIGHT:

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return 1;

	//First we need to start up SDL, and make sure it went ok

		{





	cbDesc.MiscFlags = 0;



	ConstantMaterial material; //物体の質感

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4         ambient;  //環境光(r,g,b)

	CRect                rect;

			}

	WORD   icount = indexList.size();

	D3D11_BUFFER_DESC ibDesc;

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pIndexBuffer = NULL;

		R"(cube.obj)");

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

		&attrib,

	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			default:

			case SDLK_DOWN:

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Count = 1;

	vbDesc.StructureByteStride = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ConstantLightBuffer clb;

	for (int i = 0; i < 3; i++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

struct ConstantMaterial {

	m_pVertexBuffer = NULL;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	SAFE_RELEASE(m_pSwapChain);





}

		SDL_RenderCopy(ren, tex, NULL, NULL);



int main(int, char**)

	ID3D11Texture2D* pBackBuffer;

	m_pDepthStencilTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pVertexShader = NULL;

	WORD* pIList = new WORD[icount];

				break;

	}

	scDesc.Windowed = TRUE;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User presses a key

		1,

void CD3DTest::Release()

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))



	}

			case SDLK_RIGHT:

		{



	enum KeyPressSurfaces

		&error,

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

	cbDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	//Clean up our objects and quit

		return hr;

		size_t index_offset = 0;

	if (FAILED(hr))

				// access to vertex

				// access to vertex



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 view;

			{





		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pTexture);

	{



		D3D_DRIVER_TYPE_HARDWARE,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

int main(int, char**)



	txDesc.Height = rect.Height();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点レイアウト作成

		pVList[i] = vertexlist[i];





	SAFE_RELEASE(m_pDevice);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		D3D11_SDK_VERSION,

	//インデックスバッファ作成





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			}

	m_pPixelShader = NULL;

		//User requests quit

		{

	//vector<Vertex> vertex_t;

#ifdef _DEBUG



};

		return hr;

	SDL_DestroyRenderer(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC cbDesc;



	D3D11_BUFFER_DESC ibDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				WORD index = idx.vertex_index;



		delete[] pVList;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





		&level,

			{

	irData.SysMemSlicePitch = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.MinDepth = 0.0f;

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string error;

		delete[] pVList;

};



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit

 */

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;







	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	for (const auto& shape : shapes)

				tinyobj::real_t ty =

			//Select surfaces based on key press

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT flags = 0;

		pIList[j] = indexList[j];

	m_IndexCount = icount;

		flags,



	m_pSwapChain->Present(0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyWindow(win);

	m_pPixelShader = NULL;

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_LEFT,

		//User requests quit

CD3DTest::~CD3DTest()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

	{



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;

void CD3DTest::Render()

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

	//First we need to start up SDL, and make sure it went ok



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//頂点シェーダー生成

			// Loop over vertices in the face.

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	auto& shapes = reader.GetShapes();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#define TINYOBJLOADER_IMPLEMENTATION

	Vertex* pVList = new Vertex[vcount];





	m_IndexCount = icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	tinyobj::ObjReader reader;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pDepthStencilView = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		&m_pDevice,

{

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4X4 world;

	if (!error.empty())

	UINT strides = sizeof(Vertex);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	auto& materials = reader.GetMaterials();

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	//深度ステンシルバッファ作成

};

	dsDesc.Texture2D.MipSlice = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::~CD3DTest()

	{

	SAFE_RELEASE(m_pDevice);

 * Lesson 1: Hello World!

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	{

	//頂点バッファ作成



		//User presses a key

	vrData.SysMemPitch = 0;

	XMFLOAT4X4 view;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	ibDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

{

		SDL_Delay(1000);

				indexlist.push_back(idx.vertex_index);

	float    nearZ = 0.1f;

			default:

	scDesc.Windowed = TRUE;



				indexlist.push_back(idx.vertex_index);

		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t ty =

		SDL_RenderPresent(ren);

		if (!reader.Error().empty())

	UINT offsets = 0;





struct ConstantLightBuffer {

	{

				indexlist.push_back(idx.vertex_index);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ConstantMaterial material; //物体の質感

		}

		KEY_PRESS_SURFACE_DEFAULT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#endif

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantMatrixBuffer {

	// Loop over shapes

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



CD3DTest::CD3DTest()

#include <iostream>



		R"(cube.obj)");

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::vector<tinyobj::material_t> materials;

	m_pDepthStencilView = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pMatrixBuffer);

		&m_pImmediateContext);

	D3D11_BUFFER_DESC ibDesc;

	ConstantLightBuffer clb;

	SDL_DestroyWindow(win);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_DOWN,

	std::string imagePath = "hello.bmp";



};

	SAFE_RELEASE(m_pImmediateContext);

	vbDesc.StructureByteStride = 0;

	auto& attrib = reader.GetAttrib();

	auto& materials = reader.GetMaterials();


