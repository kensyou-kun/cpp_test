

	{

	m_pTexture = NULL;

	XMFLOAT4         eyePos;   //視点座標



	XMFLOAT4X4 world;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			{



	float    nearZ = 0.1f;

	XMFLOAT4         eyePos;   //視点座標

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//インデックスバッファ作成

		SDL_Delay(1000);

	bool ret = tinyobj::LoadObj(

		return hr;



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));



			index_offset += fv;

		exit(1);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.SampleDesc.Quality = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

using std::cout; using std::endl;

	SDL_FreeSurface(bmp);

	m_pIndexBuffer = NULL;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pMatrixBuffer);

	HRESULT              hr;

#include <iostream>

		KEY_PRESS_SURFACE_LEFT,

	vrData.pSysMem = &pVList[0];



	{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float    fov = XMConvertToRadians(20.0f);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vrData.SysMemSlicePitch = 0;

	//頂点シェーダー生成

	std::vector<tinyobj::shape_t> shapes;

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	// Loop over shapes

		}

	for (size_t s = 0; s < shapes.size(); s++)



	D3D11_BUFFER_DESC ibDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return 0;

		return hr;

	//First we need to start up SDL, and make sure it went ok



	m_pMatrixBuffer = NULL;

	XMFLOAT4X4 view;

	if (m_pImmediateContext)







	SDL_DestroyRenderer(ren);







	//Create Index



}

	{

	m_pInputLayout = NULL;

	}

	txDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	m_pRenderTargetView = NULL;



		&shapes,

	SAFE_RELEASE(m_pTexture);

	cbDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;

	ConstantMaterial material; //物体の質感

			index_offset += fv;

	return 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	for (size_t s = 0; s < shapes.size(); s++)

	//vector<WORD> index_t;

	m_pVertexShader = NULL;

	if (!reader.Warning().empty())

	if (FAILED(hr))



}



	SDL_FreeSurface(suf);

			default:

	//ビューポート設定

}



	SDL_FreeSurface(bmp);

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pDevice);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

	//Vertex* pVList = new Vertex[vcount];

	}

	if (!reader.ParseFromFile(inputfile, reader_config))



			{





		size_t index_offset = 0;  // インデントのオフセット





	m_Viewport.MaxDepth = 1.0f;



	//頂点レイアウト作成

	vbDesc.CPUAccessFlags = 0;

	vrData.pSysMem = &pVList[0];

				indexlist.push_back(index);



	return 0;

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	XMFLOAT4X4 view;



				tinyobj::real_t tx =



				break;

	scDesc.BufferDesc.Height = rect.Height();

	m_IndexCount = icount;

	if (!reader.ParseFromFile(inputfile, reader_config))

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();



};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (m_pImmediateContext)

	}



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//定数バッファ作成

	SDL_FreeSurface(bmp);

				// access to vertex

		m_pImmediateContext->ClearState();

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t ty =

		return 1;

	float    nearZ = 0.1f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

void CD3DTest::Render()

		SDL_Delay(1000);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

/*



{

		&materials,

			for (size_t v = 0; v < num_vertices; v++)



	XMFLOAT4         ambient;  //環境光(r,g,b)

}

	irData.pSysMem = &pIList[0];



	vector<WORD> indexList;

	}

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	Release();



	SDL_Quit();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		KEY_PRESS_SURFACE_DOWN,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

/*

	ConstantLight    pntLight; //点光源

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//ピクセルシェーダー生成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		&level,

	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.MiscFlags = 0;

int main(int, char**)

	m_pPixelShader = NULL;

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderPresent(ren);

#include <SDL.h>



	return 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;  // インデントのオフセット



	if (FAILED(hr))

	m_VertexCount = vcount;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	//テクスチャ読み込み

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vrData.pSysMem = &pVList[0];

	}

	m_pImmediateContext = NULL;

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4         eyePos;   //視点座標

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	float    farZ = 100.0f;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		size_t index_offset = 0;  // インデントのオフセット

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//インデックスバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.MiscFlags = 0;

};

}

		return hr;

	tinyobj::attrib_t attrib;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTextureView = NULL;

	{

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	irData.SysMemPitch = 0;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	{

	//定数バッファ作成

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	};

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void CD3DTest::Release()

		}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_IndexCount = icount;

	ConstantLight    pntLight; //点光源

#include <SDL.h>



		{

			// Loop over vertices in the face.

		delete[] pVList;

	}

	if (FAILED(hr))

	//テクスチャ読み込み

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		KEY_PRESS_SURFACE_LEFT,

		if (!reader.Error().empty())

		&error,

			}

	{

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	CRect                rect;

	vbDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		// Loop over faces(polygon)



		KEY_PRESS_SURFACE_UP,



	SAFE_RELEASE(m_pSampler);

{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();





	for (size_t s = 0; s < shapes.size(); s++)



	}*/



	//定数バッファ作成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



			index_offset += num_vertices;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{



		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_RIGHT,

	pBackBuffer->Release();



	scDesc.BufferDesc.Width = rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}

void CD3DTest::Release()

	enum KeyPressSurfaces



		}

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

		return hr;

		cout << "SDL_INIT_ERROR" << endl;



	}

struct ConstantLightBuffer {

	std::string imagePath = "hello.bmp";

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	/*



			for (size_t v = 0; v < num_vertices; v++)





	m_pIndexBuffer = NULL;

			exit(1);

	D3D11_SAMPLER_DESC smpDesc;

#include <SDL.h>





		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferCount = 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

CD3DTest::~CD3DTest()



		return hr;

	//Vertex* pVList = new Vertex[vcount];

	}

}

		KEY_PRESS_SURFACE_DOWN,

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	WORD* pIList = new WORD[icount];

	}



		// Loop over faces(polygon)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	auto& shapes = reader.GetShapes();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	XMFLOAT4X4 world;

	XMFLOAT4X4 projection;

using std::cout; using std::endl;

	SDL_DestroyWindow(win);

CD3DTest::CD3DTest()



				// access to vertex

	}

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	{

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pDevice);

		pIList[j] = indexList[j];



	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	tinyobj::ObjReader reader;

		return hr;



#ifdef _DEBUG

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pLightBuffer);

	//頂点バッファ作成

CD3DTest::CD3DTest()

	//vector<Vertex> vertex_t;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<WORD> indexList;

	vbDesc.StructureByteStride = 0;

			index_offset += num_vertices;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;

#include "DirectXManager.h"



	//ビューポート設定

		&materials,



	vector<WORD> indexList;



			default:

	}

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ConstantMaterial material; //物体の質感

			}

		&materials,

			case SDLK_RIGHT:

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vrData.SysMemSlicePitch = 0;

	//ピクセルシェーダー生成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D_FEATURE_LEVEL level;



	std::vector<tinyobj::material_t> materials;

	float    nearZ = 0.1f;

		if (e.type == SDL_QUIT)



	UINT flags = 0;

#include "DirectXManager.h"



		{

	SDL_Quit();

	m_pVertexShader = NULL;

		flags,

	if (FAILED(hr))



		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	ConstantMaterial material; //物体の質感

		pVList[i] = vertexlist[i];

	scDesc.OutputWindow = hwnd;

			{

	scDesc.OutputWindow = hwnd;



		KEY_PRESS_SURFACE_DEFAULT,



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

		if (!reader.Error().empty())

				break;

	}



	if (FAILED(hr))

		&shapes,



	ibDesc.StructureByteStride = 0;

	{

/*

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pMatrixBuffer = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pVertexBuffer);







		// Loop over faces(polygon)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Height = rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

int SEGMENT = 36;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

CD3DTest::~CD3DTest()

};

	WORD   icount = indexList.size();

				vertex.push_back(vertex_tmp);

	CRect                rect;



CD3DTest::CD3DTest()



	//ピクセルシェーダー生成

	std::string inputfile = "test.obj";

	if (FAILED(hr))

		return hr;

			index_offset += num_vertices;

		return hr;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			index_offset += num_vertices;

			//Select surfaces based on key press

			for (size_t v = 0; v < num_vertices; v++)

				break;

#include <iostream>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			case SDLK_RIGHT:

	m_IndexCount = icount;

	D3D11_SAMPLER_DESC smpDesc;

			int num_vertices = shape.mesh.num_face_vertices[f];



		KEY_PRESS_SURFACE_RIGHT,

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vrData.pSysMem = &pVList[0];



	m_pPixelShader = NULL;

		&error,

		exit(1);



	}*/

	m_pDepthStencilView = NULL;

	tinyobj::ObjReaderConfig reader_config;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	for (int i = 0; i < 3; i++)

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

#include <SDL.h>

	D3D11_BUFFER_DESC vbDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		//User requests quit

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pVertexShader);

	float    nearZ = 0.1f;

		}

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pImmediateContext);



			{

				vertex.push_back(vertex_tmp);

		}

	cbDesc.MiscFlags = 0;

using std::cout; using std::endl;





	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	tinyobj::ObjReaderConfig reader_config;

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

	//First we need to start up SDL, and make sure it went ok

	return;

}

			index_offset += fv;

	SDL_FreeSurface(bmp);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_Viewport.TopLeftY = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				break;

	D3D11_TEXTURE2D_DESC txDesc;

	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#define TINYOBJLOADER_IMPLEMENTATION

		&materials,

	irData.pSysMem = &pIList[0];

	//インデックスバッファ作成

		}

	vrData.SysMemSlicePitch = 0;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				vertex.push_back(vertex_tmp);

{



	for (int i = 0; i < 3; i++)

{





	scDesc.BufferDesc.Width = rect.Width();



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		KEY_PRESS_SURFACE_DOWN,

				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 projection;

	txDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_BUFFER_DESC vbDesc;

};

int main(int, char**)

			case SDLK_RIGHT:



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	::GetClientRect(hwnd, &rect);

	m_Viewport.MinDepth = 0.0f;

#endif

				indexlist.push_back(index);



				break;

	Vertex* pVList = new Vertex[vcount];

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//定数バッファ作成

	}



	for (int j = 0; j < icount; j++)

	//First we need to start up SDL, and make sure it went ok

	{

	for (int j = 0; j < icount; j++)

	scDesc.Windowed = TRUE;

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		{

	scDesc.BufferDesc.Height = rect.Height();

	float    aspect = m_Viewport.Width / m_Viewport.Height;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_SUBRESOURCE_DATA vrData;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

int SEGMENT = 36;

		return hr;

	txDesc.SampleDesc.Count = 1;



		return hr;

	{

				indexlist.push_back(index);

}

		&scDesc,

	cbDesc.MiscFlags = 0;

{

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	HRESULT              hr;

void CD3DTest::Release()

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

}
	pBackBuffer->Release();

#define TINYOBJLOADER_IMPLEMENTATION

				break;

	if (FAILED(hr))

			{

		{

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.Width = (FLOAT)rect.Width();

	ConstantLightBuffer clb;

	SDL_DestroyWindow(win);

		return hr;

		1,

{



		&scDesc,

			}

	SAFE_RELEASE(m_pDepthStencilTexture);

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyTexture(tex);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//頂点レイアウト作成

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.MiscFlags = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

	Release();

	vbDesc.StructureByteStride = 0;

	//Create Index

	txDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

			}

	}



CD3DTest::CD3DTest()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//頂点バッファ作成

};



	vector<Vertex> vertexlist;



		pVList[i] = vertexlist[i];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.SampleDesc.Count = 1;

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	bool ret = tinyobj::LoadObj(

		pVList[i] = vertexlist[i];

	auto& materials = reader.GetMaterials();

int main(int, char**)

				break;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		pLevels,

	m_IndexCount = icount;





	m_pTexture = NULL;



		SDL_RenderClear(ren);

	m_pDevice = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



	//インデックスバッファ作成

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

			// Loop over vertices in the face.

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		KEY_PRESS_SURFACE_UP,

		&materials,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.pSysMem = &pVList[0];



	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)





{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//vector<Vertex> vertex_t;

			}

				// access to vertex

				indexlist.push_back(idx.vertex_index);

	//定数バッファ作成

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



#include <iostream>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&materials,

	SAFE_RELEASE(m_pMatrixBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				vertex.push_back(vertex_tmp);





		return 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&attrib,

	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SDL_Event e;

				WORD index = idx.vertex_index;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ConstantLight    pntLight; //点光源

		SDL_Delay(1000);

};

	if (!error.empty())

	{

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	m_pDepthStencilView = NULL;

	m_IndexCount = 0;

		KEY_PRESS_SURFACE_RIGHT,





	m_VertexCount = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		delete[] pVList;

			index_offset += fv;

				// access to vertex



	scDesc.OutputWindow = hwnd;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				break;

	m_pSampler = NULL;

		return hr;



	{

{

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    nearZ = 0.1f;

		flags,

	UINT flags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.MiscFlags = 0;

	vector<Vertex> vertexlist;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& materials = reader.GetMaterials();



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_IndexCount = 0;



	bool ret = tinyobj::LoadObj(

	ID3D11Texture2D* pBackBuffer;



	m_VertexCount = vcount;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.ArraySize = 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	{

	m_Angle += XMConvertToRadians(1.0f);



	LoadObj(vertexlist, indexList);



	CRect                rect;

		}

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

	ibDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	// Loop over shapes

	SDL_DestroyRenderer(ren);



			exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			exit(1);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	/*

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_IndexCount = icount;

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.MaxDepth = 1.0f;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		SDL_Delay(1000);

	m_VertexCount = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.StructureByteStride = 0;

	return 0;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		{

{

	UINT offsets = 0;

int SEGMENT = 36;

	return 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点シェーダー生成



			//Select surfaces based on key press

	auto& shapes = reader.GetShapes();

	cbDesc.CPUAccessFlags = 0;

	delete[] pIList;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&shapes,



			case SDLK_UP:

	irData.pSysMem = &pIList[0];

			default:

	//ピクセルシェーダー生成

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include <iostream>

	for (size_t s = 0; s < shapes.size(); s++)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

};

		&level,

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}



	ID3D11Texture2D* pBackBuffer;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		else if (e.type == SDL_KEYDOWN)



	if (FAILED(hr))





	return;

	//Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC vbDesc;



	}

	SDL_DestroyRenderer(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;





{

	//Clean up our objects and quit



int main(int, char**)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT flags = 0;

	float    farZ = 100.0f;

}



	SDL_DestroyRenderer(ren);

	auto& materials = reader.GetMaterials();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.BufferDesc.Height = rect.Height();

{

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_SUBRESOURCE_DATA irData;



{

	tinyobj::ObjReaderConfig reader_config;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		D3D_DRIVER_TYPE_HARDWARE,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	::ZeroMemory(&scDesc, sizeof(scDesc));

				// access to vertex

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#include "DirectXManager.h"

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vbDesc.StructureByteStride = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Quit();

	{

	m_pDepthStencilView = NULL;

		flags,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	UINT flags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

{

#endif

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	delete[] pIList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		// Loop over faces(polygon)

int SEGMENT = 36;



	txDesc.MipLevels = 1;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		&m_pSwapChain,

	//頂点シェーダー生成

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&shapes,

	SAFE_RELEASE(m_pSwapChain);

struct ConstantLightBuffer {

		SDL_RenderPresent(ren);





	return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#endif

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&attrib,

	irData.SysMemSlicePitch = 0;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	Vertex* pVList = new Vertex[vcount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//Create Index

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//Create Index

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	std::string error;

			index_offset += num_vertices;

}

void CD3DTest::Release()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				// access to vertex

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

};

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	SDL_FreeSurface(bmp);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	WORD   icount = indexList.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

 */

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			default:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	std::string inputfile = "test.obj";

		{

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//Clean up our objects and quit

		flags,

	XMFLOAT4X4 view;

		delete[] pVList;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_SAMPLER_DESC smpDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		&scDesc,



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//Create Index

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

				// access to vertex

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#include <iostream>

	txDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	CRect                rect;

	dsDesc.Texture2D.MipSlice = 0;

}

	D3D11_BUFFER_DESC vbDesc;

		{

	std::string inputfile = "test.obj";

	m_pSwapChain->Present(0, 0);

				break;

#include <iostream>



	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Count = 1;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pSampler = NULL;

			{

}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pRenderTargetView);

		size_t index_offset = 0;  // インデントのオフセット





			case SDLK_RIGHT:

#include <SDL.h>

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pIndexBuffer = NULL;

		exit(1);

	}

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pTexture);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	irData.pSysMem = &pIList[0];

		delete[] pIList;



	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		SDL_RenderClear(ren);

int main(int, char**)

	m_Viewport.Height = (FLOAT)rect.Height();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include <SDL.h>

		SDL_Delay(1000);

	SAFE_RELEASE(m_pLightBuffer);

{

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	for (size_t s = 0; s < shapes.size(); s++)

	UINT flags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

		&materials,

				tinyobj::real_t tx =

			index_offset += fv;



	SAFE_RELEASE(m_pDevice);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		// Loop over faces(polygon)

	irData.SysMemPitch = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	Release();

		}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	scDesc.SampleDesc.Quality = 0;

	ConstantLight    pntLight; //点光源



	m_pMatrixBuffer = NULL;

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





		if (!reader.Error().empty())

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	return 0;

	m_IndexCount = icount;

	m_Viewport.MaxDepth = 1.0f;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pDepthStencilTexture = NULL;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

void CD3DTest::Release()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			{

	{

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

 */

{

void CD3DTest::Release()

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			index_offset += fv;

}

int main(int, char**)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pImmediateContext);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4         ambient;  //環境光(r,g,b)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ConstantLightBuffer clb;

	ConstantMatrixBuffer cmb;

	std::string inputfile = "test.obj";

	}

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t ty =





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_RenderClear(ren);

		return hr;

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

			}

	SDL_DestroyRenderer(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			//Select surfaces based on key press

	SDL_DestroyRenderer(ren);

	txDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



			{

				break;

	irData.SysMemSlicePitch = 0;

	//頂点バッファ作成

	SAFE_RELEASE(m_pDevice);

		SDL_RenderClear(ren);

	}

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pSwapChain);

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	tinyobj::ObjReader reader;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	DXGI_SWAP_CHAIN_DESC scDesc;

			}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ConstantLightBuffer clb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

#include <SDL.h>

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))





		D3D_DRIVER_TYPE_HARDWARE,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

		&scDesc,

		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 specular;          //反射(r,g,b)

			default:



		&materials,

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

struct ConstantMaterial {



				WORD index = idx.vertex_index;

	dsDesc.Format = txDesc.Format;

		if (!reader.Error().empty())

		&m_pDevice,

		if (!reader.Error().empty())

		&shapes,

	//インデックスバッファ作成



		{



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.SampleDesc.Quality = 0;



	enum KeyPressSurfaces

	{

	ConstantLight    pntLight; //点光源

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_IndexCount = 0;

		&materials,

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_RenderPresent(ren);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pIndexBuffer = NULL;



				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;



		{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pPixelShader);

int main(int, char**)

	SDL_DestroyRenderer(ren);





	}





	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	scDesc.SampleDesc.Count = 1;

				vertex.push_back(vertex_tmp);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))





	if (FAILED(hr))

	float    nearZ = 0.1f;

	//vector<Vertex> vertex_t;





		exit(1);

};

};

		&error,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Width = rect.Width();

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	if (FAILED(hr))

		&shapes,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return hr;

			}

	std::vector<tinyobj::shape_t> shapes;

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.MinDepth = 0.0f;

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_Quit();





		SDL_Delay(1000);

		&m_pImmediateContext);

{

	if (!error.empty())



	CRect                rect;

	SDL_DestroyWindow(win);

	txDesc.MipLevels = 1;

{

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

};

	scDesc.BufferCount = 1;

	UINT flags = 0;



				WORD index = idx.vertex_index;





			default:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				indexlist.push_back(index);

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	pBackBuffer->Release();

	SDL_Quit();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

	scDesc.SampleDesc.Quality = 0;

	bool ret = tinyobj::LoadObj(





/*

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pSwapChain = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	vector<Vertex> vertexlist;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pMatrixBuffer);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		R"(cube.obj)");

	//Clean up our objects and quit

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

}

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	scDesc.Windowed = TRUE;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



#include <iostream>

#include <iostream>

	for (int j = 0; j < icount; j++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <SDL.h>

#ifdef _DEBUG



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

	if (!reader.ParseFromFile(inputfile, reader_config))



	XMStoreFloat4(&clb.ambient, lightAmbient);

	ibDesc.StructureByteStride = 0;

				break;

{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	return;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <iostream>

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	return 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			exit(1);

	enum KeyPressSurfaces

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pInputLayout);



	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pInputLayout);

	};

	txDesc.MiscFlags = 0;

struct ConstantMatrixBuffer {

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&m_pImmediateContext);

	auto& attrib = reader.GetAttrib();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;



	}



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	auto& shapes = reader.GetShapes();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		//User presses a key

	auto& materials = reader.GetMaterials();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pIndexBuffer = NULL;

	//Key press surfaces constants

	m_pRenderTargetView = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				// access to vertex

	m_pDepthStencilView = NULL;

struct ConstantMatrixBuffer {

struct ConstantMaterial {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilView = NULL;

{



	{

		else if (e.type == SDL_KEYDOWN)

	float    farZ = 100.0f;

	CRect                rect;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

	D3D11_SUBRESOURCE_DATA irData;

}
	cbDesc.CPUAccessFlags = 0;



		cout << "SDL_INIT_ERROR" << endl;

#define TINYOBJLOADER_IMPLEMENTATION

	/*

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			for (size_t v = 0; v < fv; v++)



	enum KeyPressSurfaces

	vrData.pSysMem = &pVList[0];

			switch (e.key.keysym.sym)

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	};

	txDesc.Height = rect.Height();

	auto& materials = reader.GetMaterials();

#include "DirectXManager.h"

	}

	SAFE_RELEASE(m_pTexture);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC vbDesc;



			case SDLK_RIGHT:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}

	vrData.SysMemSlicePitch = 0;



	return 0;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}



				break;

			switch (e.key.keysym.sym)

#ifdef _DEBUG

	m_pIndexBuffer = NULL;

	txDesc.SampleDesc.Count = 1;

	//頂点シェーダー生成



#include <SDL.h>

{

	vrData.SysMemSlicePitch = 0;

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4         eyePos;   //視点座標



		&m_pImmediateContext);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::material_t> materials;

using std::cout; using std::endl;

}





	m_VertexCount = vcount;

	if (FAILED(hr))





		&m_pImmediateContext);

	}

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pPixelShader);



	{

	{

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pImmediateContext);

	ConstantMaterial material; //物体の質感

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	WORD   icount = indexList.size();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pSampler = NULL;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);







		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	WORD   icount = indexList.size();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{

		NULL,

	SAFE_RELEASE(m_pImmediateContext);

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{

	HRESULT              hr;

	txDesc.MiscFlags = 0;

	float    farZ = 100.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//Key press surfaces constants

int SEGMENT = 36;

	txDesc.MiscFlags = 0;

	}

	SAFE_RELEASE(m_pVertexShader);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//定数バッファ作成

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	enum KeyPressSurfaces



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_Angle += XMConvertToRadians(1.0f);

	}

	SDL_DestroyTexture(tex);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	XMFLOAT4X4 view;

		return hr;

int SEGMENT = 36;

	vector<Vertex> vertexlist;

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}

	if (FAILED(hr))



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pDepthStencilView);

	tinyobj::ObjReader reader;

{



	SAFE_RELEASE(m_pImmediateContext);

	m_Viewport.TopLeftX = 0;

		if (!reader.Error().empty())

		return hr;



int main(int, char**)

	}

			exit(1);



}

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		{

	delete[] pIList;

	}

				break;

CD3DTest::~CD3DTest()

/*

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::vector<tinyobj::shape_t> shapes;

	}

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = 0;

		&m_pSwapChain,

	m_VertexCount = vcount;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	std::vector<tinyobj::material_t> materials;





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	return;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vector<WORD> indexList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pMatrixBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	tinyobj::ObjReaderConfig reader_config;

			for (size_t v = 0; v < fv; v++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//ビューポート設定



 * Lesson 1: Hello World!

	m_Angle += XMConvertToRadians(1.0f);

			default:

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (!error.empty())

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



 */

};

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{



	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);

	if (m_pImmediateContext)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		return hr;

		}

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

}

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				indexlist.push_back(idx.vertex_index);

int main(int, char**)

	m_pSwapChain->Present(0, 0);

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.CPUAccessFlags = 0;

	return;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		NULL,

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	{

	vbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	ibDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;

	delete[] pIList;

	enum KeyPressSurfaces

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	ConstantLightBuffer clb;



	m_pPixelShader = NULL;

	}*/

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	bool ret = tinyobj::LoadObj(

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	bool ret = tinyobj::LoadObj(

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pTextureView);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_SAMPLER_DESC smpDesc;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	irData.pSysMem = &pIList[0];





				vertex.push_back(vertex_tmp);

	m_IndexCount = icount;

		&scDesc,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMStoreFloat4(&clb.eyePos, eye);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();

		size_t index_offset = 0;  // インデントのオフセット

	//Vertex* pVList = new Vertex[vcount];

		if (!ret)

	m_pPixelShader = NULL;

#include <SDL.h>



	vrData.SysMemPitch = 0;

		return hr;

	SDL_DestroyWindow(win);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

	//vector<WORD> index_t;

	txDesc.ArraySize = 1;



				WORD index = idx.vertex_index;

#include <SDL.h>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4X4 world;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



}

		return hr;

	m_pSwapChain = NULL;





	ConstantMaterial material; //物体の質感

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



struct ConstantMaterial {



		}



	m_pTextureView = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_VertexCount = vcount;

	XMFLOAT4X4 view;

	dsDesc.Texture2D.MipSlice = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_DEFAULT,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			for (size_t v = 0; v < fv; v++)

	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	std::string error;

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//vector<WORD> index_t;

	WORD* pIList = new WORD[icount];

	tinyobj::ObjReader reader;



	float    farZ = 100.0f;

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}

			}

	if (FAILED(hr))

	//頂点シェーダー生成

		1,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//頂点バッファ作成

	{

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))



	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	std::string inputfile = "test.obj";



	irData.pSysMem = &pIList[0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Event e;





	XMFLOAT4 ambient;           //環境(r,g,b)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SDL_FreeSurface(suf);

	HRESULT              hr;

		flags,

	}

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				indexlist.push_back(idx.vertex_index);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 attenuate;         //減衰(a,b,c)


