	if (FAILED(hr))

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_VertexCount = vcount;

};

	m_Angle += XMConvertToRadians(1.0f);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	XMStoreFloat4(&clb.ambient, lightAmbient);

				indexlist.push_back(index);

	//テクスチャ読み込み

	ConstantMatrixBuffer cmb;

	// Loop over shapes



	if (FAILED(hr))



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}
	//インデックスバッファ作成

	SAFE_RELEASE(m_pDevice);

	vbDesc.StructureByteStride = 0;

		return hr;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	SAFE_RELEASE(m_pDevice);

	SDL_DestroyWindow(win);

 */

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//ビューポート設定

	SAFE_RELEASE(m_pVertexShader);

	UINT flags = 0;

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	if (FAILED(hr))





	D3D11_SUBRESOURCE_DATA irData;

	}

			break;

	D3D11_BUFFER_DESC cbDesc;

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))



			{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//ピクセルシェーダー生成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.MiscFlags = 0;

	m_pLightBuffer = NULL;

	delete[] pIList;

	m_pVertexShader = NULL;

	dsDesc.Format = txDesc.Format;

	//Vertex* pVList = new Vertex[vcount];

				break;

	txDesc.Height = rect.Height();



	m_Viewport.Height = (FLOAT)rect.Height();

	m_Angle += XMConvertToRadians(1.0f);

		pLevels,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::GetClientRect(hwnd, &rect);

	// Loop over shapes

	m_pDepthStencilView = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

/*

	m_pSwapChain->Present(0, 0);



	auto& shapes = reader.GetShapes();

	for (const auto& shape : shapes)

			}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SDL_DestroyTexture(tex);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;



	Release();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

 */



	float    nearZ = 0.1f;

	m_IndexCount = 0;

	dsDesc.Format = txDesc.Format;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	{

	m_pDepthStencilTexture = NULL;

	D3D_FEATURE_LEVEL level;

	irData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftY = 0;

	m_pMatrixBuffer = NULL;







	txDesc.CPUAccessFlags = 0;

	delete[] pIList;

		KEY_PRESS_SURFACE_DOWN,

		return hr;



{

		return hr;

}





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyRenderer(ren);

	}







	//テクスチャ読み込み

		if (!reader.Error().empty())

		}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;



	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyTexture(tex);



#include <iostream>

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderClear(ren);

			{

				indexlist.push_back(idx.vertex_index);





	XMFLOAT4X4 view;

};



	D3D11_SUBRESOURCE_DATA irData;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pSwapChain,

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.SysMemSlicePitch = 0;

	delete[] pVList;

	{

#ifdef _DEBUG

			case SDLK_RIGHT:





	return hr;





	m_Viewport.Height = (FLOAT)rect.Height();

	}

	return 0;



	txDesc.Width = rect.Width();

		SDL_Delay(1000);

	txDesc.SampleDesc.Count = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)



	SAFE_RELEASE(m_pTextureView);

		SDL_RenderClear(ren);

	/*

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_LEFT:





		delete[] pIList;

			default:

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	Release();





	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

};

				// access to vertex



		R"(cube.obj)");

			}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	}

	scDesc.Windowed = TRUE;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferCount = 1;

			for (size_t v = 0; v < num_vertices; v++)

			break;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_VertexCount = vcount;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pVertexBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	int     vcount = vertexlist.size();

		&error,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	DXGI_SWAP_CHAIN_DESC scDesc;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_Viewport.Width = (FLOAT)rect.Width();

	{

		R"(cube.obj)");

void CD3DTest::Release()

	Release();

	SAFE_RELEASE(m_pInputLayout);

			}

				WORD index = idx.vertex_index;

	return 0;



}

		{

		&attrib,

	for (int i = 0; i < vcount; i++)

		&m_pSwapChain,

		SDL_RenderClear(ren);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	//Vertex* pVList = new Vertex[vcount];



	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			index_offset += num_vertices;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Quit();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include "DirectXManager.h"

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//インデックスバッファ作成

	tinyobj::ObjReaderConfig reader_config;

	HRESULT              hr;



		&error,

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

}

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pSwapChain);

		{

	if (FAILED(hr))



	m_Viewport.TopLeftX = 0;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_DOWN:

	XMFLOAT4         ambient;  //環境光(r,g,b)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(index);

	bool ret = tinyobj::LoadObj(

				vertex.push_back(vertex_tmp);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

				break;

	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

		// Loop over faces(polygon)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Event e;

	scDesc.Windowed = TRUE;

	HRESULT              hr;

	SDL_Quit();

	{

	tinyobj::ObjReader reader;



	vrData.SysMemPitch = 0;

	SDL_FreeSurface(suf);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			}

	m_pMatrixBuffer = NULL;

	float    fov = XMConvertToRadians(20.0f);

				break;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		pVList[i] = vertexlist[i];

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

{

	if (FAILED(hr))

			case SDLK_RIGHT:



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t ty =

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

/*

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t ty =

	D3D11_SAMPLER_DESC smpDesc;



{

	m_pSwapChain->Present(0, 0);



		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		R"(cube.obj)");

	D3D11_BUFFER_DESC cbDesc;

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};



			switch (e.key.keysym.sym)

	m_pInputLayout = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	tinyobj::ObjReader reader;



		}

		&attrib,

				break;

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)





		KEY_PRESS_SURFACE_UP,

	m_pSwapChain->Present(0, 0);

	{

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		1,

		size_t index_offset = 0;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{



				break;

	return;

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};

	SDL_DestroyTexture(tex);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);



	vbDesc.CPUAccessFlags = 0;

		&level,



	ConstantLightBuffer clb;

	vrData.SysMemSlicePitch = 0;

}





	m_Viewport.MaxDepth = 1.0f;

	SDL_Event e;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		}

}

		exit(1);

/*

		if (!ret)

		}

	vrData.pSysMem = &pVList[0];

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	{

	//vector<Vertex> vertex_t;

void CD3DTest::Release()

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderPresent(ren);

	if (FAILED(hr))



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	float    nearZ = 0.1f;

	cbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

			for (size_t v = 0; v < fv; v++)

	std::vector<tinyobj::shape_t> shapes;

int SEGMENT = 36;

		1,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

	std::string error;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pRenderTargetView = NULL;



		{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (FAILED(hr))

CD3DTest::CD3DTest()

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

	//テクスチャ読み込み

	//Create Index



	Release();

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	SAFE_RELEASE(m_pIndexBuffer);

			default:

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



{

	std::string imagePath = "hello.bmp";

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_IndexCount = 0;

		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	CRect                rect;

				break;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyWindow(win);

	ConstantMaterial material; //物体の質感

				// access to vertex

		{

		&m_pDevice,







{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::string imagePath = "hello.bmp";



	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

			{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    farZ = 100.0f;



	dsDesc.Format = txDesc.Format;

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

	m_pDepthStencilView = NULL;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_RIGHT:





int main(int, char**)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (!reader.Error().empty())



	{

	auto& attrib = reader.GetAttrib();

	return 0;

	D3D11_BUFFER_DESC ibDesc;

	scDesc.SampleDesc.Quality = 0;

	txDesc.ArraySize = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int i = 0; i < vcount; i++)





	}

		&m_pImmediateContext);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	}



	SDL_DestroyTexture(tex);

	SDL_Quit();

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			switch (e.key.keysym.sym)

				break;

	SDL_FreeSurface(bmp);

	m_pPixelShader = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pDepthStencilView = NULL;

		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))



	if (!error.empty())

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#endif

};

	m_pRenderTargetView = NULL;

	tinyobj::ObjReader reader;



	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!reader.Warning().empty())

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pMatrixBuffer = NULL;

	scDesc.BufferDesc.Width = rect.Width();

	//Key press surfaces constants

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//定数バッファ作成

	txDesc.CPUAccessFlags = 0;

				break;

}


	m_Viewport.Width = (FLOAT)rect.Width();

	std::vector<tinyobj::material_t> materials;

}

		1,







	D3D_FEATURE_LEVEL level;

		&shapes,

	{

				// access to vertex



		return hr;

	}

			case SDLK_DOWN:

	WORD* pIList = new WORD[icount];

	{

		cout << "SDL_INIT_ERROR" << endl;



		KEY_PRESS_SURFACE_DOWN,

#endif

	//Key press surfaces constants

	{

		SDL_Delay(1000);

		{

#include <SDL.h>

		{

}



	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		pVList[i] = vertexlist[i];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD* pIList = new WORD[icount];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	enum KeyPressSurfaces

	Release();



		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	txDesc.MiscFlags = 0;



	m_pMatrixBuffer = NULL;

		return hr;

	SAFE_RELEASE(m_pInputLayout);

	SDL_DestroyRenderer(ren);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pSampler);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	SDL_DestroyRenderer(ren);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			case SDLK_LEFT:



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	vrData.pSysMem = &pVList[0];



	vrData.SysMemSlicePitch = 0;

		pLevels,





	SAFE_RELEASE(m_pDepthStencilTexture);



	pBackBuffer->Release();



		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		SDL_RenderPresent(ren);



		SDL_RenderClear(ren);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		pVList[i] = vertexlist[i];

	D3D11_BUFFER_DESC ibDesc;

			{

	ibDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

		//User requests quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.TopLeftY = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				indexlist.push_back(index);



			{



};



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return 1;

	m_IndexCount = icount;



	m_pInputLayout = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pTextureView);

	m_pPixelShader = NULL;

	if (m_pImmediateContext)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			}

	std::string error;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	LoadObj(vertexlist, indexList);

{

void CD3DTest::Render()

{

	vector<WORD> indexList;



	{

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pInputLayout);

	for (int i = 0; i < 3; i++)

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





		KEY_PRESS_SURFACE_DOWN,

};

	WORD* pIList = new WORD[icount];



	pBackBuffer->Release();

	//頂点レイアウト作成



		&m_pImmediateContext);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//インデックスバッファ作成

	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

	}

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				indexlist.push_back(index);

	vector<WORD> indexList;



	//vector<Vertex> vertex_t;

			{



	Release();

				tinyobj::real_t tx =

		SDL_RenderPresent(ren);

};



	vrData.SysMemPitch = 0;

	while (SDL_PollEvent(&e) != 0)



#include "DirectXManager.h"

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	UINT flags = 0;

	if (FAILED(hr))

	}

	SAFE_RELEASE(m_pDepthStencilView);

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	ConstantLightBuffer clb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{

	ConstantLightBuffer clb;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	irData.pSysMem = &pIList[0];

		return hr;



	m_Viewport.TopLeftX = 0;

		return hr;

		// Loop over faces(polygon)



		D3D11_SDK_VERSION,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;



struct ConstantLight {

	auto& materials = reader.GetMaterials();

	while (SDL_PollEvent(&e) != 0)



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		1,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pMatrixBuffer);





	vrData.pSysMem = &pVList[0];



	m_Angle += XMConvertToRadians(1.0f);



struct ConstantLight {

		exit(1);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ConstantLightBuffer clb;

	dsDesc.Format = txDesc.Format;

	SDL_FreeSurface(bmp);

		SDL_RenderClear(ren);

	m_VertexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pTexture = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

		{

	m_pDevice = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



int main(int, char**)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	SAFE_RELEASE(m_pImmediateContext);





	return 0;

	//頂点シェーダー生成

	m_pMatrixBuffer = NULL;

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::vector<tinyobj::material_t> materials;

int SEGMENT = 36;

	ID3D11Texture2D* pBackBuffer;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#include <iostream>

#include <SDL.h>

	if (FAILED(hr))



	SAFE_RELEASE(m_pSwapChain);



		return hr;



	{

	if (FAILED(hr))

/*



}

}
#include <iostream>



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(index);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	//ピクセルシェーダー生成

	dsDesc.Format = txDesc.Format;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#define TINYOBJLOADER_IMPLEMENTATION

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	txDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;

	XMFLOAT4X4 projection;

	UINT offsets = 0;

		&attrib,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

using std::cout; using std::endl;

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);







				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.ArraySize = 1;

		&m_pImmediateContext);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_BUFFER_DESC ibDesc;

	SDL_Quit();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			case SDLK_DOWN:

			{

	SDL_Quit();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		}

	SDL_Event e;

	txDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

		return hr;

		&materials,



	cbDesc.StructureByteStride = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				vertex.push_back(vertex_tmp);

	}*/



	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ConstantMaterial material; //物体の質感

	vrData.SysMemPitch = 0;

	m_pTextureView = NULL;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	pBackBuffer->Release();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}
	}

		else if (e.type == SDL_KEYDOWN)

};

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}
 * Lesson 1: Hello World!



	m_Viewport.MinDepth = 0.0f;

			break;

			default:



		SDL_Delay(1000);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&level,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	Release();

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Width = rect.Width();

};

	UINT offsets = 0;

CD3DTest::~CD3DTest()

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT offsets = 0;

struct ConstantMatrixBuffer {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

};

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pSampler);

	cbDesc.MiscFlags = 0;

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.MiscFlags = 0;

	{

	/*

				WORD index = idx.vertex_index;

		return hr;

	vbDesc.StructureByteStride = 0;

				WORD index = idx.vertex_index;

		{



		&attrib,

	}





		&m_pSwapChain,

	cbDesc.MiscFlags = 0;

			//Select surfaces based on key press



			for (size_t v = 0; v < num_vertices; v++)

	m_IndexCount = icount;

	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_SUBRESOURCE_DATA irData;

	for (int i = 0; i < vcount; i++)

	m_IndexCount = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	bool ret = tinyobj::LoadObj(



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	//Create Index



			{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	WORD* pIList = new WORD[icount];

	ZeroMemory(&txDesc, sizeof(txDesc));

		return 1;

	UINT flags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	m_Viewport.MaxDepth = 1.0f;

	XMFLOAT4 specular;          //反射(r,g,b)

		SDL_RenderPresent(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_BUFFER_DESC cbDesc;

	m_pLightBuffer = NULL;

	}

			index_offset += fv;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_RIGHT,

	}

				break;

}

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		}

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&scDesc,

	txDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;



	m_pVertexBuffer = NULL;



}

		}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	// Loop over shapes



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT flags = 0;



	txDesc.SampleDesc.Quality = 0;



		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SDL_Quit();

		return hr;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		pIList[j] = indexList[j];

		&shapes,

		}

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderClear(ren);

	m_VertexCount = 0;



	cbDesc.StructureByteStride = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += num_vertices;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	scDesc.SampleDesc.Quality = 0;

	m_pPixelShader = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	float    farZ = 100.0f;

void CD3DTest::Release()

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (!error.empty())

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;

		KEY_PRESS_SURFACE_UP,

#include <iostream>

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

		size_t index_offset = 0;  // インデントのオフセット

	Release();

	SAFE_RELEASE(m_pRenderTargetView);

	{

		&m_pDevice,

	SAFE_RELEASE(m_pTextureView);

		return hr;

		}



	ID3D11Texture2D* pBackBuffer;



		if (!ret)

	m_Angle += XMConvertToRadians(1.0f);

};

			break;

	m_pDepthStencilView = NULL;

			switch (e.key.keysym.sym)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

}

	//vector<WORD> index_t;

	m_Viewport.TopLeftY = 0;

	D3D11_TEXTURE2D_DESC txDesc;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pVertexShader);



	txDesc.Height = rect.Height();

		&m_pDevice,

	}



	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t ty =

		1,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_Angle += XMConvertToRadians(1.0f);

			default:

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(idx.vertex_index);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include <SDL.h>

	scDesc.OutputWindow = hwnd;

	{

{

	//深度ステンシルバッファ作成

	txDesc.SampleDesc.Quality = 0;

	ConstantMaterial material; //物体の質感

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





	m_pDevice = NULL;

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	Release();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.MiscFlags = 0;



			index_offset += num_vertices;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

	std::string imagePath = "hello.bmp";

	while (SDL_PollEvent(&e) != 0)





	m_VertexCount = vcount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	}

	m_Viewport.MaxDepth = 1.0f;

	txDesc.SampleDesc.Count = 1;



	std::string imagePath = "hello.bmp";



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	auto& materials = reader.GetMaterials();



	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pImmediateContext);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	vbDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





				// access to vertex

	m_pPixelShader = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	std::string error;



	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;

struct ConstantMatrixBuffer {

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

		if (!reader.Error().empty())

	irData.SysMemSlicePitch = 0;

	SDL_Event e;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))



				WORD index = idx.vertex_index;

			break;

	XMFLOAT4X4 view;

{

	}

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pIndexBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		size_t index_offset = 0;



	SDL_DestroyWindow(win);

		if (e.type == SDL_QUIT)



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	m_IndexCount = icount;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SAFE_RELEASE(m_pRenderTargetView);

	for (int i = 0; i < vcount; i++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

/*

				tinyobj::real_t tx =

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

#endif

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pDevice = NULL;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vrData.SysMemSlicePitch = 0;

	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			switch (e.key.keysym.sym)

	m_pTexture = NULL;

		{

			break;

	{



		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

	return 0;

{

	for (int j = 0; j < icount; j++)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_pTextureView = NULL;

	m_pIndexBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

		{

	ConstantLight    pntLight; //点光源

	irData.pSysMem = &pIList[0];

struct ConstantMatrixBuffer {

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#include <iostream>

		&m_pSwapChain,



	m_IndexCount = 0;

	SAFE_RELEASE(m_pInputLayout);





	vector<WORD> indexList;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

		&level,



		return hr;

	}

	XMFLOAT4         eyePos;   //視点座標

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_BUFFER_DESC cbDesc;

		return hr;

#include <iostream>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		{

			{

{

	txDesc.SampleDesc.Count = 1;

	WORD* pIList = new WORD[icount];

	scDesc.Windowed = TRUE;



			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (!reader.Warning().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Event e;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (!error.empty())



	int     vcount = vertexlist.size();

{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#endif

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <SDL.h>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4X4 world;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_IndexCount = icount;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	if (SDL_Init(SDL_INIT_VIDEO != 0))



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.SampleDesc.Count = 1;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)







	D3D11_SUBRESOURCE_DATA vrData;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//ビューポート設定

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

#include <SDL.h>

	return;



void CD3DTest::Release()

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	ConstantLight    pntLight; //点光源

void CD3DTest::Render()

	while (SDL_PollEvent(&e) != 0)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pDepthStencilView);

#include <SDL.h>



 * Lesson 1: Hello World!

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pVertexShader = NULL;

		SDL_RenderPresent(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::vector<tinyobj::material_t> materials;

		R"(cube.obj)");



		pIList[j] = indexList[j];

}

		// Loop over faces(polygon)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

		KEY_PRESS_SURFACE_DOWN,



int SEGMENT = 36;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pLightBuffer = NULL;



	{

 */

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		m_pImmediateContext->ClearState();

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	//vector<WORD> index_t;

		pVList[i] = vertexlist[i];

	m_Viewport.MinDepth = 0.0f;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pDepthStencilView = NULL;

	if (!reader.Warning().empty())



{

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pPixelShader);

	m_pTexture = NULL;

	vrData.SysMemPitch = 0;

				break;

	}

int main(int, char**)

	{



		return hr;

			for (size_t v = 0; v < num_vertices; v++)



	ID3D11Texture2D* pBackBuffer;

		D3D_DRIVER_TYPE_HARDWARE,

	std::string error;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    fov = XMConvertToRadians(20.0f);

};

	ZeroMemory(&txDesc, sizeof(txDesc));

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

using std::cout; using std::endl;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

struct ConstantMaterial {

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	auto& materials = reader.GetMaterials();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

int SEGMENT = 36;

	//頂点バッファ作成

	return 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pIndexBuffer = NULL;



	{

	m_pIndexBuffer = NULL;



	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			default:

	{



	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

int main(int, char**)

	m_pSwapChain->Present(0, 0);

	D3D_FEATURE_LEVEL level;



	SAFE_RELEASE(m_pTexture);

	vrData.SysMemSlicePitch = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	vrData.pSysMem = &pVList[0];

				indexlist.push_back(idx.vertex_index);

	}

	if (FAILED(hr))



	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vector<Vertex> vertexlist;

	}

	//頂点シェーダー生成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	if (FAILED(hr))

	}



		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.MiscFlags = 0;

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pSampler);

	//テクスチャ読み込み

	vbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pTexture);

	LoadObj(vertexlist, indexList);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

		SDL_RenderPresent(ren);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



};

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				WORD index = idx.vertex_index;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (!error.empty())

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.TopLeftY = 0;



	/*

		R"(cube.obj)");

	m_Viewport.TopLeftY = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

			// Loop over vertices in the face.

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	ConstantMaterial material; //物体の質感

	{



	//Vertex* pVList = new Vertex[vcount];





CD3DTest::~CD3DTest()

HRESULT CD3DTest::Create(HWND hwnd)

		NULL,

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		{

	HRESULT              hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_UP:

		KEY_PRESS_SURFACE_UP,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

using std::cout; using std::endl;

	delete[] pIList;

	WORD   icount = indexList.size();

#define TINYOBJLOADER_IMPLEMENTATION



		exit(1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		if (!ret)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



			case SDLK_RIGHT:

	ZeroMemory(&txDesc, sizeof(txDesc));

	pBackBuffer->Release();

				break;

	std::string imagePath = "hello.bmp";

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.MiscFlags = 0;

	delete[] pVList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	m_Angle += XMConvertToRadians(1.0f);

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_DOWN,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D11_SAMPLER_DESC smpDesc;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.ArraySize = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	WORD* pIList = new WORD[icount];

	txDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

	std::string imagePath = "hello.bmp";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		//User requests quit

	::GetClientRect(hwnd, &rect);

			// Loop over vertices in the face.



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	irData.SysMemPitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	HRESULT              hr;

	if (FAILED(hr))

			case SDLK_UP:

		// Loop over faces(polygon)

			{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_DOWN,

		if (!ret)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

	XMFLOAT4X4 world;

	D3D11_BUFFER_DESC vbDesc;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pTexture = NULL;

	m_pIndexBuffer = NULL;

	cbDesc.MiscFlags = 0;



int main(int, char**)

	UINT flags = 0;

#include <SDL.h>



	txDesc.SampleDesc.Count = 1;

		pVList[i] = vertexlist[i];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

		return hr;

				break;



	{

int main(int, char**)

	//Key press surfaces constants

	D3D11_TEXTURE2D_DESC txDesc;



		&m_pSwapChain,



			default:

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	::GetClientRect(hwnd, &rect);

	::ZeroMemory(&scDesc, sizeof(scDesc));

{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			}

		//User presses a key

	tinyobj::ObjReaderConfig reader_config;



	for (size_t s = 0; s < shapes.size(); s++)

			break;

	if (FAILED(hr))

	m_pIndexBuffer = NULL;



		//User requests quit

	//ビューポート設定

	Release();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.BufferDesc.Height = rect.Height();



	//Clean up our objects and quit

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string inputfile = "test.obj";





		size_t index_offset = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		flags,

void CD3DTest::Render()



}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		exit(1);



	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Quit();

		pIList[j] = indexList[j];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&shapes,

	if (FAILED(hr))

int SEGMENT = 36;

	auto& attrib = reader.GetAttrib();



		&m_pDevice,

	tinyobj::ObjReaderConfig reader_config;

#include <iostream>



	SDL_DestroyTexture(tex);

	m_pMatrixBuffer = NULL;

	Release();

		&shapes,

	return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.SampleDesc.Count = 1;

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	float    nearZ = 0.1f;

	/*

		else if (e.type == SDL_KEYDOWN)

int main(int, char**)

	return hr;

	irData.pSysMem = &pIList[0];



	}

#define TINYOBJLOADER_IMPLEMENTATION



				break;

{

	m_pDepthStencilView = NULL;

{

	ibDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

		SDL_RenderClear(ren);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	SAFE_RELEASE(m_pVertexShader);

			for (size_t v = 0; v < num_vertices; v++)

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& shapes = reader.GetShapes();

		return hr;

	SDL_DestroyRenderer(ren);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		{

	m_pLightBuffer = NULL;



			exit(1);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.StructureByteStride = 0;

			{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点バッファ作成

	m_pLightBuffer = NULL;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	return 0;



			}

	m_pRenderTargetView = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;



	return hr;



		flags,

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

		return hr;

	m_pTextureView = NULL;

		KEY_PRESS_SURFACE_RIGHT,

	CRect                rect;

		return 1;

	m_pRenderTargetView = NULL;

	m_VertexCount = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&materials,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pLightBuffer);

			//Select surfaces based on key press



		pIList[j] = indexList[j];

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





struct ConstantMatrixBuffer {

	float    nearZ = 0.1f;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		delete[] pIList;

	m_pDevice = NULL;



	//Vertex* pVList = new Vertex[vcount];

}

		KEY_PRESS_SURFACE_LEFT,

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (e.type == SDL_QUIT)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_TEXTURE2D_DESC txDesc;

		exit(1);

			}



#include <SDL.h>

	SDL_FreeSurface(suf);

	return 0;

	}

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pTexture);



	if (!error.empty())



		if (!ret)

			for (size_t v = 0; v < fv; v++)





		pLevels,

#define TINYOBJLOADER_IMPLEMENTATION

	ConstantLight    pntLight; //点光源

		&m_pDevice,



				// access to vertex



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//定数バッファ作成

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pTexture);

		return hr;

	txDesc.SampleDesc.Quality = 0;

	}

	while (SDL_PollEvent(&e) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		}

		m_pImmediateContext->ClearState();





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		m_pImmediateContext->ClearState();

	if (FAILED(hr))



	D3D11_BUFFER_DESC cbDesc;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include <iostream>

	/*

	XMFLOAT4 diffuse;           //拡散(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				// access to vertex

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	pBackBuffer->Release();



	vbDesc.CPUAccessFlags = 0;

	{

				// access to vertex





				vertex.push_back(vertex_tmp);

	m_VertexCount = vcount;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	vector<WORD> indexList;

	txDesc.Height = rect.Height();

	txDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	ConstantMaterial material; //物体の質感

{

	{

};

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





	//Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyTexture(tex);

	float    farZ = 100.0f;



	pBackBuffer->Release();



}



};

	m_pSampler = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}



	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ZeroMemory(&txDesc, sizeof(txDesc));

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

{

	Vertex* pVList = new Vertex[vcount];

	LoadObj(vertexlist, indexList);



	cbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantMaterial {

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	while (SDL_PollEvent(&e) != 0)



	return;

	m_Viewport.TopLeftY = 0;

			switch (e.key.keysym.sym)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&error,

	{

	m_pInputLayout = NULL;

	m_VertexCount = 0;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};



	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	for (const auto& shape : shapes)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			}

	txDesc.Width = rect.Width();



		SDL_Delay(1000);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pSwapChain,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		m_pImmediateContext->ClearState();

	int     vcount = vertexlist.size();



		return hr;



		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantMaterial {

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	dsDesc.Format = txDesc.Format;

	ConstantLight    pntLight; //点光源

		KEY_PRESS_SURFACE_LEFT,

		size_t index_offset = 0;

	//Create Index

			{

	WORD   icount = indexList.size();

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	UINT offsets = 0;

			exit(1);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	while (SDL_PollEvent(&e) != 0)



	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Quit();

	}

				tinyobj::real_t tx =



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int SEGMENT = 36;

	SAFE_RELEASE(m_pRenderTargetView);





	Release();



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

		SDL_RenderClear(ren);

	XMFLOAT4X4 world;





	m_Viewport.MaxDepth = 1.0f;

		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			default:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;



	std::vector<tinyobj::shape_t> shapes;

	/*

	{

#define TINYOBJLOADER_IMPLEMENTATION

	LoadObj(vertexlist, indexList);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





			{

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_Viewport.TopLeftX = 0;

	//ビューポート設定

#include <SDL.h>

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		cout << "SDL_INIT_ERROR" << endl;

};



		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	UINT offsets = 0;

{

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyWindow(win);

	txDesc.MipLevels = 1;

	D3D11_BUFFER_DESC vbDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			index_offset += fv;

	}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

		&level,

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::material_t> materials;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	ibDesc.CPUAccessFlags = 0;

				// access to vertex

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



}

		&shapes,

	}





	vrData.SysMemPitch = 0;

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4X4 view;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok

	vector<Vertex> vertexlist;

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	UINT offsets = 0;

{



	enum KeyPressSurfaces

			exit(1);

	Vertex* pVList = new Vertex[vcount];



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				// access to vertex

	irData.pSysMem = &pIList[0];



	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{

	Vertex* pVList = new Vertex[vcount];



	auto& materials = reader.GetMaterials();

	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.MinDepth = 0.0f;



	m_pVertexShader = NULL;



			switch (e.key.keysym.sym)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

			break;

		&shapes,

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);



			case SDLK_LEFT:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

	D3D11_SUBRESOURCE_DATA irData;

	DXGI_SWAP_CHAIN_DESC scDesc;





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		m_pImmediateContext->ClearState();

	cbDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	{



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	auto& materials = reader.GetMaterials();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_DOWN,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		KEY_PRESS_SURFACE_LEFT,

using std::cout; using std::endl;







	ID3D11Texture2D* pBackBuffer;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			{

	SAFE_RELEASE(m_pVertexShader);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//ビューポート設定

	}*/

		return 1;

	m_VertexCount = vcount;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pMatrixBuffer = NULL;

	m_pIndexBuffer = NULL;



	{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_DestroyWindow(win);

CD3DTest::CD3DTest()

	m_pDepthStencilView = NULL;





	{



		SDL_Delay(1000);

	UINT strides = sizeof(Vertex);



		SDL_RenderClear(ren);

		&m_pDevice,



		if (!reader.Error().empty())



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//頂点シェーダー生成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

};



		{

	m_pSwapChain->Present(0, 0);

		&level,

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.MiscFlags = 0;

	//頂点シェーダー生成

	m_pTextureView = NULL;

	m_pTexture = NULL;

	auto& shapes = reader.GetShapes();

	m_pDepthStencilView = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		R"(cube.obj)");

	float    nearZ = 0.1f;

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

		return hr;

				vertex.push_back(vertex_tmp);

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pSwapChain->Present(0, 0);

	m_Viewport.MaxDepth = 1.0f;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.StructureByteStride = 0;

		if (!ret)





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pRenderTargetView = NULL;

	delete[] pIList;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		&error,

	txDesc.Height = rect.Height();

	if (FAILED(hr))



	m_Viewport.MinDepth = 0.0f;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pSwapChain);

void CD3DTest::Release()

	SDL_DestroyTexture(tex);





		KEY_PRESS_SURFACE_TOTAL

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4         ambient;  //環境光(r,g,b)

#ifdef _DEBUG

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

				tinyobj::real_t ty =

	if (FAILED(hr))

CD3DTest::~CD3DTest()







	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	tinyobj::ObjReader reader;

		D3D11_SDK_VERSION,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pVertexShader = NULL;



		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		return hr;



 * Lesson 1: Hello World!

	m_pMatrixBuffer = NULL;

	m_Viewport.TopLeftY = 0;

	m_IndexCount = icount;





#include <SDL.h>

	}

		return hr;

			case SDLK_RIGHT:



	m_IndexCount = icount;

		}

	ibDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}
				indexlist.push_back(idx.vertex_index);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int SEGMENT = 36;





CD3DTest::~CD3DTest()

			}

	reader_config.mtl_search_path = "./"; // Path to material files

		{

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (int j = 0; j < icount; j++)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	WORD* pIList = new WORD[icount];

	//頂点シェーダー生成

	cbDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;

	pBackBuffer->Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	scDesc.BufferDesc.Height = rect.Height();

	//Key press surfaces constants

};



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		{

	SDL_DestroyRenderer(ren);

	scDesc.SampleDesc.Count = 1;

struct ConstantLight {



	};

			case SDLK_LEFT:





	SDL_DestroyWindow(win);

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());


