	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

	//深度ステンシルバッファ作成

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderClear(ren);

	};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

		KEY_PRESS_SURFACE_LEFT,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

struct ConstantLight {

	for (int j = 0; j < icount; j++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (!reader.Error().empty())

		&shapes,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;



				break;

	if (FAILED(hr))

{

		cout << "SDL_INIT_ERROR" << endl;

{

	SAFE_RELEASE(m_pDepthStencilTexture);

{

				// access to vertex

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		//User presses a key



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.MiscFlags = 0;



	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	for (int j = 0; j < icount; j++)



	bool ret = tinyobj::LoadObj(

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	tinyobj::ObjReader reader;

				break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	float    farZ = 100.0f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	m_pTextureView = NULL;

	cbDesc.MiscFlags = 0;







	Release();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (!error.empty())



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	cbDesc.CPUAccessFlags = 0;

		delete[] pVList;



	for (const auto& shape : shapes)

	scDesc.Windowed = TRUE;



	if (FAILED(hr))

	delete[] pIList;

	std::vector<tinyobj::shape_t> shapes;



	m_Viewport.MinDepth = 0.0f;

		return hr;

	ibDesc.CPUAccessFlags = 0;

	{

	cbDesc.StructureByteStride = 0;

	return 0;

	WORD* pIList = new WORD[icount];

		//User requests quit



	if (m_pImmediateContext)

	}

#include "DirectXManager.h"



	std::string inputfile = "test.obj";



	m_Viewport.Width = (FLOAT)rect.Width();

				break;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (!reader.Warning().empty())

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	float    farZ = 100.0f;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	return;

	ZeroMemory(&txDesc, sizeof(txDesc));

		delete[] pIList;

		{

	}

	SAFE_RELEASE(m_pVertexShader);

		//User requests quit

	}

	//頂点シェーダー生成

	for (const auto& shape : shapes)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		{

using std::cout; using std::endl;

	m_pSampler = NULL;

			}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				vertex.push_back(vertex_tmp);

	txDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

	WORD* pIList = new WORD[icount];

}

	txDesc.Height = rect.Height();

};

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



#include <iostream>

		KEY_PRESS_SURFACE_LEFT,

	D3D11_SUBRESOURCE_DATA vrData;

			case SDLK_DOWN:

	m_Viewport.MaxDepth = 1.0f;

	}



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	//頂点シェーダー生成

	auto& shapes = reader.GetShapes();



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		m_pImmediateContext->ClearState();

		else if (e.type == SDL_KEYDOWN)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	//Key press surfaces constants



	HRESULT              hr;

	}

	std::vector<tinyobj::shape_t> shapes;

	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.Height = (FLOAT)rect.Height();

		if (!reader.Error().empty())

			// Loop over vertices in the face.

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pSampler = NULL;

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_IndexCount = 0;

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pTexture);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				break;

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



			case SDLK_LEFT:

	{

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		return hr;

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		if (!ret)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pSwapChain,

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_SUBRESOURCE_DATA irData;

#endif

		return hr;

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	delete[] pVList;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				indexlist.push_back(idx.vertex_index);

	//ピクセルシェーダー生成

	txDesc.SampleDesc.Count = 1;

};





	LoadObj(vertexlist, indexList);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	//頂点バッファ作成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		// Loop over faces(polygon)

	SDL_Quit();

	cbDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	cbDesc.StructureByteStride = 0;

			break;



			index_offset += num_vertices;

			case SDLK_RIGHT:



};

}

		flags,

		return hr;

	{

	dsDesc.Texture2D.MipSlice = 0;



	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	{

				tinyobj::real_t tx =



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

	if (FAILED(hr))

		1,





	m_pVertexBuffer = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

int main(int, char**)

	m_pSwapChain = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ibDesc.StructureByteStride = 0;





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pDepthStencilTexture = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pIndexBuffer = NULL;

}

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//テクスチャ読み込み

		return 1;

	SDL_FreeSurface(bmp);

				// access to vertex



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTextureView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.eyePos, eye);



	std::string error;

	m_pDevice = NULL;







	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pRenderTargetView);



	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4         eyePos;   //視点座標

CD3DTest::CD3DTest()

	std::vector<tinyobj::material_t> materials;



	txDesc.ArraySize = 1;

	scDesc.SampleDesc.Count = 1;

	m_pDepthStencilView = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		&level,



		NULL,

		//User requests quit

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	//深度ステンシルバッファ作成



	irData.SysMemPitch = 0;



	XMStoreFloat4(&clb.ambient, lightAmbient);



	vrData.pSysMem = &pVList[0];

	//vector<WORD> index_t;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pTexture);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferDesc.Width = rect.Width();

	//Create Index

		1,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{



	//ピクセルシェーダー生成

		}

		KEY_PRESS_SURFACE_TOTAL

}

		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

				vertex.push_back(vertex_tmp);

	//インデックスバッファ作成

	SDL_DestroyTexture(tex);

	vrData.SysMemPitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	std::string error;

	txDesc.CPUAccessFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



			{

	m_pVertexBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		size_t index_offset = 0;



			default:

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



			case SDLK_UP:

			case SDLK_LEFT:

}

	XMFLOAT4         eyePos;   //視点座標

		&shapes,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDepthStencilView = NULL;

		NULL,

	//頂点レイアウト作成

		pIList[j] = indexList[j];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

	m_VertexCount = vcount;

			index_offset += fv;



{

	SDL_DestroyRenderer(ren);

	{

	ConstantMaterial material; //物体の質感

		flags,

			index_offset += num_vertices;

			for (size_t v = 0; v < fv; v++)

		return hr;





	m_IndexCount = 0;

	{

	txDesc.ArraySize = 1;

				break;

			case SDLK_RIGHT:

	D3D11_BUFFER_DESC cbDesc;

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_UP,

	std::string error;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		NULL,

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

 * Lesson 1: Hello World!

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<WORD> indexList;

			default:



}

	D3D11_SUBRESOURCE_DATA irData;

}

struct ConstantLightBuffer {

		&attrib,

	m_Viewport.TopLeftX = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	if (FAILED(hr))

	//頂点バッファ作成

{

	while (SDL_PollEvent(&e) != 0)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//vector<WORD> index_t;

		pVList[i] = vertexlist[i];

	m_pVertexBuffer = NULL;



	SDL_FreeSurface(bmp);

	{

	m_pPixelShader = NULL;

	HRESULT              hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

{



	SAFE_RELEASE(m_pRenderTargetView);

			{

	SAFE_RELEASE(m_pDevice);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	// Loop over shapes

	SAFE_RELEASE(m_pIndexBuffer);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	cbDesc.MiscFlags = 0;



		return hr;

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pDepthStencilView);

}

	SAFE_RELEASE(m_pRenderTargetView);

		&m_pImmediateContext);

				tinyobj::real_t ty =



		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		&shapes,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantLight {

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				// access to vertex

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT strides = sizeof(Vertex);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//深度ステンシルバッファ作成

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

	{

struct ConstantLightBuffer {

	txDesc.MipLevels = 1;



	vrData.SysMemSlicePitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	enum KeyPressSurfaces



#include <iostream>

		{

	//vector<Vertex> vertex_t;

	m_IndexCount = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}

		R"(cube.obj)");

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.MaxDepth = 1.0f;

			case SDLK_LEFT:

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	vector<Vertex> vertexlist;





			break;

	WORD   icount = indexList.size();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	vector<WORD> indexList;



	}

	std::vector<tinyobj::material_t> materials;

CD3DTest::CD3DTest()





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D11_SUBRESOURCE_DATA irData;





		SDL_RenderClear(ren);

	for (int j = 0; j < icount; j++)

	cbDesc.MiscFlags = 0;



		return hr;



		return hr;

		pLevels,

	SDL_Event e;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			{



	auto& attrib = reader.GetAttrib();

	WORD* pIList = new WORD[icount];

	auto& attrib = reader.GetAttrib();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

#include <SDL.h>

	enum KeyPressSurfaces

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

struct ConstantLight {

	m_VertexCount = vcount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	ibDesc.StructureByteStride = 0;

	{

		//User presses a key

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         eyePos;   //視点座標



			case SDLK_UP:

				break;

	vbDesc.StructureByteStride = 0;



	auto& materials = reader.GetMaterials();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ID3D11Texture2D* pBackBuffer;

	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SAFE_RELEASE(m_pVertexShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pDevice,

struct ConstantMaterial {

	{

	SDL_DestroyTexture(tex);

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

		return hr;

	{

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyRenderer(ren);



	cbDesc.MiscFlags = 0;

		{



		return hr;

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	// Loop over shapes

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



				break;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





struct ConstantLightBuffer {



		if (!reader.Error().empty())

	enum KeyPressSurfaces

		return hr;



	if (!reader.ParseFromFile(inputfile, reader_config))



	{

		return hr;

	txDesc.CPUAccessFlags = 0;

#include "DirectXManager.h"

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pVertexShader = NULL;

	//Create Index



				WORD index = idx.vertex_index;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pTexture);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	Release();

	cbDesc.CPUAccessFlags = 0;

	/*

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			index_offset += num_vertices;

	txDesc.MiscFlags = 0;

	//頂点レイアウト作成

	ConstantLight    pntLight; //点光源

	vbDesc.StructureByteStride = 0;





	m_pMatrixBuffer = NULL;

	cbDesc.CPUAccessFlags = 0;

	WORD   icount = indexList.size();

	//Vertex* pVList = new Vertex[vcount];



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	UINT flags = 0;

				vertex.push_back(vertex_tmp);

		pVList[i] = vertexlist[i];

	/*

	D3D11_BUFFER_DESC vbDesc;

		&scDesc,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		delete[] pIList;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}



		{

				// access to vertex

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	m_pTextureView = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	float    nearZ = 0.1f;

using std::cout; using std::endl;

			{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		SDL_Delay(1000);





void CD3DTest::Release()



	vector<WORD> indexList;



	//Clean up our objects and quit



	SAFE_RELEASE(m_pRenderTargetView);





	//テクスチャ読み込み

			{

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	return 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);

	SDL_DestroyTexture(tex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.CPUAccessFlags = 0;

	//First we need to start up SDL, and make sure it went ok

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	SDL_Quit();

	dsDesc.Texture2D.MipSlice = 0;

			for (size_t v = 0; v < fv; v++)

		SDL_RenderPresent(ren);

	//定数バッファ作成

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pTextureView);

#include "DirectXManager.h"





	SAFE_RELEASE(m_pMatrixBuffer);

	//インデックスバッファ作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		flags,

		KEY_PRESS_SURFACE_RIGHT,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.Height = (FLOAT)rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.Width = rect.Width();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	auto& materials = reader.GetMaterials();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	for (int i = 0; i < 3; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_LEFT:

	m_pVertexBuffer = NULL;

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pDepthStencilTexture);



			}

	int     vcount = vertexlist.size();



	auto& shapes = reader.GetShapes();

				tinyobj::real_t ty =

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

}

	m_pSampler = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				// access to vertex



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//Clean up our objects and quit

{

		if (e.type == SDL_QUIT)

		&scDesc,

		&m_pSwapChain,



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_DestroyRenderer(ren);

#include "DirectXManager.h"

	m_Viewport.MaxDepth = 1.0f;

	}



		SDL_RenderPresent(ren);

	cbDesc.StructureByteStride = 0;

	//Key press surfaces constants

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				// access to vertex

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.SampleDesc.Quality = 0;

	delete[] pVList;

	XMFLOAT4X4 view;

	D3D11_BUFFER_DESC ibDesc;

		SDL_RenderPresent(ren);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	Release();

		cout << "SDL_INIT_ERROR" << endl;



		return hr;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	Vertex* pVList = new Vertex[vcount];

	m_pDevice = NULL;

	UINT offsets = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pPixelShader);

	vrData.pSysMem = &pVList[0];



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		SDL_RenderClear(ren);

	m_pDevice = NULL;

		//User presses a key

}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	if (FAILED(hr))

		{



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	ibDesc.StructureByteStride = 0;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	{

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_FreeSurface(bmp);

}
#include <iostream>

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&scDesc,

		D3D_DRIVER_TYPE_HARDWARE,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		// Loop over faces(polygon)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

	{

		pVList[i] = vertexlist[i];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



int main(int, char**)



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//ピクセルシェーダー生成

	vector<WORD> indexList;

	txDesc.SampleDesc.Quality = 0;

{

	scDesc.Windowed = TRUE;

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	vrData.SysMemPitch = 0;

		delete[] pVList;

	XMStoreFloat4(&clb.eyePos, eye);

			exit(1);



		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_LEFT,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.TopLeftY = 0;

	D3D11_BUFFER_DESC cbDesc;

	pBackBuffer->Release();



	txDesc.SampleDesc.Quality = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    farZ = 100.0f;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_DestroyRenderer(ren);

HRESULT CD3DTest::Create(HWND hwnd)



	{

	if (FAILED(hr))

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&m_pImmediateContext);

}

		SDL_Delay(1000);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				vertex.push_back(vertex_tmp);

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.Height = rect.Height();



	int     vcount = vertexlist.size();

		&m_pDevice,



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		size_t index_offset = 0;  // インデントのオフセット

#include <iostream>

	//vector<WORD> index_t;

			index_offset += fv;





	float    fov = XMConvertToRadians(20.0f);



	for (int i = 0; i < 3; i++)

	Release();

	cbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ConstantLight    pntLight; //点光源

};

	return hr;

{

		&level,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_LEFT:

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				tinyobj::real_t ty =

{



#include <SDL.h>

	SDL_Quit();

		}

	for (size_t s = 0; s < shapes.size(); s++)



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			}

		SDL_Delay(1000);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pImmediateContext);

	int     vcount = vertexlist.size();



	SAFE_RELEASE(m_pLightBuffer);

	SDL_DestroyTexture(tex);

	m_pTextureView = NULL;



	}

	m_Viewport.MinDepth = 0.0f;

	//Clean up our objects and quit





		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_pSampler = NULL;

#include <iostream>

	auto& attrib = reader.GetAttrib();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)

	m_pDepthStencilView = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

 * Lesson 1: Hello World!

		return hr;

	SDL_DestroyWindow(win);





		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.SampleDesc.Count = 1;

};



	m_pIndexBuffer = NULL;

	//ビューポート設定

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pLightBuffer);

	vbDesc.MiscFlags = 0;

	irData.SysMemPitch = 0;

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_LEFT:

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pInputLayout);

struct ConstantLightBuffer {



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_BUFFER_DESC ibDesc;

	float    nearZ = 0.1f;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = vcount;

}

				break;

	delete[] pVList;

	for (int i = 0; i < 3; i++)

	};



		return hr;

			for (size_t v = 0; v < fv; v++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		if (!reader.Error().empty())



	return 0;

		//User requests quit

	//定数バッファ作成

	bool ret = tinyobj::LoadObj(

				// access to vertex

	{

		D3D_DRIVER_TYPE_HARDWARE,

	ConstantLightBuffer clb;

		else if (e.type == SDL_KEYDOWN)

		SDL_Delay(1000);





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	vbDesc.MiscFlags = 0;

	{

void CD3DTest::Render()

	txDesc.Height = rect.Height();





	XMStoreFloat4(&clb.material.specular, materialSpecular);

			}

	HRESULT              hr;

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantLight {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pTexture);

	vrData.SysMemSlicePitch = 0;

	m_pSampler = NULL;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	irData.SysMemSlicePitch = 0;

	ConstantMatrixBuffer cmb;





		SDL_RenderPresent(ren);







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				vertex.push_back(vertex_tmp);



	SDL_FreeSurface(bmp);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		delete[] pIList;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#ifdef _DEBUG

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	txDesc.MipLevels = 1;

#include <SDL.h>

		SDL_Delay(1000);

	auto& shapes = reader.GetShapes();

	m_Viewport.TopLeftX = 0;

	bool ret = tinyobj::LoadObj(

	std::string error;

				break;

		&attrib,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	HRESULT              hr;

		1,

}





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

		// Loop over faces(polygon)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	bool ret = tinyobj::LoadObj(

	m_pMatrixBuffer = NULL;

	std::string imagePath = "hello.bmp";

		&attrib,

	std::string error;

		else if (e.type == SDL_KEYDOWN)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	LoadObj(vertexlist, indexList);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	}*/



	SDL_DestroyRenderer(ren);



	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_FreeSurface(suf);

	//Create Index

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pMatrixBuffer);

				break;

};

		return hr;

	cbDesc.StructureByteStride = 0;





	auto& attrib = reader.GetAttrib();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	UINT strides = sizeof(Vertex);

	m_pIndexBuffer = NULL;

	m_pTexture = NULL;

	m_pSampler = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_DOWN:

};

	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//頂点レイアウト作成

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	}*/

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				break;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4X4 view;

	ConstantMaterial material; //物体の質感

	if (m_pImmediateContext)

	D3D11_SAMPLER_DESC smpDesc;

		{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSwapChain->Present(0, 0);

	m_pSwapChain = NULL;



	SAFE_RELEASE(m_pDepthStencilTexture);

	std::vector<tinyobj::material_t> materials;

				indexlist.push_back(idx.vertex_index);

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pMatrixBuffer = NULL;

{

	if (FAILED(hr))

	std::string inputfile = "test.obj";



	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	XMFLOAT4X4 world;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

		1,

	if (m_pImmediateContext)

	{

				break;





	tinyobj::ObjReader reader;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				break;

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMFLOAT4X4 world;

		//User requests quit

			case SDLK_LEFT:

		&materials,

	XMFLOAT4         eyePos;   //視点座標

	return;

	SAFE_RELEASE(m_pTexture);

			}

	vector<WORD> indexList;

	//ピクセルシェーダー生成

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(suf);



	vbDesc.CPUAccessFlags = 0;



	WORD   icount = indexList.size();

	LoadObj(vertexlist, indexList);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//深度ステンシルバッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	{

	}

	WORD   icount = indexList.size();



		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int j = 0; j < icount; j++)

}

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

		}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	dsDesc.Format = txDesc.Format;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			for (size_t v = 0; v < fv; v++)

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	m_pDepthStencilView = NULL;

	txDesc.ArraySize = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.SampleDesc.Quality = 0;

	tinyobj::attrib_t attrib;

	}

	if (m_pImmediateContext)

int main(int, char**)

	txDesc.MiscFlags = 0;

			case SDLK_UP:

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Height = rect.Height();

#include <iostream>

	vbDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

	return 0;

	m_VertexCount = 0;

		&materials,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	Release();

			for (size_t v = 0; v < fv; v++)

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

CD3DTest::~CD3DTest()

	int     vcount = vertexlist.size();

 * Lesson 1: Hello World!

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#include <SDL.h>

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pDepthStencilView = NULL;

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	SAFE_RELEASE(m_pSwapChain);

	vbDesc.MiscFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.StructureByteStride = 0;

		return hr;



	cbDesc.MiscFlags = 0;

void CD3DTest::Render()

	//テクスチャ読み込み



	SDL_DestroyRenderer(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pSampler = NULL;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

	if (!error.empty())



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pDepthStencilView);

	//頂点シェーダー生成

		&error,

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pRenderTargetView);

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_LEFT,

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

CD3DTest::~CD3DTest()

			//Select surfaces based on key press

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.BufferDesc.Width = rect.Width();

{

			default:

				indexlist.push_back(index);

#define TINYOBJLOADER_IMPLEMENTATION

	vector<Vertex> vertexlist;

	m_pMatrixBuffer = NULL;

				WORD index = idx.vertex_index;

	UINT strides = sizeof(Vertex);

		{

				tinyobj::real_t ty =

	//頂点シェーダー生成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	//深度ステンシルバッファ作成

	Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_Delay(1000);

}

};



		delete[] pVList;

		&error,

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	cbDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#endif

	m_pSampler = NULL;

	SAFE_RELEASE(m_pTexture);

		return hr;

	if (FAILED(hr))



	{

	dsDesc.Texture2D.MipSlice = 0;

int SEGMENT = 36;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    farZ = 100.0f;

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#include <SDL.h>

	vector<Vertex> vertexlist;





	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

struct ConstantMatrixBuffer {

	float    farZ = 100.0f;

				tinyobj::real_t tx =

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderPresent(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		m_pImmediateContext->ClearState();

	m_IndexCount = icount;

	m_VertexCount = 0;

}
	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.CPUAccessFlags = 0;

	delete[] pVList;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (int j = 0; j < icount; j++)

		&level,

	dsDesc.Format = txDesc.Format;

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

};

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLightBuffer clb;

			// Loop over vertices in the face.

	{



			index_offset += num_vertices;

	txDesc.ArraySize = 1;

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.BufferCount = 1;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

		return 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include <iostream>



				break;

	m_pDepthStencilTexture = NULL;

	//頂点バッファ作成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.SampleDesc.Quality = 0;

}



		SDL_RenderClear(ren);

	if (FAILED(hr))

			{

	scDesc.BufferCount = 1;

	//Vertex* pVList = new Vertex[vcount];

		//User presses a key

	//ビューポート設定

	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::GetClientRect(hwnd, &rect);

}

	m_pVertexBuffer = NULL;

	//頂点バッファ作成

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				break;

		//User requests quit

		SDL_RenderClear(ren);



		return hr;

	std::string inputfile = "test.obj";

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.SampleDesc.Quality = 0;

	{

	m_VertexCount = 0;

	//頂点シェーダー生成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		if (e.type == SDL_QUIT)

	auto& shapes = reader.GetShapes();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

}
	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



CD3DTest::CD3DTest()

	XMFLOAT4X4 world;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

		KEY_PRESS_SURFACE_TOTAL

	HRESULT              hr;

			}

	m_pTextureView = NULL;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}*/



	}

				// access to vertex



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

/*

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

using std::cout; using std::endl;

 * Lesson 1: Hello World!

	tinyobj::ObjReaderConfig reader_config;

	m_pPixelShader = NULL;



	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			for (size_t v = 0; v < fv; v++)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_DestroyTexture(tex);

	m_pInputLayout = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyTexture(tex);

	DXGI_SWAP_CHAIN_DESC scDesc;

	};





			exit(1);

	m_pDepthStencilView = NULL;

	vbDesc.CPUAccessFlags = 0;

	{







				// access to vertex

	if (FAILED(hr))

	CRect                rect;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{







	SAFE_RELEASE(m_pSwapChain);



	return 0;

	m_IndexCount = 0;

{

	UINT offsets = 0;

	std::string error;

void CD3DTest::Render()

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

 * Lesson 1: Hello World!

	m_pDevice = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.ArraySize = 1;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	if (FAILED(hr))

	//頂点バッファ作成

	if (FAILED(hr))







		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.SampleDesc.Quality = 0;

	vector<WORD> indexList;

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	};

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&m_pSwapChain,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{

	if (FAILED(hr))

	if (FAILED(hr))



	SAFE_RELEASE(m_pIndexBuffer);

	if (m_pImmediateContext)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.SysMemPitch = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	//頂点レイアウト作成

		SDL_RenderPresent(ren);

			index_offset += fv;

	{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

			case SDLK_DOWN:



		{

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





			default:

	DXGI_SWAP_CHAIN_DESC scDesc;

		&m_pImmediateContext);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pTextureView);



struct ConstantLightBuffer {



			{

		1,

	//ピクセルシェーダー生成

#include "DirectXManager.h"

	SAFE_RELEASE(m_pIndexBuffer);

			index_offset += fv;

	ConstantLight    pntLight; //点光源

		{



	//Vertex* pVList = new Vertex[vcount];





		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	dsDesc.Format = txDesc.Format;

				// access to vertex

	vector<Vertex> vertexlist;

		return hr;

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.OutputWindow = hwnd;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t tx =

			//Select surfaces based on key press

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	for (const auto& shape : shapes)

		delete[] pVList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			// Loop over vertices in the face.

	for (size_t s = 0; s < shapes.size(); s++)

}

		return hr;



{



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_VertexCount = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User presses a key

	scDesc.SampleDesc.Count = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



int SEGMENT = 36;

				WORD index = idx.vertex_index;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	scDesc.Windowed = TRUE;

	{



	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);



	UINT strides = sizeof(Vertex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				// access to vertex

			switch (e.key.keysym.sym)

		{

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Clean up our objects and quit





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);









	Release();

	delete[] pVList;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pVertexBuffer = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return 1;



	SDL_DestroyTexture(tex);

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

CD3DTest::~CD3DTest()

{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyTexture(tex);



	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.ArraySize = 1;

	}

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4X4 world;

				indexlist.push_back(idx.vertex_index);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{



	}



	vector<WORD> indexList;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

		pVList[i] = vertexlist[i];

		flags,

			case SDLK_UP:

	CRect                rect;



	m_Viewport.TopLeftX = 0;

		R"(cube.obj)");



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

		SDL_RenderClear(ren);



			}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&attrib,

	auto& materials = reader.GetMaterials();

		if (!reader.Error().empty())

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		{

		size_t index_offset = 0;



#ifdef _DEBUG

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pTextureView = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    farZ = 100.0f;



		//User presses a key





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

	txDesc.Width = rect.Width();



/*



{

	txDesc.CPUAccessFlags = 0;



struct ConstantLight {

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::vector<tinyobj::material_t> materials;



	D3D11_TEXTURE2D_DESC txDesc;

	LoadObj(vertexlist, indexList);



			index_offset += num_vertices;

};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





		return hr;





	HRESULT              hr;

	return hr;







}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	//ビューポート設定



	}



				vertex.push_back(vertex_tmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	// Loop over shapes

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&shapes,

	SAFE_RELEASE(m_pMatrixBuffer);

	}

			//Select surfaces based on key press

	reader_config.mtl_search_path = "./"; // Path to material files

 * Lesson 1: Hello World!

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pVertexBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

	m_pRenderTargetView = NULL;

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.eyePos, eye);



			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	delete[] pIList;

		&level,

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	int     vcount = vertexlist.size();

		}

}
	for (const auto& shape : shapes)

		KEY_PRESS_SURFACE_TOTAL

	ID3D11Texture2D* pBackBuffer;

	Release();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (m_pImmediateContext)

		D3D11_SDK_VERSION,



				vertex.push_back(vertex_tmp);

	ID3D11Texture2D* pBackBuffer;

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_BUFFER_DESC vbDesc;

	SDL_Event e;



			default:

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			}

	WORD   icount = indexList.size();

			{

	XMStoreFloat4(&clb.eyePos, eye);

};

	/*

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Quit();

	HRESULT              hr;

		return hr;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pDevice);

	}

	cbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

				WORD index = idx.vertex_index;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		&shapes,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				break;

			break;

		return hr;

	ConstantMatrixBuffer cmb;

				vertex.push_back(vertex_tmp);

};

	scDesc.BufferDesc.Width = rect.Width();



		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//頂点レイアウト作成

	float    fov = XMConvertToRadians(20.0f);

	m_Angle += XMConvertToRadians(1.0f);

};



{

	if (m_pImmediateContext)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	delete[] pVList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!error.empty())

	SAFE_RELEASE(m_pDevice);

				break;



	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pImmediateContext);



	txDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

}
	if (FAILED(hr))

		// Loop over faces(polygon)

			}

	vrData.SysMemPitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

int SEGMENT = 36;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		// Loop over faces(polygon)

			case SDLK_RIGHT:

	WORD* pIList = new WORD[icount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	return;

		&m_pImmediateContext);

{

		size_t index_offset = 0;

		pVList[i] = vertexlist[i];

	m_pVertexShader = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_DestroyWindow(win);

	return 0;

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (m_pImmediateContext)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}

	m_IndexCount = icount;

	SAFE_RELEASE(m_pTextureView);

	m_pVertexBuffer = NULL;



			{



	ibDesc.StructureByteStride = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	//インデックスバッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	if (FAILED(hr))

		SDL_Delay(1000);

/*

	WORD   icount = indexList.size();



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

			case SDLK_UP:

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.SampleDesc.Quality = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.SampleDesc.Quality = 0;





	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	vector<WORD> indexList;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

int main(int, char**)





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

};

		return hr;



	{



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			int num_vertices = shape.mesh.num_face_vertices[f];



	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);

		{

	//深度ステンシルバッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	return hr;

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	m_pVertexShader = NULL;



		&attrib,

		// Loop over faces(polygon)

	};

	m_pVertexBuffer = NULL;

		delete[] pIList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	while (SDL_PollEvent(&e) != 0)

		return hr;

	tinyobj::ObjReaderConfig reader_config;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pIndexBuffer = NULL;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





}

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		1,

				// access to vertex

				break;

	std::vector<tinyobj::material_t> materials;

	DXGI_SWAP_CHAIN_DESC scDesc;

		&scDesc,



	// Loop over shapes

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	txDesc.CPUAccessFlags = 0;

		{

		{

	//Key press surfaces constants

using std::cout; using std::endl;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pLightBuffer);

		SDL_Delay(1000);

	txDesc.SampleDesc.Quality = 0;

	{

		SDL_RenderClear(ren);



		}

		m_pImmediateContext->ClearState();



	{

	if (FAILED(hr))

#include "DirectXManager.h"

	cbDesc.CPUAccessFlags = 0;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//深度ステンシルバッファ作成

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.ArraySize = 1;

			}

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMStoreFloat4(&clb.ambient, lightAmbient);

	Release();

	if (FAILED(hr))



	//ピクセルシェーダー生成

			exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	delete[] pVList;

	scDesc.Windowed = TRUE;

HRESULT CD3DTest::Create(HWND hwnd)

		pIList[j] = indexList[j];

	{

struct ConstantMaterial {

	std::string error;

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	//テクスチャ読み込み



		}

		return hr;



	if (FAILED(hr))

}

	m_pTextureView = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

			index_offset += num_vertices;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

				indexlist.push_back(index);

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			case SDLK_DOWN:

		SDL_Delay(1000);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4X4 view;

	tinyobj::attrib_t attrib;

	UINT strides = sizeof(Vertex);

		SDL_RenderClear(ren);

	m_pDepthStencilTexture = NULL;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

	if (FAILED(hr))

		//User requests quit

	m_pSampler = NULL;

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	if (FAILED(hr))

		&materials,



	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		R"(cube.obj)");

	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.CPUAccessFlags = 0;

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}



void CD3DTest::Release()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		//User requests quit

	{





		SDL_Delay(1000);

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	auto& materials = reader.GetMaterials();



	scDesc.Windowed = TRUE;



	//頂点バッファ作成

	SAFE_RELEASE(m_pSampler);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.OutputWindow = hwnd;

		return hr;



	XMFLOAT4         eyePos;   //視点座標

		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Event e;





	SDL_Event e;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	ibDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT







	m_pVertexBuffer = NULL;



	for (int i = 0; i < 3; i++)

#define TINYOBJLOADER_IMPLEMENTATION

}

		&scDesc,

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

#include <iostream>



	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_FreeSurface(suf);



	UINT flags = 0;

	if (FAILED(hr))

	pBackBuffer->Release();

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4 specular;          //反射(r,g,b)

			}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

int SEGMENT = 36;

	D3D11_SUBRESOURCE_DATA vrData;

	SDL_DestroyTexture(tex);

				break;

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pInputLayout);

	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		delete[] pIList;

}





	SDL_DestroyTexture(tex);

			index_offset += num_vertices;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

}

	for (int i = 0; i < vcount; i++)



	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

void CD3DTest::Render()

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))



	m_Viewport.TopLeftY = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantLightBuffer clb;

			{

	UINT strides = sizeof(Vertex);

		{

	{

			//Select surfaces based on key press

		R"(cube.obj)");

	ConstantLightBuffer clb;

 */

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pLightBuffer);





	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

	//ビューポート設定

		&attrib,

	UINT flags = 0;

	return;

	txDesc.MipLevels = 1;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4         eyePos;   //視点座標



			{

}
	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	while (SDL_PollEvent(&e) != 0)

#include <iostream>

	enum KeyPressSurfaces

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderClear(ren);

	m_Angle += XMConvertToRadians(1.0f);

		&materials,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		pVList[i] = vertexlist[i];

		pLevels,

	scDesc.SampleDesc.Quality = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.MiscFlags = 0;

			break;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Width = rect.Width();

CD3DTest::CD3DTest()









			case SDLK_UP:



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		//User requests quit

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

/*



	D3D11_TEXTURE2D_DESC txDesc;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	auto& shapes = reader.GetShapes();



		KEY_PRESS_SURFACE_DEFAULT,



	m_IndexCount = icount;

	XMFLOAT4         eyePos;   //視点座標



	delete[] pVList;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pRenderTargetView = NULL;

	SDL_DestroyRenderer(ren);

		}

	irData.SysMemPitch = 0;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





int SEGMENT = 36;

		return hr;



		size_t index_offset = 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			// Loop over vertices in the face.

			case SDLK_RIGHT:

	m_pTextureView = NULL;

	if (FAILED(hr))





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pSwapChain->Present(0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    nearZ = 0.1f;

	ConstantLight    pntLight; //点光源

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pTexture);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{



				tinyobj::real_t ty =

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			switch (e.key.keysym.sym)

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_UP,

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pInputLayout);

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D11_BUFFER_DESC ibDesc;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

};

	}



				break;

		KEY_PRESS_SURFACE_DEFAULT,

	for (int i = 0; i < vcount; i++)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	m_Angle += XMConvertToRadians(1.0f);

	m_IndexCount = icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.MaxDepth = 1.0f;

	ID3D11Texture2D* pBackBuffer;

	tinyobj::attrib_t attrib;

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Height = rect.Height();

}

	m_pDepthStencilView = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pLightBuffer);





	m_IndexCount = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		delete[] pIList;

	txDesc.Width = rect.Width();

				vertex.push_back(vertex_tmp);





#include <iostream>

	m_Viewport.TopLeftX = 0;



	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&m_pDevice,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	//ピクセルシェーダー生成

	txDesc.ArraySize = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				break;

	SAFE_RELEASE(m_pVertexBuffer);

	float    farZ = 100.0f;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&m_pImmediateContext);

	D3D11_BUFFER_DESC ibDesc;

	vector<Vertex> vertexlist;

#include <iostream>

	return;











		flags,



	txDesc.MipLevels = 1;

	}

			{

	/*

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

	//テクスチャ読み込み





		if (e.type == SDL_QUIT)



	for (int i = 0; i < vcount; i++)

	Release();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	std::string imagePath = "hello.bmp";

			exit(1);

		SDL_Delay(1000);

	ConstantLightBuffer clb;

	//定数バッファ作成

	D3D11_TEXTURE2D_DESC txDesc;







	if (FAILED(hr))

			//Select surfaces based on key press

				WORD index = idx.vertex_index;



	vbDesc.MiscFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	return hr;

				break;

		}

}

	txDesc.ArraySize = 1;

				WORD index = idx.vertex_index;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pVertexBuffer = NULL;

			}

	{

struct ConstantLightBuffer {

};

				// access to vertex

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

void CD3DTest::Release()

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

int SEGMENT = 36;

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	LoadObj(vertexlist, indexList);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			exit(1);

		&materials,

	D3D11_SAMPLER_DESC smpDesc;

	if (!error.empty())

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pDepthStencilTexture = NULL;

	XMFLOAT4X4 world;



		//User presses a key





	m_Viewport.Width = (FLOAT)rect.Width();

struct ConstantLightBuffer {

			// Loop over vertices in the face.

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

};

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	for (int i = 0; i < 3; i++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext = NULL;



}

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	return 0;



	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	//vector<WORD> index_t;

	irData.SysMemPitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDepthStencilView);

		&level,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include "DirectXManager.h"

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pSampler = NULL;





	scDesc.OutputWindow = hwnd;

	{



	}

				// access to vertex



		{



	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_UP:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			// Loop over vertices in the face.

			case SDLK_RIGHT:

	m_VertexCount = 0;

			index_offset += num_vertices;



		SDL_Delay(1000);



	//頂点バッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	auto& attrib = reader.GetAttrib();

using std::cout; using std::endl;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	std::string inputfile = "test.obj";



	SDL_DestroyRenderer(ren);

	if (FAILED(hr))



	SAFE_RELEASE(m_pTextureView);

	D3D_FEATURE_LEVEL level;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

CD3DTest::~CD3DTest()



	D3D_FEATURE_LEVEL level;

		else if (e.type == SDL_KEYDOWN)

		delete[] pVList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	D3D11_BUFFER_DESC cbDesc;

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	//vector<Vertex> vertex_t;



	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION



	m_pRenderTargetView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			// Loop over vertices in the face.

		SDL_RenderPresent(ren);

	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		D3D_DRIVER_TYPE_HARDWARE,

 */

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	WORD* pIList = new WORD[icount];

		delete[] pVList;



	//vector<WORD> index_t;

	m_pTextureView = NULL;



	scDesc.SampleDesc.Quality = 0;

	auto& shapes = reader.GetShapes();



		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	{

	int     vcount = vertexlist.size();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ConstantMatrixBuffer cmb;

	for (int i = 0; i < 3; i++)

		R"(cube.obj)");

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



HRESULT CD3DTest::Create(HWND hwnd)

	m_pMatrixBuffer = NULL;

		D3D11_SDK_VERSION,

	//頂点シェーダー生成

	SAFE_RELEASE(m_pDepthStencilView);

	UINT offsets = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	vrData.SysMemPitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pIndexBuffer = NULL;

	tinyobj::ObjReader reader;



	SDL_Event e;

}

		return hr;

	{

		return hr;





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	/*

	//vector<WORD> index_t;

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_TOTAL

		KEY_PRESS_SURFACE_TOTAL

	scDesc.Windowed = TRUE;

	if (!error.empty())

	{

	for (int i = 0; i < vcount; i++)

	return 0;

				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC vbDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Release();



}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.MiscFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	Release();

	auto& attrib = reader.GetAttrib();

	m_pSampler = NULL;

		SDL_Delay(1000);

			case SDLK_RIGHT:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		else if (e.type == SDL_KEYDOWN)

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC ibDesc;



int main(int, char**)

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_Viewport.TopLeftX = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	scDesc.OutputWindow = hwnd;

	for (int i = 0; i < 3; i++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pDepthStencilView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.Width = rect.Width();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pTexture = NULL;

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

};

		}



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	/*

	HRESULT              hr;

		else if (e.type == SDL_KEYDOWN)

	SDL_Event e;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&materials,



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	enum KeyPressSurfaces

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	UINT offsets = 0;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemPitch = 0;



	if (m_pImmediateContext)



	scDesc.BufferDesc.Width = rect.Width();



	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	::GetClientRect(hwnd, &rect);



	Release();

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pDevice);

	{

using std::cout; using std::endl;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	SDL_Event e;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t ty =



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.CPUAccessFlags = 0;

	m_pRenderTargetView = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));







	vrData.SysMemPitch = 0;

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			{

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	bool ret = tinyobj::LoadObj(



{

	XMFLOAT4X4 projection;

struct ConstantMatrixBuffer {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& attrib = reader.GetAttrib();





	DXGI_SWAP_CHAIN_DESC scDesc;

		R"(cube.obj)");



	{

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (m_pImmediateContext)

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;







	scDesc.SampleDesc.Quality = 0;

			}

/*

			{

	XMFLOAT4         eyePos;   //視点座標



		if (!reader.Error().empty())

		return hr;

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			index_offset += fv;


