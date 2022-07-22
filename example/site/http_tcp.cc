		SDL_RenderClear(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#ifdef _DEBUG

	irData.pSysMem = &pIList[0];



	delete[] pVList;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	for (int i = 0; i < vcount; i++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vector<Vertex> vertexlist;

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Render()



	m_pSampler = NULL;

}

	m_VertexCount = 0;

	LoadObj(vertexlist, indexList);

	}

	ID3D11Texture2D* pBackBuffer;

	{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	WORD   icount = indexList.size();

	XMFLOAT4 attenuate;         //減衰(a,b,c)









			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pTextureView);

	for (size_t s = 0; s < shapes.size(); s++)



			case SDLK_UP:

	cbDesc.StructureByteStride = 0;





	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	}





			case SDLK_DOWN:

		D3D11_SDK_VERSION,

				break;

	return;

	if (m_pImmediateContext)

struct ConstantLight {

			{

		1,

	txDesc.SampleDesc.Quality = 0;

	m_pRenderTargetView = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	//Create Index

	XMFLOAT4 attenuate;         //減衰(a,b,c)





#include "DirectXManager.h"

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		{

		&m_pImmediateContext);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantLight {

	m_pIndexBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

	m_IndexCount = 0;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_RIGHT:

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				break;

	//vector<WORD> index_t;



	if (FAILED(hr))

}

{

	CRect                rect;

	vector<WORD> indexList;

	ConstantMaterial material; //物体の質感

	std::vector<tinyobj::material_t> materials;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);

	};





	{

				tinyobj::real_t tx =

	{

	m_VertexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		D3D11_SDK_VERSION,

struct ConstantMatrixBuffer {

		&attrib,

		delete[] pVList;

	txDesc.MiscFlags = 0;

{

			}

	pBackBuffer->Release();

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		NULL,



	SDL_FreeSurface(bmp);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	irData.SysMemSlicePitch = 0;

				// access to vertex

#include <iostream>

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//深度ステンシルバッファ作成



		R"(cube.obj)");

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&attrib,



	//ピクセルシェーダー生成

	//テクスチャ読み込み

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

	if (!error.empty())

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pSwapChain);



	std::string error;

	m_pSampler = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

	//テクスチャ読み込み

	return hr;

		if (e.type == SDL_QUIT)

	m_Viewport.MaxDepth = 1.0f;

	//深度ステンシルバッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.Height = rect.Height();

	return hr;

	enum KeyPressSurfaces

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_DestroyRenderer(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	std::vector<tinyobj::shape_t> shapes;

	ConstantMaterial material; //物体の質感



	}*/



		//User presses a key

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_DEFAULT,

}
#include <iostream>

				break;

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		{

	SAFE_RELEASE(m_pImmediateContext);



	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	auto& materials = reader.GetMaterials();

	return 0;

	if (FAILED(hr))

			//Select surfaces based on key press

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	std::string inputfile = "test.obj";

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <SDL.h>

	XMFLOAT4         eyePos;   //視点座標

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		if (!reader.Error().empty())





		else if (e.type == SDL_KEYDOWN)

	delete[] pVList;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

}

				break;



	irData.SysMemSlicePitch = 0;



		if (!ret)

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.MiscFlags = 0;

			//Select surfaces based on key press

	D3D_FEATURE_LEVEL level;

{







				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	dsDesc.Format = txDesc.Format;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		NULL,

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

		return hr;

	return;

#include <iostream>

	{







	ZeroMemory(&txDesc, sizeof(txDesc));

int SEGMENT = 36;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

/*



	if (FAILED(hr))

	SDL_FreeSurface(suf);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

		&m_pDevice,

	//ピクセルシェーダー生成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_UP:

	m_Angle += XMConvertToRadians(1.0f);

	auto& attrib = reader.GetAttrib();

	D3D11_SUBRESOURCE_DATA vrData;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.MipLevels = 1;

	WORD   icount = indexList.size();

				indexlist.push_back(idx.vertex_index);

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Quit();



	irData.SysMemPitch = 0;

	txDesc.ArraySize = 1;

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点バッファ作成

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyTexture(tex);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.BufferCount = 1;

	D3D11_BUFFER_DESC vbDesc;



	SAFE_RELEASE(m_pImmediateContext);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//vector<Vertex> vertex_t;





	ibDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_IndexCount = 0;



			// Loop over vertices in the face.





	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.CPUAccessFlags = 0;

		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

	}

	if (FAILED(hr))



	Vertex* pVList = new Vertex[vcount];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b)

{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantMaterial {



		SDL_RenderPresent(ren);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

			exit(1);

	vector<Vertex> vertexlist;



void CD3DTest::Release()

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

		}



	m_pTexture = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	bool ret = tinyobj::LoadObj(

	irData.SysMemPitch = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <SDL.h>

	ConstantLightBuffer clb;



	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))



		m_pImmediateContext->ClearState();

#include <iostream>



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.ArraySize = 1;

	Release();

	//インデックスバッファ作成

		SDL_RenderPresent(ren);

	UINT offsets = 0;





	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

	return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	dsDesc.Texture2D.MipSlice = 0;



	SAFE_RELEASE(m_pPixelShader);

	std::vector<tinyobj::material_t> materials;



		exit(1);

	scDesc.BufferDesc.Width = rect.Width();









	HRESULT              hr;

	vbDesc.StructureByteStride = 0;





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



CD3DTest::CD3DTest()

		SDL_Delay(1000);

			case SDLK_RIGHT:

		&shapes,

	if (FAILED(hr))

		// Loop over faces(polygon)

{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	D3D11_SUBRESOURCE_DATA irData;



	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



 */

	SDL_Quit();



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//頂点シェーダー生成

#ifdef _DEBUG

	m_pDevice = NULL;



{

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pIndexBuffer);

			exit(1);

	float    farZ = 100.0f;

	txDesc.Width = rect.Width();

				break;

	m_pIndexBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				break;

	scDesc.SampleDesc.Count = 1;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pVertexShader = NULL;

		KEY_PRESS_SURFACE_DOWN,

	delete[] pVList;

	m_Viewport.MinDepth = 0.0f;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);







			// Loop over vertices in the face.

			case SDLK_RIGHT:

}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		delete[] pIList;

	}

				break;



		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pVertexShader = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	m_VertexCount = 0;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pVertexBuffer);

void CD3DTest::Release()

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_Delay(1000);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_VertexCount = 0;

	if (FAILED(hr))



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			}

	};

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	//Clean up our objects and quit



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	// Loop over shapes

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				WORD index = idx.vertex_index;

};

	}

	txDesc.MipLevels = 1;

	m_pVertexBuffer = NULL;



	{



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.SampleDesc.Count = 1;

{



				tinyobj::real_t ty =

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.SysMemSlicePitch = 0;

#endif



{

#ifdef _DEBUG



		}

				break;

				tinyobj::real_t ty =



				break;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		{



	SDL_Quit();

	SAFE_RELEASE(m_pSwapChain);

	vbDesc.MiscFlags = 0;

using std::cout; using std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み



	for (int i = 0; i < vcount; i++)

			case SDLK_UP:

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{



				WORD index = idx.vertex_index;

	vector<Vertex> vertexlist;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pTextureView);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	{

	//vector<Vertex> vertex_t;

	//Key press surfaces constants

	SDL_DestroyWindow(win);

	{

	::GetClientRect(hwnd, &rect);

	XMFLOAT4 pos;               //座標(x,y,z)

				WORD index = idx.vertex_index;

	{

};



	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_DOWN,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	return hr;

	//定数バッファ作成

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	//深度ステンシルバッファ作成

	vbDesc.CPUAccessFlags = 0;





	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#endif

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDepthStencilView = NULL;

		return hr;

	vector<Vertex> vertexlist;

	m_pSwapChain->Present(0, 0);

	if (m_pImmediateContext)



	for (int j = 0; j < icount; j++)

		else if (e.type == SDL_KEYDOWN)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferDesc.Width = rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pTextureView = NULL;

	ConstantMaterial material; //物体の質感

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))



	}

	tinyobj::ObjReaderConfig reader_config;

	}

		return hr;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

		cout << "SDL_INIT_ERROR" << endl;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



}

	SDL_Event e;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pInputLayout = NULL;



	m_pRenderTargetView = NULL;

	ConstantMatrixBuffer cmb;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		size_t index_offset = 0;  // インデントのオフセット

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				break;



	return hr;

	SAFE_RELEASE(m_pSampler);



		&error,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	pBackBuffer->Release();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{

	m_Viewport.TopLeftY = 0;

	SDL_DestroyWindow(win);

	LoadObj(vertexlist, indexList);

#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			{



			index_offset += fv;

	std::string inputfile = "test.obj";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

	}

void CD3DTest::Release()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	irData.pSysMem = &pIList[0];

		return hr;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	{

	vector<Vertex> vertexlist;

	vector<Vertex> vertexlist;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_BUFFER_DESC ibDesc;

	D3D11_BUFFER_DESC cbDesc;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	}

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		R"(cube.obj)");

		return hr;

{

	m_VertexCount = vcount;



	enum KeyPressSurfaces



	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

		// Loop over faces(polygon)



};

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

using std::cout; using std::endl;

	m_pRenderTargetView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pSampler = NULL;

			}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#include <iostream>

	int     vcount = vertexlist.size();

{

	//vector<WORD> index_t;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			{

	float    nearZ = 0.1f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	ConstantLightBuffer clb;

		return hr;

	// Loop over shapes

		{





	UINT flags = 0;

				tinyobj::real_t ty =

		pVList[i] = vertexlist[i];

	for (int i = 0; i < vcount; i++)

		R"(cube.obj)");

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

	SDL_Event e;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

#include <SDL.h>

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>

		return 1;

		KEY_PRESS_SURFACE_TOTAL

			}

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

		m_pImmediateContext->ClearState();

	//vector<Vertex> vertex_t;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	reader_config.mtl_search_path = "./"; // Path to material files



		{

	tinyobj::ObjReaderConfig reader_config;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pSwapChain);



	Vertex* pVList = new Vertex[vcount];

	D3D11_SAMPLER_DESC smpDesc;

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

}

	SDL_Quit();

			break;

	//Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4(&clb.eyePos, eye);

	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			case SDLK_LEFT:



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//ピクセルシェーダー生成

			}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	Release();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

			case SDLK_UP:

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

				vertex.push_back(vertex_tmp);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



using std::cout; using std::endl;

	}

	if (FAILED(hr))

			default:

	//First we need to start up SDL, and make sure it went ok

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

	cbDesc.MiscFlags = 0;

#include <SDL.h>



		return hr;

		delete[] pIList;

	}

		}

	if (FAILED(hr))

/*

	if (FAILED(hr))



		exit(1);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.Width = (FLOAT)rect.Width();



	SAFE_RELEASE(m_pDepthStencilView);







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		//User requests quit

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	// Loop over shapes

	WORD   icount = indexList.size();



void CD3DTest::Render()

	txDesc.MiscFlags = 0;

			}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	irData.SysMemSlicePitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

		return hr;





	if (!reader.Warning().empty())

	txDesc.Width = rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pSampler = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		KEY_PRESS_SURFACE_DOWN,

	SDL_FreeSurface(suf);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	return 0;

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pDepthStencilView);

		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_BUFFER_DESC ibDesc;



	SDL_DestroyRenderer(ren);

	{



	SDL_DestroyWindow(win);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//First we need to start up SDL, and make sure it went ok

	vbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		size_t index_offset = 0;

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

		pVList[i] = vertexlist[i];

	{

				vertex.push_back(vertex_tmp);

		}

	//vector<Vertex> vertex_t;

		if (!ret)

	SDL_DestroyRenderer(ren);

	vbDesc.StructureByteStride = 0;

		pIList[j] = indexList[j];

	//Clean up our objects and quit



		return hr;

			// Loop over vertices in the face.



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.Width = rect.Width();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		&level,

	m_pInputLayout = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	auto& attrib = reader.GetAttrib();



	if (FAILED(hr))

	delete[] pVList;

		{

	vrData.SysMemPitch = 0;

}
	SAFE_RELEASE(m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	SDL_FreeSurface(bmp);



		KEY_PRESS_SURFACE_RIGHT,

	tinyobj::ObjReader reader;

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pDevice = NULL;



	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	if (FAILED(hr))

		}

	delete[] pVList;

int main(int, char**)

		{

	//Clean up our objects and quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_BUFFER_DESC ibDesc;

struct ConstantLight {

		return hr;



	delete[] pVList;

}

	for (size_t s = 0; s < shapes.size(); s++)



	if (FAILED(hr))

void CD3DTest::Release()

	}





	txDesc.SampleDesc.Quality = 0;

#ifdef _DEBUG

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

int main(int, char**)



	cbDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);



	m_pPixelShader = NULL;

	for (int i = 0; i < vcount; i++)

	/*



	SDL_FreeSurface(bmp);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pDepthStencilView);

	{

			case SDLK_LEFT:



		pLevels,

	SAFE_RELEASE(m_pIndexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferDesc.Height = rect.Height();

	for (int j = 0; j < icount; j++)

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

	txDesc.MipLevels = 1;

	m_pVertexShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	//vector<Vertex> vertex_t;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	}

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		flags,

	delete[] pVList;

		{

		}

HRESULT CD3DTest::Create(HWND hwnd)

};

	}

	txDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pInputLayout);

	SDL_Event e;

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	for (int j = 0; j < icount; j++)

	D3D11_SUBRESOURCE_DATA vrData;

	}

		return 1;

			case SDLK_DOWN:





		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void CD3DTest::Release()

		}

}

				vertex.push_back(vertex_tmp);

		cout << "SDL_INIT_ERROR" << endl;



	dsDesc.Texture2D.MipSlice = 0;

	//インデックスバッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);

	bool ret = tinyobj::LoadObj(

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	txDesc.MipLevels = 1;

	tinyobj::ObjReader reader;



 */

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.eyePos, eye);

	int     vcount = vertexlist.size();

		SDL_RenderClear(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	// Loop over shapes

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSwapChain);



	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantMaterial {



	cbDesc.CPUAccessFlags = 0;



				vertex.push_back(vertex_tmp);

	m_IndexCount = 0;



	{

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pInputLayout = NULL;





	ConstantMatrixBuffer cmb;

	ibDesc.MiscFlags = 0;



		&error,

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pMatrixBuffer);

{

	Release();

	SAFE_RELEASE(m_pTexture);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyWindow(win);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.ambient, lightAmbient);

};



	//インデックスバッファ作成

	ConstantLightBuffer clb;

	for (size_t s = 0; s < shapes.size(); s++)

{

	while (SDL_PollEvent(&e) != 0)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDevice);

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			case SDLK_UP:

		delete[] pVList;

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pLightBuffer = NULL;

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);

	tinyobj::ObjReaderConfig reader_config;

		pVList[i] = vertexlist[i];

			default:



	if (FAILED(hr))

	ConstantLightBuffer clb;



		exit(1);

			exit(1);



	txDesc.Height = rect.Height();

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

}

	if (FAILED(hr))

	XMFLOAT4X4 world;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	SDL_Quit();

	if (FAILED(hr))



	SDL_DestroyWindow(win);

	D3D11_SUBRESOURCE_DATA vrData;

	for (int i = 0; i < 3; i++)

	}

	vector<Vertex> vertexlist;

	if (FAILED(hr))



	}

struct ConstantLight {

	//vector<WORD> index_t;

		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		//User requests quit

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::material_t> materials;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			{

	m_IndexCount = 0;



	if (FAILED(hr))

{

	SDL_Event e;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			case SDLK_RIGHT:

	WORD   icount = indexList.size();

	XMFLOAT4X4 projection;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			//Select surfaces based on key press

CD3DTest::~CD3DTest()

	m_Viewport.TopLeftX = 0;



			for (size_t v = 0; v < num_vertices; v++)

	//Create Index

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_LEFT:

			exit(1);

			{

	if (FAILED(hr))

		return hr;



			switch (e.key.keysym.sym)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	std::string imagePath = "hello.bmp";

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ConstantLightBuffer clb;

}

	if (FAILED(hr))

		pIList[j] = indexList[j];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

 * Lesson 1: Hello World!



	std::string imagePath = "hello.bmp";

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

{

#include "DirectXManager.h"

	m_VertexCount = vcount;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		pLevels,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

	SAFE_RELEASE(m_pMatrixBuffer);





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	ConstantLightBuffer clb;

	CRect                rect;

{

	tinyobj::ObjReader reader;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return 1;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_LEFT:

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_BUFFER_DESC vbDesc;

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.MipLevels = 1;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	cbDesc.MiscFlags = 0;

		return 1;

#include <SDL.h>



}

		m_pImmediateContext->ClearState();

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	{

	XMFLOAT4X4 projection;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.SampleDesc.Quality = 0;

		exit(1);

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	enum KeyPressSurfaces

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantLight {



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(bmp);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pDepthStencilTexture = NULL;



	}

		pLevels,

		&level,

};

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pInputLayout = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	return 0;

	txDesc.SampleDesc.Count = 1;

	SDL_DestroyWindow(win);

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		flags,



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	UINT flags = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

	tinyobj::ObjReaderConfig reader_config;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		&attrib,

			{

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			}

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		delete[] pVList;





	}

		D3D_DRIVER_TYPE_HARDWARE,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pDevice = NULL;

	}

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (e.type == SDL_QUIT)

		// Loop over faces(polygon)

	{



	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



			}

	irData.SysMemPitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		return hr;

	SAFE_RELEASE(m_pSwapChain);



		m_pImmediateContext->ClearState();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.SampleDesc.Quality = 0;





	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));

		NULL,

		SDL_RenderPresent(ren);

	UINT strides = sizeof(Vertex);

		//User presses a key

	if (FAILED(hr))

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_IndexCount = icount;

		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SDL_Event e;

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	//ピクセルシェーダー生成



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pVList;

		D3D11_SDK_VERSION,

	{

	delete[] pVList;

	SAFE_RELEASE(m_pVertexShader);



	cbDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);





		size_t index_offset = 0;  // インデントのオフセット

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

	{



		return hr;

	if (FAILED(hr))



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}*/

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ConstantMatrixBuffer cmb;



struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		}

	cbDesc.StructureByteStride = 0;

			}

		return hr;

	{

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

	SDL_Quit();

	cbDesc.MiscFlags = 0;

		return hr;

	m_Viewport.MinDepth = 0.0f;

				vertex.push_back(vertex_tmp);

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pIndexBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&m_pSwapChain,



	//深度ステンシルバッファ作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	// Loop over shapes

		D3D11_SDK_VERSION,



	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4X4 view;

		return 1;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pTexture);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

{

	//頂点バッファ作成

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{



		if (e.type == SDL_QUIT)

	//vector<Vertex> vertex_t;





int SEGMENT = 36;

CD3DTest::~CD3DTest()

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pDevice);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

		}

CD3DTest::CD3DTest()

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

int main(int, char**)

			switch (e.key.keysym.sym)



#include "DirectXManager.h"

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

};

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	irData.SysMemSlicePitch = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	return 0;



	SDL_DestroyTexture(tex);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		delete[] pIList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	::GetClientRect(hwnd, &rect);

	dsDesc.Format = txDesc.Format;

	UINT flags = 0;



	if (FAILED(hr))



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		//User requests quit



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	Release();

		delete[] pVList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vector<WORD> indexList;

	XMFLOAT4         ambient;  //環境光(r,g,b)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

		return hr;



	D3D11_SUBRESOURCE_DATA irData;

	std::string error;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.Height = rect.Height();

	if (!error.empty())



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

int SEGMENT = 36;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;



	m_Viewport.MaxDepth = 1.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pSampler = NULL;

};

	float    nearZ = 0.1f;

			index_offset += num_vertices;

		delete[] pVList;

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_DestroyTexture(tex);

	WORD   icount = indexList.size();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTextureView);

			{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

	{

void CD3DTest::Release()

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.MipLevels = 1;

#include <iostream>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.pSysMem = &pIList[0];

	CRect                rect;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;







		size_t index_offset = 0;  // インデントのオフセット

	SDL_Quit();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_LEFT,

		return hr;

			case SDLK_UP:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&attrib,

			case SDLK_DOWN:

	bool ret = tinyobj::LoadObj(

	XMFLOAT4X4 view;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);





				vertex.push_back(vertex_tmp);

CD3DTest::CD3DTest()

#include "DirectXManager.h"

	delete[] pIList;

	m_IndexCount = 0;

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

{


