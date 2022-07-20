	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//ビューポート設定

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.MaxDepth = 1.0f;

			default:

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantMaterial material; //物体の質感

	enum KeyPressSurfaces

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	dsDesc.Texture2D.MipSlice = 0;

#include "DirectXManager.h"

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			for (size_t v = 0; v < fv; v++)



	m_pRenderTargetView = NULL;

	D3D11_SUBRESOURCE_DATA irData;



	}





	SAFE_RELEASE(m_pDepthStencilTexture);



	if (FAILED(hr))



	}

	// Loop over shapes

	UINT flags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC cbDesc;

	irData.SysMemPitch = 0;

#include <iostream>

		&error,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//頂点シェーダー生成

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	};

				break;

	m_VertexCount = vcount;

			index_offset += fv;

	//Vertex* pVList = new Vertex[vcount];



	for (int i = 0; i < 3; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//Clean up our objects and quit

	if (FAILED(hr))

	};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	m_pIndexBuffer = NULL;

		return hr;



		{

	//vector<Vertex> vertex_t;

	//インデックスバッファ作成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pIndexBuffer = NULL;

	auto& attrib = reader.GetAttrib();

{

};

		return hr;

	vbDesc.StructureByteStride = 0;

	SDL_Event e;

	{



		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.Windowed = TRUE;

};

	m_Viewport.MaxDepth = 1.0f;

	return;

	/*

	for (int i = 0; i < 3; i++)

struct ConstantLight {

			{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		if (e.type == SDL_QUIT)

	cbDesc.StructureByteStride = 0;

struct ConstantMaterial {

	tinyobj::attrib_t attrib;



	{



}

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

			int num_vertices = shape.mesh.num_face_vertices[f];

		&shapes,



void CD3DTest::Release()



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	m_pVertexBuffer = NULL;

	{



	XMFLOAT4         ambient;  //環境光(r,g,b)

	float    nearZ = 0.1f;

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

{

	//ピクセルシェーダー生成

		SDL_Delay(1000);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	UINT offsets = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

struct ConstantLight {

	txDesc.SampleDesc.Quality = 0;



				tinyobj::real_t ty =

		return hr;

	//ピクセルシェーダー生成

	irData.SysMemSlicePitch = 0;

		&m_pImmediateContext);

	SAFE_RELEASE(m_pRenderTargetView);

	{



	vbDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;

int SEGMENT = 36;

	ibDesc.StructureByteStride = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

		NULL,

	if (FAILED(hr))

struct ConstantLight {

		&level,

void CD3DTest::Render()



CD3DTest::~CD3DTest()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

CD3DTest::CD3DTest()

	D3D11_SAMPLER_DESC smpDesc;

	m_pDepthStencilTexture = NULL;

	m_pTextureView = NULL;

	return 0;

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		if (!reader.Error().empty())

		return hr;





		D3D_DRIVER_TYPE_HARDWARE,

	if (SDL_Init(SDL_INIT_VIDEO != 0))



#include <SDL.h>

	m_pVertexBuffer = NULL;

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	std::string error;

struct ConstantMatrixBuffer {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

		{





	return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.pSysMem = &pIList[0];



	float    aspect = m_Viewport.Width / m_Viewport.Height;

			exit(1);

{



	/*



				vertex.push_back(vertex_tmp);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pRenderTargetView = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&materials,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//頂点シェーダー生成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (m_pImmediateContext)

	m_Viewport.TopLeftX = 0;

			case SDLK_UP:



		return hr;

	float    nearZ = 0.1f;

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::vector<tinyobj::material_t> materials;

		&scDesc,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	D3D11_TEXTURE2D_DESC txDesc;

			switch (e.key.keysym.sym)

 * Lesson 1: Hello World!



		return hr;

	}

		return hr;



	vbDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	UINT strides = sizeof(Vertex);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

int SEGMENT = 36;

		KEY_PRESS_SURFACE_DOWN,



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

#include "DirectXManager.h"

	float    fov = XMConvertToRadians(20.0f);

		{

#include <SDL.h>



	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_FreeSurface(bmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pLightBuffer = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

	for (const auto& shape : shapes)



{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;







	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		m_pImmediateContext->ClearState();

				break;



	}*/

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTexture = NULL;

	for (int j = 0; j < icount; j++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#include "DirectXManager.h"



};



	Vertex* pVList = new Vertex[vcount];

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	return 0;

	//頂点バッファ作成

		&materials,

	//ビューポート設定

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t ty =



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	LoadObj(vertexlist, indexList);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			exit(1);

#include <iostream>

		}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	pBackBuffer->Release();



	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_RIGHT,

			}

	SAFE_RELEASE(m_pIndexBuffer);

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				vertex.push_back(vertex_tmp);

	std::string inputfile = "test.obj";





	SAFE_RELEASE(m_pInputLayout);

				WORD index = idx.vertex_index;







			exit(1);

	//深度ステンシルバッファ作成

				break;

{

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	//Create Index



		KEY_PRESS_SURFACE_TOTAL

	cbDesc.CPUAccessFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			{

}

	WORD   icount = indexList.size();

	cbDesc.MiscFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&shapes,

		pIList[j] = indexList[j];

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

CD3DTest::CD3DTest()

	tinyobj::attrib_t attrib;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		1,







				vertex.push_back(vertex_tmp);



			}

	if (FAILED(hr))



	SAFE_RELEASE(m_pTexture);

	m_pSwapChain->Present(0, 0);

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		size_t index_offset = 0;





	irData.pSysMem = &pIList[0];



	XMFLOAT4X4 view;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pIndexBuffer);



		if (!ret)

	m_pPixelShader = NULL;

	SDL_Event e;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		D3D_DRIVER_TYPE_HARDWARE,

using std::cout; using std::endl;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);



				vertex.push_back(vertex_tmp);

int main(int, char**)

		KEY_PRESS_SURFACE_DOWN,

	if (!error.empty())

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		//User requests quit





		&scDesc,



	{

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pRenderTargetView = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

};



		KEY_PRESS_SURFACE_TOTAL



			// Loop over vertices in the face.



}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		if (!ret)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	/*







	D3D11_SAMPLER_DESC smpDesc;

	ID3D11Texture2D* pBackBuffer;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	tinyobj::attrib_t attrib;

	//vector<WORD> index_t;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT offsets = 0;

			{

		delete[] pVList;





	if (FAILED(hr))



	//Create Index

	SDL_DestroyTexture(tex);

	ID3D11Texture2D* pBackBuffer;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	tinyobj::ObjReader reader;

}

	m_Viewport.Height = (FLOAT)rect.Height();



		return hr;

	ibDesc.StructureByteStride = 0;

	{

				break;

};

	XMFLOAT4         eyePos;   //視点座標



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	m_pLightBuffer = NULL;

	D3D_FEATURE_LEVEL level;





	m_Viewport.TopLeftX = 0;

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pTextureView);

	txDesc.SampleDesc.Quality = 0;

		if (!reader.Error().empty())

CD3DTest::CD3DTest()

	SDL_FreeSurface(suf);

	SDL_Quit();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Height = rect.Height();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

		D3D_DRIVER_TYPE_HARDWARE,

	{

	//Create Index



	SAFE_RELEASE(m_pImmediateContext);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{



{

	//First we need to start up SDL, and make sure it went ok

		pLevels,

#endif

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;











	//頂点シェーダー生成

	auto& attrib = reader.GetAttrib();

	//First we need to start up SDL, and make sure it went ok

	txDesc.MiscFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);







	DXGI_SWAP_CHAIN_DESC scDesc;

	}

	SAFE_RELEASE(m_pLightBuffer);

	return 0;



	cbDesc.StructureByteStride = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))



	while (SDL_PollEvent(&e) != 0)

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (size_t s = 0; s < shapes.size(); s++)



{

	m_pDepthStencilView = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

			}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	tinyobj::ObjReaderConfig reader_config;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	XMFLOAT4X4 projection;

	cbDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;

	delete[] pIList;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	dsDesc.Format = txDesc.Format;

{

			case SDLK_UP:

	}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		pIList[j] = indexList[j];

	//頂点レイアウト作成





		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_UP,

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pIndexBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.TopLeftX = 0;

		return hr;

	{

	if (!error.empty())

		pLevels,



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexShader = NULL;

	}



	SDL_DestroyRenderer(ren);

	m_pDevice = NULL;

	auto& attrib = reader.GetAttrib();

			// Loop over vertices in the face.

	scDesc.Windowed = TRUE;

	}

	m_pInputLayout = NULL;

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

		pIList[j] = indexList[j];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	auto& materials = reader.GetMaterials();

	}

	txDesc.MipLevels = 1;

#include <iostream>







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

	//頂点レイアウト作成

	}

		return hr;

	m_Viewport.MinDepth = 0.0f;



	//インデックスバッファ作成

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

int main(int, char**)

	std::string inputfile = "test.obj";

	}

	for (const auto& shape : shapes)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	Release();

		return hr;

	SAFE_RELEASE(m_pDevice);

	if (!reader.Warning().empty())

	vbDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;



	}

}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	std::vector<tinyobj::shape_t> shapes;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include <SDL.h>

	vrData.SysMemSlicePitch = 0;

struct ConstantMatrixBuffer {



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderPresent(ren);

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

			{

	SDL_Event e;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			{

	m_pInputLayout = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	// Loop over shapes

	//深度ステンシルバッファ作成

			default:

	delete[] pIList;

	if (FAILED(hr))

	irData.SysMemPitch = 0;



	D3D11_BUFFER_DESC cbDesc;

	UINT flags = 0;

	dsDesc.Format = txDesc.Format;



	enum KeyPressSurfaces

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pVertexShader = NULL;

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.Height = rect.Height();

	scDesc.OutputWindow = hwnd;

	D3D11_BUFFER_DESC ibDesc;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



using std::cout; using std::endl;



	LoadObj(vertexlist, indexList);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;







				indexlist.push_back(idx.vertex_index);





	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		exit(1);

	pBackBuffer->Release();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

		NULL,

	//Clean up our objects and quit

	}

	SDL_FreeSurface(suf);

{





		SDL_Delay(1000);

	m_pTexture = NULL;

	m_pVertexShader = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#define TINYOBJLOADER_IMPLEMENTATION

};

	SDL_DestroyWindow(win);

	vector<WORD> indexList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	CRect                rect;

CD3DTest::~CD3DTest()

	D3D11_BUFFER_DESC vbDesc;

		//User requests quit

		if (e.type == SDL_QUIT)

 * Lesson 1: Hello World!

	dsDesc.Format = txDesc.Format;

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyTexture(tex);

	tinyobj::ObjReader reader;

				break;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)



	D3D11_SUBRESOURCE_DATA vrData;

		return hr;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return 0;

		{

		KEY_PRESS_SURFACE_LEFT,

	m_IndexCount = 0;

	float    nearZ = 0.1f;

	}



		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		KEY_PRESS_SURFACE_DOWN,

			{

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4X4 view;

struct ConstantMaterial {







	//vector<WORD> index_t;



	irData.SysMemSlicePitch = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//First we need to start up SDL, and make sure it went ok

	//ビューポート設定

	WORD   icount = indexList.size();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			}

		return hr;

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pTexture = NULL;

};





#include <SDL.h>

};



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;



struct ConstantMaterial {

		if (!ret)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	irData.SysMemSlicePitch = 0;

	tinyobj::ObjReaderConfig reader_config;

};

	if (FAILED(hr))



	//頂点バッファ作成

	//頂点シェーダー生成

		return hr;

		pLevels,

		return hr;

		pIList[j] = indexList[j];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pLightBuffer = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_Angle += XMConvertToRadians(1.0f);



	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			}

		if (e.type == SDL_QUIT)



	};

	//定数バッファ作成

	SDL_Quit();

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4X4 view;





		{



	return 0;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pSwapChain = NULL;

		{

		NULL,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	{

		KEY_PRESS_SURFACE_DEFAULT,

		}

	auto& materials = reader.GetMaterials();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	SAFE_RELEASE(m_pDevice);

				vertex.push_back(vertex_tmp);

	D3D11_SAMPLER_DESC smpDesc;



	SDL_Quit();

		cout << "SDL_INIT_ERROR" << endl;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Count = 1;

	SDL_FreeSurface(suf);



	m_Viewport.Height = (FLOAT)rect.Height();



	vrData.SysMemSlicePitch = 0;



	}

	SAFE_RELEASE(m_pSampler);

			break;

				break;

}

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.MiscFlags = 0;

	m_pSampler = NULL;

	SDL_Quit();

		KEY_PRESS_SURFACE_DEFAULT,

				break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				break;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SAFE_RELEASE(m_pImmediateContext);

	m_pTextureView = NULL;

	dsDesc.Format = txDesc.Format;

	m_pSwapChain = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyTexture(tex);

		return hr;

		pIList[j] = indexList[j];

			{

	//Vertex* pVList = new Vertex[vcount];

		if (!ret)

	//頂点シェーダー生成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	scDesc.BufferDesc.Height = rect.Height();

	irData.SysMemSlicePitch = 0;

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyWindow(win);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			for (size_t v = 0; v < num_vertices; v++)

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	cbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);



				indexlist.push_back(index);



				tinyobj::real_t ty =

	if (FAILED(hr))



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	SDL_DestroyTexture(tex);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	delete[] pVList;

			case SDLK_RIGHT:

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.StructureByteStride = 0;



#include <SDL.h>



	ConstantLightBuffer clb;

	txDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSwapChain = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			for (size_t v = 0; v < fv; v++)

	{

	m_Viewport.TopLeftX = 0;

	ibDesc.MiscFlags = 0;





	D3D11_BUFFER_DESC ibDesc;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pIndexBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		SDL_RenderPresent(ren);

	if (!reader.Warning().empty())

	DXGI_SWAP_CHAIN_DESC scDesc;

				vertex.push_back(vertex_tmp);

		SDL_RenderClear(ren);

	scDesc.OutputWindow = hwnd;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_DOWN:

	m_Viewport.MinDepth = 0.0f;

	pBackBuffer->Release();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			default:

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				break;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 pos;               //座標(x,y,z)



			index_offset += fv;



	tinyobj::attrib_t attrib;

			case SDLK_RIGHT:



		{



	m_pSwapChain->Present(0, 0);



				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_RIGHT,



	m_Viewport.Height = (FLOAT)rect.Height();

{

	ConstantMatrixBuffer cmb;

		//User presses a key

	}

#include "DirectXManager.h"

	for (const auto& shape : shapes)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		KEY_PRESS_SURFACE_RIGHT,

#include <iostream>



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ConstantMatrixBuffer cmb;





			{





	//ビューポート設定



#include <iostream>

	irData.SysMemPitch = 0;

	};

	SDL_FreeSurface(suf);

				vertex.push_back(vertex_tmp);

#include <iostream>

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_TOTAL

		else if (e.type == SDL_KEYDOWN)

	if (m_pImmediateContext)

};

	SDL_DestroyRenderer(ren);



	SAFE_RELEASE(m_pVertexShader);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			{

	ConstantMaterial material; //物体の質感

	m_pMatrixBuffer = NULL;

	m_pSwapChain->Present(0, 0);

	SDL_DestroyRenderer(ren);



			}

				break;

	}



	XMFLOAT4X4 view;





		SDL_Delay(1000);

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

int SEGMENT = 36;

	irData.pSysMem = &pIList[0];

		SDL_RenderClear(ren);

	//First we need to start up SDL, and make sure it went ok

			break;

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



{

{

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_Viewport.TopLeftY = 0;

			exit(1);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		pIList[j] = indexList[j];

	}

	{

	SDL_DestroyWindow(win);



		// Loop over faces(polygon)



		KEY_PRESS_SURFACE_RIGHT,

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	m_Viewport.Width = (FLOAT)rect.Width();

	m_VertexCount = 0;

		}

	txDesc.SampleDesc.Count = 1;

CD3DTest::CD3DTest()

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Viewport.MinDepth = 0.0f;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



				// access to vertex



		exit(1);

				tinyobj::real_t ty =

				tinyobj::real_t ty =

	dsDesc.Format = txDesc.Format;

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4X4 view;



				break;

		&scDesc,

	SAFE_RELEASE(m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)

};

		1,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		NULL,

	SAFE_RELEASE(m_pInputLayout);

#include <SDL.h>

	vector<Vertex> vertexlist;

			case SDLK_LEFT:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pInputLayout = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pIndexBuffer);

		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		}

	std::string imagePath = "hello.bmp";

	m_pVertexShader = NULL;

		D3D11_SDK_VERSION,

	XMFLOAT4 specular;          //反射(r,g,b)

			// Loop over vertices in the face.



		{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_RIGHT:

				vertex.push_back(vertex_tmp);

		&materials,

	}

int main(int, char**)

	if (m_pImmediateContext)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pLightBuffer);

	m_IndexCount = 0;

				WORD index = idx.vertex_index;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

HRESULT CD3DTest::Create(HWND hwnd)

		cout << "SDL_INIT_ERROR" << endl;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ID3D11Texture2D* pBackBuffer;



	delete[] pIList;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点シェーダー生成

	}





/*

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.Width = rect.Width();

				break;



	HRESULT              hr;

}



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		}

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	pBackBuffer->Release();

			int num_vertices = shape.mesh.num_face_vertices[f];

#include <SDL.h>

		1,

		if (e.type == SDL_QUIT)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	CRect                rect;

		&scDesc,

	SAFE_RELEASE(m_pLightBuffer);

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_DestroyWindow(win);

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	tinyobj::ObjReader reader;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t tx =

		SDL_RenderClear(ren);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return;

#include <iostream>



int SEGMENT = 36;

	txDesc.SampleDesc.Quality = 0;

	std::vector<tinyobj::material_t> materials;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_BUFFER_DESC cbDesc;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



			// Loop over vertices in the face.



		}

#define TINYOBJLOADER_IMPLEMENTATION

{

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	cbDesc.MiscFlags = 0;

	m_pVertexBuffer = NULL;

	SDL_DestroyTexture(tex);

		if (!reader.Error().empty())



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4         eyePos;   //視点座標

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.CPUAccessFlags = 0;

	for (int i = 0; i < vcount; i++)

		return hr;

	cbDesc.StructureByteStride = 0;

 */

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	std::string inputfile = "test.obj";

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Event e;

		pVList[i] = vertexlist[i];

	D3D11_SUBRESOURCE_DATA vrData;



	vbDesc.CPUAccessFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC ibDesc;

	D3D_FEATURE_LEVEL level;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pPixelShader = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SAFE_RELEASE(m_pDepthStencilTexture);

	m_IndexCount = 0;

#endif

		//User requests quit

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.MinDepth = 0.0f;

	m_pVertexBuffer = NULL;

	ibDesc.MiscFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_DestroyTexture(tex);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	}

	D3D11_SUBRESOURCE_DATA vrData;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		SDL_RenderClear(ren);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//Clean up our objects and quit





	SDL_Event e;

	//Create Index

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

	HRESULT              hr;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderClear(ren);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 specular;          //反射(r,g,b)

	::GetClientRect(hwnd, &rect);

		{



	//Key press surfaces constants



	D3D11_BUFFER_DESC vbDesc;

}

#define TINYOBJLOADER_IMPLEMENTATION



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}



	if (FAILED(hr))





}
	XMFLOAT4X4 world;

	D3D11_BUFFER_DESC vbDesc;

int SEGMENT = 36;

	}

#ifdef _DEBUG

				tinyobj::real_t ty =

			{



		&scDesc,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))



	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexShader = NULL;

	{

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext = NULL;

void CD3DTest::Release()

	scDesc.BufferDesc.Height = rect.Height();

}

	if (FAILED(hr))

		SDL_RenderClear(ren);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSwapChain = NULL;

	ibDesc.MiscFlags = 0;

	txDesc.MiscFlags = 0;

	scDesc.Windowed = TRUE;

{

	m_Viewport.TopLeftY = 0;

		size_t index_offset = 0;  // インデントのオフセット

	m_pSwapChain->Present(0, 0);

/*



	XMFLOAT4 pos;               //座標(x,y,z)

				break;

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		delete[] pVList;

		KEY_PRESS_SURFACE_UP,

	scDesc.BufferDesc.Width = rect.Width();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;













				WORD index = idx.vertex_index;



}

};

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//頂点レイアウト作成

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pPixelShader = NULL;



	if (!reader.ParseFromFile(inputfile, reader_config))

				break;

	SDL_Quit();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

#include <iostream>



	//ビューポート設定

		SDL_Delay(1000);

	ibDesc.MiscFlags = 0;

		return hr;

	scDesc.SampleDesc.Quality = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

CD3DTest::~CD3DTest()

	cbDesc.StructureByteStride = 0;

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#include <iostream>

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	scDesc.BufferCount = 1;

	txDesc.SampleDesc.Quality = 0;



	//vector<Vertex> vertex_t;

	cbDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	for (int j = 0; j < icount; j++)

	}

int main(int, char**)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			case SDLK_UP:

			//Select surfaces based on key press

	delete[] pVList;

	vector<Vertex> vertexlist;

struct ConstantMaterial {

	SAFE_RELEASE(m_pLightBuffer);



CD3DTest::CD3DTest()

int SEGMENT = 36;

	if (FAILED(hr))

	if (FAILED(hr))

			switch (e.key.keysym.sym)







	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	/*



				break;

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_TEXTURE2D_DESC txDesc;



	{



		SDL_RenderPresent(ren);

			{

#include <iostream>



{



	//ピクセルシェーダー生成



		// Loop over faces(polygon)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				indexlist.push_back(idx.vertex_index);



	for (int i = 0; i < 3; i++)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_TEXTURE2D_DESC txDesc;

		return 1;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pMatrixBuffer);

		R"(cube.obj)");

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferCount = 1;

	if (!error.empty())

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		return hr;

#include <iostream>



	SAFE_RELEASE(m_pDepthStencilTexture);

	irData.pSysMem = &pIList[0];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



void CD3DTest::Render()

	txDesc.Height = rect.Height();

		1,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#include <iostream>

	Release();

};

	WORD   icount = indexList.size();

		&error,



			for (size_t v = 0; v < num_vertices; v++)

	SDL_DestroyRenderer(ren);

	{

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	if (!reader.Warning().empty())

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//テクスチャ読み込み

{

		}

	{

	return;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	tinyobj::ObjReader reader;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		SDL_RenderPresent(ren);

	auto& materials = reader.GetMaterials();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vector<Vertex> vertexlist;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//インデックスバッファ作成

	UINT flags = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

#include <SDL.h>

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_LEFT:

	m_pTexture = NULL;

	SDL_FreeSurface(suf);

	std::string imagePath = "hello.bmp";

struct ConstantLight {



	cbDesc.StructureByteStride = 0;



	m_pSwapChain->Present(0, 0);

		pLevels,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}



	}

	m_VertexCount = 0;

		KEY_PRESS_SURFACE_DOWN,

 * Lesson 1: Hello World!

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		1,

	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (!reader.Warning().empty())

	m_Viewport.TopLeftX = 0;

	dsDesc.Format = txDesc.Format;

};



		&shapes,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_UP:

	scDesc.Windowed = TRUE;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.StructureByteStride = 0;

	pBackBuffer->Release();

			case SDLK_UP:

	cbDesc.CPUAccessFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

		&materials,

int main(int, char**)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	//vector<Vertex> vertex_t;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_DOWN,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				indexlist.push_back(index);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_BUFFER_DESC ibDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	ConstantLightBuffer clb;

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

void CD3DTest::Release()

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pInputLayout = NULL;

		1,



	}

				break;



	//Create Index





	reader_config.mtl_search_path = "./"; // Path to material files

	m_pPixelShader = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string imagePath = "hello.bmp";

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		exit(1);

	if (!reader.Warning().empty())

};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (e.type == SDL_QUIT)

	for (const auto& shape : shapes)



	WORD* pIList = new WORD[icount];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderClear(ren);

CD3DTest::CD3DTest()

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	//ビューポート設定

	//頂点バッファ作成

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

	DXGI_SWAP_CHAIN_DESC scDesc;

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pSampler);

	D3D11_SUBRESOURCE_DATA irData;

	//深度ステンシルバッファ作成

	ibDesc.MiscFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



#ifdef _DEBUG

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	return hr;

	scDesc.BufferCount = 1;

		pIList[j] = indexList[j];





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//定数バッファ作成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4         eyePos;   //視点座標

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#include "DirectXManager.h"

		{

		KEY_PRESS_SURFACE_LEFT,

	auto& materials = reader.GetMaterials();

	{

		}

	tinyobj::ObjReader reader;

	}

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	D3D11_BUFFER_DESC ibDesc;

	txDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			{

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

	m_Angle += XMConvertToRadians(1.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));



	//定数バッファ作成

	txDesc.CPUAccessFlags = 0;

	UINT strides = sizeof(Vertex);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		//User requests quit

	XMFLOAT4 pos;               //座標(x,y,z)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferCount = 1;

		SDL_RenderClear(ren);

};

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				indexlist.push_back(idx.vertex_index);



	vbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		D3D11_SDK_VERSION,

}

		pLevels,



	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

CD3DTest::CD3DTest()

				tinyobj::real_t tx =

	cbDesc.CPUAccessFlags = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	m_IndexCount = 0;



	if (FAILED(hr))

	float    farZ = 100.0f;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	return 0;

		return hr;

	/*

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}

	return 0;

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	if (!error.empty())

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			index_offset += num_vertices;

	//vector<WORD> index_t;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

			case SDLK_RIGHT:

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		pLevels,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Event e;



		delete[] pVList;



	float    fov = XMConvertToRadians(20.0f);

	//Clean up our objects and quit

	pBackBuffer->Release();

	D3D11_BUFFER_DESC ibDesc;



		SDL_RenderPresent(ren);

		&error,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	irData.SysMemPitch = 0;





	if (FAILED(hr))



	vbDesc.StructureByteStride = 0;



struct ConstantMatrixBuffer {

	LoadObj(vertexlist, indexList);



	cbDesc.CPUAccessFlags = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//深度ステンシルバッファ作成



	txDesc.MiscFlags = 0;





	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

{



		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	}

}



	while (SDL_PollEvent(&e) != 0)

	Release();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	};

		m_pImmediateContext->ClearState();

		cout << "SDL_INIT_ERROR" << endl;

	//First we need to start up SDL, and make sure it went ok

 */

		// Loop over faces(polygon)



			case SDLK_LEFT:

	m_VertexCount = vcount;

	if (FAILED(hr))





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	}

	delete[] pVList;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	scDesc.SampleDesc.Count = 1;

			case SDLK_LEFT:

		// Loop over faces(polygon)



	scDesc.SampleDesc.Count = 1;



	cbDesc.CPUAccessFlags = 0;

	ibDesc.StructureByteStride = 0;

	}

		SDL_RenderPresent(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t tx =

	cbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_VertexCount = 0;

	SDL_Quit();

	if (FAILED(hr))

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		return hr;

		else if (e.type == SDL_KEYDOWN)

	dsDesc.Texture2D.MipSlice = 0;

	//頂点バッファ作成

	ibDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

			// Loop over vertices in the face.



			index_offset += num_vertices;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	return 0;



	Release();

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D11_BUFFER_DESC ibDesc;



			for (size_t v = 0; v < num_vertices; v++)

	txDesc.ArraySize = 1;



	txDesc.Width = rect.Width();

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	{

	m_VertexCount = 0;

	m_IndexCount = 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	DXGI_SWAP_CHAIN_DESC scDesc;

			//Select surfaces based on key press

				// access to vertex

	scDesc.BufferCount = 1;



				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	cbDesc.MiscFlags = 0;

	{

		{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_IndexCount = icount;

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

	//ビューポート設定

	ZeroMemory(&dsDesc, sizeof(dsDesc));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}



	m_VertexCount = vcount;

struct ConstantMatrixBuffer {

	{

	//テクスチャ読み込み





	if (FAILED(hr))

	if (FAILED(hr))

#include <iostream>





	enum KeyPressSurfaces



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{



		}

			{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pPixelShader = NULL;

				break;

		if (!ret)

	ID3D11Texture2D* pBackBuffer;

	irData.pSysMem = &pIList[0];

	scDesc.SampleDesc.Quality = 0;

		&attrib,

	if (FAILED(hr))



	scDesc.Windowed = TRUE;

CD3DTest::CD3DTest()





	SAFE_RELEASE(m_pInputLayout);

	txDesc.MipLevels = 1;

	vbDesc.CPUAccessFlags = 0;



		}

				vertex.push_back(vertex_tmp);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext = NULL;

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

 * Lesson 1: Hello World!

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::string imagePath = "hello.bmp";

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		R"(cube.obj)");

	if (FAILED(hr))

		&m_pSwapChain,

		return hr;

	cbDesc.CPUAccessFlags = 0;

	WORD   icount = indexList.size();

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DEFAULT,







		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

		}

{

	WORD* pIList = new WORD[icount];

		&m_pSwapChain,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

	SAFE_RELEASE(m_pTexture);

#include <iostream>



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			}

	}*/

	auto& shapes = reader.GetShapes();



		SDL_RenderCopy(ren, tex, NULL, NULL);

	return;

				// access to vertex

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4X4 projection;



				vertex.push_back(vertex_tmp);



	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	delete[] pVList;



	SDL_DestroyRenderer(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_IndexCount = icount;

	SAFE_RELEASE(m_pTexture);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//Create Index

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	};

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_DOWN,



				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		SDL_Delay(1000);

			case SDLK_LEFT:

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.TopLeftY = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.StructureByteStride = 0;

void CD3DTest::Release()

		return hr;

/*



	//インデックスバッファ作成

	txDesc.MiscFlags = 0;

	m_pLightBuffer = NULL;





	if (!error.empty())

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vbDesc.CPUAccessFlags = 0;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

void CD3DTest::Release()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;



	m_pIndexBuffer = NULL;

	auto& materials = reader.GetMaterials();

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			index_offset += fv;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		//User requests quit

		return hr;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&materials,

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyWindow(win);

}

		size_t index_offset = 0;

};

	SAFE_RELEASE(m_pSampler);

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pImmediateContext);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

	//インデックスバッファ作成



		flags,



	//ビューポート設定



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				// access to vertex

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.SampleDesc.Quality = 0;

		if (!ret)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	irData.pSysMem = &pIList[0];



	scDesc.SampleDesc.Count = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	if (FAILED(hr))

	//インデックスバッファ作成

	irData.SysMemPitch = 0;

				// access to vertex

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pPixelShader);

	irData.pSysMem = &pIList[0];

	m_pIndexBuffer = NULL;

	txDesc.Width = rect.Width();



	{

{

#include <iostream>

	{

	Release();



			case SDLK_DOWN:



	return hr;

HRESULT CD3DTest::Create(HWND hwnd)

{

		SDL_RenderClear(ren);

			case SDLK_DOWN:



	//Create Index

#include "DirectXManager.h"

	if (FAILED(hr))



	std::vector<tinyobj::shape_t> shapes;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_DEFAULT,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



		KEY_PRESS_SURFACE_UP,

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

}

#include <iostream>

	SDL_Event e;

	m_pTexture = NULL;

	//深度ステンシルバッファ作成

		delete[] pVList;

			case SDLK_LEFT:







	m_pVertexBuffer = NULL;

			case SDLK_RIGHT:

	Release();

	//頂点バッファ作成

			}

				// access to vertex



		return 1;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	std::string inputfile = "test.obj";

	// Loop over shapes



	//インデックスバッファ作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SAFE_RELEASE(m_pDevice);

		{

	XMStoreFloat4(&clb.ambient, lightAmbient);

		{

	ibDesc.StructureByteStride = 0;



				break;

 * Lesson 1: Hello World!

	m_Viewport.Width = (FLOAT)rect.Width();



		1,

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	std::vector<tinyobj::material_t> materials;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.MiscFlags = 0;

				break;

	scDesc.OutputWindow = hwnd;

	m_pInputLayout = NULL;

};

/*

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	}



}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pImmediateContext);





		return hr;

		return hr;

	m_pVertexShader = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

{



	float    farZ = 100.0f;

	txDesc.Usage = D3D11_USAGE_DEFAULT;





	m_pSampler = NULL;

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	D3D11_BUFFER_DESC cbDesc;

		{



	};

		&materials,

};

	{

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



				indexlist.push_back(index);

	{

	std::string error;

	//インデックスバッファ作成

		&shapes,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferCount = 1;

		return 1;

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_RenderClear(ren);



		return 1;

	std::vector<tinyobj::material_t> materials;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Quit();

	D3D11_BUFFER_DESC cbDesc;

 */

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

int main(int, char**)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	//First we need to start up SDL, and make sure it went ok

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	irData.pSysMem = &pIList[0];

	m_pSampler = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//テクスチャ読み込み



	WORD   icount = indexList.size();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	D3D11_BUFFER_DESC ibDesc;

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pPixelShader);



			{

		&error,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pSampler);

		return hr;

	LoadObj(vertexlist, indexList);

}

	vrData.pSysMem = &pVList[0];

	XMFLOAT4X4 world;

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			default:

		&shapes,





	vbDesc.MiscFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	Release();

	{

	UINT strides = sizeof(Vertex);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pTexture);

			case SDLK_UP:



		{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	while (SDL_PollEvent(&e) != 0)

#ifdef _DEBUG

	SAFE_RELEASE(m_pDevice);



{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	LoadObj(vertexlist, indexList);

	vrData.pSysMem = &pVList[0];

	m_pDepthStencilTexture = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



int main(int, char**)

};

	//ビューポート設定

#endif

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		&attrib,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;



		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

	//Create Index

		&m_pDevice,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		size_t index_offset = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,





	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);



		return hr;

	SAFE_RELEASE(m_pTextureView);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//Clean up our objects and quit

			index_offset += fv;

int main(int, char**)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}*/

	::GetClientRect(hwnd, &rect);

	}

};

	vbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;

				tinyobj::real_t tx =

				indexlist.push_back(idx.vertex_index);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pTexture = NULL;

		}

	SDL_Event e;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//ピクセルシェーダー生成

	};



#include <iostream>

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;



	m_Viewport.TopLeftY = 0;

	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t tx =

	HRESULT              hr;



		return hr;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		flags,

	//定数バッファ作成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_UP:

	if (FAILED(hr))

				tinyobj::real_t ty =

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

#include "DirectXManager.h"

		if (!reader.Error().empty())

	ID3D11Texture2D* pBackBuffer;





	UINT strides = sizeof(Vertex);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return hr;

	ConstantMatrixBuffer cmb;

struct ConstantLight {



	m_pInputLayout = NULL;

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	enum KeyPressSurfaces

	//Key press surfaces constants

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SAFE_RELEASE(m_pTexture);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				break;

struct ConstantMaterial {

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Quit();

			// Loop over vertices in the face.



	vbDesc.MiscFlags = 0;

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pVertexBuffer);



		&m_pDevice,

		if (!ret)

	txDesc.Width = rect.Width();

	std::string inputfile = "test.obj";

	//頂点バッファ作成

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	if (m_pImmediateContext)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pPixelShader = NULL;



	return 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t ty =

	//Clean up our objects and quit

			case SDLK_LEFT:



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	auto& shapes = reader.GetShapes();



				break;

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pSampler);



				break;

void CD3DTest::Release()

	txDesc.MiscFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

}



		SDL_Delay(1000);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	HRESULT              hr;



	scDesc.BufferDesc.Width = rect.Width();

			{

		}

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

			default:

	auto& shapes = reader.GetShapes();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_RenderClear(ren);

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}


			case SDLK_RIGHT:

	m_pTexture = NULL;

		&shapes,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	vbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		SDL_RenderClear(ren);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pLightBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	enum KeyPressSurfaces

	if (FAILED(hr))



	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.TopLeftY = 0;



	ConstantLight    pntLight; //点光源



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pImmediateContext);



};

		NULL,

	//定数バッファ作成

	SAFE_RELEASE(m_pDevice);

		return hr;

	//vector<WORD> index_t;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t ty =

{



	HRESULT              hr;

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	{

#include <iostream>

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)



				WORD index = idx.vertex_index;

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&materials,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderPresent(ren);

		SDL_Delay(1000);



	XMFLOAT4X4 projection;

	return 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				indexlist.push_back(index);

	//First we need to start up SDL, and make sure it went ok

	CRect                rect;

		D3D_DRIVER_TYPE_HARDWARE,



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

	SAFE_RELEASE(m_pMatrixBuffer);



		&level,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	//vector<Vertex> vertex_t;



		{

	HRESULT              hr;

};

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pTextureView);

		{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	vrData.SysMemSlicePitch = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//インデックスバッファ作成

		&shapes,



}



	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_DEFAULT,

#include <iostream>

#include <SDL.h>

	LoadObj(vertexlist, indexList);

	XMFLOAT4X4 world;



	txDesc.MipLevels = 1;

		&m_pSwapChain,

	m_pMatrixBuffer = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.CPUAccessFlags = 0;

};

	vrData.SysMemSlicePitch = 0;







	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		KEY_PRESS_SURFACE_RIGHT,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		//User requests quit

	//インデックスバッファ作成

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	tinyobj::ObjReaderConfig reader_config;

			{

	};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				tinyobj::real_t ty =

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

		}

	std::vector<tinyobj::shape_t> shapes;

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_BUFFER_DESC ibDesc;







{

#ifdef _DEBUG

	irData.pSysMem = &pIList[0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			default:

}



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	for (int i = 0; i < vcount; i++)

			{

	UINT flags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Quit();

				break;

	std::string imagePath = "hello.bmp";

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		NULL,

	::GetClientRect(hwnd, &rect);

			{

	scDesc.Windowed = TRUE;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;

 */

	std::vector<tinyobj::material_t> materials;

				indexlist.push_back(idx.vertex_index);

			{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_IndexCount = 0;

};

	{



		return hr;

	delete[] pIList;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_RenderClear(ren);



	D3D11_SUBRESOURCE_DATA vrData;

};

				break;

	std::string imagePath = "hello.bmp";

		}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;

	std::string inputfile = "test.obj";

#ifdef _DEBUG

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.ArraySize = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return 0;

		return hr;

	irData.pSysMem = &pIList[0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			break;

	txDesc.SampleDesc.Quality = 0;



	m_Viewport.MaxDepth = 1.0f;

	}

		KEY_PRESS_SURFACE_TOTAL



}
					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}



using std::cout; using std::endl;



	/*

struct ConstantLight {



	m_Viewport.TopLeftX = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	//Clean up our objects and quit

	vector<WORD> indexList;

	std::string error;

			switch (e.key.keysym.sym)

	m_pImmediateContext = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	}

	//テクスチャ読み込み



	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	return hr;

	SAFE_RELEASE(m_pInputLayout);

};

	vrData.SysMemPitch = 0;

	m_pTextureView = NULL;

	delete[] pVList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//テクスチャ読み込み



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	delete[] pIList;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{





	SAFE_RELEASE(m_pTextureView);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	float    farZ = 100.0f;

struct ConstantMaterial {





	UINT strides = sizeof(Vertex);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		KEY_PRESS_SURFACE_LEFT,

#include "DirectXManager.h"

	//頂点レイアウト作成

	UINT strides = sizeof(Vertex);

		SDL_RenderClear(ren);



	}

	}



	dsDesc.Texture2D.MipSlice = 0;

				break;

	// Loop over shapes

	return 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&m_pImmediateContext);

		KEY_PRESS_SURFACE_DOWN,



	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.Height = rect.Height();

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.ArraySize = 1;

{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//vector<Vertex> vertex_t;



	m_pLightBuffer = NULL;

	/*

		return hr;

{

struct ConstantLightBuffer {

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	::GetClientRect(hwnd, &rect);

	cbDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			}

	std::vector<tinyobj::material_t> materials;

	reader_config.mtl_search_path = "./"; // Path to material files

		// Loop over faces(polygon)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	Release();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_IndexCount = icount;

	m_VertexCount = 0;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			case SDLK_DOWN:

	Release();

	//Clean up our objects and quit

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.CPUAccessFlags = 0;



		SDL_RenderClear(ren);

	vector<Vertex> vertexlist;

	{

	delete[] pIList;

	cbDesc.StructureByteStride = 0;

#ifdef _DEBUG

};



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		pIList[j] = indexList[j];

{

};

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyRenderer(ren);

	{



	//First we need to start up SDL, and make sure it went ok



	//頂点バッファ作成

#include <iostream>

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pInputLayout);

	auto& shapes = reader.GetShapes();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	if (!reader.Warning().empty())



	{

	//深度ステンシルバッファ作成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_TOTAL

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_VertexCount = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pDepthStencilView = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pMatrixBuffer = NULL;



	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};

	m_pLightBuffer = NULL;

	if (FAILED(hr))

		SDL_Delay(1000);



		size_t index_offset = 0;

			index_offset += fv;

				break;



		{







					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	scDesc.SampleDesc.Count = 1;

	std::string error;



	return;





	for (int i = 0; i < vcount; i++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//vector<Vertex> vertex_t;

	{

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{





	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

		return hr;



	if (FAILED(hr))

		{

	//vector<WORD> index_t;

	vector<Vertex> vertexlist;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_LEFT,

	m_pSwapChain = NULL;

	for (int j = 0; j < icount; j++)

	m_Viewport.Height = (FLOAT)rect.Height();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//テクスチャ読み込み

	m_Viewport.MinDepth = 0.0f;

void CD3DTest::Release()

	std::string inputfile = "test.obj";

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_SAMPLER_DESC smpDesc;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





#define TINYOBJLOADER_IMPLEMENTATION



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

int main(int, char**)

	}

				// access to vertex

	}

		&level,

	cbDesc.StructureByteStride = 0;

int SEGMENT = 36;

	if (FAILED(hr))

		&materials,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

CD3DTest::CD3DTest()

	m_Viewport.TopLeftY = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

using std::cout; using std::endl;

	}



	txDesc.ArraySize = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	return hr;

#ifdef _DEBUG



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			//Select surfaces based on key press



		//User requests quit



	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		delete[] pVList;

	float    nearZ = 0.1f;

};

	}

	enum KeyPressSurfaces

	delete[] pIList;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//頂点シェーダー生成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;



		}

#include "DirectXManager.h"

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyRenderer(ren);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





				// access to vertex

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

HRESULT CD3DTest::Create(HWND hwnd)





	::GetClientRect(hwnd, &rect);

	txDesc.SampleDesc.Quality = 0;

		{

	for (const auto& shape : shapes)

int main(int, char**)

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))



	if (FAILED(hr))

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	auto& materials = reader.GetMaterials();

	irData.SysMemSlicePitch = 0;







		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.ParseFromFile(inputfile, reader_config))

	bool ret = tinyobj::LoadObj(

	//頂点シェーダー生成



	{



		//User requests quit

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	m_IndexCount = icount;

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		NULL,



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pLightBuffer);



	cbDesc.StructureByteStride = 0;

#include "DirectXManager.h"

			//Select surfaces based on key press



		&materials,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





			exit(1);

		SDL_Delay(1000);

/*

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Event e;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			for (size_t v = 0; v < fv; v++)

	// Loop over shapes

}

	::GetClientRect(hwnd, &rect);

	m_IndexCount = 0;



		SDL_Delay(1000);

	txDesc.SampleDesc.Count = 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;

}
	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



			for (size_t v = 0; v < num_vertices; v++)

		&m_pImmediateContext);

	float    nearZ = 0.1f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	for (const auto& shape : shapes)

		}



		SDL_RenderPresent(ren);



	if (FAILED(hr))

		&scDesc,

	SAFE_RELEASE(m_pTextureView);

HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.BufferCount = 1;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}

	auto& shapes = reader.GetShapes();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

	scDesc.SampleDesc.Count = 1;



	}

{

	//First we need to start up SDL, and make sure it went ok

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

{

{

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (m_pImmediateContext)

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.TopLeftY = 0;



		&level,

	m_pDepthStencilView = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.CPUAccessFlags = 0;

			//Select surfaces based on key press



	vrData.pSysMem = &pVList[0];

				break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//Vertex* pVList = new Vertex[vcount];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Release();

	scDesc.BufferDesc.Height = rect.Height();

	float    farZ = 100.0f;

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			index_offset += num_vertices;

	txDesc.Width = rect.Width();

	m_Angle += XMConvertToRadians(1.0f);

	{



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vector<WORD> indexList;

	txDesc.Width = rect.Width();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.TopLeftX = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



			default:

{

	}*/

	//Clean up our objects and quit

	Vertex* pVList = new Vertex[vcount];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		&m_pImmediateContext);

	DXGI_SWAP_CHAIN_DESC scDesc;

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			case SDLK_RIGHT:





	vbDesc.StructureByteStride = 0;





			int num_vertices = shape.mesh.num_face_vertices[f];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		&scDesc,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;

	if (m_pImmediateContext)

	UINT strides = sizeof(Vertex);

	delete[] pIList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pSwapChain = NULL;

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				// access to vertex

};



	XMFLOAT4 pos;               //座標(x,y,z)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		cout << "SDL_INIT_ERROR" << endl;

			switch (e.key.keysym.sym)

	m_pSwapChain->Present(0, 0);



	SDL_Quit();

				// access to vertex

		&m_pSwapChain,



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&error,

	};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.CPUAccessFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	SDL_DestroyTexture(tex);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	UINT flags = 0;

	float    nearZ = 0.1f;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			// Loop over vertices in the face.

	Vertex* pVList = new Vertex[vcount];

{

	if (FAILED(hr))

		&m_pImmediateContext);

	UINT strides = sizeof(Vertex);

			index_offset += fv;

		flags,



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;



#include <SDL.h>



		&m_pSwapChain,

	scDesc.OutputWindow = hwnd;

			switch (e.key.keysym.sym)

	auto& shapes = reader.GetShapes();



	auto& materials = reader.GetMaterials();





	irData.pSysMem = &pIList[0];

	DXGI_SWAP_CHAIN_DESC scDesc;

#include <SDL.h>



	WORD* pIList = new WORD[icount];

	}

	txDesc.Height = rect.Height();



	SAFE_RELEASE(m_pRenderTargetView);

	float    nearZ = 0.1f;



				break;

	{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	UINT offsets = 0;

	SAFE_RELEASE(m_pRenderTargetView);



	SAFE_RELEASE(m_pMatrixBuffer);

		NULL,



				break;

CD3DTest::~CD3DTest()

			default:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

int SEGMENT = 36;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int i = 0; i < 3; i++)

	ibDesc.CPUAccessFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vector<Vertex> vertexlist;

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.SampleDesc.Count = 1;



#include <SDL.h>



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

#include <iostream>





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	auto& shapes = reader.GetShapes();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	auto& shapes = reader.GetShapes();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	WORD* pIList = new WORD[icount];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





};

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

CD3DTest::CD3DTest()

	//Create Index

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//頂点バッファ作成

	m_IndexCount = icount;







	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLight {

	{









	bool ret = tinyobj::LoadObj(

	{

	txDesc.ArraySize = 1;

void CD3DTest::Render()

	XMStoreFloat4(&clb.eyePos, eye);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;

};

			index_offset += num_vertices;

				tinyobj::real_t tx =

	D3D11_BUFFER_DESC ibDesc;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vrData.SysMemPitch = 0;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	UINT strides = sizeof(Vertex);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		}

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

}

		&m_pImmediateContext);

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pDepthStencilView);



	std::string error;

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

	// Loop over shapes

	if (FAILED(hr))



	{

	SDL_DestroyRenderer(ren);

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);



		}

	SAFE_RELEASE(m_pDevice);

		SDL_RenderPresent(ren);

	return hr;

	XMStoreFloat4(&clb.eyePos, eye);



	D3D11_BUFFER_DESC cbDesc;

		return hr;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	// Loop over shapes

	ConstantMaterial material; //物体の質感



	txDesc.MipLevels = 1;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

				// access to vertex

	ibDesc.CPUAccessFlags = 0;

	tinyobj::ObjReaderConfig reader_config;



		&m_pSwapChain,

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	txDesc.SampleDesc.Count = 1;





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	Vertex* pVList = new Vertex[vcount];

	vrData.pSysMem = &pVList[0];

	WORD* pIList = new WORD[icount];

	XMFLOAT4 specular;          //反射(r,g,b)

	for (int j = 0; j < icount; j++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}



	delete[] pVList;





	if (m_pImmediateContext)

	m_IndexCount = icount;



		{

	/*

	tinyobj::ObjReaderConfig reader_config;

	//Clean up our objects and quit

	XMFLOAT4 specular;          //反射(r,g,b)





		{

		return hr;

	cbDesc.MiscFlags = 0;

	ConstantLight    pntLight; //点光源



	std::string inputfile = "test.obj";

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

		exit(1);

	XMFLOAT4 pos;               //座標(x,y,z)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 projection;

	std::string imagePath = "hello.bmp";

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		return hr;

			default:

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	std::string imagePath = "hello.bmp";

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		{

	{

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pLightBuffer);

CD3DTest::~CD3DTest()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#include <SDL.h>



			default:

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);



		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&level,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	auto& attrib = reader.GetAttrib();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.CPUAccessFlags = 0;

	/*





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#endif



}



}

		if (e.type == SDL_QUIT)

	if (!error.empty())

	SAFE_RELEASE(m_pDepthStencilTexture);



	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.StructureByteStride = 0;



	if (m_pImmediateContext)

	ID3D11Texture2D* pBackBuffer;



	m_pSwapChain = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantLightBuffer {

	m_pDepthStencilTexture = NULL;

			// Loop over vertices in the face.

struct ConstantLight {

			{

	{

	vrData.SysMemSlicePitch = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	WORD* pIList = new WORD[icount];

		return hr;

	Release();

	std::vector<tinyobj::material_t> materials;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void CD3DTest::Render()



	m_pDepthStencilView = NULL;



#endif

				break;

		if (!ret)

	WORD* pIList = new WORD[icount];

#include <iostream>

				WORD index = idx.vertex_index;

		&m_pDevice,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{



#endif

		return hr;

		KEY_PRESS_SURFACE_DOWN,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pPixelShader);

	//テクスチャ読み込み

	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_DOWN,

	tinyobj::ObjReader reader;

	D3D11_SUBRESOURCE_DATA vrData;

	irData.SysMemSlicePitch = 0;

			index_offset += fv;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSampler);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pIndexBuffer);

#include <SDL.h>



	vrData.pSysMem = &pVList[0];

	reader_config.mtl_search_path = "./"; // Path to material files

				break;

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	//頂点シェーダー生成

		&level,

	m_pPixelShader = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION



	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pMatrixBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





		size_t index_offset = 0;



		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

			switch (e.key.keysym.sym)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		if (e.type == SDL_QUIT)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	vrData.SysMemPitch = 0;

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

int main(int, char**)

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderClear(ren);



{

	irData.pSysMem = &pIList[0];



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	tinyobj::ObjReader reader;

			case SDLK_UP:

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#define TINYOBJLOADER_IMPLEMENTATION



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		return hr;

		size_t index_offset = 0;  // インデントのオフセット

				break;

				// access to vertex



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		pIList[j] = indexList[j];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//頂点レイアウト作成

	m_pPixelShader = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_DEFAULT,

		size_t index_offset = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

		{



{

struct ConstantLightBuffer {

				indexlist.push_back(idx.vertex_index);

#define TINYOBJLOADER_IMPLEMENTATION



	UINT flags = 0;

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	WORD   icount = indexList.size();

	std::string error;

	m_pSampler = NULL;

			// Loop over vertices in the face.

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;





struct ConstantMatrixBuffer {

	scDesc.BufferDesc.Width = rect.Width();

	if (!reader.Warning().empty())



	CRect                rect;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.eyePos, eye);



	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

		return hr;

	{

void CD3DTest::Render()

#include <iostream>

	m_pRenderTargetView = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_VertexCount = vcount;

	return 0;



		//User requests quit

	return 0;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexBuffer = NULL;



	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pImmediateContext);

		{



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	DXGI_SWAP_CHAIN_DESC scDesc;


