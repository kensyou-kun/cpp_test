

		KEY_PRESS_SURFACE_LEFT,

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pTexture);



	vbDesc.CPUAccessFlags = 0;





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.SampleDesc.Quality = 0;

	return;

	m_pDepthStencilTexture = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	cbDesc.MiscFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];



		}

		SDL_RenderPresent(ren);

		{





	}



			//Select surfaces based on key press

		return 1;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyRenderer(ren);

				tinyobj::real_t ty =

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#ifdef _DEBUG

	return;

	m_pDepthStencilTexture = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	cbDesc.MiscFlags = 0;

	{

				indexlist.push_back(idx.vertex_index);

	SDL_FreeSurface(bmp);



	//vector<Vertex> vertex_t;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (m_pImmediateContext)





	LoadObj(vertexlist, indexList);





	DXGI_SWAP_CHAIN_DESC scDesc;

		delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				// access to vertex

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		size_t index_offset = 0;

	m_pVertexShader = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;

	WORD   icount = indexList.size();

	ConstantMaterial material; //物体の質感

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.Windowed = TRUE;

		KEY_PRESS_SURFACE_LEFT,

 */

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

}

	}

		KEY_PRESS_SURFACE_TOTAL

		// Loop over faces(polygon)

	tinyobj::ObjReader reader;







	scDesc.SampleDesc.Quality = 0;

	};



	XMFLOAT4X4 view;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_TEXTURE2D_DESC txDesc;

	}

			{

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	//頂点バッファ作成

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_pRenderTargetView = NULL;

	cbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

	Vertex* pVList = new Vertex[vcount];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

struct ConstantMaterial {

		&m_pImmediateContext);

	UINT flags = 0;

	std::string error;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pLightBuffer);

			exit(1);



			for (size_t v = 0; v < num_vertices; v++)



	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点レイアウト作成



	//定数バッファ作成

	SAFE_RELEASE(m_pDepthStencilTexture);

		}

	m_pTextureView = NULL;

	//定数バッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	//Create Index

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

{

			break;



	vector<WORD> indexList;

		D3D_DRIVER_TYPE_HARDWARE,



			}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_SUBRESOURCE_DATA vrData;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.ArraySize = 1;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	ConstantLight    pntLight; //点光源

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    fov = XMConvertToRadians(20.0f);

struct ConstantLight {

		D3D_DRIVER_TYPE_HARDWARE,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

void CD3DTest::Render()

	m_IndexCount = 0;

		return hr;



}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{

		&m_pDevice,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));



	txDesc.MipLevels = 1;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SAFE_RELEASE(m_pImmediateContext);





		R"(cube.obj)");

		pIList[j] = indexList[j];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&m_pImmediateContext);

		KEY_PRESS_SURFACE_LEFT,

	}

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_DestroyTexture(tex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		&materials,

		flags,

	{

			break;

using std::cout; using std::endl;

	SAFE_RELEASE(m_pVertexBuffer);

		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

int SEGMENT = 36;

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}

		exit(1);

	SAFE_RELEASE(m_pDepthStencilTexture);

			index_offset += fv;

	D3D11_BUFFER_DESC ibDesc;

	m_pPixelShader = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}



	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pInputLayout = NULL;

		cout << "SDL_INIT_ERROR" << endl;

			index_offset += num_vertices;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



		pIList[j] = indexList[j];

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pTexture);

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

#include <SDL.h>

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	ibDesc.StructureByteStride = 0;

		&m_pSwapChain,

		pIList[j] = indexList[j];

	m_pSwapChain = NULL;

}





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		D3D11_SDK_VERSION,

	D3D11_BUFFER_DESC ibDesc;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	scDesc.BufferDesc.Height = rect.Height();

	// Loop over shapes

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			for (size_t v = 0; v < fv; v++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	//vector<Vertex> vertex_t;



		SDL_RenderClear(ren);

		// Loop over faces(polygon)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DOWN,

	txDesc.MiscFlags = 0;

	SDL_DestroyWindow(win);

			{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_VertexCount = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t ty =

		delete[] pVList;



	SAFE_RELEASE(m_pPixelShader);

{

		return 1;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	if (FAILED(hr))



}

	Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	std::string error;

		&attrib,

	m_pImmediateContext = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	float    nearZ = 0.1f;

	scDesc.BufferDesc.Width = rect.Width();

	//ピクセルシェーダー生成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				// access to vertex

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	return 0;

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pPixelShader);

	auto& shapes = reader.GetShapes();

	txDesc.SampleDesc.Count = 1;

		pVList[i] = vertexlist[i];

	XMFLOAT4 pos;               //座標(x,y,z)





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	return 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Clean up our objects and quit

		{

		KEY_PRESS_SURFACE_DOWN,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pSwapChain->Present(0, 0);



	Vertex* pVList = new Vertex[vcount];

	ZeroMemory(&txDesc, sizeof(txDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	dsDesc.Texture2D.MipSlice = 0;

	//Create Index

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};

	scDesc.Windowed = TRUE;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

}



	m_pDepthStencilTexture = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderClear(ren);



	m_pLightBuffer = NULL;

	UINT flags = 0;

	//Key press surfaces constants

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	for (size_t s = 0; s < shapes.size(); s++)



				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

	auto& shapes = reader.GetShapes();

		// Loop over faces(polygon)

		D3D11_SDK_VERSION,

	enum KeyPressSurfaces



	Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{



	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



};

	{

		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (FAILED(hr))

	if (!reader.Warning().empty())

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	pBackBuffer->Release();

	for (int i = 0; i < 3; i++)







	SAFE_RELEASE(m_pTextureView);

	Release();

	scDesc.Windowed = TRUE;

	Release();

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pSampler);

int main(int, char**)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	pBackBuffer->Release();

			//Select surfaces based on key press

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDevice = NULL;

		return hr;

	ibDesc.StructureByteStride = 0;



				tinyobj::real_t ty =

	//Key press surfaces constants



		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderPresent(ren);

}

		D3D_DRIVER_TYPE_HARDWARE,

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

		return hr;

	CRect                rect;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



#include "DirectXManager.h"

	UINT offsets = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		return hr;

		&materials,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_pDepthStencilView = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];







				break;

	SAFE_RELEASE(m_pMatrixBuffer);

#include <iostream>





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::vector<tinyobj::shape_t> shapes;



int main(int, char**)



	if (!reader.Warning().empty())

	SDL_Quit();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	if (FAILED(hr))

	if (FAILED(hr))

		SDL_RenderClear(ren);

	}

	dsDesc.Texture2D.MipSlice = 0;

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//インデックスバッファ作成

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pVertexShader = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4 pos;               //座標(x,y,z)

}

	WORD   icount = indexList.size();

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

/*

	m_pDepthStencilView = NULL;

		&m_pDevice,

		SDL_RenderCopy(ren, tex, NULL, NULL);

			//Select surfaces based on key press



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	D3D_FEATURE_LEVEL level;



void CD3DTest::Render()

				break;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.OutputWindow = hwnd;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantMatrixBuffer {





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;





};

/*

		SDL_RenderPresent(ren);

		return hr;

	m_pRenderTargetView = NULL;

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

				break;

	//頂点バッファ作成

	SDL_FreeSurface(suf);



#include "DirectXManager.h"

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT strides = sizeof(Vertex);

	auto& materials = reader.GetMaterials();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	enum KeyPressSurfaces

				break;

	m_Viewport.Height = (FLOAT)rect.Height();



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderPresent(ren);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT offsets = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	Release();





		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		if (!reader.Error().empty())

	XMFLOAT4X4 world;

		{

}

	for (int i = 0; i < 3; i++)

				break;

	if (FAILED(hr))

		{



	//深度ステンシルバッファ作成



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	dsDesc.Format = txDesc.Format;



	vbDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)



	XMFLOAT4X4 world;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pInputLayout = NULL;

	txDesc.Height = rect.Height();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		&materials,

	//vector<WORD> index_t;

		KEY_PRESS_SURFACE_DOWN,

	int     vcount = vertexlist.size();

			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				indexlist.push_back(index);

}

	ConstantLight    pntLight; //点光源

	txDesc.Width = rect.Width();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	}

	{

	//vector<Vertex> vertex_t;

#include <iostream>

	//First we need to start up SDL, and make sure it went ok

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		{

	tinyobj::ObjReader reader;

		SDL_RenderPresent(ren);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				// access to vertex

	cbDesc.StructureByteStride = 0;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Key press surfaces constants



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				WORD index = idx.vertex_index;

	vbDesc.CPUAccessFlags = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		R"(cube.obj)");

#include <SDL.h>



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	XMFLOAT4X4 world;

		flags,

CD3DTest::~CD3DTest()

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		&attrib,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Height = rect.Height();

		}

	SDL_DestroyTexture(tex);



				vertex.push_back(vertex_tmp);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

#include <iostream>

	}

#include <SDL.h>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

	{



	for (int i = 0; i < 3; i++)

struct ConstantLightBuffer {

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		NULL,

		R"(cube.obj)");

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	tinyobj::ObjReader reader;

	txDesc.SampleDesc.Count = 1;

	pBackBuffer->Release();

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;

			case SDLK_LEFT:

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Key press surfaces constants

#include <iostream>



		return hr;

	std::vector<tinyobj::material_t> materials;

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	txDesc.Height = rect.Height();

	m_pVertexShader = NULL;

	{

	m_IndexCount = 0;

		SDL_RenderClear(ren);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				break;



	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			}

		}

	m_VertexCount = vcount;

	{

		delete[] pVList;

			}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pLightBuffer);

#include <iostream>



		pLevels,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return 0;



	SAFE_RELEASE(m_pIndexBuffer);



	}*/

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&level,



				indexlist.push_back(index);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	tinyobj::attrib_t attrib;

	m_pDevice = NULL;

		D3D11_SDK_VERSION,



	tinyobj::attrib_t attrib;

	m_Viewport.Height = (FLOAT)rect.Height();





	SDL_DestroyTexture(tex);

			case SDLK_LEFT:

struct ConstantLight {

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		//User presses a key

	irData.SysMemSlicePitch = 0;





	SAFE_RELEASE(m_pLightBuffer);





	}





	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vrData.pSysMem = &pVList[0];



	UINT flags = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	{

			{

		//User presses a key

	ConstantMatrixBuffer cmb;

		return hr;

		if (!ret)

	//vector<Vertex> vertex_t;

	ibDesc.MiscFlags = 0;

	ConstantMatrixBuffer cmb;

	auto& materials = reader.GetMaterials();





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	/*

		{



	/*



	m_Viewport.TopLeftY = 0;



			switch (e.key.keysym.sym)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_Delay(1000);



		// Loop over faces(polygon)

	ConstantMaterial material; //物体の質感

	pBackBuffer->Release();

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

	}

	}

	}

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

void CD3DTest::Release()

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (size_t s = 0; s < shapes.size(); s++)

};

	SDL_Event e;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	UINT strides = sizeof(Vertex);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

#include <iostream>

				// access to vertex

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pVertexBuffer);

	irData.SysMemPitch = 0;

};



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			case SDLK_RIGHT:

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_FreeSurface(bmp);



	cbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (int i = 0; i < 3; i++)

	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

		return hr;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	cbDesc.MiscFlags = 0;



	XMFLOAT4X4 projection;

		R"(cube.obj)");

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	auto& materials = reader.GetMaterials();

{

	m_Angle += XMConvertToRadians(1.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//Create Index

		//User presses a key

	m_Viewport.MinDepth = 0.0f;

};



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Event e;

	std::string error;

		return hr;

		KEY_PRESS_SURFACE_DOWN,

	//Create Index

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <SDL.h>



		if (e.type == SDL_QUIT)

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.Windowed = TRUE;

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	WORD   icount = indexList.size();

};



	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pImmediateContext);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pTextureView);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{





	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&error,

	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	D3D11_BUFFER_DESC cbDesc;





				// access to vertex



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//頂点シェーダー生成

	//Create Index

		&level,



	m_Viewport.TopLeftY = 0;

	SDL_Quit();

	std::vector<tinyobj::shape_t> shapes;



	XMFLOAT4 specular;          //反射(r,g,b)

		D3D11_SDK_VERSION,

	}

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyTexture(tex);



	ConstantMaterial material; //物体の質感

	m_pPixelShader = NULL;

	{

	Vertex* pVList = new Vertex[vcount];



	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

	m_Viewport.MinDepth = 0.0f;

		if (!reader.Error().empty())

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



}

	if (FAILED(hr))

	}





	}

		return hr;



	return 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				// access to vertex

	vbDesc.CPUAccessFlags = 0;



	m_pVertexBuffer = NULL;

	auto& shapes = reader.GetShapes();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	Release();

	if (FAILED(hr))

#include <SDL.h>

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pImmediateContext);

		&m_pDevice,

		&m_pDevice,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

		SDL_RenderClear(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	float    fov = XMConvertToRadians(20.0f);

	{

	m_IndexCount = icount;

		SDL_Delay(1000);

		SDL_Delay(1000);

	m_pMatrixBuffer = NULL;

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

		}

	return 0;

	m_pImmediateContext = NULL;

		SDL_Delay(1000);

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext = NULL;

				WORD index = idx.vertex_index;

		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC cbDesc;

struct ConstantMaterial {

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		//User presses a key

		exit(1);

}

	auto& materials = reader.GetMaterials();

			switch (e.key.keysym.sym)

	scDesc.OutputWindow = hwnd;

		{



	SAFE_RELEASE(m_pVertexShader);

	return 0;



				break;

			index_offset += fv;

				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//定数バッファ作成

};

			//Select surfaces based on key press

	vector<WORD> indexList;

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	irData.pSysMem = &pIList[0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexBuffer = NULL;

		NULL,



		else if (e.type == SDL_KEYDOWN)

	vrData.SysMemPitch = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	CRect                rect;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	tinyobj::attrib_t attrib;

	std::string error;

		SDL_Delay(1000);

		//User presses a key

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_TOTAL



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	tinyobj::ObjReader reader;

	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ID3D11Texture2D* pBackBuffer;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{

#include <iostream>



	};

		}

	D3D11_SAMPLER_DESC smpDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	irData.pSysMem = &pIList[0];



	Release();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_SAMPLER_DESC smpDesc;

			{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMFLOAT4 pos;               //座標(x,y,z)



	vbDesc.StructureByteStride = 0;

				break;



	std::string inputfile = "test.obj";

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			}

	if (FAILED(hr))

	}



		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include <iostream>

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.BufferDesc.Height = rect.Height();



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Event e;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	//頂点レイアウト作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//Vertex* pVList = new Vertex[vcount];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pRenderTargetView);



	SDL_Event e;



	if (m_pImmediateContext)

	m_IndexCount = 0;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

};

	if (FAILED(hr))



	return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		SDL_RenderClear(ren);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_pTextureView = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderClear(ren);

	//頂点バッファ作成

	enum KeyPressSurfaces

	txDesc.MipLevels = 1;

		&scDesc,



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderPresent(ren);

	ConstantLight    pntLight; //点光源

	ConstantMaterial material; //物体の質感

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	ConstantMaterial material; //物体の質感

{

	m_pDepthStencilView = NULL;

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyRenderer(ren);

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	}

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pDevice);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				indexlist.push_back(index);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			}



#include <SDL.h>

		}

			}

	SAFE_RELEASE(m_pSampler);

	irData.SysMemPitch = 0;

	m_pPixelShader = NULL;

				break;

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

	//Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	D3D_FEATURE_LEVEL level;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_VertexCount = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::vector<tinyobj::shape_t> shapes;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}

			{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		R"(cube.obj)");





		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		}

	txDesc.CPUAccessFlags = 0;

struct ConstantLight {

	scDesc.OutputWindow = hwnd;

int main(int, char**)

	SDL_FreeSurface(suf);



using std::cout; using std::endl;



{

	return;

		&scDesc,



	txDesc.Width = rect.Width();

	m_pIndexBuffer = NULL;



				// access to vertex

	dsDesc.Format = txDesc.Format;

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				indexlist.push_back(index);

			switch (e.key.keysym.sym)

	int     vcount = vertexlist.size();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <iostream>

	pBackBuffer->Release();

	//Clean up our objects and quit

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pSampler = NULL;

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





}

	}

void CD3DTest::Release()

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Key press surfaces constants

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

int SEGMENT = 36;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	m_pTextureView = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	/*

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

void CD3DTest::Render()

	txDesc.Height = rect.Height();

	if (!error.empty())



	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//インデックスバッファ作成

{



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyWindow(win);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vrData.pSysMem = &pVList[0];

			exit(1);

		return hr;

	vector<WORD> indexList;

				vertex.push_back(vertex_tmp);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





		// Loop over faces(polygon)

	{



	ConstantMatrixBuffer cmb;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			}



	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vrData.pSysMem = &pVList[0];

		cout << "SDL_INIT_ERROR" << endl;

	m_pVertexShader = NULL;

	SDL_DestroyWindow(win);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	tinyobj::attrib_t attrib;

	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#include <SDL.h>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pTexture);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;









	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

			{

	if (!reader.Warning().empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	D3D11_SUBRESOURCE_DATA irData;

	//Vertex* pVList = new Vertex[vcount];

	UINT offsets = 0;







	if (!error.empty())

	scDesc.SampleDesc.Quality = 0;

		&level,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <SDL.h>

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <SDL.h>

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.ArraySize = 1;

			for (size_t v = 0; v < fv; v++)

	irData.SysMemSlicePitch = 0;



	if (FAILED(hr))

	pBackBuffer->Release();

	//vector<Vertex> vertex_t;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

struct ConstantMaterial {

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	while (SDL_PollEvent(&e) != 0)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReader reader;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		pIList[j] = indexList[j];

			break;

	ibDesc.StructureByteStride = 0;

	CRect                rect;

	m_Viewport.Width = (FLOAT)rect.Width();



	m_pTexture = NULL;

	D3D11_SUBRESOURCE_DATA vrData;







	D3D11_SAMPLER_DESC smpDesc;

	{

	m_Viewport.TopLeftX = 0;

			switch (e.key.keysym.sym)

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

};

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





	cbDesc.StructureByteStride = 0;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		1,



		R"(cube.obj)");

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

				indexlist.push_back(idx.vertex_index);



			{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			// Loop over vertices in the face.

	std::vector<tinyobj::shape_t> shapes;

		return hr;

	SDL_DestroyWindow(win);

	//頂点シェーダー生成

		return hr;



	m_VertexCount = 0;

	}

		return hr;



{

struct ConstantMaterial {

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	irData.SysMemSlicePitch = 0;

	//頂点バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	irData.pSysMem = &pIList[0];

	std::string imagePath = "hello.bmp";

			{

	vbDesc.CPUAccessFlags = 0;

struct ConstantMatrixBuffer {





	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.BufferDesc.Width = rect.Width();

	DXGI_SWAP_CHAIN_DESC scDesc;

	UINT flags = 0;

				indexlist.push_back(idx.vertex_index);

		return hr;

CD3DTest::~CD3DTest()

	ConstantMaterial material; //物体の質感

	if (!reader.Warning().empty())

		return hr;

		{

	std::string imagePath = "hello.bmp";

	}

	//vector<Vertex> vertex_t;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Key press surfaces constants

	WORD   icount = indexList.size();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	tinyobj::attrib_t attrib;

	D3D11_BUFFER_DESC vbDesc;

		&scDesc,

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (!reader.Warning().empty())

				tinyobj::real_t ty =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

	SDL_FreeSurface(suf);

	bool ret = tinyobj::LoadObj(

			{







	UINT offsets = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		KEY_PRESS_SURFACE_TOTAL

	m_pDepthStencilTexture = NULL;

			}

	{

		return hr;

	int     vcount = vertexlist.size();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

 * Lesson 1: Hello World!

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	//ピクセルシェーダー生成





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderPresent(ren);

	}*/

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pSampler = NULL;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vector<Vertex> vertexlist;

		return hr;



	m_Viewport.Height = (FLOAT)rect.Height();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4X4 projection;

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t ty =

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

		}

		&scDesc,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	//深度ステンシルバッファ作成

	ibDesc.CPUAccessFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))



		return hr;





	txDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_DEFAULT,



	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	vector<WORD> indexList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.SampleDesc.Count = 1;

	{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

	SAFE_RELEASE(m_pDevice);

	ID3D11Texture2D* pBackBuffer;

	m_pTexture = NULL;

	if (FAILED(hr))

	}

	delete[] pVList;



	//頂点シェーダー生成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_VertexCount = vcount;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&scDesc,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#include <iostream>



			for (size_t v = 0; v < num_vertices; v++)



#include <SDL.h>

			break;

		return hr;

	float    nearZ = 0.1f;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pIndexBuffer = NULL;

			}

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



#define TINYOBJLOADER_IMPLEMENTATION

	{

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pTexture);

		m_pImmediateContext->ClearState();



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	return 0;

int main(int, char**)

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pPixelShader);

		KEY_PRESS_SURFACE_UP,

	float    farZ = 100.0f;





#include <SDL.h>

	tinyobj::ObjReaderConfig reader_config;

	UINT strides = sizeof(Vertex);



	{

	scDesc.BufferDesc.Width = rect.Width();

		&materials,





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	cbDesc.StructureByteStride = 0;



	SDL_Quit();

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//テクスチャ読み込み

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	float    nearZ = 0.1f;

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4X4 projection;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	irData.SysMemPitch = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))



{



	m_pTexture = NULL;



	vbDesc.StructureByteStride = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			default:

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pDevice,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};

};





}

	//頂点レイアウト作成

		}

};

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

int main(int, char**)

	D3D11_BUFFER_DESC ibDesc;

				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

			default:

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (FAILED(hr))

	Release();

	{



	if (!error.empty())



				// access to vertex



			exit(1);

	{

	if (FAILED(hr))

	//インデックスバッファ作成

{

	XMFLOAT4X4 view;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::vector<tinyobj::shape_t> shapes;

			case SDLK_RIGHT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	std::vector<tinyobj::shape_t> shapes;

			int num_vertices = shape.mesh.num_face_vertices[f];



	txDesc.Height = rect.Height();



{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		pLevels,

		size_t index_offset = 0;



	SDL_DestroyTexture(tex);

	irData.SysMemPitch = 0;

	dsDesc.Texture2D.MipSlice = 0;



	/*

	//Key press surfaces constants

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

			case SDLK_UP:

		D3D_DRIVER_TYPE_HARDWARE,

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];







	//First we need to start up SDL, and make sure it went ok

	m_IndexCount = icount;



	}*/

	if (FAILED(hr))



		SDL_Delay(1000);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SDL_DestroyWindow(win);

	m_pTexture = NULL;

				indexlist.push_back(index);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	D3D11_SUBRESOURCE_DATA vrData;

				// access to vertex

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		}



	std::vector<tinyobj::material_t> materials;

	std::string error;

	if (!error.empty())

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

			int num_vertices = shape.mesh.num_face_vertices[f];





	HRESULT              hr;

	std::vector<tinyobj::material_t> materials;

	int     vcount = vertexlist.size();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	txDesc.MipLevels = 1;

				WORD index = idx.vertex_index;

		return hr;



	txDesc.Height = rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	std::vector<tinyobj::material_t> materials;

	m_pIndexBuffer = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);

	Release();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{

	vbDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

	return;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&level,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyRenderer(ren);

		else if (e.type == SDL_KEYDOWN)

}

	m_Viewport.Width = (FLOAT)rect.Width();

				vertex.push_back(vertex_tmp);



	if (m_pImmediateContext)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& shapes = reader.GetShapes();



	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//ピクセルシェーダー生成

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDepthStencilTexture);



	ibDesc.MiscFlags = 0;



		pVList[i] = vertexlist[i];

	ConstantMaterial material; //物体の質感

				break;

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		NULL,

	SDL_DestroyTexture(tex);

	for (int i = 0; i < 3; i++)

{

	m_pDevice = NULL;

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;



{

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Quit();

		return hr;

struct ConstantMatrixBuffer {

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    farZ = 100.0f;



		pVList[i] = vertexlist[i];

	for (int i = 0; i < vcount; i++)

	m_pDevice = NULL;

	ConstantLightBuffer clb;

	txDesc.ArraySize = 1;

				tinyobj::real_t tx =

{

		if (e.type == SDL_QUIT)

	{

	SDL_FreeSurface(bmp);

		}

#include <SDL.h>

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



#ifdef _DEBUG

		&scDesc,

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pTextureView);

		return hr;



	if (FAILED(hr))

{

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pTextureView);

	// Loop over shapes

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		R"(cube.obj)");



	txDesc.Usage = D3D11_USAGE_DEFAULT;



	//ピクセルシェーダー生成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t ty =

		if (!ret)

	SDL_Event e;

	SAFE_RELEASE(m_pInputLayout);



	vrData.SysMemPitch = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			for (size_t v = 0; v < num_vertices; v++)



	delete[] pIList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				vertex.push_back(vertex_tmp);

	for (int j = 0; j < icount; j++)





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	vbDesc.MiscFlags = 0;



			//Select surfaces based on key press





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		delete[] pIList;

	SAFE_RELEASE(m_pSampler);

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	D3D11_BUFFER_DESC cbDesc;

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

	SAFE_RELEASE(m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderClear(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&shapes,



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



void CD3DTest::Render()

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

/*

	if (FAILED(hr))

{

		return hr;

		NULL,

	/*

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

		&m_pDevice,



	for (const auto& shape : shapes)

	ConstantLight    pntLight; //点光源

	//Clean up our objects and quit

	while (SDL_PollEvent(&e) != 0)

	m_pDepthStencilView = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



				break;

		return hr;

	//深度ステンシルバッファ作成



	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pTextureView);

	ConstantMatrixBuffer cmb;

}


		//User presses a key



			index_offset += num_vertices;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.MiscFlags = 0;

	::GetClientRect(hwnd, &rect);

			}



		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//Key press surfaces constants

	{

	cbDesc.StructureByteStride = 0;

	//Create Index

		SDL_RenderClear(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

 * Lesson 1: Hello World!

			default:

		&m_pDevice,

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	XMFLOAT4X4 projection;

	tinyobj::attrib_t attrib;

				WORD index = idx.vertex_index;



			case SDLK_RIGHT:

		exit(1);

			switch (e.key.keysym.sym)

	vrData.pSysMem = &pVList[0];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;









	//Clean up our objects and quit





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

/*

		&m_pImmediateContext);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (size_t s = 0; s < shapes.size(); s++)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_DestroyWindow(win);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

}

{

	ConstantLight    pntLight; //点光源

	m_pIndexBuffer = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SDL_DestroyRenderer(ren);

	txDesc.MipLevels = 1;



	std::string inputfile = "test.obj";

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMFLOAT4 attenuate;         //減衰(a,b,c)



			// Loop over vertices in the face.

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	float    farZ = 100.0f;



			//Select surfaces based on key press

	}

	scDesc.OutputWindow = hwnd;

 * Lesson 1: Hello World!

	//頂点シェーダー生成

				tinyobj::real_t tx =

	//Key press surfaces constants

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//Create Index

		{

			case SDLK_RIGHT:

	ibDesc.MiscFlags = 0;

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    nearZ = 0.1f;

	//頂点バッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	}

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilTexture);

};

	m_pRenderTargetView = NULL;

};

/*

		}

	{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	m_pPixelShader = NULL;

	m_pDepthStencilTexture = NULL;

	scDesc.Windowed = TRUE;

		{

	m_pDevice = NULL;

	WORD   icount = indexList.size();

		pIList[j] = indexList[j];

		{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		&level,

	}



	if (FAILED(hr))

void CD3DTest::Release()

int main(int, char**)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

		if (!ret)

	//vector<Vertex> vertex_t;

		{

		if (!reader.Error().empty())

using std::cout; using std::endl;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4         ambient;  //環境光(r,g,b)



		else if (e.type == SDL_KEYDOWN)

				break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

}


	{

struct ConstantMatrixBuffer {

	delete[] pIList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pSampler = NULL;

void CD3DTest::Render()

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	CRect                rect;

	}

		pVList[i] = vertexlist[i];

	ConstantLight    pntLight; //点光源

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{





	irData.SysMemSlicePitch = 0;

		return hr;







using std::cout; using std::endl;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_VertexCount = vcount;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				indexlist.push_back(index);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	if (!error.empty())

	m_pLightBuffer = NULL;

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	auto& materials = reader.GetMaterials();

	vrData.SysMemSlicePitch = 0;

	UINT strides = sizeof(Vertex);



	ID3D11Texture2D* pBackBuffer;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.MipLevels = 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pVertexBuffer = NULL;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pLightBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();

		}

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ibDesc.StructureByteStride = 0;

	tinyobj::ObjReaderConfig reader_config;





		KEY_PRESS_SURFACE_RIGHT,

	m_pIndexBuffer = NULL;

			index_offset += num_vertices;

	{

		return hr;



	//Create Index

	m_pSampler = NULL;



	m_pInputLayout = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&m_pSwapChain,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#endif



	SDL_FreeSurface(suf);

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Quit();

	//vector<Vertex> vertex_t;

			for (size_t v = 0; v < num_vertices; v++)

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

				// access to vertex

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

using std::cout; using std::endl;

	tinyobj::ObjReader reader;

			exit(1);

{

	enum KeyPressSurfaces

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			index_offset += num_vertices;

			exit(1);

};



	ConstantMatrixBuffer cmb;



				// access to vertex

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_SAMPLER_DESC smpDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

	txDesc.MipLevels = 1;

			exit(1);

	D3D11_SUBRESOURCE_DATA irData;

#include "DirectXManager.h"

	SAFE_RELEASE(m_pRenderTargetView);



	cbDesc.MiscFlags = 0;

	m_pVertexBuffer = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//頂点バッファ作成

	m_Viewport.TopLeftX = 0;

		&error,

 * Lesson 1: Hello World!

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferCount = 1;

			for (size_t v = 0; v < fv; v++)

	auto& attrib = reader.GetAttrib();

	D3D11_BUFFER_DESC cbDesc;

	vrData.SysMemPitch = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	scDesc.Windowed = TRUE;

	m_IndexCount = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//ビューポート設定

	m_pDepthStencilView = NULL;



	cbDesc.StructureByteStride = 0;

	tinyobj::ObjReader reader;

	float    farZ = 100.0f;

	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	for (int j = 0; j < icount; j++)





			index_offset += num_vertices;

		m_pImmediateContext->ClearState();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	bool ret = tinyobj::LoadObj(

	int     vcount = vertexlist.size();

		delete[] pVList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pIndexBuffer);

	//ピクセルシェーダー生成



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	UINT offsets = 0;

	if (FAILED(hr))

			{

	Release();

	{

	//Clean up our objects and quit





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			switch (e.key.keysym.sym)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

	if (FAILED(hr))

};

	cbDesc.MiscFlags = 0;





	SDL_Event e;

{

			{

	scDesc.BufferDesc.Width = rect.Width();



	return 0;

	WORD   icount = indexList.size();

			default:

	for (int i = 0; i < 3; i++)

		SDL_RenderPresent(ren);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pDevice);

		NULL,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//ビューポート設定

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				tinyobj::real_t ty =

	//vector<WORD> index_t;

		{



	::GetClientRect(hwnd, &rect);

		&m_pSwapChain,

}

CD3DTest::CD3DTest()

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			default:

};



	m_VertexCount = vcount;

	XMFLOAT4X4 world;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	::GetClientRect(hwnd, &rect);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_IndexCount = icount;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include <SDL.h>

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pSwapChain);

		{

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.pSysMem = &pVList[0];

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

int main(int, char**)

		SDL_RenderClear(ren);

		}

	//頂点バッファ作成

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	delete[] pVList;

	XMFLOAT4 pos;               //座標(x,y,z)

				vertex.push_back(vertex_tmp);





	if (FAILED(hr))

	{

	int     vcount = vertexlist.size();



		return hr;

			break;



			for (size_t v = 0; v < num_vertices; v++)

	//vector<WORD> index_t;

#include <SDL.h>

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pLightBuffer = NULL;





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			// Loop over vertices in the face.

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);





			case SDLK_DOWN:

		return hr;

		//User requests quit





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.Format = txDesc.Format;

	ibDesc.CPUAccessFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





		{

struct ConstantMatrixBuffer {

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (SDL_Init(SDL_INIT_VIDEO != 0))





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Event e;



	m_pInputLayout = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	scDesc.OutputWindow = hwnd;

	{

	UINT flags = 0;

		}

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

		SDL_Delay(1000);

			break;

	ConstantLightBuffer clb;

	CRect                rect;



	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4X4 view;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty =

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

{



		pIList[j] = indexList[j];

	//Create Index



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.MipLevels = 1;

	scDesc.Windowed = TRUE;

		NULL,







	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	//頂点シェーダー生成





	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

		return hr;

		&m_pSwapChain,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	delete[] pIList;

	//テクスチャ読み込み

	//Clean up our objects and quit

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;

	pBackBuffer->Release();

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	delete[] pVList;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

struct ConstantLight {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

		return hr;



	//vector<WORD> index_t;

	txDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_UP,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	irData.pSysMem = &pIList[0];

		return hr;

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	D3D11_TEXTURE2D_DESC txDesc;

	std::string inputfile = "test.obj";



void CD3DTest::Release()

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return 0;

	{



		SDL_RenderPresent(ren);



	//深度ステンシルバッファ作成

		&scDesc,

	for (const auto& shape : shapes)

		NULL,

	UINT flags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

struct ConstantMaterial {

	txDesc.MipLevels = 1;



	// Loop over shapes

	for (int j = 0; j < icount; j++)

		1,





	ConstantMaterial material; //物体の質感

		exit(1);

		pVList[i] = vertexlist[i];

			default:

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	auto& materials = reader.GetMaterials();



int SEGMENT = 36;

	}

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

				tinyobj::real_t tx =

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pVList[i] = vertexlist[i];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	XMFLOAT4X4 view;

void CD3DTest::Release()

using std::cout; using std::endl;

			for (size_t v = 0; v < num_vertices; v++)

		KEY_PRESS_SURFACE_DEFAULT,

	//ビューポート設定

				vertex.push_back(vertex_tmp);

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//Key press surfaces constants

	m_pVertexShader = NULL;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			//Select surfaces based on key press



		}



		// Loop over faces(polygon)

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			default:





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pVertexShader = NULL;







		&error,

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;





	SAFE_RELEASE(m_pMatrixBuffer);

		&m_pSwapChain,

	{



				WORD index = idx.vertex_index;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	{

	txDesc.MiscFlags = 0;

#include <SDL.h>

	txDesc.CPUAccessFlags = 0;

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.StructureByteStride = 0;

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	pBackBuffer->Release();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)



			{



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	irData.SysMemPitch = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

	//Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);

	if (FAILED(hr))

	{

	m_pImmediateContext = NULL;

		return 1;

		SDL_RenderPresent(ren);

		return hr;

}

	//頂点シェーダー生成

			for (size_t v = 0; v < fv; v++)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))



}

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.ambient, lightAmbient);

}





	txDesc.MiscFlags = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

/*

	Release();



		&attrib,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];


