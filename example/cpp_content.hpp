	m_pDevice = NULL;

		m_pImmediateContext->ClearState();

		&m_pDevice,

	}



	}



	auto& shapes = reader.GetShapes();

	//定数バッファ作成

		if (!reader.Error().empty())

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int SEGMENT = 36;

		{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

HRESULT CD3DTest::Create(HWND hwnd)





	D3D11_SAMPLER_DESC smpDesc;

	m_IndexCount = 0;



	if (FAILED(hr))

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

int SEGMENT = 36;

};

	}*/

			switch (e.key.keysym.sym)

struct ConstantLight {

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&scDesc,



			}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	SDL_FreeSurface(bmp);



			index_offset += num_vertices;





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				vertex.push_back(vertex_tmp);

#endif

	//頂点シェーダー生成

			index_offset += fv;





	if (FAILED(hr))

int main(int, char**)

	if (FAILED(hr))



	SDL_Quit();

{

		return hr;



		KEY_PRESS_SURFACE_DEFAULT,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&materials,



	vbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

	XMFLOAT4 ambient;           //環境(r,g,b)

{



	m_pImmediateContext = NULL;



			// Loop over vertices in the face.

	D3D11_BUFFER_DESC cbDesc;

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

			break;

	ConstantMaterial material; //物体の質感

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	enum KeyPressSurfaces

	if (FAILED(hr))

			index_offset += fv;

				indexlist.push_back(idx.vertex_index);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//頂点レイアウト作成

		return hr;



	SAFE_RELEASE(m_pTexture);

		return hr;





	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pInputLayout);

	m_Viewport.MinDepth = 0.0f;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//ピクセルシェーダー生成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		if (!reader.Error().empty())

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	delete[] pVList;

		&shapes,

			}

		KEY_PRESS_SURFACE_DEFAULT,



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



#include "DirectXManager.h"



		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.ArraySize = 1;

	tinyobj::ObjReader reader;

struct ConstantLightBuffer {

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_BUFFER_DESC ibDesc;

};

	cbDesc.CPUAccessFlags = 0;

	vector<Vertex> vertexlist;

	D3D11_BUFFER_DESC vbDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	UINT flags = 0;



	tinyobj::attrib_t attrib;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_LEFT,



	D3D11_SAMPLER_DESC smpDesc;

	float    fov = XMConvertToRadians(20.0f);

		&error,



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

};

	}





int main(int, char**)

	//深度ステンシルバッファ作成

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	delete[] pIList;





	DXGI_SWAP_CHAIN_DESC scDesc;

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pTexture);

	scDesc.SampleDesc.Count = 1;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;



	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

	auto& shapes = reader.GetShapes();



				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	return hr;

	{

{

		return hr;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		return 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SAFE_RELEASE(m_pTextureView);

{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	irData.pSysMem = &pIList[0];

	ConstantMatrixBuffer cmb;

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderClear(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pRenderTargetView = NULL;



		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTextureView);



	irData.pSysMem = &pIList[0];

		D3D_DRIVER_TYPE_HARDWARE,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D_FEATURE_LEVEL level;

		exit(1);

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.MiscFlags = 0;



	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

				vertex.push_back(vertex_tmp);

#include <iostream>

	txDesc.SampleDesc.Quality = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

				WORD index = idx.vertex_index;

	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = vcount;

	};

		{

	D3D11_BUFFER_DESC cbDesc;

		}

	{

	Release();

	ConstantLightBuffer clb;

	m_pVertexShader = NULL;

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pIndexBuffer);

{

	{



int main(int, char**)

#include <iostream>

	delete[] pVList;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	Vertex* pVList = new Vertex[vcount];

	m_pIndexBuffer = NULL;



	cbDesc.CPUAccessFlags = 0;

		{

		R"(cube.obj)");

#include <SDL.h>

	m_pMatrixBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	irData.SysMemPitch = 0;

	SDL_DestroyWindow(win);

{

	txDesc.SampleDesc.Count = 1;

		{

	std::string error;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 pos;               //座標(x,y,z)



		size_t index_offset = 0;

	int     vcount = vertexlist.size();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantLightBuffer {

	}





		return hr;

		}

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

				break;

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

		return hr;

				break;





	if (FAILED(hr))

	}





	ibDesc.CPUAccessFlags = 0;

	//vector<WORD> index_t;



		delete[] pVList;

	dsDesc.Texture2D.MipSlice = 0;



{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

#include "DirectXManager.h"



			index_offset += fv;

	std::string error;

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_DEFAULT,

	if (!reader.ParseFromFile(inputfile, reader_config))



		&attrib,

		SDL_RenderPresent(ren);

		return hr;



			{

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;



	m_Angle += XMConvertToRadians(1.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				// access to vertex







		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pDevice = NULL;

	UINT flags = 0;

		return hr;



		return hr;

				// access to vertex









				WORD index = idx.vertex_index;

	//Vertex* pVList = new Vertex[vcount];

		// Loop over faces(polygon)

		if (!ret)

		1,

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pMatrixBuffer = NULL;

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_VertexCount = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		exit(1);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMFLOAT4         eyePos;   //視点座標

		1,

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	std::string imagePath = "hello.bmp";



		pIList[j] = indexList[j];

				break;

	SDL_DestroyRenderer(ren);

	m_pDepthStencilTexture = NULL;

	HRESULT              hr;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pTexture = NULL;

	std::string imagePath = "hello.bmp";

	if (!reader.Warning().empty())

		if (!ret)

}

	XMFLOAT4X4 world;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	txDesc.Width = rect.Width();

	}

	if (!reader.Warning().empty())

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				// access to vertex



	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

		cout << "SDL_INIT_ERROR" << endl;

{

		&materials,

		{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}



		if (!ret)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	Vertex* pVList = new Vertex[vcount];

	m_pDepthStencilView = NULL;

	::GetClientRect(hwnd, &rect);



	vrData.SysMemPitch = 0;

{

	//Key press surfaces constants

	m_Viewport.MinDepth = 0.0f;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

		pIList[j] = indexList[j];



}



{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

void CD3DTest::Release()

int SEGMENT = 36;

	//ビューポート設定

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	delete[] pVList;

	SDL_DestroyTexture(tex);



			default:



	if (FAILED(hr))



	m_IndexCount = icount;

	dsDesc.Format = txDesc.Format;

	}

		size_t index_offset = 0;

	for (size_t s = 0; s < shapes.size(); s++)









	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pMatrixBuffer);

		//User presses a key





	cbDesc.StructureByteStride = 0;

	auto& attrib = reader.GetAttrib();

	{

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

	//頂点バッファ作成

	txDesc.MipLevels = 1;

	cbDesc.CPUAccessFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::~CD3DTest()

	}

	txDesc.Height = rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	WORD   icount = indexList.size();

		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	//First we need to start up SDL, and make sure it went ok

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	{

	SDL_DestroyTexture(tex);

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::vector<tinyobj::shape_t> shapes;

		return hr;

		return hr;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	/*



	SAFE_RELEASE(m_pVertexShader);

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



	//ビューポート設定

	txDesc.MipLevels = 1;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

			for (size_t v = 0; v < fv; v++)

	D3D11_SAMPLER_DESC smpDesc;

/*

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





		delete[] pIList;

};



		size_t index_offset = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}







CD3DTest::~CD3DTest()



	reader_config.mtl_search_path = "./"; // Path to material files



	for (const auto& shape : shapes)

	m_Viewport.MaxDepth = 1.0f;

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.CPUAccessFlags = 0;

	{

	m_IndexCount = icount;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pTextureView);

	for (int i = 0; i < 3; i++)



		&m_pSwapChain,

	}



	vbDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;



	m_pRenderTargetView = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_DestroyTexture(tex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		//User presses a key



			{

	m_pVertexBuffer = NULL;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;

	m_IndexCount = 0;

	//頂点レイアウト作成

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		//User requests quit

	}

	cbDesc.MiscFlags = 0;

	tinyobj::attrib_t attrib;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	DXGI_SWAP_CHAIN_DESC scDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;

	SDL_FreeSurface(suf);

	//インデックスバッファ作成

	cbDesc.MiscFlags = 0;

	{



	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	//vector<WORD> index_t;

	std::string error;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Angle += XMConvertToRadians(1.0f);



		pLevels,

	//テクスチャ読み込み

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pInputLayout = NULL;

	//Clean up our objects and quit

	if (FAILED(hr))



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.SampleDesc.Quality = 0;

	vrData.SysMemSlicePitch = 0;

	m_pVertexBuffer = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vbDesc.MiscFlags = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





}
	tinyobj::ObjReader reader;

	irData.pSysMem = &pIList[0];

	//vector<Vertex> vertex_t;

	std::string inputfile = "test.obj";

		&m_pSwapChain,

	SDL_DestroyTexture(tex);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.SampleDesc.Quality = 0;

void CD3DTest::Release()

		KEY_PRESS_SURFACE_TOTAL

}

			{

	SAFE_RELEASE(m_pSampler);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	/*

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (const auto& shape : shapes)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//Create Index

			{



		}

	vrData.pSysMem = &pVList[0];

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Vertex* pVList = new Vertex[vcount];

	m_pIndexBuffer = NULL;

{

	m_pIndexBuffer = NULL;





	ibDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

	}

	m_Viewport.MinDepth = 0.0f;

		return hr;

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSwapChain);

			break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	irData.pSysMem = &pIList[0];

	cbDesc.StructureByteStride = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			for (size_t v = 0; v < fv; v++)



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

#include <iostream>

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				// access to vertex

				// access to vertex

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			}

	SDL_DestroyTexture(tex);

	cbDesc.MiscFlags = 0;

	//Key press surfaces constants

	DXGI_SWAP_CHAIN_DESC scDesc;

		//User presses a key

		return hr;

		SDL_Delay(1000);

	vector<Vertex> vertexlist;

			index_offset += num_vertices;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	enum KeyPressSurfaces

			{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pVertexBuffer = NULL;

		pLevels,

};

		SDL_RenderPresent(ren);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_DOWN:

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	UINT flags = 0;



	SAFE_RELEASE(m_pPixelShader);



 * Lesson 1: Hello World!

	return hr;

	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	float    farZ = 100.0f;

	m_pPixelShader = NULL;



		return hr;



	}

		SDL_Delay(1000);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		R"(cube.obj)");

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	CRect                rect;





		&m_pDevice,

	if (FAILED(hr))



	txDesc.ArraySize = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

	HRESULT              hr;

	SDL_FreeSurface(suf);

	vbDesc.MiscFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SDL_FreeSurface(bmp);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	/*

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			// Loop over vertices in the face.

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

HRESULT CD3DTest::Create(HWND hwnd)

	//定数バッファ作成

	scDesc.OutputWindow = hwnd;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



		}

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyWindow(win);

}
	m_Viewport.Height = (FLOAT)rect.Height();







	SAFE_RELEASE(m_pSwapChain);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

	float    farZ = 100.0f;

	cbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	std::string inputfile = "test.obj";

	//Vertex* pVList = new Vertex[vcount];

	{

	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.eyePos, eye);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		delete[] pIList;

		return hr;

	SAFE_RELEASE(m_pInputLayout);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.SampleDesc.Quality = 0;

		}

	for (int i = 0; i < vcount; i++)

	ConstantLight    pntLight; //点光源

	SDL_DestroyWindow(win);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			for (size_t v = 0; v < num_vertices; v++)

{

		return hr;



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.CPUAccessFlags = 0;







	txDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	if (FAILED(hr))

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	auto& attrib = reader.GetAttrib();

	SDL_FreeSurface(bmp);

		{

		return hr;

		&m_pDevice,

				break;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_Delay(1000);

	{



		D3D11_SDK_VERSION,

		&m_pImmediateContext);



	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&shapes,

	D3D11_BUFFER_DESC cbDesc;





			break;

	//頂点レイアウト作成



	txDesc.Width = rect.Width();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	//頂点シェーダー生成



	auto& materials = reader.GetMaterials();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMFLOAT4 ambient;           //環境(r,g,b)

				// access to vertex

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t tx =

HRESULT CD3DTest::Create(HWND hwnd)



	LoadObj(vertexlist, indexList);

		if (!reader.Error().empty())

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.SampleDesc.Count = 1;



	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pSwapChain);



	return 0;

	//テクスチャ読み込み

	m_pPixelShader = NULL;

	txDesc.Height = rect.Height();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.StructureByteStride = 0;



	vector<Vertex> vertexlist;



	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

	dsDesc.Format = txDesc.Format;

}
		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.Windowed = TRUE;

	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyWindow(win);

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

		R"(cube.obj)");

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	{

			{

	vrData.SysMemSlicePitch = 0;

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		if (!ret)

	XMFLOAT4X4 world;

				indexlist.push_back(idx.vertex_index);

		return hr;

			case SDLK_RIGHT:

	WORD* pIList = new WORD[icount];

	cbDesc.MiscFlags = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	m_pInputLayout = NULL;

			}

	UINT strides = sizeof(Vertex);

				tinyobj::real_t tx =

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



	{

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	//定数バッファ作成



	if (FAILED(hr))

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		return hr;



	vbDesc.CPUAccessFlags = 0;

	ConstantLightBuffer clb;

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	m_pPixelShader = NULL;

#ifdef _DEBUG

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Quit();

{





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		SDL_RenderClear(ren);

			index_offset += num_vertices;

	txDesc.MiscFlags = 0;

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pVertexBuffer = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&level,

	{

	D3D11_BUFFER_DESC cbDesc;



	m_pDepthStencilView = NULL;

void CD3DTest::Render()

	if (FAILED(hr))

	// Loop over shapes

{

	SAFE_RELEASE(m_pLightBuffer);



	if (FAILED(hr))

		&scDesc,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLightBuffer clb;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		if (!ret)

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



	dsDesc.Texture2D.MipSlice = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	delete[] pIList;

				tinyobj::real_t tx =



			}







	/*



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return;

	SDL_DestroyWindow(win);

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.MipLevels = 1;



HRESULT CD3DTest::Create(HWND hwnd)

	auto& shapes = reader.GetShapes();

};

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:





		&error,

			default:

struct ConstantMatrixBuffer {

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;







	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			case SDLK_UP:



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

		}

			switch (e.key.keysym.sym)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

		exit(1);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.MinDepth = 0.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	{

				tinyobj::real_t tx =

		NULL,

	SAFE_RELEASE(m_pDepthStencilTexture);

	irData.SysMemPitch = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}





int main(int, char**)



		D3D11_SDK_VERSION,

	if (FAILED(hr))

		SDL_Delay(1000);

		}





	int     vcount = vertexlist.size();

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	if (FAILED(hr))

	}





	m_pImmediateContext = NULL;



		return hr;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	return hr;

	m_pSwapChain->Present(0, 0);

	irData.pSysMem = &pIList[0];

	UINT strides = sizeof(Vertex);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		pVList[i] = vertexlist[i];

	tinyobj::ObjReader reader;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

{

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pDevice);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	LoadObj(vertexlist, indexList);

};





		return hr;

		if (!reader.Error().empty())

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <SDL.h>

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

	m_Viewport.MinDepth = 0.0f;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			//Select surfaces based on key press

		SDL_RenderPresent(ren);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include "DirectXManager.h"

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pTexture = NULL;

	m_pTextureView = NULL;

	vrData.SysMemPitch = 0;

	m_Angle += XMConvertToRadians(1.0f);

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

};

		cout << "SDL_INIT_ERROR" << endl;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	// Loop over shapes

	m_pTextureView = NULL;

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pSwapChain);

		size_t index_offset = 0;

	m_Angle += XMConvertToRadians(1.0f);

		delete[] pIList;

	ZeroMemory(&txDesc, sizeof(txDesc));

using std::cout; using std::endl;

	while (SDL_PollEvent(&e) != 0)

	{

	ConstantMatrixBuffer cmb;

		KEY_PRESS_SURFACE_RIGHT,

	m_pDepthStencilTexture = NULL;

CD3DTest::~CD3DTest()

		m_pImmediateContext->ClearState();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			break;

	}

	CRect                rect;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				break;

	{



	//深度ステンシルバッファ作成

				// access to vertex



		{

			case SDLK_RIGHT:

			case SDLK_DOWN:

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

{

	SDL_DestroyTexture(tex);

#define TINYOBJLOADER_IMPLEMENTATION

		}

		return hr;

		{



	vrData.pSysMem = &pVList[0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		NULL,

	pBackBuffer->Release();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

	float    fov = XMConvertToRadians(20.0f);



}

	m_pSwapChain->Present(0, 0);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

}

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_pTextureView = NULL;

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		R"(cube.obj)");

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ConstantMatrixBuffer cmb;

	{



		SDL_RenderPresent(ren);

			{

	SDL_DestroyWindow(win);





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;



	//インデックスバッファ作成

			index_offset += num_vertices;

		D3D11_SDK_VERSION,

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	irData.SysMemPitch = 0;

	m_pTextureView = NULL;

#ifdef _DEBUG

	float    farZ = 100.0f;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

		}



		size_t index_offset = 0;  // インデントのオフセット

		&m_pDevice,

	if (!error.empty())

	while (SDL_PollEvent(&e) != 0)



	txDesc.SampleDesc.Count = 1;

	XMFLOAT4X4 projection;

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

}

CD3DTest::~CD3DTest()

	D3D11_SAMPLER_DESC smpDesc;

		//User presses a key

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	LoadObj(vertexlist, indexList);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 projection;

	XMFLOAT4X4 view;

		SDL_RenderClear(ren);

				break;

	{

	vrData.pSysMem = &pVList[0];

			break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SUBRESOURCE_DATA irData;

	SDL_DestroyWindow(win);

	::GetClientRect(hwnd, &rect);

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		{

				break;



	//Clean up our objects and quit

	if (FAILED(hr))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMFLOAT4X4 projection;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	txDesc.SampleDesc.Count = 1;

	tinyobj::ObjReader reader;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		delete[] pIList;

	m_pVertexShader = NULL;

		&materials,

		&m_pSwapChain,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		if (!reader.Error().empty())

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

		R"(cube.obj)");

	scDesc.BufferCount = 1;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点バッファ作成

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	WORD   icount = indexList.size();

		D3D_DRIVER_TYPE_HARDWARE,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	ConstantMaterial material; //物体の質感



};

	WORD* pIList = new WORD[icount];



{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.Texture2D.MipSlice = 0;

{





#include <iostream>



				break;



	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.CPUAccessFlags = 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&attrib,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{



int main(int, char**)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDevice = NULL;





		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	LoadObj(vertexlist, indexList);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				indexlist.push_back(idx.vertex_index);

				// access to vertex

				// access to vertex

	SDL_DestroyWindow(win);

{



	//Vertex* pVList = new Vertex[vcount];

#include "DirectXManager.h"

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSampler);

	while (SDL_PollEvent(&e) != 0)

		&level,

	Vertex* pVList = new Vertex[vcount];

				indexlist.push_back(index);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	//頂点シェーダー生成

	for (int i = 0; i < 3; i++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		R"(cube.obj)");

	std::vector<tinyobj::shape_t> shapes;

		delete[] pIList;

	if (!reader.Warning().empty())

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#define TINYOBJLOADER_IMPLEMENTATION

	while (SDL_PollEvent(&e) != 0)

	SDL_DestroyTexture(tex);

		&attrib,



	m_pVertexShader = NULL;

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))

{





		pVList[i] = vertexlist[i];



	SAFE_RELEASE(m_pDepthStencilView);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

	m_IndexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.Warning().empty())

	//Clean up our objects and quit





	m_VertexCount = vcount;

	Release();

	}

	vrData.SysMemSlicePitch = 0;

	std::string imagePath = "hello.bmp";

	//Vertex* pVList = new Vertex[vcount];

	delete[] pIList;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

		D3D_DRIVER_TYPE_HARDWARE,

	//Create Index



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

		&materials,

	m_pRenderTargetView = NULL;

		return hr;

	m_pMatrixBuffer = NULL;

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//テクスチャ読み込み

			// Loop over vertices in the face.

#include <SDL.h>

	ConstantMaterial material; //物体の質感

	//ピクセルシェーダー生成



	m_pTextureView = NULL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

int SEGMENT = 36;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}



	XMFLOAT4         eyePos;   //視点座標

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			}

			case SDLK_DOWN:

		if (!reader.Error().empty())

	m_pVertexShader = NULL;

	while (SDL_PollEvent(&e) != 0)

#include <iostream>

	SDL_DestroyWindow(win);

	XMFLOAT4         eyePos;   //視点座標

	std::string imagePath = "hello.bmp";

			index_offset += fv;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pMatrixBuffer);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    fov = XMConvertToRadians(20.0f);

			default:

		// Loop over faces(polygon)



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	std::string inputfile = "test.obj";

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Quit();

		return 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pTexture = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.StructureByteStride = 0;

			case SDLK_UP:

	m_pVertexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vector<Vertex> vertexlist;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			int num_vertices = shape.mesh.num_face_vertices[f];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext = NULL;

	SDL_FreeSurface(bmp);

	m_VertexCount = 0;

	ConstantLightBuffer clb;

	ibDesc.MiscFlags = 0;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}



	scDesc.Windowed = TRUE;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





			{



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyWindow(win);

	float    farZ = 100.0f;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	int     vcount = vertexlist.size();

		delete[] pIList;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.MipLevels = 1;

	m_pMatrixBuffer = NULL;

	vrData.SysMemSlicePitch = 0;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	return 0;

	}

				// access to vertex



			case SDLK_UP:

	m_Viewport.MinDepth = 0.0f;

	dsDesc.Format = txDesc.Format;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ID3D11Texture2D* pBackBuffer;

		return hr;

	std::string error;

	m_pPixelShader = NULL;



	{



	SAFE_RELEASE(m_pDepthStencilView);

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		pIList[j] = indexList[j];

	if (FAILED(hr))



	//vector<Vertex> vertex_t;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pRenderTargetView = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantMaterial {

			//Select surfaces based on key press

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Viewport.MaxDepth = 1.0f;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

}



	ConstantMatrixBuffer cmb;



	}

			}

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

	m_Viewport.MaxDepth = 1.0f;

	txDesc.Width = rect.Width();



	dsDesc.Texture2D.MipSlice = 0;

{

			// Loop over vertices in the face.

};

	m_pInputLayout = NULL;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		}

			exit(1);

			}

};

	return 0;

	return;

		&scDesc,



			}

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.CPUAccessFlags = 0;



	m_pVertexBuffer = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

			switch (e.key.keysym.sym)





	m_pDepthStencilTexture = NULL;



	//ビューポート設定



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	UINT flags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.Width = (FLOAT)rect.Width();

	vrData.pSysMem = &pVList[0];

struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	reader_config.mtl_search_path = "./"; // Path to material files

		if (e.type == SDL_QUIT)

		return hr;



	SAFE_RELEASE(m_pIndexBuffer);



		return hr;

				// access to vertex

#endif

			index_offset += num_vertices;

	m_Viewport.MaxDepth = 1.0f;

	//Key press surfaces constants

		return 1;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		SDL_Delay(1000);

		return hr;

	//インデックスバッファ作成

		&error,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	vrData.SysMemPitch = 0;

	SDL_Event e;

			}

	m_Angle += XMConvertToRadians(1.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				// access to vertex

	if (FAILED(hr))



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	for (int i = 0; i < vcount; i++)

				WORD index = idx.vertex_index;

		return hr;



	SDL_DestroyTexture(tex);

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			for (size_t v = 0; v < num_vertices; v++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pRenderTargetView);

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

struct ConstantLight {

				break;

		return hr;

#endif

		return hr;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	bool ret = tinyobj::LoadObj(

		&m_pSwapChain,

{

		SDL_RenderClear(ren);

		if (e.type == SDL_QUIT)

				vertex.push_back(vertex_tmp);

	cbDesc.StructureByteStride = 0;



	if (FAILED(hr))

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		D3D11_SDK_VERSION,

	m_pPixelShader = NULL;

	UINT flags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ID3D11Texture2D* pBackBuffer;

		KEY_PRESS_SURFACE_RIGHT,

	tinyobj::attrib_t attrib;

		return hr;

	for (int j = 0; j < icount; j++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_DOWN:

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				break;

	return 0;

using std::cout; using std::endl;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))





			{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	dsDesc.Texture2D.MipSlice = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}



		&scDesc,

	cbDesc.MiscFlags = 0;



	}*/

	{



	{

				WORD index = idx.vertex_index;

}

		pVList[i] = vertexlist[i];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

int main(int, char**)

		return hr;

	SDL_Quit();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

CD3DTest::CD3DTest()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	Release();

	vector<WORD> indexList;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





		pLevels,

};

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferDesc.Width = rect.Width();

	UINT strides = sizeof(Vertex);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pTextureView = NULL;

struct ConstantMatrixBuffer {



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				WORD index = idx.vertex_index;

		&m_pDevice,



	//ピクセルシェーダー生成

		&level,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))



	SDL_Quit();

		&m_pSwapChain,

	SAFE_RELEASE(m_pTexture);

				vertex.push_back(vertex_tmp);



			{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	if (FAILED(hr))



			//Select surfaces based on key press



	m_pTextureView = NULL;

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			for (size_t v = 0; v < fv; v++)

#include <iostream>





	{

	LoadObj(vertexlist, indexList);

		&attrib,

}

	delete[] pIList;

	scDesc.BufferDesc.Width = rect.Width();

		delete[] pIList;

	}

	XMFLOAT4 pos;               //座標(x,y,z)

		KEY_PRESS_SURFACE_LEFT,

	m_pPixelShader = NULL;

	ibDesc.MiscFlags = 0;

		//User requests quit

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};

	m_pSwapChain->Present(0, 0);

	delete[] pVList;

				vertex.push_back(vertex_tmp);

	auto& shapes = reader.GetShapes();

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

		&scDesc,

{

				indexlist.push_back(index);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		if (!reader.Error().empty())



	Release();

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#endif

		pVList[i] = vertexlist[i];

	HRESULT              hr;

	m_IndexCount = icount;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		if (e.type == SDL_QUIT)

		size_t index_offset = 0;  // インデントのオフセット

		R"(cube.obj)");



	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



#ifdef _DEBUG

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t tx =

	if (FAILED(hr))



		return hr;

	//定数バッファ作成

	ConstantLightBuffer clb;



		return hr;

	ID3D11Texture2D* pBackBuffer;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		{

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		&level,

	std::string error;

	m_pSampler = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//テクスチャ読み込み

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				vertex.push_back(vertex_tmp);

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

	m_Viewport.MaxDepth = 1.0f;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pDevice);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pSwapChain->Present(0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);



struct ConstantLight {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);



	std::string inputfile = "test.obj";

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

int main(int, char**)

				indexlist.push_back(index);

	// Loop over shapes

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

using std::cout; using std::endl;

	return hr;

	if (FAILED(hr))

	{

	scDesc.OutputWindow = hwnd;

	//ビューポート設定

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4X4 view;

#include <SDL.h>

	{

	for (int i = 0; i < 3; i++)

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		SDL_Delay(1000);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			index_offset += num_vertices;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		delete[] pIList;

	SAFE_RELEASE(m_pVertexShader);

{

	m_pDevice = NULL;

			index_offset += fv;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

CD3DTest::CD3DTest()

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);



}

	ConstantMatrixBuffer cmb;

	SDL_DestroyRenderer(ren);

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_DOWN,

			{

	ConstantMatrixBuffer cmb;

{



			//Select surfaces based on key press

	//テクスチャ読み込み

	vbDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 view;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.SysMemPitch = 0;



	D3D11_SAMPLER_DESC smpDesc;

		SDL_RenderClear(ren);

	if (FAILED(hr))

	tinyobj::attrib_t attrib;





	Release();

	};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	std::string imagePath = "hello.bmp";

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	//Vertex* pVList = new Vertex[vcount];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4X4 view;

};

	return;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	XMFLOAT4         ambient;  //環境光(r,g,b)





	D3D_FEATURE_LEVEL level;

			case SDLK_RIGHT:





	irData.pSysMem = &pIList[0];

		SDL_RenderClear(ren);



	tinyobj::ObjReader reader;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pDepthStencilView = NULL;

		1,

		return hr;

	enum KeyPressSurfaces

#include <SDL.h>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				indexlist.push_back(index);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	txDesc.MipLevels = 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		m_pImmediateContext->ClearState();

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_Delay(1000);

		SDL_Delay(1000);

	}

		pVList[i] = vertexlist[i];

	m_Viewport.MaxDepth = 1.0f;

	CRect                rect;







	ZeroMemory(&dsDesc, sizeof(dsDesc));





}

			case SDLK_UP:

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

void CD3DTest::Render()

	m_pLightBuffer = NULL;

	UINT offsets = 0;

	delete[] pVList;

	scDesc.Windowed = TRUE;

{

	if (FAILED(hr))

			case SDLK_UP:

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		{









	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&error,

	}

	//定数バッファ作成

{

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Quit();

}



	auto& attrib = reader.GetAttrib();

#include <SDL.h>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				break;





		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

		R"(cube.obj)");

	}

	SDL_FreeSurface(suf);

 * Lesson 1: Hello World!



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	irData.SysMemPitch = 0;

			case SDLK_UP:

				WORD index = idx.vertex_index;

{



	for (size_t s = 0; s < shapes.size(); s++)

				break;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pTexture);





	{

	m_Viewport.TopLeftY = 0;

	//vector<Vertex> vertex_t;

	if (!error.empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pDevice = NULL;



	SAFE_RELEASE(m_pTexture);

	enum KeyPressSurfaces

		return hr;

		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext = NULL;

	// Loop over shapes

		SDL_Delay(1000);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pIndexBuffer);







	vrData.pSysMem = &pVList[0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.MiscFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	//深度ステンシルバッファ作成

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	};

	}

}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pTexture);





	if (FAILED(hr))

	m_IndexCount = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_BUFFER_DESC ibDesc;

		&shapes,

	if (FAILED(hr))



	return 0;

	auto& attrib = reader.GetAttrib();

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	for (size_t s = 0; s < shapes.size(); s++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;



		NULL,

		KEY_PRESS_SURFACE_LEFT,

			switch (e.key.keysym.sym)

	//ピクセルシェーダー生成

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//定数バッファ作成



	for (size_t s = 0; s < shapes.size(); s++)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.MiscFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantLight    pntLight; //点光源

CD3DTest::CD3DTest()



#include <iostream>

	m_IndexCount = icount;

		size_t index_offset = 0;  // インデントのオフセット

		&level,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	tinyobj::attrib_t attrib;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		return hr;

	}

	}

			exit(1);



	//Key press surfaces constants

	UINT strides = sizeof(Vertex);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];







	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4X4 projection;

	}

	vector<Vertex> vertexlist;



	};

				// access to vertex



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

HRESULT CD3DTest::Create(HWND hwnd)





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	Release();

		pLevels,

	vrData.pSysMem = &pVList[0];

	D3D_FEATURE_LEVEL level;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

 */

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.MipLevels = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4X4 projection;

			break;

	ibDesc.MiscFlags = 0;





#ifdef _DEBUG

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	vbDesc.CPUAccessFlags = 0;



			{

 * Lesson 1: Hello World!

		{

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	{

				break;

	SAFE_RELEASE(m_pLightBuffer);

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

	//頂点シェーダー生成

		&error,

	m_pSampler = NULL;

	//頂点シェーダー生成

		NULL,

	if (FAILED(hr))

	m_pVertexShader = NULL;

		//User presses a key

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	CRect                rect;





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//定数バッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pDevice,

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	SDL_Quit();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		1,

	::GetClientRect(hwnd, &rect);



	XMFLOAT4         ambient;  //環境光(r,g,b)

		size_t index_offset = 0;  // インデントのオフセット



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

}

	txDesc.SampleDesc.Count = 1;

		}

		size_t index_offset = 0;  // インデントのオフセット

	m_pVertexBuffer = NULL;

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION



	cbDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

}

	vrData.pSysMem = &pVList[0];

	::ZeroMemory(&scDesc, sizeof(scDesc));



	dsDesc.Format = txDesc.Format;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		//User requests quit

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		1,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.eyePos, eye);

		{

	scDesc.Windowed = TRUE;



	SAFE_RELEASE(m_pDepthStencilView);



	m_pLightBuffer = NULL;



	if (FAILED(hr))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	D3D11_BUFFER_DESC ibDesc;



	{

	//定数バッファ作成

	//Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		else if (e.type == SDL_KEYDOWN)

	tinyobj::ObjReader reader;



	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		KEY_PRESS_SURFACE_DEFAULT,

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

CD3DTest::~CD3DTest()

	float    fov = XMConvertToRadians(20.0f);



	m_pDepthStencilTexture = NULL;

	{

	m_Viewport.TopLeftY = 0;



			case SDLK_RIGHT:

		&level,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.Height = rect.Height();

	//Create Index

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

struct ConstantLight {

	m_pSampler = NULL;

	vrData.pSysMem = &pVList[0];

	std::string inputfile = "test.obj";



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	scDesc.BufferCount = 1;

	delete[] pVList;

	/*

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_Viewport.TopLeftX = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	Vertex* pVList = new Vertex[vcount];

	m_IndexCount = icount;



	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;

	irData.SysMemPitch = 0;

	m_IndexCount = icount;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				// access to vertex

	m_pPixelShader = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vector<Vertex> vertexlist;

		&m_pSwapChain,

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	return 0;

	m_pVertexShader = NULL;

	enum KeyPressSurfaces





	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pTexture);



		pIList[j] = indexList[j];

#include <SDL.h>

	m_pLightBuffer = NULL;

#ifdef _DEBUG

	m_Viewport.TopLeftX = 0;

#ifdef _DEBUG

	SAFE_RELEASE(m_pLightBuffer);

	//深度ステンシルバッファ作成



	SAFE_RELEASE(m_pImmediateContext);

		if (!ret)

	D3D11_SUBRESOURCE_DATA irData;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

			break;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	return hr;

		{

}
	vector<Vertex> vertexlist;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				break;

	//Clean up our objects and quit

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//First we need to start up SDL, and make sure it went ok

#include <iostream>

		SDL_Delay(1000);

		&m_pDevice,

	//頂点レイアウト作成

	auto& attrib = reader.GetAttrib();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

}

	//頂点レイアウト作成

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		flags,

	{

	LoadObj(vertexlist, indexList);





	SAFE_RELEASE(m_pSwapChain);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);



	D3D11_BUFFER_DESC ibDesc;

	m_pTexture = NULL;

			break;

		SDL_RenderPresent(ren);



	auto& shapes = reader.GetShapes();



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

		return hr;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

		if (e.type == SDL_QUIT)



/*

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDevice);

			case SDLK_LEFT:

	if (FAILED(hr))

		&m_pDevice,



	if (FAILED(hr))

}

	if (FAILED(hr))



	Release();

			for (size_t v = 0; v < num_vertices; v++)

	m_pSampler = NULL;

	txDesc.Width = rect.Width();

	auto& materials = reader.GetMaterials();

	ConstantLightBuffer clb;

}

	ConstantLight    pntLight; //点光源

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_Viewport.TopLeftX = 0;

	//vector<WORD> index_t;







		m_pImmediateContext->ClearState();

	//頂点レイアウト作成

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	WORD* pIList = new WORD[icount];

#include <SDL.h>

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pInputLayout = NULL;

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			default:

			}

	m_VertexCount = vcount;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	irData.pSysMem = &pIList[0];

	//頂点バッファ作成



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{



	//First we need to start up SDL, and make sure it went ok

		&materials,

		if (!reader.Error().empty())

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.OutputWindow = hwnd;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vbDesc.StructureByteStride = 0;

	return hr;

	D3D_FEATURE_LEVEL level;

		&level,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Quit();

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_SUBRESOURCE_DATA vrData;

#endif

{

	}

		size_t index_offset = 0;  // インデントのオフセット

	}

	tinyobj::attrib_t attrib;

	{

	//Vertex* pVList = new Vertex[vcount];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_LEFT:

{



};

	D3D11_TEXTURE2D_DESC txDesc;

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		D3D_DRIVER_TYPE_HARDWARE,

		exit(1);

	Release();

{

	{

	txDesc.CPUAccessFlags = 0;

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	ibDesc.MiscFlags = 0;

	m_VertexCount = 0;

};

	SAFE_RELEASE(m_pPixelShader);

	if (!reader.ParseFromFile(inputfile, reader_config))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

		&level,

int SEGMENT = 36;

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		size_t index_offset = 0;  // インデントのオフセット

	vector<WORD> indexList;

	if (!reader.Warning().empty())

	UINT strides = sizeof(Vertex);





		return hr;



	SAFE_RELEASE(m_pSwapChain);

	{



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (!reader.Warning().empty())

			exit(1);

CD3DTest::CD3DTest()

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		SDL_Delay(1000);



	reader_config.mtl_search_path = "./"; // Path to material files



		KEY_PRESS_SURFACE_UP,

		}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.CPUAccessFlags = 0;

	CRect                rect;

		&level,

	for (const auto& shape : shapes)

	HRESULT              hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

		}

	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	//頂点レイアウト作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



}

				WORD index = idx.vertex_index;

	m_IndexCount = icount;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.MiscFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	vrData.pSysMem = &pVList[0];

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

		R"(cube.obj)");

			{

}



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SAFE_RELEASE(m_pIndexBuffer);

	{



	SAFE_RELEASE(m_pLightBuffer);

		{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	};



		&m_pImmediateContext);

	vbDesc.MiscFlags = 0;

		pVList[i] = vertexlist[i];

	tinyobj::ObjReader reader;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	Release();

		{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		//User presses a key

	XMFLOAT4         eyePos;   //視点座標

void CD3DTest::Render()



	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		D3D11_SDK_VERSION,



	Release();



	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

		//User requests quit

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (!error.empty())

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



}



				WORD index = idx.vertex_index;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pIndexBuffer);

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.ArraySize = 1;

CD3DTest::CD3DTest()

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	Vertex* pVList = new Vertex[vcount];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantMaterial material; //物体の質感





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);

				break;

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	irData.SysMemSlicePitch = 0;

{

	}

		return hr;

			// Loop over vertices in the face.

		SDL_RenderClear(ren);

	if (!error.empty())



	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = 0;

		KEY_PRESS_SURFACE_DEFAULT,

			//Select surfaces based on key press

}



	scDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			break;

	m_Viewport.MaxDepth = 1.0f;

	m_pSwapChain = NULL;



		return hr;

#include <SDL.h>

#define TINYOBJLOADER_IMPLEMENTATION



		SDL_RenderPresent(ren);

		1,

};

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		if (!reader.Error().empty())

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();



	m_pTextureView = NULL;

	SDL_Quit();





	{

	vbDesc.MiscFlags = 0;

	{

	XMFLOAT4X4 projection;

		{

};

	}*/





				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	SDL_DestroyTexture(tex);

	m_pDepthStencilTexture = NULL;

	std::string imagePath = "hello.bmp";

		return hr;

		&m_pImmediateContext);

	float    nearZ = 0.1f;

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::CD3DTest()

		}

	}

	vbDesc.MiscFlags = 0;

{

			exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_pSwapChain = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	tinyobj::ObjReaderConfig reader_config;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pVertexBuffer);



struct ConstantLightBuffer {

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::vector<tinyobj::material_t> materials;



	//First we need to start up SDL, and make sure it went ok

	m_pLightBuffer = NULL;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4X4 projection;



			for (size_t v = 0; v < fv; v++)

void CD3DTest::Release()



	SAFE_RELEASE(m_pLightBuffer);

			exit(1);

	SDL_FreeSurface(suf);

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDevice);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		size_t index_offset = 0;  // インデントのオフセット

	std::string inputfile = "test.obj";

		if (e.type == SDL_QUIT)



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	txDesc.MipLevels = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	dsDesc.Format = txDesc.Format;

	cbDesc.MiscFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	m_Viewport.TopLeftX = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



		}

		NULL,



#include <SDL.h>

	SDL_DestroyRenderer(ren);

	m_pSwapChain->Present(0, 0);

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Height = rect.Height();

void CD3DTest::Render()

{

		cout << "SDL_INIT_ERROR" << endl;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.ParseFromFile(inputfile, reader_config))

		&m_pImmediateContext);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

#endif

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		if (e.type == SDL_QUIT)

	m_VertexCount = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_DOWN:

		return hr;



	XMStoreFloat4(&clb.eyePos, eye);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

}

struct ConstantLightBuffer {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



}

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.pSysMem = &pIList[0];

	ID3D11Texture2D* pBackBuffer;

	irData.SysMemPitch = 0;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pInputLayout);

	for (int j = 0; j < icount; j++)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			case SDLK_LEFT:

		if (!reader.Error().empty())



	//定数バッファ作成

	bool ret = tinyobj::LoadObj(

	m_Viewport.TopLeftX = 0;

	//テクスチャ読み込み

	std::vector<tinyobj::shape_t> shapes;

			for (size_t v = 0; v < fv; v++)

	pBackBuffer->Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantMaterial material; //物体の質感

		return hr;

	XMFLOAT4X4 view;

	delete[] pIList;



		&m_pDevice,

	SAFE_RELEASE(m_pVertexShader);

		}

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



}

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

struct ConstantLightBuffer {

	tinyobj::ObjReader reader;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Width = rect.Width();

	m_pLightBuffer = NULL;

				break;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

				indexlist.push_back(idx.vertex_index);

	m_pSampler = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

	std::vector<tinyobj::material_t> materials;

	HRESULT              hr;

	}

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

				break;

		&m_pSwapChain,

	delete[] pVList;

	Release();



	Release();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.SampleDesc.Quality = 0;

	delete[] pIList;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(suf);

	txDesc.SampleDesc.Quality = 0;



	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	//テクスチャ読み込み

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	pBackBuffer->Release();

	}

	WORD* pIList = new WORD[icount];

int main(int, char**)

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		else if (e.type == SDL_KEYDOWN)

	{

	m_pImmediateContext = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantMaterial {

	return;



	m_pDevice = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	std::string inputfile = "test.obj";

	m_IndexCount = 0;





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





};



	flags |= D3D11_CREATE_DEVICE_DEBUG;

			for (size_t v = 0; v < num_vertices; v++)

	{



		R"(cube.obj)");

	m_pSwapChain = NULL;

	scDesc.OutputWindow = hwnd;

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pSwapChain);

		return hr;

			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	SDL_Event e;

			//Select surfaces based on key press

			case SDLK_DOWN:

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	/*

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

		D3D11_SDK_VERSION,

	m_Viewport.Width = (FLOAT)rect.Width();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	dsDesc.Texture2D.MipSlice = 0;





	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}

	irData.pSysMem = &pIList[0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;


