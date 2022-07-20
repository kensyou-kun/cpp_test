				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	/*

	//Vertex* pVList = new Vertex[vcount];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	irData.pSysMem = &pIList[0];

			index_offset += fv;

	float    fov = XMConvertToRadians(20.0f);

	{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&attrib,

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	return 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))



	}

#include <SDL.h>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	tinyobj::attrib_t attrib;

	txDesc.MipLevels = 1;

		{



CD3DTest::CD3DTest()





	if (FAILED(hr))



	D3D11_SUBRESOURCE_DATA vrData;

			}

	SAFE_RELEASE(m_pDevice);

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			switch (e.key.keysym.sym)

	for (int i = 0; i < 3; i++)

	return;

 */

	m_pPixelShader = NULL;



}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

	m_Viewport.MinDepth = 0.0f;



	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

};

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#include <SDL.h>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	};

	{

			{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	};

		{

	if (FAILED(hr))



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		pLevels,

	vrData.pSysMem = &pVList[0];

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	//頂点バッファ作成

	XMFLOAT4         eyePos;   //視点座標

	}

	txDesc.ArraySize = 1;

		SDL_Delay(1000);



	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

 * Lesson 1: Hello World!

		D3D11_SDK_VERSION,

	vbDesc.CPUAccessFlags = 0;

			}

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





 * Lesson 1: Hello World!

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

			for (size_t v = 0; v < num_vertices; v++)



/*

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

				// access to vertex

	m_pPixelShader = NULL;

	txDesc.MipLevels = 1;

#endif

	delete[] pVList;

		return hr;

		return hr;

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pPixelShader);

	m_pVertexBuffer = NULL;

		{

	m_Viewport.MaxDepth = 1.0f;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				indexlist.push_back(idx.vertex_index);

struct ConstantMaterial {

			index_offset += fv;



	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pLightBuffer);

	{

	//Create Index



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

};







	pBackBuffer->Release();

	{



	for (int i = 0; i < 3; i++)

		&materials,

struct ConstantMatrixBuffer {

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void CD3DTest::Release()

		&scDesc,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		m_pImmediateContext->ClearState();

		flags,

	m_VertexCount = vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	{

				break;

	SAFE_RELEASE(m_pSwapChain);

	if (!reader.Warning().empty())



	}

	int     vcount = vertexlist.size();

	txDesc.MipLevels = 1;

	SDL_Quit();



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Create Index



	m_pPixelShader = NULL;

		&scDesc,





		}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



	XMStoreFloat4(&clb.eyePos, eye);



	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			//Select surfaces based on key press

		return 1;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

/*

			exit(1);

		SDL_RenderPresent(ren);

	tinyobj::ObjReaderConfig reader_config;

		SDL_RenderClear(ren);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//vector<Vertex> vertex_t;



	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SAFE_RELEASE(m_pDevice);

}

		&m_pDevice,

	SAFE_RELEASE(m_pTexture);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		1,



		{

	};





	for (int i = 0; i < vcount; i++)

			index_offset += num_vertices;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//インデックスバッファ作成



		if (e.type == SDL_QUIT)

		&m_pDevice,

	//頂点シェーダー生成

	if (!reader.Warning().empty())

int main(int, char**)





	if (FAILED(hr))

	m_pSwapChain = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float    fov = XMConvertToRadians(20.0f);

	std::vector<tinyobj::material_t> materials;







	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (int i = 0; i < 3; i++)

		size_t index_offset = 0;

		&scDesc,

	SAFE_RELEASE(m_pSwapChain);







				// access to vertex



	SAFE_RELEASE(m_pDepthStencilTexture);

{

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDepthStencilView);

	pBackBuffer->Release();

	if (!reader.Warning().empty())

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//Clean up our objects and quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&level,



		// Loop over faces(polygon)

		return hr;

	m_Viewport.TopLeftX = 0;

	//テクスチャ読み込み

	//vector<Vertex> vertex_t;



	if (m_pImmediateContext)

	for (int i = 0; i < 3; i++)

		}

{

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&materials,

			exit(1);

	}

	SDL_DestroyTexture(tex);

	if (FAILED(hr))



			int num_vertices = shape.mesh.num_face_vertices[f];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			default:

	tinyobj::ObjReader reader;

		flags,

	m_Viewport.TopLeftX = 0;



	//Clean up our objects and quit

	}

	for (int i = 0; i < vcount; i++)

		size_t index_offset = 0;  // インデントのオフセット





	txDesc.MipLevels = 1;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



}
	//頂点バッファ作成

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	irData.SysMemPitch = 0;

	enum KeyPressSurfaces

	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_RenderClear(ren);

}

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pMatrixBuffer);





		cout << "SDL_INIT_ERROR" << endl;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vector<WORD> indexList;

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;



	{

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MiscFlags = 0;

	//First we need to start up SDL, and make sure it went ok

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()

	D3D11_SUBRESOURCE_DATA irData;





	scDesc.BufferDesc.Height = rect.Height();

	m_pSwapChain = NULL;

		delete[] pVList;

	//インデックスバッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

	Release();

			exit(1);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4X4 world;

void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	{

				// access to vertex



	XMFLOAT4X4 projection;

	for (size_t s = 0; s < shapes.size(); s++)

	//定数バッファ作成



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

}

	scDesc.SampleDesc.Quality = 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	bool ret = tinyobj::LoadObj(

				// access to vertex

	scDesc.BufferCount = 1;



	vector<WORD> indexList;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	m_pDevice = NULL;

	//ビューポート設定

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//Create Index







		exit(1);

	{

	/*

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))



	{



		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

#include <iostream>

	{

void CD3DTest::Render()

	for (int j = 0; j < icount; j++)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		if (!ret)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);



	//定数バッファ作成

	dsDesc.Format = txDesc.Format;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				// access to vertex



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	auto& materials = reader.GetMaterials();

}



	SAFE_RELEASE(m_pVertexBuffer);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	for (size_t s = 0; s < shapes.size(); s++)

			default:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Event e;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	{

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	std::string error;

int main(int, char**)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



			}

{

}

	txDesc.Height = rect.Height();



	Release();

	//頂点レイアウト作成

	SAFE_RELEASE(m_pMatrixBuffer);

	float    farZ = 100.0f;

	::GetClientRect(hwnd, &rect);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	while (SDL_PollEvent(&e) != 0)



		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				indexlist.push_back(index);

			for (size_t v = 0; v < num_vertices; v++)



};

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}



		&error,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pDepthStencilView = NULL;

	m_VertexCount = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SAFE_RELEASE(m_pTexture);



 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.eyePos, eye);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



			exit(1);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLight    pntLight; //点光源

	//頂点バッファ作成

struct ConstantMatrixBuffer {

	std::vector<tinyobj::shape_t> shapes;

				vertex.push_back(vertex_tmp);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pDepthStencilView = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



#include <iostream>

	m_Angle += XMConvertToRadians(1.0f);





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	return 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

 */

		{

		size_t index_offset = 0;

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();



	SDL_DestroyRenderer(ren);

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.MaxDepth = 1.0f;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

struct ConstantMaterial {

	reader_config.mtl_search_path = "./"; // Path to material files

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		1,

	//深度ステンシルバッファ作成

}



		{

		return hr;

	ConstantMatrixBuffer cmb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

#include "DirectXManager.h"

	//頂点シェーダー生成



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			int num_vertices = shape.mesh.num_face_vertices[f];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pInputLayout = NULL;

	scDesc.SampleDesc.Count = 1;

	scDesc.BufferCount = 1;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Width = rect.Width();

			break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{



			case SDLK_UP:



		return hr;

		return hr;



	delete[] pVList;









	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			case SDLK_DOWN:

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	std::vector<tinyobj::material_t> materials;

	D3D11_TEXTURE2D_DESC txDesc;



};

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

		&m_pImmediateContext);

		pVList[i] = vertexlist[i];

			break;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SDL_Event e;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	WORD   icount = indexList.size();

		&shapes,

	txDesc.ArraySize = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	WORD   icount = indexList.size();



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	};

	scDesc.BufferCount = 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//Vertex* pVList = new Vertex[vcount];

	vbDesc.CPUAccessFlags = 0;

				break;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	pBackBuffer->Release();

		&level,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

	auto& shapes = reader.GetShapes();

	auto& attrib = reader.GetAttrib();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;



	std::string error;

	//テクスチャ読み込み

struct ConstantMaterial {

		return hr;

	UINT offsets = 0;

	SDL_Quit();

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

		&m_pDevice,

				WORD index = idx.vertex_index;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_FreeSurface(suf);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_IndexCount = icount;

	m_pVertexBuffer = NULL;



}

	std::vector<tinyobj::material_t> materials;

		//User presses a key

{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ConstantLight    pntLight; //点光源

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





		return hr;

	{

		KEY_PRESS_SURFACE_LEFT,

 */

		{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantLightBuffer clb;

	m_Viewport.TopLeftX = 0;

	SDL_Quit();



	//Key press surfaces constants

		//User presses a key

		return hr;

	bool ret = tinyobj::LoadObj(

			index_offset += fv;



	{

	float    nearZ = 0.1f;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_UP,

		//User presses a key



	UINT strides = sizeof(Vertex);



		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





};



	XMFLOAT4         eyePos;   //視点座標

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			}

	{



		if (e.type == SDL_QUIT)

	XMFLOAT4X4 projection;

		{

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		KEY_PRESS_SURFACE_DOWN,

	SDL_FreeSurface(bmp);

 */

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{

			index_offset += num_vertices;

	SDL_FreeSurface(bmp);

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

			}



	scDesc.BufferCount = 1;

	txDesc.ArraySize = 1;



#include <SDL.h>

		pVList[i] = vertexlist[i];



	//インデックスバッファ作成

			{



	m_Viewport.Width = (FLOAT)rect.Width();

			{

	m_pSampler = NULL;

		R"(cube.obj)");

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



struct ConstantLight {

		else if (e.type == SDL_KEYDOWN)

	m_pVertexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	WORD* pIList = new WORD[icount];

	dsDesc.Texture2D.MipSlice = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}*/

	{

			}



		return hr;



	if (!error.empty())

int main(int, char**)



		NULL,

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_DEFAULT,



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	pBackBuffer->Release();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))





	vbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    farZ = 100.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{



#define TINYOBJLOADER_IMPLEMENTATION





		&scDesc,

void CD3DTest::Release()

		return 1;

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	UINT offsets = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

				break;

	{

	auto& attrib = reader.GetAttrib();

	{



	D3D11_BUFFER_DESC vbDesc;

		{

	//Key press surfaces constants



#include <iostream>

		&attrib,



	SAFE_RELEASE(m_pTextureView);





	m_IndexCount = 0;

	m_Viewport.MaxDepth = 1.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	if (FAILED(hr))

	//頂点レイアウト作成

	CRect                rect;

				break;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

}



		}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;



		return hr;

void CD3DTest::Release()

	for (int i = 0; i < 3; i++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

#include "DirectXManager.h"

	cbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ibDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vector<WORD> indexList;

		delete[] pIList;



		delete[] pIList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)



	D3D_FEATURE_LEVEL level;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);

	m_VertexCount = 0;



		KEY_PRESS_SURFACE_RIGHT,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	HRESULT              hr;

 */



		return hr;



	XMFLOAT4         eyePos;   //視点座標

	m_pSampler = NULL;

	HRESULT              hr;

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	{

	return 0;

	scDesc.BufferCount = 1;

	scDesc.OutputWindow = hwnd;

	m_pTexture = NULL;



		return hr;

#endif

	//Clean up our objects and quit

	if (m_pImmediateContext)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





				tinyobj::real_t ty =

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	txDesc.SampleDesc.Count = 1;

	{

	SAFE_RELEASE(m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;

		}

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

			case SDLK_RIGHT:

	m_Angle += XMConvertToRadians(1.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_BUFFER_DESC vbDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:

		SDL_RenderPresent(ren);

		NULL,



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

	m_pRenderTargetView = NULL;

	scDesc.BufferDesc.Height = rect.Height();



	tinyobj::attrib_t attrib;

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pImmediateContext = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	Release();

	m_pLightBuffer = NULL;

	{

};



		pIList[j] = indexList[j];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pDevice = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		NULL,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

	pBackBuffer->Release();



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	return 0;

			for (size_t v = 0; v < num_vertices; v++)

		{

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	txDesc.SampleDesc.Quality = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)



	return hr;

	return;



		&m_pImmediateContext);

#endif

		D3D11_SDK_VERSION,

	std::string imagePath = "hello.bmp";

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.ArraySize = 1;

void CD3DTest::Render()

struct ConstantLight {

		KEY_PRESS_SURFACE_UP,



	}

	txDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Width = rect.Width();

};

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ConstantLightBuffer clb;

	tinyobj::ObjReaderConfig reader_config;

			}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_DEFAULT,

				WORD index = idx.vertex_index;

	vrData.pSysMem = &pVList[0];

{

	SAFE_RELEASE(m_pSampler);

		{

	//Key press surfaces constants

	m_Viewport.MinDepth = 0.0f;

	SDL_Event e;

	m_pSwapChain->Present(0, 0);

		&attrib,

	if (FAILED(hr))



#include <iostream>

	auto& materials = reader.GetMaterials();

		SDL_Delay(1000);

				// access to vertex

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (m_pImmediateContext)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_DOWN:

	vrData.pSysMem = &pVList[0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		cout << "SDL_INIT_ERROR" << endl;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

	while (SDL_PollEvent(&e) != 0)

				// access to vertex

	SDL_DestroyWindow(win);



#include "DirectXManager.h"

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			case SDLK_RIGHT:

	cbDesc.StructureByteStride = 0;

	}

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!error.empty())





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D11_SDK_VERSION,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	vrData.pSysMem = &pVList[0];



	LoadObj(vertexlist, indexList);

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyTexture(tex);

	m_pImmediateContext = NULL;

	cbDesc.StructureByteStride = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Count = 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	ConstantMatrixBuffer cmb;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4X4 world;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	Release();

	m_pTextureView = NULL;

int main(int, char**)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	};



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				indexlist.push_back(idx.vertex_index);

	CRect                rect;



	std::string inputfile = "test.obj";



	ibDesc.MiscFlags = 0;



	D3D11_TEXTURE2D_DESC txDesc;

int main(int, char**)





		SDL_Delay(1000);

	return;

	m_pLightBuffer = NULL;





struct ConstantMatrixBuffer {



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	{

	D3D11_BUFFER_DESC ibDesc;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.ambient, lightAmbient);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext = NULL;

	SDL_DestroyTexture(tex);

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	UINT strides = sizeof(Vertex);

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pInputLayout);





		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{





	vector<WORD> indexList;



		return hr;

	SAFE_RELEASE(m_pIndexBuffer);



#include <iostream>

		size_t index_offset = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		KEY_PRESS_SURFACE_LEFT,

		else if (e.type == SDL_KEYDOWN)

	Vertex* pVList = new Vertex[vcount];

	D3D11_SUBRESOURCE_DATA irData;

{

	irData.SysMemSlicePitch = 0;

		&scDesc,

	vrData.pSysMem = &pVList[0];

		KEY_PRESS_SURFACE_DEFAULT,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	// Loop over shapes

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	SAFE_RELEASE(m_pPixelShader);

			default:

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pLightBuffer);

	vbDesc.StructureByteStride = 0;

			default:

	m_pInputLayout = NULL;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLight    pntLight; //点光源

	vrData.SysMemPitch = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pDepthStencilTexture = NULL;

	m_Viewport.MaxDepth = 1.0f;

	// Loop over shapes

				tinyobj::real_t ty =

		return hr;

	if (FAILED(hr))





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty =

	m_pSwapChain = NULL;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{



	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				// access to vertex



#include <SDL.h>

	dsDesc.Format = txDesc.Format;

		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	scDesc.OutputWindow = hwnd;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!error.empty())

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pVertexShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		if (!ret)

			for (size_t v = 0; v < num_vertices; v++)

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	if (FAILED(hr))

{



}

	tinyobj::ObjReader reader;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				// access to vertex



			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pSampler);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pSwapChain,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

		return hr;



	cbDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			switch (e.key.keysym.sym)

	};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点シェーダー生成

		}

		&scDesc,

};

	XMFLOAT4X4 projection;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	auto& materials = reader.GetMaterials();

	}

struct ConstantLightBuffer {





			break;

	SDL_DestroyWindow(win);

	D3D11_TEXTURE2D_DESC txDesc;

	m_Viewport.TopLeftX = 0;

		if (e.type == SDL_QUIT)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

void CD3DTest::Render()

		}

	SDL_DestroyTexture(tex);

	WORD* pIList = new WORD[icount];





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

		exit(1);

	std::vector<tinyobj::material_t> materials;

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			case SDLK_LEFT:

	SAFE_RELEASE(m_pDevice);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	vrData.SysMemPitch = 0;

#endif

		size_t index_offset = 0;

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pRenderTargetView = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	auto& shapes = reader.GetShapes();

				vertex.push_back(vertex_tmp);



	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Width = rect.Width();

}

	WORD* pIList = new WORD[icount];

		return hr;

#include <SDL.h>

	XMFLOAT4X4 projection;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

int main(int, char**)

void CD3DTest::Render()

			{

		return hr;

	{

	return;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex



struct ConstantMatrixBuffer {

	enum KeyPressSurfaces



	XMFLOAT4X4 projection;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	//頂点シェーダー生成

	txDesc.SampleDesc.Quality = 0;

	m_pTextureView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_Delay(1000);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.StructureByteStride = 0;

		&shapes,

	tinyobj::ObjReader reader;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//vector<Vertex> vertex_t;

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			index_offset += fv;

	m_pDevice = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

	}

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

HRESULT CD3DTest::Create(HWND hwnd)

	HRESULT              hr;



	XMFLOAT4 ambient;           //環境(r,g,b)

 */





		KEY_PRESS_SURFACE_RIGHT,

	D3D11_SUBRESOURCE_DATA vrData;

{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	m_pRenderTargetView = NULL;

	m_pPixelShader = NULL;

	ConstantMaterial material; //物体の質感

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t ty =

}

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pTexture);

	SDL_DestroyTexture(tex);

{

#include "DirectXManager.h"

	SAFE_RELEASE(m_pDevice);

			int num_vertices = shape.mesh.num_face_vertices[f];



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		//User presses a key

	//頂点シェーダー生成

			}

	UINT flags = 0;

				indexlist.push_back(index);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	std::string error;

		KEY_PRESS_SURFACE_LEFT,

	std::vector<tinyobj::shape_t> shapes;

struct ConstantMaterial {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

	m_pDevice = NULL;

	//インデックスバッファ作成

#include <SDL.h>

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//テクスチャ読み込み

void CD3DTest::Render()

	UINT strides = sizeof(Vertex);

	cbDesc.MiscFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{



	vbDesc.CPUAccessFlags = 0;

	for (int i = 0; i < 3; i++)

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext = NULL;

	tinyobj::attrib_t attrib;

	XMFLOAT4         ambient;  //環境光(r,g,b)



}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pSwapChain->Present(0, 0);

	float    nearZ = 0.1f;

{





	txDesc.ArraySize = 1;



	m_Angle += XMConvertToRadians(1.0f);

			index_offset += num_vertices;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))



	ZeroMemory(&txDesc, sizeof(txDesc));





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderClear(ren);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				// access to vertex

};

	std::string error;

	SDL_FreeSurface(bmp);

	for (int i = 0; i < vcount; i++)

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				// access to vertex

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	txDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	}

		pVList[i] = vertexlist[i];

	if (FAILED(hr))

	if (FAILED(hr))

	//ピクセルシェーダー生成



	return 0;

	if (!reader.Warning().empty())

}



	return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

			}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



			case SDLK_UP:

	std::string imagePath = "hello.bmp";

			for (size_t v = 0; v < num_vertices; v++)

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	flags |= D3D11_CREATE_DEVICE_DEBUG;





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		pIList[j] = indexList[j];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		1,

	if (FAILED(hr))

	irData.SysMemPitch = 0;

		}



	}

	auto& attrib = reader.GetAttrib();

			}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.CPUAccessFlags = 0;

#endif

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}



	XMFLOAT4X4 view;

};

	//First we need to start up SDL, and make sure it went ok

	return 0;

		return hr;

	for (int j = 0; j < icount; j++)

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	irData.SysMemPitch = 0;

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;







				indexlist.push_back(index);



		if (!reader.Error().empty())

			case SDLK_LEFT:

	//Clean up our objects and quit

	enum KeyPressSurfaces

	m_Viewport.TopLeftY = 0;

	while (SDL_PollEvent(&e) != 0)

	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderPresent(ren);

		else if (e.type == SDL_KEYDOWN)

	UINT offsets = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.MiscFlags = 0;

		R"(cube.obj)");

	txDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





	for (int j = 0; j < icount; j++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		{

	::GetClientRect(hwnd, &rect);

	//インデックスバッファ作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	}





		return hr;



	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pVertexBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			exit(1);

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			index_offset += fv;

		if (e.type == SDL_QUIT)

				break;

		SDL_RenderClear(ren);

}
	std::string inputfile = "test.obj";



	SAFE_RELEASE(m_pInputLayout);

	}

using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4X4 view;



	}*/

	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.MiscFlags = 0;

	}

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pInputLayout);

	ConstantLightBuffer clb;

		exit(1);

#define TINYOBJLOADER_IMPLEMENTATION





	scDesc.Windowed = TRUE;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	HRESULT              hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		D3D11_SDK_VERSION,

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



#endif

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		exit(1);



				break;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

			index_offset += fv;

				vertex.push_back(vertex_tmp);

}



	LoadObj(vertexlist, indexList);

	//ビューポート設定

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::string error;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	//定数バッファ作成

	WORD   icount = indexList.size();

	vbDesc.CPUAccessFlags = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	//テクスチャ読み込み

	vector<Vertex> vertexlist;

	XMFLOAT4X4 world;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	m_VertexCount = vcount;

		&error,

	SDL_DestroyTexture(tex);

}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

};

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderClear(ren);

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::vector<tinyobj::shape_t> shapes;

		{

		pLevels,



				vertex.push_back(vertex_tmp);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.SampleDesc.Count = 1;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	//Vertex* pVList = new Vertex[vcount];

	ConstantLightBuffer clb;

		&shapes,

		m_pImmediateContext->ClearState();

	m_VertexCount = vcount;



	SAFE_RELEASE(m_pDepthStencilView);



			case SDLK_RIGHT:

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_IMPLEMENTATION

};

		}

		//User requests quit



	float    aspect = m_Viewport.Width / m_Viewport.Height;









	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

		SDL_RenderClear(ren);

	SDL_DestroyWindow(win);

				indexlist.push_back(index);

	//頂点シェーダー生成

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

		return hr;

	SDL_DestroyTexture(tex);

	SDL_FreeSurface(bmp);

		size_t index_offset = 0;  // インデントのオフセット

			// Loop over vertices in the face.



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{



				break;

	SDL_DestroyTexture(tex);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

struct ConstantMatrixBuffer {



		SDL_RenderPresent(ren);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			exit(1);

};

	SAFE_RELEASE(m_pTextureView);

	m_pSwapChain->Present(0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	WORD   icount = indexList.size();

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 pos;               //座標(x,y,z)



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//ビューポート設定



		KEY_PRESS_SURFACE_LEFT,

	if (!reader.Warning().empty())

	irData.pSysMem = &pIList[0];

	}

	m_pTexture = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

 * Lesson 1: Hello World!

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Count = 1;

	txDesc.MipLevels = 1;

			case SDLK_UP:



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_FreeSurface(suf);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



int SEGMENT = 36;

	{

		return hr;

	{





	XMFLOAT4X4 projection;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	scDesc.Windowed = TRUE;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	delete[] pIList;



	XMFLOAT4         ambient;  //環境光(r,g,b)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.BufferCount = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		pLevels,

 */

	HRESULT              hr;

	std::string error;

	XMFLOAT4X4 view;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	{

{

	//vector<WORD> index_t;

	XMFLOAT4         eyePos;   //視点座標

	auto& materials = reader.GetMaterials();



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

int main(int, char**)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	if (FAILED(hr))

		return hr;





	return;

		return hr;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pLightBuffer);



	cbDesc.StructureByteStride = 0;

				break;

	{

	bool ret = tinyobj::LoadObj(

	}*/

	SAFE_RELEASE(m_pIndexBuffer);

	};





			}

	{





{

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			{

	{

	}

			default:



			}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

HRESULT CD3DTest::Create(HWND hwnd)

	//定数バッファ作成

{



	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			for (size_t v = 0; v < num_vertices; v++)

	WORD   icount = indexList.size();

	m_pTextureView = NULL;



	if (FAILED(hr))

	//定数バッファ作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

			{

#include "DirectXManager.h"

	for (int j = 0; j < icount; j++)

		size_t index_offset = 0;  // インデントのオフセット



		KEY_PRESS_SURFACE_DEFAULT,

	//インデックスバッファ作成

	irData.SysMemPitch = 0;

};

		1,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

}

/*



	SDL_DestroyTexture(tex);

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pDepthStencilView);

			break;

		return hr;

	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	WORD   icount = indexList.size();



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	return hr;

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&scDesc,

		&attrib,

	txDesc.CPUAccessFlags = 0;

	{

	D3D11_BUFFER_DESC vbDesc;



	D3D11_TEXTURE2D_DESC txDesc;

	};

	XMStoreFloat4(&clb.eyePos, eye);

		&level,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	XMFLOAT4X4 projection;

				break;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	if (!error.empty())

		else if (e.type == SDL_KEYDOWN)

	m_pRenderTargetView = NULL;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pDepthStencilTexture);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{



			case SDLK_RIGHT:

	if (m_pImmediateContext)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.BufferDesc.Width = rect.Width();



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}









	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	};

	txDesc.MipLevels = 1;



	//Vertex* pVList = new Vertex[vcount];

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pInputLayout);



	for (int j = 0; j < icount; j++)

{

}

#include "DirectXManager.h"

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		//User presses a key



	if (FAILED(hr))

	std::string imagePath = "hello.bmp";



	ibDesc.StructureByteStride = 0;

		{

		}

		delete[] pIList;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	if (FAILED(hr))

 */

		return hr;

		}

		SDL_RenderPresent(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < vcount; i++)

	for (int i = 0; i < vcount; i++)



		return hr;

	UINT offsets = 0;

		&shapes,

	SAFE_RELEASE(m_pMatrixBuffer);



	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		// Loop over faces(polygon)

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		&attrib,

	//ビューポート設定

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	bool ret = tinyobj::LoadObj(

		if (!reader.Error().empty())

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pDepthStencilTexture = NULL;



	//Create Index

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//Create Index

	XMStoreFloat4(&clb.eyePos, eye);

	m_Viewport.MaxDepth = 1.0f;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D_FEATURE_LEVEL level;

		size_t index_offset = 0;

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	pBackBuffer->Release();



	txDesc.CPUAccessFlags = 0;





	tinyobj::attrib_t attrib;





		SDL_RenderPresent(ren);

		return hr;



		return 1;

	m_pInputLayout = NULL;

CD3DTest::~CD3DTest()

	//Vertex* pVList = new Vertex[vcount];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				WORD index = idx.vertex_index;

		&scDesc,



		&level,

	SDL_Event e;

			default:

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	}

			exit(1);

	SAFE_RELEASE(m_pDevice);

		&materials,

		&error,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

int SEGMENT = 36;

	XMFLOAT4 ambient;           //環境(r,g,b)

			//Select surfaces based on key press

		return hr;

		if (!reader.Error().empty())

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				// access to vertex

	::ZeroMemory(&scDesc, sizeof(scDesc));





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			exit(1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (!reader.Warning().empty())



	m_pVertexShader = NULL;

	std::vector<tinyobj::shape_t> shapes;

	//vector<Vertex> vertex_t;

	return 0;

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyRenderer(ren);

};

				indexlist.push_back(index);

	m_pSwapChain = NULL;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_Viewport.Height = (FLOAT)rect.Height();

	m_pPixelShader = NULL;

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	HRESULT              hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyTexture(tex);



				WORD index = idx.vertex_index;





				indexlist.push_back(index);









			}



}

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.MiscFlags = 0;

}

		D3D11_SDK_VERSION,

{

	m_pVertexShader = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

				break;

	{

		&error,



	m_pSampler = NULL;



}

			case SDLK_DOWN:

	m_pDepthStencilView = NULL;

			// Loop over vertices in the face.

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLight    pntLight; //点光源



	for (size_t s = 0; s < shapes.size(); s++)





	for (int i = 0; i < 3; i++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_DestroyTexture(tex);



			case SDLK_RIGHT:



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	std::vector<tinyobj::material_t> materials;



			switch (e.key.keysym.sym)

		&attrib,

	SDL_DestroyWindow(win);

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_BUFFER_DESC vbDesc;

};

		return hr;

	txDesc.ArraySize = 1;



	m_VertexCount = vcount;

	XMFLOAT4X4 world;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//First we need to start up SDL, and make sure it went ok



	SDL_DestroyTexture(tex);

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

	m_Angle += XMConvertToRadians(1.0f);

	tinyobj::attrib_t attrib;



	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t tx =



	vector<Vertex> vertexlist;

				tinyobj::real_t ty =

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//定数バッファ作成

	XMFLOAT4 specular;          //反射(r,g,b)

		&m_pSwapChain,

	dsDesc.Texture2D.MipSlice = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	m_pDepthStencilView = NULL;

		return hr;

	m_Viewport.TopLeftY = 0;

	scDesc.OutputWindow = hwnd;



		&level,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	Release();

	XMFLOAT4 pos;               //座標(x,y,z)

	for (int i = 0; i < 3; i++)

	//vector<Vertex> vertex_t;

	return hr;

	ibDesc.StructureByteStride = 0;





HRESULT CD3DTest::Create(HWND hwnd)



	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pIndexBuffer = NULL;



	{

		NULL,

			index_offset += num_vertices;

	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

	enum KeyPressSurfaces

				indexlist.push_back(index);



	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))



		exit(1);

	D3D11_SUBRESOURCE_DATA irData;

	for (const auto& shape : shapes)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pTexture = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	}



		SDL_Delay(1000);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_DestroyWindow(win);

	std::vector<tinyobj::shape_t> shapes;

	};

	for (const auto& shape : shapes)

	auto& shapes = reader.GetShapes();

	SDL_DestroyWindow(win);





		D3D11_SDK_VERSION,

			}

	m_Viewport.TopLeftX = 0;

			break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	float    nearZ = 0.1f;

	SDL_FreeSurface(suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderPresent(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	scDesc.SampleDesc.Count = 1;

		pLevels,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4 pos;               //座標(x,y,z)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	scDesc.BufferCount = 1;

		flags,

		SDL_RenderClear(ren);

				break;

	m_IndexCount = icount;

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

			{

		&m_pImmediateContext);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	//頂点シェーダー生成

CD3DTest::~CD3DTest()

	m_pPixelShader = NULL;

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_SUBRESOURCE_DATA irData;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	}

{

	D3D11_BUFFER_DESC cbDesc;

		if (!ret)

CD3DTest::CD3DTest()

	}

	txDesc.SampleDesc.Count = 1;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_UP:

	SDL_FreeSurface(suf);

	irData.SysMemPitch = 0;

		}

{

			index_offset += fv;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	//深度ステンシルバッファ作成

	//定数バッファ作成







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	std::string inputfile = "test.obj";

	ConstantLightBuffer clb;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (m_pImmediateContext)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

int main(int, char**)

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.Height = (FLOAT)rect.Height();



		{

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	int     vcount = vertexlist.size();

			{

	m_Viewport.TopLeftY = 0;

	float    fov = XMConvertToRadians(20.0f);

	cbDesc.StructureByteStride = 0;

	delete[] pIList;

	float    farZ = 100.0f;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (m_pImmediateContext)

	//インデックスバッファ作成

	vrData.SysMemPitch = 0;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);

struct ConstantLightBuffer {





	irData.SysMemSlicePitch = 0;

	XMFLOAT4X4 view;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.Height = (FLOAT)rect.Height();

		&level,

{

		R"(cube.obj)");

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderPresent(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		pLevels,

	SAFE_RELEASE(m_pSwapChain);

	tinyobj::ObjReader reader;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return 1;



			break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	enum KeyPressSurfaces

	UINT strides = sizeof(Vertex);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		D3D11_SDK_VERSION,

	ConstantLight    pntLight; //点光源

	txDesc.ArraySize = 1;

};

			{

			switch (e.key.keysym.sym)



	}

	{

	Release();

	SAFE_RELEASE(m_pDevice);

	ibDesc.CPUAccessFlags = 0;

	}



			switch (e.key.keysym.sym)

	DXGI_SWAP_CHAIN_DESC scDesc;



		return hr;



	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	SDL_Quit();

		//User presses a key

	txDesc.MipLevels = 1;

{

	XMStoreFloat4(&clb.eyePos, eye);

		//User requests quit



	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.SampleDesc.Quality = 0;

			default:



	irData.pSysMem = &pIList[0];

	delete[] pIList;

	m_pSwapChain = NULL;

	m_VertexCount = 0;

	auto& materials = reader.GetMaterials();

	float    nearZ = 0.1f;

		D3D_DRIVER_TYPE_HARDWARE,

	m_VertexCount = vcount;

};

		size_t index_offset = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vector<WORD> indexList;

	{

	}

		KEY_PRESS_SURFACE_RIGHT,



	cbDesc.MiscFlags = 0;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		}

				break;

				// access to vertex

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	SDL_DestroyRenderer(ren);





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	enum KeyPressSurfaces

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (const auto& shape : shapes)



	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes

		pIList[j] = indexList[j];

	vrData.SysMemSlicePitch = 0;

		if (!reader.Error().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	std::vector<tinyobj::shape_t> shapes;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





			//Select surfaces based on key press

	//インデックスバッファ作成

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

void CD3DTest::Render()





{

	UINT offsets = 0;

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pDepthStencilTexture = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pSwapChain);

}

		1,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	vector<Vertex> vertexlist;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pSwapChain = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User presses a key



	D3D_FEATURE_LEVEL level;

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

{

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

struct ConstantMaterial {

		SDL_Delay(1000);





	ConstantLight    pntLight; //点光源

{

		pLevels,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	pBackBuffer->Release();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::vector<tinyobj::material_t> materials;

		&shapes,

			index_offset += fv;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		D3D11_SDK_VERSION,

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				WORD index = idx.vertex_index;

	return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	//vector<WORD> index_t;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ConstantLightBuffer clb;

	SDL_DestroyWindow(win);

		cout << "SDL_INIT_ERROR" << endl;

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.MiscFlags = 0;

		return hr;

		&m_pSwapChain,

		pIList[j] = indexList[j];

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	//Key press surfaces constants



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	SDL_DestroyRenderer(ren);

	ConstantLight    pntLight; //点光源

	};



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_SAMPLER_DESC smpDesc;



		pLevels,

	//テクスチャ読み込み

	if (m_pImmediateContext)

	SDL_DestroyWindow(win);



	//頂点レイアウト作成

	m_Angle += XMConvertToRadians(1.0f);

using std::cout; using std::endl;

		KEY_PRESS_SURFACE_RIGHT,

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

 * Lesson 1: Hello World!

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pInputLayout);



#include <SDL.h>

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SAFE_RELEASE(m_pPixelShader);

	txDesc.SampleDesc.Quality = 0;

	Release();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	// Loop over shapes

	{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pVertexShader = NULL;



		KEY_PRESS_SURFACE_UP,



	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 pos;               //座標(x,y,z)

				break;

		// Loop over faces(polygon)





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	txDesc.MiscFlags = 0;

using std::cout; using std::endl;

	{

	XMFLOAT4X4 projection;

			index_offset += num_vertices;

	return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}



	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include <SDL.h>

		R"(cube.obj)");

			case SDLK_UP:

	Release();



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()





		return hr;

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pRenderTargetView);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_IndexCount = icount;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		m_pImmediateContext->ClearState();

}
	m_Viewport.TopLeftX = 0;

}

	ibDesc.CPUAccessFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

 */

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderClear(ren);

	{



			default:

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pDepthStencilTexture = NULL;

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//Vertex* pVList = new Vertex[vcount];

	{

			// Loop over vertices in the face.

	UINT offsets = 0;

	m_pSampler = NULL;



				break;

	scDesc.BufferDesc.Height = rect.Height();

{



	tinyobj::ObjReaderConfig reader_config;

		if (e.type == SDL_QUIT)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

		size_t index_offset = 0;  // インデントのオフセット



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&scDesc,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	SAFE_RELEASE(m_pDepthStencilView);

		exit(1);

		SDL_Delay(1000);

				break;

	WORD* pIList = new WORD[icount];



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	bool ret = tinyobj::LoadObj(



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_Delay(1000);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ConstantMatrixBuffer cmb;

	scDesc.BufferDesc.Width = rect.Width();



		SDL_Delay(1000);

	}

	ibDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{



		KEY_PRESS_SURFACE_DOWN,



		SDL_RenderCopy(ren, tex, NULL, NULL);

	UINT offsets = 0;

	SDL_Event e;

	m_pVertexShader = NULL;



	bool ret = tinyobj::LoadObj(

		pIList[j] = indexList[j];

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.eyePos, eye);

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pVertexShader = NULL;

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				// access to vertex

		}

		}

}
		return hr;

	if (m_pImmediateContext)

	//ビューポート設定

	m_pVertexShader = NULL;

		{



			index_offset += fv;

	cbDesc.MiscFlags = 0;

		// Loop over faces(polygon)

				break;

		D3D_DRIVER_TYPE_HARDWARE,

void CD3DTest::Render()



		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

 * Lesson 1: Hello World!

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

using std::cout; using std::endl;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				indexlist.push_back(index);

		R"(cube.obj)");

{

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_LEFT,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

{



	WORD* pIList = new WORD[icount];

	m_pSwapChain->Present(0, 0);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		{

	for (int i = 0; i < 3; i++)

HRESULT CD3DTest::Create(HWND hwnd)



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	DXGI_SWAP_CHAIN_DESC scDesc;



		SDL_Delay(1000);

				vertex.push_back(vertex_tmp);

		1,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	};

	m_pSwapChain = NULL;

				indexlist.push_back(index);

	txDesc.MipLevels = 1;

	ibDesc.MiscFlags = 0;

	{

	//頂点シェーダー生成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		m_pImmediateContext->ClearState();

	SDL_DestroyTexture(tex);

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <iostream>



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;

	XMFLOAT4 specular;          //反射(r,g,b)





	tinyobj::ObjReader reader;

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	{

	}*/

	SAFE_RELEASE(m_pVertexBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				indexlist.push_back(index);

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pTextureView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			index_offset += fv;



	SDL_DestroyWindow(win);

		flags,

};

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantMatrixBuffer {

	delete[] pIList;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//テクスチャ読み込み

		return hr;

			//Select surfaces based on key press

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	/*



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		KEY_PRESS_SURFACE_RIGHT,

		pVList[i] = vertexlist[i];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_BUFFER_DESC cbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pSwapChain,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//頂点レイアウト作成

CD3DTest::CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&attrib,



		SDL_Delay(1000);

		return hr;

	SAFE_RELEASE(m_pLightBuffer);





	if (FAILED(hr))

	SDL_Quit();

	scDesc.Windowed = TRUE;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	int     vcount = vertexlist.size();



			case SDLK_RIGHT:

	XMStoreFloat4(&clb.eyePos, eye);

			}

		SDL_RenderPresent(ren);

	cbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;

	std::string error;

struct ConstantMaterial {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	for (int i = 0; i < 3; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}*/

}



	CRect                rect;

	SDL_FreeSurface(bmp);





		}

	for (int i = 0; i < 3; i++)

struct ConstantMatrixBuffer {

	SDL_Quit();

	//頂点シェーダー生成

				// access to vertex

		return hr;



		//User requests quit

	tinyobj::ObjReader reader;

	if (!error.empty())

	txDesc.CPUAccessFlags = 0;

		}

	XMFLOAT4 specular;          //反射(r,g,b)

			{

	m_Viewport.MaxDepth = 1.0f;

	std::string error;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.MinDepth = 0.0f;

	txDesc.MipLevels = 1;

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		pLevels,

	scDesc.Windowed = TRUE;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	WORD   icount = indexList.size();

		SDL_RenderClear(ren);



	m_Viewport.MaxDepth = 1.0f;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		KEY_PRESS_SURFACE_UP,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	while (SDL_PollEvent(&e) != 0)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pDevice = NULL;

		exit(1);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}

	{

		}

	m_pImmediateContext = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Event e;

	cbDesc.MiscFlags = 0;

	//ビューポート設定

	SDL_FreeSurface(bmp);



		SDL_RenderClear(ren);

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_Viewport.Height = (FLOAT)rect.Height();



			default:

	SAFE_RELEASE(m_pRenderTargetView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.SysMemSlicePitch = 0;

	int     vcount = vertexlist.size();



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_SAMPLER_DESC smpDesc;



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pInputLayout);

	HRESULT              hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



#include "DirectXManager.h"



	vbDesc.StructureByteStride = 0;

	{

	vbDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			//Select surfaces based on key press

	SAFE_RELEASE(m_pDevice);

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include <iostream>



int main(int, char**)

	::GetClientRect(hwnd, &rect);

	bool ret = tinyobj::LoadObj(



		{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



	m_pVertexBuffer = NULL;

	if (FAILED(hr))



	irData.pSysMem = &pIList[0];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vrData.SysMemSlicePitch = 0;

		flags,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	Release();

	{

	SAFE_RELEASE(m_pTextureView);



		{



	SAFE_RELEASE(m_pSwapChain);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		return hr;

		//User presses a key

	for (int j = 0; j < icount; j++)

	D3D11_SUBRESOURCE_DATA vrData;

		1,

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int j = 0; j < icount; j++)

		SDL_RenderClear(ren);

			default:

				// access to vertex

		SDL_Delay(1000);

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		if (!reader.Error().empty())

	Release();

				WORD index = idx.vertex_index;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	return;



 * Lesson 1: Hello World!

		//User requests quit

};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			{

	HRESULT              hr;

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//深度ステンシルバッファ作成



		&materials,



	}



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

	XMFLOAT4 ambient;           //環境(r,g,b)

	tinyobj::ObjReaderConfig reader_config;

	{

	vrData.pSysMem = &pVList[0];

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	WORD   icount = indexList.size();

	}

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	irData.pSysMem = &pIList[0];

		{





			}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyWindow(win);

	//vector<Vertex> vertex_t;

};

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_TEXTURE2D_DESC txDesc;

	{

				vertex.push_back(vertex_tmp);



		&m_pDevice,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

	}

		D3D_DRIVER_TYPE_HARDWARE,

	tinyobj::ObjReader reader;

	Release();

	Release();



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	D3D11_TEXTURE2D_DESC txDesc;

				break;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	{



	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_UP,

		return hr;

	m_Viewport.MaxDepth = 1.0f;

	}

	irData.SysMemSlicePitch = 0;

	//vector<WORD> index_t;

struct ConstantMatrixBuffer {

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		cout << "SDL_INIT_ERROR" << endl;





	scDesc.BufferDesc.Height = rect.Height();



	m_pVertexBuffer = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



			exit(1);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

int main(int, char**)



	UINT offsets = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	ibDesc.StructureByteStride = 0;

	m_pLightBuffer = NULL;



{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

}

		SDL_Delay(1000);

	}





	m_pVertexBuffer = NULL;

		SDL_RenderPresent(ren);

#include <iostream>

}

	ConstantMatrixBuffer cmb;



	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyWindow(win);



	XMFLOAT4 pos;               //座標(x,y,z)

				vertex.push_back(vertex_tmp);



	}



	m_pLightBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.MaxDepth = 1.0f;

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pIList[j] = indexList[j];

void CD3DTest::Render()

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pTextureView = NULL;

	m_pSampler = NULL;

	bool ret = tinyobj::LoadObj(

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#ifdef _DEBUG

		&m_pSwapChain,

HRESULT CD3DTest::Create(HWND hwnd)

	auto& materials = reader.GetMaterials();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_Viewport.Height = (FLOAT)rect.Height();

		&level,

int main(int, char**)

#include <iostream>

#include <SDL.h>

		else if (e.type == SDL_KEYDOWN)

/*

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

		return hr;

};

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& attrib = reader.GetAttrib();

	auto& shapes = reader.GetShapes();

				WORD index = idx.vertex_index;

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<WORD> indexList;

	ibDesc.CPUAccessFlags = 0;



	std::string error;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	UINT offsets = 0;

	ConstantLight    pntLight; //点光源

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			switch (e.key.keysym.sym)

			{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}


	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.StructureByteStride = 0;

	}

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemSlicePitch = 0;

	txDesc.Width = rect.Width();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		{

	ConstantMaterial material; //物体の質感

	if (m_pImmediateContext)

	m_Viewport.Height = (FLOAT)rect.Height();

	m_IndexCount = icount;





		return hr;

	UINT offsets = 0;

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				// access to vertex

		&level,

#endif

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.CPUAccessFlags = 0;

{

}

	};

		return hr;



		return hr;

		SDL_RenderPresent(ren);

			break;

	std::vector<tinyobj::material_t> materials;

	txDesc.Width = rect.Width();

void CD3DTest::Release()



	m_pInputLayout = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			}

}





struct ConstantMatrixBuffer {

	D3D_FEATURE_LEVEL level;

	ibDesc.MiscFlags = 0;

	txDesc.SampleDesc.Count = 1;



		return hr;

	tinyobj::attrib_t attrib;

}

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))



	return 0;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&materials,

}

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	float    fov = XMConvertToRadians(20.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int j = 0; j < icount; j++)



	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);



	}

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_RIGHT,

{

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	std::vector<tinyobj::material_t> materials;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		KEY_PRESS_SURFACE_UP,

				// access to vertex

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_RenderPresent(ren);

	cbDesc.MiscFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pLightBuffer);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.MiscFlags = 0;

#include <SDL.h>

	ConstantMaterial material; //物体の質感

	m_VertexCount = vcount;

		exit(1);

		{

	dsDesc.Format = txDesc.Format;



			case SDLK_LEFT:

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	DXGI_SWAP_CHAIN_DESC scDesc;

			for (size_t v = 0; v < num_vertices; v++)

	SDL_DestroyTexture(tex);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	UINT flags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext = NULL;

		flags,

	SAFE_RELEASE(m_pSwapChain);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Height = rect.Height();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Format = txDesc.Format;

	vbDesc.CPUAccessFlags = 0;



	//定数バッファ作成

	//vector<WORD> index_t;



	m_VertexCount = vcount;

	{

	delete[] pIList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.MipLevels = 1;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&m_pImmediateContext);

		NULL,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

struct ConstantMaterial {

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	}



	D3D11_TEXTURE2D_DESC txDesc;

	}

		cout << "SDL_INIT_ERROR" << endl;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pDepthStencilTexture = NULL;

	ConstantLightBuffer clb;

	if (FAILED(hr))

	}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

CD3DTest::~CD3DTest()

	if (!reader.Warning().empty())

	scDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;



	ConstantLight    pntLight; //点光源

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	delete[] pVList;

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pDepthStencilView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		&scDesc,

				tinyobj::real_t ty =

	};



	vrData.SysMemPitch = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		D3D_DRIVER_TYPE_HARDWARE,

		return hr;



	//インデックスバッファ作成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		if (e.type == SDL_QUIT)

	vbDesc.MiscFlags = 0;

	/*

		R"(cube.obj)");

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		return hr;



		1,

	scDesc.BufferDesc.Height = rect.Height();



	D3D11_SUBRESOURCE_DATA irData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

		&m_pDevice,

	m_pVertexBuffer = NULL;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	//Create Index

	ConstantMatrixBuffer cmb;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))



	if (!reader.ParseFromFile(inputfile, reader_config))



	dsDesc.Texture2D.MipSlice = 0;



	D3D_FEATURE_LEVEL level;

}

	if (FAILED(hr))

				break;

			case SDLK_RIGHT:

	}

	SAFE_RELEASE(m_pVertexBuffer);

	//頂点シェーダー生成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	float    fov = XMConvertToRadians(20.0f);



	{





	m_IndexCount = 0;

	scDesc.BufferDesc.Height = rect.Height();

int main(int, char**)

	}

	//Vertex* pVList = new Vertex[vcount];

		return hr;



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.SampleDesc.Count = 1;

	{







}

	m_pLightBuffer = NULL;



	{

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_TOTAL

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pRenderTargetView);

	tinyobj::ObjReaderConfig reader_config;

		}

	reader_config.mtl_search_path = "./"; // Path to material files

{

	CRect                rect;









	XMFLOAT4X4 view;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	if (FAILED(hr))

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_LEFT,





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (int j = 0; j < icount; j++)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_TOTAL

	//Key press surfaces constants

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	}

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyRenderer(ren);

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	Vertex* pVList = new Vertex[vcount];

{

	irData.SysMemSlicePitch = 0;

	dsDesc.Texture2D.MipSlice = 0;





	return 0;

HRESULT CD3DTest::Create(HWND hwnd)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.pSysMem = &pIList[0];

			for (size_t v = 0; v < num_vertices; v++)

	}





	//Key press surfaces constants

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	XMFLOAT4 ambient;           //環境(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty =

		&m_pSwapChain,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pPixelShader);

				vertex.push_back(vertex_tmp);

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pImmediateContext);

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.BufferDesc.Height = rect.Height();

				// access to vertex

				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMatrixBuffer {

				break;

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_LEFT,



	/*



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&materials,

	{





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (!error.empty())

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.pSysMem = &pIList[0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Width = rect.Width();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pTexture = NULL;

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_UP,

	m_IndexCount = 0;

/*

	scDesc.SampleDesc.Count = 1;

}

	std::vector<tinyobj::shape_t> shapes;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pDevice,

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		//User requests quit

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





	D3D11_SAMPLER_DESC smpDesc;



				break;



	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

CD3DTest::CD3DTest()

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_SAMPLER_DESC smpDesc;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	pBackBuffer->Release();

	m_pVertexShader = NULL;

	tinyobj::ObjReader reader;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			// Loop over vertices in the face.

		R"(cube.obj)");



	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pMatrixBuffer);



	SDL_DestroyTexture(tex);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			default:

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_FreeSurface(bmp);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





		return 1;

	delete[] pIList;

}

	SAFE_RELEASE(m_pInputLayout);

	m_Viewport.MinDepth = 0.0f;

		D3D11_SDK_VERSION,

	while (SDL_PollEvent(&e) != 0)

	//インデックスバッファ作成

	//ピクセルシェーダー生成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Event e;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);





		}

	}



	m_pRenderTargetView = NULL;

	}

		return hr;

		delete[] pVList;

	//ピクセルシェーダー生成

};



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	std::string imagePath = "hello.bmp";

	ZeroMemory(&txDesc, sizeof(txDesc));

		KEY_PRESS_SURFACE_RIGHT,

struct ConstantMaterial {

	std::string imagePath = "hello.bmp";



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			default:

	}

				vertex.push_back(vertex_tmp);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 specular;          //反射(r,g,b)

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

CD3DTest::CD3DTest()



			break;

}

	SDL_Quit();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!error.empty())

	std::string imagePath = "hello.bmp";

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{



	D3D11_SUBRESOURCE_DATA irData;

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pTexture);





	WORD* pIList = new WORD[icount];



}

	m_pIndexBuffer = NULL;

		&level,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	Release();

#include <iostream>

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderPresent(ren);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pInputLayout = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	if (!reader.Warning().empty())



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.BufferCount = 1;

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (int j = 0; j < icount; j++)

	vector<Vertex> vertexlist;

	vrData.pSysMem = &pVList[0];



		return hr;



	ConstantMaterial material; //物体の質感

		NULL,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#ifdef _DEBUG



				break;

	// Loop over shapes

	//頂点レイアウト作成

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.Width = rect.Width();

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				// access to vertex

	}

	XMFLOAT4 specular;          //反射(r,g,b)



	if (FAILED(hr))

	Release();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	tinyobj::attrib_t attrib;

		SDL_Delay(1000);

		return hr;

	ConstantMatrixBuffer cmb;


