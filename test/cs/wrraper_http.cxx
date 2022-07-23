	ConstantLightBuffer clb;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		return hr;

	LoadObj(vertexlist, indexList);



	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	vrData.SysMemPitch = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			// Loop over vertices in the face.

	XMFLOAT4X4 view;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	}

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

	scDesc.OutputWindow = hwnd;

	m_Angle += XMConvertToRadians(1.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.Width = rect.Width();

	vrData.SysMemPitch = 0;

	}

	scDesc.SampleDesc.Quality = 0;

	ConstantLightBuffer clb;

};

};



};

	ConstantMatrixBuffer cmb;

	m_pInputLayout = NULL;

}

	}

			case SDLK_LEFT:

	m_Viewport.MaxDepth = 1.0f;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

struct ConstantLightBuffer {

	}

		&m_pSwapChain,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	}

	return 0;

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	auto& materials = reader.GetMaterials();



	SDL_DestroyWindow(win);

		KEY_PRESS_SURFACE_TOTAL

		KEY_PRESS_SURFACE_DEFAULT,

		}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		//User requests quit

				tinyobj::real_t ty =

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//定数バッファ作成

	if (FAILED(hr))



	txDesc.ArraySize = 1;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//テクスチャ読み込み

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 view;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Quit();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4 specular;          //反射(r,g,b)



	{

	//インデックスバッファ作成

	std::string imagePath = "hello.bmp";

				// access to vertex

	SAFE_RELEASE(m_pDepthStencilView);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pSampler);

	}



	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.pSysMem = &pVList[0];

	m_pVertexBuffer = NULL;



		}

	XMFLOAT4 specular;          //反射(r,g,b)

		size_t index_offset = 0;  // インデントのオフセット

	{

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_RenderClear(ren);

		return hr;

	SDL_Event e;

	SAFE_RELEASE(m_pVertexBuffer);

		&materials,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 ambient;           //環境(r,g,b)

	Release();

	enum KeyPressSurfaces

	}





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User presses a key

	cbDesc.MiscFlags = 0;



	}*/

	XMFLOAT4 ambient;           //環境(r,g,b)

	// Loop over shapes



 */

		&m_pDevice,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&attrib,

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	auto& attrib = reader.GetAttrib();

	//Create Index



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

				break;

#include <iostream>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.pSysMem = &pVList[0];

			{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	Release();

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//テクスチャ読み込み



		}

};

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.Height = rect.Height();

{

		SDL_Delay(1000);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_Delay(1000);

	ConstantLight    pntLight; //点光源

struct ConstantMatrixBuffer {

		//User presses a key

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			for (size_t v = 0; v < num_vertices; v++)

			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 specular;          //反射(r,g,b)

	vrData.SysMemPitch = 0;

		NULL,

		SDL_RenderPresent(ren);

	//ピクセルシェーダー生成



			case SDLK_UP:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//Vertex* pVList = new Vertex[vcount];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

#include "DirectXManager.h"





		delete[] pIList;

	m_pSampler = NULL;

		if (!reader.Error().empty())

	//First we need to start up SDL, and make sure it went ok

		{





{

	txDesc.Width = rect.Width();



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::string error;

	vbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

struct ConstantLightBuffer {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	Release();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pTextureView);



		KEY_PRESS_SURFACE_DEFAULT,

			//Select surfaces based on key press

{

		pIList[j] = indexList[j];

		D3D_DRIVER_TYPE_HARDWARE,

				break;





	delete[] pIList;



	scDesc.BufferCount = 1;





#ifdef _DEBUG

	SDL_Event e;



	vbDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;



#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				// access to vertex

		&m_pSwapChain,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		D3D11_SDK_VERSION,

		return hr;



	cbDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

	XMFLOAT4 ambient;           //環境(r,g,b)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	txDesc.MiscFlags = 0;

	{

	m_pDepthStencilView = NULL;

		&m_pImmediateContext);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pRenderTargetView = NULL;

	enum KeyPressSurfaces



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		SDL_RenderClear(ren);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				WORD index = idx.vertex_index;

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_Quit();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	txDesc.SampleDesc.Count = 1;



			{

	scDesc.BufferDesc.Height = rect.Height();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (!error.empty())

	{

				// access to vertex

	pBackBuffer->Release();



			switch (e.key.keysym.sym)



	UINT offsets = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		exit(1);

	for (int i = 0; i < 3; i++)

	{

		{

	vector<Vertex> vertexlist;

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

		cout << "SDL_INIT_ERROR" << endl;

	return;



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.CPUAccessFlags = 0;

	HRESULT              hr;

	scDesc.SampleDesc.Quality = 0;

	auto& shapes = reader.GetShapes();

		&scDesc,

	}



void CD3DTest::Render()

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

	vrData.SysMemSlicePitch = 0;

	}

HRESULT CD3DTest::Create(HWND hwnd)

#include <iostream>



			case SDLK_LEFT:

	}

};



	SDL_DestroyWindow(win);

				break;

	cbDesc.StructureByteStride = 0;

	}

	WORD* pIList = new WORD[icount];



	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

	for (int j = 0; j < icount; j++)

	dsDesc.Format = txDesc.Format;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		if (!ret)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		delete[] pVList;

		return hr;

	//ビューポート設定

	XMFLOAT4 specular;          //反射(r,g,b)

	UINT flags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	{

		return hr;



	enum KeyPressSurfaces

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			//Select surfaces based on key press

struct ConstantMatrixBuffer {

	SDL_DestroyWindow(win);

}

	m_pPixelShader = NULL;



	int     vcount = vertexlist.size();

			{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	reader_config.mtl_search_path = "./"; // Path to material files

int main(int, char**)

	XMFLOAT4X4 world;

			{

	SDL_DestroyWindow(win);

	m_pPixelShader = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.CPUAccessFlags = 0;

	}

			}



	vector<Vertex> vertexlist;

{

	for (size_t s = 0; s < shapes.size(); s++)

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC ibDesc;



	SDL_FreeSurface(suf);

			default:



	reader_config.mtl_search_path = "./"; // Path to material files

		exit(1);

	vbDesc.StructureByteStride = 0;

	}

	XMFLOAT4X4 projection;

	scDesc.SampleDesc.Quality = 0;

	//テクスチャ読み込み

};

	SDL_Quit();

{

	ConstantMatrixBuffer cmb;





		NULL,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	irData.pSysMem = &pIList[0];

	WORD   icount = indexList.size();



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.OutputWindow = hwnd;

			index_offset += fv;

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	if (FAILED(hr))

}

		return hr;

		KEY_PRESS_SURFACE_LEFT,

	irData.SysMemSlicePitch = 0;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	//深度ステンシルバッファ作成





	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyTexture(tex);

	m_pRenderTargetView = NULL;

{

	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	irData.pSysMem = &pIList[0];

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	m_pLightBuffer = NULL;

	Release();

	//ビューポート設定

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	dsDesc.Format = txDesc.Format;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#ifdef _DEBUG

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

				tinyobj::real_t ty =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		{

	}

};

	cbDesc.StructureByteStride = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//Create Index

	m_pTexture = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



};

	return 0;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vector<Vertex> vertexlist;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

CD3DTest::CD3DTest()

	XMFLOAT4X4 projection;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//定数バッファ作成

}

		return hr;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





		D3D_DRIVER_TYPE_HARDWARE,

			// Loop over vertices in the face.

};

	SDL_Event e;

			// Loop over vertices in the face.

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		return hr;

	cbDesc.CPUAccessFlags = 0;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	reader_config.mtl_search_path = "./"; // Path to material files



	//テクスチャ読み込み

	vbDesc.StructureByteStride = 0;

	}

	m_pDepthStencilView = NULL;





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTextureView = NULL;



	SDL_DestroyRenderer(ren);

		return hr;

	//頂点バッファ作成

	irData.pSysMem = &pIList[0];



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

			case SDLK_DOWN:



	bool ret = tinyobj::LoadObj(







	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_Delay(1000);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pInputLayout = NULL;

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	Vertex* pVList = new Vertex[vcount];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

int main(int, char**)

	cbDesc.StructureByteStride = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				break;

	if (FAILED(hr))

		}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyRenderer(ren);

			// Loop over vertices in the face.

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//ピクセルシェーダー生成

#include "DirectXManager.h"

				WORD index = idx.vertex_index;

			case SDLK_UP:

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.TopLeftX = 0;





	std::vector<tinyobj::material_t> materials;

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	//インデックスバッファ作成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}



using std::cout; using std::endl;

	{





	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	HRESULT              hr;

	if (FAILED(hr))

		&m_pImmediateContext);

		SDL_RenderClear(ren);

		&m_pSwapChain,

	m_IndexCount = 0;

	m_VertexCount = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Quit();

	std::string imagePath = "hello.bmp";

struct ConstantLightBuffer {

	{

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pLightBuffer);

		return hr;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

};

		//User presses a key

		SDL_Delay(1000);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	WORD* pIList = new WORD[icount];

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4X4 projection;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		{

	ConstantLightBuffer clb;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			}

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)

		return hr;



			{

	//Create Index

	}

			for (size_t v = 0; v < fv; v++)

		KEY_PRESS_SURFACE_UP,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;

	}

	m_pDepthStencilTexture = NULL;

int main(int, char**)

			}

	/*

};

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilView = NULL;

void CD3DTest::Release()

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	{



	SAFE_RELEASE(m_pSampler);

			case SDLK_LEFT:

		{

	std::string inputfile = "test.obj";

	Release();

	return;

#ifdef _DEBUG

	float    fov = XMConvertToRadians(20.0f);

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				WORD index = idx.vertex_index;

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

	for (int i = 0; i < 3; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

/*

	return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	Release();

#include <SDL.h>

	m_pSampler = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//Clean up our objects and quit



		}

	if (FAILED(hr))



{

	{

	}

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&level,



	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_Viewport.Width = (FLOAT)rect.Width();

		&m_pImmediateContext);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.MiscFlags = 0;

	//vector<WORD> index_t;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



				indexlist.push_back(idx.vertex_index);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	m_Viewport.MinDepth = 0.0f;

 */

};

	SAFE_RELEASE(m_pIndexBuffer);

	{

	UINT flags = 0;

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

		D3D11_SDK_VERSION,

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	irData.SysMemSlicePitch = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	{

	XMFLOAT4X4 view;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	/*



	CRect                rect;

	D3D_FEATURE_LEVEL level;

			{

	tinyobj::attrib_t attrib;

	{

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	scDesc.BufferDesc.Height = rect.Height();

	while (SDL_PollEvent(&e) != 0)

	std::vector<tinyobj::shape_t> shapes;

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;





			case SDLK_RIGHT:

}

		SDL_RenderPresent(ren);

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	if (FAILED(hr))

		return hr;

	auto& attrib = reader.GetAttrib();

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include "DirectXManager.h"



HRESULT CD3DTest::Create(HWND hwnd)

	irData.pSysMem = &pIList[0];

	m_IndexCount = 0;

			index_offset += fv;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				// access to vertex

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				break;

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext = NULL;

	m_pIndexBuffer = NULL;

	vrData.pSysMem = &pVList[0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	delete[] pIList;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	int     vcount = vertexlist.size();



				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	Release();

	irData.SysMemSlicePitch = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SAFE_RELEASE(m_pSampler);

			case SDLK_UP:

		{

		return hr;

	LoadObj(vertexlist, indexList);



	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.StructureByteStride = 0;

	return;

	SAFE_RELEASE(m_pTextureView);

				WORD index = idx.vertex_index;

	}

		NULL,







	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			switch (e.key.keysym.sym)

	XMFLOAT4X4 world;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		&error,

			default:



			case SDLK_LEFT:

int SEGMENT = 36;

			int num_vertices = shape.mesh.num_face_vertices[f];



	scDesc.SampleDesc.Count = 1;



	//Clean up our objects and quit

	m_pPixelShader = NULL;



			}

		{

	m_pSampler = NULL;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	m_pDevice = NULL;

}

	tinyobj::ObjReader reader;



	//テクスチャ読み込み

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_FreeSurface(bmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//First we need to start up SDL, and make sure it went ok

	Vertex* pVList = new Vertex[vcount];

	UINT flags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	delete[] pVList;

	XMFLOAT4X4 projection;

	{



		}

	D3D11_BUFFER_DESC ibDesc;

	{

	SDL_DestroyRenderer(ren);

		if (!reader.Error().empty())

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pDevice = NULL;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	//Clean up our objects and quit



	m_pDevice = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	}

	std::vector<tinyobj::material_t> materials;



	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点レイアウト作成

	for (int i = 0; i < vcount; i++)

		{



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

};

		}



				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//定数バッファ作成

		return hr;





	m_Angle += XMConvertToRadians(1.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#include <iostream>

	m_pDevice = NULL;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

{

	SDL_DestroyWindow(win);

	txDesc.Height = rect.Height();

	//深度ステンシルバッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pLightBuffer = NULL;

	{





		return 1;



			}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				break;

		return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		size_t index_offset = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{

		//User presses a key



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pVertexShader);

	{

	m_pDevice = NULL;

	SDL_Event e;

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		D3D_DRIVER_TYPE_HARDWARE,

	ZeroMemory(&txDesc, sizeof(txDesc));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pDevice);

	SDL_Event e;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&error,

#include <SDL.h>

		&level,





			}

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





			}

		SDL_Delay(1000);

};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include <iostream>

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	}

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//ビューポート設定

	WORD* pIList = new WORD[icount];

#include "DirectXManager.h"

	vbDesc.StructureByteStride = 0;

	SDL_Quit();

{

};

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&materials,

	delete[] pVList;

	}

	m_IndexCount = icount;



				tinyobj::real_t ty =

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	tinyobj::ObjReaderConfig reader_config;

};

		{



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	ConstantMaterial material; //物体の質感

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#endif

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			exit(1);

	m_IndexCount = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Width = rect.Width();





	XMStoreFloat4(&clb.eyePos, eye);

		&attrib,

		{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				indexlist.push_back(index);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);

	XMFLOAT4X4 view;

			default:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.eyePos, eye);

	//Vertex* pVList = new Vertex[vcount];

	WORD   icount = indexList.size();

	float    farZ = 100.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	bool ret = tinyobj::LoadObj(


