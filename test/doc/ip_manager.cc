	return 0;

	WORD   icount = indexList.size();

	ibDesc.MiscFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDevice);

	//頂点シェーダー生成

	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D_FEATURE_LEVEL level;

			switch (e.key.keysym.sym)

	return 0;

	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 world;

	WORD   icount = indexList.size();

	}

	m_pRenderTargetView = NULL;

			exit(1);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



{

	//インデックスバッファ作成

		}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		if (e.type == SDL_QUIT)

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	auto& shapes = reader.GetShapes();

int SEGMENT = 36;

	{

	UINT offsets = 0;

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#include <SDL.h>

		SDL_RenderClear(ren);

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

	std::vector<tinyobj::material_t> materials;

	auto& attrib = reader.GetAttrib();

	XMFLOAT4X4 world;



		if (e.type == SDL_QUIT)

	m_pSwapChain = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	UINT strides = sizeof(Vertex);

	m_pSwapChain->Present(0, 0);









			}





{





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	if (FAILED(hr))



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	float    nearZ = 0.1f;

	}

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	if (FAILED(hr))

		flags,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	DXGI_SWAP_CHAIN_DESC scDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{





	}

	//Vertex* pVList = new Vertex[vcount];



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

	}

	if (m_pImmediateContext)

	D3D11_SUBRESOURCE_DATA vrData;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}
	if (SDL_Init(SDL_INIT_VIDEO != 0))



}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	/*

		}

		{

}
	m_pTexture = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	scDesc.SampleDesc.Count = 1;

	for (int i = 0; i < vcount; i++)

	m_pPixelShader = NULL;

	D3D11_BUFFER_DESC cbDesc;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

	m_pDepthStencilTexture = NULL;

	//Create Index

		KEY_PRESS_SURFACE_RIGHT,

	ID3D11Texture2D* pBackBuffer;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	std::string inputfile = "test.obj";

#ifdef _DEBUG

				WORD index = idx.vertex_index;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		SDL_RenderPresent(ren);

#include <iostream>

	XMFLOAT4         eyePos;   //視点座標



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//頂点シェーダー生成



	m_pLightBuffer = NULL;

	if (FAILED(hr))

	}

	m_IndexCount = 0;



		&shapes,

#endif

{

	//頂点バッファ作成







				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//頂点バッファ作成

	for (int j = 0; j < icount; j++)

 */

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	UINT strides = sizeof(Vertex);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			index_offset += fv;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{





	for (size_t s = 0; s < shapes.size(); s++)

	}

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	m_pImmediateContext = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#include "DirectXManager.h"

	txDesc.Width = rect.Width();

}

}
	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_IndexCount = icount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))



	auto& shapes = reader.GetShapes();

	SDL_Quit();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

			case SDLK_DOWN:

	WORD   icount = indexList.size();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//ビューポート設定

	for (int i = 0; i < 3; i++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			default:

	if (FAILED(hr))

		&m_pSwapChain,



	scDesc.SampleDesc.Count = 1;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.SysMemSlicePitch = 0;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_DestroyRenderer(ren);

	float    nearZ = 0.1f;

	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		}

			{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vrData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	int     vcount = vertexlist.size();



		D3D11_SDK_VERSION,



	m_IndexCount = icount;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))



		size_t index_offset = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	Release();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	enum KeyPressSurfaces



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pDepthStencilView);

	pBackBuffer->Release();

				vertex.push_back(vertex_tmp);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}*/



	vbDesc.CPUAccessFlags = 0;

		return hr;



	D3D11_TEXTURE2D_DESC txDesc;

	{

	if (FAILED(hr))

	//深度ステンシルバッファ作成

		pLevels,

		return hr;



};



	m_pImmediateContext = NULL;

		return hr;

	int     vcount = vertexlist.size();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pTextureView);



		}



			for (size_t v = 0; v < fv; v++)

		&error,

	vbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

		exit(1);

	m_Viewport.Height = (FLOAT)rect.Height();

	//定数バッファ作成

		//User presses a key

	m_pPixelShader = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		{

	SDL_Quit();





	}

		return hr;

		}

	float    farZ = 100.0f;



	tinyobj::ObjReaderConfig reader_config;

};

			}



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

};



	std::vector<tinyobj::material_t> materials;



	vrData.SysMemPitch = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			for (size_t v = 0; v < fv; v++)

	for (int i = 0; i < 3; i++)

		//User requests quit

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	UINT strides = sizeof(Vertex);

			}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	irData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		D3D11_SDK_VERSION,

			}

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	vector<WORD> indexList;

			}

	txDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

	scDesc.BufferCount = 1;

			for (size_t v = 0; v < fv; v++)

	}



	m_Viewport.TopLeftX = 0;

		cout << "SDL_INIT_ERROR" << endl;

			{

		}

	CRect                rect;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	float    fov = XMConvertToRadians(20.0f);

		return hr;



		&shapes,

	{

		&scDesc,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_FreeSurface(bmp);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_TEXTURE2D_DESC txDesc;



	m_pIndexBuffer = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_Delay(1000);

	m_pDepthStencilView = NULL;

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SAFE_RELEASE(m_pInputLayout);

		exit(1);

	auto& shapes = reader.GetShapes();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



				indexlist.push_back(index);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.Width = rect.Width();

		pIList[j] = indexList[j];

{

		return hr;

	Release();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//深度ステンシルバッファ作成

#include <SDL.h>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

			case SDLK_RIGHT:

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



 * Lesson 1: Hello World!

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

		if (e.type == SDL_QUIT)

		exit(1);



			case SDLK_RIGHT:

		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext = NULL;

}
			{

		SDL_RenderClear(ren);

	{

		KEY_PRESS_SURFACE_LEFT,

}

	//頂点シェーダー生成

		delete[] pIList;

	SDL_DestroyTexture(tex);



struct ConstantLightBuffer {



	m_pTextureView = NULL;



		size_t index_offset = 0;  // インデントのオフセット

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	bool ret = tinyobj::LoadObj(

	delete[] pVList;

	std::vector<tinyobj::shape_t> shapes;



	SDL_FreeSurface(suf);



			for (size_t v = 0; v < num_vertices; v++)

			default:



	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#ifdef _DEBUG

	m_IndexCount = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.Windowed = TRUE;

	enum KeyPressSurfaces



	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,

	scDesc.OutputWindow = hwnd;

	cbDesc.StructureByteStride = 0;

	HRESULT              hr;



			switch (e.key.keysym.sym)

		&attrib,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	}

	UINT offsets = 0;

				vertex.push_back(vertex_tmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.CPUAccessFlags = 0;

	m_pSwapChain = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				// access to vertex

		D3D_DRIVER_TYPE_HARDWARE,

{

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC vbDesc;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (size_t s = 0; s < shapes.size(); s++)

		}

	Vertex* pVList = new Vertex[vcount];

		return hr;

	{

		if (!ret)

			index_offset += num_vertices;



	SDL_FreeSurface(suf);



	//頂点シェーダー生成



		&error,

		else if (e.type == SDL_KEYDOWN)

	WORD   icount = indexList.size();



		&shapes,

void CD3DTest::Render()

	XMStoreFloat4(&clb.eyePos, eye);

	while (SDL_PollEvent(&e) != 0)

	m_pDepthStencilView = NULL;

	ConstantLight    pntLight; //点光源

	//頂点バッファ作成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;

		size_t index_offset = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_Delay(1000);

	m_pSwapChain->Present(0, 0);



	ibDesc.StructureByteStride = 0;

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pPixelShader = NULL;

	//頂点バッファ作成





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	Vertex* pVList = new Vertex[vcount];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

using std::cout; using std::endl;

			// Loop over vertices in the face.

	m_IndexCount = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			index_offset += fv;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pSwapChain = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

 * Lesson 1: Hello World!

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pMatrixBuffer = NULL;

#include <iostream>

	}

	if (m_pImmediateContext)

			default:



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.ambient, lightAmbient);





	cbDesc.MiscFlags = 0;



	int     vcount = vertexlist.size();

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))



	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

				// access to vertex

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pRenderTargetView = NULL;

		//User presses a key

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_UP:

	for (int i = 0; i < vcount; i++)

	return 0;

			case SDLK_RIGHT:



				break;

	m_pVertexBuffer = NULL;

			}

void CD3DTest::Render()

	float    nearZ = 0.1f;

	CRect                rect;







	if (FAILED(hr))

	m_VertexCount = 0;

	//頂点レイアウト作成



	//Vertex* pVList = new Vertex[vcount];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;

		delete[] pIList;

	SAFE_RELEASE(m_pDevice);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//Key press surfaces constants

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDepthStencilTexture);

#include <SDL.h>





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	WORD* pIList = new WORD[icount];

	//ピクセルシェーダー生成

	auto& materials = reader.GetMaterials();

	D3D11_BUFFER_DESC ibDesc;



struct ConstantMaterial {

	m_pVertexBuffer = NULL;

			for (size_t v = 0; v < fv; v++)

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

	std::string imagePath = "hello.bmp";

	{



	vrData.SysMemSlicePitch = 0;

 */

			case SDLK_UP:

	if (FAILED(hr))

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	WORD   icount = indexList.size();

	}



using std::cout; using std::endl;

struct ConstantLightBuffer {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		exit(1);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	for (const auto& shape : shapes)

#include <iostream>

				tinyobj::real_t ty =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		KEY_PRESS_SURFACE_RIGHT,



	XMFLOAT4 ambient;           //環境(r,g,b)

			break;

	SAFE_RELEASE(m_pLightBuffer);

CD3DTest::CD3DTest()



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	pBackBuffer->Release();



	SAFE_RELEASE(m_pSwapChain);

		}



	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

		//User requests quit

	cbDesc.MiscFlags = 0;

	UINT flags = 0;

	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

			}

	m_pMatrixBuffer = NULL;



	DXGI_SWAP_CHAIN_DESC scDesc;

			break;

	ConstantMaterial material; //物体の質感



	D3D11_BUFFER_DESC vbDesc;

	{

	ibDesc.CPUAccessFlags = 0;



		if (e.type == SDL_QUIT)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return 0;

		1,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

		if (!reader.Error().empty())

			{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	Release();

	m_pPixelShader = NULL;

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			break;

	bool ret = tinyobj::LoadObj(

	txDesc.ArraySize = 1;

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	tinyobj::ObjReaderConfig reader_config;

#include <iostream>

		}

	m_Viewport.TopLeftX = 0;

		SDL_RenderPresent(ren);

	if (FAILED(hr))



	SDL_Event e;

	ConstantMaterial material; //物体の質感

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		flags,

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.eyePos, eye);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}*/

	LoadObj(vertexlist, indexList);

	m_IndexCount = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		cout << "SDL_INIT_ERROR" << endl;

	float    fov = XMConvertToRadians(20.0f);

	{

		flags,









			exit(1);

	std::vector<tinyobj::shape_t> shapes;



		pVList[i] = vertexlist[i];

		KEY_PRESS_SURFACE_RIGHT,

	return;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		//User requests quit

	D3D11_SAMPLER_DESC smpDesc;

		{

	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



 */

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4X4 projection;

		return hr;

	vbDesc.StructureByteStride = 0;

	delete[] pIList;

		SDL_RenderPresent(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.CPUAccessFlags = 0;

};



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::vector<tinyobj::material_t> materials;



	scDesc.SampleDesc.Quality = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pInputLayout = NULL;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		flags,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		pLevels,

};

	vrData.SysMemPitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_IndexCount = icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



				// access to vertex

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		R"(cube.obj)");

	irData.SysMemSlicePitch = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	auto& shapes = reader.GetShapes();

	}

{

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

CD3DTest::CD3DTest()

	return 0;







	return 0;

	m_pSwapChain = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pMatrixBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.TopLeftY = 0;

	SDL_DestroyRenderer(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

		}

	cbDesc.CPUAccessFlags = 0;

		flags,

	cbDesc.StructureByteStride = 0;

	scDesc.Windowed = TRUE;

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



			{

}

		}

	delete[] pIList;





#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	SAFE_RELEASE(m_pInputLayout);

	ConstantMatrixBuffer cmb;

int main(int, char**)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

		return hr;

			{

	m_pDevice = NULL;

	irData.SysMemPitch = 0;

}
	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

int main(int, char**)



	Release();

	D3D11_TEXTURE2D_DESC txDesc;

	std::string imagePath = "hello.bmp";



			{

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//ピクセルシェーダー生成

		flags,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pTexture);

	{

	for (const auto& shape : shapes)

	//Key press surfaces constants

	m_pTexture = NULL;

	}

	//頂点バッファ作成

{

	m_IndexCount = icount;

	SAFE_RELEASE(m_pImmediateContext);

		NULL,

{



	}

{

	}

		SDL_Delay(1000);



		&m_pDevice,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

#define TINYOBJLOADER_IMPLEMENTATION



	//vector<Vertex> vertex_t;

}

		&level,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDevice = NULL;

}

		KEY_PRESS_SURFACE_TOTAL

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	bool ret = tinyobj::LoadObj(

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//深度ステンシルバッファ作成

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	for (int i = 0; i < 3; i++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		// Loop over faces(polygon)

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.OutputWindow = hwnd;

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	Vertex* pVList = new Vertex[vcount];

	SDL_FreeSurface(suf);

}

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.SampleDesc.Count = 1;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	txDesc.Height = rect.Height();

	if (!reader.Warning().empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	ZeroMemory(&dsDesc, sizeof(dsDesc));

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	int     vcount = vertexlist.size();



	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pPixelShader);

		if (!reader.Error().empty())

#include <SDL.h>

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

	XMFLOAT4 specular;          //反射(r,g,b)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.ambient, lightAmbient);

	float    nearZ = 0.1f;

	//First we need to start up SDL, and make sure it went ok

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			{

	//First we need to start up SDL, and make sure it went ok

	std::vector<tinyobj::shape_t> shapes;

		delete[] pIList;

	SAFE_RELEASE(m_pImmediateContext);

	return 0;

		R"(cube.obj)");

	m_IndexCount = 0;

		return hr;

			}

#include <iostream>

	};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		return hr;





	irData.pSysMem = &pIList[0];

{

	{



	ConstantMaterial material; //物体の質感

	//定数バッファ作成



		return hr;

			//Select surfaces based on key press

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			case SDLK_RIGHT:



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		SDL_RenderClear(ren);

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	m_pTexture = NULL;

#include "DirectXManager.h"

		{

	//定数バッファ作成

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{

	SDL_FreeSurface(bmp);

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Quit();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.SampleDesc.Quality = 0;

	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_DEFAULT,

	if (!reader.ParseFromFile(inputfile, reader_config))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include <iostream>



			int num_vertices = shape.mesh.num_face_vertices[f];





	SAFE_RELEASE(m_pVertexShader);

	//テクスチャ読み込み

	SAFE_RELEASE(m_pLightBuffer);



struct ConstantMaterial {



	m_pMatrixBuffer = NULL;

				break;

	{

	// Loop over shapes

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		}





	return 0;

	float    fov = XMConvertToRadians(20.0f);

		D3D11_SDK_VERSION,

	}*/

	txDesc.SampleDesc.Count = 1;

		SDL_RenderPresent(ren);

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	/*

	//Vertex* pVList = new Vertex[vcount];

		return hr;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (int i = 0; i < 3; i++)

	SDL_DestroyTexture(tex);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.ArraySize = 1;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	SAFE_RELEASE(m_pInputLayout);

		pLevels,

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.TopLeftX = 0;



	}

	m_pSwapChain->Present(0, 0);

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		delete[] pIList;



	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Event e;

	//頂点バッファ作成

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

		SDL_Delay(1000);

CD3DTest::CD3DTest()

};



	vrData.SysMemSlicePitch = 0;

	CRect                rect;

	scDesc.BufferDesc.Width = rect.Width();



		KEY_PRESS_SURFACE_DEFAULT,

		&shapes,

};

	dsDesc.Format = txDesc.Format;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pIndexBuffer);



	delete[] pIList;

	SDL_FreeSurface(bmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;







	ZeroMemory(&txDesc, sizeof(txDesc));



	Vertex* pVList = new Vertex[vcount];

	//頂点バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSampler = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	// Loop over shapes

		&level,

	}

	XMFLOAT4X4 view;

	UINT flags = 0;

	{

#include "DirectXManager.h"

			{



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			//Select surfaces based on key press



	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	D3D11_TEXTURE2D_DESC txDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		NULL,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.Windowed = TRUE;



}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyRenderer(ren);

	UINT flags = 0;

		R"(cube.obj)");



		&scDesc,



			case SDLK_RIGHT:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&error,

	}

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

		//User requests quit

	SAFE_RELEASE(m_pIndexBuffer);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		size_t index_offset = 0;

		&attrib,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		}

	}

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

#include <iostream>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	irData.pSysMem = &pIList[0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string imagePath = "hello.bmp";

	//First we need to start up SDL, and make sure it went ok



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

		return hr;

	m_pSwapChain->Present(0, 0);



	SDL_DestroyTexture(tex);

	}

	SAFE_RELEASE(m_pPixelShader);



#include "DirectXManager.h"

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}

	D3D11_SUBRESOURCE_DATA irData;



	m_pLightBuffer = NULL;

		&m_pImmediateContext);

}

	cbDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;  // インデントのオフセット



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}

	std::vector<tinyobj::material_t> materials;

		exit(1);

	if (FAILED(hr))

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	std::vector<tinyobj::material_t> materials;

	SDL_DestroyTexture(tex);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	CRect                rect;

	ConstantLight    pntLight; //点光源

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pPixelShader = NULL;

	std::string inputfile = "test.obj";

	return 0;

		}

	ConstantLightBuffer clb;

	//Key press surfaces constants

int main(int, char**)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



			{



	m_Viewport.TopLeftY = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	{

	txDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	UINT strides = sizeof(Vertex);

		}

	SDL_Quit();

		NULL,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

 */

#include <SDL.h>

		return 1;

	ID3D11Texture2D* pBackBuffer;



	int     vcount = vertexlist.size();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);









	m_pIndexBuffer = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//vector<WORD> index_t;

				vertex.push_back(vertex_tmp);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	SDL_DestroyWindow(win);

				tinyobj::real_t ty =

	ibDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





}


	SDL_Quit();

	//頂点レイアウト作成

	m_pVertexShader = NULL;

#include <SDL.h>

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		if (e.type == SDL_QUIT)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//Clean up our objects and quit

		KEY_PRESS_SURFACE_DOWN,

	}

	SAFE_RELEASE(m_pSwapChain);



}
}

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pVertexBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				WORD index = idx.vertex_index;

void CD3DTest::Release()

	//Key press surfaces constants

{

	m_Angle += XMConvertToRadians(1.0f);

		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





		return hr;

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;



	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	}

		if (e.type == SDL_QUIT)

		return hr;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		else if (e.type == SDL_KEYDOWN)

		return hr;



};

			// Loop over vertices in the face.

	std::string inputfile = "test.obj";

			}



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	scDesc.BufferDesc.Width = rect.Width();

};

	txDesc.Width = rect.Width();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ConstantLight    pntLight; //点光源

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//First we need to start up SDL, and make sure it went ok



		return hr;



		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		D3D11_SDK_VERSION,

		if (e.type == SDL_QUIT)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

		&m_pDevice,

	SAFE_RELEASE(m_pTexture);

};

	m_Viewport.TopLeftX = 0;

	m_Viewport.MaxDepth = 1.0f;

			}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		}

	for (const auto& shape : shapes)

	D3D11_SAMPLER_DESC smpDesc;

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

		R"(cube.obj)");

		return hr;

	m_pInputLayout = NULL;

{

			index_offset += fv;

	}

		return hr;

	delete[] pIList;

	ConstantLight    pntLight; //点光源

	ibDesc.StructureByteStride = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.MiscFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	pBackBuffer->Release();

}

}

	for (int i = 0; i < 3; i++)

	tinyobj::ObjReaderConfig reader_config;

using std::cout; using std::endl;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

			{

#include <iostream>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.Warning().empty())

};

#include <iostream>

	pBackBuffer->Release();

	//Clean up our objects and quit

	m_VertexCount = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float    nearZ = 0.1f;

	float    fov = XMConvertToRadians(20.0f);



	pBackBuffer->Release();

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

int main(int, char**)

	dsDesc.Texture2D.MipSlice = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Event e;

		{

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.CPUAccessFlags = 0;

				// access to vertex

	m_pInputLayout = NULL;

		if (e.type == SDL_QUIT)

	{



	delete[] pVList;

	//First we need to start up SDL, and make sure it went ok

void CD3DTest::Release()

	float    nearZ = 0.1f;

	m_Viewport.MinDepth = 0.0f;

	LoadObj(vertexlist, indexList);

	ConstantMatrixBuffer cmb;

	ibDesc.CPUAccessFlags = 0;

			break;

	XMFLOAT4X4 view;

			{

		&m_pDevice,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vbDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	txDesc.MipLevels = 1;

	}*/



	{

#endif

			case SDLK_RIGHT:





		R"(cube.obj)");

	enum KeyPressSurfaces

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		if (!ret)

	if (FAILED(hr))

#include <iostream>

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Height = rect.Height();

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_TEXTURE2D_DESC txDesc;



	irData.SysMemPitch = 0;

				break;





	ZeroMemory(&txDesc, sizeof(txDesc));

	std::string error;

		flags,



				vertex.push_back(vertex_tmp);



	bool ret = tinyobj::LoadObj(

	ConstantLight    pntLight; //点光源

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	int     vcount = vertexlist.size();

			switch (e.key.keysym.sym)

	XMFLOAT4         eyePos;   //視点座標







	float    fov = XMConvertToRadians(20.0f);

	m_pPixelShader = NULL;

}

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}



		//User requests quit

};

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{



	cbDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		NULL,

				break;

	//vector<Vertex> vertex_t;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				// access to vertex

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pSwapChain = NULL;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	{



	m_pSwapChain->Present(0, 0);

	std::string error;

		&m_pSwapChain,

	D3D_FEATURE_LEVEL level;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

	//vector<Vertex> vertex_t;

	m_IndexCount = 0;

{



	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点バッファ作成

		1,

	vrData.SysMemSlicePitch = 0;

				WORD index = idx.vertex_index;

	vrData.SysMemPitch = 0;

	m_Viewport.TopLeftY = 0;





	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	enum KeyPressSurfaces

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;







};

struct ConstantMatrixBuffer {

	if (FAILED(hr))



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

#include "DirectXManager.h"

		delete[] pVList;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderClear(ren);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		{

	//ビューポート設定



	vrData.pSysMem = &pVList[0];

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vector<WORD> indexList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				WORD index = idx.vertex_index;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	Release();

	{

	{

		}

		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	D3D11_TEXTURE2D_DESC txDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//First we need to start up SDL, and make sure it went ok

	vbDesc.StructureByteStride = 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_SUBRESOURCE_DATA irData;

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pTexture = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		NULL,

			}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.pSysMem = &pIList[0];

	vbDesc.CPUAccessFlags = 0;





		cout << "SDL_INIT_ERROR" << endl;

	// Loop over shapes

	// Loop over shapes

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

	SDL_FreeSurface(bmp);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		pVList[i] = vertexlist[i];

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

		pLevels,

	SAFE_RELEASE(m_pSampler);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	::GetClientRect(hwnd, &rect);

	SDL_DestroyRenderer(ren);

	delete[] pIList;

		exit(1);

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

		delete[] pVList;

	return hr;





		KEY_PRESS_SURFACE_DEFAULT,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSwapChain = NULL;

			break;



	txDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

	float    nearZ = 0.1f;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





}
		pLevels,

 */

	}



	ConstantLightBuffer clb;

				break;

		&m_pSwapChain,

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		exit(1);



	m_pRenderTargetView = NULL;

}

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		pIList[j] = indexList[j];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		size_t index_offset = 0;



		&m_pDevice,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

{

		return hr;

	auto& attrib = reader.GetAttrib();

	{

CD3DTest::CD3DTest()

		//User presses a key

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pMatrixBuffer = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<Vertex> vertexlist;

	XMFLOAT4X4 projection;

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	}

	m_pTexture = NULL;



	cbDesc.StructureByteStride = 0;

		// Loop over faces(polygon)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.Windowed = TRUE;

	{



	HRESULT              hr;

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pPixelShader = NULL;

	//First we need to start up SDL, and make sure it went ok

{

		flags,

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			index_offset += num_vertices;

	m_pDepthStencilView = NULL;



	{

};

				// access to vertex

	D3D11_TEXTURE2D_DESC txDesc;



using std::cout; using std::endl;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			for (size_t v = 0; v < num_vertices; v++)

	for (const auto& shape : shapes)



	tinyobj::attrib_t attrib;

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Quit();



		return hr;

			break;

				vertex.push_back(vertex_tmp);

	HRESULT              hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = 0;

	m_pSwapChain->Present(0, 0);

struct ConstantLight {

			exit(1);

	SDL_Event e;

	m_VertexCount = 0;



		pIList[j] = indexList[j];



	vrData.SysMemPitch = 0;



	m_pPixelShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

			{

	//Create Index

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return 0;

#define TINYOBJLOADER_IMPLEMENTATION



	SAFE_RELEASE(m_pRenderTargetView);

	m_pSwapChain = NULL;

		return hr;

int main(int, char**)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

void CD3DTest::Release()

		&error,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.StructureByteStride = 0;

				WORD index = idx.vertex_index;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		//User requests quit

	D3D11_SAMPLER_DESC smpDesc;

		if (!reader.Error().empty())

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		if (!reader.Error().empty())



		&level,

	std::string inputfile = "test.obj";

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4X4 view;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

int main(int, char**)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemPitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

		{





		return hr;

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 pos;               //座標(x,y,z)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	delete[] pIList;

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	auto& attrib = reader.GetAttrib();

		&shapes,

			}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pSampler);

	vector<WORD> indexList;

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



			}



	Vertex* pVList = new Vertex[vcount];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				indexlist.push_back(idx.vertex_index);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))



				vertex.push_back(vertex_tmp);

	m_pIndexBuffer = NULL;

				break;

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.SampleDesc.Quality = 0;



struct ConstantLightBuffer {

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pTexture = NULL;



	SAFE_RELEASE(m_pIndexBuffer);

	//Create Index

				indexlist.push_back(index);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



			break;

	if (FAILED(hr))

	//Create Index

		size_t index_offset = 0;

		if (e.type == SDL_QUIT)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <SDL.h>

	//vector<Vertex> vertex_t;

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	//Clean up our objects and quit

	scDesc.OutputWindow = hwnd;

		KEY_PRESS_SURFACE_LEFT,



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	UINT strides = sizeof(Vertex);

	}

			case SDLK_LEFT:

	vbDesc.StructureByteStride = 0;



	m_pTextureView = NULL;



	D3D_FEATURE_LEVEL level;

	txDesc.CPUAccessFlags = 0;

	::GetClientRect(hwnd, &rect);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	::GetClientRect(hwnd, &rect);

		&materials,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	{

	SAFE_RELEASE(m_pVertexShader);





		SDL_RenderCopy(ren, tex, NULL, NULL);

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.eyePos, eye);

	m_VertexCount = vcount;

			{

	ConstantLight    pntLight; //点光源



 * Lesson 1: Hello World!

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	WORD* pIList = new WORD[icount];

	vbDesc.CPUAccessFlags = 0;

	{

}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;

				WORD index = idx.vertex_index;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}



	Release();

	XMStoreFloat4(&clb.ambient, lightAmbient);



	return hr;



	dsDesc.Format = txDesc.Format;

};

		return hr;

	dsDesc.Format = txDesc.Format;



	WORD* pIList = new WORD[icount];



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SAFE_RELEASE(m_pSampler);

#include <SDL.h>

	if (m_pImmediateContext)

	SDL_FreeSurface(bmp);

/*

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			{

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pDepthStencilView = NULL;





	SDL_DestroyRenderer(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLightBuffer clb;

	//インデックスバッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMaterial material; //物体の質感

	m_IndexCount = icount;

	ConstantLightBuffer clb;

{

 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vrData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderPresent(ren);

	ibDesc.StructureByteStride = 0;

struct ConstantLight {

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pImmediateContext);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

CD3DTest::CD3DTest()

	{

	auto& materials = reader.GetMaterials();



#include <SDL.h>

CD3DTest::~CD3DTest()

	//頂点レイアウト作成



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			{





	m_VertexCount = vcount;





	ZeroMemory(&txDesc, sizeof(txDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			{

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	if (FAILED(hr))

	if (FAILED(hr))

		&shapes,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//ピクセルシェーダー生成

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	SAFE_RELEASE(m_pIndexBuffer);

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	}

	while (SDL_PollEvent(&e) != 0)

		cout << "SDL_INIT_ERROR" << endl;

int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,

			case SDLK_UP:

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				break;

	//Vertex* pVList = new Vertex[vcount];

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

}

	m_pTexture = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

struct ConstantMaterial {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pPixelShader = NULL;



	txDesc.MiscFlags = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pVertexShader);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vector<Vertex> vertexlist;









		SDL_RenderPresent(ren);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	vector<WORD> indexList;

int main(int, char**)

	vrData.pSysMem = &pVList[0];

	for (int i = 0; i < 3; i++)

	for (size_t s = 0; s < shapes.size(); s++)

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}
	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Quit();

	//インデックスバッファ作成

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	while (SDL_PollEvent(&e) != 0)



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	//First we need to start up SDL, and make sure it went ok

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	int     vcount = vertexlist.size();



	//vector<Vertex> vertex_t;

	vbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pVertexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	int     vcount = vertexlist.size();

	m_IndexCount = icount;

		return hr;

	}

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.StructureByteStride = 0;

	m_pRenderTargetView = NULL;

		return hr;

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.pSysMem = &pIList[0];

		}

int SEGMENT = 36;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pTexture = NULL;

	{

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}



	SAFE_RELEASE(m_pInputLayout);



			default:

	WORD   icount = indexList.size();

		delete[] pIList;

		&error,

	if (FAILED(hr))

	if (FAILED(hr))



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	cbDesc.CPUAccessFlags = 0;

				break;

			exit(1);

	SAFE_RELEASE(m_pInputLayout);

		&m_pImmediateContext);

	txDesc.MipLevels = 1;



	SAFE_RELEASE(m_pIndexBuffer);

		&attrib,



	if (FAILED(hr))

		return hr;

void CD3DTest::Render()

/*

	{

	if (FAILED(hr))





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

		exit(1);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);







		m_pImmediateContext->ClearState();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexShader = NULL;





	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	if (FAILED(hr))

#include <iostream>

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	scDesc.Windowed = TRUE;

	return 0;



		}

	vector<WORD> indexList;

	//テクスチャ読み込み



	//インデックスバッファ作成



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み

#include "DirectXManager.h"

	//ピクセルシェーダー生成

	//頂点レイアウト作成

	m_Viewport.MinDepth = 0.0f;



	}

		SDL_RenderClear(ren);

	}

	XMFLOAT4X4 view;

	if (m_pImmediateContext)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = 0;

		{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;



	ConstantLightBuffer clb;

		}

	//Clean up our objects and quit

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		D3D11_SDK_VERSION,

		// Loop over faces(polygon)

	cbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;



	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.SampleDesc.Count = 1;

CD3DTest::CD3DTest()

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//ピクセルシェーダー生成

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	pBackBuffer->Release();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemPitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		SDL_RenderPresent(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	tinyobj::attrib_t attrib;







	SAFE_RELEASE(m_pInputLayout);

	//Create Index

	Release();

		SDL_RenderCopy(ren, tex, NULL, NULL);

		//User presses a key

#include <SDL.h>



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				indexlist.push_back(idx.vertex_index);

	m_Viewport.TopLeftX = 0;

		m_pImmediateContext->ClearState();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pVList;



	cbDesc.CPUAccessFlags = 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	tinyobj::attrib_t attrib;

		{

	m_Viewport.TopLeftY = 0;



	txDesc.SampleDesc.Count = 1;

int main(int, char**)



	m_IndexCount = 0;

	delete[] pIList;

#include <SDL.h>

				vertex.push_back(vertex_tmp);

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



	txDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

int main(int, char**)



			case SDLK_DOWN:





	//Clean up our objects and quit

	Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	LoadObj(vertexlist, indexList);



				vertex.push_back(vertex_tmp);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

#include <iostream>

				tinyobj::real_t ty =

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	}

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pSwapChain);

	{

	}

	::GetClientRect(hwnd, &rect);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



			break;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	SDL_Quit();

	auto& shapes = reader.GetShapes();

			index_offset += fv;

			case SDLK_LEFT:

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

 * Lesson 1: Hello World!

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4         ambient;  //環境光(r,g,b)

	scDesc.BufferDesc.Width = rect.Width();

	return hr;

		KEY_PRESS_SURFACE_LEFT,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext = NULL;

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.Width = (FLOAT)rect.Width();

		}

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	UINT flags = 0;

				indexlist.push_back(index);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

}

			// Loop over vertices in the face.

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (m_pImmediateContext)

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	pBackBuffer->Release();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4X4 projection;

	dsDesc.Texture2D.MipSlice = 0;



	{

	//ピクセルシェーダー生成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.CPUAccessFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		size_t index_offset = 0;

				indexlist.push_back(index);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	txDesc.CPUAccessFlags = 0;

	UINT flags = 0;

			{

			break;

		SDL_RenderClear(ren);

		&error,

		else if (e.type == SDL_KEYDOWN)



	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			break;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

};

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	UINT offsets = 0;



		&m_pImmediateContext);

				WORD index = idx.vertex_index;

	m_pTexture = NULL;

	D3D11_BUFFER_DESC ibDesc;

	SDL_Event e;

				WORD index = idx.vertex_index;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	return 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Event e;

	SAFE_RELEASE(m_pLightBuffer);

	{

	{

}









		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.StructureByteStride = 0;

		pIList[j] = indexList[j];

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	}

	m_Viewport.TopLeftX = 0;

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

int SEGMENT = 36;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	//テクスチャ読み込み

	//Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	//ピクセルシェーダー生成

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		return hr;

				indexlist.push_back(idx.vertex_index);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.MipLevels = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

struct ConstantMaterial {

		else if (e.type == SDL_KEYDOWN)

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			//Select surfaces based on key press

				tinyobj::real_t tx =

	delete[] pIList;

	SDL_Quit();

/*

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		&m_pSwapChain,

				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	// Loop over shapes

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pVertexBuffer);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	D3D11_BUFFER_DESC cbDesc;

		&materials,



	//vector<WORD> index_t;

	m_pSampler = NULL;

	}

	std::string inputfile = "test.obj";



#include <SDL.h>

	SAFE_RELEASE(m_pMatrixBuffer);

{



		&attrib,



	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	txDesc.SampleDesc.Quality = 0;

void CD3DTest::Render()



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	UINT flags = 0;



	XMFLOAT4X4 projection;



			{

				vertex.push_back(vertex_tmp);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.OutputWindow = hwnd;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pRenderTargetView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



		delete[] pIList;

	{





			}

}



#endif

	m_Viewport.MinDepth = 0.0f;

	Vertex* pVList = new Vertex[vcount];

	{

	{

	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;

				// access to vertex

	m_pDevice = NULL;



	{



		&shapes,

	dsDesc.Format = txDesc.Format;

	if (!error.empty())

		// Loop over faces(polygon)





	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	SAFE_RELEASE(m_pInputLayout);

	};

		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vector<WORD> indexList;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	CRect                rect;

			int num_vertices = shape.mesh.num_face_vertices[f];



	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			{

	scDesc.SampleDesc.Quality = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSampler = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	}



int SEGMENT = 36;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;

	SAFE_RELEASE(m_pDevice);

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_TOTAL

};



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_SUBRESOURCE_DATA irData;

};



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);



	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//テクスチャ読み込み

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	if (!reader.ParseFromFile(inputfile, reader_config))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pVertexBuffer = NULL;

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





		if (!reader.Error().empty())

int main(int, char**)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

int main(int, char**)

	//ピクセルシェーダー生成

	XMStoreFloat4(&clb.ambient, lightAmbient);

	UINT flags = 0;





	irData.SysMemSlicePitch = 0;

	D3D11_BUFFER_DESC cbDesc;

	scDesc.SampleDesc.Quality = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				WORD index = idx.vertex_index;

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

	return;

		return hr;



	vbDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			}



		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 pos;               //座標(x,y,z)

	vector<Vertex> vertexlist;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pDepthStencilTexture = NULL;

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pInputLayout);

{

	ibDesc.CPUAccessFlags = 0;



{

	delete[] pIList;

		return hr;



	cbDesc.MiscFlags = 0;



		}



				break;

	std::string error;

		cout << "SDL_INIT_ERROR" << endl;

	//定数バッファ作成



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_SAMPLER_DESC smpDesc;

}







				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		}

	SAFE_RELEASE(m_pTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pSampler);

				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	reader_config.mtl_search_path = "./"; // Path to material files

	std::vector<tinyobj::material_t> materials;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	std::vector<tinyobj::material_t> materials;

	if (!error.empty())



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t ty =

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			exit(1);

				vertex.push_back(vertex_tmp);

		}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				// access to vertex



	//テクスチャ読み込み

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		SDL_RenderClear(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.CPUAccessFlags = 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

	UINT flags = 0;



{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.MaxDepth = 1.0f;

#endif

	m_VertexCount = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



			index_offset += num_vertices;

	m_pMatrixBuffer = NULL;



	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	irData.SysMemSlicePitch = 0;

	float    farZ = 100.0f;



#define TINYOBJLOADER_IMPLEMENTATION

			case SDLK_UP:

{

}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	if (FAILED(hr))

		}

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_IndexCount = icount;

	}

	scDesc.BufferCount = 1;



}

	std::string inputfile = "test.obj";



	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_SAMPLER_DESC smpDesc;



	ConstantLight    pntLight; //点光源

	m_pVertexBuffer = NULL;

#include <iostream>

		//User presses a key



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

		return hr;

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		&level,

	/*

	{



	auto& attrib = reader.GetAttrib();

	{



	hr = D3D11CreateDeviceAndSwapChain(NULL,



struct ConstantMatrixBuffer {

		{

		// Loop over faces(polygon)

				break;



	txDesc.MipLevels = 1;

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		//User presses a key

	SAFE_RELEASE(m_pPixelShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))



	txDesc.MiscFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		if (!ret)

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::vector<tinyobj::material_t> materials;

		SDL_RenderPresent(ren);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	float    nearZ = 0.1f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			}



		{

	m_pSwapChain->Present(0, 0);



{

	std::string imagePath = "hello.bmp";

void CD3DTest::Render()

				indexlist.push_back(idx.vertex_index);





	m_pDevice = NULL;

	D3D11_BUFFER_DESC cbDesc;

	m_pDevice = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;

		&error,

		return hr;

		//User requests quit

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vbDesc.MiscFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



struct ConstantMaterial {

		D3D_DRIVER_TYPE_HARDWARE,

	dsDesc.Format = txDesc.Format;

	}





				// access to vertex

	for (int i = 0; i < 3; i++)

			{

using std::cout; using std::endl;

	tinyobj::ObjReaderConfig reader_config;

	m_VertexCount = vcount;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

		pVList[i] = vertexlist[i];

	}



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//First we need to start up SDL, and make sure it went ok



	scDesc.BufferCount = 1;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	int     vcount = vertexlist.size();

	for (int i = 0; i < vcount; i++)

	m_VertexCount = vcount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	scDesc.BufferCount = 1;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    fov = XMConvertToRadians(20.0f);







	m_pIndexBuffer = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.ArraySize = 1;

	SDL_Event e;

	{

		KEY_PRESS_SURFACE_DEFAULT,

	m_VertexCount = vcount;

	std::vector<tinyobj::shape_t> shapes;

		NULL,

	SAFE_RELEASE(m_pLightBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	WORD   icount = indexList.size();

	}

	txDesc.Height = rect.Height();

	SDL_FreeSurface(suf);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



 * Lesson 1: Hello World!

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		delete[] pIList;











	std::string imagePath = "hello.bmp";

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成

	{

	ConstantMaterial material; //物体の質感

	scDesc.BufferDesc.Width = rect.Width();



#include <SDL.h>

			{

	vector<Vertex> vertexlist;

			switch (e.key.keysym.sym)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//Clean up our objects and quit

	delete[] pIList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	{



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (!error.empty())

		{



	D3D11_SUBRESOURCE_DATA irData;

int main(int, char**)

	WORD   icount = indexList.size();

	WORD* pIList = new WORD[icount];

	SDL_Quit();

	Vertex* pVList = new Vertex[vcount];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4X4 world;

	ibDesc.CPUAccessFlags = 0;

#ifdef _DEBUG

			index_offset += num_vertices;

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			}

	std::vector<tinyobj::shape_t> shapes;



	scDesc.Windowed = TRUE;

		{

		return hr;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

};

			case SDLK_UP:

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	UINT strides = sizeof(Vertex);

				break;



				vertex.push_back(vertex_tmp);



void CD3DTest::Release()



	irData.SysMemPitch = 0;

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.Height = rect.Height();



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

using std::cout; using std::endl;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4X4 projection;

	//ビューポート設定

	ConstantLightBuffer clb;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.TopLeftY = 0;



		delete[] pIList;

 */

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	DXGI_SWAP_CHAIN_DESC scDesc;

using std::cout; using std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	{

		KEY_PRESS_SURFACE_TOTAL

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	//First we need to start up SDL, and make sure it went ok



	m_pPixelShader = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//Create Index

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::vector<tinyobj::shape_t> shapes;

		delete[] pIList;

	m_pDepthStencilView = NULL;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//First we need to start up SDL, and make sure it went ok

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	vrData.SysMemPitch = 0;

		}

	SAFE_RELEASE(m_pTexture);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

	txDesc.MiscFlags = 0;

	UINT offsets = 0;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	}

		KEY_PRESS_SURFACE_DEFAULT,

	{

	SAFE_RELEASE(m_pPixelShader);

		KEY_PRESS_SURFACE_DOWN,

void CD3DTest::Render()

	scDesc.OutputWindow = hwnd;

	vector<Vertex> vertexlist;

				indexlist.push_back(idx.vertex_index);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;



		return hr;

	cbDesc.CPUAccessFlags = 0;

		return hr;

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	irData.SysMemPitch = 0;

	//Clean up our objects and quit

			switch (e.key.keysym.sym)

	//vector<WORD> index_t;

		}

	ibDesc.StructureByteStride = 0;



	m_VertexCount = vcount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (int i = 0; i < vcount; i++)



};



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.SampleDesc.Count = 1;

	vbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

		size_t index_offset = 0;  // インデントのオフセット

				break;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.SampleDesc.Count = 1;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&level,

		SDL_RenderClear(ren);

		return hr;

	XMFLOAT4X4 view;

		return 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

#include <iostream>

	//Key press surfaces constants



	vrData.pSysMem = &pVList[0];

}



		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	vbDesc.MiscFlags = 0;





	m_pVertexShader = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pImmediateContext);

		&m_pImmediateContext);

		SDL_Delay(1000);

		return hr;



			case SDLK_LEFT:

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t tx =

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

/*



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pLightBuffer = NULL;

		}

		KEY_PRESS_SURFACE_UP,

	}

	//Clean up our objects and quit

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		size_t index_offset = 0;

			break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//テクスチャ読み込み

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_Delay(1000);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&error,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.StructureByteStride = 0;

	ID3D11Texture2D* pBackBuffer;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	CRect                rect;

		&scDesc,



	if (FAILED(hr))

	if (FAILED(hr))

	{

			index_offset += num_vertices;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	/*

	}



	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vrData.SysMemSlicePitch = 0;

		{

	txDesc.SampleDesc.Quality = 0;

	return 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

}

		//User requests quit

	if (FAILED(hr))

				break;

	//インデックスバッファ作成

	m_pRenderTargetView = NULL;

			}

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vector<Vertex> vertexlist;

	D3D11_TEXTURE2D_DESC txDesc;



}

	txDesc.SampleDesc.Count = 1;

	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pImmediateContext);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_RenderCopy(ren, tex, NULL, NULL);





	vrData.SysMemPitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		m_pImmediateContext->ClearState();

{

		m_pImmediateContext->ClearState();

	m_Viewport.MinDepth = 0.0f;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}



	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(idx.vertex_index);

	std::vector<tinyobj::material_t> materials;

	//頂点バッファ作成



			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

	m_pDevice = NULL;

				indexlist.push_back(index);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pSampler = NULL;

	scDesc.BufferCount = 1;

	if (!reader.Warning().empty())

		return hr;

		if (!reader.Error().empty())

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

		&m_pSwapChain,

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

#ifdef _DEBUG



	m_pVertexBuffer = NULL;

	txDesc.ArraySize = 1;

		&attrib,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

/*

				WORD index = idx.vertex_index;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))



	}

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))



	m_pTextureView = NULL;

			for (size_t v = 0; v < fv; v++)

	return;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			switch (e.key.keysym.sym)



};



	return 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext = NULL;



	if (FAILED(hr))

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				break;

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	std::string error;

	if (FAILED(hr))

#include <iostream>



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





		NULL,



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4         eyePos;   //視点座標

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			default:

	Release();







		}

		return hr;



				// access to vertex

	delete[] pIList;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SAFE_RELEASE(m_pDepthStencilView);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

void CD3DTest::Render()



	vector<Vertex> vertexlist;

	txDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		m_pImmediateContext->ClearState();



}



	m_pDepthStencilView = NULL;

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4         ambient;  //環境光(r,g,b)

		R"(cube.obj)");

	SAFE_RELEASE(m_pLightBuffer);

		&attrib,

	m_Viewport.Height = (FLOAT)rect.Height();

			case SDLK_UP:

	cbDesc.MiscFlags = 0;

	XMFLOAT4X4 projection;

	ibDesc.StructureByteStride = 0;

				indexlist.push_back(index);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	HRESULT              hr;

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return 1;

			case SDLK_LEFT:

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ConstantMatrixBuffer cmb;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;

void CD3DTest::Render()

		return hr;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{

			{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}
	/*

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//頂点バッファ作成



		&materials,

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				indexlist.push_back(index);

		return hr;

	txDesc.Width = rect.Width();



	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		R"(cube.obj)");

	ZeroMemory(&txDesc, sizeof(txDesc));

#include <iostream>

	SAFE_RELEASE(m_pTexture);

			case SDLK_RIGHT:

	m_pIndexBuffer = NULL;

				tinyobj::real_t tx =

	XMFLOAT4 diffuse;           //拡散(r,g,b)

CD3DTest::CD3DTest()

	while (SDL_PollEvent(&e) != 0)

CD3DTest::~CD3DTest()

};

		SDL_RenderClear(ren);

}

	XMStoreFloat4(&clb.eyePos, eye);

	m_VertexCount = vcount;

	SDL_DestroyRenderer(ren);

	txDesc.SampleDesc.Count = 1;

	for (int j = 0; j < icount; j++)



		&m_pDevice,

		return hr;

	SDL_DestroyWindow(win);

	SDL_Quit();



}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pDevice);

		&level,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

		return 1;

	return 0;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pIndexBuffer);

	CRect                rect;

				WORD index = idx.vertex_index;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	delete[] pIList;

	Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftX = 0;



	ConstantMatrixBuffer cmb;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		flags,

	if (FAILED(hr))



		&attrib,

		&m_pImmediateContext);

	}

	D3D11_BUFFER_DESC vbDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	for (int i = 0; i < 3; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

		if (!reader.Error().empty())

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);

	UINT flags = 0;

	//ピクセルシェーダー生成



	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	return 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





				indexlist.push_back(idx.vertex_index);

		}

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

	std::string imagePath = "hello.bmp";

		&error,

	scDesc.BufferCount = 1;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		KEY_PRESS_SURFACE_LEFT,

struct ConstantMatrixBuffer {

	{

		R"(cube.obj)");

	m_pDepthStencilTexture = NULL;

	txDesc.ArraySize = 1;

		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_BUFFER_DESC ibDesc;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (m_pImmediateContext)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	std::vector<tinyobj::material_t> materials;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (!error.empty())

	XMFLOAT4         ambient;  //環境光(r,g,b)

				break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

/*

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext = NULL;

				// access to vertex

	//Key press surfaces constants

		return hr;

#include "DirectXManager.h"

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4X4 projection;

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		pLevels,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



 * Lesson 1: Hello World!

			case SDLK_RIGHT:

		}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&m_pDevice,

	m_pDevice = NULL;

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_UP:

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	std::vector<tinyobj::material_t> materials;

	scDesc.SampleDesc.Quality = 0;

	}



	{

	ibDesc.StructureByteStride = 0;

			switch (e.key.keysym.sym)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		&shapes,



	//頂点バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		&attrib,

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		if (e.type == SDL_QUIT)





}

	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点レイアウト作成



		SDL_Delay(1000);

	WORD   icount = indexList.size();

	if (FAILED(hr))



	UINT flags = 0;

		return 1;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	}

	vbDesc.MiscFlags = 0;

				WORD index = idx.vertex_index;

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pImmediateContext);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DOWN,

	tinyobj::ObjReaderConfig reader_config;

	SDL_Event e;

		return hr;

	}



CD3DTest::CD3DTest()

		SDL_Delay(1000);



	if (!error.empty())

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

struct ConstantMatrixBuffer {



		}

	}

#ifdef _DEBUG

	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.StructureByteStride = 0;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pSwapChain = NULL;

using std::cout; using std::endl;

		SDL_Delay(1000);



	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pRenderTargetView);



		&m_pDevice,

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		{

int SEGMENT = 36;

	ID3D11Texture2D* pBackBuffer;

	m_Angle += XMConvertToRadians(1.0f);

{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4X4 view;

		m_pImmediateContext->ClearState();

#define TINYOBJLOADER_IMPLEMENTATION



			}

	SAFE_RELEASE(m_pVertexShader);

	scDesc.BufferDesc.Width = rect.Width();

	if (!reader.ParseFromFile(inputfile, reader_config))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Quality = 0;

		return hr;

			{

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		if (e.type == SDL_QUIT)

			for (size_t v = 0; v < fv; v++)

}





	txDesc.ArraySize = 1;

	ConstantMatrixBuffer cmb;





		&error,

	m_pSampler = NULL;

#include "DirectXManager.h"

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	std::vector<tinyobj::material_t> materials;

struct ConstantMaterial {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	DXGI_SWAP_CHAIN_DESC scDesc;

	auto& shapes = reader.GetShapes();

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

				break;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	enum KeyPressSurfaces



}

		}

			case SDLK_RIGHT:



	D3D11_BUFFER_DESC vbDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	m_pIndexBuffer = NULL;

	int     vcount = vertexlist.size();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		NULL,



	D3D11_BUFFER_DESC ibDesc;

	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		delete[] pIList;

	irData.pSysMem = &pIList[0];

	scDesc.BufferDesc.Height = rect.Height();





		// Loop over faces(polygon)



	pBackBuffer->Release();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include <SDL.h>

CD3DTest::~CD3DTest()



	cbDesc.MiscFlags = 0;

		else if (e.type == SDL_KEYDOWN)





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	tinyobj::ObjReaderConfig reader_config;

	{

	SDL_DestroyRenderer(ren);



		&attrib,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//ピクセルシェーダー生成

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

				break;

	cbDesc.CPUAccessFlags = 0;

			{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyWindow(win);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pVertexShader = NULL;

				indexlist.push_back(idx.vertex_index);

	for (const auto& shape : shapes)

				vertex.push_back(vertex_tmp);



	scDesc.Windowed = TRUE;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				WORD index = idx.vertex_index;

		&attrib,

	D3D11_BUFFER_DESC ibDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	//テクスチャ読み込み

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#include <iostream>

				tinyobj::real_t tx =

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;



		&error,

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			}

				break;

	m_pDevice = NULL;

		if (e.type == SDL_QUIT)

		}

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_TOTAL

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	m_IndexCount = icount;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	Release();

		cout << "SDL_INIT_ERROR" << endl;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyRenderer(ren);

	//定数バッファ作成

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyWindow(win);

	m_Angle += XMConvertToRadians(1.0f);

				WORD index = idx.vertex_index;

	{

		D3D_DRIVER_TYPE_HARDWARE,

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_pTextureView = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

		}

		SDL_RenderClear(ren);

			index_offset += fv;

	SDL_DestroyWindow(win);

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#define TINYOBJLOADER_IMPLEMENTATION

	tinyobj::ObjReader reader;

	{

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	if (FAILED(hr))

		m_pImmediateContext->ClearState();



	SAFE_RELEASE(m_pSwapChain);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

				vertex.push_back(vertex_tmp);



int SEGMENT = 36;

	float    farZ = 100.0f;

	m_VertexCount = vcount;

		return hr;



		NULL,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_UP:

	cbDesc.StructureByteStride = 0;

		return hr;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_SAMPLER_DESC smpDesc;





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 ambient;           //環境(r,g,b)

	irData.SysMemSlicePitch = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		KEY_PRESS_SURFACE_RIGHT,

			case SDLK_LEFT:

	HRESULT              hr;

	{



	m_pPixelShader = NULL;

	txDesc.Height = rect.Height();

	m_VertexCount = 0;



	irData.SysMemPitch = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Width = rect.Width();

	tinyobj::ObjReader reader;

	m_pDepthStencilView = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	while (SDL_PollEvent(&e) != 0)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&materials,

	SDL_FreeSurface(bmp);

	tinyobj::attrib_t attrib;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	SAFE_RELEASE(m_pDepthStencilTexture);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	//定数バッファ作成

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		cout << "SDL_INIT_ERROR" << endl;







#include "DirectXManager.h"



	ConstantLight    pntLight; //点光源

		SDL_Delay(1000);

			// Loop over vertices in the face.

		return hr;

#include <SDL.h>

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Count = 1;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Quit();

};





};

	ibDesc.MiscFlags = 0;

	WORD   icount = indexList.size();



		&scDesc,

 */





	}

	//First we need to start up SDL, and make sure it went ok

		}

	SDL_DestroyRenderer(ren);

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	Release();



}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;







	D3D11_BUFFER_DESC cbDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		// Loop over faces(polygon)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.MipLevels = 1;

	}

	cbDesc.StructureByteStride = 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	dsDesc.Texture2D.MipSlice = 0;

		{

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//vector<Vertex> vertex_t;



	m_pInputLayout = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	delete[] pVList;

		SDL_RenderPresent(ren);

	if (!error.empty())



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			int num_vertices = shape.mesh.num_face_vertices[f];

			switch (e.key.keysym.sym)

	D3D11_SUBRESOURCE_DATA vrData;



			{

			for (size_t v = 0; v < num_vertices; v++)



	}



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.MipLevels = 1;

	vector<WORD> indexList;

	//インデックスバッファ作成



{



			{

	}

#include <SDL.h>

	{

		&level,

	m_Viewport.MinDepth = 0.0f;

		KEY_PRESS_SURFACE_TOTAL

	ID3D11Texture2D* pBackBuffer;

	m_pDepthStencilTexture = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	cbDesc.StructureByteStride = 0;



	bool ret = tinyobj::LoadObj(

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferDesc.Height = rect.Height();

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

int SEGMENT = 36;

	ibDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			case SDLK_RIGHT:

				break;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	txDesc.ArraySize = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;



	{

	{

			{

	m_Viewport.MaxDepth = 1.0f;

			case SDLK_LEFT:



	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pVertexBuffer);

		pLevels,

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.eyePos, eye);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&level,

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilView = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	enum KeyPressSurfaces



	txDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);







	SAFE_RELEASE(m_pTexture);

		pIList[j] = indexList[j];

		return hr;

		//User requests quit

	scDesc.Windowed = TRUE;

	vector<WORD> indexList;

};

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	delete[] pIList;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.StructureByteStride = 0;

	//Clean up our objects and quit

	SDL_DestroyTexture(tex);

int main(int, char**)

	XMFLOAT4 pos;               //座標(x,y,z)

	for (int j = 0; j < icount; j++)



	vrData.SysMemPitch = 0;

	m_pDepthStencilTexture = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pVertexBuffer = NULL;

				break;

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	std::vector<tinyobj::shape_t> shapes;

	cbDesc.StructureByteStride = 0;



	SDL_FreeSurface(suf);

	{

	vrData.pSysMem = &pVList[0];

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				break;

	txDesc.SampleDesc.Count = 1;

	for (int i = 0; i < vcount; i++)

	return hr;

	std::vector<tinyobj::shape_t> shapes;

	txDesc.ArraySize = 1;

				// access to vertex

HRESULT CD3DTest::Create(HWND hwnd)

	{

	UINT flags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		{

	if (FAILED(hr))

	m_pPixelShader = NULL;

	//ピクセルシェーダー生成

	m_Viewport.MinDepth = 0.0f;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_RIGHT,

{



	{

		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	int     vcount = vertexlist.size();

	dsDesc.Format = txDesc.Format;

#include <SDL.h>

	SDL_DestroyTexture(tex);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			case SDLK_UP:

/*



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pImmediateContext);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	tinyobj::ObjReader reader;



	CRect                rect;

		&scDesc,

	HRESULT              hr;

	m_pVertexBuffer = NULL;



#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))





	m_IndexCount = 0;



	m_pDevice = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	//頂点バッファ作成

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}
	if (!reader.Warning().empty())

			//Select surfaces based on key press



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



struct ConstantLight {

	scDesc.BufferDesc.Width = rect.Width();

int main(int, char**)

	if (FAILED(hr))



		&m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		flags,

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty =

	HRESULT              hr;





	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.MipLevels = 1;

		}

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	}

	std::string imagePath = "hello.bmp";

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感





			case SDLK_UP:

};

	cbDesc.MiscFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantLightBuffer {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

}

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

			case SDLK_RIGHT:

	}

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <iostream>

	SDL_FreeSurface(suf);

				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





#endif

	irData.SysMemSlicePitch = 0;

				indexlist.push_back(index);

	// Loop over shapes

	for (int i = 0; i < 3; i++)

		return 1;



#endif

	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	int     vcount = vertexlist.size();

	ibDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC vbDesc;



			case SDLK_UP:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

	UINT offsets = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	dsDesc.Format = txDesc.Format;

	if (!reader.Warning().empty())

	std::string error;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SAFE_RELEASE(m_pDepthStencilView);

{

	//Clean up our objects and quit

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.TopLeftX = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderPresent(ren);

		{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderClear(ren);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

			//Select surfaces based on key press



{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



			}



	tinyobj::ObjReader reader;

	int     vcount = vertexlist.size();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.CPUAccessFlags = 0;

		D3D11_SDK_VERSION,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pLightBuffer);

			// Loop over vertices in the face.

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

struct ConstantMaterial {

	//vector<Vertex> vertex_t;

	txDesc.ArraySize = 1;

	m_Viewport.MinDepth = 0.0f;

	ibDesc.CPUAccessFlags = 0;

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;

	if (FAILED(hr))

	m_VertexCount = 0;

	LoadObj(vertexlist, indexList);

	scDesc.BufferDesc.Width = rect.Width();



	if (FAILED(hr))



	vrData.pSysMem = &pVList[0];

		if (!ret)

	SDL_DestroyTexture(tex);



	scDesc.SampleDesc.Count = 1;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	Vertex* pVList = new Vertex[vcount];

		&error,

};

		exit(1);

	ibDesc.MiscFlags = 0;

				break;

	SAFE_RELEASE(m_pInputLayout);

		return hr;





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	cbDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.MiscFlags = 0;

	Release();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

				indexlist.push_back(index);

	delete[] pIList;

				indexlist.push_back(index);



	m_pTexture = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.MaxDepth = 1.0f;

	{

		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;





		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	SDL_DestroyWindow(win);



	if (m_pImmediateContext)

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			index_offset += num_vertices;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pPixelShader);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			default:

	XMFLOAT4X4 world;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	ibDesc.CPUAccessFlags = 0;

	{

		SDL_RenderClear(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				// access to vertex

		delete[] pVList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SDL_DestroyWindow(win);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

{

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4         eyePos;   //視点座標



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&scDesc,

		1,



	txDesc.Height = rect.Height();

			// Loop over vertices in the face.



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	irData.SysMemSlicePitch = 0;







		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

struct ConstantMaterial {

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4X4 view;



		return hr;

		SDL_Delay(1000);

	std::vector<tinyobj::shape_t> shapes;

				break;

		delete[] pVList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

#include "DirectXManager.h"

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;



	float    nearZ = 0.1f;

}

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pDevice);

	Release();

		if (!ret)

	dsDesc.Texture2D.MipSlice = 0;

	D3D11_TEXTURE2D_DESC txDesc;

}

	for (size_t s = 0; s < shapes.size(); s++)

			for (size_t v = 0; v < num_vertices; v++)

	vector<Vertex> vertexlist;

				break;

	m_Viewport.TopLeftY = 0;

	m_pTextureView = NULL;

		SDL_RenderPresent(ren);

				break;

	WORD* pIList = new WORD[icount];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	return;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

{

	m_Viewport.MaxDepth = 1.0f;

	vrData.pSysMem = &pVList[0];

	txDesc.MipLevels = 1;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	for (int i = 0; i < 3; i++)

struct ConstantMaterial {

#ifdef _DEBUG

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

#include "DirectXManager.h"

		if (!ret)

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.SampleDesc.Quality = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_UP,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	pBackBuffer->Release();

	D3D11_BUFFER_DESC vbDesc;

	//頂点バッファ作成









	{

				tinyobj::real_t ty =

	return;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pDepthStencilView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

	for (int i = 0; i < 3; i++)

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			index_offset += num_vertices;

	bool ret = tinyobj::LoadObj(



{

	SAFE_RELEASE(m_pLightBuffer);

	HRESULT              hr;

	XMFLOAT4 pos;               //座標(x,y,z)



	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	WORD   icount = indexList.size();

	if (!reader.ParseFromFile(inputfile, reader_config))

		1,

	m_pIndexBuffer = NULL;

		SDL_Delay(1000);



		}



	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pTextureView);



		size_t index_offset = 0;

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	SAFE_RELEASE(m_pDevice);

			{

	{

	m_IndexCount = icount;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

#ifdef _DEBUG





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			}

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);



		delete[] pIList;

	txDesc.Height = rect.Height();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

	SDL_DestroyTexture(tex);





				break;

	m_pLightBuffer = NULL;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	// Loop over shapes





	auto& shapes = reader.GetShapes();

	//vector<Vertex> vertex_t;

		&attrib,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	delete[] pVList;



	{

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pSampler);

	};

	vbDesc.CPUAccessFlags = 0;





	SDL_Event e;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	WORD* pIList = new WORD[icount];

		return hr;

	dsDesc.Format = txDesc.Format;

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyTexture(tex);

		NULL,

		KEY_PRESS_SURFACE_RIGHT,

	bool ret = tinyobj::LoadObj(



		return hr;

	return;

}

		}

			case SDLK_DOWN:

	m_Viewport.MinDepth = 0.0f;

	tinyobj::ObjReader reader;

	Vertex* pVList = new Vertex[vcount];

		&m_pDevice,

	ConstantMaterial material; //物体の質感

	m_pDepthStencilView = NULL;

	m_pPixelShader = NULL;

	irData.pSysMem = &pIList[0];

	m_Viewport.TopLeftX = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

	/*

	}



	vrData.SysMemPitch = 0;

	m_pVertexShader = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	vrData.pSysMem = &pVList[0];

	for (int i = 0; i < 3; i++)

		return hr;

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

	//Create Index

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);







	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <SDL.h>

	SDL_FreeSurface(bmp);

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	HRESULT              hr;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;

		size_t index_offset = 0;  // インデントのオフセット

	m_pSwapChain->Present(0, 0);

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	m_IndexCount = icount;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//深度ステンシルバッファ作成

HRESULT CD3DTest::Create(HWND hwnd)

			}

			{





struct ConstantMaterial {

	if (FAILED(hr))

				tinyobj::real_t ty =



struct ConstantLight {

	vrData.pSysMem = &pVList[0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		KEY_PRESS_SURFACE_DEFAULT,

	UINT flags = 0;

	ConstantMaterial material; //物体の質感

{

		return hr;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_IndexCount = 0;

			//Select surfaces based on key press

CD3DTest::CD3DTest()

	DXGI_SWAP_CHAIN_DESC scDesc;

#include <SDL.h>

	m_VertexCount = vcount;

				tinyobj::real_t tx =

			for (size_t v = 0; v < fv; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pDepthStencilView = NULL;







		return hr;

	SDL_FreeSurface(suf);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pTexture);

		KEY_PRESS_SURFACE_DEFAULT,





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//テクスチャ読み込み

	ZeroMemory(&txDesc, sizeof(txDesc));

	{



		SDL_RenderPresent(ren);

				break;

	m_pPixelShader = NULL;

	std::string inputfile = "test.obj";

	enum KeyPressSurfaces

	UINT flags = 0;

#include <SDL.h>



	vbDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	auto& shapes = reader.GetShapes();

			for (size_t v = 0; v < fv; v++)

		{

}

	SAFE_RELEASE(m_pImmediateContext);



	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		flags,



	m_Angle += XMConvertToRadians(1.0f);







	while (SDL_PollEvent(&e) != 0)

{

	scDesc.OutputWindow = hwnd;

	{

		}

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	if (!error.empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

		//User requests quit

				vertex.push_back(vertex_tmp);

		{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点レイアウト作成

		exit(1);

	std::string inputfile = "test.obj";

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	scDesc.BufferCount = 1;

		pVList[i] = vertexlist[i];

	SDL_DestroyRenderer(ren);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4         eyePos;   //視点座標

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx =

	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyTexture(tex);

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//vector<WORD> index_t;

	vbDesc.StructureByteStride = 0;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pPixelShader);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

		&m_pDevice,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pDevice);



			index_offset += num_vertices;







				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		KEY_PRESS_SURFACE_TOTAL

	return hr;

	auto& attrib = reader.GetAttrib();



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//Create Index

	for (size_t s = 0; s < shapes.size(); s++)

}



		delete[] pVList;

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC ibDesc;

#include "DirectXManager.h"

	m_pDepthStencilTexture = NULL;

	ConstantMaterial material; //物体の質感



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&shapes,



			case SDLK_UP:

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		pIList[j] = indexList[j];

		return hr;



	if (!reader.Warning().empty())



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)





				break;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pDevice);



	delete[] pIList;

	m_pTextureView = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.CPUAccessFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			exit(1);



{

	txDesc.Height = rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);


