	}

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int j = 0; j < icount; j++)

	m_pTexture = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		}

			break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pIndexBuffer = NULL;

	Vertex* pVList = new Vertex[vcount];

			{

		return hr;

				WORD index = idx.vertex_index;

#include <iostream>





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	WORD* pIList = new WORD[icount];

		return hr;

	m_VertexCount = 0;

}

		return hr;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	bool ret = tinyobj::LoadObj(

	}

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	while (SDL_PollEvent(&e) != 0)



		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Viewport.Height = (FLOAT)rect.Height();



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pSwapChain->Present(0, 0);

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	m_Viewport.Height = (FLOAT)rect.Height();

{

	tinyobj::ObjReader reader;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilView);

	std::string imagePath = "hello.bmp";

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Quit();



				WORD index = idx.vertex_index;

	}

	//テクスチャ読み込み

	SAFE_RELEASE(m_pTexture);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//ビューポート設定

				WORD index = idx.vertex_index;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	D3D11_BUFFER_DESC ibDesc;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyWindow(win);

	//インデックスバッファ作成

	D3D11_TEXTURE2D_DESC txDesc;

		delete[] pVList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&scDesc,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//定数バッファ作成

			{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		}

	SDL_DestroyTexture(tex);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.CPUAccessFlags = 0;

{

	m_pTexture = NULL;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		cout << "SDL_INIT_ERROR" << endl;



	m_IndexCount = 0;

		&attrib,

	SAFE_RELEASE(m_pInputLayout);

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_DEFAULT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	tinyobj::ObjReader reader;

	m_Viewport.Width = (FLOAT)rect.Width();

				break;

using std::cout; using std::endl;

	XMFLOAT4         eyePos;   //視点座標

		if (e.type == SDL_QUIT)





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	txDesc.SampleDesc.Quality = 0;

		m_pImmediateContext->ClearState();

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.TopLeftY = 0;

	/*

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//深度ステンシルバッファ作成

	};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

	SAFE_RELEASE(m_pPixelShader);

		delete[] pIList;

	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	XMFLOAT4X4 view;



	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	float    nearZ = 0.1f;

	m_pLightBuffer = NULL;





		SDL_RenderClear(ren);



		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_DestroyRenderer(ren);

	/*

struct ConstantMatrixBuffer {

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_Delay(1000);

	if (FAILED(hr))

		D3D11_SDK_VERSION,

	scDesc.SampleDesc.Count = 1;

struct ConstantLight {

		&m_pSwapChain,

		if (!ret)

	m_pSwapChain = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

void CD3DTest::Release()

			{

	for (int i = 0; i < vcount; i++)





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);







	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;



int main(int, char**)

	XMFLOAT4X4 projection;

}





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&scDesc,

	//頂点レイアウト作成



	//頂点レイアウト作成

		// Loop over faces(polygon)

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		return hr;

	vrData.pSysMem = &pVList[0];

	SDL_DestroyRenderer(ren);



int SEGMENT = 36;

	delete[] pIList;

	if (FAILED(hr))

		return hr;



		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)



		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	tinyobj::attrib_t attrib;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		delete[] pIList;





	m_pInputLayout = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

			//Select surfaces based on key press

 * Lesson 1: Hello World!

	//Create Index

	//ビューポート設定

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.TopLeftY = 0;

		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			switch (e.key.keysym.sym)



	//定数バッファ作成

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		exit(1);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		1,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		exit(1);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{



				// access to vertex



struct ConstantLight {

	//定数バッファ作成

	ibDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDevice);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			index_offset += num_vertices;

struct ConstantLight {

struct ConstantLightBuffer {

	txDesc.MipLevels = 1;

	vector<Vertex> vertexlist;



	if (FAILED(hr))

				WORD index = idx.vertex_index;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	D3D11_SUBRESOURCE_DATA vrData;

	//Create Index

		}

	//インデックスバッファ作成





	if (m_pImmediateContext)





	vbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pMatrixBuffer);

};

		return hr;

	m_pSwapChain->Present(0, 0);

	m_pSwapChain = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			index_offset += num_vertices;

	// Loop over shapes

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	::GetClientRect(hwnd, &rect);

		}

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferCount = 1;



{

	cbDesc.MiscFlags = 0;

	{

		&m_pImmediateContext);

	//テクスチャ読み込み

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

}

	SAFE_RELEASE(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&m_pSwapChain,

		&error,

	if (!reader.ParseFromFile(inputfile, reader_config))



	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

}

	{

	m_Angle += XMConvertToRadians(1.0f);

	//Clean up our objects and quit

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.pSysMem = &pVList[0];

	{

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDepthStencilTexture);



		&error,

	m_pInputLayout = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pVertexShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pSwapChain,

	m_pLightBuffer = NULL;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				break;

	auto& materials = reader.GetMaterials();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ConstantMaterial material; //物体の質感

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t tx =

	dsDesc.Texture2D.MipSlice = 0;

		//User presses a key

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

	m_IndexCount = icount;



	}

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (FAILED(hr))

			switch (e.key.keysym.sym)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	WORD   icount = indexList.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC ibDesc;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyTexture(tex);



	D3D11_SAMPLER_DESC smpDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_VertexCount = vcount;

	D3D11_BUFFER_DESC cbDesc;



{



	for (int i = 0; i < vcount; i++)

			case SDLK_DOWN:

				// access to vertex

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))



		KEY_PRESS_SURFACE_LEFT,



	if (FAILED(hr))



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//インデックスバッファ作成

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vrData.pSysMem = &pVList[0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Width = rect.Width();



	}

	m_Angle += XMConvertToRadians(1.0f);

	}



	XMStoreFloat4(&clb.ambient, lightAmbient);

		}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	txDesc.MiscFlags = 0;



}
	}

	D3D11_BUFFER_DESC ibDesc;

	};

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	std::string inputfile = "test.obj";

	m_pLightBuffer = NULL;

		KEY_PRESS_SURFACE_LEFT,

	auto& materials = reader.GetMaterials();



	if (FAILED(hr))

	m_IndexCount = icount;

	vbDesc.CPUAccessFlags = 0;

{

	D3D11_SUBRESOURCE_DATA irData;

	//頂点バッファ作成

	if (FAILED(hr))

	if (FAILED(hr))

		return hr;

		pLevels,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	m_pImmediateContext = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		{

};





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_IndexCount = icount;

	/*

		&m_pImmediateContext);



	ZeroMemory(&txDesc, sizeof(txDesc));

		R"(cube.obj)");

};

			{

	txDesc.CPUAccessFlags = 0;

};

		&m_pDevice,

	UINT flags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files



		D3D11_SDK_VERSION,

				WORD index = idx.vertex_index;

		//User requests quit

	XMFLOAT4X4 view;



{

	D3D11_TEXTURE2D_DESC txDesc;

	dsDesc.Texture2D.MipSlice = 0;

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

		&shapes,

	UINT offsets = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);



		&m_pDevice,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	m_pPixelShader = NULL;

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pIndexBuffer = NULL;

	m_pSampler = NULL;



		{

	SDL_DestroyWindow(win);

	vector<Vertex> vertexlist;

	vbDesc.StructureByteStride = 0;

		return hr;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	SAFE_RELEASE(m_pTextureView);

	SDL_DestroyWindow(win);

		flags,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	txDesc.MiscFlags = 0;

#ifdef _DEBUG

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<Vertex> vertex_t;

	D3D11_SUBRESOURCE_DATA vrData;

	LoadObj(vertexlist, indexList);



	scDesc.SampleDesc.Quality = 0;



	XMFLOAT4 pos;               //座標(x,y,z)

				break;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	irData.pSysMem = &pIList[0];

	SDL_DestroyWindow(win);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





 */

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//頂点バッファ作成

		else if (e.type == SDL_KEYDOWN)

#include "DirectXManager.h"

	cbDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

	auto& materials = reader.GetMaterials();





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//テクスチャ読み込み

	ConstantMaterial material; //物体の質感

	bool ret = tinyobj::LoadObj(

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_Angle += XMConvertToRadians(1.0f);

}

		{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	{

	for (int i = 0; i < 3; i++)

			for (size_t v = 0; v < fv; v++)

	SDL_DestroyTexture(tex);

		{

		return 1;

	ConstantLightBuffer clb;

	m_pInputLayout = NULL;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.MipLevels = 1;

	txDesc.SampleDesc.Quality = 0;

		&m_pSwapChain,

			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void CD3DTest::Release()

int main(int, char**)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)



		return hr;

	delete[] pIList;



				WORD index = idx.vertex_index;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.CPUAccessFlags = 0;

 */

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		&scDesc,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}*/

		{

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_DestroyTexture(tex);

	//vector<WORD> index_t;

	//Key press surfaces constants

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		1,



	return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.CPUAccessFlags = 0;

		}

	D3D11_BUFFER_DESC cbDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderClear(ren);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return 1;

	{

	{

	float    fov = XMConvertToRadians(20.0f);

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pVertexBuffer);

				// access to vertex

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



{

	XMFLOAT4 specular;          //反射(r,g,b)

				break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//ピクセルシェーダー生成

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	enum KeyPressSurfaces

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//Vertex* pVList = new Vertex[vcount];

	return 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	Release();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Height = rect.Height();

}

		NULL,

};

			case SDLK_LEFT:

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

		}



			case SDLK_DOWN:

{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		SDL_Delay(1000);

	m_Viewport.Width = (FLOAT)rect.Width();

		// Loop over faces(polygon)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			//Select surfaces based on key press



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderClear(ren);

{

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



{

	m_Viewport.TopLeftX = 0;

		return hr;

	UINT strides = sizeof(Vertex);

	delete[] pVList;



	scDesc.BufferDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t ty =

		m_pImmediateContext->ClearState();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		cout << "SDL_INIT_ERROR" << endl;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//テクスチャ読み込み



	D3D_FEATURE_LEVEL level;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		m_pImmediateContext->ClearState();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		exit(1);

	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pDevice);

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 world;

	{



		{

			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::vector<tinyobj::material_t> materials;

};

				indexlist.push_back(idx.vertex_index);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	std::string error;



		//User requests quit

}
	}



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	for (int i = 0; i < vcount; i++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		}



{

	SDL_DestroyTexture(tex);

int main(int, char**)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		// Loop over faces(polygon)



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//定数バッファ作成

	//頂点シェーダー生成

			}

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	}*/

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



	if (FAILED(hr))

		{

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		KEY_PRESS_SURFACE_DOWN,



#include <SDL.h>

int SEGMENT = 36;



	//テクスチャ読み込み



	SDL_DestroyRenderer(ren);

		NULL,

		return hr;

	int     vcount = vertexlist.size();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&scDesc,

	if (!reader.ParseFromFile(inputfile, reader_config))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_Angle += XMConvertToRadians(1.0f);

	D3D11_BUFFER_DESC vbDesc;

	for (int i = 0; i < 3; i++)





	auto& materials = reader.GetMaterials();

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



#include <iostream>

				break;



		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.SampleDesc.Count = 1;

	//Key press surfaces constants

	WORD   icount = indexList.size();

	vrData.pSysMem = &pVList[0];

	//Create Index



	Vertex* pVList = new Vertex[vcount];

		m_pImmediateContext->ClearState();

{

#include "DirectXManager.h"

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pRenderTargetView = NULL;

	}

	CRect                rect;

		// Loop over faces(polygon)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

{

	if (FAILED(hr))

				break;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

};

	ibDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);

{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#include <iostream>



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		KEY_PRESS_SURFACE_UP,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	irData.SysMemPitch = 0;

		{

CD3DTest::~CD3DTest()

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//定数バッファ作成

}
	m_pRenderTargetView = NULL;

	m_pDepthStencilTexture = NULL;

			break;





	m_VertexCount = 0;

			// Loop over vertices in the face.

	m_pRenderTargetView = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vector<Vertex> vertexlist;

	SDL_Quit();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

struct ConstantMaterial {

	m_pMatrixBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	std::string inputfile = "test.obj";

				break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

{

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_RIGHT,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			{

		else if (e.type == SDL_KEYDOWN)

		size_t index_offset = 0;

}

	{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			// Loop over vertices in the face.

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	// Loop over shapes

	}



	while (SDL_PollEvent(&e) != 0)

		size_t index_offset = 0;

	SDL_DestroyWindow(win);

	{

			for (size_t v = 0; v < num_vertices; v++)



	if (FAILED(hr))

	{





	WORD   icount = indexList.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				// access to vertex

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_DestroyRenderer(ren);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)

#endif



		&error,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

{

	std::string inputfile = "test.obj";





		size_t index_offset = 0;

	UINT flags = 0;

	scDesc.SampleDesc.Count = 1;

	auto& materials = reader.GetMaterials();



	D3D11_BUFFER_DESC vbDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{

	}

	//Vertex* pVList = new Vertex[vcount];

{

		}



		return hr;

int SEGMENT = 36;

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

				break;

	D3D11_TEXTURE2D_DESC txDesc;





			default:

		return hr;

}

	m_pRenderTargetView = NULL;

	//Create Index

	if (FAILED(hr))

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	m_pDevice = NULL;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDevice);

	if (!reader.Warning().empty())



	cbDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;

			case SDLK_UP:

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				// access to vertex

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

			// Loop over vertices in the face.

			for (size_t v = 0; v < num_vertices; v++)

	std::string inputfile = "test.obj";

		return hr;

	Release();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		SDL_RenderClear(ren);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);









		return hr;

	ConstantMaterial material; //物体の質感

	{



	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);







	UINT strides = sizeof(Vertex);

	SDL_FreeSurface(bmp);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDepthStencilView);

	auto& shapes = reader.GetShapes();

		return hr;

struct ConstantMaterial {

	cbDesc.MiscFlags = 0;

	ibDesc.CPUAccessFlags = 0;



	for (int j = 0; j < icount; j++)



	m_VertexCount = 0;

	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::ObjReader reader;

	txDesc.ArraySize = 1;

		// Loop over faces(polygon)

	txDesc.CPUAccessFlags = 0;

	SDL_Event e;

		else if (e.type == SDL_KEYDOWN)

		NULL,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.ArraySize = 1;



int main(int, char**)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	return 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	float    fov = XMConvertToRadians(20.0f);



	irData.SysMemPitch = 0;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pRenderTargetView);

	}







	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pPixelShader);

	m_pVertexBuffer = NULL;

	m_pSampler = NULL;

	{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_BUFFER_DESC ibDesc;

	}



	SDL_DestroyWindow(win);

	auto& materials = reader.GetMaterials();

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}

	D3D11_BUFFER_DESC cbDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (!reader.ParseFromFile(inputfile, reader_config))

	auto& materials = reader.GetMaterials();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_IndexCount = icount;

	XMStoreFloat4(&clb.eyePos, eye);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

int main(int, char**)



				break;

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string imagePath = "hello.bmp";

	m_Viewport.TopLeftY = 0;

	Vertex* pVList = new Vertex[vcount];

				WORD index = idx.vertex_index;

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC vbDesc;

		R"(cube.obj)");

	vbDesc.MiscFlags = 0;

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::vector<tinyobj::shape_t> shapes;

	scDesc.OutputWindow = hwnd;

			break;



		return hr;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	vector<WORD> indexList;

	pBackBuffer->Release();

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		D3D_DRIVER_TYPE_HARDWARE,

		D3D11_SDK_VERSION,



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    aspect = m_Viewport.Width / m_Viewport.Height;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::vector<tinyobj::shape_t> shapes;

	irData.pSysMem = &pIList[0];

/*

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	reader_config.mtl_search_path = "./"; // Path to material files



HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_SAMPLER_DESC smpDesc;

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	for (int j = 0; j < icount; j++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderClear(ren);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (m_pImmediateContext)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	while (SDL_PollEvent(&e) != 0)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	SAFE_RELEASE(m_pTextureView);

			}

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

		SDL_RenderClear(ren);

	XMFLOAT4X4 world;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				break;

	D3D11_BUFFER_DESC vbDesc;

	}





			case SDLK_RIGHT:

	SAFE_RELEASE(m_pIndexBuffer);

	return 0;

	XMFLOAT4X4 view;

		&materials,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;

		}

	std::vector<tinyobj::material_t> materials;

				indexlist.push_back(idx.vertex_index);

	m_pRenderTargetView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 specular;          //反射(r,g,b)

				indexlist.push_back(index);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&scDesc,



	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_LEFT,

		{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//vector<WORD> index_t;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//定数バッファ作成

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//ビューポート設定

		return 1;

	cbDesc.StructureByteStride = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	txDesc.CPUAccessFlags = 0;



	}

			case SDLK_DOWN:

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ID3D11Texture2D* pBackBuffer;

	//vector<WORD> index_t;

	{

				WORD index = idx.vertex_index;

			{

	LoadObj(vertexlist, indexList);

		delete[] pIList;



		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	delete[] pIList;

			exit(1);

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	while (SDL_PollEvent(&e) != 0)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





{

struct ConstantMaterial {

	m_VertexCount = vcount;

		&attrib,

		// Loop over faces(polygon)



	//ピクセルシェーダー生成

		return hr;

			break;

		&error,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::vector<tinyobj::shape_t> shapes;

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_pTexture = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.BufferCount = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.OutputWindow = hwnd;

	m_pDepthStencilTexture = NULL;

		exit(1);



		}

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexShader);

		{



	SDL_DestroyRenderer(ren);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	// Loop over shapes

		&level,

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

	if (FAILED(hr))

		return hr;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4X4 world;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Clean up our objects and quit

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_TOTAL

	ConstantLightBuffer clb;

	{

	ConstantMatrixBuffer cmb;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pTextureView = NULL;

#endif

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			case SDLK_DOWN:

	m_pMatrixBuffer = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	txDesc.Width = rect.Width();

	{

	while (SDL_PollEvent(&e) != 0)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	vrData.SysMemSlicePitch = 0;



	m_pSampler = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//テクスチャ読み込み

		SDL_RenderClear(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

CD3DTest::CD3DTest()

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);



}
		{

	for (int j = 0; j < icount; j++)

	m_Viewport.MinDepth = 0.0f;



	//頂点バッファ作成

		&level,

	{

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.Height = (FLOAT)rect.Height();

		//User requests quit

	WORD* pIList = new WORD[icount];

	{

HRESULT CD3DTest::Create(HWND hwnd)

	{

			case SDLK_LEFT:



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		cout << "SDL_INIT_ERROR" << endl;

	{

	D3D11_BUFFER_DESC vbDesc;

	//ピクセルシェーダー生成

		&attrib,



	SAFE_RELEASE(m_pMatrixBuffer);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				indexlist.push_back(index);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	if (FAILED(hr))



		NULL,

HRESULT CD3DTest::Create(HWND hwnd)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#ifdef _DEBUG

	dsDesc.Texture2D.MipSlice = 0;

struct ConstantMaterial {

}



				WORD index = idx.vertex_index;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

	vrData.pSysMem = &pVList[0];

	//vector<Vertex> vertex_t;

		size_t index_offset = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		exit(1);

	scDesc.SampleDesc.Count = 1;

	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t ty =





/*



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	SDL_Event e;





	cbDesc.MiscFlags = 0;

};

	//深度ステンシルバッファ作成



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_Delay(1000);







	{

	vector<WORD> indexList;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <iostream>

		KEY_PRESS_SURFACE_RIGHT,

	std::vector<tinyobj::material_t> materials;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.eyePos, eye);



	m_pIndexBuffer = NULL;



				// access to vertex

	bool ret = tinyobj::LoadObj(

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 specular;          //反射(r,g,b)





	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	for (size_t s = 0; s < shapes.size(); s++)

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_DEFAULT,

				tinyobj::real_t ty =

		&m_pImmediateContext);

	scDesc.BufferCount = 1;



		return hr;



	SDL_FreeSurface(suf);



}

		&materials,

		cout << "SDL_INIT_ERROR" << endl;

	m_pRenderTargetView = NULL;

	//テクスチャ読み込み

		SDL_Delay(1000);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	tinyobj::ObjReaderConfig reader_config;

	SDL_Event e;

	for (int j = 0; j < icount; j++)

	ConstantLightBuffer clb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	scDesc.BufferDesc.Width = rect.Width();

	}

				break;

	txDesc.SampleDesc.Count = 1;

		SDL_RenderClear(ren);

	D3D11_TEXTURE2D_DESC txDesc;

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//Clean up our objects and quit



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//テクスチャ読み込み

	txDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

		exit(1);

	txDesc.Width = rect.Width();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pVertexShader);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

		delete[] pVList;



	SDL_DestroyRenderer(ren);

	scDesc.Windowed = TRUE;



	SAFE_RELEASE(m_pRenderTargetView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pSwapChain);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pVertexBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();



	m_pTexture = NULL;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





		R"(cube.obj)");

	scDesc.BufferCount = 1;

		SDL_RenderClear(ren);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vector<Vertex> vertexlist;



	pBackBuffer->Release();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.CPUAccessFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			// Loop over vertices in the face.

}

	CRect                rect;

	vrData.pSysMem = &pVList[0];

	vector<WORD> indexList;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;



				break;

			index_offset += num_vertices;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



}

	if (FAILED(hr))



	m_pSampler = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	HRESULT              hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		{

struct ConstantMatrixBuffer {

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pTextureView);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.TopLeftY = 0;

	}

};

		if (!ret)

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点バッファ作成

		return hr;

		flags,

		return hr;

			switch (e.key.keysym.sym)



	SAFE_RELEASE(m_pTextureView);

	}

	//ビューポート設定







		KEY_PRESS_SURFACE_TOTAL

	D3D_FEATURE_LEVEL level;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

		{



	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	}

	// Loop over shapes

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];









	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	}



	tinyobj::attrib_t attrib;

	scDesc.SampleDesc.Quality = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

	//定数バッファ作成

	m_pDepthStencilTexture = NULL;

		{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		R"(cube.obj)");

	int     vcount = vertexlist.size();



	}

}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SDL_Event e;

	for (size_t s = 0; s < shapes.size(); s++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemSlicePitch = 0;

	}



HRESULT CD3DTest::Create(HWND hwnd)

		if (!reader.Error().empty())

	auto& shapes = reader.GetShapes();

	if (!reader.ParseFromFile(inputfile, reader_config))

	while (SDL_PollEvent(&e) != 0)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 specular;          //反射(r,g,b)





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Event e;

{

	return;

	LoadObj(vertexlist, indexList);

		D3D_DRIVER_TYPE_HARDWARE,

	HRESULT              hr;



		SDL_RenderPresent(ren);



	scDesc.SampleDesc.Count = 1;

		delete[] pIList;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_DestroyWindow(win);

		exit(1);



			{

		&materials,





	SAFE_RELEASE(m_pDepthStencilTexture);

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Quit();

	if (FAILED(hr))



};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);

	UINT strides = sizeof(Vertex);





#define TINYOBJLOADER_IMPLEMENTATION

	float    fov = XMConvertToRadians(20.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	if (FAILED(hr))

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	auto& materials = reader.GetMaterials();

#include "DirectXManager.h"



	float    farZ = 100.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		D3D_DRIVER_TYPE_HARDWARE,

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemSlicePitch = 0;



		{

{

}

	for (const auto& shape : shapes)



	m_pSwapChain->Present(0, 0);



	reader_config.mtl_search_path = "./"; // Path to material files

int main(int, char**)

	txDesc.MiscFlags = 0;

		return hr;

	bool ret = tinyobj::LoadObj(

};

	m_Viewport.MinDepth = 0.0f;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&shapes,

struct ConstantMaterial {

	txDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_UP,

	{

		KEY_PRESS_SURFACE_UP,

}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

#include <iostream>

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				// access to vertex

{

			default:

	}

	if (m_pImmediateContext)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	auto& materials = reader.GetMaterials();

		pLevels,

				break;

}

	vector<Vertex> vertexlist;



	SAFE_RELEASE(m_pIndexBuffer);

		if (!ret)

	//頂点レイアウト作成

{

	//Create Index





				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	if (FAILED(hr))



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(bmp);

		//User requests quit

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::vector<tinyobj::shape_t> shapes;

	D3D11_BUFFER_DESC ibDesc;



			}

	//深度ステンシルバッファ作成

	//深度ステンシルバッファ作成

};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_IndexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		flags,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

		NULL,

		//User presses a key

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_DestroyTexture(tex);

	if (m_pImmediateContext)

	m_pImmediateContext = NULL;



	m_Viewport.TopLeftX = 0;



	/*

	LoadObj(vertexlist, indexList);

	vbDesc.MiscFlags = 0;







	vrData.SysMemPitch = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyTexture(tex);

	m_VertexCount = vcount;

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	std::vector<tinyobj::material_t> materials;



{

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	Vertex* pVList = new Vertex[vcount];

	m_pSwapChain->Present(0, 0);

		}

#include "DirectXManager.h"



	SDL_DestroyTexture(tex);

			{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	SDL_DestroyTexture(tex);

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_Delay(1000);



	//頂点レイアウト作成

	m_VertexCount = vcount;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pLightBuffer = NULL;

	dsDesc.Format = txDesc.Format;



	vector<Vertex> vertexlist;

			exit(1);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		//User presses a key

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4X4 world;



		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_TEXTURE2D_DESC txDesc;



	auto& attrib = reader.GetAttrib();

		&shapes,

	::GetClientRect(hwnd, &rect);





				break;





		&m_pDevice,



		}



		if (!ret)

	{

	scDesc.OutputWindow = hwnd;

		delete[] pIList;



	std::string error;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (!error.empty())

	//頂点レイアウト作成





	XMFLOAT4         eyePos;   //視点座標

	ConstantMaterial material; //物体の質感

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	delete[] pIList;



	scDesc.SampleDesc.Count = 1;

		}

	WORD   icount = indexList.size();





	XMFLOAT4 specular;          //反射(r,g,b)

int main(int, char**)

}



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pDepthStencilView);



	std::string inputfile = "test.obj";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

 */

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_VertexCount = vcount;

	m_pDepthStencilView = NULL;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pTexture = NULL;

		}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	CRect                rect;

	scDesc.BufferDesc.Height = rect.Height();





	SAFE_RELEASE(m_pIndexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION



{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	auto& shapes = reader.GetShapes();



		SDL_RenderPresent(ren);

	{

	cbDesc.StructureByteStride = 0;

		D3D_DRIVER_TYPE_HARDWARE,

				vertex.push_back(vertex_tmp);

	}

		SDL_RenderPresent(ren);

		cout << "SDL_INIT_ERROR" << endl;

	return;

	{

		D3D_DRIVER_TYPE_HARDWARE,



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMFLOAT4X4 view;

	//Clean up our objects and quit

	SAFE_RELEASE(m_pSampler);

			// Loop over vertices in the face.

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

CD3DTest::CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	XMFLOAT4         eyePos;   //視点座標



	txDesc.MiscFlags = 0;

	vbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pMatrixBuffer);



	SDL_DestroyRenderer(ren);

	}

		delete[] pIList;

				WORD index = idx.vertex_index;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		&error,

		pLevels,

		//User presses a key

int main(int, char**)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	if (FAILED(hr))

	CRect                rect;



	vector<Vertex> vertexlist;

		flags,

		&level,



	m_Angle += XMConvertToRadians(1.0f);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		D3D11_SDK_VERSION,

				break;



	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



int main(int, char**)

			default:

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	WORD* pIList = new WORD[icount];

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderClear(ren);

	tinyobj::attrib_t attrib;

	m_VertexCount = vcount;

		return hr;



	/*

{

	txDesc.MiscFlags = 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Quit();



};



			case SDLK_LEFT:

	txDesc.ArraySize = 1;

	D3D11_SUBRESOURCE_DATA irData;



	vector<WORD> indexList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	enum KeyPressSurfaces

#endif

	if (!reader.Warning().empty())

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pIndexBuffer);

		NULL,

};

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	bool ret = tinyobj::LoadObj(

				break;



	//Create Index

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;



	//ビューポート設定

	auto& materials = reader.GetMaterials();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	}

struct ConstantMaterial {



		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	float    nearZ = 0.1f;

	vbDesc.MiscFlags = 0;



void CD3DTest::Release()

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

	}



	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&scDesc,



	//深度ステンシルバッファ作成

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantLightBuffer clb;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.Height = rect.Height();

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

	for (int i = 0; i < 3; i++)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pSwapChain->Present(0, 0);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4 pos;               //座標(x,y,z)

	ibDesc.CPUAccessFlags = 0;



	D3D11_TEXTURE2D_DESC txDesc;



	//ビューポート設定

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		m_pImmediateContext->ClearState();



	std::vector<tinyobj::shape_t> shapes;

			index_offset += fv;

			for (size_t v = 0; v < num_vertices; v++)

{

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	SAFE_RELEASE(m_pTexture);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		SDL_RenderClear(ren);

			break;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

CD3DTest::CD3DTest()



	WORD   icount = indexList.size();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilTexture = NULL;

		return 1;

	if (FAILED(hr))

	return 0;

	irData.pSysMem = &pIList[0];

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	float    nearZ = 0.1f;

	UINT strides = sizeof(Vertex);

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pMatrixBuffer = NULL;

	m_pVertexBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

	irData.SysMemPitch = 0;

		if (!ret)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (m_pImmediateContext)

	if (FAILED(hr))

	{

	m_pPixelShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		NULL,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	pBackBuffer->Release();

			index_offset += num_vertices;

	enum KeyPressSurfaces

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

		SDL_RenderClear(ren);

		return hr;



	while (SDL_PollEvent(&e) != 0)

	delete[] pIList;

	{

		pLevels,





	//頂点レイアウト作成



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pRenderTargetView);

	delete[] pIList;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

struct ConstantLight {



	D3D11_TEXTURE2D_DESC txDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pTexture);

		}

				indexlist.push_back(idx.vertex_index);

	m_pRenderTargetView = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	tinyobj::attrib_t attrib;

		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;



		return hr;

	{

				break;

		KEY_PRESS_SURFACE_TOTAL

struct ConstantLightBuffer {

	UINT strides = sizeof(Vertex);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Angle += XMConvertToRadians(1.0f);

				// access to vertex

	UINT offsets = 0;

			index_offset += num_vertices;



HRESULT CD3DTest::Create(HWND hwnd)



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vrData.SysMemPitch = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 pos;               //座標(x,y,z)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyRenderer(ren);

				break;

	vector<Vertex> vertexlist;



				break;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	XMFLOAT4X4 projection;



		}

	if (FAILED(hr))

				break;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	/*

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;



	ConstantLight    pntLight; //点光源



	int     vcount = vertexlist.size();

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				indexlist.push_back(idx.vertex_index);

	//頂点バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}



	return;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_VertexCount = vcount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (int i = 0; i < 3; i++)

		&m_pDevice,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	//頂点バッファ作成

	cbDesc.StructureByteStride = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	};

				indexlist.push_back(index);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	txDesc.SampleDesc.Quality = 0;

		return 1;

	m_Viewport.Height = (FLOAT)rect.Height();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pRenderTargetView = NULL;

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::vector<tinyobj::material_t> materials;

	}

	std::string imagePath = "hello.bmp";

	}

	SDL_DestroyWindow(win);

	txDesc.SampleDesc.Count = 1;

	m_pVertexBuffer = NULL;

	D3D11_BUFFER_DESC cbDesc;



			default:

	XMFLOAT4X4 world;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;



	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	tinyobj::attrib_t attrib;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	return 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	{

	int     vcount = vertexlist.size();

				break;

		exit(1);



};

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SAFE_RELEASE(m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

#ifdef _DEBUG

	vrData.SysMemPitch = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	m_IndexCount = icount;

	for (const auto& shape : shapes)

		{

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		SDL_RenderClear(ren);

	HRESULT              hr;

	m_Viewport.MaxDepth = 1.0f;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		m_pImmediateContext->ClearState();

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

	for (const auto& shape : shapes)

	m_Viewport.TopLeftY = 0;

	m_VertexCount = vcount;

	return 0;

struct ConstantLight {



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	/*

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantMatrixBuffer cmb;



	XMFLOAT4X4 view;

		{

	SDL_FreeSurface(bmp);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 pos;               //座標(x,y,z)



		NULL,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.TopLeftY = 0;



	//深度ステンシルバッファ作成





	m_pTexture = NULL;

#include <SDL.h>

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;







{

			switch (e.key.keysym.sym)

#include <iostream>

	enum KeyPressSurfaces

				indexlist.push_back(idx.vertex_index);

	return 0;

			// Loop over vertices in the face.

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		delete[] pIList;

	//深度ステンシルバッファ作成

	m_IndexCount = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (!error.empty())

	if (FAILED(hr))

	scDesc.BufferCount = 1;

		cout << "SDL_INIT_ERROR" << endl;



	D3D11_SAMPLER_DESC smpDesc;

	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vector<WORD> indexList;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vector<WORD> indexList;

		return hr;





	vrData.pSysMem = &pVList[0];

	D3D11_SUBRESOURCE_DATA vrData;

			}





				tinyobj::real_t tx =

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	// Loop over shapes

		return 1;

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pPixelShader = NULL;

CD3DTest::CD3DTest()

	delete[] pIList;

				vertex.push_back(vertex_tmp);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)



	vbDesc.StructureByteStride = 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{



	m_pRenderTargetView = NULL;

		KEY_PRESS_SURFACE_LEFT,



		size_t index_offset = 0;  // インデントのオフセット

	m_IndexCount = 0;

	//頂点バッファ作成



				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		{

	irData.SysMemSlicePitch = 0;

	{

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pDepthStencilTexture);



			{



		{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_pPixelShader = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//Vertex* pVList = new Vertex[vcount];

	scDesc.SampleDesc.Count = 1;

	m_pIndexBuffer = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.BufferDesc.Width = rect.Width();

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_IndexCount = icount;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SAFE_RELEASE(m_pDevice);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	m_pVertexShader = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}*/

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

				vertex.push_back(vertex_tmp);



	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!reader.ParseFromFile(inputfile, reader_config))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

				// access to vertex

	delete[] pVList;

	m_pVertexShader = NULL;

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

	}

	//First we need to start up SDL, and make sure it went ok



		SDL_RenderCopy(ren, tex, NULL, NULL);

	//vector<WORD> index_t;





		KEY_PRESS_SURFACE_TOTAL

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMatrixBuffer {

	//vector<WORD> index_t;

	m_pLightBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pMatrixBuffer = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	D3D11_BUFFER_DESC vbDesc;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//First we need to start up SDL, and make sure it went ok



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		D3D_DRIVER_TYPE_HARDWARE,

	return hr;

	CRect                rect;

	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

		&error,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	//vector<Vertex> vertex_t;

	cbDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	return 0;

struct ConstantLightBuffer {



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			}

	}*/

		//User requests quit



	SAFE_RELEASE(m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyRenderer(ren);

		D3D_DRIVER_TYPE_HARDWARE,

	if (!reader.ParseFromFile(inputfile, reader_config))

	irData.pSysMem = &pIList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



#include <iostream>

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.TopLeftX = 0;

	SDL_DestroyTexture(tex);





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pTexture);

	m_pTextureView = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ty =

	D3D11_BUFFER_DESC ibDesc;

};

}

	ZeroMemory(&txDesc, sizeof(txDesc));



			}

#include <iostream>

#include <SDL.h>

		size_t index_offset = 0;

				tinyobj::real_t tx =

	};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			exit(1);

			{

	WORD   icount = indexList.size();





	txDesc.MipLevels = 1;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			}

		if (e.type == SDL_QUIT)

		// Loop over faces(polygon)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		// Loop over faces(polygon)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.CPUAccessFlags = 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	if (FAILED(hr))

 */

	SDL_DestroyTexture(tex);

				WORD index = idx.vertex_index;

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pLightBuffer = NULL;

		// Loop over faces(polygon)

	if (FAILED(hr))

	//Clean up our objects and quit



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

		flags,

	SDL_DestroyTexture(tex);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vbDesc.CPUAccessFlags = 0;

	float    nearZ = 0.1f;

	m_pRenderTargetView = NULL;

	//ビューポート設定

		{

	SDL_FreeSurface(bmp);

		&materials,

	//Create Index

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	WORD   icount = indexList.size();

		1,

{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			switch (e.key.keysym.sym)

		NULL,

	std::string inputfile = "test.obj";

	dsDesc.Texture2D.MipSlice = 0;

		size_t index_offset = 0;

	WORD* pIList = new WORD[icount];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Quit();

	{



	vector<Vertex> vertexlist;

{

	Release();

				// access to vertex

	}

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







	D3D11_SUBRESOURCE_DATA vrData;

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pIndexBuffer);



			case SDLK_UP:

	Release();

	//Vertex* pVList = new Vertex[vcount];

	}

{

			}

	ibDesc.MiscFlags = 0;



	if (!error.empty())

				break;

		KEY_PRESS_SURFACE_UP,

	m_pDevice = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Event e;

	SAFE_RELEASE(m_pImmediateContext);









	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

	return hr;

	txDesc.Height = rect.Height();





		NULL,

	SDL_DestroyWindow(win);

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	pBackBuffer->Release();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

	delete[] pVList;



	tinyobj::ObjReaderConfig reader_config;

	vbDesc.StructureByteStride = 0;







	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pSwapChain->Present(0, 0);

	//定数バッファ作成

{

				indexlist.push_back(idx.vertex_index);



				WORD index = idx.vertex_index;

	m_pVertexBuffer = NULL;

int SEGMENT = 36;

			}

	float    farZ = 100.0f;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標

	SDL_FreeSurface(suf);

	m_pVertexShader = NULL;



		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return;

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		NULL,

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 view;



	irData.SysMemPitch = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;



};

	return 0;

		&m_pImmediateContext);

struct ConstantLight {

			exit(1);

	{



	m_pImmediateContext = NULL;



	if (!reader.Warning().empty())



}

				break;



	{

	scDesc.Windowed = TRUE;

		&scDesc,

	Vertex* pVList = new Vertex[vcount];

	m_pDepthStencilTexture = NULL;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void CD3DTest::Release()

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pTextureView = NULL;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

int main(int, char**)





	std::vector<tinyobj::shape_t> shapes;



	m_IndexCount = 0;



	UINT strides = sizeof(Vertex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.BufferDesc.Height = rect.Height();

#define TINYOBJLOADER_IMPLEMENTATION

		//User presses a key



	scDesc.SampleDesc.Quality = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.pSysMem = &pIList[0];



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

/*



				break;

	//First we need to start up SDL, and make sure it went ok

	for (size_t s = 0; s < shapes.size(); s++)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#ifdef _DEBUG



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

	irData.SysMemPitch = 0;

	if (FAILED(hr))



	m_pVertexShader = NULL;



	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.eyePos, eye);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Key press surfaces constants

		SDL_Delay(1000);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

using std::cout; using std::endl;

#include <SDL.h>

	{

		{

	ID3D11Texture2D* pBackBuffer;



			index_offset += fv;



void CD3DTest::Release()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	ID3D11Texture2D* pBackBuffer;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;





			index_offset += num_vertices;



	D3D11_BUFFER_DESC ibDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	m_pSampler = NULL;

}

}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

		return hr;



		SDL_RenderClear(ren);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			break;

	vbDesc.MiscFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (m_pImmediateContext)

	Release();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	D3D11_BUFFER_DESC cbDesc;



			case SDLK_UP:

		pVList[i] = vertexlist[i];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_DestroyWindow(win);

	Release();



	m_pLightBuffer = NULL;



	vector<WORD> indexList;



		if (e.type == SDL_QUIT)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

 */





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (m_pImmediateContext)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	int     vcount = vertexlist.size();

			case SDLK_DOWN:





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))







				vertex.push_back(vertex_tmp);

	pBackBuffer->Release();

	vector<WORD> indexList;


