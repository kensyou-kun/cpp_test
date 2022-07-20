	}

	{

	SAFE_RELEASE(m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pInputLayout);

{





	//頂点レイアウト作成

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pDepthStencilView);

		SDL_RenderPresent(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;



	D3D11_SUBRESOURCE_DATA vrData;

	ConstantLight    pntLight; //点光源

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		size_t index_offset = 0;





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))



	{

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (!reader.Warning().empty())

	delete[] pIList;



}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

}



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.TopLeftY = 0;

	//Clean up our objects and quit

	SAFE_RELEASE(m_pTexture);

	txDesc.ArraySize = 1;

#include <iostream>

{

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pIndexBuffer);

#include <SDL.h>

	{



		return hr;

	SAFE_RELEASE(m_pDevice);

	{

	//ピクセルシェーダー生成

	vbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	//Clean up our objects and quit

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_DEFAULT,



	SAFE_RELEASE(m_pVertexShader);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			index_offset += fv;

	ConstantMaterial material; //物体の質感

		// Loop over faces(polygon)

	{

struct ConstantLightBuffer {

		return hr;

	SDL_DestroyRenderer(ren);

		1,

	SDL_DestroyWindow(win);

			default:

				// access to vertex

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::vector<tinyobj::material_t> materials;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;



	irData.pSysMem = &pIList[0];

		SDL_RenderCopy(ren, tex, NULL, NULL);







		return hr;

	{

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		}





	tinyobj::attrib_t attrib;

		return hr;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (!ret)

		&m_pSwapChain,

	std::string inputfile = "test.obj";

	D3D11_BUFFER_DESC ibDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//頂点バッファ作成

	//vector<Vertex> vertex_t;

				tinyobj::real_t ty =

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



#ifdef _DEBUG

		{

	{

};

	auto& shapes = reader.GetShapes();

		SDL_RenderClear(ren);



	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.Width = rect.Width();

struct ConstantMaterial {



		&error,

				break;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyWindow(win);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

	XMFLOAT4X4 view;



		if (!ret)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			}



		&attrib,

	SAFE_RELEASE(m_pInputLayout);



	//vector<WORD> index_t;

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < vcount; i++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&m_pImmediateContext);

				break;

	if (!reader.Warning().empty())

	txDesc.ArraySize = 1;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//頂点レイアウト作成

	dsDesc.Format = txDesc.Format;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	CRect                rect;

void CD3DTest::Release()

	SAFE_RELEASE(m_pVertexShader);

}



	UINT flags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	txDesc.ArraySize = 1;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_VertexCount = vcount;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





		}



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (!reader.Warning().empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		}

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_IndexCount = 0;

	scDesc.SampleDesc.Count = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	auto& materials = reader.GetMaterials();

			break;

	SAFE_RELEASE(m_pTextureView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			// Loop over vertices in the face.

 */

				tinyobj::real_t ty =

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//vector<Vertex> vertex_t;

	m_pPixelShader = NULL;



	XMFLOAT4X4 view;

				indexlist.push_back(idx.vertex_index);





	SAFE_RELEASE(m_pIndexBuffer);



			case SDLK_DOWN:

		&m_pImmediateContext);

	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	//ビューポート設定

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	// Loop over shapes

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	tinyobj::ObjReader reader;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pRenderTargetView = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				// access to vertex

	SDL_Quit();

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_IndexCount = icount;

	//頂点バッファ作成



	//ピクセルシェーダー生成

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				// access to vertex

				vertex.push_back(vertex_tmp);

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//Vertex* pVList = new Vertex[vcount];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				// access to vertex



	}

	irData.SysMemSlicePitch = 0;



	if (FAILED(hr))

		return hr;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

	SDL_DestroyRenderer(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D11_BUFFER_DESC ibDesc;



		SDL_Delay(1000);

};

			}

	SDL_Quit();

		return hr;

	txDesc.MipLevels = 1;



	m_pSampler = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			break;

				break;

	m_VertexCount = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Event e;



CD3DTest::CD3DTest()

{

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pImmediateContext);

	//Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	enum KeyPressSurfaces

	{

}

struct ConstantMaterial {

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		pVList[i] = vertexlist[i];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		delete[] pIList;

		&level,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.CPUAccessFlags = 0;



	int     vcount = vertexlist.size();

	//ビューポート設定

	m_Viewport.Width = (FLOAT)rect.Width();

		//User presses a key

		}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pLightBuffer = NULL;

}

};

	SDL_Quit();

			case SDLK_DOWN:

	//vector<Vertex> vertex_t;



	SDL_Event e;

	std::vector<tinyobj::material_t> materials;

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4X4 view;

	//深度ステンシルバッファ作成



	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.StructureByteStride = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			}



	SDL_DestroyWindow(win);

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.eyePos, eye);

	}

#endif

	std::vector<tinyobj::material_t> materials;

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;



				break;



	//テクスチャ読み込み

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				// access to vertex

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         eyePos;   //視点座標

	enum KeyPressSurfaces

		NULL,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SDL_Quit();



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_VertexCount = vcount;

	{

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);







	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	reader_config.mtl_search_path = "./"; // Path to material files

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	m_pDevice = NULL;

	{



		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

		D3D11_SDK_VERSION,

		return hr;

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//Create Index

			case SDLK_RIGHT:

		SDL_RenderClear(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		NULL,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	SDL_DestroyWindow(win);

CD3DTest::~CD3DTest()



	m_pIndexBuffer = NULL;



	m_Viewport.Height = (FLOAT)rect.Height();

	auto& shapes = reader.GetShapes();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	D3D11_BUFFER_DESC vbDesc;





	std::vector<tinyobj::material_t> materials;

				WORD index = idx.vertex_index;

};



		&m_pDevice,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (!reader.Warning().empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

			// Loop over vertices in the face.



	WORD   icount = indexList.size();

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderClear(ren);

	WORD   icount = indexList.size();

		&shapes,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	CRect                rect;

	for (int i = 0; i < 3; i++)



	m_VertexCount = vcount;

		return hr;



	}





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				break;

	XMFLOAT4         eyePos;   //視点座標

			}

	{

		D3D11_SDK_VERSION,

	{

	CRect                rect;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	while (SDL_PollEvent(&e) != 0)





		SDL_Delay(1000);

			index_offset += num_vertices;

		delete[] pIList;

 * Lesson 1: Hello World!

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDevice);

		{

	D3D11_TEXTURE2D_DESC txDesc;



		SDL_RenderClear(ren);

{



	}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点バッファ作成

	m_Viewport.TopLeftX = 0;

		SDL_RenderClear(ren);

		return hr;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		KEY_PRESS_SURFACE_UP,

	m_pTextureView = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	D3D11_SUBRESOURCE_DATA vrData;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		delete[] pVList;



	txDesc.SampleDesc.Count = 1;



		{

		return hr;



	for (size_t s = 0; s < shapes.size(); s++)

		pIList[j] = indexList[j];



		KEY_PRESS_SURFACE_UP,

	m_pTextureView = NULL;



{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.TopLeftY = 0;

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	enum KeyPressSurfaces

#include "DirectXManager.h"

			case SDLK_UP:

	HRESULT              hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.OutputWindow = hwnd;



	SDL_Quit();

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	vrData.SysMemSlicePitch = 0;

		}

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pTextureView);

	std::vector<tinyobj::shape_t> shapes;

	}

		size_t index_offset = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pRenderTargetView = NULL;



				// access to vertex

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;

	//Key press surfaces constants

		NULL,

	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

struct ConstantMatrixBuffer {

		&level,



	if (FAILED(hr))

	m_VertexCount = 0;

			}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				// access to vertex

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#include <iostream>

	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pTexture);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	cbDesc.MiscFlags = 0;

	UINT flags = 0;

	scDesc.BufferCount = 1;

		{

HRESULT CD3DTest::Create(HWND hwnd)

			for (size_t v = 0; v < fv; v++)

				indexlist.push_back(idx.vertex_index);

	float    nearZ = 0.1f;

		return hr;



	float    fov = XMConvertToRadians(20.0f);

	//頂点レイアウト作成



	ibDesc.StructureByteStride = 0;

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	SDL_Quit();



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	enum KeyPressSurfaces



		pIList[j] = indexList[j];





	cbDesc.MiscFlags = 0;

			case SDLK_UP:



	SAFE_RELEASE(m_pSampler);

		return hr;

		&scDesc,



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	}

		return hr;

int SEGMENT = 36;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点バッファ作成

		}

	txDesc.SampleDesc.Count = 1;









	txDesc.Height = rect.Height();

	D3D11_BUFFER_DESC ibDesc;

		&m_pImmediateContext);

struct ConstantLight {





		delete[] pVList;

		delete[] pVList;

		SDL_RenderPresent(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_FreeSurface(suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_IndexCount = icount;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

CD3DTest::CD3DTest()

				// access to vertex

{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//頂点シェーダー生成

	SDL_Quit();

	scDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		cout << "SDL_INIT_ERROR" << endl;

	irData.SysMemPitch = 0;

	if (FAILED(hr))



void CD3DTest::Render()



struct ConstantMaterial {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	LoadObj(vertexlist, indexList);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_Viewport.TopLeftX = 0;

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



{

	SDL_DestroyRenderer(ren);

	//テクスチャ読み込み

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		}





	scDesc.BufferCount = 1;

	SDL_Event e;

	cbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ID3D11Texture2D* pBackBuffer;

		1,

	tinyobj::ObjReaderConfig reader_config;

#include "DirectXManager.h"





		pLevels,

#include <iostream>



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		&shapes,

	if (FAILED(hr))



	{

	m_Angle += XMConvertToRadians(1.0f);

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 */

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pMatrixBuffer = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		//User presses a key

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes



		&scDesc,

	{

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&m_pImmediateContext);

		}

		return hr;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pSwapChain);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&error,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 view;

		{



	{

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

		return hr;

	return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		if (e.type == SDL_QUIT)



	{





	float    fov = XMConvertToRadians(20.0f);

		return hr;

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}





	{





	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&materials,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_TOTAL

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

int main(int, char**)

	/*

				tinyobj::real_t tx =

		// Loop over faces(polygon)

	bool ret = tinyobj::LoadObj(

		m_pImmediateContext->ClearState();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	//Key press surfaces constants



			for (size_t v = 0; v < fv; v++)

	std::string error;

	XMFLOAT4         eyePos;   //視点座標



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	WORD   icount = indexList.size();

	m_Viewport.MinDepth = 0.0f;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	return;

	//Key press surfaces constants

	//ビューポート設定

	vbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_pVertexShader = NULL;

	//ピクセルシェーダー生成

{

HRESULT CD3DTest::Create(HWND hwnd)



	};

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	dsDesc.Format = txDesc.Format;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pPixelShader);





}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	float    nearZ = 0.1f;

	vector<WORD> indexList;

		{

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC cbDesc;

		//User presses a key

	XMFLOAT4 pos;               //座標(x,y,z)

	}



		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		delete[] pIList;

	return 0;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	}*/



	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

			{



		KEY_PRESS_SURFACE_TOTAL

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			index_offset += fv;

		&m_pImmediateContext);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pLightBuffer = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

};

	UINT strides = sizeof(Vertex);

	}



	if (FAILED(hr))



	m_pVertexBuffer = NULL;

		SDL_Delay(1000);

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pInputLayout);

	//頂点シェーダー生成

	m_pDevice = NULL;

CD3DTest::~CD3DTest()



	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vrData.SysMemPitch = 0;

	m_Viewport.TopLeftY = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

			for (size_t v = 0; v < fv; v++)

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pVertexBuffer = NULL;

	if (!error.empty())

	ibDesc.StructureByteStride = 0;

	enum KeyPressSurfaces

	ConstantMaterial material; //物体の質感

	SDL_DestroyTexture(tex);

		size_t index_offset = 0;

				WORD index = idx.vertex_index;

		&error,

 * Lesson 1: Hello World!

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	m_pPixelShader = NULL;

{

		}

		KEY_PRESS_SURFACE_UP,

	::ZeroMemory(&scDesc, sizeof(scDesc));

		flags,

	cbDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <SDL.h>

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4         eyePos;   //視点座標

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&m_pDevice,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <SDL.h>



	if (FAILED(hr))

		return hr;

	m_pDepthStencilTexture = NULL;

struct ConstantLight {



	ID3D11Texture2D* pBackBuffer;



	//インデックスバッファ作成

	//インデックスバッファ作成

	return 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#define TINYOBJLOADER_IMPLEMENTATION



}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	{

	txDesc.Height = rect.Height();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DOWN,

		}



	ibDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	pBackBuffer->Release();

		SDL_RenderPresent(ren);





		}

	m_pSwapChain = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&error,



			default:



	SAFE_RELEASE(m_pDepthStencilView);

	enum KeyPressSurfaces

	}



	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

	D3D11_BUFFER_DESC ibDesc;

		return hr;

		SDL_Delay(1000);

	vector<Vertex> vertexlist;

	tinyobj::ObjReaderConfig reader_config;

	Release();



		return hr;

				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}

	auto& shapes = reader.GetShapes();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pTextureView = NULL;

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.eyePos, eye);





	m_pTexture = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

};

	{



	SDL_FreeSurface(bmp);

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		// Loop over faces(polygon)

	}

	m_IndexCount = icount;

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

		SDL_Delay(1000);

		exit(1);

			index_offset += num_vertices;

	LoadObj(vertexlist, indexList);

	SDL_DestroyWindow(win);

				vertex.push_back(vertex_tmp);

			case SDLK_UP:



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t tx =



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	return hr;

	SAFE_RELEASE(m_pDevice);

	//定数バッファ作成

	vector<WORD> indexList;

	for (int i = 0; i < 3; i++)



	auto& attrib = reader.GetAttrib();

		size_t index_offset = 0;

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < 3; i++)

		}



	}

	SAFE_RELEASE(m_pInputLayout);

	//First we need to start up SDL, and make sure it went ok

	ConstantLight    pntLight; //点光源

	//定数バッファ作成

		}



	scDesc.BufferCount = 1;

		1,

		return hr;

	m_pTextureView = NULL;

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	m_Viewport.TopLeftY = 0;

	m_pMatrixBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;

		&level,

	scDesc.SampleDesc.Quality = 0;





	scDesc.SampleDesc.Count = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pDevice = NULL;

	irData.SysMemPitch = 0;

	m_pSwapChain = NULL;

		m_pImmediateContext->ClearState();

	std::string inputfile = "test.obj";



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pIndexBuffer = NULL;

void CD3DTest::Render()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.pSysMem = &pVList[0];

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			case SDLK_DOWN:



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&materials,

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

/*

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			switch (e.key.keysym.sym)

		if (!reader.Error().empty())

	}

			case SDLK_UP:



			case SDLK_RIGHT:





	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.MiscFlags = 0;



		&level,

		return hr;



	ConstantMatrixBuffer cmb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Angle += XMConvertToRadians(1.0f);

		if (!ret)

		return hr;



	SAFE_RELEASE(m_pInputLayout);



		if (!ret)

		return hr;

	};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_IndexCount = icount;



	scDesc.SampleDesc.Count = 1;



	m_Viewport.Height = (FLOAT)rect.Height();

	dsDesc.Format = txDesc.Format;

	//vector<WORD> index_t;

	SDL_DestroyTexture(tex);

			}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		SDL_RenderClear(ren);

		else if (e.type == SDL_KEYDOWN)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexShader = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

	UINT strides = sizeof(Vertex);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

	//ピクセルシェーダー生成





	//テクスチャ読み込み

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pTextureView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pVertexBuffer = NULL;

		return hr;

	Release();

		}

	{

	{

	m_VertexCount = 0;

	m_VertexCount = 0;

	if (FAILED(hr))



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	auto& materials = reader.GetMaterials();

	Release();



	ibDesc.CPUAccessFlags = 0;



			}

		KEY_PRESS_SURFACE_DOWN,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,

	Release();

	m_pPixelShader = NULL;

}

	vbDesc.MiscFlags = 0;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pVertexShader);

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.MiscFlags = 0;

	float    farZ = 100.0f;

	{

	CRect                rect;

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

		{

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//頂点バッファ作成

			case SDLK_UP:



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_DestroyTexture(tex);



	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_DestroyWindow(win);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4X4 world;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		{

	WORD   icount = indexList.size();

	HRESULT              hr;

		return hr;

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		D3D11_SDK_VERSION,

#ifdef _DEBUG

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	}*/

};

	WORD   icount = indexList.size();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{



	for (int i = 0; i < vcount; i++)

	vector<Vertex> vertexlist;

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

int main(int, char**)



	D3D11_BUFFER_DESC cbDesc;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::real_t tx =





	reader_config.mtl_search_path = "./"; // Path to material files

		if (!ret)

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	Release();

/*

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

void CD3DTest::Render()

	D3D11_SUBRESOURCE_DATA irData;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.pSysMem = &pIList[0];

			case SDLK_RIGHT:

			default:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

	m_pTexture = NULL;

	m_pVertexShader = NULL;

	{

	txDesc.ArraySize = 1;

}

		D3D_DRIVER_TYPE_HARDWARE,

		1,

	//vector<Vertex> vertex_t;

	auto& attrib = reader.GetAttrib();





		D3D11_SDK_VERSION,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	m_pSwapChain->Present(0, 0);

		delete[] pVList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMStoreFloat4(&clb.eyePos, eye);

		pVList[i] = vertexlist[i];



		m_pImmediateContext->ClearState();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	dsDesc.Texture2D.MipSlice = 0;

			{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.MinDepth = 0.0f;

	ID3D11Texture2D* pBackBuffer;

#ifdef _DEBUG

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		//User presses a key

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#include <iostream>

	SAFE_RELEASE(m_pMatrixBuffer);

		&scDesc,

#include <iostream>

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

		&materials,

	pBackBuffer->Release();

	tinyobj::ObjReader reader;

	{

		KEY_PRESS_SURFACE_LEFT,

int main(int, char**)

		size_t index_offset = 0;  // インデントのオフセット

	return 0;

		{

	}

	irData.SysMemSlicePitch = 0;

}

		return hr;

	}

	pBackBuffer->Release();

	SAFE_RELEASE(m_pTexture);

int SEGMENT = 36;

			case SDLK_RIGHT:

		SDL_RenderClear(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pSampler = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDevice);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.BufferCount = 1;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		return 1;

struct ConstantLightBuffer {

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDepthStencilView);

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//テクスチャ読み込み

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

		return 1;

	//Create Index

	m_Viewport.Width = (FLOAT)rect.Width();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

CD3DTest::CD3DTest()

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.MiscFlags = 0;

		R"(cube.obj)");

	SAFE_RELEASE(m_pDevice);

	for (size_t s = 0; s < shapes.size(); s++)

	{



int main(int, char**)

	tinyobj::attrib_t attrib;



struct ConstantLight {



		// Loop over faces(polygon)



	SAFE_RELEASE(m_pSwapChain);

		{

	for (int i = 0; i < 3; i++)

	XMFLOAT4 specular;          //反射(r,g,b)



	return 0;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

			{

	//頂点シェーダー生成

	int     vcount = vertexlist.size();

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

			{

	m_IndexCount = 0;

	scDesc.BufferCount = 1;



			for (size_t v = 0; v < num_vertices; v++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pPixelShader = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

HRESULT CD3DTest::Create(HWND hwnd)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	auto& shapes = reader.GetShapes();

	if (!error.empty())



	scDesc.OutputWindow = hwnd;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	delete[] pIList;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pDevice);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pDevice);

	CRect                rect;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pSwapChain);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_UP:

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();



	for (int i = 0; i < vcount; i++)

	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.SampleDesc.Count = 1;



	::GetClientRect(hwnd, &rect);

		&scDesc,



			exit(1);

	D3D11_BUFFER_DESC vbDesc;



			case SDLK_DOWN:

struct ConstantMatrixBuffer {



	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	reader_config.mtl_search_path = "./"; // Path to material files

			{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

	m_pDepthStencilView = NULL;





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//Clean up our objects and quit



	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pTextureView);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		{

	//インデックスバッファ作成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

}



	//頂点バッファ作成

		return hr;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pImmediateContext);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

		NULL,

	D3D_FEATURE_LEVEL level;

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	if (FAILED(hr))

}


		exit(1);

	if (FAILED(hr))

		return 1;

int main(int, char**)



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			switch (e.key.keysym.sym)

			for (size_t v = 0; v < fv; v++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}



	ConstantLight    pntLight; //点光源

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)

	m_Viewport.Height = (FLOAT)rect.Height();

			default:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	}

				indexlist.push_back(idx.vertex_index);

	txDesc.MipLevels = 1;

	vector<WORD> indexList;

	delete[] pIList;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



#define TINYOBJLOADER_IMPLEMENTATION



	WORD   icount = indexList.size();





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC ibDesc;

	return;

	SDL_DestroyWindow(win);

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pSampler);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	D3D11_BUFFER_DESC vbDesc;



	m_VertexCount = vcount;

	SDL_Event e;

	{



	m_Angle += XMConvertToRadians(1.0f);

	m_VertexCount = vcount;

	delete[] pVList;

	vector<WORD> indexList;

	for (int i = 0; i < vcount; i++)

	{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

#include "DirectXManager.h"

	//Clean up our objects and quit

	SAFE_RELEASE(m_pImmediateContext);

	for (const auto& shape : shapes)

		KEY_PRESS_SURFACE_DOWN,

#endif

{

	/*

	::GetClientRect(hwnd, &rect);

	m_pDepthStencilTexture = NULL;





			{

	SDL_FreeSurface(bmp);

	CRect                rect;

				break;

	{

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	UINT offsets = 0;

	//ピクセルシェーダー生成

	vrData.pSysMem = &pVList[0];



		pLevels,

		return hr;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;

	Release();



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SAFE_RELEASE(m_pInputLayout);

		pLevels,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	std::vector<tinyobj::material_t> materials;

	auto& materials = reader.GetMaterials();

}



	CRect                rect;

		SDL_RenderClear(ren);

	{

	return 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

};



		}

		return hr;



{

		pLevels,

		if (!ret)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	UINT strides = sizeof(Vertex);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftX = 0;

	//Create Index

	scDesc.BufferDesc.Width = rect.Width();

/*

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	SDL_Quit();

	vector<Vertex> vertexlist;

	}

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	return hr;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	UINT flags = 0;

	txDesc.Height = rect.Height();

	m_pPixelShader = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&m_pDevice,

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pDepthStencilTexture = NULL;

	m_Viewport.TopLeftX = 0;

#include <SDL.h>



			exit(1);

	if (FAILED(hr))

	{

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderPresent(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	while (SDL_PollEvent(&e) != 0)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	if (m_pImmediateContext)

struct ConstantLight {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	/*

		SDL_RenderClear(ren);

CD3DTest::~CD3DTest()



	ConstantMatrixBuffer cmb;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		SDL_RenderPresent(ren);

	reader_config.mtl_search_path = "./"; // Path to material files

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

using std::cout; using std::endl;

	vbDesc.StructureByteStride = 0;

			case SDLK_LEFT:

	vrData.SysMemSlicePitch = 0;

}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_LEFT,



	std::string error;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_IndexCount = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));





	//First we need to start up SDL, and make sure it went ok



	txDesc.MiscFlags = 0;



	ID3D11Texture2D* pBackBuffer;

			//Select surfaces based on key press

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	}

	m_Angle += XMConvertToRadians(1.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;





			{

				tinyobj::real_t ty =

	//定数バッファ作成

	WORD* pIList = new WORD[icount];

		D3D_DRIVER_TYPE_HARDWARE,



		flags,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

		{

		KEY_PRESS_SURFACE_RIGHT,

	pBackBuffer->Release();

		}



		&materials,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_DestroyWindow(win);

	ConstantMatrixBuffer cmb;

		{



}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	vector<Vertex> vertexlist;

		flags,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



};

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	//Key press surfaces constants

		delete[] pVList;

	cbDesc.MiscFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))



	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

 * Lesson 1: Hello World!

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			}

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;



	reader_config.mtl_search_path = "./"; // Path to material files

	HRESULT              hr;

	}

	vector<WORD> indexList;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

	vector<Vertex> vertexlist;



	m_IndexCount = icount;

#include <SDL.h>

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.OutputWindow = hwnd;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	m_Viewport.TopLeftY = 0;



{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		//User requests quit

CD3DTest::~CD3DTest()

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.SampleDesc.Quality = 0;

		{

	HRESULT              hr;

{

	tinyobj::ObjReader reader;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{



	txDesc.MiscFlags = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_UP:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))



		SDL_Delay(1000);

		}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ibDesc.CPUAccessFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include <SDL.h>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pTexture = NULL;

			case SDLK_LEFT:

	if (!reader.Warning().empty())

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	auto& attrib = reader.GetAttrib();

				WORD index = idx.vertex_index;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 specular;          //反射(r,g,b)

			case SDLK_RIGHT:

		delete[] pIList;

		if (e.type == SDL_QUIT)



}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			break;

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	float    farZ = 100.0f;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			index_offset += fv;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pImmediateContext);

	tinyobj::attrib_t attrib;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Event e;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	std::string imagePath = "hello.bmp";



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_Delay(1000);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		delete[] pVList;

	cbDesc.CPUAccessFlags = 0;

	scDesc.OutputWindow = hwnd;

		&shapes,

	}

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferCount = 1;



		1,







		KEY_PRESS_SURFACE_DEFAULT,







	if (!reader.Warning().empty())

	m_pDepthStencilView = NULL;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			for (size_t v = 0; v < num_vertices; v++)



#include <iostream>

{

	tinyobj::ObjReader reader;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pIList[j] = indexList[j];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

CD3DTest::~CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float    nearZ = 0.1f;

	cbDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	auto& materials = reader.GetMaterials();

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))



		size_t index_offset = 0;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}
				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}



	ConstantMaterial material; //物体の質感

		delete[] pIList;

	XMFLOAT4         eyePos;   //視点座標

{

	m_pDepthStencilTexture = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	if (!reader.Warning().empty())

	ibDesc.StructureByteStride = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

				break;

	//vector<WORD> index_t;

		//User requests quit





	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDepthStencilView);

	m_pPixelShader = NULL;

	}

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;



	m_pSwapChain->Present(0, 0);

			index_offset += fv;

	{





	dsDesc.Format = txDesc.Format;

		size_t index_offset = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

		pIList[j] = indexList[j];

}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

int main(int, char**)

	vbDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	tinyobj::ObjReader reader;

		flags,

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

			case SDLK_DOWN:

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pTexture);

	txDesc.Width = rect.Width();

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



{

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		size_t index_offset = 0;  // インデントのオフセット

			}

#include <iostream>

		SDL_Delay(1000);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

		pVList[i] = vertexlist[i];

	txDesc.Width = rect.Width();

		pIList[j] = indexList[j];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA vrData;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		return hr;

			default:

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4X4 world;

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pDepthStencilView);

		}

	for (int i = 0; i < vcount; i++)

#include <SDL.h>



	//Key press surfaces constants

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			index_offset += num_vertices;

	SDL_FreeSurface(suf);

		m_pImmediateContext->ClearState();

		return hr;

		&scDesc,

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pDevice = NULL;



		return hr;





	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点レイアウト作成

	//vector<WORD> index_t;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	Vertex* pVList = new Vertex[vcount];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	HRESULT              hr;

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				WORD index = idx.vertex_index;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.CPUAccessFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

		if (!reader.Error().empty())

	vector<WORD> indexList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		NULL,

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	Vertex* pVList = new Vertex[vcount];



#include <SDL.h>

	{

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	};

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_DestroyTexture(tex);

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



				indexlist.push_back(idx.vertex_index);

	m_pIndexBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	for (size_t s = 0; s < shapes.size(); s++)





struct ConstantLightBuffer {

using std::cout; using std::endl;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

		return hr;



	bool ret = tinyobj::LoadObj(





	::ZeroMemory(&scDesc, sizeof(scDesc));

	//Clean up our objects and quit

	enum KeyPressSurfaces

		return hr;



	//ピクセルシェーダー生成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.Texture2D.MipSlice = 0;

		KEY_PRESS_SURFACE_UP,



	}





	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	//頂点バッファ作成

		1,



	//vector<Vertex> vertex_t;



	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantMaterial {

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pPixelShader = NULL;

{

			break;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	HRESULT              hr;

	WORD   icount = indexList.size();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

	std::string inputfile = "test.obj";

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



struct ConstantMatrixBuffer {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

#endif



	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4X4 view;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//Key press surfaces constants

CD3DTest::CD3DTest()

			index_offset += fv;

	};





		// Loop over faces(polygon)



	//頂点バッファ作成

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include "DirectXManager.h"

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty =

	m_VertexCount = 0;



	SDL_FreeSurface(bmp);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pTexture);

	vector<WORD> indexList;

	XMFLOAT4X4 projection;

void CD3DTest::Render()

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

};





	D3D11_BUFFER_DESC cbDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

int SEGMENT = 36;







	}

	SDL_DestroyTexture(tex);

void CD3DTest::Render()

{



	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

			}

int SEGMENT = 36;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_TEXTURE2D_DESC txDesc;

	SAFE_RELEASE(m_pMatrixBuffer);

{

	Vertex* pVList = new Vertex[vcount];



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return;



	XMFLOAT4         eyePos;   //視点座標



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_RIGHT:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ConstantMaterial material; //物体の質感

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			{

				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	std::vector<tinyobj::shape_t> shapes;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

#define TINYOBJLOADER_IMPLEMENTATION

#include <SDL.h>

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//Create Index

	if (FAILED(hr))

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	tinyobj::attrib_t attrib;

			}



		if (!reader.Error().empty())

			break;

	tinyobj::attrib_t attrib;

	return 0;

		size_t index_offset = 0;  // インデントのオフセット

		&materials,

#ifdef _DEBUG

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	ID3D11Texture2D* pBackBuffer;

		NULL,

				WORD index = idx.vertex_index;



	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

struct ConstantLight {

		}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	ibDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

struct ConstantMaterial {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.SysMemSlicePitch = 0;

	m_pInputLayout = NULL;

	vbDesc.CPUAccessFlags = 0;

		&level,

		}

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 projection;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	SDL_DestroyTexture(tex);

				// access to vertex

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Clean up our objects and quit



			default:



	D3D11_BUFFER_DESC vbDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		//User presses a key

	SAFE_RELEASE(m_pVertexBuffer);

			for (size_t v = 0; v < fv; v++)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

		D3D_DRIVER_TYPE_HARDWARE,

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



			case SDLK_RIGHT:

	std::vector<tinyobj::material_t> materials;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		if (e.type == SDL_QUIT)





		return hr;

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



}



	m_pPixelShader = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			default:

	m_Viewport.MinDepth = 0.0f;

/*

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_BUFFER_DESC cbDesc;

	Release();



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Event e;



	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;



	m_pTextureView = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& materials = reader.GetMaterials();

		1,

			switch (e.key.keysym.sym)

		//User requests quit

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	XMFLOAT4         eyePos;   //視点座標

{

	}

		}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			case SDLK_LEFT:

}

	irData.pSysMem = &pIList[0];

				tinyobj::real_t tx =





		return hr;

		flags,

		&m_pDevice,

		return 1;

	ConstantMatrixBuffer cmb;





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_FreeSurface(suf);







	irData.SysMemPitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.SampleDesc.Count = 1;

	m_IndexCount = 0;

	if (!reader.Warning().empty())

	{

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&level,

}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



			index_offset += fv;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			exit(1);

	}

		&scDesc,

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				indexlist.push_back(idx.vertex_index);



	XMFLOAT4 specular;          //反射(r,g,b)



	ConstantLight    pntLight; //点光源

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

		{

	std::vector<tinyobj::shape_t> shapes;

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D_DRIVER_TYPE_HARDWARE,



		SDL_RenderCopy(ren, tex, NULL, NULL);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)

};

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			for (size_t v = 0; v < fv; v++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



CD3DTest::~CD3DTest()

				tinyobj::real_t tx =

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_SUBRESOURCE_DATA vrData;





		KEY_PRESS_SURFACE_TOTAL

	vrData.SysMemSlicePitch = 0;

		SDL_Delay(1000);

				tinyobj::real_t ty =

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SDL_DestroyWindow(win);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}





}

		return hr;

{

	SDL_DestroyTexture(tex);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_FreeSurface(bmp);

	m_pIndexBuffer = NULL;

		&m_pDevice,









#ifdef _DEBUG

	for (int i = 0; i < vcount; i++)

struct ConstantLight {

	//First we need to start up SDL, and make sure it went ok

	m_pIndexBuffer = NULL;

	enum KeyPressSurfaces

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&shapes,

{

	SDL_FreeSurface(bmp);

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_TOTAL

	reader_config.mtl_search_path = "./"; // Path to material files

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_Delay(1000);

	txDesc.ArraySize = 1;

	//頂点シェーダー生成



	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_TOTAL





struct ConstantLightBuffer {

#include <SDL.h>



	if (!reader.Warning().empty())



}


	{

{

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ID3D11Texture2D* pBackBuffer;

			for (size_t v = 0; v < num_vertices; v++)



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

};

	m_Viewport.Height = (FLOAT)rect.Height();

	}

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		}

	std::string inputfile = "test.obj";

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	pBackBuffer->Release();

	scDesc.SampleDesc.Quality = 0;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#endif

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





HRESULT CD3DTest::Create(HWND hwnd)

	m_pRenderTargetView = NULL;

	auto& materials = reader.GetMaterials();





		}



	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pInputLayout);



	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//Clean up our objects and quit

int main(int, char**)

	if (!error.empty())



}



	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_TEXTURE2D_DESC txDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				vertex.push_back(vertex_tmp);

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



 * Lesson 1: Hello World!

{

	irData.SysMemPitch = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pSwapChain = NULL;

	ibDesc.StructureByteStride = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		m_pImmediateContext->ClearState();

	tinyobj::attrib_t attrib;

			}

		m_pImmediateContext->ClearState();

		return hr;



			case SDLK_RIGHT:





	SAFE_RELEASE(m_pImmediateContext);





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//vector<WORD> index_t;



		D3D11_SDK_VERSION,

			case SDLK_UP:



		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}

	m_pInputLayout = NULL;

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				break;

{

	//深度ステンシルバッファ作成

#include <SDL.h>

	}*/

	}

using std::cout; using std::endl;

	scDesc.SampleDesc.Count = 1;

	Release();

			//Select surfaces based on key press

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pMatrixBuffer = NULL;

	m_pSwapChain = NULL;



		{

	Vertex* pVList = new Vertex[vcount];



		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pDepthStencilView);

	auto& shapes = reader.GetShapes();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			}

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantMaterial {

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_Delay(1000);

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	txDesc.MipLevels = 1;



	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (e.type == SDL_QUIT)



		KEY_PRESS_SURFACE_UP,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pDevice = NULL;

	std::vector<tinyobj::material_t> materials;

	pBackBuffer->Release();

		return hr;

			exit(1);

		KEY_PRESS_SURFACE_RIGHT,

		if (e.type == SDL_QUIT)

	}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_FreeSurface(suf);



			case SDLK_RIGHT:

	//頂点レイアウト作成

				break;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};



	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	DXGI_SWAP_CHAIN_DESC scDesc;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SAFE_RELEASE(m_pVertexShader);



	SAFE_RELEASE(m_pDepthStencilView);

	m_IndexCount = icount;

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			}

		if (!reader.Error().empty())

		return hr;

	{

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

		&m_pImmediateContext);





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.MipLevels = 1;





	SAFE_RELEASE(m_pMatrixBuffer);



			}

	Release();

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

};

		return hr;

	vbDesc.StructureByteStride = 0;



		delete[] pIList;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&scDesc,

	SAFE_RELEASE(m_pDevice);

	{



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	SAFE_RELEASE(m_pTexture);

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

	cbDesc.MiscFlags = 0;

		pLevels,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//ビューポート設定



	float    farZ = 100.0f;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;

	return;

		}

	ZeroMemory(&txDesc, sizeof(txDesc));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	auto& materials = reader.GetMaterials();

	scDesc.BufferCount = 1;



	vbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	m_pTexture = NULL;

	SDL_Quit();





		return hr;

}



	m_Angle += XMConvertToRadians(1.0f);

	m_pInputLayout = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	float    farZ = 100.0f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}

		{

#ifdef _DEBUG

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		&m_pSwapChain,

{

	ConstantLightBuffer clb;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				indexlist.push_back(idx.vertex_index);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pTexture);

	m_IndexCount = icount;

	ConstantLight    pntLight; //点光源

	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		delete[] pIList;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		1,

	std::vector<tinyobj::shape_t> shapes;

	m_pSampler = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		pIList[j] = indexList[j];



	SAFE_RELEASE(m_pLightBuffer);

#include <SDL.h>

	//Vertex* pVList = new Vertex[vcount];

		{

/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	//頂点バッファ作成

	ibDesc.MiscFlags = 0;

}



	scDesc.BufferCount = 1;

		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	{



		R"(cube.obj)");



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Viewport.MinDepth = 0.0f;

	irData.pSysMem = &pIList[0];

};

};

}



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);



	}

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.ArraySize = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

struct ConstantLight {

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	}

		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.Width = (FLOAT)rect.Width();

struct ConstantLight {

			{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		delete[] pIList;



	{



		}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();

	m_pTextureView = NULL;

	m_pVertexShader = NULL;

				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pVertexShader);

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 pos;               //座標(x,y,z)

	/*

	scDesc.Windowed = TRUE;

	m_VertexCount = 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{







	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	tinyobj::attrib_t attrib;

#include <SDL.h>

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	};

	//ビューポート設定



	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

	float    fov = XMConvertToRadians(20.0f);

				WORD index = idx.vertex_index;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pImmediateContext);

	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_UP,



	WORD* pIList = new WORD[icount];

	SDL_Quit();

	D3D11_BUFFER_DESC cbDesc;

}
	XMStoreFloat4(&clb.eyePos, eye);

				// access to vertex

		if (e.type == SDL_QUIT)

	//頂点レイアウト作成



	XMFLOAT4         ambient;  //環境光(r,g,b)

	ibDesc.MiscFlags = 0;

	{

int SEGMENT = 36;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	WORD   icount = indexList.size();

	vrData.SysMemSlicePitch = 0;

	while (SDL_PollEvent(&e) != 0)



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	CRect                rect;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

		&shapes,

				// access to vertex

	dsDesc.Format = txDesc.Format;

	DXGI_SWAP_CHAIN_DESC scDesc;

		delete[] pIList;

		}

	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	m_pSwapChain = NULL;



	//深度ステンシルバッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				vertex.push_back(vertex_tmp);

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	std::string imagePath = "hello.bmp";



	// Loop over shapes



	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMStoreFloat4(&clb.ambient, lightAmbient);

	irData.pSysMem = &pIList[0];

	m_pSwapChain->Present(0, 0);

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t ty =



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_BUFFER_DESC cbDesc;

	m_Viewport.TopLeftX = 0;



	if (!reader.Warning().empty())

	}

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pSampler = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	WORD* pIList = new WORD[icount];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	m_pTexture = NULL;

	//vector<Vertex> vertex_t;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		flags,



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

struct ConstantMatrixBuffer {

	m_Viewport.Width = (FLOAT)rect.Width();



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&level,



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	UINT offsets = 0;

	ConstantMaterial material; //物体の質感

struct ConstantLight {

	//Key press surfaces constants

	txDesc.ArraySize = 1;



			}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}

	for (int i = 0; i < 3; i++)

	}

				break;



	{

	//Clean up our objects and quit

	UINT flags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.material.specular, materialSpecular);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return 1;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.Width = rect.Width();



	XMStoreFloat4(&clb.material.specular, materialSpecular);

			index_offset += fv;

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		KEY_PRESS_SURFACE_LEFT,





	}

				break;

	XMStoreFloat4(&clb.eyePos, eye);

}

	txDesc.SampleDesc.Count = 1;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{



{

		KEY_PRESS_SURFACE_TOTAL

	m_pLightBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pRenderTargetView = NULL;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderClear(ren);

				WORD index = idx.vertex_index;

	int     vcount = vertexlist.size();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}

		return hr;

{

	D3D11_BUFFER_DESC cbDesc;

	m_pSwapChain = NULL;

	{



	//インデックスバッファ作成

	}*/

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

			// Loop over vertices in the face.

				break;

	{

	m_Viewport.MaxDepth = 1.0f;

	enum KeyPressSurfaces

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_DOWN:

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	for (int i = 0; i < 3; i++)

	::ZeroMemory(&scDesc, sizeof(scDesc));



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.SysMemPitch = 0;

		return hr;

	txDesc.Height = rect.Height();



	if (FAILED(hr))

 * Lesson 1: Hello World!

	XMFLOAT4 ambient;           //環境(r,g,b)



	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//頂点レイアウト作成

/*

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//vector<WORD> index_t;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pSwapChain->Present(0, 0);

	delete[] pVList;

CD3DTest::~CD3DTest()

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pImmediateContext);

	m_Viewport.Height = (FLOAT)rect.Height();

		}

	std::vector<tinyobj::material_t> materials;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



			switch (e.key.keysym.sym)

	if (FAILED(hr))



CD3DTest::CD3DTest()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	{

		pLevels,

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		pLevels,

		{



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return hr;

	//インデックスバッファ作成

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	pBackBuffer->Release();



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

using std::cout; using std::endl;

		KEY_PRESS_SURFACE_DOWN,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				break;

				WORD index = idx.vertex_index;

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4 pos;               //座標(x,y,z)





	//頂点バッファ作成

		if (!ret)

		pIList[j] = indexList[j];

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))



};





	SAFE_RELEASE(m_pIndexBuffer);



#include <SDL.h>

	SDL_Event e;

			switch (e.key.keysym.sym)

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_FreeSurface(suf);

			}

	{

	int     vcount = vertexlist.size();

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		{

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pPixelShader = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



#include <SDL.h>

	::GetClientRect(hwnd, &rect);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		else if (e.type == SDL_KEYDOWN)

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



#include "DirectXManager.h"

				break;

	{

		&m_pImmediateContext);

	//インデックスバッファ作成

	//インデックスバッファ作成



		return hr;

	SDL_DestroyWindow(win);

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pRenderTargetView = NULL;

}

	float    farZ = 100.0f;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vrData.SysMemPitch = 0;

		{

		return hr;

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return 1;

	SDL_DestroyTexture(tex);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	//ピクセルシェーダー生成

			break;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



}

	//ピクセルシェーダー生成



	XMFLOAT4         ambient;  //環境光(r,g,b)



struct ConstantLightBuffer {

	if (!error.empty())

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.CPUAccessFlags = 0;

	{

	//インデックスバッファ作成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pTexture = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);







	XMFLOAT4         eyePos;   //視点座標



	//頂点バッファ作成

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemSlicePitch = 0;

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	std::string imagePath = "hello.bmp";

#include <SDL.h>

	WORD* pIList = new WORD[icount];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	//Key press surfaces constants



	m_pMatrixBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

struct ConstantLightBuffer {

	//vector<WORD> index_t;

	m_Viewport.MaxDepth = 1.0f;

			index_offset += fv;

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyRenderer(ren);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

		delete[] pVList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

		D3D11_SDK_VERSION,





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;



	m_Viewport.Height = (FLOAT)rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		//User presses a key

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.TopLeftY = 0;

	{

	ConstantLight    pntLight; //点光源

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	irData.SysMemSlicePitch = 0;



	ConstantMaterial material; //物体の質感

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t tx =

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t tx =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pRenderTargetView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4 specular;          //反射(r,g,b)

	delete[] pIList;

	SDL_DestroyWindow(win);

}

	return 0;

{

			{

	/*

	D3D11_SUBRESOURCE_DATA irData;

	{

{

	{



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		R"(cube.obj)");

	SAFE_RELEASE(m_pVertexBuffer);

int main(int, char**)

				break;

	}

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		pVList[i] = vertexlist[i];

			}

	m_pIndexBuffer = NULL;

	UINT flags = 0;

				break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_FreeSurface(suf);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.eyePos, eye);

		m_pImmediateContext->ClearState();

	m_pDevice = NULL;

	scDesc.BufferDesc.Height = rect.Height();





		cout << "SDL_INIT_ERROR" << endl;

	}





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		else if (e.type == SDL_KEYDOWN)

		// Loop over faces(polygon)



	//ビューポート設定

	DXGI_SWAP_CHAIN_DESC scDesc;

	UINT flags = 0;

 */

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)



	SAFE_RELEASE(m_pInputLayout);

#ifdef _DEBUG



		KEY_PRESS_SURFACE_DOWN,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.StructureByteStride = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



		SDL_Delay(1000);

	SDL_Event e;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



	m_pSwapChain = NULL;

	for (int j = 0; j < icount; j++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

		// Loop over faces(polygon)

{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::vector<tinyobj::shape_t> shapes;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



{

}

	m_pVertexBuffer = NULL;





		SDL_RenderClear(ren);

	//テクスチャ読み込み

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}
	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pDevice);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

struct ConstantLight {



	XMFLOAT4 pos;               //座標(x,y,z)

#include <iostream>

	txDesc.SampleDesc.Count = 1;

		return hr;

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			default:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	txDesc.Width = rect.Width();



		{



	}

	//vector<Vertex> vertex_t;

		}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

		}

	txDesc.Height = rect.Height();

	}

			{

	{

	{

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

		{

	SDL_DestroyTexture(tex);

		delete[] pVList;

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	scDesc.BufferDesc.Width = rect.Width();

	{



	m_pTexture = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantLight {

}

		if (e.type == SDL_QUIT)

	cbDesc.MiscFlags = 0;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		SDL_RenderClear(ren);

	{

	m_pDepthStencilView = NULL;

				// access to vertex

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	//Create Index

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//ピクセルシェーダー生成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.CPUAccessFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//テクスチャ読み込み

				tinyobj::real_t ty =

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pIndexBuffer);

#ifdef _DEBUG

	//ビューポート設定

			{

	for (int i = 0; i < 3; i++)

	m_pRenderTargetView = NULL;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 pos;               //座標(x,y,z)

	// Loop over shapes

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			for (size_t v = 0; v < num_vertices; v++)



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



CD3DTest::~CD3DTest()

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//Clean up our objects and quit

	{

{

		NULL,

	std::vector<tinyobj::material_t> materials;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	//ピクセルシェーダー生成

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4X4 view;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		pVList[i] = vertexlist[i];



	ConstantMatrixBuffer cmb;

		return hr;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

		&attrib,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

			}

	SDL_FreeSurface(bmp);

	{



	}

	SAFE_RELEASE(m_pTextureView);

struct ConstantMatrixBuffer {

			//Select surfaces based on key press

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SAFE_RELEASE(m_pSwapChain);

	{

	vbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,



	m_pSwapChain = NULL;

#ifdef _DEBUG

	SAFE_RELEASE(m_pDepthStencilTexture);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ID3D11Texture2D* pBackBuffer;

	tinyobj::attrib_t attrib;

	m_Viewport.Height = (FLOAT)rect.Height();

	WORD* pIList = new WORD[icount];

				break;

{

		}

	for (int i = 0; i < vcount; i++)

#ifdef _DEBUG

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.pSysMem = &pIList[0];



	{

			case SDLK_LEFT:

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{



		}

	irData.pSysMem = &pIList[0];

		}

{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



#include <iostream>

	m_Viewport.Width = (FLOAT)rect.Width();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	irData.SysMemSlicePitch = 0;

	ConstantMaterial material; //物体の質感





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		KEY_PRESS_SURFACE_DEFAULT,



	cbDesc.CPUAccessFlags = 0;

			}

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	WORD   icount = indexList.size();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	int     vcount = vertexlist.size();

		KEY_PRESS_SURFACE_DOWN,



	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	std::string error;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ConstantLightBuffer clb;

 * Lesson 1: Hello World!

using std::cout; using std::endl;

		size_t index_offset = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);

				break;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyWindow(win);

CD3DTest::CD3DTest()

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			case SDLK_LEFT:

	vrData.SysMemPitch = 0;

	UINT strides = sizeof(Vertex);

				tinyobj::real_t ty =

				WORD index = idx.vertex_index;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		m_pImmediateContext->ClearState();

	vector<WORD> indexList;

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

			{



			{

	m_pDevice = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				indexlist.push_back(idx.vertex_index);

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&level,

	XMFLOAT4 specular;          //反射(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files



		KEY_PRESS_SURFACE_RIGHT,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			break;

	std::vector<tinyobj::shape_t> shapes;

		SDL_Delay(1000);

	XMFLOAT4         eyePos;   //視点座標

	}

		return hr;

	vbDesc.MiscFlags = 0;



#include <iostream>

	m_Angle += XMConvertToRadians(1.0f);





	dsDesc.Texture2D.MipSlice = 0;

		&materials,

	ibDesc.MiscFlags = 0;

		R"(cube.obj)");

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_UP,



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t tx =

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	vector<Vertex> vertexlist;

{

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

/*

{

	std::string error;





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pRenderTargetView = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

struct ConstantMatrixBuffer {

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&error,

	SAFE_RELEASE(m_pImmediateContext);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	Release();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D_FEATURE_LEVEL level;



#include <SDL.h>

	//Clean up our objects and quit

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	ConstantLight    pntLight; //点光源



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

int SEGMENT = 36;

	//ビューポート設定

{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	enum KeyPressSurfaces

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	m_pVertexBuffer = NULL;

	WORD   icount = indexList.size();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	//Vertex* pVList = new Vertex[vcount];



int main(int, char**)

	//頂点レイアウト作成

 * Lesson 1: Hello World!

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





{



	reader_config.mtl_search_path = "./"; // Path to material files

	std::vector<tinyobj::shape_t> shapes;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			//Select surfaces based on key press

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t tx =



		return hr;

{

		KEY_PRESS_SURFACE_DEFAULT,

int SEGMENT = 36;

void CD3DTest::Release()



	ZeroMemory(&dsDesc, sizeof(dsDesc));





#include <iostream>

		if (!reader.Error().empty())

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	DXGI_SWAP_CHAIN_DESC scDesc;

#define TINYOBJLOADER_IMPLEMENTATION

	//Key press surfaces constants

	}





	scDesc.OutputWindow = hwnd;

	DXGI_SWAP_CHAIN_DESC scDesc;

	std::string inputfile = "test.obj";

	std::string inputfile = "test.obj";



		if (!ret)

		{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.ArraySize = 1;



	SAFE_RELEASE(m_pDevice);

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



	SDL_Quit();

	}

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 view;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	}

	if (!reader.Warning().empty())



	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

			}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	SDL_DestroyRenderer(ren);





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int j = 0; j < icount; j++)



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	}

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

/*

	if (FAILED(hr))

	}

#define TINYOBJLOADER_IMPLEMENTATION

	LoadObj(vertexlist, indexList);

	pBackBuffer->Release();

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







	m_pTexture = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}





	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pTexture);

		&shapes,

	m_pSwapChain = NULL;



	irData.pSysMem = &pIList[0];

HRESULT CD3DTest::Create(HWND hwnd)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderPresent(ren);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

#include <SDL.h>

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



	hr = D3D11CreateDeviceAndSwapChain(NULL,

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





struct ConstantLight {

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			default:



		}

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.Width = rect.Width();

{

	SAFE_RELEASE(m_pVertexShader);



				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				break;

	UINT offsets = 0;

	XMFLOAT4X4 world;

	//頂点レイアウト作成



			case SDLK_UP:

	SAFE_RELEASE(m_pMatrixBuffer);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Quit();

	ConstantMatrixBuffer cmb;



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pDepthStencilView);

	for (int i = 0; i < vcount; i++)

	vbDesc.MiscFlags = 0;



}

	cbDesc.CPUAccessFlags = 0;

	//定数バッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_LEFT:

	if (FAILED(hr))

		NULL,



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			case SDLK_DOWN:

	}

	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_RIGHT,

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	XMFLOAT4X4 view;

	// Loop over shapes

		SDL_Delay(1000);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pInputLayout = NULL;



	scDesc.OutputWindow = hwnd;

void CD3DTest::Render()

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	//Clean up our objects and quit



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>



	scDesc.BufferDesc.Width = rect.Width();

		if (!ret)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyRenderer(ren);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	m_pSwapChain = NULL;



	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexShader = NULL;

		if (e.type == SDL_QUIT)

		SDL_Delay(1000);

	SAFE_RELEASE(m_pLightBuffer);

	int     vcount = vertexlist.size();

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	D3D11_SUBRESOURCE_DATA vrData;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		if (!ret)

			break;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMaterial material; //物体の質感

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	for (size_t s = 0; s < shapes.size(); s++)





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SDL_DestroyWindow(win);

	m_pTexture = NULL;



	reader_config.mtl_search_path = "./"; // Path to material files

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



}

	SAFE_RELEASE(m_pTexture);



}

		NULL,

	float    fov = XMConvertToRadians(20.0f);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

struct ConstantMaterial {

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

	int     vcount = vertexlist.size();

		{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	for (int i = 0; i < vcount; i++)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		// Loop over faces(polygon)

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//vector<Vertex> vertex_t;

	}





	}

		return hr;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	scDesc.BufferDesc.Width = rect.Width();



	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_DestroyTexture(tex);

	SDL_Event e;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pVertexShader);

{





	scDesc.BufferCount = 1;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

}
}
	tinyobj::attrib_t attrib;

	ZeroMemory(&txDesc, sizeof(txDesc));



	D3D11_TEXTURE2D_DESC txDesc;

			index_offset += num_vertices;

		exit(1);



	m_pTexture = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

};

			case SDLK_DOWN:

	UINT strides = sizeof(Vertex);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		SDL_Delay(1000);

	std::string inputfile = "test.obj";

	for (int i = 0; i < vcount; i++)



	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Key press surfaces constants

	{

			{

	if (FAILED(hr))

			case SDLK_RIGHT:

	ConstantMatrixBuffer cmb;

	HRESULT              hr;



		return hr;

	}

#include <iostream>

	m_pTextureView = NULL;

	D3D_FEATURE_LEVEL level;

	m_Viewport.Height = (FLOAT)rect.Height();

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include "DirectXManager.h"

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pVertexBuffer = NULL;

};

	m_pTexture = NULL;

	}



		exit(1);



	SAFE_RELEASE(m_pDepthStencilView);

	};

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pVertexShader);

		&shapes,

	D3D11_BUFFER_DESC vbDesc;

	//vector<Vertex> vertex_t;

	LoadObj(vertexlist, indexList);

	txDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		size_t index_offset = 0;  // インデントのオフセット

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pRenderTargetView = NULL;

		KEY_PRESS_SURFACE_UP,

	UINT offsets = 0;

		R"(cube.obj)");

		D3D11_SDK_VERSION,

		m_pImmediateContext->ClearState();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

	XMFLOAT4X4 world;

	}

	ConstantLightBuffer clb;

	ID3D11Texture2D* pBackBuffer;

	D3D11_BUFFER_DESC vbDesc;

	{

		SDL_Delay(1000);



	if (FAILED(hr))

				indexlist.push_back(index);

	txDesc.ArraySize = 1;

		else if (e.type == SDL_KEYDOWN)

				break;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//ピクセルシェーダー生成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))



	for (size_t s = 0; s < shapes.size(); s++)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

 * Lesson 1: Hello World!

	D3D11_SUBRESOURCE_DATA irData;

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&shapes,

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	//ピクセルシェーダー生成



	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantMatrixBuffer {

		return hr;

	CRect                rect;

		{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}*/

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))



	scDesc.SampleDesc.Count = 1;

				break;

	m_pVertexBuffer = NULL;



	m_VertexCount = vcount;

	reader_config.mtl_search_path = "./"; // Path to material files



{

 */



	//Vertex* pVList = new Vertex[vcount];

	//ビューポート設定

	}

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#include <iostream>

	}

	CRect                rect;

	m_Viewport.TopLeftX = 0;

	scDesc.BufferCount = 1;

	D3D11_TEXTURE2D_DESC txDesc;

	}

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	DXGI_SWAP_CHAIN_DESC scDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vector<WORD> indexList;

}

				WORD index = idx.vertex_index;

	SDL_DestroyTexture(tex);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <SDL.h>

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			break;



	vbDesc.StructureByteStride = 0;

		//User requests quit

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

};

}

	enum KeyPressSurfaces

	D3D11_SAMPLER_DESC smpDesc;

	return 0;



	txDesc.Width = rect.Width();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

		}



	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vector<WORD> indexList;

	m_Viewport.MinDepth = 0.0f;

void CD3DTest::Release()

	Release();







	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMaterial material; //物体の質感

		//User requests quit

	txDesc.SampleDesc.Count = 1;

	txDesc.SampleDesc.Quality = 0;

		&m_pSwapChain,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pSampler = NULL;

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];





	{

		return hr;

	{

struct ConstantLightBuffer {

		exit(1);



#ifdef _DEBUG

		return hr;



	irData.pSysMem = &pIList[0];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		&shapes,



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&scDesc,

	WORD* pIList = new WORD[icount];



};

	}



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			// Loop over vertices in the face.

				indexlist.push_back(index);

	{

int SEGMENT = 36;

				tinyobj::real_t tx =

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.OutputWindow = hwnd;

				break;

	txDesc.Width = rect.Width();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

	m_pLightBuffer = NULL;

{



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return 0;





		//User requests quit

	SAFE_RELEASE(m_pDevice);

{

	txDesc.MipLevels = 1;

	{

{

	SAFE_RELEASE(m_pImmediateContext);

}
				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		//User presses a key

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



			switch (e.key.keysym.sym)

{

			switch (e.key.keysym.sym)

	{



			int num_vertices = shape.mesh.num_face_vertices[f];

	vbDesc.CPUAccessFlags = 0;

CD3DTest::~CD3DTest()

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.ArraySize = 1;

	m_Viewport.Width = (FLOAT)rect.Width();

}

	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



		KEY_PRESS_SURFACE_UP,

		}

	}

		else if (e.type == SDL_KEYDOWN)

		&materials,

		KEY_PRESS_SURFACE_RIGHT,

	Vertex* pVList = new Vertex[vcount];

	}

		return hr;

			exit(1);

};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (!reader.Warning().empty())

	SDL_DestroyRenderer(ren);

	m_pPixelShader = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	CRect                rect;

	//頂点シェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pVertexShader);



int main(int, char**)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_DestroyTexture(tex);

	scDesc.SampleDesc.Quality = 0;



	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pLightBuffer);

	irData.pSysMem = &pIList[0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pSampler);

		D3D_DRIVER_TYPE_HARDWARE,

CD3DTest::CD3DTest()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))



	//インデックスバッファ作成

};

	dsDesc.Format = txDesc.Format;

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderClear(ren);



	tinyobj::attrib_t attrib;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4         eyePos;   //視点座標

}
	m_pSwapChain = NULL;

	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_DEFAULT,





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pSwapChain);



	scDesc.BufferDesc.Width = rect.Width();

			break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	delete[] pIList;


