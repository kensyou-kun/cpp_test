	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		flags,

	ibDesc.CPUAccessFlags = 0;



				break;





	};

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Quit();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	delete[] pIList;

}

	scDesc.Windowed = TRUE;

	txDesc.MiscFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))



		pIList[j] = indexList[j];

		return hr;



	if (!reader.Warning().empty())

void CD3DTest::Render()

	{

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

				break;

	//頂点バッファ作成





	}

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	SAFE_RELEASE(m_pDepthStencilView);

	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.MiscFlags = 0;

	SDL_Quit();



	//Clean up our objects and quit



	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.Height = rect.Height();

	irData.pSysMem = &pIList[0];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

		pVList[i] = vertexlist[i];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			case SDLK_LEFT:



				break;

	m_IndexCount = icount;

	SAFE_RELEASE(m_pMatrixBuffer);

		// Loop over faces(polygon)

		// Loop over faces(polygon)



	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pDepthStencilView);



	::GetClientRect(hwnd, &rect);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	UINT offsets = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	ID3D11Texture2D* pBackBuffer;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	WORD   icount = indexList.size();

	irData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferCount = 1;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	D3D_FEATURE_LEVEL level;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_DOWN,

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			int num_vertices = shape.mesh.num_face_vertices[f];





		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	{

}

	//vector<Vertex> vertex_t;



				// access to vertex

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	cbDesc.CPUAccessFlags = 0;

	irData.SysMemSlicePitch = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

			index_offset += fv;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    nearZ = 0.1f;

	enum KeyPressSurfaces

		pVList[i] = vertexlist[i];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pTexture = NULL;





		pLevels,

{

	m_pDepthStencilView = NULL;







	if (!error.empty())

	//Vertex* pVList = new Vertex[vcount];

	scDesc.BufferCount = 1;

		R"(cube.obj)");

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pPixelShader);

			}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//ビューポート設定

			}

	for (int i = 0; i < vcount; i++)

#include "DirectXManager.h"

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pRenderTargetView = NULL;



	}*/

		else if (e.type == SDL_KEYDOWN)

		}

	vrData.SysMemSlicePitch = 0;



	auto& materials = reader.GetMaterials();





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_IndexCount = icount;



	SAFE_RELEASE(m_pLightBuffer);

	pBackBuffer->Release();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

		&materials,

{

	}

	scDesc.SampleDesc.Count = 1;

		return hr;



	for (const auto& shape : shapes)



	{

void CD3DTest::Release()

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}

	if (m_pImmediateContext)

		&scDesc,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

		R"(cube.obj)");

	irData.SysMemPitch = 0;

	}

	m_VertexCount = 0;

	std::string error;

		exit(1);

		m_pImmediateContext->ClearState();



	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	}

		return 1;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_DestroyWindow(win);

		return hr;

		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_SAMPLER_DESC smpDesc;

	D3D11_BUFFER_DESC vbDesc;

}

	dsDesc.Format = txDesc.Format;



		&materials,

	XMFLOAT4X4 view;

	dsDesc.Format = txDesc.Format;





	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	float    fov = XMConvertToRadians(20.0f);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;



	if (FAILED(hr))

int SEGMENT = 36;

		&m_pDevice,

CD3DTest::CD3DTest()

	XMFLOAT4X4 projection;

	{

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pSampler);





		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		{

	vector<WORD> indexList;

	m_VertexCount = 0;

	D3D11_SUBRESOURCE_DATA irData;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantMaterial {

	}

	if (FAILED(hr))

		return hr;









	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}



	ConstantLightBuffer clb;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





		pIList[j] = indexList[j];

	for (size_t s = 0; s < shapes.size(); s++)

	vrData.pSysMem = &pVList[0];

	DXGI_SWAP_CHAIN_DESC scDesc;

/*

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//頂点レイアウト作成

	delete[] pVList;

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	WORD* pIList = new WORD[icount];

{

				vertex.push_back(vertex_tmp);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_IndexCount = icount;

}

	m_Viewport.MaxDepth = 1.0f;

#endif

#define TINYOBJLOADER_IMPLEMENTATION

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexBuffer = NULL;

	std::string error;



	m_IndexCount = 0;



		}

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.MiscFlags = 0;

		&scDesc,





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;





		KEY_PRESS_SURFACE_UP,

#define TINYOBJLOADER_IMPLEMENTATION

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pInputLayout);

		return hr;

	{

	}

				break;

	SDL_Quit();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.StructureByteStride = 0;



	Vertex* pVList = new Vertex[vcount];



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (!error.empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyWindow(win);

	SDL_DestroyRenderer(ren);





	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#include <SDL.h>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	{

	SDL_FreeSurface(bmp);





	SDL_FreeSurface(bmp);

#include <SDL.h>

		KEY_PRESS_SURFACE_TOTAL

	D3D11_SAMPLER_DESC smpDesc;

			{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ID3D11Texture2D* pBackBuffer;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pDepthStencilView = NULL;

	XMFLOAT4X4 world;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				indexlist.push_back(index);

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	return hr;

	scDesc.SampleDesc.Quality = 0;

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pVertexShader);

	{

#endif

}

	delete[] pIList;



		&attrib,

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSwapChain);



	D3D11_TEXTURE2D_DESC txDesc;



	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

		if (!ret)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

using std::cout; using std::endl;



	//ビューポート設定

		R"(cube.obj)");



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.StructureByteStride = 0;

		return hr;

	txDesc.Height = rect.Height();

	tinyobj::ObjReader reader;



	vbDesc.StructureByteStride = 0;

	//テクスチャ読み込み





};

	SDL_Event e;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	return;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.CPUAccessFlags = 0;

	return hr;

			case SDLK_UP:

			exit(1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

		D3D_DRIVER_TYPE_HARDWARE,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pPixelShader);

	}

	vbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

	XMFLOAT4         eyePos;   //視点座標



#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];







	while (SDL_PollEvent(&e) != 0)



};

	::ZeroMemory(&scDesc, sizeof(scDesc));



};

	scDesc.BufferDesc.Width = rect.Width();

int SEGMENT = 36;

	m_pInputLayout = NULL;

	//ピクセルシェーダー生成

	//頂点シェーダー生成

	m_pSampler = NULL;

	ConstantMatrixBuffer cmb;

	}

	scDesc.BufferDesc.Width = rect.Width();

	//vector<Vertex> vertex_t;

	dsDesc.Texture2D.MipSlice = 0;

	Release();

		return hr;

	XMFLOAT4X4 projection;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





int SEGMENT = 36;

	scDesc.SampleDesc.Count = 1;

		else if (e.type == SDL_KEYDOWN)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Angle += XMConvertToRadians(1.0f);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         eyePos;   //視点座標

int main(int, char**)



		return hr;



	{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			default:

	}

	D3D11_SUBRESOURCE_DATA vrData;



	{

		{



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pSwapChain,

	m_pInputLayout = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		&scDesc,



	enum KeyPressSurfaces



	m_IndexCount = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (m_pImmediateContext)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		else if (e.type == SDL_KEYDOWN)

	vbDesc.CPUAccessFlags = 0;



		// Loop over faces(polygon)

		&m_pDevice,



	}

	m_VertexCount = vcount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

void CD3DTest::Release()

int SEGMENT = 36;

	cbDesc.StructureByteStride = 0;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			for (size_t v = 0; v < num_vertices; v++)

	{

			exit(1);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		1,

	SDL_DestroyRenderer(ren);



{

	//Clean up our objects and quit



}

				vertex.push_back(vertex_tmp);

	SDL_Quit();

		else if (e.type == SDL_KEYDOWN)

		// Loop over faces(polygon)







	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Quit();

	m_IndexCount = icount;

	m_pDepthStencilTexture = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

#include <iostream>

			switch (e.key.keysym.sym)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}
	reader_config.mtl_search_path = "./"; // Path to material files



	D3D11_SAMPLER_DESC smpDesc;

	txDesc.ArraySize = 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//定数バッファ作成

	{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pTexture = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//定数バッファ作成

		return 1;



		if (e.type == SDL_QUIT)

	m_pDevice = NULL;

	tinyobj::ObjReaderConfig reader_config;

	m_pTextureView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

{

	if (FAILED(hr))



	vrData.SysMemPitch = 0;

	//vector<WORD> index_t;

		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		}

	m_Viewport.MinDepth = 0.0f;

	ConstantMaterial material; //物体の質感

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				// access to vertex

			case SDLK_UP:

	::GetClientRect(hwnd, &rect);

			// Loop over vertices in the face.

	m_pSwapChain = NULL;

	SDL_Quit();



				tinyobj::real_t ty =

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.StructureByteStride = 0;

	int     vcount = vertexlist.size();

	{

	return 0;

		&scDesc,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		m_pImmediateContext->ClearState();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			for (size_t v = 0; v < fv; v++)







		return hr;

	delete[] pIList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		pLevels,



	dsDesc.Texture2D.MipSlice = 0;

	WORD   icount = indexList.size();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	/*

	SAFE_RELEASE(m_pMatrixBuffer);

	pBackBuffer->Release();

	SAFE_RELEASE(m_pTexture);

		return hr;





	auto& attrib = reader.GetAttrib();

{



	m_pVertexBuffer = NULL;

		return hr;

int main(int, char**)

		SDL_Delay(1000);

	m_IndexCount = 0;



	irData.pSysMem = &pIList[0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		return hr;



struct ConstantMaterial {

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	//頂点バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	for (const auto& shape : shapes)

 * Lesson 1: Hello World!

	if (FAILED(hr))

	//Create Index

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Texture2D.MipSlice = 0;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_DOWN,

	D3D11_SUBRESOURCE_DATA irData;

int SEGMENT = 36;



	//Clean up our objects and quit

	D3D11_SUBRESOURCE_DATA irData;



	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	for (int i = 0; i < vcount; i++)



	{

	{



	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;







	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	delete[] pIList;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	if (FAILED(hr))

}


	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	while (SDL_PollEvent(&e) != 0)

	for (int j = 0; j < icount; j++)

	bool ret = tinyobj::LoadObj(



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.Windowed = TRUE;

	m_Viewport.MinDepth = 0.0f;



	SDL_Quit();

	m_pDepthStencilTexture = NULL;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	}

{



	XMFLOAT4 ambient;           //環境(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;



	for (int j = 0; j < icount; j++)

	// Loop over shapes

	auto& shapes = reader.GetShapes();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL

#include <iostream>



#include <iostream>

	//頂点バッファ作成

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D_FEATURE_LEVEL level;

		&m_pImmediateContext);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))







	D3D11_SUBRESOURCE_DATA vrData;

	//Create Index

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    nearZ = 0.1f;

	txDesc.SampleDesc.Count = 1;



	}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	ibDesc.MiscFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_LEFT,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	for (const auto& shape : shapes)

		return hr;

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pTextureView = NULL;

	//定数バッファ作成

		return hr;



	{

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);

{

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pSampler);



	SAFE_RELEASE(m_pDepthStencilView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

struct ConstantMaterial {





#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	delete[] pVList;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pSampler);

			}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

		SDL_RenderPresent(ren);

	SDL_Event e;

	m_pSampler = NULL;

{

		}

		m_pImmediateContext->ClearState();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			break;



		size_t index_offset = 0;  // インデントのオフセット

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	{

	D3D11_SUBRESOURCE_DATA irData;



		&m_pDevice,

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	ConstantMatrixBuffer cmb;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.MinDepth = 0.0f;

				indexlist.push_back(index);

}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

struct ConstantMatrixBuffer {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;



#include <iostream>

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#include <SDL.h>

			case SDLK_LEFT:





		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pDepthStencilTexture = NULL;

		return hr;



	//頂点シェーダー生成

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		exit(1);

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		pIList[j] = indexList[j];

	SDL_FreeSurface(bmp);

	}

	::GetClientRect(hwnd, &rect);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4X4 projection;



	for (const auto& shape : shapes)



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&attrib,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pSwapChain);



	{

}



	SAFE_RELEASE(m_pDepthStencilTexture);

		&m_pDevice,

	for (int j = 0; j < icount; j++)





	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_RenderCopy(ren, tex, NULL, NULL);





				indexlist.push_back(idx.vertex_index);

	//頂点シェーダー生成

int main(int, char**)

int main(int, char**)

	vrData.pSysMem = &pVList[0];



	XMStoreFloat4(&clb.eyePos, eye);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		{

	if (FAILED(hr))

	m_pSwapChain = NULL;

int main(int, char**)

	float    farZ = 100.0f;







	SAFE_RELEASE(m_pMatrixBuffer);



	SAFE_RELEASE(m_pSwapChain);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	{

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (m_pImmediateContext)

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext = NULL;



	SAFE_RELEASE(m_pTexture);





	m_pDepthStencilTexture = NULL;

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (size_t s = 0; s < shapes.size(); s++)





	if (FAILED(hr))



	//Clean up our objects and quit

	tinyobj::ObjReader reader;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pVertexBuffer = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.ArraySize = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	txDesc.CPUAccessFlags = 0;

	UINT offsets = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	WORD* pIList = new WORD[icount];



				break;

	XMFLOAT4X4 view;

		&m_pDevice,

	std::vector<tinyobj::shape_t> shapes;

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		//User requests quit

		else if (e.type == SDL_KEYDOWN)

			index_offset += num_vertices;

	m_pLightBuffer = NULL;

	auto& shapes = reader.GetShapes();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			//Select surfaces based on key press

		return hr;

	m_pDepthStencilTexture = NULL;

		pLevels,

		KEY_PRESS_SURFACE_UP,

	DXGI_SWAP_CHAIN_DESC scDesc;



	//深度ステンシルバッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (!reader.Warning().empty())

	LoadObj(vertexlist, indexList);

	SDL_DestroyTexture(tex);



	if (FAILED(hr))

	{



			//Select surfaces based on key press

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		}

		if (!reader.Error().empty())



	SDL_FreeSurface(bmp);

		return hr;

	vrData.SysMemSlicePitch = 0;

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pLightBuffer);





CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pImmediateContext);





	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);





	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_BUFFER_DESC ibDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	WORD* pIList = new WORD[icount];

	return hr;

		return hr;

	m_pRenderTargetView = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

struct ConstantMaterial {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}
	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok



				WORD index = idx.vertex_index;

				break;

}
	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	};

	if (!error.empty())

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





int SEGMENT = 36;

			{

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pPixelShader);

	m_IndexCount = icount;

				break;

	//Vertex* pVList = new Vertex[vcount];

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&error,

	//テクスチャ読み込み

		flags,

	scDesc.BufferDesc.Height = rect.Height();

	//Vertex* pVList = new Vertex[vcount];

	txDesc.Width = rect.Width();

			// Loop over vertices in the face.

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pSwapChain = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	std::string error;

	scDesc.Windowed = TRUE;

	{

	WORD   icount = indexList.size();



				break;

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

				// access to vertex

				tinyobj::real_t tx =

	/*

	enum KeyPressSurfaces

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//vector<WORD> index_t;

			}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4X4 view;

	XMFLOAT4X4 world;

	D3D11_TEXTURE2D_DESC txDesc;

				// access to vertex

}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferDesc.Height = rect.Height();

	}

	vbDesc.MiscFlags = 0;



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&materials,

{

	{



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&shapes,

	XMFLOAT4 specular;          //反射(r,g,b)

};



	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_BUFFER_DESC ibDesc;

		&shapes,



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



}

	// Loop over shapes

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.ArraySize = 1;

	}*/

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		if (!reader.Error().empty())

	}





}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;

			}

	tinyobj::ObjReaderConfig reader_config;

};

	int     vcount = vertexlist.size();

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.SampleDesc.Count = 1;

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4         eyePos;   //視点座標

{



	ID3D11Texture2D* pBackBuffer;

		m_pImmediateContext->ClearState();

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_BUFFER_DESC ibDesc;

	SDL_DestroyWindow(win);

				break;

			case SDLK_DOWN:

{

	{

			// Loop over vertices in the face.

			index_offset += fv;

	XMFLOAT4         eyePos;   //視点座標

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_SUBRESOURCE_DATA irData;

	D3D11_SUBRESOURCE_DATA irData;



	{

	SDL_DestroyWindow(win);



	m_Viewport.MaxDepth = 1.0f;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_Delay(1000);

#include <iostream>

			case SDLK_RIGHT:

			//Select surfaces based on key press

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	WORD* pIList = new WORD[icount];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D11_SDK_VERSION,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    farZ = 100.0f;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;



		}



	SAFE_RELEASE(m_pSwapChain);



	m_pIndexBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Release();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pSampler = NULL;



		&materials,

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	Release();

	UINT strides = sizeof(Vertex);

		SDL_RenderPresent(ren);



	{

	auto& shapes = reader.GetShapes();

		&level,

		1,

		delete[] pVList;

	{

	txDesc.CPUAccessFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	WORD   icount = indexList.size();

		SDL_RenderPresent(ren);

			case SDLK_RIGHT:

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL level;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	float    fov = XMConvertToRadians(20.0f);

	//First we need to start up SDL, and make sure it went ok

CD3DTest::~CD3DTest()

	XMFLOAT4X4 world;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.Width = (FLOAT)rect.Width();

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			for (size_t v = 0; v < fv; v++)

		D3D11_SDK_VERSION,

struct ConstantLightBuffer {

	WORD* pIList = new WORD[icount];

			{





	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pIndexBuffer);



#ifdef _DEBUG

	SDL_DestroyTexture(tex);

	scDesc.BufferCount = 1;

	//Vertex* pVList = new Vertex[vcount];

	UINT flags = 0;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pDevice);

				WORD index = idx.vertex_index;

	txDesc.ArraySize = 1;

	WORD   icount = indexList.size();



	txDesc.CPUAccessFlags = 0;

	};

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	bool ret = tinyobj::LoadObj(

		delete[] pIList;



	m_pSwapChain->Present(0, 0);

	};

			exit(1);

	ConstantLightBuffer clb;

		return hr;



			case SDLK_UP:

	if (!error.empty())

		SDL_RenderClear(ren);



	cbDesc.CPUAccessFlags = 0;

}

		{







	txDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_IMPLEMENTATION

	reader_config.mtl_search_path = "./"; // Path to material files

};

			// Loop over vertices in the face.

	m_Angle += XMConvertToRadians(1.0f);

	{

	//定数バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pDevice);



	cbDesc.StructureByteStride = 0;

		//User requests quit

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_Event e;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	WORD* pIList = new WORD[icount];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



{



	m_VertexCount = 0;







	//Key press surfaces constants

				WORD index = idx.vertex_index;

	if (FAILED(hr))

		&level,

		&materials,

	//定数バッファ作成

	}

		&shapes,

 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_UP:

	{



	XMStoreFloat4(&clb.eyePos, eye);



	{

	XMFLOAT4 pos;               //座標(x,y,z)

	DXGI_SWAP_CHAIN_DESC scDesc;

	tinyobj::attrib_t attrib;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDepthStencilView);







		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ibDesc.CPUAccessFlags = 0;

	while (SDL_PollEvent(&e) != 0)

		return hr;

	//頂点バッファ作成

	{

{

	SDL_FreeSurface(bmp);

	delete[] pVList;



void CD3DTest::Release()



	vbDesc.StructureByteStride = 0;

		//User presses a key



	txDesc.CPUAccessFlags = 0;

#include <SDL.h>



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_FreeSurface(bmp);

	D3D11_BUFFER_DESC ibDesc;



	scDesc.BufferDesc.Width = rect.Width();

			index_offset += num_vertices;

	{

{

	delete[] pIList;



	SDL_DestroyWindow(win);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		exit(1);

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		flags,

	SAFE_RELEASE(m_pDevice);



	SAFE_RELEASE(m_pTexture);



		if (e.type == SDL_QUIT)

}

{

			}

	{



#include "DirectXManager.h"

{

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		// Loop over faces(polygon)

			break;



			{



	{

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	}

	vbDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

				break;

	Release();

	if (!reader.Warning().empty())

			default:

	// Loop over shapes

	{

	auto& attrib = reader.GetAttrib();





	txDesc.ArraySize = 1;

 */



		return hr;



		KEY_PRESS_SURFACE_DEFAULT,

				indexlist.push_back(idx.vertex_index);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.StructureByteStride = 0;

	irData.SysMemSlicePitch = 0;

			{

	m_Viewport.Width = (FLOAT)rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.eyePos, eye);

			{

	WORD* pIList = new WORD[icount];

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Count = 1;

				WORD index = idx.vertex_index;



			{

	m_Viewport.MinDepth = 0.0f;

	m_pInputLayout = NULL;

			case SDLK_RIGHT:

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	// Loop over shapes

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//First we need to start up SDL, and make sure it went ok

			for (size_t v = 0; v < fv; v++)



	//Clean up our objects and quit

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ConstantLight    pntLight; //点光源

		cout << "SDL_INIT_ERROR" << endl;

			index_offset += num_vertices;

				indexlist.push_back(idx.vertex_index);



		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	UINT strides = sizeof(Vertex);





		SDL_RenderClear(ren);

		D3D11_SDK_VERSION,

			}





	WORD* pIList = new WORD[icount];

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				WORD index = idx.vertex_index;



	txDesc.SampleDesc.Quality = 0;

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pIndexBuffer = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	Release();



CD3DTest::~CD3DTest()

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//深度ステンシルバッファ作成



{



	{

	::GetClientRect(hwnd, &rect);



	cbDesc.CPUAccessFlags = 0;



		return 1;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))



{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			}





	vrData.pSysMem = &pVList[0];

	SDL_FreeSurface(suf);

	SDL_DestroyRenderer(ren);

#ifdef _DEBUG

		&m_pSwapChain,

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pTexture = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		return 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	if (FAILED(hr))





	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_UP,

	m_pDevice = NULL;

struct ConstantLight {

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

};

{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMFLOAT4         ambient;  //環境光(r,g,b)



	reader_config.mtl_search_path = "./"; // Path to material files

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return;

#include "DirectXManager.h"

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

{

}

	m_pTexture = NULL;

		SDL_RenderClear(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.MinDepth = 0.0f;

{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	irData.pSysMem = &pIList[0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pSwapChain);



	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

		// Loop over faces(polygon)



	cbDesc.MiscFlags = 0;

	{

	SAFE_RELEASE(m_pDevice);



{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;

	{

	if (FAILED(hr))

	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantMaterial material; //物体の質感

	m_pVertexBuffer = NULL;

		{

	SDL_FreeSurface(suf);

	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyWindow(win);

	XMFLOAT4X4 view;

}

	CRect                rect;

	//Key press surfaces constants

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		SDL_RenderClear(ren);

			}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ID3D11Texture2D* pBackBuffer;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		exit(1);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SDL_DestroyTexture(tex);

	}

		return hr;

	m_pTextureView = NULL;

	m_pPixelShader = NULL;



	SAFE_RELEASE(m_pTexture);









				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

int SEGMENT = 36;

				indexlist.push_back(idx.vertex_index);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

		if (e.type == SDL_QUIT)

		if (!ret)

	cbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	{

	if (FAILED(hr))



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderClear(ren);

	return 0;

		delete[] pVList;

	D3D11_BUFFER_DESC ibDesc;

	WORD* pIList = new WORD[icount];

}

			case SDLK_LEFT:

	m_pSwapChain = NULL;

			case SDLK_RIGHT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4         ambient;  //環境光(r,g,b)

}

CD3DTest::CD3DTest()

		&m_pSwapChain,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

		if (!ret)

		KEY_PRESS_SURFACE_DOWN,

		R"(cube.obj)");

	{



			case SDLK_DOWN:

	vrData.pSysMem = &pVList[0];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		1,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#ifdef _DEBUG





	scDesc.Windowed = TRUE;

		return hr;

	SAFE_RELEASE(m_pPixelShader);



	//深度ステンシルバッファ作成

	SDL_Quit();



	m_VertexCount = vcount;

		return hr;

	UINT offsets = 0;

	if (FAILED(hr))



	m_pDevice = NULL;



};

	SDL_DestroyRenderer(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pInputLayout = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	ConstantLight    pntLight; //点光源

	vbDesc.StructureByteStride = 0;



};

{

	//テクスチャ読み込み



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&materials,



			case SDLK_LEFT:

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	vector<WORD> indexList;

	vrData.SysMemSlicePitch = 0;



CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pDepthStencilTexture = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.BufferDesc.Width = rect.Width();



};



	for (int i = 0; i < 3; i++)



	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	for (int i = 0; i < vcount; i++)



	ConstantMatrixBuffer cmb;







				WORD index = idx.vertex_index;

		SDL_Delay(1000);

	}

struct ConstantLightBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

/*

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}





struct ConstantLight {

		&error,

	vrData.SysMemSlicePitch = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

		R"(cube.obj)");

	std::string imagePath = "hello.bmp";





	};



	scDesc.BufferDesc.Height = rect.Height();

int main(int, char**)

};

		return hr;



			default:





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				vertex.push_back(vertex_tmp);

	for (int i = 0; i < vcount; i++)

{



int main(int, char**)

	//インデックスバッファ作成

	XMFLOAT4X4 projection;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	m_pTexture = NULL;

			index_offset += fv;

	if (FAILED(hr))







	if (FAILED(hr))



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL level;







	XMFLOAT4X4 projection;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pInputLayout);

	SDL_DestroyRenderer(ren);

	float    farZ = 100.0f;

			case SDLK_RIGHT:

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

};

		return hr;

	if (FAILED(hr))

			break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

int SEGMENT = 36;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		D3D11_SDK_VERSION,

	int     vcount = vertexlist.size();

	scDesc.BufferCount = 1;

	if (!error.empty())

		D3D_DRIVER_TYPE_HARDWARE,

			//Select surfaces based on key press

		{

struct ConstantMaterial {

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.ArraySize = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t ty =

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	vector<WORD> indexList;

		R"(cube.obj)");

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ID3D11Texture2D* pBackBuffer;





	SAFE_RELEASE(m_pLightBuffer);

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.MaxDepth = 1.0f;

				WORD index = idx.vertex_index;



	scDesc.Windowed = TRUE;

	m_pTextureView = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pLightBuffer = NULL;

		return 1;

struct ConstantLightBuffer {



	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	std::vector<tinyobj::shape_t> shapes;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}

int main(int, char**)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	dsDesc.Format = txDesc.Format;

	float    fov = XMConvertToRadians(20.0f);

CD3DTest::~CD3DTest()

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	delete[] pIList;

		&m_pDevice,



	//頂点バッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))



	{

	}





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_BUFFER_DESC cbDesc;

#define TINYOBJLOADER_IMPLEMENTATION

				break;

	irData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	CRect                rect;

	for (int i = 0; i < vcount; i++)

		delete[] pVList;

	txDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		if (!reader.Error().empty())

		return hr;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

}

		KEY_PRESS_SURFACE_UP,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//頂点レイアウト作成



	m_pIndexBuffer = NULL;

		{

	D3D11_SAMPLER_DESC smpDesc;

		if (!ret)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

{

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Render()

	//テクスチャ読み込み

	auto& attrib = reader.GetAttrib();

		return hr;



	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				vertex.push_back(vertex_tmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

}
	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		D3D_DRIVER_TYPE_HARDWARE,

	D3D_FEATURE_LEVEL level;

	if (!reader.Warning().empty())

void CD3DTest::Render()



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	irData.SysMemSlicePitch = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (int j = 0; j < icount; j++)

				// access to vertex

	XMFLOAT4X4 world;



#include <iostream>

	{

{

		if (!ret)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			index_offset += num_vertices;

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);

	scDesc.OutputWindow = hwnd;

	//Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Height = (FLOAT)rect.Height();

			}

#endif





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

};



}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

int SEGMENT = 36;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			case SDLK_UP:

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

struct ConstantLight {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

CD3DTest::CD3DTest()

		{





	txDesc.SampleDesc.Count = 1;

	LoadObj(vertexlist, indexList);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}



	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点シェーダー生成

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pMatrixBuffer = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_LEFT:

};

	//頂点バッファ作成

	//vector<WORD> index_t;

	txDesc.MipLevels = 1;



				// access to vertex

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	{



		pLevels,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			{

}
	auto& shapes = reader.GetShapes();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			// Loop over vertices in the face.





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&error,



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	}

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

#ifdef _DEBUG

int main(int, char**)



	};

	//頂点バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (const auto& shape : shapes)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pDepthStencilTexture = NULL;

void CD3DTest::Render()

	}

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



	flags |= D3D11_CREATE_DEVICE_DEBUG;





	WORD   icount = indexList.size();

	//Create Index



	UINT offsets = 0;

#include "DirectXManager.h"

	txDesc.Usage = D3D11_USAGE_DEFAULT;







int main(int, char**)



using std::cout; using std::endl;



	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D_FEATURE_LEVEL level;

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				WORD index = idx.vertex_index;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				// access to vertex

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vector<WORD> indexList;

	m_pVertexShader = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 projection;

	m_pMatrixBuffer = NULL;

void CD3DTest::Render()

	irData.SysMemPitch = 0;

		if (e.type == SDL_QUIT)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

{

	//Key press surfaces constants

	//vector<WORD> index_t;





	scDesc.OutputWindow = hwnd;

	txDesc.Width = rect.Width();

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.SampleDesc.Quality = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

		return hr;



	UINT strides = sizeof(Vertex);

	ZeroMemory(&txDesc, sizeof(txDesc));

int main(int, char**)

	m_pMatrixBuffer = NULL;

	Release();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				WORD index = idx.vertex_index;

		&m_pSwapChain,

	ibDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&error,

	D3D11_BUFFER_DESC cbDesc;

	SDL_Quit();

		&m_pDevice,



	WORD   icount = indexList.size();

	m_pSwapChain = NULL;





#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		return hr;

	SAFE_RELEASE(m_pIndexBuffer);



		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&materials,

		}

	float    farZ = 100.0f;

	if (FAILED(hr))

	WORD   icount = indexList.size();

	m_IndexCount = 0;

	m_pMatrixBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vrData.SysMemSlicePitch = 0;

		return hr;

	//Create Index

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#include <iostream>

	txDesc.Width = rect.Width();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	dsDesc.Format = txDesc.Format;



	::GetClientRect(hwnd, &rect);

			{

				break;

		if (!ret)

	m_pPixelShader = NULL;

	irData.SysMemPitch = 0;

		return hr;

#ifdef _DEBUG

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.Width = rect.Width();

	m_IndexCount = icount;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pInputLayout = NULL;

		}

	bool ret = tinyobj::LoadObj(

{

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_VertexCount = vcount;

int main(int, char**)



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pTextureView);

	ConstantMaterial material; //物体の質感

	vbDesc.CPUAccessFlags = 0;



	m_Viewport.TopLeftY = 0;



	auto& shapes = reader.GetShapes();

		SDL_Delay(1000);



		pVList[i] = vertexlist[i];

	}

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	irData.SysMemPitch = 0;

	std::vector<tinyobj::shape_t> shapes;

			case SDLK_LEFT:





	//テクスチャ読み込み

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				tinyobj::real_t tx =

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		// Loop over faces(polygon)

		}

		SDL_RenderClear(ren);

	//vector<WORD> index_t;



{

	scDesc.OutputWindow = hwnd;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&scDesc,

};

}

	SDL_FreeSurface(bmp);

	{





		&m_pDevice,

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	bool ret = tinyobj::LoadObj(

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string imagePath = "hello.bmp";

	/*

		delete[] pVList;

	m_pSwapChain->Present(0, 0);

}

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

		{

	m_pSwapChain = NULL;

		&attrib,

	XMFLOAT4 ambient;           //環境(r,g,b)

	return;

	vector<Vertex> vertexlist;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		size_t index_offset = 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pMatrixBuffer);

}

	LoadObj(vertexlist, indexList);

	scDesc.OutputWindow = hwnd;





				break;

			index_offset += fv;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	bool ret = tinyobj::LoadObj(



	Release();

	m_pVertexBuffer = NULL;

/*

	//Vertex* pVList = new Vertex[vcount];

			//Select surfaces based on key press



	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);



	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

int main(int, char**)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	bool ret = tinyobj::LoadObj(

	{

	m_pPixelShader = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

		exit(1);

	m_Viewport.Width = (FLOAT)rect.Width();

	auto& shapes = reader.GetShapes();

		{

				vertex.push_back(vertex_tmp);

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

		&materials,

	ConstantLightBuffer clb;

		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

		return hr;

	if (FAILED(hr))

	}

	auto& shapes = reader.GetShapes();

			{



	//頂点バッファ作成

	vector<WORD> indexList;

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t ty =





	/*

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (e.type == SDL_QUIT)



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_SUBRESOURCE_DATA vrData;

	m_IndexCount = 0;

	m_pMatrixBuffer = NULL;

	//頂点シェーダー生成

	XMFLOAT4 ambient;           //環境(r,g,b)

};

		return hr;

			switch (e.key.keysym.sym)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantMatrixBuffer cmb;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





/*

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pRenderTargetView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pVertexBuffer = NULL;



	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

	if (FAILED(hr))





	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			index_offset += num_vertices;

	XMStoreFloat4(&clb.eyePos, eye);



			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				break;

		&materials,

	};

	irData.pSysMem = &pIList[0];

	{

		SDL_RenderClear(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	CRect                rect;



			index_offset += fv;

		return hr;

	SAFE_RELEASE(m_pPixelShader);



			case SDLK_UP:



		else if (e.type == SDL_KEYDOWN)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < 3; i++)

	std::vector<tinyobj::material_t> materials;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (m_pImmediateContext)

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];







	{

				WORD index = idx.vertex_index;



	m_pSwapChain = NULL;

		SDL_RenderPresent(ren);

			case SDLK_LEFT:

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				vertex.push_back(vertex_tmp);

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pSwapChain = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

		&shapes,

			index_offset += num_vertices;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return hr;

		{

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.Warning().empty())

	//Create Index

	float    farZ = 100.0f;





	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

using std::cout; using std::endl;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(bmp);

	if (!reader.Warning().empty())



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	return 0;

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);



	{

		NULL,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



struct ConstantLight {





	//vector<Vertex> vertex_t;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	m_VertexCount = vcount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;



	reader_config.mtl_search_path = "./"; // Path to material files

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files





	irData.SysMemSlicePitch = 0;

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ID3D11Texture2D* pBackBuffer;

				WORD index = idx.vertex_index;

	while (SDL_PollEvent(&e) != 0)



		}

};



		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMFLOAT4X4 view;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		NULL,

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	delete[] pIList;

	/*

		R"(cube.obj)");

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4X4 view;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pMatrixBuffer = NULL;



	}

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_DOWN,

	SDL_DestroyTexture(tex);

}

	DXGI_SWAP_CHAIN_DESC scDesc;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	DXGI_SWAP_CHAIN_DESC scDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		return hr;

	//vector<Vertex> vertex_t;

	::GetClientRect(hwnd, &rect);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&shapes,

	m_pImmediateContext = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pDevice);

	auto& materials = reader.GetMaterials();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSampler = NULL;

			exit(1);

		R"(cube.obj)");

	SDL_DestroyWindow(win);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{

	ConstantMatrixBuffer cmb;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&m_pDevice,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Viewport.TopLeftY = 0;

		cout << "SDL_INIT_ERROR" << endl;

		delete[] pIList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感

	D3D11_BUFFER_DESC vbDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		1,



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			}

		D3D_DRIVER_TYPE_HARDWARE,

	ConstantLight    pntLight; //点光源

		&attrib,

	m_Viewport.Height = (FLOAT)rect.Height();

}

	CRect                rect;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

};

		&level,

		&m_pDevice,



#ifdef _DEBUG



		&m_pSwapChain,



				vertex.push_back(vertex_tmp);

	HRESULT              hr;

	D3D11_BUFFER_DESC cbDesc;

		&shapes,

	txDesc.ArraySize = 1;

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	WORD* pIList = new WORD[icount];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







	m_pImmediateContext = NULL;

	//インデックスバッファ作成

	m_pDevice = NULL;





	if (FAILED(hr))



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	UINT strides = sizeof(Vertex);

				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD   icount = indexList.size();

			for (size_t v = 0; v < fv; v++)

{



	m_pSwapChain = NULL;

	float    farZ = 100.0f;

	}

	return 0;

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pSwapChain);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			int num_vertices = shape.mesh.num_face_vertices[f];

			index_offset += fv;



	if (FAILED(hr))

	ConstantLightBuffer clb;

int SEGMENT = 36;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_Viewport.TopLeftX = 0;



	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;



	SDL_Quit();

	::GetClientRect(hwnd, &rect);

	D3D11_TEXTURE2D_DESC txDesc;

{

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.CPUAccessFlags = 0;

	txDesc.Width = rect.Width();



	D3D11_SUBRESOURCE_DATA vrData;

	int     vcount = vertexlist.size();



	SDL_FreeSurface(suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pTextureView = NULL;



	for (size_t s = 0; s < shapes.size(); s++)

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				tinyobj::real_t ty =

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	if (FAILED(hr))



	irData.pSysMem = &pIList[0];



 */

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pSampler);

{

	bool ret = tinyobj::LoadObj(

		m_pImmediateContext->ClearState();

		KEY_PRESS_SURFACE_RIGHT,



	Vertex* pVList = new Vertex[vcount];



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.SysMemPitch = 0;

		&materials,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//vector<Vertex> vertex_t;

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferCount = 1;

	tinyobj::ObjReaderConfig reader_config;

	SDL_Quit();





	}

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	SDL_FreeSurface(bmp);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::string error;

	if (FAILED(hr))

		}

struct ConstantMatrixBuffer {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//深度ステンシルバッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

		cout << "SDL_INIT_ERROR" << endl;

	enum KeyPressSurfaces

	SDL_DestroyWindow(win);

	XMFLOAT4         eyePos;   //視点座標

	std::string error;

		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		R"(cube.obj)");



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	txDesc.Height = rect.Height();

		}

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pVertexShader = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		//User presses a key

	int     vcount = vertexlist.size();

}
	vrData.SysMemSlicePitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		}



	m_pVertexShader = NULL;

	txDesc.Height = rect.Height();

}



	//頂点バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	D3D11_BUFFER_DESC cbDesc;

		1,

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	vrData.pSysMem = &pVList[0];

		return hr;

	dsDesc.Format = txDesc.Format;

struct ConstantMatrixBuffer {

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//First we need to start up SDL, and make sure it went ok

	m_pLightBuffer = NULL;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_LEFT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pImmediateContext);



	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	XMFLOAT4X4 world;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pPixelShader = NULL;

	};

	SDL_Quit();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::vector<tinyobj::material_t> materials;

	XMFLOAT4         eyePos;   //視点座標

	{

	SDL_DestroyRenderer(ren);





using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

		//User requests quit

	XMStoreFloat4(&clb.eyePos, eye);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

		{

		{

		NULL,

	return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_RenderClear(ren);











				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

void CD3DTest::Release()

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTextureView);

		pVList[i] = vertexlist[i];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		SDL_RenderPresent(ren);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pTextureView);

		}

	if (m_pImmediateContext)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	irData.pSysMem = &pIList[0];

				break;

	float    farZ = 100.0f;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

	std::vector<tinyobj::material_t> materials;

				break;

		&scDesc,



		return hr;

	CRect                rect;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.CPUAccessFlags = 0;

#endif



	}

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

#endif

	CRect                rect;

		return hr;

	m_pImmediateContext = NULL;

#endif

	{

	SAFE_RELEASE(m_pPixelShader);



		return hr;

		{



	D3D11_BUFFER_DESC vbDesc;



	SAFE_RELEASE(m_pRenderTargetView);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)



	XMStoreFloat4(&clb.ambient, lightAmbient);

				break;

		&m_pImmediateContext);



	irData.pSysMem = &pIList[0];

	//vector<WORD> index_t;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	reader_config.mtl_search_path = "./"; // Path to material files

	//Create Index

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (int i = 0; i < vcount; i++)

			// Loop over vertices in the face.

	ConstantMatrixBuffer cmb;

	std::vector<tinyobj::material_t> materials;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDevice);

		return hr;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_FreeSurface(suf);

				WORD index = idx.vertex_index;

	vbDesc.CPUAccessFlags = 0;





	m_pDepthStencilTexture = NULL;



	m_VertexCount = vcount;

		SDL_RenderClear(ren);

		//User requests quit

	//頂点バッファ作成

			for (size_t v = 0; v < fv; v++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Quit();

	if (FAILED(hr))



};



#include <SDL.h>

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//vector<WORD> index_t;



		SDL_Delay(1000);

	SAFE_RELEASE(m_pTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_FreeSurface(suf);

	{

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	SAFE_RELEASE(m_pLightBuffer);



{

		// Loop over faces(polygon)

	D3D11_BUFFER_DESC ibDesc;

		&scDesc,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

{

	txDesc.CPUAccessFlags = 0;

				break;

CD3DTest::CD3DTest()

	int     vcount = vertexlist.size();

#endif



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;





		pLevels,

		SDL_Delay(1000);

		//User presses a key

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		if (e.type == SDL_QUIT)

	cbDesc.StructureByteStride = 0;

	delete[] pIList;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





	SDL_Quit();



	ibDesc.MiscFlags = 0;



	scDesc.OutputWindow = hwnd;

	{

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))



				indexlist.push_back(idx.vertex_index);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	}





	m_Viewport.TopLeftY = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_IndexCount = icount;

	irData.pSysMem = &pIList[0];



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			index_offset += fv;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);







{

				// access to vertex

using std::cout; using std::endl;

	//Key press surfaces constants

	//頂点レイアウト作成

	SAFE_RELEASE(m_pTexture);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;



	if (FAILED(hr))

		if (!reader.Error().empty())



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	//vector<Vertex> vertex_t;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	delete[] pIList;

	{



	//定数バッファ作成

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	}



	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4         eyePos;   //視点座標

	//定数バッファ作成



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	if (!reader.Warning().empty())

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SAFE_RELEASE(m_pVertexShader);

				vertex.push_back(vertex_tmp);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_DestroyRenderer(ren);

}

		return hr;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

				break;

	txDesc.MipLevels = 1;

	{

		{

{

	if (m_pImmediateContext)

	irData.SysMemPitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

}

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};

		return 1;

		if (e.type == SDL_QUIT)

	SDL_DestroyWindow(win);



				vertex.push_back(vertex_tmp);

				tinyobj::real_t ty =

		if (e.type == SDL_QUIT)

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pLightBuffer);



};



	}

				// access to vertex





{

	for (int i = 0; i < vcount; i++)

		SDL_RenderClear(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	LoadObj(vertexlist, indexList);

			index_offset += num_vertices;



	m_pSampler = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pTextureView);

		else if (e.type == SDL_KEYDOWN)

				tinyobj::real_t tx =

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.OutputWindow = hwnd;

	{

			index_offset += num_vertices;

		KEY_PRESS_SURFACE_DOWN,

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			exit(1);

int main(int, char**)



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	SAFE_RELEASE(m_pInputLayout);

#include <iostream>

	std::vector<tinyobj::material_t> materials;

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.SampleDesc.Count = 1;

	auto& shapes = reader.GetShapes();

		if (!ret)

	{

	Release();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

	Release();



			// Loop over vertices in the face.

	::ZeroMemory(&scDesc, sizeof(scDesc));

				break;

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderPresent(ren);

	delete[] pIList;



	{



	Vertex* pVList = new Vertex[vcount];

	CRect                rect;

	SAFE_RELEASE(m_pSampler);

		pLevels,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		delete[] pIList;

	if (m_pImmediateContext)

/*

	ibDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&scDesc,

			}

	//Clean up our objects and quit

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pSampler = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}

		flags,

	auto& shapes = reader.GetShapes();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	if (FAILED(hr))

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

		// Loop over faces(polygon)

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			{

	//テクスチャ読み込み





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		{

	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



#endif

			case SDLK_LEFT:



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				break;

	m_VertexCount = vcount;

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	cbDesc.MiscFlags = 0;

	{

		SDL_RenderPresent(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

}

	ibDesc.CPUAccessFlags = 0;



	for (const auto& shape : shapes)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (!reader.Warning().empty())



	SAFE_RELEASE(m_pRenderTargetView);

	ibDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		SDL_RenderClear(ren);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ibDesc.StructureByteStride = 0;



	std::string error;

		pLevels,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



};

				WORD index = idx.vertex_index;

	m_pTextureView = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

		{

	return;

		&m_pDevice,

	WORD   icount = indexList.size();



	if (!reader.ParseFromFile(inputfile, reader_config))

			index_offset += fv;

	Vertex* pVList = new Vertex[vcount];

		NULL,

	enum KeyPressSurfaces

	if (FAILED(hr))

		R"(cube.obj)");

	{

			case SDLK_RIGHT:

	cbDesc.StructureByteStride = 0;

	ConstantMaterial material; //物体の質感

	m_VertexCount = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty =

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.Warning().empty())

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);





		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_SUBRESOURCE_DATA irData;

	m_pSampler = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

		exit(1);

	if (!reader.Warning().empty())

	ibDesc.StructureByteStride = 0;

};

	UINT flags = 0;

void CD3DTest::Release()

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				vertex.push_back(vertex_tmp);

	vector<Vertex> vertexlist;

}

		KEY_PRESS_SURFACE_LEFT,



	//First we need to start up SDL, and make sure it went ok

#include <iostream>

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

void CD3DTest::Release()

	}

		}

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	SDL_FreeSurface(bmp);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

int main(int, char**)

	HRESULT              hr;



	if (!error.empty())

	vrData.SysMemPitch = 0;

			index_offset += num_vertices;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

			break;





	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	SDL_DestroyTexture(tex);

				break;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	for (const auto& shape : shapes)

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);



};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;

	m_pDepthStencilTexture = NULL;





	Vertex* pVList = new Vertex[vcount];

#include <SDL.h>

		size_t index_offset = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	if (FAILED(hr))

	txDesc.Height = rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

CD3DTest::CD3DTest()

	m_VertexCount = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		pIList[j] = indexList[j];

	irData.pSysMem = &pIList[0];

	//頂点バッファ作成



		size_t index_offset = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	txDesc.MipLevels = 1;

				vertex.push_back(vertex_tmp);

		return hr;

		&shapes,

	//ビューポート設定

			// Loop over vertices in the face.

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		return hr;

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	scDesc.Windowed = TRUE;

			case SDLK_DOWN:

	m_VertexCount = 0;

	XMFLOAT4X4 view;

				// access to vertex

	DXGI_SWAP_CHAIN_DESC scDesc;

		&shapes,

			int num_vertices = shape.mesh.num_face_vertices[f];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pDepthStencilTexture);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

	D3D11_SUBRESOURCE_DATA vrData;

				break;

				break;

		return hr;



#include "DirectXManager.h"



			switch (e.key.keysym.sym)

	Release();

	//頂点バッファ作成

	{



 */

{

	/*

	cbDesc.CPUAccessFlags = 0;



	//Create Index

	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

		// Loop over faces(polygon)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4X4 view;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_IndexCount = icount;



	m_IndexCount = icount;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int i = 0; i < vcount; i++)

		return hr;

	//First we need to start up SDL, and make sure it went ok

#define TINYOBJLOADER_IMPLEMENTATION

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ibDesc.CPUAccessFlags = 0;

	for (int j = 0; j < icount; j++)





	if (FAILED(hr))

	}

	m_pSampler = NULL;

CD3DTest::~CD3DTest()

		//User presses a key

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.MiscFlags = 0;

	ibDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantMaterial material; //物体の質感

	{

	vector<WORD> indexList;

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.eyePos, eye);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&txDesc, sizeof(txDesc));

		pIList[j] = indexList[j];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pSwapChain = NULL;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		KEY_PRESS_SURFACE_DEFAULT,

int SEGMENT = 36;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<Vertex> vertexlist;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

			//Select surfaces based on key press



	ibDesc.CPUAccessFlags = 0;



	m_pDepthStencilView = NULL;

/*

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4         eyePos;   //視点座標

int SEGMENT = 36;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t ty =

		&scDesc,



}

		SDL_RenderClear(ren);



		return hr;

		&materials,

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#define TINYOBJLOADER_IMPLEMENTATION







	XMStoreFloat4(&clb.material.specular, materialSpecular);



		delete[] pIList;

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	}

};

		}

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	{

	return;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_IndexCount = icount;

		1,

}

	//テクスチャ読み込み

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_Delay(1000);



	float    farZ = 100.0f;

	irData.SysMemPitch = 0;



	//インデックスバッファ作成

			case SDLK_RIGHT:



	}

		SDL_Delay(1000);

		exit(1);

	SAFE_RELEASE(m_pRenderTargetView);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	ibDesc.MiscFlags = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (e.type == SDL_QUIT)

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	Release();

	//テクスチャ読み込み

	tinyobj::ObjReaderConfig reader_config;

	// Loop over shapes

	pBackBuffer->Release();

	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		}

using std::cout; using std::endl;

	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilTexture);

		if (!ret)



	enum KeyPressSurfaces

	return;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

		&scDesc,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		&materials,





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;



	cbDesc.StructureByteStride = 0;





		return hr;



				// access to vertex

	m_pImmediateContext = NULL;

#include <SDL.h>

	ConstantLightBuffer clb;

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		flags,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyWindow(win);

	}

	m_Angle += XMConvertToRadians(1.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		cout << "SDL_INIT_ERROR" << endl;

			switch (e.key.keysym.sym)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))



	ConstantLightBuffer clb;



CD3DTest::~CD3DTest()

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	if (FAILED(hr))

		{

{

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		if (!ret)



	int     vcount = vertexlist.size();



	scDesc.Windowed = TRUE;





	SDL_DestroyRenderer(ren);



	if (!error.empty())

	{



	D3D11_BUFFER_DESC ibDesc;



	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	};



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			//Select surfaces based on key press

		{

	UINT offsets = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点レイアウト作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.MiscFlags = 0;

	txDesc.MipLevels = 1;

		&shapes,

	dsDesc.Format = txDesc.Format;

		return hr;

		1,

	SDL_DestroyWindow(win);





	auto& attrib = reader.GetAttrib();



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		delete[] pVList;



			case SDLK_LEFT:

	}



 */

	m_Viewport.Width = (FLOAT)rect.Width();

	if (!reader.Warning().empty())

	//インデックスバッファ作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D11_BUFFER_DESC ibDesc;

		return 1;



	SAFE_RELEASE(m_pDepthStencilTexture);



	SAFE_RELEASE(m_pDevice);



		{







		return hr;

	int     vcount = vertexlist.size();

			// Loop over vertices in the face.

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4X4 projection;

	cbDesc.StructureByteStride = 0;

};

}

	while (SDL_PollEvent(&e) != 0)



	cbDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}



	m_IndexCount = 0;

	std::vector<tinyobj::material_t> materials;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	Release();

				vertex.push_back(vertex_tmp);

	WORD   icount = indexList.size();

	//Clean up our objects and quit



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	m_pVertexBuffer = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&error,



	if (!error.empty())

		D3D11_SDK_VERSION,

	dsDesc.Texture2D.MipSlice = 0;



	SAFE_RELEASE(m_pSampler);

	tinyobj::ObjReaderConfig reader_config;

{

	D3D11_SUBRESOURCE_DATA vrData;

		{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pSampler);

	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

		D3D_DRIVER_TYPE_HARDWARE,

	UINT flags = 0;

	if (FAILED(hr))

		return hr;





	{

		&scDesc,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#endif

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	std::vector<tinyobj::shape_t> shapes;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&level,

	m_Angle += XMConvertToRadians(1.0f);

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.SysMemPitch = 0;



}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

 * Lesson 1: Hello World!



	irData.SysMemSlicePitch = 0;

		pLevels,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

		KEY_PRESS_SURFACE_TOTAL

	m_pSwapChain = NULL;

	CRect                rect;

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pIList;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (!error.empty())

	{



	scDesc.OutputWindow = hwnd;



	cbDesc.MiscFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	m_pSampler = NULL;

				indexlist.push_back(index);

	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_LEFT,



	scDesc.BufferCount = 1;

{

	WORD   icount = indexList.size();

CD3DTest::~CD3DTest()

	{



	}

	HRESULT              hr;

	cbDesc.CPUAccessFlags = 0;

	m_pVertexShader = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	scDesc.SampleDesc.Quality = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

struct ConstantLight {

	XMFLOAT4X4 world;

		{



	}

void CD3DTest::Release()

	XMFLOAT4X4 view;

	//インデックスバッファ作成

	std::vector<tinyobj::material_t> materials;

		delete[] pVList;

		{

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))



	ConstantMatrixBuffer cmb;

#include <SDL.h>





};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		// Loop over faces(polygon)

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}

	cbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;

		if (e.type == SDL_QUIT)

	//頂点シェーダー生成

	XMFLOAT4 ambient;           //環境(r,g,b)

		delete[] pVList;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_RIGHT,

				break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//vector<Vertex> vertex_t;

			}

	{

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	vector<Vertex> vertexlist;

#define TINYOBJLOADER_IMPLEMENTATION

	{





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.MiscFlags = 0;



		return hr;

	{

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.MipLevels = 1;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.MiscFlags = 0;

	SDL_Event e;

	vector<Vertex> vertexlist;

	m_Angle += XMConvertToRadians(1.0f);



	m_pDevice = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//頂点レイアウト作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMatrixBuffer {

	m_Viewport.MinDepth = 0.0f;



			default:

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D11_SUBRESOURCE_DATA irData;

		KEY_PRESS_SURFACE_DEFAULT,

	/*

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pLightBuffer);

		m_pImmediateContext->ClearState();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//ピクセルシェーダー生成

		}

	txDesc.Height = rect.Height();

		SDL_RenderClear(ren);

				vertex.push_back(vertex_tmp);



				// access to vertex

		//User presses a key

	scDesc.BufferDesc.Width = rect.Width();

	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC cbDesc;

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				indexlist.push_back(idx.vertex_index);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



}

};

	m_pTexture = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	SAFE_RELEASE(m_pTexture);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		//User requests quit

			index_offset += fv;

				// access to vertex

	//Clean up our objects and quit

	Release();

	}

		pVList[i] = vertexlist[i];

	SDL_FreeSurface(suf);



void CD3DTest::Release()



	scDesc.BufferDesc.Width = rect.Width();

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);







	{

	SDL_DestroyWindow(win);



	SDL_DestroyTexture(tex);

		SDL_Delay(1000);

void CD3DTest::Render()

				tinyobj::real_t ty =



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	if (FAILED(hr))



	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

		}

	dsDesc.Texture2D.MipSlice = 0;

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4 pos;               //座標(x,y,z)



		&error,



	ConstantLightBuffer clb;



		return hr;

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(idx.vertex_index);

int SEGMENT = 36;

}

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SAFE_RELEASE(m_pDepthStencilTexture);

	std::string inputfile = "test.obj";



	vrData.pSysMem = &pVList[0];

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		if (!ret)

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.StructureByteStride = 0;

	XMFLOAT4         eyePos;   //視点座標

	delete[] pIList;

	{

	::GetClientRect(hwnd, &rect);

	m_Viewport.TopLeftY = 0;

	txDesc.SampleDesc.Count = 1;

	auto& attrib = reader.GetAttrib();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	vbDesc.StructureByteStride = 0;

	}*/

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vrData.pSysMem = &pVList[0];

	dsDesc.Texture2D.MipSlice = 0;

};

	float    farZ = 100.0f;

		&shapes,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_RenderPresent(ren);

	D3D11_SUBRESOURCE_DATA vrData;

				// access to vertex

		{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);



			for (size_t v = 0; v < num_vertices; v++)

	vrData.SysMemPitch = 0;

struct ConstantMaterial {



		}

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);







	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

int main(int, char**)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <iostream>







			for (size_t v = 0; v < fv; v++)

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

CD3DTest::CD3DTest()

	scDesc.BufferDesc.Width = rect.Width();



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//Clean up our objects and quit

	SDL_DestroyTexture(tex);

}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

		return hr;

	if (!reader.Warning().empty())

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		}

	float    fov = XMConvertToRadians(20.0f);

	ibDesc.StructureByteStride = 0;



	{

		//User presses a key

struct ConstantLight {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			switch (e.key.keysym.sym)



	hr = D3D11CreateDeviceAndSwapChain(NULL,







				// access to vertex

{

	tinyobj::ObjReader reader;

			}

	}

		flags,

	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};

	return 0;

	D3D11_SUBRESOURCE_DATA vrData;

		pVList[i] = vertexlist[i];





	if (FAILED(hr))

	return;

	return hr;

			}

	m_pVertexShader = NULL;

			}





	/*



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_FreeSurface(suf);



		return hr;

		{

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	}





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	CRect                rect;

			case SDLK_LEFT:

		return hr;



#include <SDL.h>



	XMFLOAT4X4 projection;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ibDesc.CPUAccessFlags = 0;

		return hr;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		// Loop over faces(polygon)

			case SDLK_DOWN:

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		exit(1);

				vertex.push_back(vertex_tmp);

	//ピクセルシェーダー生成

{

		cout << "SDL_INIT_ERROR" << endl;

	m_pTextureView = NULL;

	SDL_Quit();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	auto& attrib = reader.GetAttrib();

	auto& shapes = reader.GetShapes();





	HRESULT              hr;





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	//テクスチャ読み込み

}

			index_offset += num_vertices;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

	m_pDevice = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				WORD index = idx.vertex_index;

int main(int, char**)

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 world;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	std::vector<tinyobj::material_t> materials;



	SAFE_RELEASE(m_pIndexBuffer);

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//インデックスバッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pSampler = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		return hr;

	cbDesc.CPUAccessFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

struct ConstantMaterial {

#include <SDL.h>

		return hr;

	}





	XMFLOAT4 specular;          //反射(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;





}



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_FreeSurface(bmp);

		size_t index_offset = 0;  // インデントのオフセット

		&level,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

	cbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

};

	vbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	while (SDL_PollEvent(&e) != 0)



		NULL,

/*

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vector<WORD> indexList;

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_VertexCount = 0;

}

		}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	while (SDL_PollEvent(&e) != 0)

	return 0;

	D3D_FEATURE_LEVEL level;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	bool ret = tinyobj::LoadObj(

	scDesc.SampleDesc.Quality = 0;

				WORD index = idx.vertex_index;

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain->Present(0, 0);



		//User requests quit

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pDepthStencilTexture = NULL;

	ConstantMatrixBuffer cmb;

		delete[] pIList;





	SDL_Quit();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.MiscFlags = 0;

		{

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vector<WORD> indexList;

	UINT strides = sizeof(Vertex);

	{

	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_TOTAL

	};

			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);


