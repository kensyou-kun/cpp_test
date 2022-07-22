		// Loop over faces(polygon)



	XMFLOAT4 ambient;           //環境(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_FreeSurface(suf);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.Width = rect.Width();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_Delay(1000);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_SAMPLER_DESC smpDesc;

	Release();

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	}

	//インデックスバッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}

	m_pVertexShader = NULL;

		&m_pSwapChain,

		D3D11_SDK_VERSION,

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	SDL_DestroyTexture(tex);

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

		return hr;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

using std::cout; using std::endl;



		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Release()

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pRenderTargetView = NULL;



		{

		return hr;



	SAFE_RELEASE(m_pLightBuffer);

CD3DTest::~CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_DOWN:

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Quit();

		SDL_Delay(1000);

		m_pImmediateContext->ClearState();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//Create Index

	if (FAILED(hr))

		return hr;

{

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pSampler);

	m_Viewport.MinDepth = 0.0f;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D_FEATURE_LEVEL level;

	UINT strides = sizeof(Vertex);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4X4 world;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Render()

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



			case SDLK_UP:

			switch (e.key.keysym.sym)

	enum KeyPressSurfaces

		//User presses a key

	SAFE_RELEASE(m_pDevice);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

 * Lesson 1: Hello World!

	ConstantLight    pntLight; //点光源

	std::string error;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			for (size_t v = 0; v < fv; v++)

	ibDesc.MiscFlags = 0;

	vbDesc.MiscFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4X4 projection;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_TOTAL



		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	WORD   icount = indexList.size();

	//インデックスバッファ作成

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	//vector<Vertex> vertex_t;

	txDesc.SampleDesc.Count = 1;

	{

	return;

	txDesc.Height = rect.Height();

			}

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	{



	txDesc.ArraySize = 1;

	CRect                rect;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		exit(1);

	txDesc.ArraySize = 1;

	dsDesc.Format = txDesc.Format;

	return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//vector<WORD> index_t;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.MiscFlags = 0;

int main(int, char**)

			int num_vertices = shape.mesh.num_face_vertices[f];

}

				tinyobj::real_t ty =

int SEGMENT = 36;

			{

			{



	if (FAILED(hr))

	SDL_Quit();

	txDesc.Width = rect.Width();

		D3D11_SDK_VERSION,

	m_pTextureView = NULL;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{





				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.eyePos, eye);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_Viewport.TopLeftX = 0;

	{

	cbDesc.StructureByteStride = 0;



		return hr;

			index_offset += fv;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

	tinyobj::ObjReader reader;





struct ConstantLightBuffer {

	txDesc.ArraySize = 1;



		delete[] pIList;



		}

#endif

		&m_pSwapChain,

	SAFE_RELEASE(m_pInputLayout);

int SEGMENT = 36;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pLightBuffer = NULL;



		D3D11_SDK_VERSION,

	txDesc.MipLevels = 1;

				vertex.push_back(vertex_tmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pSampler);

			// Loop over vertices in the face.

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

{

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

void CD3DTest::Release()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_VertexCount = vcount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vbDesc.MiscFlags = 0;

		&scDesc,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

 */

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	D3D11_TEXTURE2D_DESC txDesc;

	float    nearZ = 0.1f;

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			// Loop over vertices in the face.

	WORD* pIList = new WORD[icount];

	auto& materials = reader.GetMaterials();



	SDL_FreeSurface(bmp);

	m_pSwapChain->Present(0, 0);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&m_pDevice,

				indexlist.push_back(idx.vertex_index);

		return hr;

			break;

	txDesc.MiscFlags = 0;

				break;

	SDL_DestroyWindow(win);

		return hr;



{

	D3D11_BUFFER_DESC cbDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{



	{

	m_Viewport.MinDepth = 0.0f;

		SDL_Delay(1000);

		//User requests quit

		{

	m_pTexture = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	//ピクセルシェーダー生成

		return hr;

	delete[] pVList;

#include "DirectXManager.h"

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_DestroyTexture(tex);

		&m_pImmediateContext);

	for (int j = 0; j < icount; j++)

	cbDesc.CPUAccessFlags = 0;

		return hr;



		&materials,

	vrData.SysMemSlicePitch = 0;

				indexlist.push_back(idx.vertex_index);

		}

				tinyobj::real_t ty =

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

	SAFE_RELEASE(m_pRenderTargetView);



		if (e.type == SDL_QUIT)

	if (m_pImmediateContext)

	m_pMatrixBuffer = NULL;



	SDL_FreeSurface(bmp);

	{



		SDL_RenderClear(ren);

	//ビューポート設定

		D3D11_SDK_VERSION,

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pIndexBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

		return hr;

		if (!reader.Error().empty())

	std::vector<tinyobj::material_t> materials;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	irData.SysMemPitch = 0;

				// access to vertex

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			}

	m_pTexture = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

		pIList[j] = indexList[j];

	m_pVertexShader = NULL;





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

	}*/

	{

	}*/



	SAFE_RELEASE(m_pPixelShader);

	m_pRenderTargetView = NULL;

	enum KeyPressSurfaces

	dsDesc.Format = txDesc.Format;

	//テクスチャ読み込み

	return 0;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}

		return 1;

	if (FAILED(hr))

		SDL_Delay(1000);

		NULL,

	SDL_Quit();

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		if (!reader.Error().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float    nearZ = 0.1f;

		SDL_RenderClear(ren);



	m_pSampler = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	ID3D11Texture2D* pBackBuffer;

	ibDesc.CPUAccessFlags = 0;

		R"(cube.obj)");

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pSampler = NULL;



	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return 0;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	}

}

	if (!error.empty())

	cbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	delete[] pVList;

			case SDLK_UP:

	irData.SysMemPitch = 0;



	std::vector<tinyobj::shape_t> shapes;

	vector<Vertex> vertexlist;

	{

		{

	if (FAILED(hr))



	for (size_t s = 0; s < shapes.size(); s++)

		}

	}

		1,

	ibDesc.MiscFlags = 0;

		return hr;

		exit(1);

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_DOWN:

	XMFLOAT4         eyePos;   //視点座標

		}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.MipLevels = 1;

				indexlist.push_back(idx.vertex_index);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	auto& shapes = reader.GetShapes();

struct ConstantLight {

	DXGI_SWAP_CHAIN_DESC scDesc;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

		}

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty =

	m_VertexCount = vcount;

int SEGMENT = 36;



			switch (e.key.keysym.sym)

	UINT strides = sizeof(Vertex);

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_FreeSurface(suf);



			// Loop over vertices in the face.

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#define TINYOBJLOADER_IMPLEMENTATION

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		D3D_DRIVER_TYPE_HARDWARE,



}

		}

	vbDesc.StructureByteStride = 0;

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	for (const auto& shape : shapes)

void CD3DTest::Render()

	{

CD3DTest::CD3DTest()

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

		SDL_RenderPresent(ren);



	txDesc.MipLevels = 1;

#include <iostream>

	XMFLOAT4 ambient;           //環境(r,g,b)

};



	m_VertexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string inputfile = "test.obj";

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Width = rect.Width();



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//ピクセルシェーダー生成

				WORD index = idx.vertex_index;

	SDL_DestroyWindow(win);

	}

	//インデックスバッファ作成

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);



}

	SAFE_RELEASE(m_pDevice);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	ConstantMatrixBuffer cmb;

	}

	delete[] pIList;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		size_t index_offset = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		m_pImmediateContext->ClearState();

int SEGMENT = 36;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vbDesc.MiscFlags = 0;

	scDesc.OutputWindow = hwnd;

	UINT flags = 0;

	D3D_FEATURE_LEVEL level;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	pBackBuffer->Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Event e;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			for (size_t v = 0; v < fv; v++)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	// Loop over shapes







				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_Delay(1000);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pVertexShader = NULL;

				vertex.push_back(vertex_tmp);

	m_pVertexBuffer = NULL;



		}



		{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



#include <SDL.h>

	{

			break;

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	}

	{

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.SampleDesc.Quality = 0;





struct ConstantMatrixBuffer {

		&m_pSwapChain,

	{

	return;

				indexlist.push_back(index);

	bool ret = tinyobj::LoadObj(

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	}

		SDL_Delay(1000);



			}

		//User requests quit

	//定数バッファ作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return 1;

	scDesc.Windowed = TRUE;

	return;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	vrData.pSysMem = &pVList[0];

		{





		{



	m_VertexCount = vcount;

	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexBuffer);

int SEGMENT = 36;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.MinDepth = 0.0f;



	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	vector<Vertex> vertexlist;

	std::string error;

	m_pIndexBuffer = NULL;

	txDesc.Width = rect.Width();

#ifdef _DEBUG

	m_pVertexBuffer = NULL;

				// access to vertex

	m_pSwapChain->Present(0, 0);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.StructureByteStride = 0;



	{

		delete[] pIList;

	WORD* pIList = new WORD[icount];

#include <SDL.h>

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				vertex.push_back(vertex_tmp);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

		KEY_PRESS_SURFACE_LEFT,

	std::string imagePath = "hello.bmp";

	m_Viewport.MaxDepth = 1.0f;

	enum KeyPressSurfaces

			case SDLK_RIGHT:

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);







	SAFE_RELEASE(m_pRenderTargetView);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		if (e.type == SDL_QUIT)

	m_Viewport.MinDepth = 0.0f;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			index_offset += fv;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

CD3DTest::CD3DTest()

			case SDLK_DOWN:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			for (size_t v = 0; v < fv; v++)



	}

	SAFE_RELEASE(m_pPixelShader);





	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;



	//Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}

			switch (e.key.keysym.sym)

	m_pDepthStencilTexture = NULL;

	D3D11_BUFFER_DESC vbDesc;

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4X4 view;

	m_VertexCount = vcount;



	D3D11_SUBRESOURCE_DATA irData;

		cout << "SDL_INIT_ERROR" << endl;

	{

	SAFE_RELEASE(m_pPixelShader);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}
		NULL,

	delete[] pIList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	std::string imagePath = "hello.bmp";

	dsDesc.Format = txDesc.Format;

		size_t index_offset = 0;



 */

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	pBackBuffer->Release();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	::GetClientRect(hwnd, &rect);

		{

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				indexlist.push_back(idx.vertex_index);

	m_pTextureView = NULL;

			case SDLK_DOWN:

		return hr;

	if (m_pImmediateContext)

		}


