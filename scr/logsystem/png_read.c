void CD3DTest::Render()



	irData.SysMemSlicePitch = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	pBackBuffer->Release();

	m_pSampler = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pDepthStencilView);

		delete[] pIList;

			{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pInputLayout);





int SEGMENT = 36;

	scDesc.BufferDesc.Width = rect.Width();





	m_Viewport.TopLeftY = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_pInputLayout = NULL;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.SampleDesc.Count = 1;

		{

	SDL_Quit();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	}

	//頂点シェーダー生成

	{

	D3D_FEATURE_LEVEL level;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Clean up our objects and quit

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			//Select surfaces based on key press

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

}
	m_pSampler = NULL;



		1,

		return hr;

struct ConstantMatrixBuffer {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//ビューポート設定

	//深度ステンシルバッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	cbDesc.MiscFlags = 0;

/*

	ConstantMaterial material; //物体の質感

	vbDesc.MiscFlags = 0;





}

			exit(1);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	{

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//vector<Vertex> vertex_t;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

CD3DTest::CD3DTest()

	m_pSwapChain->Present(0, 0);

	SDL_Quit();

			case SDLK_LEFT:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

 */

		//User requests quit

#include <iostream>

	{

	bool ret = tinyobj::LoadObj(

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

}





		return hr;







	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			break;

}

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	scDesc.BufferDesc.Width = rect.Width();



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_DestroyTexture(tex);



		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	bool ret = tinyobj::LoadObj(

	dsDesc.Format = txDesc.Format;

	cbDesc.StructureByteStride = 0;

{

	m_Viewport.MinDepth = 0.0f;

	Release();

	txDesc.Height = rect.Height();

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMatrixBuffer {

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pImmediateContext);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files



	//インデックスバッファ作成

	{

	{

	SDL_FreeSurface(suf);

		1,

	txDesc.MipLevels = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);





		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	WORD* pIList = new WORD[icount];

#include <iostream>

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

		return hr;



};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

{

	float    farZ = 100.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	HRESULT              hr;

		SDL_RenderClear(ren);

		size_t index_offset = 0;  // インデントのオフセット

	//Vertex* pVList = new Vertex[vcount];





	m_Viewport.Height = (FLOAT)rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



#include <SDL.h>

int main(int, char**)

	cbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pInputLayout);

	}

	m_pRenderTargetView = NULL;

	txDesc.Height = rect.Height();

				break;

	XMFLOAT4X4 view;

				// access to vertex

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	irData.pSysMem = &pIList[0];

		D3D_DRIVER_TYPE_HARDWARE,



	ZeroMemory(&txDesc, sizeof(txDesc));

	{

	SAFE_RELEASE(m_pTexture);





	SDL_DestroyTexture(tex);

	for (size_t s = 0; s < shapes.size(); s++)



				WORD index = idx.vertex_index;

	txDesc.Width = rect.Width();

}

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pMatrixBuffer);



		D3D11_SDK_VERSION,

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MiscFlags = 0;



	vbDesc.CPUAccessFlags = 0;

	m_pIndexBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyRenderer(ren);

		cout << "SDL_INIT_ERROR" << endl;

		return hr;



		&level,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	bool ret = tinyobj::LoadObj(



	scDesc.BufferCount = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		flags,

				WORD index = idx.vertex_index;

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

int SEGMENT = 36;

	m_pRenderTargetView = NULL;

	m_pImmediateContext = NULL;

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	Release();

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pVertexShader);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

};

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (!reader.Warning().empty())

#include <SDL.h>

		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;



				// access to vertex

	D3D11_SUBRESOURCE_DATA irData;

	scDesc.OutputWindow = hwnd;



	{

			default:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_RIGHT,

	return;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.Width = (FLOAT)rect.Width();



#include <SDL.h>

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		if (!ret)



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&materials,

	XMFLOAT4         eyePos;   //視点座標



#endif

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pDevice);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//vector<Vertex> vertex_t;

	UINT strides = sizeof(Vertex);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_LEFT:

		return hr;

#include <iostream>

		return hr;



				break;

			switch (e.key.keysym.sym)

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (!error.empty())

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	if (m_pImmediateContext)

	m_pPixelShader = NULL;

	//定数バッファ作成

	vector<WORD> indexList;



	cbDesc.MiscFlags = 0;

		return hr;



{

	D3D11_SUBRESOURCE_DATA vrData;

			{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				indexlist.push_back(index);

				vertex.push_back(vertex_tmp);

	LoadObj(vertexlist, indexList);



			default:

		&attrib,

	SDL_DestroyTexture(tex);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	tinyobj::ObjReader reader;





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = 0;

				vertex.push_back(vertex_tmp);



	m_pImmediateContext = NULL;

	XMFLOAT4X4 projection;

#include <iostream>



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vrData.SysMemPitch = 0;

	cbDesc.MiscFlags = 0;



	cbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{

	//ピクセルシェーダー生成



	HRESULT              hr;



		delete[] pVList;

struct ConstantMatrixBuffer {

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_RIGHT,

	std::string error;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

		if (!reader.Error().empty())

			exit(1);

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };







	m_VertexCount = 0;



};

		size_t index_offset = 0;

	SDL_DestroyRenderer(ren);

	D3D11_TEXTURE2D_DESC txDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

		return hr;





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& shapes = reader.GetShapes();

	irData.pSysMem = &pIList[0];

	//ピクセルシェーダー生成

	//深度ステンシルバッファ作成

	//ビューポート設定





		D3D11_SDK_VERSION,

	scDesc.BufferCount = 1;

	SDL_DestroyRenderer(ren);

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pSampler);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pPixelShader);

		SDL_Delay(1000);



	SAFE_RELEASE(m_pVertexBuffer);

struct ConstantMatrixBuffer {



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

};

#ifdef _DEBUG

{

	delete[] pIList;



	// Loop over shapes





	//ピクセルシェーダー生成

		if (!reader.Error().empty())

	scDesc.OutputWindow = hwnd;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		D3D_DRIVER_TYPE_HARDWARE,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#ifdef _DEBUG

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pSampler);



		KEY_PRESS_SURFACE_DOWN,

#endif



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pRenderTargetView);





};

			exit(1);

	if (FAILED(hr))

};



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&level,

				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	m_pVertexShader = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_DEFAULT,



	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		{



		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

		KEY_PRESS_SURFACE_UP,

	txDesc.MipLevels = 1;

		size_t index_offset = 0;  // インデントのオフセット

	if (!error.empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	}

	Vertex* pVList = new Vertex[vcount];



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	for (int i = 0; i < vcount; i++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		{

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

				break;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	return 0;

		D3D11_SDK_VERSION,



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.ArraySize = 1;

{

	{

		KEY_PRESS_SURFACE_LEFT,



#ifdef _DEBUG

	{

		SDL_RenderPresent(ren);

}

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t tx =

				tinyobj::real_t tx =

	HRESULT              hr;

				vertex.push_back(vertex_tmp);

	m_pDevice = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		KEY_PRESS_SURFACE_DEFAULT,

	SDL_Quit();



	/*

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderPresent(ren);



};

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

/*

		size_t index_offset = 0;

				// access to vertex

	/*

	XMStoreFloat4(&clb.ambient, lightAmbient);



		NULL,

	ID3D11Texture2D* pBackBuffer;

		return hr;

int main(int, char**)

				WORD index = idx.vertex_index;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	Vertex* pVList = new Vertex[vcount];



	SAFE_RELEASE(m_pTextureView);



	D3D_FEATURE_LEVEL level;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	txDesc.Width = rect.Width();

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			for (size_t v = 0; v < num_vertices; v++)

	if (m_pImmediateContext)



	irData.pSysMem = &pIList[0];





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

struct ConstantLightBuffer {

	return hr;

				vertex.push_back(vertex_tmp);

	if (!reader.ParseFromFile(inputfile, reader_config))



		&scDesc,

	}

		&level,

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	return 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pRenderTargetView = NULL;

	}



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{



	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_DestroyRenderer(ren);

	m_Viewport.MinDepth = 0.0f;



	for (int i = 0; i < 3; i++)



	{

				vertex.push_back(vertex_tmp);

	m_pLightBuffer = NULL;

}



	txDesc.Width = rect.Width();



	return 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	auto& materials = reader.GetMaterials();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pInputLayout);

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4         ambient;  //環境光(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

struct ConstantLight {

int main(int, char**)

		KEY_PRESS_SURFACE_RIGHT,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	LoadObj(vertexlist, indexList);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SAFE_RELEASE(m_pDevice);

		return 1;

		}

	m_Viewport.MinDepth = 0.0f;

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	m_Viewport.TopLeftY = 0;

	txDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_TOTAL

		&attrib,

}



			// Loop over vertices in the face.

	UINT offsets = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_VertexCount = vcount;

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderPresent(ren);

	vrData.SysMemPitch = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	UINT strides = sizeof(Vertex);

	{



#include "DirectXManager.h"

	enum KeyPressSurfaces

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		1,

	if (m_pImmediateContext)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4X4 view;

	float    nearZ = 0.1f;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

{

		cout << "SDL_INIT_ERROR" << endl;

}



	SAFE_RELEASE(m_pLightBuffer);

	m_pInputLayout = NULL;

	{

		return hr;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	int     vcount = vertexlist.size();

		return hr;

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			}

	if (FAILED(hr))

{





	XMFLOAT4X4 world;

	m_Viewport.Height = (FLOAT)rect.Height();



	m_pSwapChain->Present(0, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	for (int i = 0; i < 3; i++)

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderClear(ren);

	reader_config.mtl_search_path = "./"; // Path to material files

		{

	txDesc.SampleDesc.Quality = 0;

		}



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





{



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pTextureView = NULL;

#include <iostream>

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pDepthStencilView);

	m_pLightBuffer = NULL;



		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			// Loop over vertices in the face.

		return hr;

			exit(1);



	auto& materials = reader.GetMaterials();

	if (FAILED(hr))



	XMFLOAT4 ambient;           //環境(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}*/

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//ピクセルシェーダー生成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	// Loop over shapes

		pLevels,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&error,

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	tinyobj::ObjReader reader;

	SDL_FreeSurface(bmp);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;



struct ConstantLightBuffer {

		SDL_Delay(1000);

	auto& shapes = reader.GetShapes();

	};



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pDepthStencilView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.MiscFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	SDL_DestroyWindow(win);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    fov = XMConvertToRadians(20.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_VertexCount = vcount;

struct ConstantMatrixBuffer {

	ConstantLight    pntLight; //点光源

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (size_t s = 0; s < shapes.size(); s++)



		}



		}

	SDL_DestroyRenderer(ren);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t tx =

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	UINT strides = sizeof(Vertex);

	//Key press surfaces constants

	}

				vertex.push_back(vertex_tmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	scDesc.BufferDesc.Height = rect.Height();

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pPixelShader = NULL;





		return hr;

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 pos;               //座標(x,y,z)

}





}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);

CD3DTest::~CD3DTest()

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	if (m_pImmediateContext)

	scDesc.SampleDesc.Quality = 0;

		SDL_Delay(1000);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	SAFE_RELEASE(m_pMatrixBuffer);

		&error,

	m_pTexture = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	D3D11_SUBRESOURCE_DATA irData;



				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		KEY_PRESS_SURFACE_DEFAULT,

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);



				vertex.push_back(vertex_tmp);





	m_pSampler = NULL;

		{

void CD3DTest::Render()



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_pVertexBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.StructureByteStride = 0;

	enum KeyPressSurfaces

	Vertex* pVList = new Vertex[vcount];

	vbDesc.StructureByteStride = 0;

		{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.Width = (FLOAT)rect.Width();

	reader_config.mtl_search_path = "./"; // Path to material files

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 world;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		flags,

			default:

	//深度ステンシルバッファ作成

	//インデックスバッファ作成

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	txDesc.SampleDesc.Quality = 0;



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	cbDesc.CPUAccessFlags = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	//First we need to start up SDL, and make sure it went ok

		&error,

}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	::GetClientRect(hwnd, &rect);

	dsDesc.Format = txDesc.Format;



		R"(cube.obj)");

		KEY_PRESS_SURFACE_UP,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pVertexBuffer);

	}

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

		{

				break;

		else if (e.type == SDL_KEYDOWN)

	{

	ConstantMatrixBuffer cmb;

	SDL_Event e;

int SEGMENT = 36;



			case SDLK_LEFT:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pPixelShader);

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDepthStencilView = NULL;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//First we need to start up SDL, and make sure it went ok

		}

		{



	txDesc.Height = rect.Height();

	vrData.SysMemSlicePitch = 0;

			//Select surfaces based on key press



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



/*

			switch (e.key.keysym.sym)

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	auto& shapes = reader.GetShapes();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	{



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	for (int i = 0; i < vcount; i++)

	for (size_t s = 0; s < shapes.size(); s++)



	auto& materials = reader.GetMaterials();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pPixelShader);

			{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];









	UINT offsets = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				// access to vertex

 */

	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

	vrData.SysMemSlicePitch = 0;

	m_pSwapChain->Present(0, 0);

	SDL_Quit();



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			index_offset += num_vertices;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	pBackBuffer->Release();

	for (const auto& shape : shapes)

#include "DirectXManager.h"

	SAFE_RELEASE(m_pMatrixBuffer);

	std::string error;

	WORD* pIList = new WORD[icount];



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t tx =

	SDL_Event e;

		&level,

CD3DTest::CD3DTest()

CD3DTest::~CD3DTest()

		1,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&m_pSwapChain,

	CRect                rect;



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pRenderTargetView);

			for (size_t v = 0; v < fv; v++)

	CRect                rect;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			//Select surfaces based on key press





	txDesc.SampleDesc.Count = 1;

	txDesc.Width = rect.Width();

				// access to vertex

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	WORD   icount = indexList.size();

}

#include <iostream>

	SAFE_RELEASE(m_pPixelShader);

		}

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.CPUAccessFlags = 0;

		&level,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pPixelShader = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;







	SDL_DestroyTexture(tex);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC vbDesc;

	delete[] pIList;

}

int main(int, char**)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			case SDLK_UP:

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	tinyobj::ObjReaderConfig reader_config;

		delete[] pVList;



	D3D11_BUFFER_DESC ibDesc;



		1,

		exit(1);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	auto& attrib = reader.GetAttrib();



		// Loop over faces(polygon)







	m_pDepthStencilTexture = NULL;

	ibDesc.StructureByteStride = 0;

	for (int j = 0; j < icount; j++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User requests quit

	D3D_FEATURE_LEVEL level;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD* pIList = new WORD[icount];

	{

#endif

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		{

		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			}

	std::string inputfile = "test.obj";

	SDL_DestroyWindow(win);

				break;



	cbDesc.StructureByteStride = 0;

	txDesc.Width = rect.Width();

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		cout << "SDL_INIT_ERROR" << endl;

	{

#define TINYOBJLOADER_IMPLEMENTATION

	return hr;

	reader_config.mtl_search_path = "./"; // Path to material files







			case SDLK_DOWN:

			for (size_t v = 0; v < fv; v++)

}

	ibDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemSlicePitch = 0;

			}



{

		m_pImmediateContext->ClearState();

	//Create Index





	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.MiscFlags = 0;





void CD3DTest::Release()

	scDesc.OutputWindow = hwnd;

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pSampler);

	for (int i = 0; i < 3; i++)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

};

			// Loop over vertices in the face.

	vrData.pSysMem = &pVList[0];



		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		delete[] pIList;

		exit(1);



	scDesc.BufferDesc.Height = rect.Height();



				indexlist.push_back(index);

				tinyobj::real_t tx =

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pIndexBuffer = NULL;

	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	UINT offsets = 0;



	irData.SysMemSlicePitch = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

CD3DTest::CD3DTest()

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pDevice = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

			//Select surfaces based on key press

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyTexture(tex);



struct ConstantLightBuffer {





CD3DTest::CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC ibDesc;

		return hr;



}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    farZ = 100.0f;

	//インデックスバッファ作成

	scDesc.SampleDesc.Count = 1;

		return hr;







	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	tinyobj::attrib_t attrib;

	//頂点バッファ作成

		else if (e.type == SDL_KEYDOWN)

	//頂点レイアウト作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		}

}



int main(int, char**)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

		D3D_DRIVER_TYPE_HARDWARE,



	m_pDepthStencilView = NULL;

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_IndexCount = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DOWN,

	}*/





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		&m_pImmediateContext);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	auto& shapes = reader.GetShapes();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	delete[] pVList;

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	//テクスチャ読み込み

		R"(cube.obj)");

		pIList[j] = indexList[j];

	UINT flags = 0;

	m_pDepthStencilTexture = NULL;

	};

	if (FAILED(hr))







	LoadObj(vertexlist, indexList);

	{



	txDesc.CPUAccessFlags = 0;



		SDL_RenderClear(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pRenderTargetView = NULL;

		size_t index_offset = 0;





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	//頂点レイアウト作成

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	dsDesc.Format = txDesc.Format;

				indexlist.push_back(index);

	WORD* pIList = new WORD[icount];

		}

				// access to vertex

	m_IndexCount = icount;

	SDL_DestroyRenderer(ren);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	// Loop over shapes

		return hr;



	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//頂点レイアウト作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SAMPLER_DESC smpDesc;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

CD3DTest::~CD3DTest()

 */

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	UINT offsets = 0;

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderPresent(ren);

	m_Viewport.TopLeftX = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pInputLayout);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	m_pPixelShader = NULL;

	if (FAILED(hr))

	delete[] pVList;

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pPixelShader);

	LoadObj(vertexlist, indexList);

		&materials,

	txDesc.SampleDesc.Quality = 0;

	delete[] pVList;

	SAFE_RELEASE(m_pDevice);

	auto& shapes = reader.GetShapes();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





 * Lesson 1: Hello World!



		&level,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		m_pImmediateContext->ClearState();

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pInputLayout = NULL;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pVertexShader);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	m_pInputLayout = NULL;

#include <SDL.h>

	{



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (size_t s = 0; s < shapes.size(); s++)

int SEGMENT = 36;

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4X4 projection;



	XMFLOAT4X4 view;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

	}

	m_pSampler = NULL;

		1,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		1,

		pVList[i] = vertexlist[i];

			//Select surfaces based on key press



	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	return 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		SDL_RenderClear(ren);

	m_VertexCount = vcount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	Release();

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}



	if (!error.empty())

	m_pTextureView = NULL;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

			switch (e.key.keysym.sym)

	m_pPixelShader = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		{



	m_VertexCount = vcount;

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_DOWN,



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	m_IndexCount = 0;

	std::string inputfile = "test.obj";

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 projection;

	ConstantLight    pntLight; //点光源

	cbDesc.CPUAccessFlags = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&m_pDevice,

		SDL_RenderPresent(ren);

	}

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//vector<WORD> index_t;

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	//ピクセルシェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

{







struct ConstantMaterial {

				vertex.push_back(vertex_tmp);

	D3D11_SUBRESOURCE_DATA vrData;

			}

	for (const auto& shape : shapes)

	txDesc.SampleDesc.Count = 1;

		//User presses a key

			}

	}

	{

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	//インデックスバッファ作成





	::ZeroMemory(&scDesc, sizeof(scDesc));

			// Loop over vertices in the face.

		SDL_RenderCopy(ren, tex, NULL, NULL);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pInputLayout);



	}

struct ConstantLightBuffer {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	CRect                rect;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		//User presses a key

	//vector<WORD> index_t;

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	D3D_FEATURE_LEVEL level;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))

	//頂点バッファ作成

	//Clean up our objects and quit

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vector<WORD> indexList;

	m_IndexCount = icount;

		return hr;

	UINT strides = sizeof(Vertex);



	m_Viewport.TopLeftX = 0;

	UINT flags = 0;

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	D3D11_BUFFER_DESC ibDesc;

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_Viewport.TopLeftX = 0;

	Release();

	UINT flags = 0;

			}

	SDL_DestroyWindow(win);

	}

	return;

	m_IndexCount = 0;

	m_pSwapChain->Present(0, 0);



		cout << "SDL_INIT_ERROR" << endl;





#endif



	SAFE_RELEASE(m_pDepthStencilView);

{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	float    nearZ = 0.1f;



	bool ret = tinyobj::LoadObj(

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			case SDLK_UP:

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

#define TINYOBJLOADER_IMPLEMENTATION

	{

		SDL_RenderClear(ren);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	dsDesc.Texture2D.MipSlice = 0;

		&shapes,









		return hr;

		if (e.type == SDL_QUIT)

				tinyobj::real_t tx =

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

int SEGMENT = 36;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD* pIList = new WORD[icount];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.Width = rect.Width();





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Event e;



	m_Viewport.TopLeftX = 0;

		}



		pIList[j] = indexList[j];



	D3D11_BUFFER_DESC vbDesc;

		cout << "SDL_INIT_ERROR" << endl;

	Release();

		if (e.type == SDL_QUIT)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.pSysMem = &pIList[0];

	SDL_Event e;

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.Windowed = TRUE;

	D3D11_BUFFER_DESC vbDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				indexlist.push_back(idx.vertex_index);



	D3D11_BUFFER_DESC cbDesc;



	ibDesc.StructureByteStride = 0;

		{







	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	::GetClientRect(hwnd, &rect);

			default:

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t ty =



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.SampleDesc.Quality = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_DestroyWindow(win);



	float    nearZ = 0.1f;

	SDL_Event e;

				WORD index = idx.vertex_index;

	//ビューポート設定

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		pVList[i] = vertexlist[i];

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				vertex.push_back(vertex_tmp);

	Release();

	::GetClientRect(hwnd, &rect);

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&m_pSwapChain,



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



};

	if (FAILED(hr))



	D3D11_BUFFER_DESC ibDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_DestroyWindow(win);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		1,

	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		D3D11_SDK_VERSION,

		{

			}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



#include <SDL.h>



		return hr;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pPixelShader);

	UINT strides = sizeof(Vertex);

		SDL_Delay(1000);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ConstantLightBuffer clb;

		SDL_Delay(1000);



	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			// Loop over vertices in the face.

	//vector<WORD> index_t;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vrData.SysMemSlicePitch = 0;

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		pLevels,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pDepthStencilView = NULL;

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	tinyobj::ObjReaderConfig reader_config;

	m_pMatrixBuffer = NULL;





	if (!error.empty())



	enum KeyPressSurfaces

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			for (size_t v = 0; v < num_vertices; v++)



	}

	scDesc.Windowed = TRUE;

			{

{

			// Loop over vertices in the face.

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

	SDL_FreeSurface(suf);

		// Loop over faces(polygon)

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.Width = (FLOAT)rect.Width();

		NULL,

	if (FAILED(hr))

	}

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			break;

}



	if (FAILED(hr))



	if (!error.empty())



	std::string imagePath = "hello.bmp";

void CD3DTest::Render()

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点シェーダー生成

	{

		NULL,

		}

#endif

	UINT offsets = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);



	txDesc.Width = rect.Width();

				WORD index = idx.vertex_index;

	}



		m_pImmediateContext->ClearState();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_IndexCount = icount;

	cbDesc.CPUAccessFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_Viewport.TopLeftX = 0;

CD3DTest::CD3DTest()



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pDevice = NULL;

	m_pLightBuffer = NULL;

	m_pDepthStencilTexture = NULL;

struct ConstantMaterial {

				tinyobj::real_t tx =



	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		pLevels,

		cout << "SDL_INIT_ERROR" << endl;

	}

	{

	}



	m_IndexCount = 0;

}

				// access to vertex

	m_Viewport.Height = (FLOAT)rect.Height();



CD3DTest::~CD3DTest()



	}

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_RIGHT,

		if (!ret)

	delete[] pIList;

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	{

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		SDL_RenderClear(ren);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		{

		&attrib,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Release()

	XMFLOAT4 ambient;           //環境(r,g,b)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_pLightBuffer = NULL;

				break;

	cbDesc.MiscFlags = 0;

	SDL_DestroyWindow(win);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		if (!reader.Error().empty())

 * Lesson 1: Hello World!



		R"(cube.obj)");

	if (FAILED(hr))

{

	}



{

		&m_pSwapChain,

	tinyobj::attrib_t attrib;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ZeroMemory(&txDesc, sizeof(txDesc));

	}





#include <SDL.h>

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			index_offset += fv;





	m_Viewport.MaxDepth = 1.0f;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (size_t s = 0; s < shapes.size(); s++)

		pLevels,

		KEY_PRESS_SURFACE_TOTAL

	tinyobj::ObjReaderConfig reader_config;

	txDesc.Height = rect.Height();

				tinyobj::real_t ty =

}
				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += fv;





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SDL_Event e;

 */

	ConstantMaterial material; //物体の質感

	m_pPixelShader = NULL;

	SDL_Event e;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	for (size_t s = 0; s < shapes.size(); s++)

{



	}*/

				WORD index = idx.vertex_index;

		return hr;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

using std::cout; using std::endl;

		&level,

struct ConstantMaterial {

		{

	m_pDepthStencilView = NULL;

	ConstantMatrixBuffer cmb;

		}

	SAFE_RELEASE(m_pSampler);

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.MiscFlags = 0;

	if (!reader.Warning().empty())

	UINT strides = sizeof(Vertex);

	//vector<Vertex> vertex_t;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.Warning().empty())

		delete[] pVList;

	auto& shapes = reader.GetShapes();





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 specular;          //反射(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			case SDLK_UP:

#endif

	//深度ステンシルバッファ作成

		return hr;

		delete[] pIList;

		{

	}

	vector<Vertex> vertexlist;

	return 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	delete[] pIList;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pTexture = NULL;

};

	m_pDepthStencilTexture = NULL;

		{

	//定数バッファ作成





	for (size_t s = 0; s < shapes.size(); s++)

		D3D11_SDK_VERSION,

	{

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&shapes,

	scDesc.BufferDesc.Width = rect.Width();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	auto& shapes = reader.GetShapes();

	//Key press surfaces constants

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			{

	m_Viewport.MaxDepth = 1.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);

};

				indexlist.push_back(idx.vertex_index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pIndexBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4X4 projection;

	m_Viewport.TopLeftY = 0;



	SAFE_RELEASE(m_pSampler);

	ibDesc.MiscFlags = 0;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pPixelShader);



	ibDesc.CPUAccessFlags = 0;

	{

		if (!ret)

				WORD index = idx.vertex_index;

		return hr;

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//深度ステンシルバッファ作成

		SDL_RenderPresent(ren);

				// access to vertex

	enum KeyPressSurfaces



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 ambient;           //環境(r,g,b)

	std::string inputfile = "test.obj";

	m_Viewport.Height = (FLOAT)rect.Height();

		exit(1);

	//深度ステンシルバッファ作成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				break;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pIndexBuffer);

		NULL,

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pRenderTargetView);

		R"(cube.obj)");

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

void CD3DTest::Release()

{



				tinyobj::real_t ty =



	UINT flags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);







		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	Release();

	SAFE_RELEASE(m_pInputLayout);

		&m_pImmediateContext);





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pSampler = NULL;

	m_pMatrixBuffer = NULL;

	{

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

struct ConstantMaterial {

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&materials,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ID3D11Texture2D* pBackBuffer;

	{

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



int SEGMENT = 36;

	m_Angle += XMConvertToRadians(1.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	m_IndexCount = 0;

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pMatrixBuffer = NULL;



		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		}



	txDesc.MiscFlags = 0;



{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	/*

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		&error,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	auto& materials = reader.GetMaterials();

int main(int, char**)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		m_pImmediateContext->ClearState();

		&materials,

	m_pPixelShader = NULL;

	SDL_DestroyTexture(tex);

	if (!error.empty())

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

		}

#include <iostream>



{

	//深度ステンシルバッファ作成



}
	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;





	SDL_Quit();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*

	if (!reader.ParseFromFile(inputfile, reader_config))



			}

				break;

	m_pDepthStencilTexture = NULL;

}

	XMFLOAT4 pos;               //座標(x,y,z)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantMatrixBuffer {

	vbDesc.StructureByteStride = 0;

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pSwapChain);

	enum KeyPressSurfaces

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.MinDepth = 0.0f;

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

			case SDLK_LEFT:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	pBackBuffer->Release();

			}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	vector<WORD> indexList;

			exit(1);

	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();



		{

		else if (e.type == SDL_KEYDOWN)

	SDL_FreeSurface(suf);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Create Index

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				indexlist.push_back(idx.vertex_index);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

 * Lesson 1: Hello World!

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		//User presses a key

#include <iostream>

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//Clean up our objects and quit

 * Lesson 1: Hello World!







			case SDLK_RIGHT:



void CD3DTest::Release()

		return hr;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	auto& materials = reader.GetMaterials();

			int num_vertices = shape.mesh.num_face_vertices[f];











	reader_config.mtl_search_path = "./"; // Path to material files



	//ビューポート設定



		SDL_Delay(1000);

	return 0;

	pBackBuffer->Release();

	UINT flags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 view;



	SDL_DestroyWindow(win);



		&error,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Event e;

		if (!ret)

		{

	ConstantMaterial material; //物体の質感

				WORD index = idx.vertex_index;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			default:

		&m_pImmediateContext);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	}

	txDesc.SampleDesc.Count = 1;

			for (size_t v = 0; v < num_vertices; v++)

}

			exit(1);





}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

		return hr;

int main(int, char**)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	UINT flags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		}



		R"(cube.obj)");



		// Loop over faces(polygon)

	irData.pSysMem = &pIList[0];

	vbDesc.StructureByteStride = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



				tinyobj::real_t ty =

		}



		return hr;



	vector<Vertex> vertexlist;

	if (FAILED(hr))

	//頂点シェーダー生成



	std::string inputfile = "test.obj";

	XMFLOAT4 pos;               //座標(x,y,z)



		if (!ret)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



int SEGMENT = 36;



				break;

	std::string error;

	HRESULT              hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	return hr;



	//頂点シェーダー生成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	vbDesc.MiscFlags = 0;

struct ConstantLightBuffer {

		return hr;

		cout << "SDL_INIT_ERROR" << endl;



	XMFLOAT4X4 view;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		exit(1);





}

void CD3DTest::Release()

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		if (!reader.Error().empty())



	return 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pSwapChain);

	m_Viewport.Width = (FLOAT)rect.Width();

	if (!reader.Warning().empty())

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#include <iostream>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	txDesc.SampleDesc.Quality = 0;

{



	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				// access to vertex

	XMFLOAT4X4 projection;

		pIList[j] = indexList[j];

		size_t index_offset = 0;



	scDesc.BufferDesc.Width = rect.Width();



CD3DTest::CD3DTest()

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Count = 1;

}

		return hr;

	if (FAILED(hr))



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))



	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);



	scDesc.Windowed = TRUE;

	WORD   icount = indexList.size();

		return hr;

	// Loop over shapes

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

#include <SDL.h>

	SAFE_RELEASE(m_pRenderTargetView);



	bool ret = tinyobj::LoadObj(

	bool ret = tinyobj::LoadObj(

		&scDesc,

{

		return hr;

	txDesc.Height = rect.Height();



	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return;

		return hr;



		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;



		return hr;



			{

		&attrib,

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ConstantMatrixBuffer cmb;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

	SAFE_RELEASE(m_pTexture);

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext = NULL;



	scDesc.OutputWindow = hwnd;



	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pSwapChain->Present(0, 0);

			{

	m_pImmediateContext = NULL;

		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}
	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantLight {

{

	scDesc.BufferDesc.Width = rect.Width();

{



#include "DirectXManager.h"

	//Clean up our objects and quit

	ConstantMatrixBuffer cmb;

	{

	SDL_DestroyTexture(tex);

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 ambient;           //環境(r,g,b)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//ビューポート設定

	txDesc.SampleDesc.Count = 1;

	auto& shapes = reader.GetShapes();

		//User presses a key

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT strides = sizeof(Vertex);

			{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.OutputWindow = hwnd;

		return hr;

		m_pImmediateContext->ClearState();

	WORD* pIList = new WORD[icount];

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&scDesc,





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::vector<tinyobj::material_t> materials;

	scDesc.BufferDesc.Height = rect.Height();

		{

	}

	m_IndexCount = 0;

	SDL_FreeSurface(suf);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (FAILED(hr))

	{







	SDL_Quit();

	{

	SDL_FreeSurface(suf);



			case SDLK_UP:

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);



		1,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.MinDepth = 0.0f;

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pTexture);

	for (int j = 0; j < icount; j++)

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	m_pTexture = NULL;

		SDL_RenderClear(ren);

	vbDesc.CPUAccessFlags = 0;



struct ConstantLight {

	m_pRenderTargetView = NULL;



	SAFE_RELEASE(m_pDepthStencilView);



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				WORD index = idx.vertex_index;

		R"(cube.obj)");

		{

			}



		if (e.type == SDL_QUIT)



	m_pImmediateContext = NULL;



	m_Viewport.TopLeftX = 0;

		SDL_RenderPresent(ren);

};

				tinyobj::real_t ty =



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}







	if (FAILED(hr))



			break;

	vector<Vertex> vertexlist;



	SAFE_RELEASE(m_pSwapChain);

				// access to vertex

	SAFE_RELEASE(m_pDevice);

	std::vector<tinyobj::shape_t> shapes;

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	for (const auto& shape : shapes)



 * Lesson 1: Hello World!

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&error,

		return hr;

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				// access to vertex



		&m_pDevice,

	SDL_Event e;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyWindow(win);

	SDL_FreeSurface(suf);

	SAFE_RELEASE(m_pSwapChain);

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pPixelShader);

	pBackBuffer->Release();



	ibDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



int main(int, char**)



	m_pTextureView = NULL;



};

	m_pDepthStencilView = NULL;

	//vector<WORD> index_t;

	txDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < 3; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_RIGHT,

	float    nearZ = 0.1f;

		&error,

	{

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		R"(cube.obj)");

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pSwapChain);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include <iostream>

	//テクスチャ読み込み

	};



			case SDLK_LEFT:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	/*

	tinyobj::ObjReader reader;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//定数バッファ作成

	//Key press surfaces constants

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC ibDesc;

	auto& materials = reader.GetMaterials();

		}

	m_pImmediateContext = NULL;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4 ambient;           //環境(r,g,b)





		SDL_RenderPresent(ren);



		&m_pSwapChain,

				indexlist.push_back(index);

				// access to vertex

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



 * Lesson 1: Hello World!

		R"(cube.obj)");

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	ibDesc.MiscFlags = 0;

	}*/



int main(int, char**)

			for (size_t v = 0; v < num_vertices; v++)

		R"(cube.obj)");

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	XMFLOAT4 specular;          //反射(r,g,b)

	vrData.SysMemPitch = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;

		&attrib,

			case SDLK_LEFT:



	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		}



	//Clean up our objects and quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

				WORD index = idx.vertex_index;



		&attrib,



	scDesc.OutputWindow = hwnd;

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pMatrixBuffer = NULL;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		// Loop over faces(polygon)

		cout << "SDL_INIT_ERROR" << endl;

#ifdef _DEBUG

	for (int j = 0; j < icount; j++)

	XMFLOAT4X4 world;

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		m_pImmediateContext->ClearState();





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SDL_DestroyTexture(tex);

	irData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	cbDesc.MiscFlags = 0;



		&error,

	ConstantLight    pntLight; //点光源





				vertex.push_back(vertex_tmp);







{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_LEFT:

	txDesc.ArraySize = 1;



	}



		SDL_RenderPresent(ren);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4X4 view;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				break;

	pBackBuffer->Release();

	XMFLOAT4 pos;               //座標(x,y,z)

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyRenderer(ren);

	vrData.pSysMem = &pVList[0];

	std::vector<tinyobj::material_t> materials;



}
				tinyobj::real_t ty =

	m_pInputLayout = NULL;

	//インデックスバッファ作成

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

		size_t index_offset = 0;

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



}

		{



void CD3DTest::Release()





	cbDesc.StructureByteStride = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				break;

	{



	XMStoreFloat4(&clb.ambient, lightAmbient);



	XMStoreFloat4(&clb.ambient, lightAmbient);





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_UP:

	SDL_FreeSurface(suf);

	m_Viewport.MaxDepth = 1.0f;

		pLevels,



	txDesc.SampleDesc.Count = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyWindow(win);

	dsDesc.Texture2D.MipSlice = 0;



		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	return;

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	for (size_t s = 0; s < shapes.size(); s++)

				break;





	//ビューポート設定

	//vector<WORD> index_t;



		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.ambient, lightAmbient);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	m_pInputLayout = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		flags,

	D3D11_SAMPLER_DESC smpDesc;

	{



	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	{

	D3D_FEATURE_LEVEL level;

}

	bool ret = tinyobj::LoadObj(

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			//Select surfaces based on key press



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);







	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		1,

	}

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.MiscFlags = 0;



	if (!error.empty())

	{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	delete[] pIList;

		NULL,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		flags,

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_VertexCount = vcount;

		&scDesc,



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int i = 0; i < vcount; i++)

				break;

	//Clean up our objects and quit

}



/*



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				indexlist.push_back(index);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	for (int i = 0; i < 3; i++)

int SEGMENT = 36;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	irData.SysMemPitch = 0;

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	m_pMatrixBuffer = NULL;

void CD3DTest::Render()

	m_pVertexBuffer = NULL;

	txDesc.Height = rect.Height();

	ConstantMaterial material; //物体の質感

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_Delay(1000);

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	{

		&shapes,

		KEY_PRESS_SURFACE_LEFT,

		pIList[j] = indexList[j];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

		pIList[j] = indexList[j];

	int     vcount = vertexlist.size();

	txDesc.MiscFlags = 0;

		&m_pSwapChain,

	//頂点バッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_LEFT,



			switch (e.key.keysym.sym)

	HRESULT              hr;

	vector<WORD> indexList;

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.Windowed = TRUE;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				vertex.push_back(vertex_tmp);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//vector<WORD> index_t;

	delete[] pVList;

		m_pImmediateContext->ClearState();



}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx =

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	if (FAILED(hr))

	m_pLightBuffer = NULL;

		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			for (size_t v = 0; v < num_vertices; v++)

	Vertex* pVList = new Vertex[vcount];

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

		&error,

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	if (!error.empty())



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//vector<WORD> index_t;



	D3D11_BUFFER_DESC ibDesc;

	return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	scDesc.SampleDesc.Count = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))



	txDesc.Height = rect.Height();

	//Key press surfaces constants



{



			for (size_t v = 0; v < num_vertices; v++)



	XMStoreFloat4(&clb.material.specular, materialSpecular);



#include <SDL.h>

	float    fov = XMConvertToRadians(20.0f);

	cbDesc.StructureByteStride = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		exit(1);

		&scDesc,

		delete[] pIList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pImmediateContext);

	vrData.pSysMem = &pVList[0];



	SDL_DestroyWindow(win);

	UINT offsets = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		}

	vbDesc.MiscFlags = 0;

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	enum KeyPressSurfaces

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.MiscFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

	D3D11_BUFFER_DESC ibDesc;

	HRESULT              hr;

		{

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

	std::vector<tinyobj::shape_t> shapes;

	//頂点シェーダー生成

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





		size_t index_offset = 0;  // インデントのオフセット



	SAFE_RELEASE(m_pTexture);

	}



	//Clean up our objects and quit

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);



	if (FAILED(hr))

}
			case SDLK_UP:

		SDL_Delay(1000);



	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pPixelShader);

	}

	//テクスチャ読み込み

			case SDLK_DOWN:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantMaterial material; //物体の質感

	LoadObj(vertexlist, indexList);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



int SEGMENT = 36;

	}

		{

	bool ret = tinyobj::LoadObj(

	XMFLOAT4X4 projection;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_FreeSurface(bmp);

	m_Angle += XMConvertToRadians(1.0f);



		//User requests quit

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pIndexBuffer);

		m_pImmediateContext->ClearState();

	}



		&attrib,

		return hr;



	scDesc.OutputWindow = hwnd;

	/*

	UINT flags = 0;

	if (FAILED(hr))

		SDL_RenderClear(ren);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

		SDL_Delay(1000);

}

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D11_SDK_VERSION,



		}

	{

	ibDesc.MiscFlags = 0;

	m_pSwapChain = NULL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				break;



	m_pVertexBuffer = NULL;



		SDL_RenderPresent(ren);





	std::string inputfile = "test.obj";

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.CPUAccessFlags = 0;

int main(int, char**)

	if (FAILED(hr))

	{

				break;

	if (FAILED(hr))

		return hr;



HRESULT CD3DTest::Create(HWND hwnd)





	//テクスチャ読み込み

		}

		pLevels,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{



	if (FAILED(hr))

				indexlist.push_back(index);

#include <SDL.h>

	for (int i = 0; i < 3; i++)

	SDL_DestroyTexture(tex);

	//インデックスバッファ作成

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点シェーダー生成



	XMFLOAT4 specular;          //反射(r,g,b)

	//深度ステンシルバッファ作成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_RIGHT:

	return 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_DOWN,

	};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{



				break;

	m_pDepthStencilTexture = NULL;







	WORD* pIList = new WORD[icount];

		SDL_RenderPresent(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Quit();

			}

	D3D11_SUBRESOURCE_DATA vrData;



struct ConstantLightBuffer {



using std::cout; using std::endl;

			// Loop over vertices in the face.



				vertex.push_back(vertex_tmp);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{

	dsDesc.Texture2D.MipSlice = 0;



#include <iostream>

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.TopLeftX = 0;

	m_pVertexBuffer = NULL;

	SDL_Quit();

	//テクスチャ読み込み

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	}

	std::string error;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDevice);







	SDL_FreeSurface(bmp);

			}



	m_Viewport.MinDepth = 0.0f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vrData.SysMemSlicePitch = 0;

	m_pTextureView = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ConstantLightBuffer clb;

	scDesc.BufferCount = 1;

	UINT strides = sizeof(Vertex);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成



	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pPixelShader = NULL;

	dsDesc.Texture2D.MipSlice = 0;



	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pSampler);

/*

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MinDepth = 0.0f;

			break;



	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pRenderTargetView);

#include <SDL.h>

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;



	CRect                rect;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

	CRect                rect;



};

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	CRect                rect;

		&scDesc,





	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	return 0;

			default:



struct ConstantLightBuffer {

CD3DTest::~CD3DTest()

	{



			break;

	for (int i = 0; i < vcount; i++)

		&attrib,

	SAFE_RELEASE(m_pDepthStencilView);

int main(int, char**)



		&m_pDevice,

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	ZeroMemory(&txDesc, sizeof(txDesc));

	//First we need to start up SDL, and make sure it went ok

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pVertexBuffer);



		SDL_Delay(1000);

void CD3DTest::Render()



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		exit(1);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	UINT strides = sizeof(Vertex);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_UP:

		KEY_PRESS_SURFACE_DOWN,

	m_pLightBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.MiscFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	ConstantMaterial material; //物体の質感

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}



	}

	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ibDesc.CPUAccessFlags = 0;

		return hr;

	}

{

 */

			// Loop over vertices in the face.

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.eyePos, eye);

				break;

	m_pVertexBuffer = NULL;

	/*

	SAFE_RELEASE(m_pPixelShader);

	m_VertexCount = 0;

	//Key press surfaces constants

int main(int, char**)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	enum KeyPressSurfaces

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



}



		return hr;

		pVList[i] = vertexlist[i];

				vertex.push_back(vertex_tmp);



	D3D11_BUFFER_DESC vbDesc;

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

			{

	int     vcount = vertexlist.size();

		return hr;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_Delay(1000);

			}

	std::vector<tinyobj::shape_t> shapes;

	}

	irData.pSysMem = &pIList[0];

	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.TopLeftX = 0;

}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_FreeSurface(bmp);

	//First we need to start up SDL, and make sure it went ok



	m_pSwapChain->Present(0, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;



		return hr;

		{

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.MiscFlags = 0;

	return 0;

	UINT offsets = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_RIGHT,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 world;



	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_FreeSurface(suf);

			exit(1);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vrData.pSysMem = &pVList[0];

	txDesc.Width = rect.Width();

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

{

	cbDesc.StructureByteStride = 0;

	}

	{

int main(int, char**)

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	bool ret = tinyobj::LoadObj(

int SEGMENT = 36;

	SDL_DestroyRenderer(ren);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ibDesc.CPUAccessFlags = 0;

	std::string inputfile = "test.obj";

	SDL_Quit();

	}

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			for (size_t v = 0; v < fv; v++)

int main(int, char**)

	//Vertex* pVList = new Vertex[vcount];

	return 0;



#include "DirectXManager.h"



HRESULT CD3DTest::Create(HWND hwnd)



			int num_vertices = shape.mesh.num_face_vertices[f];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pTexture);

		&m_pDevice,





	m_pIndexBuffer = NULL;

				break;



	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

		if (e.type == SDL_QUIT)



	D3D11_BUFFER_DESC ibDesc;

				break;

		KEY_PRESS_SURFACE_DEFAULT,

	m_pTexture = NULL;

}
	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#endif

	vrData.SysMemSlicePitch = 0;

CD3DTest::~CD3DTest()

	tinyobj::ObjReaderConfig reader_config;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_DestroyTexture(tex);

	XMFLOAT4 pos;               //座標(x,y,z)

	return 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4X4 projection;

	SDL_Quit();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	ibDesc.MiscFlags = 0;

	irData.SysMemSlicePitch = 0;

		if (!reader.Error().empty())



HRESULT CD3DTest::Create(HWND hwnd)

	ConstantLight    pntLight; //点光源



		//User requests quit

	::ZeroMemory(&scDesc, sizeof(scDesc));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	UINT offsets = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		size_t index_offset = 0;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



}

	scDesc.BufferDesc.Height = rect.Height();

	int     vcount = vertexlist.size();



}







const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.SampleDesc.Count = 1;

	irData.pSysMem = &pIList[0];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}



	txDesc.SampleDesc.Quality = 0;

	m_pIndexBuffer = NULL;

		return 1;

	irData.SysMemSlicePitch = 0;

{

	SAFE_RELEASE(m_pSwapChain);

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyTexture(tex);

	SDL_Event e;

	vbDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

			case SDLK_LEFT:

	SDL_FreeSurface(bmp);





	vrData.SysMemPitch = 0;

	vrData.SysMemSlicePitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				// access to vertex

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	bool ret = tinyobj::LoadObj(

{

	}

			case SDLK_LEFT:



	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_IndexCount = icount;





	Release();

	}

	if (FAILED(hr))

	if (FAILED(hr))

		}

struct ConstantMaterial {

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pDevice);



	//Create Index

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4X4 view;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	tinyobj::ObjReaderConfig reader_config;

	cbDesc.StructureByteStride = 0;

	for (int j = 0; j < icount; j++)

struct ConstantMaterial {

		KEY_PRESS_SURFACE_RIGHT,





	D3D11_BUFFER_DESC ibDesc;



				// access to vertex





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}



	SAFE_RELEASE(m_pIndexBuffer);

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&m_pSwapChain,

	XMFLOAT4X4 view;

 */

	{

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pPixelShader);

				// access to vertex

{

	{



		pVList[i] = vertexlist[i];

}

	WORD   icount = indexList.size();



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pDepthStencilView = NULL;

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		if (e.type == SDL_QUIT)



	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

using std::cout; using std::endl;

		return hr;

		delete[] pIList;

	SDL_DestroyRenderer(ren);

	tinyobj::attrib_t attrib;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

CD3DTest::CD3DTest()

void CD3DTest::Release()

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

#include "DirectXManager.h"



				break;

	//Clean up our objects and quit

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

		return hr;



		return hr;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SUBRESOURCE_DATA irData;

		KEY_PRESS_SURFACE_TOTAL



	};

	//Key press surfaces constants

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		R"(cube.obj)");

			//Select surfaces based on key press

		&materials,

	{

	SDL_DestroyTexture(tex);

				// access to vertex

	m_pInputLayout = NULL;



		1,

};

	//インデックスバッファ作成

	m_pDevice = NULL;

	m_Viewport.TopLeftX = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

}



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	tinyobj::attrib_t attrib;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSwapChain = NULL;

		SDL_Delay(1000);

	//vector<Vertex> vertex_t;

	bool ret = tinyobj::LoadObj(

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			}

 */

	m_Angle += XMConvertToRadians(1.0f);

			case SDLK_LEFT:

{

	ConstantLightBuffer clb;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_VertexCount = 0;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&attrib,

int main(int, char**)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return 0;



	SAFE_RELEASE(m_pSampler);

	{







	SAFE_RELEASE(m_pSwapChain);

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	return 0;



	m_pTextureView = NULL;

	SAFE_RELEASE(m_pDevice);

	float    fov = XMConvertToRadians(20.0f);

		return hr;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		{

	}

	m_pRenderTargetView = NULL;

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



	delete[] pVList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		NULL,

			case SDLK_UP:

		delete[] pIList;



	D3D11_SAMPLER_DESC smpDesc;

	vector<WORD> indexList;

		KEY_PRESS_SURFACE_TOTAL

	m_pSampler = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

#endif

 */

	//vector<Vertex> vertex_t;

	//頂点シェーダー生成

	pBackBuffer->Release();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_TEXTURE2D_DESC txDesc;

	LoadObj(vertexlist, indexList);

	};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	}

		KEY_PRESS_SURFACE_DOWN,



	XMStoreFloat4(&clb.eyePos, eye);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	CRect                rect;

	if (FAILED(hr))

}



	//頂点シェーダー生成

	if (FAILED(hr))

	//ビューポート設定

		&error,

	int     vcount = vertexlist.size();



	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4         eyePos;   //視点座標



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

void CD3DTest::Release()

		return hr;

			}

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	WORD   icount = indexList.size();

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		return hr;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	return 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





};



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			{









	}

	return 0;

	SDL_DestroyWindow(win);

	tinyobj::attrib_t attrib;

	m_pImmediateContext = NULL;



	SAFE_RELEASE(m_pDepthStencilView);

				break;

	std::vector<tinyobj::material_t> materials;



			{

	delete[] pVList;

			}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();



			//Select surfaces based on key press

}

		&scDesc,

	D3D11_SUBRESOURCE_DATA irData;

	enum KeyPressSurfaces

int main(int, char**)

	m_pPixelShader = NULL;

	}

		}

		SDL_RenderClear(ren);

				break;

		return hr;

	if (FAILED(hr))

		SDL_Delay(1000);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.StructureByteStride = 0;

		&error,

	SDL_DestroyRenderer(ren);

	bool ret = tinyobj::LoadObj(



		}

				vertex.push_back(vertex_tmp);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t tx =



}

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

				indexlist.push_back(index);



	ID3D11Texture2D* pBackBuffer;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	}



	for (const auto& shape : shapes)

	}

	enum KeyPressSurfaces



	D3D11_SAMPLER_DESC smpDesc;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	return 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





CD3DTest::~CD3DTest()

	auto& attrib = reader.GetAttrib();

	//Clean up our objects and quit

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.CPUAccessFlags = 0;

	{

	ConstantMaterial material; //物体の質感

	DXGI_SWAP_CHAIN_DESC scDesc;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}*/

	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vrData.SysMemSlicePitch = 0;



	for (const auto& shape : shapes)

	if (FAILED(hr))

struct ConstantLight {

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

{

	m_pDepthStencilView = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.SampleDesc.Quality = 0;

			case SDLK_RIGHT:

		m_pImmediateContext->ClearState();



		}



	{

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pVertexShader);

	ConstantLight    pntLight; //点光源





	m_IndexCount = icount;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}


		SDL_RenderCopy(ren, tex, NULL, NULL);

	//頂点シェーダー生成

	vbDesc.StructureByteStride = 0;

			index_offset += num_vertices;

			for (size_t v = 0; v < num_vertices; v++)

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SAFE_RELEASE(m_pDepthStencilTexture);

	};

				WORD index = idx.vertex_index;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	CRect                rect;



	delete[] pIList;

		SDL_RenderPresent(ren);

 * Lesson 1: Hello World!





	ConstantLightBuffer clb;

	std::vector<tinyobj::shape_t> shapes;

{

	m_Viewport.TopLeftX = 0;

	//テクスチャ読み込み







		KEY_PRESS_SURFACE_RIGHT,

	vrData.pSysMem = &pVList[0];

}

	SAFE_RELEASE(m_pTexture);

#ifdef _DEBUG

			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.OutputWindow = hwnd;

	vrData.pSysMem = &pVList[0];



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	//First we need to start up SDL, and make sure it went ok

	::GetClientRect(hwnd, &rect);

		pLevels,

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







		delete[] pIList;





}



				break;

}

	//Key press surfaces constants



		&m_pImmediateContext);

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pPixelShader);

	txDesc.MiscFlags = 0;

		R"(cube.obj)");

{

	cbDesc.CPUAccessFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pRenderTargetView = NULL;

		return hr;

	cbDesc.MiscFlags = 0;

		return hr;



	}

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pPixelShader);

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pVertexShader);



	//深度ステンシルバッファ作成

	m_pRenderTargetView = NULL;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	SAFE_RELEASE(m_pSampler);



	tinyobj::attrib_t attrib;



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//Clean up our objects and quit

			case SDLK_RIGHT:

 * Lesson 1: Hello World!

			case SDLK_LEFT:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_Viewport.MinDepth = 0.0f;

 */





#include <SDL.h>

		NULL,

	//テクスチャ読み込み

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

struct ConstantMaterial {



	//Vertex* pVList = new Vertex[vcount];

	txDesc.ArraySize = 1;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}

	}

	}

int main(int, char**)

	ConstantLight    pntLight; //点光源

HRESULT CD3DTest::Create(HWND hwnd)



{



	if (!reader.Warning().empty())

		return hr;



	m_IndexCount = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		KEY_PRESS_SURFACE_TOTAL

		pVList[i] = vertexlist[i];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

struct ConstantLightBuffer {



			default:

	{

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t ty =

	UINT strides = sizeof(Vertex);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_Angle += XMConvertToRadians(1.0f);

	bool ret = tinyobj::LoadObj(

		SDL_RenderClear(ren);



	vector<Vertex> vertexlist;





	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pSwapChain);

		&level,

#endif

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

int main(int, char**)

	if (FAILED(hr))

	{

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		return hr;

	D3D11_SUBRESOURCE_DATA vrData;



	m_pTexture = NULL;

	//ピクセルシェーダー生成

	txDesc.MiscFlags = 0;

				tinyobj::real_t ty =

		if (!ret)

	reader_config.mtl_search_path = "./"; // Path to material files



	m_VertexCount = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	CRect                rect;

			}

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pRenderTargetView);

	auto& attrib = reader.GetAttrib();

			case SDLK_RIGHT:

	D3D11_BUFFER_DESC cbDesc;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

int main(int, char**)



	vbDesc.StructureByteStride = 0;

	UINT offsets = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))



	m_pDevice = NULL;

	//頂点バッファ作成

	SDL_DestroyRenderer(ren);







	SDL_DestroyTexture(tex);

	ibDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

				WORD index = idx.vertex_index;

#include <SDL.h>



		pVList[i] = vertexlist[i];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		delete[] pVList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::CD3DTest()

	scDesc.SampleDesc.Count = 1;

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (size_t s = 0; s < shapes.size(); s++)



}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		{

	//インデックスバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

#include "DirectXManager.h"

 * Lesson 1: Hello World!

#include <iostream>

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_SAMPLER_DESC smpDesc;

	vrData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;



	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	}*/





		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ID3D11Texture2D* pBackBuffer;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//インデックスバッファ作成

		size_t index_offset = 0;  // インデントのオフセット







		return 1;

	auto& materials = reader.GetMaterials();

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyRenderer(ren);

		else if (e.type == SDL_KEYDOWN)

		//User presses a key

	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 view;

		&m_pSwapChain,

	for (int i = 0; i < 3; i++)

			}





 * Lesson 1: Hello World!

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	CRect                rect;

	{

	cbDesc.CPUAccessFlags = 0;

	{

{

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);


