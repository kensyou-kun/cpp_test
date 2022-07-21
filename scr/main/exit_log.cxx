

using std::cout; using std::endl;

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//定数バッファ作成



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.SampleDesc.Quality = 0;

};

		R"(cube.obj)");

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 projection;

#endif



	SDL_DestroyRenderer(ren);

}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (!reader.Warning().empty())

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantLight {

		SDL_RenderPresent(ren);

	D3D11_SUBRESOURCE_DATA irData;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				indexlist.push_back(idx.vertex_index);



struct ConstantLightBuffer {

	float    fov = XMConvertToRadians(20.0f);

	for (int j = 0; j < icount; j++)



			index_offset += num_vertices;

	SAFE_RELEASE(m_pVertexBuffer);



	D3D_FEATURE_LEVEL level;

	XMFLOAT4X4 world;

	XMFLOAT4 ambient;           //環境(r,g,b)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//ビューポート設定

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		{

	ConstantLight    pntLight; //点光源

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			switch (e.key.keysym.sym)



	{

#include <SDL.h>

	txDesc.MiscFlags = 0;



		m_pImmediateContext->ClearState();

		}

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t ty =

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_TEXTURE2D_DESC txDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	::GetClientRect(hwnd, &rect);



	if (!reader.Warning().empty())

	dsDesc.Format = txDesc.Format;

			break;

struct ConstantMatrixBuffer {

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilTexture);

	DXGI_SWAP_CHAIN_DESC scDesc;

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::vector<tinyobj::material_t> materials;



#ifdef _DEBUG

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT flags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	enum KeyPressSurfaces

	float    nearZ = 0.1f;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.StructureByteStride = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{



	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}









	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		pIList[j] = indexList[j];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

using std::cout; using std::endl;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



};

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

		D3D11_SDK_VERSION,

};

	if (FAILED(hr))





	if (FAILED(hr))

	m_pVertexShader = NULL;

		}

{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



			case SDLK_UP:

	m_pVertexShader = NULL;

				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{



	vector<WORD> indexList;

				break;

	auto& attrib = reader.GetAttrib();



	vector<WORD> indexList;





	{

	m_pInputLayout = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;



	D3D11_TEXTURE2D_DESC txDesc;

	if (!error.empty())

		&error,

				break;

	::GetClientRect(hwnd, &rect);





	//Clean up our objects and quit

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext = NULL;

		KEY_PRESS_SURFACE_DOWN,

	LoadObj(vertexlist, indexList);

	ConstantLight    pntLight; //点光源



		return hr;



	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

}

	//Key press surfaces constants

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;



	txDesc.Height = rect.Height();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);











struct ConstantMatrixBuffer {



	SDL_Quit();

	D3D_FEATURE_LEVEL level;

	while (SDL_PollEvent(&e) != 0)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{



		delete[] pIList;

	if (m_pImmediateContext)

		// Loop over faces(polygon)

		R"(cube.obj)");

			{

				tinyobj::real_t ty =

				// access to vertex

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

			break;

	//頂点シェーダー生成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	//Clean up our objects and quit

	m_pMatrixBuffer = NULL;

};

	std::vector<tinyobj::shape_t> shapes;

	{

		&error,

	{

	// Loop over shapes

		&shapes,

		return hr;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);







	scDesc.BufferDesc.Width = rect.Width();



	float    fov = XMConvertToRadians(20.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	irData.SysMemSlicePitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}



	dsDesc.Format = txDesc.Format;

		return hr;

			default:



	irData.SysMemPitch = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pVertexShader);

	std::vector<tinyobj::shape_t> shapes;

				indexlist.push_back(index);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				WORD index = idx.vertex_index;

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

		}



	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	if (FAILED(hr))

	XMFLOAT4X4 view;

	std::string error;

			int num_vertices = shape.mesh.num_face_vertices[f];

			{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//インデックスバッファ作成

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

		delete[] pIList;

			default:

		return 1;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			index_offset += num_vertices;

	vrData.SysMemPitch = 0;

		return hr;

		}

		// Loop over faces(polygon)

	Release();



};

		return 1;

	SDL_DestroyTexture(tex);

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pSwapChain = NULL;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&m_pImmediateContext);

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	WORD   icount = indexList.size();

				tinyobj::real_t ty =



	m_pDepthStencilTexture = NULL;

	SDL_DestroyRenderer(ren);

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			}

	scDesc.BufferCount = 1;



	}

		KEY_PRESS_SURFACE_LEFT,

			for (size_t v = 0; v < fv; v++)

{

			index_offset += fv;

	vrData.SysMemPitch = 0;

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t tx =

		m_pImmediateContext->ClearState();

struct ConstantLightBuffer {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		&attrib,

	//ビューポート設定

	}

	tinyobj::ObjReaderConfig reader_config;

using std::cout; using std::endl;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,



	::ZeroMemory(&scDesc, sizeof(scDesc));

		KEY_PRESS_SURFACE_TOTAL

	CRect                rect;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	SDL_Event e;

				break;

using std::cout; using std::endl;

		D3D11_SDK_VERSION,

}



	std::string imagePath = "hello.bmp";



		NULL,



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.Height = rect.Height();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



};

	cbDesc.CPUAccessFlags = 0;

	{

		return hr;

	m_pDepthStencilView = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	UINT offsets = 0;





	scDesc.BufferDesc.Height = rect.Height();

};

using std::cout; using std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 view;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	UINT offsets = 0;

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;



	Release();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			case SDLK_DOWN:

	SDL_FreeSurface(suf);

	vrData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_DOWN,

int SEGMENT = 36;

				// access to vertex

		&attrib,

				break;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		D3D11_SDK_VERSION,

		1,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	}



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	LoadObj(vertexlist, indexList);





		&scDesc,

		return hr;

	}

			index_offset += num_vertices;

	m_IndexCount = 0;

	UINT offsets = 0;

	m_pDevice = NULL;

		KEY_PRESS_SURFACE_LEFT,

	vbDesc.MiscFlags = 0;

	UINT flags = 0;

	}*/



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		if (!ret)

	if (FAILED(hr))

	return 0;

		cout << "SDL_INIT_ERROR" << endl;

	//Key press surfaces constants

		return hr;

	txDesc.MipLevels = 1;

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	};

	float    nearZ = 0.1f;





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4X4 view;

int main(int, char**)

			{

	m_pSampler = NULL;

	D3D_FEATURE_LEVEL level;

		delete[] pVList;

	//First we need to start up SDL, and make sure it went ok

			}

	SAFE_RELEASE(m_pSampler);

		{







	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pVertexBuffer);

struct ConstantLightBuffer {

		return hr;





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

				break;





	{

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	D3D11_BUFFER_DESC ibDesc;



	SDL_DestroyTexture(tex);

	}

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

int main(int, char**)

	if (FAILED(hr))

	UINT offsets = 0;

void CD3DTest::Render()

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{



	if (FAILED(hr))

	if (!error.empty())

		size_t index_offset = 0;  // インデントのオフセット

			int num_vertices = shape.mesh.num_face_vertices[f];

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferDesc.Width = rect.Width();



	//頂点レイアウト作成





		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

				break;



	cbDesc.CPUAccessFlags = 0;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		&error,



};

			}

		}

}
	vector<WORD> indexList;

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);







	scDesc.OutputWindow = hwnd;

	txDesc.SampleDesc.Quality = 0;

	irData.pSysMem = &pIList[0];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_Delay(1000);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	m_pInputLayout = NULL;

	m_pMatrixBuffer = NULL;

	SDL_DestroyRenderer(ren);

	vrData.pSysMem = &pVList[0];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pDepthStencilTexture = NULL;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	float    nearZ = 0.1f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	ConstantLight    pntLight; //点光源

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (!reader.Error().empty())



}

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pRenderTargetView = NULL;



	SDL_DestroyWindow(win);

	m_Viewport.MinDepth = 0.0f;

		1,

};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pVertexBuffer = NULL;

	scDesc.Windowed = TRUE;

		//User presses a key



	for (int j = 0; j < icount; j++)

	ZeroMemory(&txDesc, sizeof(txDesc));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

	XMFLOAT4         eyePos;   //視点座標

	{

int main(int, char**)

				break;

		}

	D3D_FEATURE_LEVEL level;

 */

	if (FAILED(hr))



		// Loop over faces(polygon)

	for (int i = 0; i < vcount; i++)

		pIList[j] = indexList[j];

	std::string error;



	txDesc.MipLevels = 1;

			case SDLK_RIGHT:

	{

	UINT offsets = 0;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pTextureView);

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pIList[j] = indexList[j];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyRenderer(ren);

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

}

	txDesc.MipLevels = 1;

		D3D_DRIVER_TYPE_HARDWARE,

		1,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pDevice = NULL;

		return hr;

		//User presses a key

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

	m_pVertexShader = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	::ZeroMemory(&scDesc, sizeof(scDesc));





	return;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int j = 0; j < icount; j++)

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SDL_DestroyWindow(win);

	//vector<Vertex> vertex_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	//ピクセルシェーダー生成

};

	XMFLOAT4         eyePos;   //視点座標





	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_Viewport.MinDepth = 0.0f;

		}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





CD3DTest::CD3DTest()

	irData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC vbDesc;

	}

	D3D11_BUFFER_DESC ibDesc;





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	UINT offsets = 0;

	/*

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	//テクスチャ読み込み



	float    farZ = 100.0f;

struct ConstantLight {

	DXGI_SWAP_CHAIN_DESC scDesc;

			case SDLK_RIGHT:

#include "DirectXManager.h"

		pVList[i] = vertexlist[i];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

/*

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	HRESULT              hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

/*

struct ConstantMatrixBuffer {

	//頂点レイアウト作成

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_FreeSurface(bmp);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_LEFT:



	}

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	ConstantMatrixBuffer cmb;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;

	if (!reader.Warning().empty())

		size_t index_offset = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				vertex.push_back(vertex_tmp);

			}

	if (FAILED(hr))

	m_VertexCount = 0;

			// Loop over vertices in the face.

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		size_t index_offset = 0;  // インデントのオフセット



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string error;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.MaxDepth = 1.0f;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pIndexBuffer = NULL;

		NULL,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		exit(1);

	}

		SDL_RenderClear(ren);

		//User presses a key

	if (m_pImmediateContext)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



struct ConstantLightBuffer {



	if (FAILED(hr))



	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		//User requests quit

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();



	}

	UINT offsets = 0;

	m_IndexCount = icount;

	return 0;

CD3DTest::CD3DTest()

	XMFLOAT4 specular;          //反射(r,g,b)

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.BufferCount = 1;



	};

	XMFLOAT4X4 view;

struct ConstantMaterial {

	XMFLOAT4X4 projection;



		&error,

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.CPUAccessFlags = 0;

		// Loop over faces(polygon)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantLight    pntLight; //点光源

CD3DTest::CD3DTest()

};

		return hr;



	if (!reader.Warning().empty())

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		SDL_RenderClear(ren);

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::attrib_t attrib;



	//ピクセルシェーダー生成

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext = NULL;

	m_pTextureView = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		size_t index_offset = 0;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pSampler);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.MiscFlags = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	cbDesc.MiscFlags = 0;

		{

	{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4X4 projection;

 * Lesson 1: Hello World!



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	for (int j = 0; j < icount; j++)

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		exit(1);

	auto& shapes = reader.GetShapes();



		size_t index_offset = 0;  // インデントのオフセット

	//頂点レイアウト作成

	if (m_pImmediateContext)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.MipLevels = 1;

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_DestroyRenderer(ren);

	vbDesc.MiscFlags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SAFE_RELEASE(m_pPixelShader);

		return hr;

		flags,

				indexlist.push_back(index);

		}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	};

	m_Viewport.Width = (FLOAT)rect.Width();

	};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	// Loop over shapes



		SDL_RenderPresent(ren);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		SDL_RenderPresent(ren);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_DestroyWindow(win);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



int main(int, char**)

			case SDLK_UP:

	}

				break;

	ibDesc.StructureByteStride = 0;

			case SDLK_DOWN:

		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_SAMPLER_DESC smpDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	dsDesc.Texture2D.MipSlice = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	{

			}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				indexlist.push_back(index);



#ifdef _DEBUG



	txDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	irData.pSysMem = &pIList[0];

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = 0;

				break;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			//Select surfaces based on key press



		return hr;

		{

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 world;

	SDL_DestroyTexture(tex);

{

	ConstantLightBuffer clb;

		D3D_DRIVER_TYPE_HARDWARE,

			break;

		KEY_PRESS_SURFACE_DEFAULT,

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pTextureView);

		return 1;

	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vector<WORD> indexList;

		return hr;

	if (FAILED(hr))

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		{

				break;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pDepthStencilView = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



			for (size_t v = 0; v < num_vertices; v++)

	txDesc.ArraySize = 1;

	SDL_DestroyTexture(tex);



		SDL_RenderClear(ren);

	m_pDevice = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	std::vector<tinyobj::shape_t> shapes;



	XMFLOAT4         eyePos;   //視点座標

	m_pLightBuffer = NULL;



		pLevels,



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			//Select surfaces based on key press





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	XMStoreFloat4(&clb.ambient, lightAmbient);

			switch (e.key.keysym.sym)



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			{

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t tx =

#include <SDL.h>

			case SDLK_RIGHT:

	cbDesc.StructureByteStride = 0;





	vrData.SysMemSlicePitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pVertexShader = NULL;

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pTexture);

	scDesc.Windowed = TRUE;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//テクスチャ読み込み

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	std::string imagePath = "hello.bmp";

	m_pTexture = NULL;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{



				break;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pSwapChain);

	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&materials,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

		if (!ret)

				tinyobj::real_t tx =

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//深度ステンシルバッファ作成

	ibDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

	//vector<Vertex> vertex_t;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	WORD   icount = indexList.size();

	cbDesc.MiscFlags = 0;

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_BUFFER_DESC vbDesc;

	vrData.pSysMem = &pVList[0];

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pDepthStencilTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			index_offset += fv;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

void CD3DTest::Release()

			exit(1);

	};

				break;



#include <SDL.h>

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

};

	D3D11_BUFFER_DESC vbDesc;

#include <iostream>

	WORD   icount = indexList.size();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pPixelShader = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	//深度ステンシルバッファ作成

	}

	{

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

		delete[] pVList;

	cbDesc.CPUAccessFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





				WORD index = idx.vertex_index;

		delete[] pVList;

	HRESULT              hr;

	cbDesc.MiscFlags = 0;





	SDL_DestroyTexture(tex);

{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pImmediateContext);

		// Loop over faces(polygon)

	irData.pSysMem = &pIList[0];

CD3DTest::~CD3DTest()



}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return 1;

	txDesc.SampleDesc.Count = 1;



	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_Viewport.TopLeftY = 0;

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

		delete[] pVList;

				break;

	vbDesc.StructureByteStride = 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMFLOAT4         eyePos;   //視点座標

	vbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D_FEATURE_LEVEL level;

	Release();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t tx =



	XMFLOAT4X4 projection;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	WORD* pIList = new WORD[icount];





		&m_pImmediateContext);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	m_IndexCount = 0;

	}



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.eyePos, eye);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMFLOAT4X4 projection;

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferDesc.Height = rect.Height();

	vector<WORD> indexList;

	pBackBuffer->Release();

		{

	CRect                rect;

	cbDesc.StructureByteStride = 0;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	vrData.SysMemSlicePitch = 0;

		&attrib,

	return;

	std::string imagePath = "hello.bmp";

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftY = 0;

	std::vector<tinyobj::material_t> materials;

	cbDesc.StructureByteStride = 0;

		&m_pSwapChain,

	{

	{

		D3D11_SDK_VERSION,

struct ConstantLightBuffer {

				tinyobj::real_t ty =

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_Viewport.MinDepth = 0.0f;

		}

			index_offset += fv;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.MiscFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pPixelShader);

	ibDesc.StructureByteStride = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void CD3DTest::Render()

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

	float    farZ = 100.0f;



		&m_pDevice,

			switch (e.key.keysym.sym)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	auto& attrib = reader.GetAttrib();

			}

	reader_config.mtl_search_path = "./"; // Path to material files

	if (m_pImmediateContext)





		SDL_Delay(1000);



	tinyobj::ObjReader reader;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	irData.SysMemPitch = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//テクスチャ読み込み

	UINT offsets = 0;

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		R"(cube.obj)");



		&level,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferDesc.Width = rect.Width();

	if (!reader.Warning().empty())

		&attrib,

	if (FAILED(hr))

				// access to vertex



		}







				// access to vertex

		return hr;



	cbDesc.MiscFlags = 0;

	LoadObj(vertexlist, indexList);

	XMFLOAT4 ambient;           //環境(r,g,b)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (!reader.Warning().empty())

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				WORD index = idx.vertex_index;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (size_t s = 0; s < shapes.size(); s++)

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

};



		{

	//Key press surfaces constants

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);



		{

	XMFLOAT4 specular;          //反射(r,g,b)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	float    nearZ = 0.1f;

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SAFE_RELEASE(m_pRenderTargetView);

	m_pSwapChain->Present(0, 0);

		{



	//Create Index

	m_Viewport.Height = (FLOAT)rect.Height();

	float    fov = XMConvertToRadians(20.0f);

#include <SDL.h>

		return hr;

	m_pVertexBuffer = NULL;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

HRESULT CD3DTest::Create(HWND hwnd)



int main(int, char**)

struct ConstantLightBuffer {

	vbDesc.MiscFlags = 0;



	tinyobj::ObjReader reader;

	ConstantLightBuffer clb;





	SDL_FreeSurface(suf);

	m_pInputLayout = NULL;



	SAFE_RELEASE(m_pSampler);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string imagePath = "hello.bmp";

		if (e.type == SDL_QUIT)

	vrData.SysMemSlicePitch = 0;

		pLevels,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			index_offset += fv;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		D3D11_SDK_VERSION,

	m_pDepthStencilView = NULL;



		if (!reader.Error().empty())

	m_pSampler = NULL;

	}





	XMFLOAT4 diffuse;           //拡散(r,g,b)

/*

};



	UINT strides = sizeof(Vertex);

	XMFLOAT4         eyePos;   //視点座標





		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	bool ret = tinyobj::LoadObj(

	if (!reader.Warning().empty())

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderPresent(ren);



	// Loop over shapes

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

	Release();

	m_pRenderTargetView = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	dsDesc.Format = txDesc.Format;

			case SDLK_DOWN:

		NULL,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	txDesc.SampleDesc.Count = 1;





		return hr;

		R"(cube.obj)");

	m_pRenderTargetView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	if (FAILED(hr))

using std::cout; using std::endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferDesc.Height = rect.Height();

	return 0;

	SDL_DestroyWindow(win);





	txDesc.Height = rect.Height();

		{

		{



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;



	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		if (!ret)

	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyTexture(tex);

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

struct ConstantLight {

	cbDesc.StructureByteStride = 0;

	XMFLOAT4         eyePos;   //視点座標

	SDL_FreeSurface(suf);

HRESULT CD3DTest::Create(HWND hwnd)

int main(int, char**)

	if (FAILED(hr))

	}

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4X4 view;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pIndexBuffer = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pRenderTargetView = NULL;











	D3D_FEATURE_LEVEL level;

}

struct ConstantLight {





}

		SDL_Delay(1000);

	if (FAILED(hr))

		if (!reader.Error().empty())

		return 1;

			case SDLK_LEFT:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	//頂点バッファ作成

	scDesc.BufferDesc.Height = rect.Height();

	m_pInputLayout = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	{

				WORD index = idx.vertex_index;

	};



		return hr;

	enum KeyPressSurfaces







	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	/*

		exit(1);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pIndexBuffer = NULL;

		1,

	txDesc.SampleDesc.Count = 1;



				break;



		pLevels,

		if (!ret)

	//定数バッファ作成

	{

	};

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

	m_pDepthStencilView = NULL;

	txDesc.SampleDesc.Count = 1;

			case SDLK_LEFT:

	vbDesc.MiscFlags = 0;





	D3D11_TEXTURE2D_DESC txDesc;



	SDL_Event e;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

}
	D3D_FEATURE_LEVEL level;

int SEGMENT = 36;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))







	irData.SysMemPitch = 0;



}

	XMFLOAT4 pos;               //座標(x,y,z)

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&m_pDevice,

	if (FAILED(hr))

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	::GetClientRect(hwnd, &rect);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	WORD* pIList = new WORD[icount];

};

#include <SDL.h>

		&materials,

	SAFE_RELEASE(m_pLightBuffer);

		size_t index_offset = 0;

{

		D3D11_SDK_VERSION,

	}

	scDesc.OutputWindow = hwnd;

#ifdef _DEBUG

	dsDesc.Texture2D.MipSlice = 0;



	//ピクセルシェーダー生成

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();



#include <iostream>

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;



using std::cout; using std::endl;



	std::vector<tinyobj::material_t> materials;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_RIGHT,

	vrData.pSysMem = &pVList[0];



	scDesc.BufferCount = 1;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderClear(ren);



		pVList[i] = vertexlist[i];



	HRESULT              hr;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

				break;



	m_pVertexBuffer = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pSwapChain);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	vbDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	m_Viewport.MinDepth = 0.0f;

/*



		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{



	SAFE_RELEASE(m_pImmediateContext);

	}



	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	ibDesc.StructureByteStride = 0;

	m_pInputLayout = NULL;

	Release();

	};

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::real_t ty =



	SDL_Quit();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	auto& materials = reader.GetMaterials();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.MaxDepth = 1.0f;

	m_pVertexShader = NULL;

	SDL_FreeSurface(suf);



		m_pImmediateContext->ClearState();

	//Vertex* pVList = new Vertex[vcount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		&m_pImmediateContext);

	dsDesc.Texture2D.MipSlice = 0;

		}

}
	m_IndexCount = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			case SDLK_RIGHT:

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



				WORD index = idx.vertex_index;

	m_pSampler = NULL;

	//vector<WORD> index_t;



	cbDesc.StructureByteStride = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.Warning().empty())

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 pos;               //座標(x,y,z)

			// Loop over vertices in the face.

	}



		&materials,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyRenderer(ren);

	Release();

	m_pVertexShader = NULL;



	irData.SysMemPitch = 0;

	HRESULT              hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pDevice);



	m_pVertexBuffer = NULL;

				WORD index = idx.vertex_index;

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	//Clean up our objects and quit

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.MiscFlags = 0;

				indexlist.push_back(index);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4X4 world;

		return hr;

				vertex.push_back(vertex_tmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];







	{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



 */

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		else if (e.type == SDL_KEYDOWN)

	D3D11_SUBRESOURCE_DATA irData;

	if (!error.empty())

	D3D11_SAMPLER_DESC smpDesc;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			// Loop over vertices in the face.

	scDesc.BufferDesc.Height = rect.Height();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	vrData.pSysMem = &pVList[0];

		//User presses a key

	m_Viewport.MinDepth = 0.0f;

using std::cout; using std::endl;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4X4 view;



		return hr;

	WORD   icount = indexList.size();

	D3D11_BUFFER_DESC vbDesc;

		//User presses a key

		}

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		//User presses a key







	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		KEY_PRESS_SURFACE_DOWN,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pSampler);

	for (const auto& shape : shapes)

	for (int i = 0; i < 3; i++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

void CD3DTest::Render()





	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4X4 world;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pSampler = NULL;

				tinyobj::real_t ty =

			// Loop over vertices in the face.

	{

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//First we need to start up SDL, and make sure it went ok

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantLight    pntLight; //点光源

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	txDesc.ArraySize = 1;

struct ConstantLight {

	SDL_DestroyWindow(win);

		return hr;



	::GetClientRect(hwnd, &rect);

		return hr;

		{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				vertex.push_back(vertex_tmp);



 */

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);





	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	bool ret = tinyobj::LoadObj(

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			switch (e.key.keysym.sym)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderClear(ren);

	if (FAILED(hr))

				break;

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 world;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;



	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vector<WORD> indexList;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		exit(1);

	//インデックスバッファ作成

	// Loop over shapes

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pMatrixBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		cout << "SDL_INIT_ERROR" << endl;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	}

HRESULT CD3DTest::Create(HWND hwnd)

			exit(1);



	m_pVertexBuffer = NULL;

	//頂点シェーダー生成



				indexlist.push_back(index);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	auto& attrib = reader.GetAttrib();

	ConstantLightBuffer clb;

	{

	if (!reader.ParseFromFile(inputfile, reader_config))



		R"(cube.obj)");

	m_pVertexBuffer = NULL;

	for (int i = 0; i < vcount; i++)

	std::string error;

	m_pTextureView = NULL;

	SDL_FreeSurface(bmp);

{

				indexlist.push_back(idx.vertex_index);

		D3D11_SDK_VERSION,

	vbDesc.CPUAccessFlags = 0;



			//Select surfaces based on key press

	irData.SysMemPitch = 0;



	m_pTextureView = NULL;

		{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyTexture(tex);



				vertex.push_back(vertex_tmp);

	}

	return;



	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.MaxDepth = 1.0f;

	vbDesc.MiscFlags = 0;



			break;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	//頂点シェーダー生成

struct ConstantLight {



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vrData.SysMemPitch = 0;

	//ビューポート設定

	{



		SDL_RenderClear(ren);

	D3D11_SUBRESOURCE_DATA vrData;





		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pSwapChain->Present(0, 0);



};

	ConstantMaterial material; //物体の質感

	vrData.pSysMem = &pVList[0];

	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



			case SDLK_DOWN:

		m_pImmediateContext->ClearState();

			for (size_t v = 0; v < fv; v++)

	{

	txDesc.SampleDesc.Count = 1;

		return hr;

{

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = 0;

	{



	delete[] pIList;

	txDesc.ArraySize = 1;

	XMFLOAT4         eyePos;   //視点座標



	{

		if (e.type == SDL_QUIT)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





	//ビューポート設定

	tinyobj::ObjReader reader;

	m_pIndexBuffer = NULL;

	cbDesc.StructureByteStride = 0;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_FreeSurface(bmp);

	m_Viewport.Width = (FLOAT)rect.Width();

struct ConstantLight {

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_IndexCount = 0;

		KEY_PRESS_SURFACE_RIGHT,



	m_pVertexShader = NULL;

	std::string inputfile = "test.obj";

	m_pMatrixBuffer = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

int main(int, char**)

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	//vector<Vertex> vertex_t;

	ibDesc.MiscFlags = 0;

		NULL,

	m_pDevice = NULL;

#include <SDL.h>

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		if (!reader.Error().empty())

int SEGMENT = 36;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		&shapes,

	m_pMatrixBuffer = NULL;

	txDesc.MipLevels = 1;

	m_pSwapChain = NULL;

	// Loop over shapes

	Vertex* pVList = new Vertex[vcount];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	//定数バッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点レイアウト作成

			index_offset += num_vertices;

		&scDesc,



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	cbDesc.MiscFlags = 0;

		exit(1);

	float    nearZ = 0.1f;

	txDesc.MipLevels = 1;

		KEY_PRESS_SURFACE_DEFAULT,

	m_VertexCount = vcount;



	if (!error.empty())

}

	XMFLOAT4X4 world;



	WORD   icount = indexList.size();



	txDesc.ArraySize = 1;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::CD3DTest()

	{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		1,

	m_IndexCount = 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pRenderTargetView = NULL;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pImmediateContext);

	//Key press surfaces constants



	std::string error;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	tinyobj::ObjReader reader;

			}

		return hr;

		m_pImmediateContext->ClearState();

};

	txDesc.MiscFlags = 0;

				break;

			{



CD3DTest::CD3DTest()

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



 */

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex



				break;

	{

	D3D_FEATURE_LEVEL level;

		{

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	m_IndexCount = icount;

	SDL_DestroyTexture(tex);

		&m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

	std::string imagePath = "hello.bmp";

			{

		pLevels,

 */

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.SampleDesc.Quality = 0;

	{



	D3D11_SUBRESOURCE_DATA vrData;



	tinyobj::attrib_t attrib;

/*

	//頂点バッファ作成

		}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			{

	UINT offsets = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	SAFE_RELEASE(m_pPixelShader);



	txDesc.Width = rect.Width();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4         eyePos;   //視点座標

	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);

	vbDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA irData;









			{

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));



}



	{

		pVList[i] = vertexlist[i];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMFLOAT4 pos;               //座標(x,y,z)

			index_offset += fv;

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

void CD3DTest::Release()

 */

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_Delay(1000);



#include "DirectXManager.h"

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

		m_pImmediateContext->ClearState();

	}

	// Loop over shapes

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//ビューポート設定

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;



		size_t index_offset = 0;  // インデントのオフセット

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//vector<Vertex> vertex_t;





	float    nearZ = 0.1f;

	for (const auto& shape : shapes)

#ifdef _DEBUG

{

	m_VertexCount = vcount;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

	std::string error;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	pBackBuffer->Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	::ZeroMemory(&scDesc, sizeof(scDesc));

CD3DTest::~CD3DTest()

	{

	txDesc.Width = rect.Width();



};

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	LoadObj(vertexlist, indexList);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4X4 projection;

		return hr;

}

		return hr;

	m_pVertexShader = NULL;

	LoadObj(vertexlist, indexList);





		//User presses a key

	if (!error.empty())

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



struct ConstantMatrixBuffer {

{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		exit(1);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Vertex* pVList = new Vertex[vcount];

#include <SDL.h>

		{

	m_Viewport.MaxDepth = 1.0f;



			case SDLK_DOWN:

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Event e;

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}

{

	float    nearZ = 0.1f;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	}

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t ty =

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	{

	for (int i = 0; i < 3; i++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_DEFAULT,

	//Clean up our objects and quit

#endif

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	scDesc.SampleDesc.Quality = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

CD3DTest::~CD3DTest()

	//Clean up our objects and quit

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

			default:







		flags,

	D3D11_SUBRESOURCE_DATA irData;

		// Loop over faces(polygon)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.ArraySize = 1;

			index_offset += num_vertices;

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_BUFFER_DESC vbDesc;

	vrData.pSysMem = &pVList[0];

	float    fov = XMConvertToRadians(20.0f);

}
				WORD index = idx.vertex_index;

	m_pLightBuffer = NULL;

	m_pImmediateContext = NULL;

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyTexture(tex);

		pIList[j] = indexList[j];

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		KEY_PRESS_SURFACE_DEFAULT,



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		m_pImmediateContext->ClearState();

	}*/

	}



	auto& attrib = reader.GetAttrib();

	txDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

		return hr;



{



			case SDLK_LEFT:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

/*

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

}

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}



	txDesc.ArraySize = 1;

		pLevels,



	SAFE_RELEASE(m_pIndexBuffer);

			// Loop over vertices in the face.

		NULL,



				// access to vertex

	//インデックスバッファ作成

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	ibDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	Release();

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pDevice);

		}

	irData.pSysMem = &pIList[0];



	SDL_DestroyWindow(win);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

	}*/

		return hr;



	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		}

{

};

	XMStoreFloat4(&clb.eyePos, eye);



			default:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//Create Index

}

				break;

	{

			}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_BUFFER_DESC cbDesc;

	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))



	m_Viewport.MinDepth = 0.0f;

}

	if (FAILED(hr))

#include <iostream>

			exit(1);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pTextureView = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			}

 */





		return 1;



	SDL_DestroyRenderer(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4X4 view;

#include <SDL.h>

	D3D11_SUBRESOURCE_DATA vrData;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#ifdef _DEBUG

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		{

{

	HRESULT              hr;

};

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



}
	{



	ibDesc.StructureByteStride = 0;



	SDL_Quit();

		if (!ret)

			{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			default:

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.CPUAccessFlags = 0;

	enum KeyPressSurfaces



	{



	enum KeyPressSurfaces

	vrData.pSysMem = &pVList[0];

	if (!reader.Warning().empty())

	if (FAILED(hr))

	{

		SDL_RenderClear(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	// Loop over shapes

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;





	{

HRESULT CD3DTest::Create(HWND hwnd)

{

		KEY_PRESS_SURFACE_DOWN,

		return hr;

		return hr;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#include <iostream>

	//Clean up our objects and quit

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.OutputWindow = hwnd;

			case SDLK_DOWN:

		SDL_Delay(1000);

				// access to vertex



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4         eyePos;   //視点座標

		&error,



	cbDesc.StructureByteStride = 0;



	SDL_Quit();



	}

CD3DTest::CD3DTest()

{



	if (FAILED(hr))



	{

}

	//頂点シェーダー生成



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

	{

				break;







	tinyobj::ObjReader reader;

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexShader);

		&shapes,

int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);



				tinyobj::real_t ty =

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			switch (e.key.keysym.sym)

		return hr;

}



int main(int, char**)

int main(int, char**)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		KEY_PRESS_SURFACE_UP,



	tinyobj::ObjReader reader;

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

#define TINYOBJLOADER_IMPLEMENTATION

	return hr;

		D3D_DRIVER_TYPE_HARDWARE,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4X4 world;

	vector<WORD> indexList;

	{

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

		&m_pSwapChain,

	txDesc.Width = rect.Width();



		&level,



		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	return;



	bool ret = tinyobj::LoadObj(

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

{

	m_pSwapChain = NULL;

		return hr;

CD3DTest::~CD3DTest()

		return hr;

	m_pTexture = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

CD3DTest::CD3DTest()

	auto& attrib = reader.GetAttrib();

	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		else if (e.type == SDL_KEYDOWN)

	//深度ステンシルバッファ作成

	m_pVertexShader = NULL;

		return hr;



	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	while (SDL_PollEvent(&e) != 0)



	XMFLOAT4X4 projection;

			case SDLK_LEFT:

	m_IndexCount = 0;







	SDL_DestroyRenderer(ren);

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pTexture);

{

	XMFLOAT4 pos;               //座標(x,y,z)

	return 0;

		delete[] pVList;

	}

	if (!reader.ParseFromFile(inputfile, reader_config))

#ifdef _DEBUG

	ZeroMemory(&txDesc, sizeof(txDesc));

			for (size_t v = 0; v < num_vertices; v++)

	m_pDepthStencilView = NULL;

	m_pPixelShader = NULL;

		}



		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyTexture(tex);

		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

		D3D_DRIVER_TYPE_HARDWARE,

#endif

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ConstantLight    pntLight; //点光源

			{

		exit(1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vector<WORD> indexList;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//定数バッファ作成

	if (!reader.Warning().empty())

	XMFLOAT4         eyePos;   //視点座標

	//Clean up our objects and quit

	cbDesc.StructureByteStride = 0;

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC vbDesc;

	{



				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		&m_pImmediateContext);

		&shapes,

				WORD index = idx.vertex_index;

			break;

	m_Viewport.TopLeftY = 0;

	ID3D11Texture2D* pBackBuffer;

	txDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))





			index_offset += num_vertices;

void CD3DTest::Render()

	//ビューポート設定

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

int main(int, char**)



		return hr;

		m_pImmediateContext->ClearState();

			for (size_t v = 0; v < fv; v++)

	m_pVertexBuffer = NULL;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	}

{



struct ConstantLight {

		D3D_DRIVER_TYPE_HARDWARE,

		SDL_Delay(1000);

	tinyobj::attrib_t attrib;

			switch (e.key.keysym.sym)

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	if (!reader.Warning().empty())

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	return 0;

	m_pDevice = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	m_pSwapChain = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_DOWN,

				break;



	reader_config.mtl_search_path = "./"; // Path to material files

	}

		delete[] pVList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyTexture(tex);

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ZeroMemory(&txDesc, sizeof(txDesc));

	vector<WORD> indexList;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDevice);

		{

#ifdef _DEBUG

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			}





	cbDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	}*/

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	XMFLOAT4 specular;          //反射(r,g,b)



 */

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	txDesc.MiscFlags = 0;



	ID3D11Texture2D* pBackBuffer;

	tinyobj::ObjReaderConfig reader_config;

		&error,

	//First we need to start up SDL, and make sure it went ok

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.MinDepth = 0.0f;





	//深度ステンシルバッファ作成

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		{

#include <iostream>

		pIList[j] = indexList[j];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			for (size_t v = 0; v < num_vertices; v++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.eyePos, eye);

{

{

		&materials,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	m_Viewport.TopLeftY = 0;

	if (m_pImmediateContext)

		return 1;

};

}



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pSampler);

			for (size_t v = 0; v < fv; v++)



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Width = rect.Width();

	m_IndexCount = 0;





				tinyobj::real_t ty =

		return hr;



		&level,

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_TOTAL

{



		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pTextureView = NULL;

		{

	//Vertex* pVList = new Vertex[vcount];

				break;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

using std::cout; using std::endl;

	if (FAILED(hr))



struct ConstantLight {

	::GetClientRect(hwnd, &rect);

#include <SDL.h>

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (int j = 0; j < icount; j++)

	WORD* pIList = new WORD[icount];

	{

		SDL_RenderClear(ren);

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pPixelShader);

	//頂点レイアウト作成





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pMatrixBuffer = NULL;

	vector<WORD> indexList;

		SDL_Delay(1000);

	{

			case SDLK_UP:

	vbDesc.StructureByteStride = 0;

			case SDLK_DOWN:

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	/*



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		//User requests quit

	if (FAILED(hr))

{

	while (SDL_PollEvent(&e) != 0)



			switch (e.key.keysym.sym)

	SDL_DestroyWindow(win);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

int SEGMENT = 36;

	for (int j = 0; j < icount; j++)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int i = 0; i < vcount; i++)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	std::vector<tinyobj::shape_t> shapes;

	UINT offsets = 0;

{

{

	::GetClientRect(hwnd, &rect);

	SDL_DestroyWindow(win);

		return hr;

	m_pTexture = NULL;

	UINT flags = 0;

	{



#include <SDL.h>



		&error,



		}

				break;

				WORD index = idx.vertex_index;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (int i = 0; i < vcount; i++)

	m_pPixelShader = NULL;

	//頂点バッファ作成

	XMFLOAT4X4 projection;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		&level,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.MinDepth = 0.0f;

	LoadObj(vertexlist, indexList);



				tinyobj::real_t ty =

				indexlist.push_back(idx.vertex_index);

			index_offset += num_vertices;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pTextureView = NULL;

	vbDesc.CPUAccessFlags = 0;

			default:

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pSwapChain);

	dsDesc.Texture2D.MipSlice = 0;



		return hr;



	XMFLOAT4 specular;          //反射(r,g,b)



		return hr;

	SAFE_RELEASE(m_pPixelShader);

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	// Loop over shapes





	SAFE_RELEASE(m_pPixelShader);

	m_pSwapChain = NULL;

		m_pImmediateContext->ClearState();

	}

			case SDLK_DOWN:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		R"(cube.obj)");

	m_pTextureView = NULL;

				break;

	std::string imagePath = "hello.bmp";

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	Release();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	Release();

	//ビューポート設定

	for (int i = 0; i < 3; i++)

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.Windowed = TRUE;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			}

	}

	tinyobj::ObjReader reader;





		delete[] pIList;

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				indexlist.push_back(idx.vertex_index);

				// access to vertex

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4X4 world;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pVertexShader);



	m_pDevice = NULL;

	XMFLOAT4X4 world;

#include <iostream>

	return 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_LEFT:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



#include <SDL.h>

		return hr;

			}

	SDL_Quit();

		return hr;

}



#endif

	{

			}

	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pLightBuffer);

	m_pLightBuffer = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	}

	SAFE_RELEASE(m_pVertexBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ibDesc.StructureByteStride = 0;



	{



	}

		KEY_PRESS_SURFACE_TOTAL

{

			for (size_t v = 0; v < fv; v++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	{

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;

		SDL_Delay(1000);

	D3D11_BUFFER_DESC cbDesc;

				break;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

HRESULT CD3DTest::Create(HWND hwnd)



		SDL_Delay(1000);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	tinyobj::ObjReader reader;

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyRenderer(ren);

	{

	SAFE_RELEASE(m_pTextureView);

	tinyobj::ObjReaderConfig reader_config;



	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	/*

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

struct ConstantLightBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferDesc.Width = rect.Width();

	Vertex* pVList = new Vertex[vcount];



		delete[] pVList;



	XMFLOAT4X4 projection;

	SDL_FreeSurface(suf);





		KEY_PRESS_SURFACE_DOWN,

	SDL_DestroyRenderer(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pInputLayout = NULL;

	}



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	D3D11_BUFFER_DESC vbDesc;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

	{

	//定数バッファ作成

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include "DirectXManager.h"



	m_pPixelShader = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_FreeSurface(bmp);



	Release();

	SAFE_RELEASE(m_pDevice);

	SDL_DestroyTexture(tex);







	if (FAILED(hr))





	XMFLOAT4 ambient;           //環境(r,g,b)

	irData.SysMemPitch = 0;

			case SDLK_UP:

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderPresent(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&scDesc,

		&attrib,



	//ビューポート設定

/*

	m_IndexCount = 0;

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//vector<WORD> index_t;



	vrData.SysMemSlicePitch = 0;



#include <SDL.h>

		SDL_RenderClear(ren);

	vrData.SysMemPitch = 0;

	cbDesc.MiscFlags = 0;

	if (!error.empty())

		return hr;

	//vector<Vertex> vertex_t;



			// Loop over vertices in the face.



	D3D11_BUFFER_DESC ibDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



			index_offset += num_vertices;

 * Lesson 1: Hello World!

};



				tinyobj::real_t tx =

	int     vcount = vertexlist.size();

	{





		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (int i = 0; i < vcount; i++)

	{

struct ConstantLightBuffer {

	vbDesc.MiscFlags = 0;

				break;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				break;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_Delay(1000);

		return hr;

	m_pPixelShader = NULL;

		}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_DestroyWindow(win);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		else if (e.type == SDL_KEYDOWN)

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.Windowed = TRUE;

	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

	//ピクセルシェーダー生成

	};



		SDL_RenderClear(ren);

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (int i = 0; i < vcount; i++)

	UINT strides = sizeof(Vertex);

		if (e.type == SDL_QUIT)

	vector<Vertex> vertexlist;

			exit(1);

	SAFE_RELEASE(m_pDepthStencilView);

	UINT flags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&error,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain = NULL;

int main(int, char**)

	m_pTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMStoreFloat4(&clb.eyePos, eye);



	if (!error.empty())

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantLight {

		SDL_RenderCopy(ren, tex, NULL, NULL);



	irData.pSysMem = &pIList[0];

#endif

		return hr;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	m_pMatrixBuffer = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::attrib_t attrib;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4X4 world;

		m_pImmediateContext->ClearState();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

	for (int i = 0; i < 3; i++)



			index_offset += num_vertices;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		return hr;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			index_offset += num_vertices;

	//vector<WORD> index_t;

				WORD index = idx.vertex_index;

{

	scDesc.OutputWindow = hwnd;

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//ピクセルシェーダー生成



	std::string imagePath = "hello.bmp";

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

	Vertex* pVList = new Vertex[vcount];

{



	vbDesc.CPUAccessFlags = 0;

		{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		D3D_DRIVER_TYPE_HARDWARE,

	ZeroMemory(&txDesc, sizeof(txDesc));

		SDL_RenderPresent(ren);

struct ConstantMaterial {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	if (FAILED(hr))





	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty =

};



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int j = 0; j < icount; j++)





int main(int, char**)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	std::vector<tinyobj::shape_t> shapes;

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.CPUAccessFlags = 0;



	LoadObj(vertexlist, indexList);

	while (SDL_PollEvent(&e) != 0)







	m_pMatrixBuffer = NULL;

				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	}

	{

	SDL_DestroyWindow(win);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

	vbDesc.StructureByteStride = 0;

		&shapes,



	SDL_Event e;

			for (size_t v = 0; v < fv; v++)

	tinyobj::attrib_t attrib;

			case SDLK_LEFT:

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext = NULL;

	}

				vertex.push_back(vertex_tmp);

 */

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = 0;

	HRESULT              hr;

			//Select surfaces based on key press

	{

	bool ret = tinyobj::LoadObj(

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	Release();

void CD3DTest::Render()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

using std::cout; using std::endl;



	Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	return 0;

	std::string error;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

}
	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	m_pDepthStencilView = NULL;





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		pIList[j] = indexList[j];

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_RIGHT,



	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pTextureView);

	ConstantMaterial material; //物体の質感

			exit(1);





	SAFE_RELEASE(m_pImmediateContext);

	m_pDepthStencilTexture = NULL;



	//インデックスバッファ作成

	m_Angle += XMConvertToRadians(1.0f);



	SDL_Quit();

	float    nearZ = 0.1f;

				// access to vertex

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	while (SDL_PollEvent(&e) != 0)

#define TINYOBJLOADER_IMPLEMENTATION

	return;



	SAFE_RELEASE(m_pImmediateContext);

	m_pSampler = NULL;

}


	CRect                rect;

	for (int i = 0; i < vcount; i++)

	cbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.Warning().empty())

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	int     vcount = vertexlist.size();



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			//Select surfaces based on key press

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.MiscFlags = 0;

	dsDesc.Format = txDesc.Format;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//頂点レイアウト作成

	for (int i = 0; i < vcount; i++)

	//vector<WORD> index_t;



	XMFLOAT4         eyePos;   //視点座標

		}

				break;





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;



#ifdef _DEBUG

	enum KeyPressSurfaces



	if (FAILED(hr))

		SDL_RenderPresent(ren);

void CD3DTest::Render()

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		pVList[i] = vertexlist[i];

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	{

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		&scDesc,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

using std::cout; using std::endl;

	}

using std::cout; using std::endl;

	D3D_FEATURE_LEVEL level;

	//インデックスバッファ作成

{

	for (const auto& shape : shapes)

	}

	XMFLOAT4X4 projection;

}





	txDesc.SampleDesc.Count = 1;

	m_pLightBuffer = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	bool ret = tinyobj::LoadObj(

struct ConstantMaterial {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{

	{

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.BufferDesc.Height = rect.Height();

		D3D11_SDK_VERSION,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.StructureByteStride = 0;



	txDesc.MiscFlags = 0;







		{

		KEY_PRESS_SURFACE_UP,

		}

	m_pInputLayout = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//頂点バッファ作成



	enum KeyPressSurfaces

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

struct ConstantLightBuffer {

};



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pLightBuffer);

	m_pMatrixBuffer = NULL;

	}

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.MaxDepth = 1.0f;

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	txDesc.SampleDesc.Quality = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	auto& shapes = reader.GetShapes();



	//インデックスバッファ作成

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	// Loop over shapes





	scDesc.Windowed = TRUE;



#include "DirectXManager.h"

	// Loop over shapes

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	return 0;

	for (int i = 0; i < 3; i++)

				WORD index = idx.vertex_index;

#endif

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}



	m_pIndexBuffer = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

{

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t ty =

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				WORD index = idx.vertex_index;

			for (size_t v = 0; v < num_vertices; v++)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	std::vector<tinyobj::shape_t> shapes;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	Release();





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

int SEGMENT = 36;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{



		else if (e.type == SDL_KEYDOWN)

	m_pLightBuffer = NULL;

		if (!reader.Error().empty())

	if (m_pImmediateContext)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//深度ステンシルバッファ作成

	if (FAILED(hr))

		SDL_RenderClear(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

		SDL_RenderClear(ren);



		&m_pDevice,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};



	irData.pSysMem = &pIList[0];

				WORD index = idx.vertex_index;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//ピクセルシェーダー生成



	if (SDL_Init(SDL_INIT_VIDEO != 0))

			int num_vertices = shape.mesh.num_face_vertices[f];

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			{

	if (FAILED(hr))



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





};

	bool ret = tinyobj::LoadObj(

		D3D_DRIVER_TYPE_HARDWARE,

	std::vector<tinyobj::shape_t> shapes;

	if (m_pImmediateContext)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pInputLayout = NULL;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantLightBuffer {

			{

	SDL_FreeSurface(bmp);

		return hr;

	ConstantLightBuffer clb;

};

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext = NULL;

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

struct ConstantMaterial {





	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	std::string inputfile = "test.obj";



		return hr;

		return hr;

}



	SAFE_RELEASE(m_pDevice);

	vbDesc.MiscFlags = 0;

	enum KeyPressSurfaces

	/*

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//頂点シェーダー生成

		exit(1);

	m_pSwapChain = NULL;

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//ピクセルシェーダー生成

		return 1;

	if (FAILED(hr))

	enum KeyPressSurfaces

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			break;

	delete[] pIList;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

int main(int, char**)



	cbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vbDesc.MiscFlags = 0;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMFLOAT4         eyePos;   //視点座標

	{

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_LEFT:

	m_pTextureView = NULL;

	tinyobj::ObjReader reader;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	WORD   icount = indexList.size();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		D3D11_SDK_VERSION,

	XMFLOAT4X4 world;





	return 0;

			index_offset += num_vertices;

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//Clean up our objects and quit

		SDL_Delay(1000);

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <iostream>

		SDL_Delay(1000);

	m_pMatrixBuffer = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pTexture = NULL;

				tinyobj::real_t tx =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	};



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	};

		return 1;

				// access to vertex

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

};

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



	std::string inputfile = "test.obj";

		else if (e.type == SDL_KEYDOWN)

	}

	SDL_FreeSurface(bmp);



struct ConstantMatrixBuffer {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	m_IndexCount = icount;

void CD3DTest::Release()



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				WORD index = idx.vertex_index;





	ConstantMatrixBuffer cmb;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	::ZeroMemory(&scDesc, sizeof(scDesc));



	dsDesc.Format = txDesc.Format;



	SAFE_RELEASE(m_pVertexShader);



		{

using std::cout; using std::endl;

		pLevels,

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	cbDesc.MiscFlags = 0;

int SEGMENT = 36;

	//Key press surfaces constants

	SDL_DestroyTexture(tex);

	//vector<WORD> index_t;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantLight    pntLight; //点光源

		KEY_PRESS_SURFACE_TOTAL



	float    aspect = m_Viewport.Width / m_Viewport.Height;

			}

	m_Viewport.TopLeftY = 0;

}

	}





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <SDL.h>



	if (FAILED(hr))



		&shapes,

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

CD3DTest::~CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

int SEGMENT = 36;

{

	{







	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			{

	m_pImmediateContext = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		D3D11_SDK_VERSION,

		return 1;

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;







		return 1;

	vbDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	txDesc.MiscFlags = 0;



	delete[] pIList;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vbDesc.CPUAccessFlags = 0;



		return hr;

	SAFE_RELEASE(m_pTextureView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//頂点バッファ作成

	m_pDepthStencilView = NULL;

	std::string error;

	//ビューポート設定

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_VertexCount = vcount;

	}



#include <iostream>

	D3D11_SUBRESOURCE_DATA irData;







	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



}

	irData.SysMemPitch = 0;



		{

	float    farZ = 100.0f;

	HRESULT              hr;

	XMFLOAT4X4 view;

struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

	while (SDL_PollEvent(&e) != 0)









	XMFLOAT4X4 projection;

		KEY_PRESS_SURFACE_DEFAULT,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	delete[] pVList;

	XMFLOAT4         eyePos;   //視点座標

		{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_SUBRESOURCE_DATA irData;

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.MaxDepth = 1.0f;

		}

};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	::GetClientRect(hwnd, &rect);

	}

	//ピクセルシェーダー生成

	txDesc.Width = rect.Width();

void CD3DTest::Release()

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	vbDesc.MiscFlags = 0;

	irData.SysMemSlicePitch = 0;

	//vector<Vertex> vertex_t;





	txDesc.MipLevels = 1;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_DestroyRenderer(ren);

	txDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pPixelShader = NULL;

void CD3DTest::Release()

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	SAFE_RELEASE(m_pSampler);

#include "DirectXManager.h"



	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



#include <iostream>

		&m_pImmediateContext);

	m_pSampler = NULL;

{

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pInputLayout = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_DOWN,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	Vertex* pVList = new Vertex[vcount];

	}*/

	{

	WORD   icount = indexList.size();



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

		return hr;





	SDL_DestroyWindow(win);

				vertex.push_back(vertex_tmp);

	UINT strides = sizeof(Vertex);



	{

		pVList[i] = vertexlist[i];

	LoadObj(vertexlist, indexList);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Quit();

		&m_pDevice,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

{



	float    farZ = 100.0f;

			{

	{

	XMFLOAT4X4 world;

	m_pSwapChain->Present(0, 0);

	{

	m_Angle += XMConvertToRadians(1.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;



	for (const auto& shape : shapes)



	{



	for (int j = 0; j < icount; j++)

CD3DTest::~CD3DTest()

		if (!reader.Error().empty())



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_UP,

		pIList[j] = indexList[j];

		SDL_RenderClear(ren);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	return;



	txDesc.ArraySize = 1;



	LoadObj(vertexlist, indexList);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//ピクセルシェーダー生成

	txDesc.CPUAccessFlags = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

#include <SDL.h>

	//Vertex* pVList = new Vertex[vcount];



		if (e.type == SDL_QUIT)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

{

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)

	//頂点バッファ作成



			default:



{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		NULL,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





			switch (e.key.keysym.sym)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		exit(1);

		if (e.type == SDL_QUIT)

struct ConstantLightBuffer {



	CRect                rect;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Quality = 0;

		return hr;



{

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_LEFT,



{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//頂点バッファ作成

			case SDLK_UP:



	std::vector<tinyobj::material_t> materials;

		cout << "SDL_INIT_ERROR" << endl;



	/*



struct ConstantMaterial {

	SAFE_RELEASE(m_pVertexBuffer);

	for (int i = 0; i < vcount; i++)

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

void CD3DTest::Release()

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.MiscFlags = 0;

	m_pPixelShader = NULL;



	Release();

				break;

	D3D11_BUFFER_DESC vbDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;

		NULL,



	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		KEY_PRESS_SURFACE_UP,







	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pRenderTargetView = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	LoadObj(vertexlist, indexList);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				// access to vertex

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		exit(1);

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);

	//vector<WORD> index_t;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}



		return hr;



	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	//頂点バッファ作成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			case SDLK_LEFT:



 * Lesson 1: Hello World!

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	m_pLightBuffer = NULL;



				break;



{

	SAFE_RELEASE(m_pImmediateContext);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL level;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

CD3DTest::~CD3DTest()

}

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		pIList[j] = indexList[j];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

			// Loop over vertices in the face.

		D3D11_SDK_VERSION,

	txDesc.ArraySize = 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	m_pDepthStencilView = NULL;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	enum KeyPressSurfaces

		SDL_Delay(1000);

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	float    farZ = 100.0f;

				// access to vertex

			for (size_t v = 0; v < fv; v++)

		KEY_PRESS_SURFACE_RIGHT,

	m_pInputLayout = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	//First we need to start up SDL, and make sure it went ok







	//テクスチャ読み込み



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		R"(cube.obj)");

	}

	SAFE_RELEASE(m_pTextureView);

	SDL_DestroyRenderer(ren);

 */



			switch (e.key.keysym.sym)



{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





			index_offset += num_vertices;

			case SDLK_LEFT:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&m_pDevice,

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			exit(1);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_BUFFER_DESC vbDesc;



	XMFLOAT4X4 world;

	//頂点バッファ作成

		if (e.type == SDL_QUIT)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//Clean up our objects and quit

			case SDLK_LEFT:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//Key press surfaces constants

	// Loop over shapes

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	m_pLightBuffer = NULL;

		delete[] pIList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	dsDesc.Format = txDesc.Format;

	Release();

	//Create Index

	for (int i = 0; i < vcount; i++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#endif

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



{



	XMFLOAT4X4 view;

		1,

	int     vcount = vertexlist.size();

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		pVList[i] = vertexlist[i];

	}

	SDL_FreeSurface(suf);



	XMFLOAT4X4 projection;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	return 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}*/





#include <iostream>

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	std::string error;



			}

	if (!error.empty())

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t tx =

	}

			for (size_t v = 0; v < num_vertices; v++)



	if (FAILED(hr))

			index_offset += num_vertices;

		m_pImmediateContext->ClearState();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	irData.pSysMem = &pIList[0];





				WORD index = idx.vertex_index;

	txDesc.MiscFlags = 0;

		m_pImmediateContext->ClearState();



#include "DirectXManager.h"



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	return hr;



	ibDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	//Vertex* pVList = new Vertex[vcount];

struct ConstantMatrixBuffer {

			default:

		}

	}

	m_pSwapChain = NULL;

		&shapes,

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_LEFT:



#include <iostream>

	txDesc.MipLevels = 1;



	std::string error;



	m_Viewport.MaxDepth = 1.0f;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

struct ConstantMatrixBuffer {

	XMFLOAT4         ambient;  //環境光(r,g,b)



};

	WORD* pIList = new WORD[icount];





	D3D11_BUFFER_DESC ibDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (!ret)





	}

		size_t index_offset = 0;  // インデントのオフセット

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_DestroyTexture(tex);

	UINT flags = 0;

	vrData.SysMemPitch = 0;

	for (int i = 0; i < vcount; i++)

	SDL_Quit();

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_DestroyTexture(tex);

			index_offset += num_vertices;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pLightBuffer = NULL;



	m_VertexCount = 0;

	ibDesc.CPUAccessFlags = 0;



	Release();

	scDesc.BufferDesc.Height = rect.Height();

	m_pDepthStencilTexture = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	irData.SysMemPitch = 0;

		&materials,

	m_pVertexShader = NULL;

				break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	for (int i = 0; i < 3; i++)



			//Select surfaces based on key press

	//インデックスバッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}





	scDesc.Windowed = TRUE;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	for (const auto& shape : shapes)

			//Select surfaces based on key press

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SAFE_RELEASE(m_pImmediateContext);

		KEY_PRESS_SURFACE_LEFT,

	m_pDevice = NULL;

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.OutputWindow = hwnd;

	SDL_FreeSurface(bmp);

	//頂点バッファ作成



		KEY_PRESS_SURFACE_UP,



	SDL_DestroyRenderer(ren);

	m_Viewport.TopLeftY = 0;

	for (size_t s = 0; s < shapes.size(); s++)

 * Lesson 1: Hello World!

	UINT strides = sizeof(Vertex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_IndexCount = icount;





		SDL_Delay(1000);

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

		//User presses a key

	SDL_Quit();

	SDL_FreeSurface(bmp);

CD3DTest::~CD3DTest()



	irData.SysMemPitch = 0;

	{

};

	D3D11_BUFFER_DESC ibDesc;

#ifdef _DEBUG



};

		return hr;



	{

			exit(1);

		return hr;

	cbDesc.StructureByteStride = 0;

{

		SDL_RenderClear(ren);

		if (e.type == SDL_QUIT)

	m_Viewport.Width = (FLOAT)rect.Width();



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pSwapChain);

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	vector<Vertex> vertexlist;

};

	for (const auto& shape : shapes)

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	tinyobj::ObjReaderConfig reader_config;

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

{



	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//vector<WORD> index_t;

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;



	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	for (int i = 0; i < 3; i++)



	cbDesc.MiscFlags = 0;

		return hr;

		}

	float    nearZ = 0.1f;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

		SDL_Delay(1000);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))







		D3D11_SDK_VERSION,

		{



			switch (e.key.keysym.sym)

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.MiscFlags = 0;

		return hr;

	//ピクセルシェーダー生成

	//Create Index

{

	/*

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		}

	SDL_FreeSurface(suf);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			// Loop over vertices in the face.

}

	SAFE_RELEASE(m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pSampler = NULL;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User requests quit





{





	}

struct ConstantLight {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4         eyePos;   //視点座標



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::string error;



 */

	SAFE_RELEASE(m_pDepthStencilView);

	{

	SAFE_RELEASE(m_pDepthStencilView);

	dsDesc.Texture2D.MipSlice = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pDevice,

};

	m_Viewport.TopLeftY = 0;

	}

		{

		if (e.type == SDL_QUIT)







	scDesc.BufferDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	int     vcount = vertexlist.size();

	SDL_DestroyWindow(win);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		flags,

#include "DirectXManager.h"

}



	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pInputLayout = NULL;

	scDesc.OutputWindow = hwnd;

	}

		return hr;

	dsDesc.Format = txDesc.Format;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	SDL_Quit();



	Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	};

			{

			{



	m_pTextureView = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

/*

	scDesc.SampleDesc.Quality = 0;

		D3D11_SDK_VERSION,

	Release();

		size_t index_offset = 0;

	//Key press surfaces constants

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pInputLayout = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//vector<Vertex> vertex_t;

	m_Viewport.MaxDepth = 1.0f;



	m_Viewport.MaxDepth = 1.0f;

#include <SDL.h>



	std::vector<tinyobj::material_t> materials;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	SAFE_RELEASE(m_pInputLayout);

CD3DTest::CD3DTest()



		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t ty =

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		size_t index_offset = 0;  // インデントのオフセット

				WORD index = idx.vertex_index;

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{

	std::string error;

		return hr;

	m_VertexCount = vcount;

	ConstantMaterial material; //物体の質感

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pDevice = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



#include <SDL.h>

		SDL_RenderCopy(ren, tex, NULL, NULL);

		m_pImmediateContext->ClearState();





	if (!reader.ParseFromFile(inputfile, reader_config))

		}





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		{

				break;

	{

	m_pDevice = NULL;

	SDL_DestroyWindow(win);

	SDL_Event e;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);



		// Loop over faces(polygon)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



				break;

	cbDesc.CPUAccessFlags = 0;

	/*



	}





	{

	cbDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;



	for (size_t s = 0; s < shapes.size(); s++)

	CRect                rect;

struct ConstantLightBuffer {

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.Width = rect.Width();

				indexlist.push_back(idx.vertex_index);

			{

	}

		SDL_RenderClear(ren);



	XMStoreFloat4(&clb.eyePos, eye);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index

	m_IndexCount = 0;



	irData.pSysMem = &pIList[0];

	txDesc.ArraySize = 1;

	return 0;

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

			switch (e.key.keysym.sym)

		return hr;

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

		{

		cout << "SDL_INIT_ERROR" << endl;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (!error.empty())

	}

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			for (size_t v = 0; v < num_vertices; v++)

	WORD* pIList = new WORD[icount];

		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

int main(int, char**)



		flags,

	scDesc.BufferCount = 1;

	//頂点バッファ作成

	SAFE_RELEASE(m_pIndexBuffer);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pTextureView);

	SDL_Quit();

	vbDesc.StructureByteStride = 0;

}

	::ZeroMemory(&scDesc, sizeof(scDesc));

			index_offset += fv;

		return hr;



	{

			case SDLK_LEFT:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		NULL,

	XMFLOAT4 specular;          //反射(r,g,b)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.MiscFlags = 0;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}
	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	for (size_t s = 0; s < shapes.size(); s++)



	vbDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;





		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::attrib_t attrib;

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_SUBRESOURCE_DATA vrData;

#include <SDL.h>

			//Select surfaces based on key press



	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_RIGHT:

	ConstantMaterial material; //物体の質感

	XMFLOAT4X4 world;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 world;

		D3D_DRIVER_TYPE_HARDWARE,

	for (size_t s = 0; s < shapes.size(); s++)

		&scDesc,





		pLevels,



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyTexture(tex);

	//頂点バッファ作成

	D3D11_SAMPLER_DESC smpDesc;

		if (!reader.Error().empty())

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pMatrixBuffer);

	return 0;

	vrData.SysMemSlicePitch = 0;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#include <SDL.h>

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 specular;          //反射(r,g,b)



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	D3D11_BUFFER_DESC vbDesc;

	txDesc.Height = rect.Height();

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	//頂点レイアウト作成

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{



		1,

	}

	txDesc.SampleDesc.Count = 1;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}*/

	{

#include <SDL.h>

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

	auto& attrib = reader.GetAttrib();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				break;

{

/*

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pInputLayout = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pVertexShader);

}

	//深度ステンシルバッファ作成

	UINT offsets = 0;

		return hr;



	m_pLightBuffer = NULL;

	cbDesc.MiscFlags = 0;



	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	m_pImmediateContext = NULL;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		//User presses a key

				vertex.push_back(vertex_tmp);

		}



}
const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.eyePos, eye);

	}

		&scDesc,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.Windowed = TRUE;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



 */



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	while (SDL_PollEvent(&e) != 0)

	m_VertexCount = vcount;

		&m_pImmediateContext);

				break;



	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



			{

		return hr;

void CD3DTest::Render()

	//頂点シェーダー生成

		return hr;



	m_pVertexBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#define TINYOBJLOADER_IMPLEMENTATION

		pIList[j] = indexList[j];

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	SAFE_RELEASE(m_pVertexBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

}

		return hr;

 */

	HRESULT              hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;



CD3DTest::~CD3DTest()

	scDesc.BufferDesc.Height = rect.Height();

		delete[] pIList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_IndexCount = 0;



	if (FAILED(hr))

	txDesc.MipLevels = 1;

		m_pImmediateContext->ClearState();

		// Loop over faces(polygon)

	enum KeyPressSurfaces





	XMFLOAT4 ambient;           //環境(r,g,b)

	vbDesc.CPUAccessFlags = 0;

		{

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));





	vbDesc.MiscFlags = 0;

}



	auto& materials = reader.GetMaterials();

struct ConstantMaterial {

		return hr;

		{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			exit(1);



	for (size_t s = 0; s < shapes.size(); s++)

	std::vector<tinyobj::material_t> materials;

	SDL_DestroyRenderer(ren);

	for (int i = 0; i < vcount; i++)

	{

	txDesc.ArraySize = 1;

	//インデックスバッファ作成



		1,





	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&materials,

		&m_pSwapChain,

	//Create Index



	m_pDevice = NULL;

	SAFE_RELEASE(m_pSwapChain);

{

	//Vertex* pVList = new Vertex[vcount];



				break;



	txDesc.MipLevels = 1;

		// Loop over faces(polygon)

	ConstantMatrixBuffer cmb;



	{

	if (!reader.Warning().empty())

	SDL_FreeSurface(suf);



	SAFE_RELEASE(m_pInputLayout);

	//深度ステンシルバッファ作成

using std::cout; using std::endl;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pTexture = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	for (int i = 0; i < 3; i++)

		&m_pImmediateContext);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyTexture(tex);



	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

		&m_pSwapChain,

	ConstantMatrixBuffer cmb;

	D3D11_BUFFER_DESC cbDesc;

	scDesc.BufferDesc.Width = rect.Width();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	UINT flags = 0;

		delete[] pIList;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				vertex.push_back(vertex_tmp);

	WORD* pIList = new WORD[icount];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	{

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pDepthStencilView);

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	UINT strides = sizeof(Vertex);

	cbDesc.MiscFlags = 0;

		// Loop over faces(polygon)

		else if (e.type == SDL_KEYDOWN)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//テクスチャ読み込み

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!error.empty())

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.MiscFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	for (int j = 0; j < icount; j++)

				indexlist.push_back(index);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

	{

	SDL_DestroyWindow(win);

		return hr;



	m_pInputLayout = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

		SDL_RenderClear(ren);



	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	Vertex* pVList = new Vertex[vcount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	D3D11_TEXTURE2D_DESC txDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			index_offset += num_vertices;

	D3D11_BUFFER_DESC cbDesc;

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

};

	D3D11_BUFFER_DESC cbDesc;

#include "DirectXManager.h"

};

				vertex.push_back(vertex_tmp);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pInputLayout = NULL;

		//User requests quit

void CD3DTest::Render()

	if (FAILED(hr))

	delete[] pVList;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;

		KEY_PRESS_SURFACE_RIGHT,



		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_RenderPresent(ren);

		{

		return hr;

	// Loop over shapes

	ibDesc.CPUAccessFlags = 0;

	ibDesc.MiscFlags = 0;





		m_pImmediateContext->ClearState();

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Width = rect.Width();



				indexlist.push_back(idx.vertex_index);

	//インデックスバッファ作成

	LoadObj(vertexlist, indexList);

	m_pInputLayout = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	float    nearZ = 0.1f;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	return;

	//頂点バッファ作成

	std::vector<tinyobj::shape_t> shapes;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	scDesc.SampleDesc.Count = 1;

	pBackBuffer->Release();

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& materials = reader.GetMaterials();



				// access to vertex

	txDesc.SampleDesc.Quality = 0;

		return hr;

	m_pInputLayout = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





#endif

	m_pSwapChain = NULL;


