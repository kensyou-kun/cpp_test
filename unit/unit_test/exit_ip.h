	//定数バッファ作成



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t tx =



	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



			case SDLK_RIGHT:

		SDL_Delay(1000);





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



void CD3DTest::Render()

{

	m_pInputLayout = NULL;

	auto& materials = reader.GetMaterials();

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (e.type == SDL_QUIT)

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_UP,

			for (size_t v = 0; v < fv; v++)

int SEGMENT = 36;

		&attrib,

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.CPUAccessFlags = 0;

	ConstantLight    pntLight; //点光源

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	scDesc.BufferCount = 1;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



};

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4X4 projection;

	XMFLOAT4X4 view;

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

		delete[] pIList;

			int num_vertices = shape.mesh.num_face_vertices[f];

struct ConstantLightBuffer {

int main(int, char**)

	SDL_FreeSurface(bmp);

			exit(1);

	}

				tinyobj::real_t tx =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{



	/*

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	return 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyRenderer(ren);

	}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	//Vertex* pVList = new Vertex[vcount];

}



	if (FAILED(hr))

	XMFLOAT4X4 view;

	/*

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

			index_offset += fv;

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	SAFE_RELEASE(m_pImmediateContext);

				indexlist.push_back(index);

}

			exit(1);

	//頂点シェーダー生成

	vector<Vertex> vertexlist;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pSampler);

	m_pDevice = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	return;



	/*

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			//Select surfaces based on key press







 */

	}

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		pVList[i] = vertexlist[i];

	scDesc.SampleDesc.Count = 1;

	}

	m_Viewport.TopLeftY = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{

	ConstantLightBuffer clb;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

void CD3DTest::Release()

				// access to vertex

	m_pVertexBuffer = NULL;

	D3D11_TEXTURE2D_DESC txDesc;







	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



int main(int, char**)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				// access to vertex

	m_pImmediateContext = NULL;

		}

	m_Viewport.TopLeftX = 0;

	//vector<WORD> index_t;

	auto& materials = reader.GetMaterials();

	reader_config.mtl_search_path = "./"; // Path to material files

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

		&materials,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	// Loop over shapes

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				// access to vertex



	SDL_FreeSurface(bmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 projection;





{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_DestroyWindow(win);

	float    nearZ = 0.1f;

	//テクスチャ読み込み

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

	bool ret = tinyobj::LoadObj(

}



	txDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			case SDLK_UP:



};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pSwapChain);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pInputLayout = NULL;

	txDesc.CPUAccessFlags = 0;





		KEY_PRESS_SURFACE_TOTAL

	::GetClientRect(hwnd, &rect);



#endif

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	D3D11_SUBRESOURCE_DATA vrData;



	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderClear(ren);



	vector<WORD> indexList;

	if (FAILED(hr))

	scDesc.BufferCount = 1;

	}

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDepthStencilTexture = NULL;



void CD3DTest::Release()

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	reader_config.mtl_search_path = "./"; // Path to material files



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	XMStoreFloat4(&clb.eyePos, eye);

		else if (e.type == SDL_KEYDOWN)

	m_pDepthStencilTexture = NULL;

	//Create Index

	D3D11_BUFFER_DESC vbDesc;

		&m_pDevice,

		{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



			{



	XMFLOAT4 diffuse;           //拡散(r,g,b)



			case SDLK_DOWN:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&attrib,





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_VertexCount = 0;



	SAFE_RELEASE(m_pTextureView);





		D3D11_SDK_VERSION,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

			}

	m_pImmediateContext = NULL;

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};



	m_Viewport.TopLeftY = 0;

		{

	if (FAILED(hr))



		return hr;

	return 0;

	if (!error.empty())

			}

			for (size_t v = 0; v < num_vertices; v++)

int SEGMENT = 36;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	LoadObj(vertexlist, indexList);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyTexture(tex);

	XMFLOAT4 ambient;           //環境(r,g,b)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				vertex.push_back(vertex_tmp);

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.Windowed = TRUE;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vector<Vertex> vertexlist;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pImmediateContext);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			switch (e.key.keysym.sym)

	if (FAILED(hr))



	std::string imagePath = "hello.bmp";

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vrData.SysMemSlicePitch = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL

	txDesc.Height = rect.Height();

	std::vector<tinyobj::shape_t> shapes;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			index_offset += fv;

	dsDesc.Format = txDesc.Format;

	XMFLOAT4         eyePos;   //視点座標

	scDesc.SampleDesc.Quality = 0;

	if (m_pImmediateContext)

	scDesc.SampleDesc.Quality = 0;

		return hr;

	if (!reader.Warning().empty())

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	bool ret = tinyobj::LoadObj(

#include <iostream>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyWindow(win);

	m_pDevice = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

	}

		{

	m_VertexCount = vcount;



	m_pMatrixBuffer = NULL;

{

		SDL_RenderClear(ren);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4         eyePos;   //視点座標



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	}



	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::string imagePath = "hello.bmp";

	reader_config.mtl_search_path = "./"; // Path to material files

	for (int j = 0; j < icount; j++)

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&error,

	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&error,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				// access to vertex







	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_BUFFER_DESC vbDesc;

void CD3DTest::Release()

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

				tinyobj::real_t tx =



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

};



};



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				vertex.push_back(vertex_tmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

}



	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::GetClientRect(hwnd, &rect);



			}

		if (!ret)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{



	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//テクスチャ読み込み

	m_pInputLayout = NULL;

	m_Viewport.TopLeftX = 0;

	CRect                rect;

		delete[] pIList;

	scDesc.Windowed = TRUE;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&shapes,

	SDL_DestroyTexture(tex);

			{

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_IndexCount = 0;

	{



	ZeroMemory(&txDesc, sizeof(txDesc));

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		//User requests quit

		size_t index_offset = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (!error.empty())

		return hr;

	vrData.pSysMem = &pVList[0];

		size_t index_offset = 0;  // インデントのオフセット

				indexlist.push_back(index);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSwapChain);

	//頂点バッファ作成

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();

	// Loop over shapes

struct ConstantMaterial {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vrData.SysMemSlicePitch = 0;

	UINT flags = 0;

	vbDesc.MiscFlags = 0;

	{

	m_pDevice = NULL;

	while (SDL_PollEvent(&e) != 0)

		flags,

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);

	//深度ステンシルバッファ作成



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

}

				break;



	HRESULT              hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		NULL,

		&materials,

	if (FAILED(hr))

	UINT flags = 0;

	return 0;

struct ConstantMaterial {



}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				vertex.push_back(vertex_tmp);

	cbDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	if (!reader.Warning().empty())

};

	}*/

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4 specular;          //反射(r,g,b)

			exit(1);

	SAFE_RELEASE(m_pMatrixBuffer);

	D3D11_BUFFER_DESC ibDesc;

	txDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



CD3DTest::~CD3DTest()

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

};

	}

	cbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);



	UINT flags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	return 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_LEFT,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

}

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	/*

				indexlist.push_back(idx.vertex_index);

	m_pSwapChain->Present(0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				indexlist.push_back(idx.vertex_index);

	ConstantMaterial material; //物体の質感

		&m_pDevice,

	m_Viewport.TopLeftX = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	int     vcount = vertexlist.size();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

/*

	//ビューポート設定

		pIList[j] = indexList[j];

#include "DirectXManager.h"



}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pVertexBuffer = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	Release();

				tinyobj::real_t tx =

{



	SDL_DestroyWindow(win);

		pIList[j] = indexList[j];

		return hr;





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#include "DirectXManager.h"

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pMatrixBuffer = NULL;

	txDesc.ArraySize = 1;

	txDesc.SampleDesc.Quality = 0;

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC cbDesc;

			break;

			case SDLK_RIGHT:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderClear(ren);

	//ピクセルシェーダー生成

			}

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	WORD* pIList = new WORD[icount];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SAFE_RELEASE(m_pIndexBuffer);



			index_offset += fv;

	m_pSampler = NULL;



CD3DTest::CD3DTest()



		&level,

	{

{

	WORD   icount = indexList.size();

				break;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pLightBuffer = NULL;

	enum KeyPressSurfaces

	m_Viewport.MaxDepth = 1.0f;

	tinyobj::attrib_t attrib;

	WORD* pIList = new WORD[icount];

		&m_pSwapChain,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_BUFFER_DESC ibDesc;

				vertex.push_back(vertex_tmp);

		{

		1,

	vbDesc.StructureByteStride = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

			{

	m_Viewport.MaxDepth = 1.0f;

	scDesc.BufferCount = 1;

	txDesc.SampleDesc.Quality = 0;

	delete[] pIList;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSwapChain->Present(0, 0);

	Vertex* pVList = new Vertex[vcount];



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		delete[] pIList;

#include <SDL.h>



		// Loop over faces(polygon)

	enum KeyPressSurfaces



	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t tx =



	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.eyePos, eye);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext = NULL;

	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

	txDesc.Width = rect.Width();

	//vector<WORD> index_t;

	Release();

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			for (size_t v = 0; v < num_vertices; v++)



		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	}

	SDL_DestroyTexture(tex);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	D3D11_SUBRESOURCE_DATA vrData;

			for (size_t v = 0; v < num_vertices; v++)

	SDL_FreeSurface(suf);

	vbDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		size_t index_offset = 0;  // インデントのオフセット

#include <iostream>

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	std::string error;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pLightBuffer = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

	vector<Vertex> vertexlist;

	{

	};

	SDL_Event e;

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!error.empty())

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.StructureByteStride = 0;

	SDL_Event e;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	{

}

	ibDesc.CPUAccessFlags = 0;

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	vector<Vertex> vertexlist;





	SAFE_RELEASE(m_pTexture);

		return hr;

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	txDesc.CPUAccessFlags = 0;

		{

	SDL_Quit();



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTextureView);



	{

void CD3DTest::Render()

		&error,

	tinyobj::attrib_t attrib;

		SDL_Delay(1000);

		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	enum KeyPressSurfaces

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

				vertex.push_back(vertex_tmp);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Event e;



				// access to vertex



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			}

	{

	if (FAILED(hr))



	SDL_Quit();

	for (int j = 0; j < icount; j++)



		SDL_Delay(1000);

struct ConstantLightBuffer {

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	pBackBuffer->Release();

		}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;



		D3D_DRIVER_TYPE_HARDWARE,

	int     vcount = vertexlist.size();

	Release();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSwapChain = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		{

	UINT offsets = 0;

	ConstantMatrixBuffer cmb;

				indexlist.push_back(index);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vrData.pSysMem = &pVList[0];

		R"(cube.obj)");

	txDesc.Height = rect.Height();

		return hr;

	m_pInputLayout = NULL;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//Key press surfaces constants

	m_pDevice = NULL;

	scDesc.BufferDesc.Height = rect.Height();

		pVList[i] = vertexlist[i];

	m_pTextureView = NULL;



	SAFE_RELEASE(m_pSampler);

				WORD index = idx.vertex_index;



		&materials,

			{

				tinyobj::real_t ty =

	SDL_Quit();

	m_pTexture = NULL;

};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	}

		NULL,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			// Loop over vertices in the face.

}

	//定数バッファ作成

	}

	SAFE_RELEASE(m_pTexture);

				vertex.push_back(vertex_tmp);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ConstantLightBuffer clb;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

 * Lesson 1: Hello World!



		&m_pImmediateContext);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		&materials,

	//深度ステンシルバッファ作成

	//ビューポート設定



	cbDesc.MiscFlags = 0;



struct ConstantMaterial {

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include "DirectXManager.h"



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	return;

				// access to vertex

		cout << "SDL_INIT_ERROR" << endl;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pPixelShader);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

		return hr;

struct ConstantLightBuffer {

		{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	};

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			exit(1);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

			case SDLK_DOWN:

	dsDesc.Format = txDesc.Format;

	txDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_TOTAL

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	if (FAILED(hr))

	if (FAILED(hr))

		return hr;

#include <iostream>

	cbDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				WORD index = idx.vertex_index;

};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	reader_config.mtl_search_path = "./"; // Path to material files

		if (!reader.Error().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	delete[] pIList;



		D3D_DRIVER_TYPE_HARDWARE,



	scDesc.SampleDesc.Count = 1;



	//First we need to start up SDL, and make sure it went ok

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderClear(ren);



	if (FAILED(hr))

		}

	irData.pSysMem = &pIList[0];



	Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);



#include <SDL.h>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	LoadObj(vertexlist, indexList);



CD3DTest::~CD3DTest()

	vbDesc.MiscFlags = 0;

	vector<WORD> indexList;

				tinyobj::real_t ty =

	float    farZ = 100.0f;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 diffuse;           //拡散(r,g,b)





			case SDLK_LEFT:

	bool ret = tinyobj::LoadObj(

		&m_pImmediateContext);

	if (FAILED(hr))

		delete[] pVList;

	bool ret = tinyobj::LoadObj(

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::vector<tinyobj::material_t> materials;

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	irData.pSysMem = &pIList[0];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	delete[] pVList;

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

	}



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			}

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	pBackBuffer->Release();

			case SDLK_RIGHT:



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

struct ConstantMaterial {

	m_Viewport.MaxDepth = 1.0f;

{



	m_Angle += XMConvertToRadians(1.0f);

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t ty =

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	SDL_DestroyTexture(tex);

int main(int, char**)

				indexlist.push_back(idx.vertex_index);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 pos;               //座標(x,y,z)

	{

				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	tinyobj::ObjReaderConfig reader_config;

	Release();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

	tinyobj::attrib_t attrib;

		&m_pSwapChain,

	txDesc.SampleDesc.Quality = 0;

		}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (!error.empty())

				// access to vertex

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SAFE_RELEASE(m_pSwapChain);

		return hr;



		KEY_PRESS_SURFACE_LEFT,

	txDesc.Height = rect.Height();

	{

			case SDLK_UP:

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//深度ステンシルバッファ作成

	//テクスチャ読み込み

	while (SDL_PollEvent(&e) != 0)

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&materials,

	vbDesc.MiscFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.OutputWindow = hwnd;



	XMFLOAT4X4 projection;

			//Select surfaces based on key press

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				indexlist.push_back(index);

	std::string imagePath = "hello.bmp";

			case SDLK_RIGHT:

	UINT offsets = 0;

	//vector<WORD> index_t;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//vector<Vertex> vertex_t;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<WORD> indexList;





	if (m_pImmediateContext)

	m_pImmediateContext = NULL;

	WORD   icount = indexList.size();



	//Key press surfaces constants





		exit(1);

		KEY_PRESS_SURFACE_LEFT,





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pDevice,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

			index_offset += fv;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Height = rect.Height();



	SAFE_RELEASE(m_pPixelShader);

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	std::string inputfile = "test.obj";

		}



	}







	std::vector<tinyobj::material_t> materials;

	m_VertexCount = vcount;

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vector<Vertex> vertexlist;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		delete[] pVList;



	SAFE_RELEASE(m_pDevice);



	return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return;

	D3D_FEATURE_LEVEL level;

	}

	m_pVertexShader = NULL;

		return hr;



	scDesc.BufferCount = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		&shapes,

	int     vcount = vertexlist.size();

	return hr;

			case SDLK_RIGHT:

		R"(cube.obj)");

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				// access to vertex

	if (FAILED(hr))

	{

	m_pIndexBuffer = NULL;

		&level,



int SEGMENT = 36;



	SDL_Quit();

	m_pSwapChain = NULL;

#include <iostream>

struct ConstantMatrixBuffer {

		}

	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	Release();

		return hr;



				break;

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	txDesc.CPUAccessFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t tx =

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ConstantMatrixBuffer cmb;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

	irData.SysMemSlicePitch = 0;

	pBackBuffer->Release();

};

		KEY_PRESS_SURFACE_UP,



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





			case SDLK_LEFT:

#include <SDL.h>

}



	m_Viewport.Height = (FLOAT)rect.Height();

	ConstantMaterial material; //物体の質感



}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

};

	txDesc.ArraySize = 1;

	SDL_FreeSurface(bmp);

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pIndexBuffer = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

	}



	std::string imagePath = "hello.bmp";

		SDL_RenderPresent(ren);

				tinyobj::real_t ty =



	XMFLOAT4         eyePos;   //視点座標



#endif

	enum KeyPressSurfaces

	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

	SDL_FreeSurface(bmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

		D3D11_SDK_VERSION,

		size_t index_offset = 0;  // インデントのオフセット

	}





	XMFLOAT4X4 view;

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	vector<Vertex> vertexlist;

		SDL_RenderPresent(ren);







		D3D_DRIVER_TYPE_HARDWARE,





	}

}

}



	DXGI_SWAP_CHAIN_DESC scDesc;

		m_pImmediateContext->ClearState();

	m_Viewport.MinDepth = 0.0f;



	float    farZ = 100.0f;

			index_offset += fv;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.MipLevels = 1;





		// Loop over faces(polygon)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTexture);

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	//頂点レイアウト作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

#include "DirectXManager.h"



			case SDLK_UP:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.SampleDesc.Quality = 0;

	{

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.Windowed = TRUE;

	{

	txDesc.CPUAccessFlags = 0;

	m_pTextureView = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	CRect                rect;

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			{









	SAFE_RELEASE(m_pDepthStencilView);





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	cbDesc.StructureByteStride = 0;

	while (SDL_PollEvent(&e) != 0)

	m_pInputLayout = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pTexture);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	Vertex* pVList = new Vertex[vcount];

	m_pTexture = NULL;



	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

		}



		return hr;

{

	if (FAILED(hr))

	enum KeyPressSurfaces

	txDesc.SampleDesc.Quality = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

{

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pIndexBuffer);

}

	tinyobj::ObjReader reader;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_DestroyRenderer(ren);



	int     vcount = vertexlist.size();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	delete[] pIList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pMatrixBuffer);



	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		SDL_RenderClear(ren);

	/*

	float    farZ = 100.0f;

		return hr;

	if (FAILED(hr))

		delete[] pIList;



	//定数バッファ作成



	delete[] pIList;

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//頂点バッファ作成

#include "DirectXManager.h"





			switch (e.key.keysym.sym)

	{



	auto& shapes = reader.GetShapes();

	return hr;

	tinyobj::ObjReaderConfig reader_config;

	m_pTextureView = NULL;

		KEY_PRESS_SURFACE_LEFT,





		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pTexture = NULL;

	//深度ステンシルバッファ作成



		KEY_PRESS_SURFACE_UP,

	ConstantMaterial material; //物体の質感

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_IndexCount = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	while (SDL_PollEvent(&e) != 0)

	UINT offsets = 0;

	std::string imagePath = "hello.bmp";

		return hr;

	ConstantLightBuffer clb;



		}

struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pMatrixBuffer);



		return 1;

		}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pVertexShader);

{

	{

	std::vector<tinyobj::material_t> materials;

}


int main(int, char**)

	scDesc.SampleDesc.Quality = 0;

	txDesc.Height = rect.Height();

				break;

	if (FAILED(hr))

	//Clean up our objects and quit

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pRenderTargetView);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

		flags,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_DestroyWindow(win);

		}



		&shapes,



	auto& attrib = reader.GetAttrib();



	if (m_pImmediateContext)

	cbDesc.MiscFlags = 0;

	ConstantLightBuffer clb;

		return hr;

using std::cout; using std::endl;

	}*/

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	float    nearZ = 0.1f;



void CD3DTest::Render()



		delete[] pVList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))



		return hr;

	UINT flags = 0;

int main(int, char**)

			case SDLK_RIGHT:

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return 1;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_IndexCount = icount;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	ConstantMaterial material; //物体の質感

				indexlist.push_back(idx.vertex_index);

	//頂点シェーダー生成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t tx =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.MiscFlags = 0;

	}

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pSwapChain);





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	vrData.SysMemSlicePitch = 0;

	auto& shapes = reader.GetShapes();

	delete[] pVList;

		D3D11_SDK_VERSION,

	//テクスチャ読み込み

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	vrData.SysMemPitch = 0;

	txDesc.ArraySize = 1;

	ZeroMemory(&txDesc, sizeof(txDesc));

			index_offset += fv;

				tinyobj::real_t ty =

struct ConstantMaterial {

	{



	tinyobj::ObjReaderConfig reader_config;

	for (int i = 0; i < 3; i++)

	std::string imagePath = "hello.bmp";

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;

			//Select surfaces based on key press

	UINT strides = sizeof(Vertex);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC cbDesc;

	txDesc.MipLevels = 1;

CD3DTest::~CD3DTest()



	m_Viewport.Width = (FLOAT)rect.Width();

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		pVList[i] = vertexlist[i];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.StructureByteStride = 0;

	delete[] pIList;

			default:

	txDesc.MipLevels = 1;



	}*/



struct ConstantMatrixBuffer {

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.SampleDesc.Quality = 0;

	m_Angle += XMConvertToRadians(1.0f);

	UINT flags = 0;

void CD3DTest::Render()

		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pMatrixBuffer = NULL;



	pBackBuffer->Release();

	SDL_DestroyWindow(win);

	m_pPixelShader = NULL;

		cout << "SDL_INIT_ERROR" << endl;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				break;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}

	XMStoreFloat4(&clb.eyePos, eye);

				// access to vertex



	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pSwapChain);



	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pIndexBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				indexlist.push_back(idx.vertex_index);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	//vector<Vertex> vertex_t;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_FreeSurface(suf);

	pBackBuffer->Release();

	UINT flags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



}

	tinyobj::ObjReaderConfig reader_config;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





		delete[] pVList;

		return hr;

		if (e.type == SDL_QUIT)

};

		1,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	CRect                rect;



	return hr;

			exit(1);

	m_Viewport.TopLeftX = 0;

		R"(cube.obj)");

		SDL_RenderCopy(ren, tex, NULL, NULL);





	m_Angle += XMConvertToRadians(1.0f);

		pLevels,

	m_pSwapChain = NULL;



	m_Viewport.TopLeftY = 0;



	std::string imagePath = "hello.bmp";

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);

};



	txDesc.ArraySize = 1;







	SAFE_RELEASE(m_pIndexBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC vbDesc;

		&attrib,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		NULL,

		SDL_RenderPresent(ren);



	SDL_DestroyWindow(win);



		return hr;

	m_pInputLayout = NULL;

	m_pVertexShader = NULL;

	//インデックスバッファ作成

		flags,





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Quit();

	SDL_Quit();

		delete[] pIList;

		SDL_RenderPresent(ren);



				break;

	Release();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_UP:



	SDL_FreeSurface(bmp);

	vector<Vertex> vertexlist;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_VertexCount = 0;

		return hr;

	if (FAILED(hr))

	if (FAILED(hr))



		SDL_RenderPresent(ren);

	irData.SysMemPitch = 0;

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pRenderTargetView = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

	XMStoreFloat4(&clb.eyePos, eye);



	SDL_DestroyTexture(tex);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	dsDesc.Texture2D.MipSlice = 0;

	Vertex* pVList = new Vertex[vcount];

			index_offset += num_vertices;

		return hr;

	auto& materials = reader.GetMaterials();

	txDesc.SampleDesc.Count = 1;

	std::vector<tinyobj::shape_t> shapes;



				indexlist.push_back(index);

	if (FAILED(hr))

		R"(cube.obj)");



	txDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

void CD3DTest::Release()

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok



	if (FAILED(hr))

		&m_pDevice,

		return hr;



}

				tinyobj::real_t tx =

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		m_pImmediateContext->ClearState();



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.StructureByteStride = 0;

				break;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

		return hr;

			for (size_t v = 0; v < fv; v++)

	m_VertexCount = vcount;

	{

		return hr;



	txDesc.MipLevels = 1;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		exit(1);

	//Key press surfaces constants



	m_VertexCount = vcount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pDepthStencilTexture = NULL;

		}





	m_pDevice = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		else if (e.type == SDL_KEYDOWN)

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.ArraySize = 1;

		return hr;

struct ConstantMatrixBuffer {

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		KEY_PRESS_SURFACE_DEFAULT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pVertexShader = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				// access to vertex

	vrData.SysMemPitch = 0;

	vbDesc.CPUAccessFlags = 0;

	{

	m_pMatrixBuffer = NULL;

	}

	txDesc.SampleDesc.Quality = 0;

	UINT offsets = 0;

	HRESULT              hr;

		{

	txDesc.CPUAccessFlags = 0;





	m_VertexCount = 0;

		pVList[i] = vertexlist[i];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.BufferDesc.Height = rect.Height();

	}

	if (FAILED(hr))

	//頂点レイアウト作成

	tinyobj::attrib_t attrib;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	auto& materials = reader.GetMaterials();

	return 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

		KEY_PRESS_SURFACE_DEFAULT,

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			break;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		KEY_PRESS_SURFACE_LEFT,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}

	m_pVertexBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;

				// access to vertex



			}

	//頂点レイアウト作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderClear(ren);



		//User requests quit

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_Viewport.Width = (FLOAT)rect.Width();





				indexlist.push_back(index);

	txDesc.ArraySize = 1;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;

	DXGI_SWAP_CHAIN_DESC scDesc;

			}

int SEGMENT = 36;

		SDL_Delay(1000);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t ty =

	m_pDevice = NULL;

	SAFE_RELEASE(m_pLightBuffer);

			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//テクスチャ読み込み

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pSwapChain);

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

		cout << "SDL_INIT_ERROR" << endl;

	{

			break;

	scDesc.SampleDesc.Count = 1;

	{

	vbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (m_pImmediateContext)

		&materials,

	m_VertexCount = 0;

	D3D11_SUBRESOURCE_DATA vrData;





		&m_pImmediateContext);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

using std::cout; using std::endl;

#endif

				break;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

	m_pPixelShader = NULL;

	cbDesc.MiscFlags = 0;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}


		&m_pSwapChain,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}



	txDesc.Usage = D3D11_USAGE_DEFAULT;



	//First we need to start up SDL, and make sure it went ok

	}







	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Count = 1;

	}

		return hr;

	//vector<Vertex> vertex_t;

};

	{

		return hr;

		1,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}



	//テクスチャ読み込み

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	// Loop over shapes

		&shapes,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//テクスチャ読み込み

		}

	m_pTextureView = NULL;

		{

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&level,

		KEY_PRESS_SURFACE_DOWN,

	m_pInputLayout = NULL;




