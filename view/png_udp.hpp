	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pSampler);

{

	m_Viewport.Height = (FLOAT)rect.Height();

		if (!reader.Error().empty())

	XMStoreFloat4(&clb.eyePos, eye);

		flags,

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_VertexCount = vcount;

	SDL_DestroyTexture(tex);

			{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pTexture = NULL;

	vrData.pSysMem = &pVList[0];

		pLevels,

		&level,

 * Lesson 1: Hello World!

int SEGMENT = 36;

	}

}

		SDL_Delay(1000);

		return 1;

			index_offset += num_vertices;

	scDesc.SampleDesc.Count = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t ty =

	enum KeyPressSurfaces

	auto& materials = reader.GetMaterials();





	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pRenderTargetView);

			break;

	}

		SDL_Delay(1000);

	txDesc.SampleDesc.Count = 1;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

};

	m_pSampler = NULL;



		return hr;

	txDesc.SampleDesc.Quality = 0;

		flags,

	{





		//User requests quit

#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

	for (int j = 0; j < icount; j++)

#include <iostream>



	XMFLOAT4X4 projection;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





		SDL_Delay(1000);

			for (size_t v = 0; v < num_vertices; v++)



	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)







#include "DirectXManager.h"

	CRect                rect;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDevice = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//Key press surfaces constants





	XMStoreFloat4(&clb.material.specular, materialSpecular);

struct ConstantLightBuffer {



		if (e.type == SDL_QUIT)

	vbDesc.StructureByteStride = 0;



	ibDesc.StructureByteStride = 0;

			{

		cout << "SDL_INIT_ERROR" << endl;

		}

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//Key press surfaces constants

	m_VertexCount = vcount;

	XMFLOAT4 ambient;           //環境(r,g,b)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	/*

	cbDesc.StructureByteStride = 0;

			for (size_t v = 0; v < fv; v++)

}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	{

		delete[] pIList;

};

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.ParseFromFile(inputfile, reader_config))



	Release();

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		{



	tinyobj::ObjReader reader;

{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_RenderClear(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pMatrixBuffer);



	auto& shapes = reader.GetShapes();

	WORD   icount = indexList.size();

int main(int, char**)

		SDL_Delay(1000);





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	for (int j = 0; j < icount; j++)

	delete[] pVList;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	HRESULT              hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	tinyobj::attrib_t attrib;



		flags,

			index_offset += num_vertices;





	D3D11_BUFFER_DESC vbDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	if (!error.empty())

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

/*



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				// access to vertex

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#endif

	{

	m_pSampler = NULL;



	//深度ステンシルバッファ作成

	m_pPixelShader = NULL;

	return;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

		{

			}



	D3D11_BUFFER_DESC vbDesc;

	auto& materials = reader.GetMaterials();

	m_VertexCount = 0;

		{

		exit(1);

}

void CD3DTest::Render()

{

	SDL_DestroyTexture(tex);



	auto& attrib = reader.GetAttrib();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#include <SDL.h>

	m_pSwapChain->Present(0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vector<Vertex> vertexlist;

		{

	if (FAILED(hr))



int main(int, char**)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDevice);

{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

int main(int, char**)





	SDL_Quit();

	pBackBuffer->Release();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//Vertex* pVList = new Vertex[vcount];

	D3D11_BUFFER_DESC vbDesc;



		{

		KEY_PRESS_SURFACE_LEFT,





	}

		KEY_PRESS_SURFACE_LEFT,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		{





	ID3D11Texture2D* pBackBuffer;

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pSwapChain);

{

	/*

	hr = D3D11CreateDeviceAndSwapChain(NULL,







		{

	SAFE_RELEASE(m_pDevice);

struct ConstantLightBuffer {

	}

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	if (m_pImmediateContext)

	vrData.SysMemPitch = 0;

int SEGMENT = 36;

{

		&scDesc,

	//頂点バッファ作成

/*



	vbDesc.StructureByteStride = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.MiscFlags = 0;

	SDL_Quit();

	}



	cbDesc.MiscFlags = 0;



}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_Viewport.MinDepth = 0.0f;

	m_pMatrixBuffer = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



 */

{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pTextureView);

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderPresent(ren);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		delete[] pIList;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	while (SDL_PollEvent(&e) != 0)



}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

		flags,



{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ibDesc.CPUAccessFlags = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	Vertex* pVList = new Vertex[vcount];

		&attrib,

	//ピクセルシェーダー生成

		delete[] pIList;

	SDL_Event e;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&level,

struct ConstantMaterial {



	XMFLOAT4 pos;               //座標(x,y,z)



}

	XMFLOAT4 ambient;           //環境(r,g,b)



	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pDevice);









}

		pIList[j] = indexList[j];

#ifdef _DEBUG

	if (FAILED(hr))

	if (FAILED(hr))

#include <SDL.h>

			exit(1);

		// Loop over faces(polygon)

		KEY_PRESS_SURFACE_DOWN,

	bool ret = tinyobj::LoadObj(



	if (FAILED(hr))



	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	//Clean up our objects and quit

			exit(1);



	//深度ステンシルバッファ作成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Quit();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



};

		return hr;



	//Create Index

		NULL,

	SAFE_RELEASE(m_pInputLayout);

{

				vertex.push_back(vertex_tmp);

	SDL_Event e;

			}

	//vector<Vertex> vertex_t;

	scDesc.BufferCount = 1;

CD3DTest::CD3DTest()

	ConstantLight    pntLight; //点光源

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	scDesc.BufferDesc.Width = rect.Width();



				indexlist.push_back(index);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		size_t index_offset = 0;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pInputLayout);







	ConstantLightBuffer clb;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	irData.pSysMem = &pIList[0];

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	if (!reader.Warning().empty())

	DXGI_SWAP_CHAIN_DESC scDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		if (!reader.Error().empty())

		SDL_RenderCopy(ren, tex, NULL, NULL);





{

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

		if (!reader.Error().empty())

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//Create Index

		{

	ConstantMaterial material; //物体の質感

				break;

};



#endif

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_LEFT:

	while (SDL_PollEvent(&e) != 0)

		&error,

	D3D11_BUFFER_DESC vbDesc;

#include <SDL.h>

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (!reader.Warning().empty())

	std::string imagePath = "hello.bmp";

}

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//First we need to start up SDL, and make sure it went ok

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

		}



		pLevels,



{

	delete[] pIList;

	for (size_t s = 0; s < shapes.size(); s++)

	}



	txDesc.Usage = D3D11_USAGE_DEFAULT;

			{

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!reader.Warning().empty())

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

void CD3DTest::Render()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Event e;

	SDL_DestroyWindow(win);



	m_pIndexBuffer = NULL;

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_DEFAULT,



	vector<WORD> indexList;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;



	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);



	txDesc.Width = rect.Width();



	if (FAILED(hr))

	SDL_DestroyWindow(win);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//インデックスバッファ作成

				break;

		&m_pImmediateContext);

	cbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	UINT offsets = 0;





			index_offset += fv;

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.MipLevels = 1;

				indexlist.push_back(index);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

int SEGMENT = 36;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

void CD3DTest::Release()

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	tinyobj::ObjReader reader;

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_Angle += XMConvertToRadians(1.0f);

	/*

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



{

		return hr;

	SDL_DestroyTexture(tex);

	scDesc.OutputWindow = hwnd;

			case SDLK_DOWN:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Create Index

	XMFLOAT4 pos;               //座標(x,y,z)

	}



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pSwapChain);

struct ConstantLight {

		}

		return 1;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		//User requests quit

	SDL_Quit();



		KEY_PRESS_SURFACE_DOWN,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferDesc.Width = rect.Width();

	//Clean up our objects and quit

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vector<Vertex> vertexlist;

	if (!reader.Warning().empty())

	pBackBuffer->Release();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		size_t index_offset = 0;

	//Key press surfaces constants

		KEY_PRESS_SURFACE_DOWN,

		return 1;

	SDL_DestroyWindow(win);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



			case SDLK_LEFT:

	{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))



}

	txDesc.MipLevels = 1;

{

	enum KeyPressSurfaces

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&m_pDevice,

	txDesc.ArraySize = 1;





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return 1;

	if (FAILED(hr))

struct ConstantLight {

	//頂点レイアウト作成

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

		{



{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);







	m_pSwapChain->Present(0, 0);



	D3D11_TEXTURE2D_DESC txDesc;

	HRESULT              hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Angle += XMConvertToRadians(1.0f);

	vrData.SysMemSlicePitch = 0;



	scDesc.BufferDesc.Height = rect.Height();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&level,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

				indexlist.push_back(index);

int main(int, char**)

	if (FAILED(hr))



	vbDesc.MiscFlags = 0;

	/*

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				WORD index = idx.vertex_index;

		return hr;

	cbDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		m_pImmediateContext->ClearState();

		pVList[i] = vertexlist[i];

			case SDLK_DOWN:

	}



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pSwapChain);

			}

	scDesc.Windowed = TRUE;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	enum KeyPressSurfaces

	m_pInputLayout = NULL;

	//ビューポート設定

		if (!ret)

		KEY_PRESS_SURFACE_LEFT,

		&scDesc,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pDevice,

			{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::material_t> materials;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		//User requests quit

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		m_pImmediateContext->ClearState();

	//定数バッファ作成



{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

			{

	WORD* pIList = new WORD[icount];



	if (FAILED(hr))

struct ConstantLightBuffer {



	}

	tinyobj::ObjReaderConfig reader_config;



				vertex.push_back(vertex_tmp);

{

}

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!error.empty())

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	D3D11_SUBRESOURCE_DATA irData;

	return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	}

	XMFLOAT4X4 world;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_DEFAULT,

			for (size_t v = 0; v < fv; v++)

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		//User requests quit

			default:

};

	SAFE_RELEASE(m_pRenderTargetView);



	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

	txDesc.SampleDesc.Count = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_VertexCount = vcount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User requests quit

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		&error,



	ZeroMemory(&dsDesc, sizeof(dsDesc));

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	dsDesc.Texture2D.MipSlice = 0;

			{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			case SDLK_UP:

	{

		if (!reader.Error().empty())

	WORD   icount = indexList.size();

	scDesc.BufferDesc.Width = rect.Width();



		return hr;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t ty =

	ID3D11Texture2D* pBackBuffer;

	m_pPixelShader = NULL;



	{

	txDesc.ArraySize = 1;

	std::string error;

void CD3DTest::Release()

	//Clean up our objects and quit

		SDL_RenderClear(ren);

				tinyobj::real_t tx =

		pLevels,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	return 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

	vbDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

	m_pDepthStencilView = NULL;

		return hr;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;



	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pImmediateContext);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		if (!reader.Error().empty())

		return hr;

	auto& materials = reader.GetMaterials();



	}

	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//ピクセルシェーダー生成

		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>

		cout << "SDL_INIT_ERROR" << endl;





		KEY_PRESS_SURFACE_TOTAL

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.ArraySize = 1;

		}

	cbDesc.MiscFlags = 0;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexShader);

	{

int SEGMENT = 36;

	m_pDepthStencilView = NULL;

	int     vcount = vertexlist.size();

		size_t index_offset = 0;

	{

	D3D11_BUFFER_DESC vbDesc;



	//頂点バッファ作成

				vertex.push_back(vertex_tmp);

	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		&m_pSwapChain,

	{

	if (FAILED(hr))



	txDesc.SampleDesc.Quality = 0;

			}

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pVertexBuffer = NULL;

	vrData.pSysMem = &pVList[0];

	D3D_FEATURE_LEVEL level;

	scDesc.BufferCount = 1;

	};



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//ビューポート設定



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_RenderPresent(ren);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (const auto& shape : shapes)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pDepthStencilView);





	{

	m_pTexture = NULL;

	vbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;



	WORD* pIList = new WORD[icount];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		delete[] pVList;

	cbDesc.CPUAccessFlags = 0;

		1,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			default:



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;





{



		KEY_PRESS_SURFACE_DOWN,

	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_DOWN,

{



	ibDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	reader_config.mtl_search_path = "./"; // Path to material files

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;



	}

	m_pTexture = NULL;

				break;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 */

int SEGMENT = 36;

	m_IndexCount = icount;

		SDL_Delay(1000);

		if (!ret)

	// Loop over shapes



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	for (int i = 0; i < 3; i++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

}


	vrData.SysMemPitch = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Quit();

void CD3DTest::Release()

	m_IndexCount = icount;



	txDesc.Height = rect.Height();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

	::GetClientRect(hwnd, &rect);

	::GetClientRect(hwnd, &rect);

		if (!ret)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.BufferDesc.Width = rect.Width();

		if (e.type == SDL_QUIT)

{

	m_pSwapChain = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

	SDL_DestroyRenderer(ren);

	vbDesc.MiscFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	CRect                rect;

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

struct ConstantMaterial {

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	delete[] pVList;

	ibDesc.StructureByteStride = 0;

	dsDesc.Texture2D.MipSlice = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

				vertex.push_back(vertex_tmp);

	m_Viewport.MaxDepth = 1.0f;



{

	//Clean up our objects and quit



}

	{

	//深度ステンシルバッファ作成

	SDL_Event e;



}

	//ピクセルシェーダー生成



				vertex.push_back(vertex_tmp);

	return 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (int i = 0; i < vcount; i++)

	D3D_FEATURE_LEVEL level;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				WORD index = idx.vertex_index;

		R"(cube.obj)");

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		NULL,



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ibDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	SDL_DestroyRenderer(ren);

		// Loop over faces(polygon)

	float    fov = XMConvertToRadians(20.0f);

};

		flags,

	m_pPixelShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantLight {

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{

}

	m_VertexCount = vcount;



}

	SDL_DestroyRenderer(ren);

	scDesc.SampleDesc.Quality = 0;

	{

		return 1;

	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		&scDesc,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);

	for (const auto& shape : shapes)



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyRenderer(ren);

		return hr;

		KEY_PRESS_SURFACE_UP,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

			for (size_t v = 0; v < num_vertices; v++)

	if (!error.empty())

	scDesc.BufferDesc.Height = rect.Height();

	for (int i = 0; i < vcount; i++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

	XMFLOAT4X4 view;

	{

		{



	//vector<WORD> index_t;

}
	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	m_Viewport.TopLeftX = 0;

	//Clean up our objects and quit

	SAFE_RELEASE(m_pSampler);

	cbDesc.CPUAccessFlags = 0;

	if (m_pImmediateContext)

/*

int main(int, char**)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return 1;

	//インデックスバッファ作成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



HRESULT CD3DTest::Create(HWND hwnd)



	auto& materials = reader.GetMaterials();

	WORD   icount = indexList.size();

			case SDLK_UP:



		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Quit();

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		}

	m_Viewport.MinDepth = 0.0f;

	CRect                rect;

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//vector<WORD> index_t;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(index);

	m_pDevice = NULL;

		}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			index_offset += fv;

	{

			{



	m_IndexCount = 0;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



			index_offset += num_vertices;

	if (!reader.ParseFromFile(inputfile, reader_config))



		&materials,

};

	XMFLOAT4         eyePos;   //視点座標

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		// Loop over faces(polygon)

		D3D11_SDK_VERSION,

	for (const auto& shape : shapes)

#define TINYOBJLOADER_IMPLEMENTATION



	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&level,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}
		&m_pImmediateContext);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&txDesc, sizeof(txDesc));

	ConstantMatrixBuffer cmb;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

using std::cout; using std::endl;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_VertexCount = vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMFLOAT4X4 world;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

		}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

int SEGMENT = 36;

	{

	vector<Vertex> vertexlist;

	WORD   icount = indexList.size();

	int     vcount = vertexlist.size();

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.SampleDesc.Quality = 0;

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include "DirectXManager.h"

};



	m_Viewport.Width = (FLOAT)rect.Width();

	//Create Index

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{



	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Height = rect.Height();

	{

}



	ZeroMemory(&txDesc, sizeof(txDesc));

		KEY_PRESS_SURFACE_DEFAULT,

		size_t index_offset = 0;

	if (FAILED(hr))



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//ビューポート設定

		pVList[i] = vertexlist[i];



	vbDesc.MiscFlags = 0;

	XMFLOAT4X4 world;



			case SDLK_LEFT:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pDepthStencilView = NULL;

	/*

	m_pLightBuffer = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pInputLayout = NULL;

	vector<WORD> indexList;

	SDL_FreeSurface(bmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	ibDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

		{

{



		SDL_RenderPresent(ren);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	float    nearZ = 0.1f;



	//深度ステンシルバッファ作成



		SDL_RenderClear(ren);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pSampler);

			exit(1);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    nearZ = 0.1f;

};

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			default:

		return hr;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pSwapChain,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

		return hr;

		{

	//Key press surfaces constants

	SDL_DestroyTexture(tex);

		1,

				// access to vertex

		KEY_PRESS_SURFACE_DOWN,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	cbDesc.MiscFlags = 0;



		&materials,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Key press surfaces constants





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.MiscFlags = 0;

	vector<WORD> indexList;

	m_pSwapChain = NULL;

				indexlist.push_back(index);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



			{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_Viewport.TopLeftX = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	ibDesc.CPUAccessFlags = 0;

		}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

struct ConstantLight {

				tinyobj::real_t tx =



	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



CD3DTest::~CD3DTest()

				break;

	{

	if (FAILED(hr))

	}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



/*

	m_Viewport.Height = (FLOAT)rect.Height();

			default:

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyWindow(win);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pVertexBuffer = NULL;

	m_pVertexBuffer = NULL;

#include <iostream>

		KEY_PRESS_SURFACE_LEFT,



	D3D11_BUFFER_DESC ibDesc;

		pVList[i] = vertexlist[i];

		SDL_Delay(1000);

			case SDLK_RIGHT:

		cout << "SDL_INIT_ERROR" << endl;

				WORD index = idx.vertex_index;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	{

	pBackBuffer->Release();

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.MaxDepth = 1.0f;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferCount = 1;

		&attrib,

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pSwapChain,

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

	//Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4 ambient;           //環境(r,g,b)



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pPixelShader = NULL;

using std::cout; using std::endl;



				break;

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ConstantMatrixBuffer cmb;

			index_offset += num_vertices;

		{

		&materials,

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);







		SDL_RenderPresent(ren);

			{

{

	ConstantLightBuffer clb;

		return 1;



		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

	std::string error;

/*



	SDL_DestroyTexture(tex);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_VertexCount = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

	}

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	tinyobj::attrib_t attrib;

				// access to vertex

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





		else if (e.type == SDL_KEYDOWN)

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&txDesc, sizeof(txDesc));

	auto& materials = reader.GetMaterials();

	enum KeyPressSurfaces

	return 0;

	auto& shapes = reader.GetShapes();

	//ピクセルシェーダー生成

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	int     vcount = vertexlist.size();

	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ID3D11Texture2D* pBackBuffer;

	txDesc.SampleDesc.Count = 1;

	{

	std::string error;



	txDesc.CPUAccessFlags = 0;

		&m_pImmediateContext);

void CD3DTest::Render()

				WORD index = idx.vertex_index;

	//頂点レイアウト作成

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (!ret)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	for (int i = 0; i < vcount; i++)

				WORD index = idx.vertex_index;

				// access to vertex

	if (!error.empty())

			}

#define TINYOBJLOADER_IMPLEMENTATION

			}

	std::string error;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;







	pBackBuffer->Release();





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		KEY_PRESS_SURFACE_DEFAULT,



	txDesc.Height = rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pLightBuffer = NULL;

		{

	float    farZ = 100.0f;

struct ConstantLight {



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		size_t index_offset = 0;

		flags,

	{

	if (FAILED(hr))



	{

	tinyobj::attrib_t attrib;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	std::string inputfile = "test.obj";



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			}



	UINT flags = 0;



	txDesc.CPUAccessFlags = 0;



				// access to vertex

	SDL_Quit();



		D3D11_SDK_VERSION,



	//First we need to start up SDL, and make sure it went ok

	//頂点レイアウト作成



	ConstantMaterial material; //物体の質感

		SDL_RenderCopy(ren, tex, NULL, NULL);

		delete[] pIList;

	SAFE_RELEASE(m_pVertexBuffer);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4X4 projection;



	XMFLOAT4         ambient;  //環境光(r,g,b)



	WORD* pIList = new WORD[icount];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.SampleDesc.Quality = 0;

			default:

	m_pTextureView = NULL;

	D3D11_BUFFER_DESC cbDesc;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				break;

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	scDesc.BufferDesc.Width = rect.Width();

		{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//vector<WORD> index_t;

	{

	SDL_FreeSurface(bmp);

	m_pInputLayout = NULL;

	}

		&level,

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		}





	cbDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pSwapChain,

	D3D11_SUBRESOURCE_DATA vrData;

				break;

	D3D11_BUFFER_DESC vbDesc;

	//ピクセルシェーダー生成

	for (int j = 0; j < icount; j++)



	dsDesc.Format = txDesc.Format;



	if (FAILED(hr))

	if (FAILED(hr))



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		size_t index_offset = 0;  // インデントのオフセット

		if (e.type == SDL_QUIT)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];







#include "DirectXManager.h"

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pTextureView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	}*/

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





		//User presses a key

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pTexture);

	irData.SysMemPitch = 0;

		if (!ret)

			{

	scDesc.SampleDesc.Quality = 0;

	}

	//深度ステンシルバッファ作成

		flags,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//深度ステンシルバッファ作成

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		SDL_Delay(1000);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.SampleDesc.Quality = 0;



	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;



		}

 * Lesson 1: Hello World!



	//vector<Vertex> vertex_t;

{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	dsDesc.Texture2D.MipSlice = 0;



	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	delete[] pIList;

#ifdef _DEBUG

	XMFLOAT4 specular;          //反射(r,g,b)



#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

	std::vector<tinyobj::shape_t> shapes;



{

	cbDesc.CPUAccessFlags = 0;

	::GetClientRect(hwnd, &rect);

{

	//Create Index

		{

#ifdef _DEBUG

	m_Viewport.MinDepth = 0.0f;

	vbDesc.MiscFlags = 0;

struct ConstantLightBuffer {

	std::string error;

	m_pDepthStencilTexture = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_DestroyWindow(win);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

};

	XMFLOAT4X4 projection;

	scDesc.SampleDesc.Quality = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		if (e.type == SDL_QUIT)



};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_VertexCount = vcount;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	tinyobj::attrib_t attrib;



	SDL_DestroyRenderer(ren);

		D3D_DRIVER_TYPE_HARDWARE,





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





};

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_UP,

};

	m_pImmediateContext = NULL;

			index_offset += fv;

		SDL_RenderClear(ren);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_Viewport.TopLeftX = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット



		SDL_RenderPresent(ren);

}

#include "DirectXManager.h"

		&scDesc,

	ConstantLight    pntLight; //点光源

struct ConstantLight {

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	/*



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

/*

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

				// access to vertex

	m_pSwapChain = NULL;

	::GetClientRect(hwnd, &rect);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.ArraySize = 1;

			switch (e.key.keysym.sym)

	m_pSampler = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



CD3DTest::~CD3DTest()



CD3DTest::CD3DTest()

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.SampleDesc.Count = 1;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		size_t index_offset = 0;

	if (FAILED(hr))



		// Loop over faces(polygon)

	//Clean up our objects and quit

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	ConstantMaterial material; //物体の質感

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t ty =

};

}

	{

				break;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (m_pImmediateContext)



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_IndexCount = icount;

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

{

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t tx =

		D3D11_SDK_VERSION,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			//Select surfaces based on key press

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	HRESULT              hr;

		return hr;

}







	for (const auto& shape : shapes)

	if (FAILED(hr))

		// Loop over faces(polygon)

}



	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		size_t index_offset = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4         eyePos;   //視点座標

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	UINT offsets = 0;

 * Lesson 1: Hello World!

			// Loop over vertices in the face.



		{

	ID3D11Texture2D* pBackBuffer;



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pVertexBuffer);

	ibDesc.StructureByteStride = 0;

		return hr;

			case SDLK_DOWN:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);

	return 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	}

		}

			// Loop over vertices in the face.

	vector<WORD> indexList;

		delete[] pVList;

}
	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	vector<Vertex> vertexlist;

	XMFLOAT4         eyePos;   //視点座標

};

	//Create Index

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.MaxDepth = 1.0f;

	ConstantLightBuffer clb;

	for (int i = 0; i < vcount; i++)



		{

		{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include "DirectXManager.h"

	if (FAILED(hr))



#include <SDL.h>

	SDL_Event e;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;

		if (e.type == SDL_QUIT)





	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

			}

	m_pImmediateContext = NULL;

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	for (int j = 0; j < icount; j++)

{

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	for (int i = 0; i < 3; i++)

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//Create Index

	cbDesc.CPUAccessFlags = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.TopLeftY = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4X4 projection;

		NULL,

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;

	ConstantMaterial material; //物体の質感

	float    fov = XMConvertToRadians(20.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	auto& attrib = reader.GetAttrib();

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

 */

	}

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;

	ConstantMatrixBuffer cmb;

	enum KeyPressSurfaces

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		SDL_Delay(1000);

				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_TEXTURE2D_DESC txDesc;



	/*



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			index_offset += fv;

	ibDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	m_IndexCount = 0;

	m_pTexture = NULL;

	int     vcount = vertexlist.size();

		&scDesc,

	float    nearZ = 0.1f;

	{

	scDesc.Windowed = TRUE;

	scDesc.SampleDesc.Quality = 0;

{





		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Clean up our objects and quit

	{

		&shapes,



	scDesc.SampleDesc.Quality = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				indexlist.push_back(index);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	LoadObj(vertexlist, indexList);

	XMFLOAT4X4 projection;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			case SDLK_DOWN:

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				WORD index = idx.vertex_index;

	float    farZ = 100.0f;

	}

}



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

	auto& attrib = reader.GetAttrib();

	scDesc.OutputWindow = hwnd;

	//頂点レイアウト作成

	UINT strides = sizeof(Vertex);



/*

	{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	}

	ibDesc.CPUAccessFlags = 0;







			case SDLK_UP:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	Release();

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Quit();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

		&shapes,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		&materials,

int SEGMENT = 36;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

#include "DirectXManager.h"

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.CPUAccessFlags = 0;

	{

		}

		&m_pSwapChain,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



}

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	if (!error.empty())

{

	WORD   icount = indexList.size();

			switch (e.key.keysym.sym)



	if (!reader.ParseFromFile(inputfile, reader_config))

		return 1;

			}



		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		if (e.type == SDL_QUIT)

struct ConstantMaterial {

	txDesc.Width = rect.Width();





};

#include <SDL.h>

	vrData.SysMemPitch = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

	//vector<Vertex> vertex_t;

				// access to vertex

/*

	m_pIndexBuffer = NULL;

	SDL_DestroyWindow(win);

	for (size_t s = 0; s < shapes.size(); s++)



	if (FAILED(hr))

		pLevels,

	m_pSwapChain = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		NULL,

	{

};



	m_IndexCount = icount;



	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_DestroyRenderer(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

		D3D_DRIVER_TYPE_HARDWARE,

	for (int j = 0; j < icount; j++)

	//First we need to start up SDL, and make sure it went ok

	m_Viewport.TopLeftX = 0;

		&shapes,

	scDesc.OutputWindow = hwnd;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	enum KeyPressSurfaces

		&m_pDevice,

	txDesc.Height = rect.Height();

	//頂点シェーダー生成

			case SDLK_RIGHT:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	{

	}

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//頂点シェーダー生成

	//定数バッファ作成

	txDesc.MipLevels = 1;





			case SDLK_DOWN:



	cbDesc.CPUAccessFlags = 0;



	scDesc.Windowed = TRUE;

	//Create Index

	SAFE_RELEASE(m_pIndexBuffer);



		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

};

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	std::string inputfile = "test.obj";

struct ConstantMaterial {



	if (!reader.ParseFromFile(inputfile, reader_config))





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& attrib = reader.GetAttrib();



		SDL_RenderCopy(ren, tex, NULL, NULL);

}
		return hr;

	txDesc.ArraySize = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	auto& materials = reader.GetMaterials();



#ifdef _DEBUG

	m_pDevice = NULL;

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.SampleDesc.Count = 1;

	scDesc.BufferDesc.Height = rect.Height();

void CD3DTest::Release()

	SDL_FreeSurface(suf);

	ConstantMaterial material; //物体の質感

		return hr;

			{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//Vertex* pVList = new Vertex[vcount];

void CD3DTest::Release()



		return 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	{

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	{

	D3D11_TEXTURE2D_DESC txDesc;

	for (const auto& shape : shapes)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pSwapChain = NULL;

/*

	vrData.SysMemSlicePitch = 0;

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	tinyobj::attrib_t attrib;

	Release();

	SDL_Event e;

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

			{

	//深度ステンシルバッファ作成

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

void CD3DTest::Release()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pVertexBuffer = NULL;

	Release();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

int main(int, char**)



}

		return hr;

	tinyobj::ObjReader reader;

		}

	D3D11_SAMPLER_DESC smpDesc;

	//Clean up our objects and quit

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

};

	//頂点シェーダー生成



	scDesc.BufferDesc.Width = rect.Width();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		KEY_PRESS_SURFACE_DEFAULT,

		flags,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

	}

	SAFE_RELEASE(m_pInputLayout);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	m_pPixelShader = NULL;

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_DOWN,



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//頂点バッファ作成

	SDL_DestroyTexture(tex);

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		return hr;





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			for (size_t v = 0; v < fv; v++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pTexture);

	std::string inputfile = "test.obj";

		SDL_RenderPresent(ren);

	}

	SAFE_RELEASE(m_pMatrixBuffer);

	//ビューポート設定

		1,

	}

		KEY_PRESS_SURFACE_DEFAULT,

	return 0;



	/*



		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferDesc.Height = rect.Height();

};



	vrData.pSysMem = &pVList[0];

	//頂点バッファ作成

	tinyobj::attrib_t attrib;

			index_offset += num_vertices;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	CRect                rect;

		return 1;

	}

		KEY_PRESS_SURFACE_DOWN,

	D3D11_SUBRESOURCE_DATA vrData;

	auto& attrib = reader.GetAttrib();

		KEY_PRESS_SURFACE_RIGHT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

CD3DTest::CD3DTest()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	pBackBuffer->Release();



	reader_config.mtl_search_path = "./"; // Path to material files

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

void CD3DTest::Render()

		&m_pSwapChain,

	WORD* pIList = new WORD[icount];



		m_pImmediateContext->ClearState();

	if (m_pImmediateContext)

			switch (e.key.keysym.sym)

				indexlist.push_back(index);

	SDL_DestroyRenderer(ren);

	auto& shapes = reader.GetShapes();

	WORD   icount = indexList.size();

		}

	int     vcount = vertexlist.size();



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.MiscFlags = 0;

	m_pImmediateContext = NULL;

	tinyobj::ObjReaderConfig reader_config;



		if (!reader.Error().empty())



	//ピクセルシェーダー生成

#include <iostream>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;

		D3D11_SDK_VERSION,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	UINT offsets = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4X4 view;

	scDesc.BufferCount = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pSampler = NULL;

	irData.SysMemSlicePitch = 0;



	if (FAILED(hr))

	//深度ステンシルバッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	return 0;

			for (size_t v = 0; v < num_vertices; v++)

	}



	if (FAILED(hr))

	//ピクセルシェーダー生成

};

	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				WORD index = idx.vertex_index;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	{



{

			index_offset += fv;

	CRect                rect;



	irData.pSysMem = &pIList[0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		delete[] pVList;



	LoadObj(vertexlist, indexList);

	ConstantMaterial material; //物体の質感

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





		return hr;

struct ConstantLightBuffer {

			case SDLK_LEFT:

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	m_pSwapChain = NULL;

	//First we need to start up SDL, and make sure it went ok

	ibDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SDL_DestroyWindow(win);

	{



		return hr;







CD3DTest::~CD3DTest()

				vertex.push_back(vertex_tmp);



			{

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

			int num_vertices = shape.mesh.num_face_vertices[f];

	while (SDL_PollEvent(&e) != 0)



		NULL,

				tinyobj::real_t ty =

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

void CD3DTest::Release()







			}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	for (int j = 0; j < icount; j++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (!reader.Warning().empty())



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vector<WORD> indexList;

	}

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

};

	enum KeyPressSurfaces

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDevice);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.StructureByteStride = 0;

	auto& attrib = reader.GetAttrib();

	UINT offsets = 0;



#include "DirectXManager.h"

struct ConstantLight {

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.MipLevels = 1;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		KEY_PRESS_SURFACE_DOWN,







	//頂点シェーダー生成

	m_pTextureView = NULL;

	cbDesc.StructureByteStride = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	{





		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//テクスチャ読み込み

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pTextureView);

		pLevels,

		&level,



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{

	m_Viewport.Width = (FLOAT)rect.Width();

};



	return;

	DXGI_SWAP_CHAIN_DESC scDesc;

			exit(1);



	scDesc.BufferDesc.Height = rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	auto& materials = reader.GetMaterials();

	UINT strides = sizeof(Vertex);

	// Loop over shapes

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_VertexCount = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyWindow(win);

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	float    farZ = 100.0f;





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		//User presses a key

	D3D11_BUFFER_DESC ibDesc;

	irData.pSysMem = &pIList[0];

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pMatrixBuffer);

	return hr;

}





	Release();

	}

	cbDesc.MiscFlags = 0;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

#include "DirectXManager.h"

	for (const auto& shape : shapes)

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#include "DirectXManager.h"

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_TEXTURE2D_DESC txDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		}

void CD3DTest::Render()

	}



	vrData.SysMemPitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 projection;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&level,

	if (FAILED(hr))



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pTextureView);

#endif

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	SAFE_RELEASE(m_pMatrixBuffer);

	//深度ステンシルバッファ作成

#include <iostream>



	{

	vrData.pSysMem = &pVList[0];



		return hr;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		// Loop over faces(polygon)

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	auto& attrib = reader.GetAttrib();

	txDesc.MipLevels = 1;



	m_pVertexBuffer = NULL;

	{

	txDesc.SampleDesc.Quality = 0;

		&m_pDevice,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D_FEATURE_LEVEL level;

	};



	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyWindow(win);

	m_pSwapChain = NULL;

	std::string error;

	if (FAILED(hr))



	m_pSampler = NULL;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			for (size_t v = 0; v < num_vertices; v++)



	WORD* pIList = new WORD[icount];

	//First we need to start up SDL, and make sure it went ok

		return hr;

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vrData.pSysMem = &pVList[0];





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Quit();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			}



				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferDesc.Width = rect.Width();



}
				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				break;

	if (FAILED(hr))





	irData.pSysMem = &pIList[0];

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t ty =

				break;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

	WORD   icount = indexList.size();

	//インデックスバッファ作成

};

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	irData.SysMemPitch = 0;



	{

	SAFE_RELEASE(m_pVertexBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_BUFFER_DESC vbDesc;

			index_offset += num_vertices;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		NULL,

	m_Viewport.TopLeftY = 0;

	cbDesc.StructureByteStride = 0;

	ConstantMatrixBuffer cmb;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	Vertex* pVList = new Vertex[vcount];

			case SDLK_DOWN:

		cout << "SDL_INIT_ERROR" << endl;

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





}

	if (FAILED(hr))

 * Lesson 1: Hello World!

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

	{



	m_pSampler = NULL;



	m_Angle += XMConvertToRadians(1.0f);



	cbDesc.CPUAccessFlags = 0;

	CRect                rect;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pInputLayout = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	m_Viewport.MinDepth = 0.0f;

int SEGMENT = 36;



	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4X4 view;

			{

	SDL_DestroyWindow(win);

}

	m_pImmediateContext = NULL;

	txDesc.MiscFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

	//インデックスバッファ作成

	if (FAILED(hr))

	SDL_Quit();

	//定数バッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//深度ステンシルバッファ作成

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pTexture);

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

};

	m_pSwapChain->Present(0, 0);

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyRenderer(ren);

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.StructureByteStride = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

	std::vector<tinyobj::shape_t> shapes;

		return 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

				break;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemPitch = 0;

struct ConstantMaterial {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&shapes,

		&attrib,

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pPixelShader = NULL;

			break;



	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(idx.vertex_index);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int j = 0; j < icount; j++)

			index_offset += num_vertices;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		pIList[j] = indexList[j];

			}

	D3D11_BUFFER_DESC vbDesc;





		m_pImmediateContext->ClearState();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (!error.empty())

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 world;



		SDL_RenderPresent(ren);



	}

		NULL,

using std::cout; using std::endl;

{





		return hr;



	txDesc.MiscFlags = 0;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.Height = rect.Height();

	XMFLOAT4X4 world;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (size_t s = 0; s < shapes.size(); s++)

	//テクスチャ読み込み



	m_pVertexBuffer = NULL;





			case SDLK_LEFT:

	Release();

	};

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}
	m_pSampler = NULL;

	UINT offsets = 0;



		D3D_DRIVER_TYPE_HARDWARE,



	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Quit();

	XMFLOAT4 ambient;           //環境(r,g,b)





	tinyobj::attrib_t attrib;

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

			}

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				indexlist.push_back(idx.vertex_index);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

struct ConstantMaterial {

			switch (e.key.keysym.sym)

			{

	return 0;

{

			{



	ConstantLight    pntLight; //点光源



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

using std::cout; using std::endl;

	delete[] pVList;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点バッファ作成

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	delete[] pIList;

	//頂点バッファ作成

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		if (e.type == SDL_QUIT)

	return 0;



	if (FAILED(hr))

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

	scDesc.SampleDesc.Quality = 0;

		if (e.type == SDL_QUIT)

	if (FAILED(hr))





	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//Vertex* pVList = new Vertex[vcount];

	auto& materials = reader.GetMaterials();

	{

		delete[] pVList;

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4X4 world;

				vertex.push_back(vertex_tmp);

			case SDLK_DOWN:

		SDL_Delay(1000);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





			default:

		{



void CD3DTest::Release()

		delete[] pVList;



	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	SDL_FreeSurface(suf);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			break;

		}

}



	};

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				indexlist.push_back(idx.vertex_index);

	::GetClientRect(hwnd, &rect);



		pLevels,

	ibDesc.CPUAccessFlags = 0;



	txDesc.MipLevels = 1;



	::GetClientRect(hwnd, &rect);

			}





		{

	{





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_IndexCount = icount;

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_UP,

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

		1,

	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_LEFT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	vrData.pSysMem = &pVList[0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{

				indexlist.push_back(index);

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	//vector<Vertex> vertex_t;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	//頂点シェーダー生成

		flags,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::ObjReaderConfig reader_config;

struct ConstantMaterial {

	m_pMatrixBuffer = NULL;





				WORD index = idx.vertex_index;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();



			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

	Vertex* pVList = new Vertex[vcount];

	for (int i = 0; i < vcount; i++)

	SDL_FreeSurface(suf);

struct ConstantMaterial {

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::string imagePath = "hello.bmp";



	SDL_DestroyTexture(tex);

		{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Create Index

			case SDLK_RIGHT:

			switch (e.key.keysym.sym)



	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.SampleDesc.Count = 1;

	}

	//ピクセルシェーダー生成

	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	D3D11_BUFFER_DESC ibDesc;

		return hr;



			case SDLK_UP:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];



	m_pDevice = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.MiscFlags = 0;

			case SDLK_UP:

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyWindow(win);

		R"(cube.obj)");

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			index_offset += fv;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		&materials,

	//Create Index

	m_pSwapChain->Present(0, 0);

		{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.SampleDesc.Count = 1;



		if (!ret)

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pDevice,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



CD3DTest::~CD3DTest()

		SDL_RenderCopy(ren, tex, NULL, NULL);





				break;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	}

 */

#include <SDL.h>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

/*

			exit(1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

};

	UINT offsets = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	/*

		}

	D3D11_BUFFER_DESC cbDesc;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pImmediateContext);

			case SDLK_UP:

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.CPUAccessFlags = 0;

{

	ID3D11Texture2D* pBackBuffer;

{





	if (FAILED(hr))



	D3D11_BUFFER_DESC ibDesc;

	for (size_t s = 0; s < shapes.size(); s++)



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantMatrixBuffer {

	delete[] pIList;



	vbDesc.StructureByteStride = 0;



		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

	{

	float    nearZ = 0.1f;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	auto& materials = reader.GetMaterials();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D_FEATURE_LEVEL level;

	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4X4 projection;

	D3D11_BUFFER_DESC cbDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	float    fov = XMConvertToRadians(20.0f);

		}

			case SDLK_DOWN:



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_BUFFER_DESC vbDesc;

	vector<Vertex> vertexlist;





	ConstantMaterial material; //物体の質感

	vbDesc.CPUAccessFlags = 0;

				break;

	ibDesc.CPUAccessFlags = 0;

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	auto& materials = reader.GetMaterials();

};

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderPresent(ren);

	if (FAILED(hr))

#endif



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		if (!reader.Error().empty())



	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



			case SDLK_UP:

		}

	}



	SDL_DestroyTexture(tex);





#ifdef _DEBUG

#include <iostream>

			exit(1);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Quit();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			//Select surfaces based on key press

	if (m_pImmediateContext)

	scDesc.BufferCount = 1;

			{



	if (FAILED(hr))

#include <iostream>

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_VertexCount = vcount;

		&level,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		//User presses a key

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	m_VertexCount = vcount;



}
	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//頂点バッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	UINT offsets = 0;

	m_pPixelShader = NULL;

				WORD index = idx.vertex_index;

	m_Viewport.MaxDepth = 1.0f;

	std::string error;

			{

				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMFLOAT4 pos;               //座標(x,y,z)

	DXGI_SWAP_CHAIN_DESC scDesc;



	scDesc.SampleDesc.Quality = 0;

	{

			break;



CD3DTest::~CD3DTest()

	enum KeyPressSurfaces

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()

	vrData.pSysMem = &pVList[0];

			case SDLK_RIGHT:



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return hr;

	for (const auto& shape : shapes)



}

	Vertex* pVList = new Vertex[vcount];



	SAFE_RELEASE(m_pIndexBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SAFE_RELEASE(m_pVertexBuffer);



	}

		&level,

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_RIGHT,

	Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);

		{

	scDesc.SampleDesc.Quality = 0;

	while (SDL_PollEvent(&e) != 0)



	m_pSampler = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_IndexCount = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vbDesc.StructureByteStride = 0;

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				break;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.OutputWindow = hwnd;

	}

		if (!ret)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	m_pIndexBuffer = NULL;

 * Lesson 1: Hello World!

	if (FAILED(hr))

	SDL_Quit();

		}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilTexture = NULL;



	{

}

		{





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pTexture);

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



				break;

	irData.pSysMem = &pIList[0];

		SDL_Delay(1000);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	m_VertexCount = vcount;

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		size_t index_offset = 0;

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.SampleDesc.Quality = 0;

		&m_pImmediateContext);



	{

			// Loop over vertices in the face.

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

			case SDLK_UP:

	vrData.SysMemSlicePitch = 0;

	//ビューポート設定



	return;

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t tx =

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();







	return 0;



		&level,

	//インデックスバッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//ピクセルシェーダー生成

	vbDesc.StructureByteStride = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





#define TINYOBJLOADER_IMPLEMENTATION

		if (e.type == SDL_QUIT)

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	enum KeyPressSurfaces



	D3D11_TEXTURE2D_DESC txDesc;

		&attrib,

				// access to vertex

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pSwapChain = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

	//Clean up our objects and quit

	SDL_DestroyTexture(tex);

	auto& attrib = reader.GetAttrib();

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	m_pTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	vbDesc.CPUAccessFlags = 0;

			{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);



		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



}

	ibDesc.MiscFlags = 0;

#ifdef _DEBUG

	DXGI_SWAP_CHAIN_DESC scDesc;



{

}
	D3D11_BUFFER_DESC vbDesc;

		return hr;

	txDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);


