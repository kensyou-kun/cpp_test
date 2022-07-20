	XMFLOAT4 specular;          //反射(r,g,b)

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	{

	irData.pSysMem = &pIList[0];



				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Quit();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];







/*

	vector<Vertex> vertexlist;

{

	};

	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC cbDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

#ifdef _DEBUG

	UINT flags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	}



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

};

			int num_vertices = shape.mesh.num_face_vertices[f];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_FreeSurface(suf);

CD3DTest::~CD3DTest()

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	{

				// access to vertex

	XMFLOAT4X4 view;

	txDesc.MiscFlags = 0;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



			}



	m_pDevice = NULL;



		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	/*

			index_offset += fv;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	LoadObj(vertexlist, indexList);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	HRESULT              hr;

HRESULT CD3DTest::Create(HWND hwnd)



	scDesc.SampleDesc.Count = 1;



	XMFLOAT4         ambient;  //環境光(r,g,b)



	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pTexture);

	for (int i = 0; i < 3; i++)

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

using std::cout; using std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t tx =

	{

		//User presses a key

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pIndexBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			//Select surfaces based on key press

};

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferDesc.Width = rect.Width();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

struct ConstantMaterial {

			case SDLK_DOWN:

	{

	vrData.pSysMem = &pVList[0];

		return hr;

		if (e.type == SDL_QUIT)

	Vertex* pVList = new Vertex[vcount];





	m_pImmediateContext = NULL;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

}
				WORD index = idx.vertex_index;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	enum KeyPressSurfaces

	txDesc.MipLevels = 1;



	cbDesc.MiscFlags = 0;



	}*/

}

		size_t index_offset = 0;  // インデントのオフセット



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		size_t index_offset = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	irData.SysMemSlicePitch = 0;









					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	{

		D3D11_SDK_VERSION,



		R"(cube.obj)");





		return hr;



	XMFLOAT4X4 world;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	if (FAILED(hr))

	if (m_pImmediateContext)

		SDL_Delay(1000);

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_SAMPLER_DESC smpDesc;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 ambient;           //環境(r,g,b)



	SAFE_RELEASE(m_pIndexBuffer);

#include <iostream>



	SAFE_RELEASE(m_pSampler);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//Create Index

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.eyePos, eye);

	std::vector<tinyobj::material_t> materials;

		&error,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		if (e.type == SDL_QUIT)

	SDL_Event e;

	}

	{

};

		}

	vector<WORD> indexList;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

			{



				break;

		return hr;

	dsDesc.Format = txDesc.Format;

			{

	}

	SAFE_RELEASE(m_pMatrixBuffer);

	{

			{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pImmediateContext);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float    farZ = 100.0f;

	irData.SysMemPitch = 0;

		{

	dsDesc.Texture2D.MipSlice = 0;

	irData.SysMemSlicePitch = 0;





#include <SDL.h>

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_BUFFER_DESC vbDesc;

		return hr;

#include <iostream>

	Vertex* pVList = new Vertex[vcount];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			for (size_t v = 0; v < fv; v++)

	cbDesc.CPUAccessFlags = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	int     vcount = vertexlist.size();

		//User requests quit



	tinyobj::ObjReaderConfig reader_config;

		&m_pImmediateContext);

		}

		return hr;

		pLevels,



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.MiscFlags = 0;

		return hr;

#include <iostream>

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.Windowed = TRUE;



	};

	//ビューポート設定

	return;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pDevice);



	m_VertexCount = vcount;

CD3DTest::CD3DTest()

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		}

	//Key press surfaces constants

	//ピクセルシェーダー生成

	irData.SysMemPitch = 0;

int SEGMENT = 36;



{

HRESULT CD3DTest::Create(HWND hwnd)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&shapes,



				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.MiscFlags = 0;

		}

	//Clean up our objects and quit

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyTexture(tex);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	/*

			}

	SAFE_RELEASE(m_pTexture);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.SampleDesc.Count = 1;

	::GetClientRect(hwnd, &rect);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





		SDL_Delay(1000);

}

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	scDesc.OutputWindow = hwnd;

	txDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pIndexBuffer = NULL;

		&scDesc,



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		}



		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ibDesc.MiscFlags = 0;

{

};



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//Clean up our objects and quit

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);

	//頂点バッファ作成



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			index_offset += fv;

	if (FAILED(hr))





	SAFE_RELEASE(m_pImmediateContext);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

		}

	cbDesc.StructureByteStride = 0;

	}

 */

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

#define TINYOBJLOADER_IMPLEMENTATION





	ConstantMatrixBuffer cmb;

		return hr;

	m_Viewport.TopLeftY = 0;

	{

struct ConstantLightBuffer {

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	SDL_DestroyTexture(tex);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	float    fov = XMConvertToRadians(20.0f);

	irData.pSysMem = &pIList[0];

	LoadObj(vertexlist, indexList);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	m_pLightBuffer = NULL;

	txDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_UP:

		{

{

		{

		//User presses a key

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext = NULL;

	SDL_DestroyWindow(win);

	txDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				// access to vertex

}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pMatrixBuffer = NULL;

		delete[] pIList;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				tinyobj::real_t ty =



				vertex.push_back(vertex_tmp);

	//vector<WORD> index_t;

	//頂点バッファ作成

		return hr;

	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	SAFE_RELEASE(m_pIndexBuffer);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

	{

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//Clean up our objects and quit

	m_VertexCount = 0;

	ibDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexBuffer = NULL;



	D3D11_TEXTURE2D_DESC txDesc;

	dsDesc.Format = txDesc.Format;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

HRESULT CD3DTest::Create(HWND hwnd)

	}

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_Delay(1000);

	m_pVertexBuffer = NULL;

	m_pSwapChain->Present(0, 0);



	::ZeroMemory(&scDesc, sizeof(scDesc));



	SDL_Quit();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	enum KeyPressSurfaces



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return hr;

	UINT flags = 0;

		SDL_Delay(1000);



{

};

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_VertexCount = vcount;

int main(int, char**)



		}

}

	vrData.SysMemPitch = 0;

	return 0;

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMatrixBuffer cmb;

			case SDLK_RIGHT:



	SDL_DestroyTexture(tex);

	SDL_Event e;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <iostream>

#define TINYOBJLOADER_IMPLEMENTATION

			exit(1);

				tinyobj::real_t tx =



	m_pIndexBuffer = NULL;

		if (!ret)

	D3D11_BUFFER_DESC ibDesc;

			{

	{

};

	Release();

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 specular;          //反射(r,g,b)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.Height = rect.Height();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	//vector<Vertex> vertex_t;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			default:



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		//User requests quit

	SDL_DestroyWindow(win);

	XMFLOAT4         ambient;  //環境光(r,g,b)

CD3DTest::CD3DTest()

{

	m_IndexCount = 0;

		SDL_RenderClear(ren);

void CD3DTest::Render()

	m_pPixelShader = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	}*/



			for (size_t v = 0; v < num_vertices; v++)

	m_pSampler = NULL;

	{

	scDesc.SampleDesc.Quality = 0;

	m_pSwapChain->Present(0, 0);



		return hr;

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



void CD3DTest::Render()

	::ZeroMemory(&scDesc, sizeof(scDesc));

/*

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	/*

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{



	if (FAILED(hr))

{

	if (FAILED(hr))

	{

	if (m_pImmediateContext)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		delete[] pIList;

			case SDLK_LEFT:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);

	WORD* pIList = new WORD[icount];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_BUFFER_DESC vbDesc;

	//First we need to start up SDL, and make sure it went ok



		{



			index_offset += fv;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

#include <SDL.h>



		&scDesc,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		delete[] pVList;

#include "DirectXManager.h"

	vector<WORD> indexList;

	cbDesc.CPUAccessFlags = 0;

	CRect                rect;



{



			case SDLK_LEFT:

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext = NULL;

		R"(cube.obj)");

	XMStoreFloat4(&clb.eyePos, eye);



	ibDesc.MiscFlags = 0;

}



	ID3D11Texture2D* pBackBuffer;



void CD3DTest::Render()

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&error,

	UINT offsets = 0;

		&m_pDevice,

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.SampleDesc.Quality = 0;

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.eyePos, eye);

	};

	XMFLOAT4 pos;               //座標(x,y,z)



		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

				WORD index = idx.vertex_index;

		&shapes,

	}

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t tx =

		SDL_RenderClear(ren);

		}

	XMFLOAT4 ambient;           //環境(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	txDesc.CPUAccessFlags = 0;



				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pSwapChain);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{



	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_pDepthStencilView = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

		}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

struct ConstantMatrixBuffer {

	};

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

				// access to vertex



	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	irData.SysMemPitch = 0;



	//ビューポート設定



};



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	for (const auto& shape : shapes)



	m_pLightBuffer = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	//定数バッファ作成

		KEY_PRESS_SURFACE_LEFT,

		if (!reader.Error().empty())

		&scDesc,

	SDL_DestroyRenderer(ren);

		&materials,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

	//ピクセルシェーダー生成

	ConstantMatrixBuffer cmb;

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{

	XMFLOAT4 ambient;           //環境(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	HRESULT              hr;

	m_VertexCount = vcount;



	irData.SysMemPitch = 0;

	UINT offsets = 0;



	scDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		size_t index_offset = 0;

	UINT flags = 0;

	//Vertex* pVList = new Vertex[vcount];



			}



		delete[] pIList;

	ConstantMatrixBuffer cmb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pImmediateContext);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

using std::cout; using std::endl;



	//定数バッファ作成

		NULL,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDevice = NULL;

	cbDesc.MiscFlags = 0;



	m_pIndexBuffer = NULL;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	};

	m_pSwapChain->Present(0, 0);

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		{

	m_VertexCount = vcount;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	}

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (int i = 0; i < vcount; i++)

			case SDLK_UP:

	{

	{

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SAFE_RELEASE(m_pRenderTargetView);

	//vector<Vertex> vertex_t;

		pLevels,

	int     vcount = vertexlist.size();

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pDevice);

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

CD3DTest::~CD3DTest()



	return 0;

#include "DirectXManager.h"

		&error,



	XMStoreFloat4(&clb.eyePos, eye);



	m_pSampler = NULL;

	txDesc.ArraySize = 1;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	auto& attrib = reader.GetAttrib();



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_LEFT,

#include <SDL.h>



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.eyePos, eye);





	vector<WORD> indexList;

	SAFE_RELEASE(m_pTexture);

	m_pRenderTargetView = NULL;

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

			case SDLK_LEFT:

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		}

	D3D11_BUFFER_DESC ibDesc;

	std::string error;

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderPresent(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

	vbDesc.MiscFlags = 0;

CD3DTest::~CD3DTest()



		}

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pImmediateContext);

	LoadObj(vertexlist, indexList);



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4X4 projection;

			{

	if (FAILED(hr))

		1,



			case SDLK_RIGHT:

#ifdef _DEBUG

{

	D3D11_BUFFER_DESC cbDesc;

	vector<Vertex> vertexlist;

	vector<WORD> indexList;

		&m_pImmediateContext);



	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_TOTAL

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	auto& materials = reader.GetMaterials();



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		// Loop over faces(polygon)

	D3D11_SUBRESOURCE_DATA vrData;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyWindow(win);

	scDesc.SampleDesc.Quality = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pVertexShader = NULL;

	SDL_DestroyTexture(tex);

	vbDesc.MiscFlags = 0;

		R"(cube.obj)");

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyTexture(tex);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Event e;

{

		SDL_RenderPresent(ren);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantLightBuffer clb;

		return hr;



	m_pSwapChain->Present(0, 0);

			//Select surfaces based on key press

	};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.SampleDesc.Count = 1;

	if (m_pImmediateContext)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	ConstantLight    pntLight; //点光源

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		//User presses a key

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	D3D11_BUFFER_DESC cbDesc;

 * Lesson 1: Hello World!

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	scDesc.OutputWindow = hwnd;

		return hr;



};



	m_Viewport.TopLeftX = 0;





	if (FAILED(hr))

		&error,

	//Vertex* pVList = new Vertex[vcount];

	//ビューポート設定

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += fv;

	for (const auto& shape : shapes)

		pIList[j] = indexList[j];





};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pSwapChain);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//vector<WORD> index_t;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.TopLeftY = 0;

	std::vector<tinyobj::shape_t> shapes;

	SDL_FreeSurface(suf);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	tinyobj::ObjReader reader;

			int num_vertices = shape.mesh.num_face_vertices[f];

				break;

		return hr;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{

		// Loop over faces(polygon)

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

				tinyobj::real_t tx =

	std::vector<tinyobj::shape_t> shapes;

	SDL_Quit();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	bool ret = tinyobj::LoadObj(

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 ambient;           //環境(r,g,b)

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.MiscFlags = 0;

	//頂点バッファ作成

		if (e.type == SDL_QUIT)

				tinyobj::real_t ty =

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4X4 projection;

	}

	SAFE_RELEASE(m_pInputLayout);

	LoadObj(vertexlist, indexList);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pImmediateContext);

		SDL_RenderPresent(ren);

		D3D11_SDK_VERSION,

void CD3DTest::Release()

		return hr;

	m_IndexCount = icount;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pPixelShader);

	ConstantLightBuffer clb;

		//User presses a key

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	enum KeyPressSurfaces

			case SDLK_UP:

	{

	{

	if (FAILED(hr))

	}

		return hr;



		return hr;

			case SDLK_RIGHT:

			{



	WORD   icount = indexList.size();

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}
	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	SDL_DestroyRenderer(ren);

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	HRESULT              hr;

	return 0;

		&shapes,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		&scDesc,

		return hr;

	txDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pSampler);



	return hr;

	if (!error.empty())

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_UP:

	}

	SDL_Event e;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.TopLeftX = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





				indexlist.push_back(idx.vertex_index);

void CD3DTest::Render()

				break;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

	txDesc.ArraySize = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.SampleDesc.Count = 1;

		return hr;





CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);

			switch (e.key.keysym.sym)

	}

		}

	int     vcount = vertexlist.size();

		return hr;

	}

}

	D3D11_BUFFER_DESC ibDesc;

		delete[] pIList;

	txDesc.ArraySize = 1;



			}

{

CD3DTest::CD3DTest()

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pDevice);

	}

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pPixelShader);







		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	tinyobj::ObjReaderConfig reader_config;

		KEY_PRESS_SURFACE_DOWN,

	m_pSwapChain = NULL;





	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pLightBuffer = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.TopLeftY = 0;



	//Clean up our objects and quit

int main(int, char**)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&materials,

	{

		KEY_PRESS_SURFACE_DEFAULT,



	//頂点バッファ作成

	UINT offsets = 0;

		}



			case SDLK_LEFT:

	scDesc.OutputWindow = hwnd;

		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.MinDepth = 0.0f;

	::GetClientRect(hwnd, &rect);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//ビューポート設定

	if (FAILED(hr))



#include <SDL.h>

	return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::vector<tinyobj::shape_t> shapes;

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Quit();

	SAFE_RELEASE(m_pPixelShader);

	m_pDepthStencilTexture = NULL;

		delete[] pIList;

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_RIGHT:

	irData.SysMemSlicePitch = 0;

	WORD   icount = indexList.size();

		return 1;

				vertex.push_back(vertex_tmp);

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			exit(1);

	ConstantLightBuffer clb;





	if (FAILED(hr))

	}



			}

	if (FAILED(hr))

	m_pLightBuffer = NULL;



		R"(cube.obj)");

{

	//Clean up our objects and quit

	//頂点レイアウト作成



	m_pDepthStencilTexture = NULL;



	SAFE_RELEASE(m_pTexture);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.pSysMem = &pIList[0];



		size_t index_offset = 0;

			for (size_t v = 0; v < fv; v++)





	WORD   icount = indexList.size();





	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

		pLevels,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;



			for (size_t v = 0; v < fv; v++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

}

		size_t index_offset = 0;  // インデントのオフセット

				WORD index = idx.vertex_index;

	ZeroMemory(&txDesc, sizeof(txDesc));

		pLevels,

HRESULT CD3DTest::Create(HWND hwnd)

}
		return hr;

	if (m_pImmediateContext)

		cout << "SDL_INIT_ERROR" << endl;



	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pImmediateContext = NULL;

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		if (!reader.Error().empty())

{

	m_Viewport.MaxDepth = 1.0f;

	Release();

	DXGI_SWAP_CHAIN_DESC scDesc;

}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	//vector<WORD> index_t;

	tinyobj::attrib_t attrib;

				// access to vertex

	//Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	}*/

	delete[] pIList;

	m_pSwapChain = NULL;

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return;



	//頂点シェーダー生成

	//インデックスバッファ作成

	if (FAILED(hr))

		if (!reader.Error().empty())

		&m_pSwapChain,

			case SDLK_UP:



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pRenderTargetView = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		pLevels,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float    nearZ = 0.1f;

struct ConstantMatrixBuffer {

	delete[] pIList;

	m_pTextureView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		pIList[j] = indexList[j];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Viewport.MinDepth = 0.0f;

	//定数バッファ作成

	//First we need to start up SDL, and make sure it went ok

	m_pSampler = NULL;

	m_pSwapChain->Present(0, 0);

	scDesc.SampleDesc.Count = 1;



	SDL_DestroyWindow(win);



struct ConstantLight {



	SDL_Quit();

		pIList[j] = indexList[j];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	for (int i = 0; i < vcount; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;

		pVList[i] = vertexlist[i];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//Vertex* pVList = new Vertex[vcount];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	}

	ConstantMaterial material; //物体の質感





	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

		return 1;

	return hr;

	SAFE_RELEASE(m_pTexture);

		}

				break;

	m_pSwapChain->Present(0, 0);

		return hr;

 */

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





 */

	m_pSampler = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;



	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	/*

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点シェーダー生成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		{

	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

	//vector<Vertex> vertex_t;

		return hr;

	float    nearZ = 0.1f;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pInputLayout);

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}*/

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 view;

	m_VertexCount = vcount;

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//頂点レイアウト作成

}
	m_VertexCount = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_TEXTURE2D_DESC txDesc;

	m_pRenderTargetView = NULL;





				WORD index = idx.vertex_index;

	tinyobj::ObjReader reader;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





#include "DirectXManager.h"



		if (!reader.Error().empty())

	m_pTextureView = NULL;

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	}

		return hr;





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pMatrixBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 ambient;           //環境(r,g,b)

		&shapes,

	XMFLOAT4         eyePos;   //視点座標



		return hr;

{

	tinyobj::ObjReader reader;

		SDL_RenderClear(ren);



	txDesc.MipLevels = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





				WORD index = idx.vertex_index;



	irData.pSysMem = &pIList[0];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Quit();





		// Loop over faces(polygon)

			break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);



	D3D11_TEXTURE2D_DESC txDesc;

	WORD* pIList = new WORD[icount];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int main(int, char**)

	::GetClientRect(hwnd, &rect);

			//Select surfaces based on key press

				tinyobj::real_t ty =

	SDL_DestroyRenderer(ren);

}

		return hr;



	std::vector<tinyobj::shape_t> shapes;

	m_IndexCount = 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		R"(cube.obj)");

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pVertexBuffer);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexShader);

	SDL_FreeSurface(bmp);

				break;

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.Height = rect.Height();

	if (FAILED(hr))

			}

/*

			{

	m_pMatrixBuffer = NULL;

 * Lesson 1: Hello World!

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.SampleDesc.Count = 1;

#ifdef _DEBUG

	{

	ibDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.CPUAccessFlags = 0;

		&level,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	}

	D3D_FEATURE_LEVEL level;

	m_pVertexBuffer = NULL;

	return 0;

		//User requests quit

	float    farZ = 100.0f;

	}

	D3D11_SUBRESOURCE_DATA vrData;

	m_pIndexBuffer = NULL;

	m_pDepthStencilTexture = NULL;



	scDesc.BufferDesc.Height = rect.Height();

				// access to vertex

	std::vector<tinyobj::material_t> materials;

struct ConstantMatrixBuffer {

struct ConstantMatrixBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void CD3DTest::Render()

	return hr;

	SDL_DestroyTexture(tex);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ConstantMatrixBuffer cmb;

#include "DirectXManager.h"







	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				break;

				break;





	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);



	irData.pSysMem = &pIList[0];

	auto& attrib = reader.GetAttrib();

	vector<Vertex> vertexlist;

				break;



	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pTextureView);



	XMFLOAT4         eyePos;   //視点座標

	m_pInputLayout = NULL;

	scDesc.SampleDesc.Count = 1;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

struct ConstantMatrixBuffer {



	m_pImmediateContext = NULL;



	{

	{

		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//テクスチャ読み込み

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pTextureView = NULL;

	m_pImmediateContext = NULL;

	SDL_DestroyWindow(win);

	D3D11_TEXTURE2D_DESC txDesc;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			index_offset += num_vertices;

		&error,

		&m_pDevice,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Quit();

	enum KeyPressSurfaces

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.CPUAccessFlags = 0;



	cbDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC cbDesc;

	SDL_Quit();

	pBackBuffer->Release();

				indexlist.push_back(idx.vertex_index);

				break;

			exit(1);



				WORD index = idx.vertex_index;

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

		return hr;

				// access to vertex



HRESULT CD3DTest::Create(HWND hwnd)

	//ピクセルシェーダー生成

				tinyobj::real_t ty =



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	std::string imagePath = "hello.bmp";

	ConstantLight    pntLight; //点光源



 */

{

	m_VertexCount = 0;

	}

	WORD   icount = indexList.size();

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	m_pVertexBuffer = NULL;

}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	Release();

		else if (e.type == SDL_KEYDOWN)

	D3D_FEATURE_LEVEL level;

		return hr;

	txDesc.Height = rect.Height();

}

				break;

			break;

{



	return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	tinyobj::ObjReaderConfig reader_config;

		else if (e.type == SDL_KEYDOWN)

	txDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC ibDesc;

	txDesc.Width = rect.Width();

		// Loop over faces(polygon)

	delete[] pIList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pSampler = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

int main(int, char**)



	SAFE_RELEASE(m_pDepthStencilView);

		KEY_PRESS_SURFACE_TOTAL



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pTexture = NULL;





		1,

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

struct ConstantLight {

	cbDesc.StructureByteStride = 0;

{

	{

	//頂点レイアウト作成

	}

{

	XMFLOAT4X4 world;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Quality = 0;



	SAFE_RELEASE(m_pRenderTargetView);



	SAFE_RELEASE(m_pPixelShader);

			case SDLK_UP:



	float    farZ = 100.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

		pVList[i] = vertexlist[i];

	dsDesc.Format = txDesc.Format;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

{

	m_IndexCount = 0;

#include <SDL.h>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		&shapes,

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D11_SUBRESOURCE_DATA vrData;



	D3D11_BUFFER_DESC cbDesc;

#endif



		else if (e.type == SDL_KEYDOWN)

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTextureView = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		if (e.type == SDL_QUIT)

	vrData.SysMemSlicePitch = 0;

			default:

	/*

}
	}

	m_Viewport.Height = (FLOAT)rect.Height();

	tinyobj::ObjReaderConfig reader_config;

			case SDLK_UP:

	if (FAILED(hr))

			}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_RenderClear(ren);

		exit(1);

		NULL,

	float    fov = XMConvertToRadians(20.0f);

	std::vector<tinyobj::material_t> materials;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	m_pSampler = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	return hr;

		{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_BUFFER_DESC cbDesc;

		// Loop over faces(polygon)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int j = 0; j < icount; j++)

		SDL_RenderClear(ren);

{

	}

	}

	for (int j = 0; j < icount; j++)

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

int main(int, char**)

				WORD index = idx.vertex_index;

	return 0;

#include <iostream>

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t ty =

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC vbDesc;

	for (const auto& shape : shapes)

			{

		else if (e.type == SDL_KEYDOWN)

		&m_pSwapChain,

struct ConstantMatrixBuffer {

	UINT offsets = 0;

		return hr;

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_DestroyWindow(win);

		SDL_RenderClear(ren);

	//First we need to start up SDL, and make sure it went ok

	//ピクセルシェーダー生成



	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//頂点バッファ作成

		size_t index_offset = 0;  // インデントのオフセット

			//Select surfaces based on key press

				WORD index = idx.vertex_index;

	Release();

			default:

	//vector<Vertex> vertex_t;

	if (!reader.ParseFromFile(inputfile, reader_config))

		if (!reader.Error().empty())

				break;

#ifdef _DEBUG

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_DestroyTexture(tex);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	DXGI_SWAP_CHAIN_DESC scDesc;

	while (SDL_PollEvent(&e) != 0)

	enum KeyPressSurfaces



				indexlist.push_back(index);

	dsDesc.Format = txDesc.Format;

	for (int i = 0; i < vcount; i++)

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Quit();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

	m_pSampler = NULL;

	}

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_Viewport.Width = (FLOAT)rect.Width();

#include <SDL.h>

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}

	int     vcount = vertexlist.size();

	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_RIGHT,

	irData.pSysMem = &pIList[0];

		size_t index_offset = 0;  // インデントのオフセット

		SDL_Delay(1000);

	m_pDepthStencilView = NULL;

		D3D_DRIVER_TYPE_HARDWARE,



				break;

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		pIList[j] = indexList[j];

		SDL_RenderPresent(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;







				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	tinyobj::ObjReader reader;

}



			index_offset += fv;

			// Loop over vertices in the face.

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				WORD index = idx.vertex_index;

		{

		SDL_RenderClear(ren);

	// Loop over shapes

	D3D11_BUFFER_DESC ibDesc;

		KEY_PRESS_SURFACE_DOWN,

		delete[] pVList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pIList;

			switch (e.key.keysym.sym)

#define TINYOBJLOADER_IMPLEMENTATION

		}



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		NULL,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

	// Loop over shapes

	m_Viewport.MaxDepth = 1.0f;

				break;



#include <SDL.h>

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pImmediateContext);

	{





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}



	SDL_DestroyWindow(win);

	m_pImmediateContext = NULL;

				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

		size_t index_offset = 0;  // インデントのオフセット

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pInputLayout);

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





		delete[] pIList;

	if (FAILED(hr))

				indexlist.push_back(index);

	dsDesc.Texture2D.MipSlice = 0;

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	vector<Vertex> vertexlist;

		&scDesc,

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMatrixBuffer {



}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

	if (FAILED(hr))

		return 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

 * Lesson 1: Hello World!



	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			case SDLK_DOWN:

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

			switch (e.key.keysym.sym)

	XMFLOAT4         ambient;  //環境光(r,g,b)



		}

	tinyobj::ObjReader reader;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			{

	SAFE_RELEASE(m_pIndexBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	// Loop over shapes

	vector<Vertex> vertexlist;





	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		}

		KEY_PRESS_SURFACE_LEFT,

CD3DTest::CD3DTest()



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.TopLeftY = 0;

	//頂点バッファ作成

	m_Viewport.TopLeftY = 0;

	}

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	//ピクセルシェーダー生成



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	XMFLOAT4X4 world;

	std::vector<tinyobj::material_t> materials;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		NULL,



	SAFE_RELEASE(m_pLightBuffer);

struct ConstantLight {

	SDL_Quit();

			switch (e.key.keysym.sym)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//Create Index

			case SDLK_LEFT:

	while (SDL_PollEvent(&e) != 0)

	SDL_Quit();

			}



	pBackBuffer->Release();

#include <iostream>

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	}

	UINT flags = 0;

	if (FAILED(hr))

#ifdef _DEBUG

		return hr;

	SDL_DestroyTexture(tex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	}

	//頂点レイアウト作成









	if (FAILED(hr))

CD3DTest::~CD3DTest()

	cbDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

	//Create Index

	if (FAILED(hr))

	XMFLOAT4X4 view;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	dsDesc.Format = txDesc.Format;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



#include <SDL.h>



		{

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	UINT strides = sizeof(Vertex);

		pIList[j] = indexList[j];



				break;

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4X4 view;

	vrData.SysMemPitch = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

	irData.pSysMem = &pIList[0];

	//ビューポート設定

struct ConstantMatrixBuffer {

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

	{

	//Create Index

				indexlist.push_back(index);



	//ピクセルシェーダー生成



	ConstantMatrixBuffer cmb;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	//ビューポート設定



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilView = NULL;

struct ConstantMatrixBuffer {

			{

	m_pTextureView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pInputLayout);

	return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			for (size_t v = 0; v < fv; v++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

CD3DTest::~CD3DTest()

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (m_pImmediateContext)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	{

	scDesc.OutputWindow = hwnd;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	{

		if (!ret)



	scDesc.BufferDesc.Width = rect.Width();



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyTexture(tex);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pSampler = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	return 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSwapChain = NULL;

}
		&error,

			int num_vertices = shape.mesh.num_face_vertices[f];



	}

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	vrData.pSysMem = &pVList[0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		R"(cube.obj)");

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//First we need to start up SDL, and make sure it went ok

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		if (!reader.Error().empty())



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//First we need to start up SDL, and make sure it went ok



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

			case SDLK_LEFT:

	XMFLOAT4 ambient;           //環境(r,g,b)



	float    farZ = 100.0f;





			default:



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		if (e.type == SDL_QUIT)

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		{

	if (FAILED(hr))



	XMFLOAT4 specular;          //反射(r,g,b)



	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	txDesc.ArraySize = 1;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pDepthStencilTexture);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_FreeSurface(bmp);

				vertex.push_back(vertex_tmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (!reader.Warning().empty())

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);



	m_pTexture = NULL;



	}



	XMFLOAT4X4 view;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



#endif

{

	m_pPixelShader = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_BUFFER_DESC ibDesc;

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

/*



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				// access to vertex

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{



	//ビューポート設定

		SDL_RenderPresent(ren);

	vector<WORD> indexList;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_BUFFER_DESC ibDesc;

		SDL_Delay(1000);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MiscFlags = 0;

	if (m_pImmediateContext)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	for (size_t s = 0; s < shapes.size(); s++)

		if (!reader.Error().empty())

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//ピクセルシェーダー生成

		pLevels,

	for (int j = 0; j < icount; j++)

	SDL_DestroyTexture(tex);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

 */

	m_pLightBuffer = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.SampleDesc.Count = 1;

	dsDesc.Texture2D.MipSlice = 0;

{

	m_pIndexBuffer = NULL;



		return hr;



	for (int i = 0; i < 3; i++)

		R"(cube.obj)");

	}

struct ConstantMatrixBuffer {

	ConstantLightBuffer clb;

	// Loop over shapes

	auto& attrib = reader.GetAttrib();

			}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	for (int i = 0; i < vcount; i++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#ifdef _DEBUG



	scDesc.SampleDesc.Count = 1;

		{

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

		return hr;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		{

	txDesc.MipLevels = 1;

		return hr;

CD3DTest::~CD3DTest()





	std::vector<tinyobj::material_t> materials;

		if (e.type == SDL_QUIT)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		&m_pDevice,

	if (!error.empty())

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

			case SDLK_LEFT:

				WORD index = idx.vertex_index;

	//vector<Vertex> vertex_t;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return 0;

}

	}



 * Lesson 1: Hello World!

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_VertexCount = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			default:

	for (int i = 0; i < vcount; i++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{



				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	//ビューポート設定

	XMFLOAT4 specular;          //反射(r,g,b)

	vbDesc.CPUAccessFlags = 0;

int main(int, char**)

		SDL_RenderPresent(ren);

	bool ret = tinyobj::LoadObj(



	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

		&materials,

	ibDesc.MiscFlags = 0;

	//頂点バッファ作成

}

				break;



			{

	{



/*

int SEGMENT = 36;

	{

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_LEFT,



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	if (!error.empty())

				indexlist.push_back(index);

#include <iostream>





	ibDesc.MiscFlags = 0;

	ConstantMaterial material; //物体の質感

	vector<WORD> indexList;

#include <iostream>



		if (!reader.Error().empty())



{

	scDesc.BufferCount = 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);







		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	//頂点バッファ作成

	//頂点シェーダー生成



{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		D3D_DRIVER_TYPE_HARDWARE,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	return hr;

	txDesc.CPUAccessFlags = 0;



CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.ArraySize = 1;

			for (size_t v = 0; v < num_vertices; v++)

		}

}

	auto& materials = reader.GetMaterials();

	DXGI_SWAP_CHAIN_DESC scDesc;



}

	//インデックスバッファ作成

			}

{

#include <SDL.h>



		}



		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pLightBuffer = NULL;

	if (FAILED(hr))

int SEGMENT = 36;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	ConstantMaterial material; //物体の質感

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//Create Index

	m_pSwapChain = NULL;

		if (!ret)



	D3D11_BUFFER_DESC ibDesc;

		}



	::ZeroMemory(&scDesc, sizeof(scDesc));

		}



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_DOWN,

	}*/

#include <iostream>

	//頂点バッファ作成

				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSwapChain = NULL;

};

	dsDesc.Format = txDesc.Format;

			}

		SDL_RenderPresent(ren);

	UINT strides = sizeof(Vertex);

	m_VertexCount = 0;

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_RIGHT,



	bool ret = tinyobj::LoadObj(

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	}

	return;

		return hr;

		1,



	std::string error;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.SampleDesc.Count = 1;

	{

	cbDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		return hr;

	cbDesc.StructureByteStride = 0;

/*

	m_pSwapChain->Present(0, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		}

	XMStoreFloat4(&clb.eyePos, eye);

		D3D11_SDK_VERSION,

				vertex.push_back(vertex_tmp);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL



			index_offset += num_vertices;

		}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();



	//頂点バッファ作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				vertex.push_back(vertex_tmp);

	m_Viewport.Height = (FLOAT)rect.Height();

		&m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);



		{

	if (FAILED(hr))

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	//First we need to start up SDL, and make sure it went ok

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ibDesc.StructureByteStride = 0;

	//ビューポート設定

	m_pIndexBuffer = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	pBackBuffer->Release();

#ifdef _DEBUG

	{

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		return hr;

	m_VertexCount = vcount;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Event e;

			index_offset += fv;



{

	bool ret = tinyobj::LoadObj(

	vrData.pSysMem = &pVList[0];

int main(int, char**)

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				indexlist.push_back(index);

	XMFLOAT4 pos;               //座標(x,y,z)

	tinyobj::attrib_t attrib;



	}



	ConstantMaterial material; //物体の質感



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			// Loop over vertices in the face.

	std::string inputfile = "test.obj";

		else if (e.type == SDL_KEYDOWN)

{

	return;

		//User requests quit

		D3D11_SDK_VERSION,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.MiscFlags = 0;



	for (size_t s = 0; s < shapes.size(); s++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			for (size_t v = 0; v < fv; v++)

CD3DTest::~CD3DTest()

		size_t index_offset = 0;  // インデントのオフセット

		return hr;



	pBackBuffer->Release();

	SAFE_RELEASE(m_pTexture);

	//ビューポート設定

		flags,

	cbDesc.StructureByteStride = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return 1;

	m_pInputLayout = NULL;

	m_pTexture = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				indexlist.push_back(idx.vertex_index);

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D_FEATURE_LEVEL level;

	m_pTexture = NULL;

	scDesc.BufferCount = 1;

		delete[] pVList;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pDevice = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(suf);



{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		1,

	//vector<WORD> index_t;

	if (FAILED(hr))

		return hr;

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	vrData.pSysMem = &pVList[0];

	ibDesc.StructureByteStride = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





		return hr;



	m_pSampler = NULL;

	delete[] pVList;



		return hr;

			case SDLK_UP:

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

void CD3DTest::Render()

	//vector<WORD> index_t;

			break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	irData.pSysMem = &pIList[0];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		SDL_RenderPresent(ren);



	txDesc.ArraySize = 1;

	float    farZ = 100.0f;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDepthStencilTexture = NULL;



		&attrib,

				break;

	ibDesc.CPUAccessFlags = 0;

}

	SDL_DestroyRenderer(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	std::string imagePath = "hello.bmp";

	DXGI_SWAP_CHAIN_DESC scDesc;

		&shapes,

	HRESULT              hr;

			default:

	}

		KEY_PRESS_SURFACE_UP,

			}

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//ビューポート設定

	m_pDepthStencilView = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	CRect                rect;

	CRect                rect;





				vertex.push_back(vertex_tmp);



		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.Height = (FLOAT)rect.Height();

		&materials,



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC vbDesc;

}

		R"(cube.obj)");

		pIList[j] = indexList[j];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pInputLayout);

		D3D_DRIVER_TYPE_HARDWARE,

	//定数バッファ作成

				break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (const auto& shape : shapes)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	WORD* pIList = new WORD[icount];



};







	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_Delay(1000);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		//User requests quit

	if (FAILED(hr))

	m_VertexCount = vcount;

	D3D11_BUFFER_DESC vbDesc;

	while (SDL_PollEvent(&e) != 0)

	{

	//First we need to start up SDL, and make sure it went ok



	if (FAILED(hr))

	{



{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	}

	}

	if (!reader.Warning().empty())





	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

				indexlist.push_back(index);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,



	m_pDepthStencilTexture = NULL;

struct ConstantMaterial {

	if (FAILED(hr))

			break;

		&level,

			case SDLK_RIGHT:

	vrData.SysMemSlicePitch = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		delete[] pIList;

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	tinyobj::ObjReader reader;

	//Vertex* pVList = new Vertex[vcount];

	m_VertexCount = vcount;

		delete[] pIList;



		NULL,

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	dsDesc.Format = txDesc.Format;

			for (size_t v = 0; v < fv; v++)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pDevice = NULL;

	std::string imagePath = "hello.bmp";

	scDesc.Windowed = TRUE;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 ambient;           //環境(r,g,b)

 */

		KEY_PRESS_SURFACE_RIGHT,

		{

}

	//テクスチャ読み込み

		&attrib,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	int     vcount = vertexlist.size();

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pPixelShader);

		else if (e.type == SDL_KEYDOWN)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





 * Lesson 1: Hello World!

	float    nearZ = 0.1f;

	}

	auto& shapes = reader.GetShapes();

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

		&shapes,



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	tinyobj::attrib_t attrib;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				// access to vertex

	//頂点バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

	{

				WORD index = idx.vertex_index;

			{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#endif

	if (FAILED(hr))



	}

}

	D3D11_BUFFER_DESC cbDesc;

	//テクスチャ読み込み

			{

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4         eyePos;   //視点座標

	m_IndexCount = 0;

		flags,

	m_IndexCount = 0;

			index_offset += fv;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 pos;               //座標(x,y,z)

	std::string error;

		pLevels,

	}

	//vector<Vertex> vertex_t;

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pTexture);

	std::string inputfile = "test.obj";

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.CPUAccessFlags = 0;

		D3D11_SDK_VERSION,

struct ConstantMatrixBuffer {

	XMFLOAT4X4 world;

	m_VertexCount = 0;

		return hr;

		}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<Vertex> vertexlist;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

	// Loop over shapes

}

		flags,

			case SDLK_DOWN:



	for (int i = 0; i < vcount; i++)



		NULL,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#include <SDL.h>

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	float    fov = XMConvertToRadians(20.0f);

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		delete[] pIList;







		return hr;

#include <SDL.h>

	txDesc.ArraySize = 1;



	tinyobj::attrib_t attrib;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pSwapChain);

	//ビューポート設定

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	SAFE_RELEASE(m_pSampler);

	txDesc.Width = rect.Width();

		&level,



	ibDesc.MiscFlags = 0;

	// Loop over shapes

	SDL_FreeSurface(bmp);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				break;



				break;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	scDesc.BufferCount = 1;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	for (int i = 0; i < 3; i++)



		return hr;

	SDL_DestroyWindow(win);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

		{



	D3D11_BUFFER_DESC ibDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			exit(1);

	int     vcount = vertexlist.size();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				break;

	SDL_FreeSurface(suf);



		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.MinDepth = 0.0f;

			for (size_t v = 0; v < fv; v++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	float    fov = XMConvertToRadians(20.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

			case SDLK_DOWN:

	}

		return hr;

	Vertex* pVList = new Vertex[vcount];

	auto& shapes = reader.GetShapes();





	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_IndexCount = 0;

		size_t index_offset = 0;

		SDL_Delay(1000);

			switch (e.key.keysym.sym)

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pMatrixBuffer);





int SEGMENT = 36;

	SAFE_RELEASE(m_pDevice);

		SDL_RenderClear(ren);

	m_Viewport.MinDepth = 0.0f;

}

	return 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		KEY_PRESS_SURFACE_TOTAL



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilTexture = NULL;

	//Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext = NULL;

	ibDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();

		SDL_RenderCopy(ren, tex, NULL, NULL);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

		{







	scDesc.BufferDesc.Height = rect.Height();

	pBackBuffer->Release();

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pMatrixBuffer = NULL;

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vrData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);



		&materials,



	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pIndexBuffer);

{

	SAFE_RELEASE(m_pMatrixBuffer);

		//User presses a key



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	m_pTextureView = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC ibDesc;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	while (SDL_PollEvent(&e) != 0)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD   icount = indexList.size();

	D3D11_SUBRESOURCE_DATA vrData;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	if (m_pImmediateContext)

void CD3DTest::Release()





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



}

	if (FAILED(hr))



				break;

	auto& materials = reader.GetMaterials();



#include "DirectXManager.h"

	dsDesc.Format = txDesc.Format;

		return hr;



		R"(cube.obj)");



		SDL_Delay(1000);



	/*



	/*

		}

	auto& shapes = reader.GetShapes();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

	//定数バッファ作成

	cbDesc.CPUAccessFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pInputLayout = NULL;

	cbDesc.MiscFlags = 0;

	}

		if (!reader.Error().empty())

	scDesc.SampleDesc.Quality = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{



	::ZeroMemory(&scDesc, sizeof(scDesc));

			case SDLK_LEFT:

	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);

	}

};

	std::string error;

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	CRect                rect;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantLightBuffer {



		cout << "SDL_INIT_ERROR" << endl;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

void CD3DTest::Release()

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.Height = rect.Height();

			int num_vertices = shape.mesh.num_face_vertices[f];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;



	XMFLOAT4X4 projection;

int SEGMENT = 36;



	XMFLOAT4X4 projection;

				vertex.push_back(vertex_tmp);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			exit(1);

	}

	{

	m_pMatrixBuffer = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Release()

				break;

		}

	D3D11_SAMPLER_DESC smpDesc;

		}

{

			}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

	}

	tinyobj::ObjReaderConfig reader_config;

	irData.pSysMem = &pIList[0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pIndexBuffer = NULL;

	vector<WORD> indexList;

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_UP,

	return hr;

	cbDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	/*

	//First we need to start up SDL, and make sure it went ok

#include "DirectXManager.h"

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.CPUAccessFlags = 0;



	vector<WORD> indexList;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				break;

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pTexture);

			exit(1);

		}

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	Release();

struct ConstantMaterial {

	dsDesc.Texture2D.MipSlice = 0;



	vrData.SysMemSlicePitch = 0;

		SDL_RenderPresent(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMFLOAT4X4 world;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		{

		return hr;

		if (!reader.Error().empty())

	UINT offsets = 0;

	}

			index_offset += fv;



			case SDLK_LEFT:

	vrData.SysMemSlicePitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    farZ = 100.0f;

		if (!ret)



	float    farZ = 100.0f;

		exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

	UINT offsets = 0;



	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			exit(1);

	std::vector<tinyobj::shape_t> shapes;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	while (SDL_PollEvent(&e) != 0)

	m_Viewport.Width = (FLOAT)rect.Width();

	ConstantMaterial material; //物体の質感



{

	scDesc.Windowed = TRUE;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_SAMPLER_DESC smpDesc;

				break;

	//定数バッファ作成



	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		size_t index_offset = 0;



	m_pSampler = NULL;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.Format = txDesc.Format;

	cbDesc.StructureByteStride = 0;

		return hr;



	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	//頂点レイアウト作成

		delete[] pVList;

#include <SDL.h>

	return hr;

		{

};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_pTexture = NULL;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	}

	SDL_DestroyTexture(tex);

	UINT flags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pSwapChain = NULL;

	if (FAILED(hr))





	cbDesc.StructureByteStride = 0;



	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

struct ConstantMatrixBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	txDesc.CPUAccessFlags = 0;

	m_pIndexBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	WORD   icount = indexList.size();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vector<Vertex> vertexlist;

	std::string inputfile = "test.obj";



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.SampleDesc.Quality = 0;

	m_pLightBuffer = NULL;

	//vector<WORD> index_t;



	if (FAILED(hr))

			case SDLK_UP:

	m_IndexCount = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;





	m_pVertexBuffer = NULL;

	dsDesc.Format = txDesc.Format;

void CD3DTest::Release()



		D3D_DRIVER_TYPE_HARDWARE,

	ZeroMemory(&txDesc, sizeof(txDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			case SDLK_RIGHT:

		if (e.type == SDL_QUIT)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pIndexBuffer);



	XMStoreFloat4(&clb.eyePos, eye);



		return hr;

	HRESULT              hr;

	delete[] pIList;

			index_offset += num_vertices;



	scDesc.BufferCount = 1;

		size_t index_offset = 0;  // インデントのオフセット



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))



			}

	while (SDL_PollEvent(&e) != 0)

		&shapes,

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				WORD index = idx.vertex_index;



	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		exit(1);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	{

				vertex.push_back(vertex_tmp);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



				break;

	m_pLightBuffer = NULL;

#endif

	cbDesc.CPUAccessFlags = 0;

	}



		//User requests quit

}

	auto& attrib = reader.GetAttrib();

	txDesc.MipLevels = 1;

		pLevels,



	float    nearZ = 0.1f;

		return hr;

	dsDesc.Format = txDesc.Format;

	tinyobj::ObjReaderConfig reader_config;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{

		exit(1);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				// access to vertex

	XMStoreFloat4(&clb.eyePos, eye);

	{

	{

		return hr;

		SDL_Delay(1000);

#include <iostream>

	std::vector<tinyobj::shape_t> shapes;

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_UP,

	auto& attrib = reader.GetAttrib();

		&shapes,

	m_Viewport.MinDepth = 0.0f;

	//Key press surfaces constants

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				tinyobj::real_t tx =

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pRenderTargetView);

	auto& shapes = reader.GetShapes();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include <SDL.h>

	vbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

		delete[] pIList;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	irData.pSysMem = &pIList[0];

	ConstantLight    pntLight; //点光源

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Key press surfaces constants

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		size_t index_offset = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

		return hr;

	txDesc.SampleDesc.Count = 1;

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.TopLeftX = 0;





	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pTextureView);

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		if (!ret)

	D3D11_BUFFER_DESC cbDesc;

		return hr;



	SDL_DestroyWindow(win);

}

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

int main(int, char**)

	int     vcount = vertexlist.size();

	irData.pSysMem = &pIList[0];

	m_pInputLayout = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	for (const auto& shape : shapes)

 * Lesson 1: Hello World!

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//Clean up our objects and quit



	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	};

	cbDesc.StructureByteStride = 0;



};

	/*



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//頂点レイアウト作成

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

void CD3DTest::Release()

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	UINT strides = sizeof(Vertex);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pMatrixBuffer = NULL;

	for (int i = 0; i < 3; i++)

	enum KeyPressSurfaces

	cbDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pDepthStencilView = NULL;

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//First we need to start up SDL, and make sure it went ok



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{



			{

			case SDLK_RIGHT:

	XMFLOAT4 pos;               //座標(x,y,z)

			}



			for (size_t v = 0; v < fv; v++)

	XMFLOAT4X4 projection;

	};

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string error;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		R"(cube.obj)");

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//ビューポート設定

		size_t index_offset = 0;

	if (FAILED(hr))





		flags,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_VertexCount = 0;



#include <SDL.h>

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pDepthStencilView);

	auto& materials = reader.GetMaterials();

	//Key press surfaces constants





	std::string inputfile = "test.obj";

		{



	SAFE_RELEASE(m_pTexture);

{



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include "DirectXManager.h"

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pSampler = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexBuffer);

{

		&m_pImmediateContext);

		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(bmp);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	for (const auto& shape : shapes)



	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pSwapChain);

	delete[] pIList;

		KEY_PRESS_SURFACE_LEFT,

#include <SDL.h>

		if (!reader.Error().empty())

		&m_pDevice,

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			//Select surfaces based on key press

	//vector<Vertex> vertex_t;

		if (!reader.Error().empty())

	}



	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//定数バッファ作成





	SAFE_RELEASE(m_pVertexShader);





	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.SampleDesc.Count = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	reader_config.mtl_search_path = "./"; // Path to material files

	{

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(bmp);

	m_IndexCount = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	reader_config.mtl_search_path = "./"; // Path to material files

	std::string inputfile = "test.obj";

			case SDLK_UP:



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





	m_pSampler = NULL;





		return hr;

	SDL_Quit();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//ピクセルシェーダー生成



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA irData;

		//User presses a key

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



#define TINYOBJLOADER_IMPLEMENTATION

	//ピクセルシェーダー生成

	vector<Vertex> vertexlist;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	m_pPixelShader = NULL;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//頂点バッファ作成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.TopLeftX = 0;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pTextureView);

	m_pLightBuffer = NULL;

	m_pDepthStencilTexture = NULL;

		flags,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::vector<tinyobj::material_t> materials;

		&m_pImmediateContext);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = D3D11CreateDeviceAndSwapChain(NULL,





		}

	SAFE_RELEASE(m_pImmediateContext);



		SDL_Delay(1000);

	ibDesc.StructureByteStride = 0;

			case SDLK_UP:

	m_IndexCount = 0;

	for (int j = 0; j < icount; j++)

	m_IndexCount = icount;

		return 1;

	XMStoreFloat4(&clb.ambient, lightAmbient);

CD3DTest::CD3DTest()

		&m_pImmediateContext);

	ConstantMatrixBuffer cmb;

};

	vbDesc.CPUAccessFlags = 0;



	{

	txDesc.MipLevels = 1;

		return hr;

		pIList[j] = indexList[j];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		// Loop over faces(polygon)

#ifdef _DEBUG

	std::vector<tinyobj::material_t> materials;

				break;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::material_t> materials;

		delete[] pIList;

	txDesc.Width = rect.Width();

	WORD   icount = indexList.size();

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	//ピクセルシェーダー生成



				tinyobj::real_t tx =

	//vector<WORD> index_t;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	//vector<WORD> index_t;

	//vector<WORD> index_t;



	{

	SAFE_RELEASE(m_pIndexBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantMatrixBuffer cmb;

			{

		return hr;

	cbDesc.StructureByteStride = 0;

	}







	m_Viewport.TopLeftX = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pLightBuffer);

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{



		}

	txDesc.Width = rect.Width();

		&shapes,

	return 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::vector<tinyobj::shape_t> shapes;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	vector<WORD> indexList;



using std::cout; using std::endl;

				indexlist.push_back(index);

	m_pMatrixBuffer = NULL;



}



	{

struct ConstantMatrixBuffer {



struct ConstantMaterial {

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			for (size_t v = 0; v < num_vertices; v++)

	float    farZ = 100.0f;

		&shapes,

		SDL_RenderClear(ren);

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t ty =

	ConstantMatrixBuffer cmb;

 * Lesson 1: Hello World!

#include <iostream>

	m_pVertexShader = NULL;

	SDL_FreeSurface(bmp);

		SDL_RenderPresent(ren);

		&shapes,

};

	ibDesc.MiscFlags = 0;



				indexlist.push_back(index);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL level;



		}

};

	txDesc.CPUAccessFlags = 0;

	return 0;

	if (FAILED(hr))



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		pIList[j] = indexList[j];



		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.StructureByteStride = 0;



			exit(1);

			{



	SAFE_RELEASE(m_pTexture);

	}

		return hr;

	LoadObj(vertexlist, indexList);





	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&m_pImmediateContext);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantMatrixBuffer {

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ibDesc.StructureByteStride = 0;

		}

	irData.pSysMem = &pIList[0];

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	ConstantLight    pntLight; //点光源

	m_Viewport.Width = (FLOAT)rect.Width();

		exit(1);

	int     vcount = vertexlist.size();

	// Loop over shapes



	//頂点バッファ作成

			{

	enum KeyPressSurfaces

		SDL_Delay(1000);

	return 0;

	for (const auto& shape : shapes)

	std::string inputfile = "test.obj";

	//頂点レイアウト作成

int SEGMENT = 36;



	SDL_DestroyRenderer(ren);

	//ビューポート設定

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();

		1,

#include <iostream>

	D3D11_SAMPLER_DESC smpDesc;



	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pImmediateContext);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))



	dsDesc.Format = txDesc.Format;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		//User requests quit

	XMFLOAT4X4 projection;

	m_IndexCount = 0;

		D3D11_SDK_VERSION,

{

		&m_pImmediateContext);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4(&clb.eyePos, eye);

{



	ZeroMemory(&txDesc, sizeof(txDesc));

}

	return hr;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pSampler = NULL;

	D3D_FEATURE_LEVEL level;



#endif

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4X4 world;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



			for (size_t v = 0; v < fv; v++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pDevice);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	SAFE_RELEASE(m_pDepthStencilTexture);

		exit(1);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.StructureByteStride = 0;

	{

	m_pSwapChain = NULL;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

using std::cout; using std::endl;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pPixelShader);



	m_pIndexBuffer = NULL;

	//Clean up our objects and quit

};

				vertex.push_back(vertex_tmp);

	auto& shapes = reader.GetShapes();

}

}

	std::vector<tinyobj::shape_t> shapes;

			switch (e.key.keysym.sym)



	m_pIndexBuffer = NULL;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pDevice);



		flags,

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.MiscFlags = 0;





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_IndexCount = icount;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	CRect                rect;

}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pVertexBuffer = NULL;

#include "DirectXManager.h"

		{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.TopLeftX = 0;

		SDL_Delay(1000);



	vector<WORD> indexList;

		1,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		SDL_RenderCopy(ren, tex, NULL, NULL);



}



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return 1;



	scDesc.BufferDesc.Width = rect.Width();

	{



	ConstantMatrixBuffer cmb;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.MaxDepth = 1.0f;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



	XMStoreFloat4(&clb.eyePos, eye);

 * Lesson 1: Hello World!

	vector<Vertex> vertexlist;

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	{

	//深度ステンシルバッファ作成

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

			{

			index_offset += fv;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	}

	m_pTextureView = NULL;

	m_pSampler = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	reader_config.mtl_search_path = "./"; // Path to material files

	//Create Index

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		m_pImmediateContext->ClearState();



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.SampleDesc.Count = 1;

}
	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pLightBuffer = NULL;

void CD3DTest::Render()



	m_pSwapChain = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	auto& shapes = reader.GetShapes();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_VertexCount = vcount;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.eyePos, eye);



	UINT strides = sizeof(Vertex);





	CRect                rect;



		size_t index_offset = 0;

	if (FAILED(hr))



};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pIndexBuffer = NULL;

	cbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)



	if (FAILED(hr))



		return hr;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				break;

	}

	WORD   icount = indexList.size();

	txDesc.MiscFlags = 0;

		R"(cube.obj)");

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			index_offset += num_vertices;



	txDesc.Height = rect.Height();



	SDL_DestroyTexture(tex);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	std::string imagePath = "hello.bmp";

	m_pSampler = NULL;



	vrData.SysMemPitch = 0;

		&error,

		&attrib,

	m_pVertexShader = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pSampler = NULL;



	while (SDL_PollEvent(&e) != 0)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	tinyobj::ObjReader reader;



	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ID3D11Texture2D* pBackBuffer;

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	LoadObj(vertexlist, indexList);

	//頂点シェーダー生成

			}

	SAFE_RELEASE(m_pPixelShader);

		return hr;

		return hr;

		}

	irData.pSysMem = &pIList[0];

CD3DTest::~CD3DTest()

		//User presses a key

		}

		}



	{

	//Create Index

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			switch (e.key.keysym.sym)

			index_offset += fv;

	//First we need to start up SDL, and make sure it went ok

 */





void CD3DTest::Render()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pSwapChain = NULL;

	enum KeyPressSurfaces



	//Key press surfaces constants

	XMFLOAT4X4 world;

	::GetClientRect(hwnd, &rect);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pSampler = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyTexture(tex);

	SDL_Event e;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (int i = 0; i < vcount; i++)

	//定数バッファ作成

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.CPUAccessFlags = 0;

	m_pPixelShader = NULL;

	/*

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_DEFAULT,

#include <SDL.h>

	/*

	}



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	if (FAILED(hr))

#ifdef _DEBUG

	{

	SAFE_RELEASE(m_pDevice);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (size_t s = 0; s < shapes.size(); s++)

	SDL_FreeSurface(suf);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

int main(int, char**)



	ConstantMatrixBuffer cmb;

	float    nearZ = 0.1f;



	for (int j = 0; j < icount; j++)

{



	m_pSwapChain->Present(0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D_DRIVER_TYPE_HARDWARE,

	{

	if (FAILED(hr))

			index_offset += fv;

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(bmp);

	SDL_Quit();

			case SDLK_UP:

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;

	SDL_DestroyTexture(tex);

		SDL_Delay(1000);

	UINT flags = 0;

}

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_SUBRESOURCE_DATA irData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

	{



	D3D11_SUBRESOURCE_DATA vrData;

	/*

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

struct ConstantMaterial {

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	WORD   icount = indexList.size();

		cout << "SDL_INIT_ERROR" << endl;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		if (e.type == SDL_QUIT)





	XMFLOAT4 attenuate;         //減衰(a,b,c)

				vertex.push_back(vertex_tmp);

			exit(1);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





				tinyobj::real_t ty =

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferDesc.Width = rect.Width();

	}

	{

{



	//テクスチャ読み込み

		{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

		size_t index_offset = 0;

			for (size_t v = 0; v < fv; v++)

			default:



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	}



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//インデックスバッファ作成

	ibDesc.MiscFlags = 0;

		return hr;

};

		}

	SAFE_RELEASE(m_pVertexBuffer);

		return 1;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				indexlist.push_back(index);

	SDL_DestroyRenderer(ren);



	vbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

#ifdef _DEBUG

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string inputfile = "test.obj";

	m_pSampler = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		1,

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pRenderTargetView = NULL;

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	HRESULT              hr;

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

struct ConstantMatrixBuffer {

	};

		}

{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);







		flags,

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	tinyobj::ObjReaderConfig reader_config;

	}

	Release();

	//頂点レイアウト作成

	tinyobj::ObjReader reader;

		pLevels,

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.eyePos, eye);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};



		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += num_vertices;





	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

				tinyobj::real_t ty =

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4X4 view;

	float    fov = XMConvertToRadians(20.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

		NULL,

	SAFE_RELEASE(m_pVertexBuffer);

	tinyobj::ObjReader reader;

	/*



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.TopLeftX = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Clean up our objects and quit

		if (!ret)

	txDesc.MiscFlags = 0;

	XMFLOAT4X4 view;

	UINT offsets = 0;

	vector<Vertex> vertexlist;

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		//User presses a key

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vrData.SysMemPitch = 0;



};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pDepthStencilTexture);



		{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pDevice = NULL;

{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pImmediateContext);

	}

				tinyobj::real_t ty =



	SAFE_RELEASE(m_pMatrixBuffer);



	// Loop over shapes

	//深度ステンシルバッファ作成



	vbDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		cout << "SDL_INIT_ERROR" << endl;



	txDesc.SampleDesc.Count = 1;

		delete[] pIList;

	//ビューポート設定

		//User presses a key

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

				tinyobj::real_t tx =

				break;

	if (m_pImmediateContext)

}

			case SDLK_RIGHT:

	enum KeyPressSurfaces

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_SAMPLER_DESC smpDesc;

	float    nearZ = 0.1f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		KEY_PRESS_SURFACE_LEFT,





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	//頂点バッファ作成

	irData.pSysMem = &pIList[0];

 * Lesson 1: Hello World!



	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	bool ret = tinyobj::LoadObj(

	cbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

	m_VertexCount = vcount;

}

	txDesc.MipLevels = 1;

	cbDesc.StructureByteStride = 0;



	m_pDevice = NULL;

	m_VertexCount = vcount;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&txDesc, sizeof(txDesc));

	CRect                rect;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pTexture = NULL;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

	SDL_DestroyTexture(tex);



	if (FAILED(hr))

		pLevels,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	Release();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

			break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext = NULL;

struct ConstantLight {

	cbDesc.CPUAccessFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

using std::cout; using std::endl;



		&m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderPresent(ren);

	txDesc.SampleDesc.Quality = 0;

			//Select surfaces based on key press

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.MinDepth = 0.0f;



	{

			}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_LEFT:

			//Select surfaces based on key press



{

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::vector<tinyobj::shape_t> shapes;

	}

	txDesc.SampleDesc.Quality = 0;



	vbDesc.MiscFlags = 0;

		&attrib,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))







	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{







	{

	float    farZ = 100.0f;

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.MinDepth = 0.0f;

	bool ret = tinyobj::LoadObj(

				break;

				indexlist.push_back(idx.vertex_index);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		&shapes,

	XMFLOAT4X4 projection;

	{

		else if (e.type == SDL_KEYDOWN)



int main(int, char**)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	UINT strides = sizeof(Vertex);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return 0;

}

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_DestroyTexture(tex);

	vrData.SysMemSlicePitch = 0;

	ibDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{

	SAFE_RELEASE(m_pTexture);

}

	D3D11_SUBRESOURCE_DATA vrData;

	while (SDL_PollEvent(&e) != 0)



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		SDL_RenderClear(ren);

	for (int i = 0; i < vcount; i++)

	float    fov = XMConvertToRadians(20.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&attrib,

			{

	scDesc.BufferDesc.Width = rect.Width();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pIList[j] = indexList[j];

	float    fov = XMConvertToRadians(20.0f);





		&m_pImmediateContext);

	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{



	D3D11_BUFFER_DESC vbDesc;

			case SDLK_LEFT:

	if (FAILED(hr))



		SDL_RenderPresent(ren);

 */



		delete[] pIList;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

struct ConstantLight {

	SDL_DestroyRenderer(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	}

	/*

	XMFLOAT4         eyePos;   //視点座標

	}

	if (!reader.Warning().empty())

		return hr;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ConstantLightBuffer clb;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

using std::cout; using std::endl;

				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b)

	tinyobj::attrib_t attrib;

				// access to vertex

		//User requests quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pDepthStencilView);

	bool ret = tinyobj::LoadObj(





	//Clean up our objects and quit

	std::vector<tinyobj::material_t> materials;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);

	bool ret = tinyobj::LoadObj(

	reader_config.mtl_search_path = "./"; // Path to material files

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC ibDesc;

	return hr;

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

 * Lesson 1: Hello World!

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyWindow(win);



	{





	ZeroMemory(&dsDesc, sizeof(dsDesc));

				// access to vertex

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pSwapChain = NULL;



	//vector<WORD> index_t;

	D3D11_BUFFER_DESC ibDesc;

	::GetClientRect(hwnd, &rect);

	if (!reader.ParseFromFile(inputfile, reader_config))

			}



 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			default:

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pSampler);



		KEY_PRESS_SURFACE_UP,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	txDesc.MipLevels = 1;

	{

			//Select surfaces based on key press

	XMFLOAT4         eyePos;   //視点座標

	}





			case SDLK_LEFT:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ConstantLightBuffer clb;

	return 0;

			default:

			switch (e.key.keysym.sym)



		return 1;

		D3D_DRIVER_TYPE_HARDWARE,



	UINT strides = sizeof(Vertex);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

	{

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

#include <iostream>

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		return hr;



	HRESULT              hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::vector<tinyobj::material_t> materials;

	{

		else if (e.type == SDL_KEYDOWN)

};

using std::cout; using std::endl;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	reader_config.mtl_search_path = "./"; // Path to material files







	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderClear(ren);

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pTextureView);

		SDL_Delay(1000);

		D3D11_SDK_VERSION,

	ibDesc.MiscFlags = 0;

	{

	m_pVertexBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	if (FAILED(hr))



	for (int i = 0; i < 3; i++)

	m_pVertexBuffer = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pSwapChain);

	txDesc.ArraySize = 1;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{





	}

				break;

	float    fov = XMConvertToRadians(20.0f);





		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pVertexShader);

	//インデックスバッファ作成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{

	ibDesc.CPUAccessFlags = 0;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			}



	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);





			case SDLK_LEFT:



		SDL_Delay(1000);

	m_Viewport.MinDepth = 0.0f;

int main(int, char**)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.MiscFlags = 0;

		return hr;



			break;

	D3D_FEATURE_LEVEL level;

			}

	scDesc.BufferDesc.Height = rect.Height();

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			//Select surfaces based on key press

	cbDesc.StructureByteStride = 0;

	{

	m_pRenderTargetView = NULL;

		if (!ret)

		if (!ret)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				// access to vertex

	DXGI_SWAP_CHAIN_DESC scDesc;

	bool ret = tinyobj::LoadObj(

	pBackBuffer->Release();

		R"(cube.obj)");

			}

CD3DTest::~CD3DTest()

	pBackBuffer->Release();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))





		R"(cube.obj)");

		exit(1);



			index_offset += fv;

	SDL_Event e;





	vrData.pSysMem = &pVList[0];

#endif

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDepthStencilTexture);

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantLightBuffer clb;



	{

	m_pPixelShader = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	delete[] pIList;

};





		if (e.type == SDL_QUIT)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	{

	ConstantLight    pntLight; //点光源

				WORD index = idx.vertex_index;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.StructureByteStride = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);



}
	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.MinDepth = 0.0f;



	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.Height = rect.Height();

			case SDLK_UP:

		return hr;

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	//テクスチャ読み込み

	auto& shapes = reader.GetShapes();

		return hr;

	m_pDevice = NULL;

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	UINT flags = 0;

	SAFE_RELEASE(m_pPixelShader);

	//First we need to start up SDL, and make sure it went ok

			}



				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	vector<Vertex> vertexlist;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	{

			{

void CD3DTest::Release()



	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Quit();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			int num_vertices = shape.mesh.num_face_vertices[f];

	UINT offsets = 0;



	D3D_FEATURE_LEVEL level;





	SAFE_RELEASE(m_pIndexBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&materials,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			index_offset += num_vertices;



}


				indexlist.push_back(index);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		size_t index_offset = 0;  // インデントのオフセット

	}

int SEGMENT = 36;

		}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			{

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!reader.Error().empty())

	}

	tinyobj::attrib_t attrib;

		}



	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			for (size_t v = 0; v < fv; v++)

		exit(1);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;

		return hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

 */



	m_pRenderTargetView = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();



		{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	irData.SysMemSlicePitch = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pTextureView);

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

};

				// access to vertex

	m_pTexture = NULL;

	CRect                rect;



	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

		pLevels,

	{

			{

	UINT offsets = 0;

	m_pRenderTargetView = NULL;



#include "DirectXManager.h"

	m_Angle += XMConvertToRadians(1.0f);

{



	{

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		&attrib,

	{

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

#include <iostream>

	txDesc.SampleDesc.Count = 1;


