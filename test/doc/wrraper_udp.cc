{

				break;

	}

			index_offset += fv;

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				// access to vertex

	{

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_BUFFER_DESC ibDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

{

			}

				WORD index = idx.vertex_index;

			case SDLK_LEFT:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pTextureView = NULL;

	m_pImmediateContext = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	DXGI_SWAP_CHAIN_DESC scDesc;

				// access to vertex

#define TINYOBJLOADER_IMPLEMENTATION

		pLevels,

		}

				WORD index = idx.vertex_index;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	if (m_pImmediateContext)

	//Key press surfaces constants

				break;

			case SDLK_LEFT:

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    farZ = 100.0f;





		KEY_PRESS_SURFACE_UP,

			//Select surfaces based on key press

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	std::vector<tinyobj::shape_t> shapes;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

	SDL_DestroyTexture(tex);

}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		cout << "SDL_INIT_ERROR" << endl;



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string imagePath = "hello.bmp";

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pSampler);





	m_VertexCount = vcount;

				indexlist.push_back(index);



		return hr;

				break;

};

	m_pVertexBuffer = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Create Index

		// Loop over faces(polygon)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4X4 projection;

	CRect                rect;

		&materials,

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t ty =

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vector<Vertex> vertexlist;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	cbDesc.CPUAccessFlags = 0;

#include <SDL.h>

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.SampleDesc.Count = 1;

	ConstantMatrixBuffer cmb;



				vertex.push_back(vertex_tmp);

	m_pIndexBuffer = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.ambient, lightAmbient);





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.SampleDesc.Quality = 0;

		exit(1);

	cbDesc.CPUAccessFlags = 0;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

}

	m_Viewport.Height = (FLOAT)rect.Height();

	return hr;

			break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	UINT offsets = 0;

	SDL_DestroyTexture(tex);

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexBuffer);

			for (size_t v = 0; v < num_vertices; v++)



	SAFE_RELEASE(m_pVertexBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	bool ret = tinyobj::LoadObj(

	m_Viewport.TopLeftY = 0;

	if (!reader.Warning().empty())

	vector<Vertex> vertexlist;

	}

	{

				indexlist.push_back(idx.vertex_index);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			//Select surfaces based on key press

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vrData.SysMemPitch = 0;

	}

	cbDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			{

	cbDesc.StructureByteStride = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	D3D11_BUFFER_DESC cbDesc;

		flags,

	m_Angle += XMConvertToRadians(1.0f);

	m_pMatrixBuffer = NULL;

	}

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4 ambient;           //環境(r,g,b)



int main(int, char**)

				WORD index = idx.vertex_index;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;

	scDesc.BufferDesc.Height = rect.Height();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	CRect                rect;

		}

	float    farZ = 100.0f;



	bool ret = tinyobj::LoadObj(

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_UP,

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.eyePos, eye);





	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		//User requests quit

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);



	txDesc.ArraySize = 1;

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	Release();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//テクスチャ読み込み

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_BUFFER_DESC cbDesc;

{

	ZeroMemory(&txDesc, sizeof(txDesc));

struct ConstantLight {



	cbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;



	vbDesc.MiscFlags = 0;



	SDL_Event e;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantLight    pntLight; //点光源

	m_pImmediateContext = NULL;

 * Lesson 1: Hello World!

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.Windowed = TRUE;

	{

	{

	if (FAILED(hr))



	XMFLOAT4 pos;               //座標(x,y,z)

	float    farZ = 100.0f;

	//テクスチャ読み込み



			case SDLK_DOWN:

		return hr;

	SDL_DestroyWindow(win);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ID3D11Texture2D* pBackBuffer;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	irData.SysMemSlicePitch = 0;

using std::cout; using std::endl;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pLightBuffer);



	}

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pSampler);

	txDesc.MiscFlags = 0;



	delete[] pVList;

{



	irData.SysMemSlicePitch = 0;

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilView);



	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pIndexBuffer);



		{

{



		if (!reader.Error().empty())

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		&shapes,



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int j = 0; j < icount; j++)

			default:

	m_pDepthStencilTexture = NULL;

			index_offset += fv;

	if (FAILED(hr))

			case SDLK_LEFT:

	m_Viewport.Width = (FLOAT)rect.Width();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&level,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

		return hr;

			{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		return hr;



		KEY_PRESS_SURFACE_DEFAULT,



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}

		{

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			}



	if (!reader.ParseFromFile(inputfile, reader_config))



			switch (e.key.keysym.sym)

		&scDesc,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	delete[] pIList;

	{

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))





}



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		//User presses a key

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>

struct ConstantMatrixBuffer {

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

};

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Quit();

	scDesc.BufferDesc.Height = rect.Height();

	m_pVertexShader = NULL;

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

	vector<WORD> indexList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	/*

}

	//ピクセルシェーダー生成



		KEY_PRESS_SURFACE_UP,



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			exit(1);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pInputLayout);



 */

	}

		}

	m_pImmediateContext = NULL;

	irData.SysMemPitch = 0;

	{

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pTextureView);

	WORD   icount = indexList.size();



	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilView);

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <iostream>



	for (int i = 0; i < 3; i++)

	}

		size_t index_offset = 0;  // インデントのオフセット



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}



	if (FAILED(hr))

	//定数バッファ作成



	HRESULT              hr;

	for (size_t s = 0; s < shapes.size(); s++)

			case SDLK_LEFT:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC vbDesc;

		size_t index_offset = 0;  // インデントのオフセット

	m_pIndexBuffer = NULL;

#include <iostream>

	{

			switch (e.key.keysym.sym)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_SUBRESOURCE_DATA irData;

		{



	}

	{



		SDL_RenderCopy(ren, tex, NULL, NULL);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			//Select surfaces based on key press



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&shapes,



	//テクスチャ読み込み

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_TEXTURE2D_DESC txDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	LoadObj(vertexlist, indexList);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	m_pTexture = NULL;



	//vector<Vertex> vertex_t;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			break;

#endif

	SDL_Quit();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = 0;

	m_Angle += XMConvertToRadians(1.0f);

			default:

	m_Viewport.MaxDepth = 1.0f;

		delete[] pVList;

		return hr;



				break;

{

{



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	HRESULT              hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Width = rect.Width();

int main(int, char**)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		R"(cube.obj)");

	m_pRenderTargetView = NULL;



	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Height = rect.Height();

};

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	LoadObj(vertexlist, indexList);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	};





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pDepthStencilTexture = NULL;

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::string inputfile = "test.obj";



			}

	XMFLOAT4X4 world;

	m_pVertexShader = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		exit(1);



#include <SDL.h>

				tinyobj::real_t ty =

		{

	std::string error;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		//User requests quit

				tinyobj::real_t ty =



	vrData.SysMemPitch = 0;

	SDL_Quit();

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



struct ConstantMatrixBuffer {

	m_pSampler = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.StructureByteStride = 0;

}

{

	SDL_FreeSurface(bmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pInputLayout);

	}

		&shapes,

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderClear(ren);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	auto& attrib = reader.GetAttrib();

	auto& shapes = reader.GetShapes();

	Release();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	tinyobj::ObjReader reader;

{

CD3DTest::~CD3DTest()

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.CPUAccessFlags = 0;



	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_LEFT,

		&level,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			default:



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	return 0;

	// Loop over shapes



};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pLightBuffer);

	m_pVertexBuffer = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <SDL.h>

	XMFLOAT4 specular;          //反射(r,g,b)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pSampler);

	m_Angle += XMConvertToRadians(1.0f);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pMatrixBuffer);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#define TINYOBJLOADER_IMPLEMENTATION

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;









		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ibDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

	cbDesc.StructureByteStride = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	// Loop over shapes

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.SysMemPitch = 0;

	m_pSwapChain = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pVertexShader = NULL;

	return 0;

	SAFE_RELEASE(m_pIndexBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <SDL.h>

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<WORD> indexList;

	txDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int i = 0; i < vcount; i++)

	vrData.pSysMem = &pVList[0];

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_DestroyTexture(tex);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

};

}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_DestroyTexture(tex);

	m_pMatrixBuffer = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.StructureByteStride = 0;

	while (SDL_PollEvent(&e) != 0)

	//vector<Vertex> vertex_t;

	SDL_DestroyTexture(tex);



	for (int i = 0; i < 3; i++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.SampleDesc.Quality = 0;

		delete[] pIList;

	::GetClientRect(hwnd, &rect);

	WORD   icount = indexList.size();

	ConstantMaterial material; //物体の質感

	};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//Vertex* pVList = new Vertex[vcount];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext = NULL;



	}

	}*/

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

	vector<WORD> indexList;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&m_pDevice,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			{

			index_offset += num_vertices;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

int main(int, char**)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

}

	std::vector<tinyobj::material_t> materials;

	if (!reader.ParseFromFile(inputfile, reader_config))

			case SDLK_RIGHT:

	m_Viewport.MaxDepth = 1.0f;

#include <SDL.h>

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_FreeSurface(suf);

struct ConstantMatrixBuffer {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	SDL_FreeSurface(bmp);

	int     vcount = vertexlist.size();



	UINT strides = sizeof(Vertex);



	if (SDL_Init(SDL_INIT_VIDEO != 0))





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4         eyePos;   //視点座標

	//ビューポート設定

	HRESULT              hr;

	//ピクセルシェーダー生成





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#include "DirectXManager.h"

	float    farZ = 100.0f;

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		//User requests quit

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	std::vector<tinyobj::material_t> materials;



	while (SDL_PollEvent(&e) != 0)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (int i = 0; i < 3; i++)

				indexlist.push_back(index);

	scDesc.SampleDesc.Quality = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

	{

	}

	}

		1,

	//頂点シェーダー生成

	delete[] pIList;





			}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				WORD index = idx.vertex_index;

	txDesc.MiscFlags = 0;

			}



	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b)



			case SDLK_UP:

			case SDLK_RIGHT:

		&attrib,

		flags,

 * Lesson 1: Hello World!

		}

	int     vcount = vertexlist.size();

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		//User requests quit

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#ifdef _DEBUG

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pRenderTargetView = NULL;



{

	m_pIndexBuffer = NULL;



	scDesc.Windowed = TRUE;

	irData.SysMemPitch = 0;

		flags,

			index_offset += num_vertices;

		delete[] pVList;

	}

	XMFLOAT4X4 projection;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.MiscFlags = 0;



	if (FAILED(hr))



	vbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_TOTAL



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

		SDL_RenderClear(ren);





	ibDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	WORD   icount = indexList.size();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	UINT offsets = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	ConstantMaterial material; //物体の質感

	ZeroMemory(&txDesc, sizeof(txDesc));



		&level,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{

		return hr;



	std::vector<tinyobj::shape_t> shapes;

			index_offset += num_vertices;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		if (e.type == SDL_QUIT)

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;



	float    fov = XMConvertToRadians(20.0f);





	vbDesc.CPUAccessFlags = 0;

	{

	irData.pSysMem = &pIList[0];

		SDL_RenderPresent(ren);

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	Release();

	return hr;

	{

	ID3D11Texture2D* pBackBuffer;

				break;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4X4 view;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

};

		return hr;

	}



	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (int j = 0; j < icount; j++)

		}

	m_pLightBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		size_t index_offset = 0;  // インデントのオフセット



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pLightBuffer = NULL;



	if (m_pImmediateContext)

	}

};

		R"(cube.obj)");

	XMFLOAT4 ambient;           //環境(r,g,b)

	Release();

		&materials,



	D3D11_SUBRESOURCE_DATA vrData;



	}

}
	SAFE_RELEASE(m_pDepthStencilView);

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	/*

	tinyobj::ObjReaderConfig reader_config;



	m_Angle += XMConvertToRadians(1.0f);

	for (int i = 0; i < vcount; i++)

		return hr;

	tinyobj::ObjReaderConfig reader_config;



	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

			case SDLK_RIGHT:

{

		&m_pSwapChain,

	tinyobj::attrib_t attrib;



using std::cout; using std::endl;

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pIndexBuffer);

	scDesc.OutputWindow = hwnd;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	delete[] pVList;

	SDL_DestroyWindow(win);

}
	//頂点レイアウト作成

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_FreeSurface(bmp);

#ifdef _DEBUG

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

CD3DTest::~CD3DTest()

		return hr;

	vector<Vertex> vertexlist;

		{

}

	std::string imagePath = "hello.bmp";



	for (int i = 0; i < vcount; i++)

	}*/

				indexlist.push_back(index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Width = rect.Width();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

 * Lesson 1: Hello World!





	for (int i = 0; i < vcount; i++)

	}

	cbDesc.StructureByteStride = 0;

	}

	XMFLOAT4X4 projection;

		&attrib,

 */



	m_pSwapChain = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Viewport.MaxDepth = 1.0f;

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//vector<Vertex> vertex_t;

	::GetClientRect(hwnd, &rect);

		if (!ret)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}

	m_Viewport.TopLeftX = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//インデックスバッファ作成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

			case SDLK_LEFT:

 */

	dsDesc.Format = txDesc.Format;

	HRESULT              hr;

	auto& materials = reader.GetMaterials();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))



	tinyobj::attrib_t attrib;

{

	{

	cbDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (!reader.Warning().empty())

	}

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&shapes,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	};



	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))





			// Loop over vertices in the face.



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		D3D11_SDK_VERSION,

	//Key press surfaces constants

			{





	std::string inputfile = "test.obj";



	}

CD3DTest::~CD3DTest()

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pLightBuffer);





		flags,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.SysMemPitch = 0;



		D3D11_SDK_VERSION,

	std::string imagePath = "hello.bmp";



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		//User requests quit

	if (FAILED(hr))

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;

		}

		return 1;

	txDesc.MipLevels = 1;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			case SDLK_UP:

		}

	m_pSampler = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		size_t index_offset = 0;  // インデントのオフセット



	SDL_DestroyWindow(win);

	txDesc.Width = rect.Width();

	for (int i = 0; i < 3; i++)



	for (int j = 0; j < icount; j++)

				indexlist.push_back(index);

	auto& shapes = reader.GetShapes();

	Release();



	m_pImmediateContext = NULL;

	UINT flags = 0;



	ibDesc.StructureByteStride = 0;



	//Clean up our objects and quit

			index_offset += num_vertices;

	auto& attrib = reader.GetAttrib();

	cbDesc.CPUAccessFlags = 0;

			}

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pInputLayout);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}



	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		pIList[j] = indexList[j];

	scDesc.OutputWindow = hwnd;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))



	};



	int     vcount = vertexlist.size();

	cbDesc.MiscFlags = 0;

		return 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_BUFFER_DESC cbDesc;

		}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pSampler);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		pLevels,

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

void CD3DTest::Release()



	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{



	cbDesc.CPUAccessFlags = 0;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&attrib,



		&m_pDevice,





};



}

struct ConstantLightBuffer {

	scDesc.BufferDesc.Width = rect.Width();





	D3D11_TEXTURE2D_DESC txDesc;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

		pVList[i] = vertexlist[i];

	txDesc.SampleDesc.Count = 1;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;



		D3D11_SDK_VERSION,

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

		&shapes,

			index_offset += num_vertices;

	ID3D11Texture2D* pBackBuffer;

			exit(1);

		pVList[i] = vertexlist[i];

	for (size_t s = 0; s < shapes.size(); s++)



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	scDesc.BufferCount = 1;

			{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

#include <SDL.h>

	if (FAILED(hr))



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	}

		1,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t tx =

	Release();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	};

{

	UINT strides = sizeof(Vertex);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.pSysMem = &pIList[0];

		&scDesc,

	m_pSampler = NULL;

	if (FAILED(hr))





	vbDesc.StructureByteStride = 0;

int SEGMENT = 36;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 projection;

	for (size_t s = 0; s < shapes.size(); s++)



#include <SDL.h>

		}

}

			}



			//Select surfaces based on key press

	}



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferCount = 1;

using std::cout; using std::endl;



	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

}



CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pSampler);

	//テクスチャ読み込み

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				break;

	m_pPixelShader = NULL;

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	LoadObj(vertexlist, indexList);



	for (int j = 0; j < icount; j++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	WORD* pIList = new WORD[icount];

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

	ConstantLight    pntLight; //点光源





using std::cout; using std::endl;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pSampler = NULL;

	m_Viewport.MinDepth = 0.0f;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

	XMFLOAT4X4 view;

	};

{









{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_TOTAL



			default:

	SAFE_RELEASE(m_pLightBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

 */

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	}

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();



	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pMatrixBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pDevice = NULL;

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

		{

	{



	return;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			case SDLK_DOWN:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))



	D3D_FEATURE_LEVEL level;



#endif

	{

	SDL_Quit();

	m_pDepthStencilView = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

struct ConstantMaterial {

	return 0;

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pVertexShader);

	SDL_Quit();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);







	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	m_VertexCount = vcount;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			index_offset += num_vertices;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//ピクセルシェーダー生成

	return;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	WORD   icount = indexList.size();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexShader);

			{

};



	D3D_FEATURE_LEVEL level;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;



	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_LEFT,



		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))



	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (m_pImmediateContext)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				break;

		SDL_Delay(1000);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	scDesc.Windowed = TRUE;

	//インデックスバッファ作成

	m_Viewport.Width = (FLOAT)rect.Width();

		&error,

	m_pSwapChain = NULL;

		//User requests quit

struct ConstantMaterial {

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Render()

	m_Viewport.TopLeftX = 0;

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pIndexBuffer);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

		SDL_RenderPresent(ren);

		SDL_Delay(1000);

	{





	}

	}





	if (FAILED(hr))

		}

		delete[] pIList;

	m_pTextureView = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantLightBuffer {



	D3D_FEATURE_LEVEL level;

	m_pDevice = NULL;

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_DestroyTexture(tex);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{



	m_pImmediateContext = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			index_offset += num_vertices;

			default:

		&m_pDevice,

	m_VertexCount = 0;

	cbDesc.CPUAccessFlags = 0;

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

		SDL_Delay(1000);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (int i = 0; i < vcount; i++)

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4X4 view;

	vbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 */



		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		}

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_FreeSurface(bmp);

	return 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		}

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pRenderTargetView);

	irData.pSysMem = &pIList[0];

				indexlist.push_back(index);

	LoadObj(vertexlist, indexList);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	delete[] pVList;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Quit();

	txDesc.SampleDesc.Count = 1;

	m_Viewport.MinDepth = 0.0f;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				break;

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;



	auto& shapes = reader.GetShapes();

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Quality = 0;

		return hr;

	vector<Vertex> vertexlist;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	m_pDepthStencilTexture = NULL;

	m_pSwapChain = NULL;

	SDL_DestroyWindow(win);

	ID3D11Texture2D* pBackBuffer;

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	SDL_Quit();

		&scDesc,

	ConstantMaterial material; //物体の質感

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	tinyobj::ObjReader reader;

	return 0;

	//Clean up our objects and quit

	//Vertex* pVList = new Vertex[vcount];



	if (m_pImmediateContext)



	}



		exit(1);

	m_pPixelShader = NULL;

	float    nearZ = 0.1f;









	SDL_Quit();



		{

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	enum KeyPressSurfaces

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

CD3DTest::~CD3DTest()

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			case SDLK_RIGHT:

};





	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Key press surfaces constants

		size_t index_offset = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	WORD* pIList = new WORD[icount];

	return 0;

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			index_offset += num_vertices;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4X4 projection;

		{

int main(int, char**)

	//Clean up our objects and quit



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&materials,

	tinyobj::attrib_t attrib;

			index_offset += num_vertices;

	m_pLightBuffer = NULL;

{

	}

		return hr;

	//First we need to start up SDL, and make sure it went ok





		&scDesc,

		KEY_PRESS_SURFACE_RIGHT,

	std::string inputfile = "test.obj";

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.TopLeftY = 0;

	m_Viewport.MaxDepth = 1.0f;

		return 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Height = rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点シェーダー生成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}*/

}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







#ifdef _DEBUG

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4 pos;               //座標(x,y,z)

	//テクスチャ読み込み

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		KEY_PRESS_SURFACE_UP,



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//頂点バッファ作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_IndexCount = 0;

	cbDesc.MiscFlags = 0;



	txDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

	txDesc.SampleDesc.Quality = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderPresent(ren);

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				vertex.push_back(vertex_tmp);

	// Loop over shapes



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.CPUAccessFlags = 0;

	UINT flags = 0;



	for (int i = 0; i < vcount; i++)

	XMFLOAT4 specular;          //反射(r,g,b)

	{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.MinDepth = 0.0f;

				// access to vertex



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		m_pImmediateContext->ClearState();

		size_t index_offset = 0;  // インデントのオフセット

	//深度ステンシルバッファ作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み

	CRect                rect;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pSampler = NULL;







	for (int i = 0; i < 3; i++)

{

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	ConstantLightBuffer clb;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		else if (e.type == SDL_KEYDOWN)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

	m_pPixelShader = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	auto& materials = reader.GetMaterials();

	{

	ibDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

};

		return hr;



	enum KeyPressSurfaces

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexBuffer = NULL;

		&materials,

	m_pDepthStencilTexture = NULL;

	txDesc.SampleDesc.Quality = 0;

		return hr;

		SDL_RenderPresent(ren);

	SDL_DestroyWindow(win);

				break;

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return hr;

	m_Viewport.TopLeftX = 0;

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	scDesc.SampleDesc.Count = 1;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	for (int i = 0; i < 3; i++)

	txDesc.MipLevels = 1;

	m_Viewport.MaxDepth = 1.0f;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



				break;

{

	if (!error.empty())



	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&m_pImmediateContext);

{

	vector<Vertex> vertexlist;

	m_IndexCount = icount;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pVertexShader = NULL;

	ConstantLight    pntLight; //点光源

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

		R"(cube.obj)");

				// access to vertex

		KEY_PRESS_SURFACE_DEFAULT,



struct ConstantLightBuffer {

	return hr;

	//インデックスバッファ作成

	SDL_FreeSurface(suf);



		&level,



	SDL_DestroyWindow(win);

using std::cout; using std::endl;

}

	if (FAILED(hr))

			{

	D3D11_TEXTURE2D_DESC txDesc;





	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return hr;

	m_pInputLayout = NULL;

		delete[] pVList;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pDepthStencilTexture);

	int     vcount = vertexlist.size();

	auto& attrib = reader.GetAttrib();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			case SDLK_DOWN:

				vertex.push_back(vertex_tmp);

	m_Viewport.MaxDepth = 1.0f;

	reader_config.mtl_search_path = "./"; // Path to material files



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

		&shapes,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	auto& materials = reader.GetMaterials();

	txDesc.Height = rect.Height();

				tinyobj::real_t ty =

		&materials,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.CPUAccessFlags = 0;

};



			case SDLK_UP:







	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

		NULL,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		}

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ConstantMatrixBuffer cmb;

	enum KeyPressSurfaces

	delete[] pIList;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SAFE_RELEASE(m_pRenderTargetView);

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantMaterial {

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



}
		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.MiscFlags = 0;

	//頂点バッファ作成

	SAFE_RELEASE(m_pTextureView);

	scDesc.BufferCount = 1;





int SEGMENT = 36;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		// Loop over faces(polygon)

	}*/

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	vrData.pSysMem = &pVList[0];

	for (int i = 0; i < 3; i++)

	scDesc.BufferDesc.Height = rect.Height();

	CRect                rect;







	for (int i = 0; i < vcount; i++)

				tinyobj::real_t ty =

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ibDesc.CPUAccessFlags = 0;

	}

using std::cout; using std::endl;



	//Key press surfaces constants

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Quit();

		//User requests quit

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pDevice,

	}*/



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	vrData.pSysMem = &pVList[0];

	m_pInputLayout = NULL;

	m_Angle += XMConvertToRadians(1.0f);

		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.SampleDesc.Count = 1;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	irData.pSysMem = &pIList[0];

	return 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{





		flags,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

HRESULT CD3DTest::Create(HWND hwnd)

			for (size_t v = 0; v < fv; v++)

	std::vector<tinyobj::material_t> materials;

			break;

		exit(1);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	bool ret = tinyobj::LoadObj(

	//インデックスバッファ作成

		//User presses a key

			{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



}

	//Clean up our objects and quit

		SDL_RenderPresent(ren);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



			// Loop over vertices in the face.

	SAFE_RELEASE(m_pPixelShader);

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		//User presses a key

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

		exit(1);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}

		KEY_PRESS_SURFACE_UP,

		size_t index_offset = 0;

	//頂点シェーダー生成

	D3D11_SUBRESOURCE_DATA irData;

		{

	ConstantMaterial material; //物体の質感





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

		D3D11_SDK_VERSION,

		cout << "SDL_INIT_ERROR" << endl;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

		SDL_RenderClear(ren);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pLightBuffer = NULL;

	}

	scDesc.BufferCount = 1;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{



	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_DOWN,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vbDesc.MiscFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//定数バッファ作成

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.MiscFlags = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

#include <SDL.h>



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	//Vertex* pVList = new Vertex[vcount];

				break;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		delete[] pVList;

		KEY_PRESS_SURFACE_UP,

		&error,

	hr = D3D11CreateDeviceAndSwapChain(NULL,





	m_pPixelShader = NULL;

{



	float    fov = XMConvertToRadians(20.0f);

	}*/

			}

	std::string inputfile = "test.obj";





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				vertex.push_back(vertex_tmp);

	txDesc.Height = rect.Height();



	scDesc.OutputWindow = hwnd;

		delete[] pIList;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	scDesc.BufferCount = 1;

	UINT flags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	ibDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	vector<WORD> indexList;





	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

		KEY_PRESS_SURFACE_DOWN,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDevice);

		size_t index_offset = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//頂点バッファ作成

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





			for (size_t v = 0; v < fv; v++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

	dsDesc.Format = txDesc.Format;



	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		if (!ret)

			for (size_t v = 0; v < fv; v++)

 * Lesson 1: Hello World!

	m_pVertexShader = NULL;

	std::string error;



#include <iostream>

	delete[] pIList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	tinyobj::attrib_t attrib;

	}

	}

	ConstantMaterial material; //物体の質感



				break;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_UP,



	WORD* pIList = new WORD[icount];

			case SDLK_DOWN:

	cbDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;



	SDL_DestroyTexture(tex);

#endif

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pPixelShader);

	//Create Index

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pDevice);



	//Key press surfaces constants

	for (size_t s = 0; s < shapes.size(); s++)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//ピクセルシェーダー生成

		// Loop over faces(polygon)

#ifdef _DEBUG



	vbDesc.StructureByteStride = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			index_offset += num_vertices;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&scDesc,

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	auto& attrib = reader.GetAttrib();

	tinyobj::ObjReaderConfig reader_config;

			index_offset += fv;

	//ピクセルシェーダー生成

	m_pImmediateContext = NULL;

	irData.SysMemSlicePitch = 0;

	{

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	HRESULT              hr;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	if (!reader.Warning().empty())

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pSampler);

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyTexture(tex);

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pIndexBuffer = NULL;

		NULL,

	/*

	m_pSwapChain = NULL;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	std::string inputfile = "test.obj";



	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		NULL,

	m_pIndexBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	//頂点シェーダー生成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ConstantLight    pntLight; //点光源

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_UP,



	std::vector<tinyobj::shape_t> shapes;

struct ConstantLight {

	m_Viewport.TopLeftX = 0;

};



	}



		1,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&shapes,

	XMStoreFloat4(&clb.eyePos, eye);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;





	//頂点レイアウト作成



	if (FAILED(hr))

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	for (int j = 0; j < icount; j++)

		&shapes,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

{

	auto& attrib = reader.GetAttrib();

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//定数バッファ作成



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



		return hr;



			// Loop over vertices in the face.



	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



int SEGMENT = 36;

		pVList[i] = vertexlist[i];

		{

	}

	m_pInputLayout = NULL;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		pIList[j] = indexList[j];

		&materials,

	{

	{

	{



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



struct ConstantMatrixBuffer {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		flags,

		return hr;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//vector<WORD> index_t;

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_Viewport.MinDepth = 0.0f;

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

/*



	}

		return hr;



		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_RenderPresent(ren);

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.eyePos, eye);

	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		size_t index_offset = 0;  // インデントのオフセット

			{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 ambient;           //環境(r,g,b)

}

	{

		return hr;

}





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (int j = 0; j < icount; j++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pMatrixBuffer = NULL;



	m_pRenderTargetView = NULL;

	m_Viewport.TopLeftX = 0;

		}

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pVertexBuffer);

	float    farZ = 100.0f;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	std::string error;

		pLevels,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			{

struct ConstantMaterial {

		return 1;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <SDL.h>

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SUBRESOURCE_DATA irData;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		if (!ret)

	//Clean up our objects and quit

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		D3D11_SDK_VERSION,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.Height = (FLOAT)rect.Height();



	SDL_DestroyWindow(win);

	return;





	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;



	{

			{

#include <SDL.h>

	m_pSwapChain = NULL;

	{

	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))



	if (FAILED(hr))

	{

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	delete[] pIList;

		return hr;

	if (FAILED(hr))

	UINT offsets = 0;

	SDL_Quit();

	}

}

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

	delete[] pVList;

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();



	float    nearZ = 0.1f;

{

	delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&error,



		KEY_PRESS_SURFACE_DOWN,

int SEGMENT = 36;

	ConstantMatrixBuffer cmb;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}

	// Loop over shapes

	D3D11_SUBRESOURCE_DATA vrData;

	//ピクセルシェーダー生成





	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		cout << "SDL_INIT_ERROR" << endl;

				vertex.push_back(vertex_tmp);

				break;

	//Create Index

			// Loop over vertices in the face.

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pLightBuffer);



	m_Viewport.MinDepth = 0.0f;





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_LEFT:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	}

	irData.SysMemSlicePitch = 0;

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	WORD* pIList = new WORD[icount];

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_TOTAL

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.StructureByteStride = 0;

	ConstantLightBuffer clb;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pPixelShader);

	pBackBuffer->Release();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

	m_IndexCount = 0;

	m_VertexCount = 0;

	D3D11_BUFFER_DESC cbDesc;

	tinyobj::ObjReader reader;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		if (e.type == SDL_QUIT)

int SEGMENT = 36;

	}*/

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_DOWN:

		// Loop over faces(polygon)

	ID3D11Texture2D* pBackBuffer;

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





			}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	return 0;

/*

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pDevice);

	}

	for (int j = 0; j < icount; j++)

	txDesc.ArraySize = 1;



struct ConstantLight {

		return hr;

	m_Viewport.TopLeftY = 0;

	ibDesc.MiscFlags = 0;

	txDesc.MipLevels = 1;

			case SDLK_RIGHT:

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

	SDL_Quit();



	}

	bool ret = tinyobj::LoadObj(



	{

		delete[] pIList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDepthStencilView = NULL;



	XMFLOAT4 specular;          //反射(r,g,b)

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#include "DirectXManager.h"



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

CD3DTest::CD3DTest()

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//定数バッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	UINT offsets = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//Key press surfaces constants

	txDesc.SampleDesc.Quality = 0;

			// Loop over vertices in the face.

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//Key press surfaces constants

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

};

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		m_pImmediateContext->ClearState();

	ConstantMaterial material; //物体の質感



	m_VertexCount = vcount;

	auto& attrib = reader.GetAttrib();



	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pTextureView);

	scDesc.BufferCount = 1;

	enum KeyPressSurfaces

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.Height = rect.Height();

		return hr;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	WORD   icount = indexList.size();

		return hr;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

		KEY_PRESS_SURFACE_RIGHT,

int SEGMENT = 36;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

	SAFE_RELEASE(m_pLightBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_VertexCount = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	vrData.pSysMem = &pVList[0];



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//テクスチャ読み込み

				break;

	dsDesc.Format = txDesc.Format;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				vertex.push_back(vertex_tmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4X4 world;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



}

	SDL_DestroyTexture(tex);

				break;

	D3D11_BUFFER_DESC cbDesc;

		&m_pDevice,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	reader_config.mtl_search_path = "./"; // Path to material files

		// Loop over faces(polygon)

		size_t index_offset = 0;

		{

		SDL_RenderClear(ren);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.MipLevels = 1;

	ibDesc.MiscFlags = 0;

using std::cout; using std::endl;

	ConstantLight    pntLight; //点光源

	m_VertexCount = 0;

		SDL_Delay(1000);

		}

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4 ambient;           //環境(r,g,b)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

	SDL_DestroyRenderer(ren);

	txDesc.Width = rect.Width();

}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	vbDesc.CPUAccessFlags = 0;

		return hr;

}


	txDesc.SampleDesc.Count = 1;



	while (SDL_PollEvent(&e) != 0)

	ibDesc.MiscFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	::GetClientRect(hwnd, &rect);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pVertexBuffer = NULL;





	//頂点シェーダー生成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		cout << "SDL_INIT_ERROR" << endl;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pVertexBuffer);

	m_Viewport.TopLeftY = 0;

{

	txDesc.ArraySize = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferDesc.Width = rect.Width();

	}

	SDL_DestroyRenderer(ren);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.MiscFlags = 0;

	if (FAILED(hr))



		}

	delete[] pVList;

CD3DTest::~CD3DTest()



	SDL_DestroyRenderer(ren);

	delete[] pVList;



	/*





			{

struct ConstantMatrixBuffer {



	auto& shapes = reader.GetShapes();

	std::string inputfile = "test.obj";

	}

			//Select surfaces based on key press



	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

				break;



		flags,

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pDepthStencilTexture = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	XMFLOAT4X4 projection;

	scDesc.OutputWindow = hwnd;

		return hr;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		{

	ibDesc.StructureByteStride = 0;

		{

		}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			default:

struct ConstantMatrixBuffer {

	tinyobj::ObjReaderConfig reader_config;

	//インデックスバッファ作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&m_pDevice,

int main(int, char**)

	XMFLOAT4         ambient;  //環境光(r,g,b)



	//First we need to start up SDL, and make sure it went ok

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	m_pSwapChain = NULL;

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.TopLeftY = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);





struct ConstantMaterial {

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}



	dsDesc.Texture2D.MipSlice = 0;

	// Loop over shapes



	SDL_DestroyTexture(tex);

	if (FAILED(hr))

			{

	SDL_Event e;

}

CD3DTest::~CD3DTest()

	}

	SDL_DestroyTexture(tex);

#include "DirectXManager.h"

	XMFLOAT4         ambient;  //環境光(r,g,b)

}









	SDL_DestroyTexture(tex);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.TopLeftY = 0;

		KEY_PRESS_SURFACE_UP,

	{

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			for (size_t v = 0; v < num_vertices; v++)

		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilView);

		}

				break;



	}

	m_IndexCount = 0;

		&m_pSwapChain,

	ID3D11Texture2D* pBackBuffer;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

	for (int i = 0; i < vcount; i++)

CD3DTest::~CD3DTest()

	vector<Vertex> vertexlist;

	{



	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pInputLayout);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



}
	cbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;

	};

	D3D11_SUBRESOURCE_DATA vrData;

			switch (e.key.keysym.sym)



	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t ty =

	m_IndexCount = icount;

	if (m_pImmediateContext)

	//頂点バッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderPresent(ren);

	{



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vector<WORD> indexList;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return;

{

	for (int i = 0; i < vcount; i++)



		KEY_PRESS_SURFACE_DOWN,

	{

struct ConstantLight {



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

#include <SDL.h>

	}



	ibDesc.CPUAccessFlags = 0;



	}

	SAFE_RELEASE(m_pTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (!reader.Warning().empty())

#include <iostream>



	CRect                rect;

	SDL_DestroyRenderer(ren);



				break;



	m_Viewport.MaxDepth = 1.0f;

};

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pMatrixBuffer = NULL;

};

	return 0;

	// Loop over shapes

	WORD* pIList = new WORD[icount];

		KEY_PRESS_SURFACE_RIGHT,

		return 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		}





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



	//深度ステンシルバッファ作成

	vrData.pSysMem = &pVList[0];



	{

	}

	{

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pMatrixBuffer);

	D3D_FEATURE_LEVEL level;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

}
	//頂点レイアウト作成

	HRESULT              hr;

	float    nearZ = 0.1f;

	}

		else if (e.type == SDL_KEYDOWN)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderClear(ren);

 */

	{

	scDesc.SampleDesc.Quality = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}



		R"(cube.obj)");

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_UP,

		return hr;

		return hr;

/*



	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}*/

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感



	std::string inputfile = "test.obj";

		&shapes,

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	txDesc.Width = rect.Width();

		&materials,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	std::string imagePath = "hello.bmp";

struct ConstantMatrixBuffer {

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	scDesc.SampleDesc.Quality = 0;

int SEGMENT = 36;

	vector<WORD> indexList;

		KEY_PRESS_SURFACE_TOTAL

};



				vertex.push_back(vertex_tmp);

	m_pSwapChain->Present(0, 0);

	scDesc.BufferDesc.Width = rect.Width();

	{

	dsDesc.Format = txDesc.Format;

	txDesc.Height = rect.Height();





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	for (const auto& shape : shapes)

	//テクスチャ読み込み

		delete[] pIList;

	SAFE_RELEASE(m_pVertexShader);

	m_pRenderTargetView = NULL;

	ConstantLightBuffer clb;

#include "DirectXManager.h"



	}

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	}

	UINT strides = sizeof(Vertex);

			for (size_t v = 0; v < fv; v++)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pSampler);

			}

	SDL_Quit();

{

	pBackBuffer->Release();

	m_pPixelShader = NULL;

	XMFLOAT4X4 world;

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	m_VertexCount = vcount;

	SDL_Quit();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}







	UINT offsets = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		if (!ret)

	ZeroMemory(&txDesc, sizeof(txDesc));

	float    fov = XMConvertToRadians(20.0f);

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<Vertex> vertexlist;





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

			{

			{

	scDesc.BufferDesc.Height = rect.Height();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				break;





	if (FAILED(hr))

#include "DirectXManager.h"



	XMFLOAT4 attenuate;         //減衰(a,b,c)

			{

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				indexlist.push_back(index);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	irData.SysMemSlicePitch = 0;

		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				break;



}

	m_pDepthStencilView = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		pVList[i] = vertexlist[i];

#define TINYOBJLOADER_IMPLEMENTATION

#include <SDL.h>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}
			for (size_t v = 0; v < num_vertices; v++)

	/*

	std::string inputfile = "test.obj";

	SDL_Quit();

#ifdef _DEBUG

	auto& materials = reader.GetMaterials();

	m_pDevice = NULL;

	}

	SAFE_RELEASE(m_pVertexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

	{

	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <SDL.h>

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];



	XMFLOAT4 ambient;           //環境(r,g,b)

{



	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))



	D3D11_SAMPLER_DESC smpDesc;

{

	};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



}



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		D3D11_SDK_VERSION,

	/*



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_DestroyRenderer(ren);

	for (int i = 0; i < 3; i++)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_RIGHT,

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

			// Loop over vertices in the face.

			case SDLK_UP:

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	{

	m_pSwapChain->Present(0, 0);

				// access to vertex

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

		&materials,



struct ConstantMaterial {

	::GetClientRect(hwnd, &rect);

	/*

	m_IndexCount = 0;

		return hr;

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

		{



	if (m_pImmediateContext)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

	irData.SysMemPitch = 0;

		SDL_Delay(1000);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderClear(ren);

		}

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	float    farZ = 100.0f;



		if (!ret)

	bool ret = tinyobj::LoadObj(



	{

			for (size_t v = 0; v < num_vertices; v++)

};

	Release();

	SAFE_RELEASE(m_pDevice);

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		if (!reader.Error().empty())

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#include <iostream>

	std::string error;

	}



	LoadObj(vertexlist, indexList);

	irData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantLightBuffer clb;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	m_pRenderTargetView = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	SAFE_RELEASE(m_pSwapChain);

		pLevels,

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	::ZeroMemory(&scDesc, sizeof(scDesc));



	enum KeyPressSurfaces

struct ConstantLightBuffer {









				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	vector<Vertex> vertexlist;

		SDL_Delay(1000);



{



	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	while (SDL_PollEvent(&e) != 0)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);







	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	{

	ConstantLight    pntLight; //点光源



	//インデックスバッファ作成

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.MinDepth = 0.0f;

			}

	tinyobj::attrib_t attrib;

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pVertexShader);

		}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (!error.empty())

		flags,

	}

	m_Viewport.MinDepth = 0.0f;



	m_IndexCount = 0;

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_RIGHT,

			//Select surfaces based on key press

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

int SEGMENT = 36;

	//ビューポート設定

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

			break;

	{



	{

}





		size_t index_offset = 0;  // インデントのオフセット

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pLightBuffer);

	{



	std::vector<tinyobj::material_t> materials;

		&error,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_DestroyWindow(win);

			{





	enum KeyPressSurfaces

struct ConstantMatrixBuffer {

	UINT flags = 0;

{



	SAFE_RELEASE(m_pTextureView);



		D3D_DRIVER_TYPE_HARDWARE,



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	m_pDepthStencilView = NULL;

			}

	if (FAILED(hr))



	SDL_Event e;

		return hr;

int SEGMENT = 36;

		return hr;

		//User presses a key

	m_IndexCount = 0;

			}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vbDesc.MiscFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pInputLayout = NULL;

}

	SDL_DestroyRenderer(ren);

		&shapes,

	SDL_FreeSurface(bmp);

	delete[] pVList;

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				indexlist.push_back(index);



	m_VertexCount = 0;

		return hr;

	WORD* pIList = new WORD[icount];

CD3DTest::CD3DTest()

	m_VertexCount = 0;



		&shapes,

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pIndexBuffer);

	if (!error.empty())

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

	m_VertexCount = 0;

}

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t ty =

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pSampler = NULL;

				WORD index = idx.vertex_index;



		pIList[j] = indexList[j];

				indexlist.push_back(index);

		return hr;

	if (FAILED(hr))

		return hr;



	//First we need to start up SDL, and make sure it went ok



	ConstantLight    pntLight; //点光源



	SDL_Quit();

 * Lesson 1: Hello World!

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ConstantLightBuffer clb;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.ArraySize = 1;

	ibDesc.MiscFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::attrib_t attrib;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		1,

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyWindow(win);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		//User requests quit

			switch (e.key.keysym.sym)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	pBackBuffer->Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ZeroMemory(&txDesc, sizeof(txDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		{

	std::vector<tinyobj::shape_t> shapes;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

	}

#ifdef _DEBUG

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				WORD index = idx.vertex_index;

	HRESULT              hr;

		pIList[j] = indexList[j];

	m_pImmediateContext = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pTexture);

	for (const auto& shape : shapes)





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	tinyobj::ObjReader reader;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	if (FAILED(hr))

		&attrib,



#include <SDL.h>

	vector<WORD> indexList;

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pSwapChain->Present(0, 0);



struct ConstantMaterial {

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	delete[] pVList;



	//頂点バッファ作成

	UINT strides = sizeof(Vertex);

void CD3DTest::Release()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

using std::cout; using std::endl;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

using std::cout; using std::endl;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		D3D11_SDK_VERSION,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pDepthStencilView = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	m_Angle += XMConvertToRadians(1.0f);



	m_pSampler = NULL;

struct ConstantMaterial {

		delete[] pIList;

	//頂点シェーダー生成

{

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pLightBuffer);



		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.Height = (FLOAT)rect.Height();

	m_IndexCount = 0;

		//User requests quit

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





		&m_pSwapChain,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4X4 projection;

				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;

{

	dsDesc.Texture2D.MipSlice = 0;



};

		SDL_RenderPresent(ren);



		exit(1);

	delete[] pVList;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		//User requests quit

			case SDLK_DOWN:

		return hr;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			switch (e.key.keysym.sym)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_UP,



			switch (e.key.keysym.sym)

				tinyobj::real_t tx =

	auto& materials = reader.GetMaterials();

	{

	for (const auto& shape : shapes)

	ibDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

	CRect                rect;

	scDesc.SampleDesc.Quality = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 world;



	SDL_Event e;

	D3D_FEATURE_LEVEL level;



	if (FAILED(hr))

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pRenderTargetView);



	m_pMatrixBuffer = NULL;

		delete[] pIList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pSwapChain = NULL;

	if (FAILED(hr))



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext = NULL;

			//Select surfaces based on key press

	ConstantMatrixBuffer cmb;

	//定数バッファ作成

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	XMFLOAT4X4 view;

	m_pMatrixBuffer = NULL;

		//User requests quit

	Release();

	txDesc.Width = rect.Width();

	//インデックスバッファ作成

	m_IndexCount = icount;

	}

	m_pTexture = NULL;

};

	scDesc.BufferDesc.Height = rect.Height();

	m_pTextureView = NULL;

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.BufferDesc.Height = rect.Height();

	vector<WORD> indexList;

		KEY_PRESS_SURFACE_LEFT,



		&materials,





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);







	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	tinyobj::ObjReader reader;

	scDesc.BufferDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		&attrib,

		SDL_RenderClear(ren);

	vrData.pSysMem = &pVList[0];

	cbDesc.CPUAccessFlags = 0;

		return hr;







};

}
		delete[] pIList;

	HRESULT              hr;

#include <SDL.h>



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	UINT flags = 0;

	// Loop over shapes

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pDevice = NULL;

	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

 * Lesson 1: Hello World!

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    nearZ = 0.1f;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

 * Lesson 1: Hello World!

}

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				break;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	// Loop over shapes

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t ty =

	{

	float    farZ = 100.0f;

		}

	auto& shapes = reader.GetShapes();

	SDL_Quit();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t ty =



	dsDesc.Format = txDesc.Format;

	m_pDepthStencilView = NULL;

			case SDLK_UP:

	m_Viewport.TopLeftY = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&m_pImmediateContext);



	while (SDL_PollEvent(&e) != 0)

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		}

	if (FAILED(hr))

#include "DirectXManager.h"

	//頂点シェーダー生成



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    farZ = 100.0f;





			{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

		pIList[j] = indexList[j];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				break;







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pIndexBuffer = NULL;



	//頂点レイアウト作成

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderPresent(ren);

	{

	if (FAILED(hr))



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		1,

			}

	{

{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	scDesc.SampleDesc.Quality = 0;

	m_pPixelShader = NULL;



int SEGMENT = 36;

		&m_pSwapChain,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//インデックスバッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

	vbDesc.CPUAccessFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		exit(1);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pDepthStencilTexture = NULL;

	}*/

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Create Index

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.CPUAccessFlags = 0;





	D3D11_BUFFER_DESC ibDesc;

		{

	//テクスチャ読み込み



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	dsDesc.Format = txDesc.Format;

struct ConstantMatrixBuffer {

	XMFLOAT4 pos;               //座標(x,y,z)

		exit(1);



	XMStoreFloat4(&clb.eyePos, eye);

			switch (e.key.keysym.sym)

	//Clean up our objects and quit



	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_DOWN:

	m_pTexture = NULL;



};

		&scDesc,

}
	return 0;

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	SDL_DestroyTexture(tex);



		1,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);







	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferDesc.Height = rect.Height();



		//User presses a key

	for (int i = 0; i < vcount; i++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	SAFE_RELEASE(m_pMatrixBuffer);



};

	}

	SAFE_RELEASE(m_pTexture);

};

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		D3D11_SDK_VERSION,

	}



	float    fov = XMConvertToRadians(20.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.OutputWindow = hwnd;

	//vector<Vertex> vertex_t;

{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			index_offset += fv;

			{



				// access to vertex

		SDL_RenderClear(ren);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#include <SDL.h>



		return hr;

#ifdef _DEBUG

{



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pRenderTargetView = NULL;

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		return hr;

	//頂点バッファ作成

	txDesc.SampleDesc.Count = 1;

		}



	}

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

#endif



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pDepthStencilTexture);

			{





		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantMatrixBuffer {





				// access to vertex

	return 0;





				break;

		return hr;

	cbDesc.CPUAccessFlags = 0;





	XMStoreFloat4(&clb.material.specular, materialSpecular);





				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	m_VertexCount = 0;

int main(int, char**)

	m_VertexCount = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			index_offset += fv;

			exit(1);

		&materials,

	ibDesc.MiscFlags = 0;



}

	SAFE_RELEASE(m_pLightBuffer);



				vertex.push_back(vertex_tmp);

				break;

	/*

struct ConstantMatrixBuffer {







	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    fov = XMConvertToRadians(20.0f);





	DXGI_SWAP_CHAIN_DESC scDesc;





	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	enum KeyPressSurfaces

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	}

	SAFE_RELEASE(m_pTextureView);

	};





	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		1,



	//ビューポート設定

	{

			case SDLK_RIGHT:

	/*

	m_Viewport.TopLeftX = 0;







	XMFLOAT4 specular;          //反射(r,g,b)

	//Create Index

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.CPUAccessFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	return 0;

	SAFE_RELEASE(m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				WORD index = idx.vertex_index;

	m_pTextureView = NULL;

	return hr;

	SAFE_RELEASE(m_pSampler);

{

				// access to vertex

	scDesc.Windowed = TRUE;

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		if (!ret)

	vrData.SysMemPitch = 0;

	{

	cbDesc.MiscFlags = 0;

		return hr;





	vrData.SysMemPitch = 0;



	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



struct ConstantLightBuffer {

		pVList[i] = vertexlist[i];

	for (size_t s = 0; s < shapes.size(); s++)



	delete[] pIList;

	txDesc.MipLevels = 1;



	irData.SysMemSlicePitch = 0;

	//vector<Vertex> vertex_t;

	{

	m_pVertexShader = NULL;

	m_pDevice = NULL;

		}

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext = NULL;

			{



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		NULL,

	}

		SDL_Delay(1000);





		KEY_PRESS_SURFACE_DEFAULT,

{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	dsDesc.Texture2D.MipSlice = 0;

		if (!reader.Error().empty())

	m_pIndexBuffer = NULL;

 */



		exit(1);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



	if (m_pImmediateContext)

	cbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;

	{





	}

	{

			case SDLK_LEFT:





	SDL_DestroyTexture(tex);

	{



		size_t index_offset = 0;  // インデントのオフセット

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			exit(1);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pMatrixBuffer);





	D3D_FEATURE_LEVEL level;



		m_pImmediateContext->ClearState();

	m_Viewport.Width = (FLOAT)rect.Width();

	{

	SAFE_RELEASE(m_pVertexShader);

	dsDesc.Format = txDesc.Format;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pRenderTargetView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t ty =

	for (size_t s = 0; s < shapes.size(); s++)

	//Create Index

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		&attrib,

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

};

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

/*





	D3D11_SUBRESOURCE_DATA vrData;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

#include <iostream>

	SDL_DestroyWindow(win);





	SDL_Event e;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.OutputWindow = hwnd;

	vbDesc.MiscFlags = 0;

	Release();

using std::cout; using std::endl;

	XMFLOAT4X4 view;

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	//頂点シェーダー生成

	vrData.SysMemPitch = 0;

			for (size_t v = 0; v < fv; v++)

	vrData.SysMemSlicePitch = 0;

			break;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				break;

	m_pTexture = NULL;



CD3DTest::CD3DTest()

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		if (!reader.Error().empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

			// Loop over vertices in the face.

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pSwapChain->Present(0, 0);



void CD3DTest::Render()







	{

			{

		1,

		pLevels,



			}



		}

	Release();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		&scDesc,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	vbDesc.StructureByteStride = 0;

	auto& shapes = reader.GetShapes();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

int main(int, char**)



	SAFE_RELEASE(m_pDevice);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

#include <SDL.h>



	vrData.SysMemSlicePitch = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

struct ConstantMatrixBuffer {

	irData.SysMemSlicePitch = 0;



	txDesc.ArraySize = 1;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&materials,

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pTextureView);

int main(int, char**)

	m_pMatrixBuffer = NULL;

	float    fov = XMConvertToRadians(20.0f);

	std::vector<tinyobj::shape_t> shapes;

		{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

	m_pMatrixBuffer = NULL;

	ID3D11Texture2D* pBackBuffer;

		R"(cube.obj)");

	D3D_FEATURE_LEVEL level;

	SAFE_RELEASE(m_pVertexBuffer);

	float    farZ = 100.0f;

	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_TOTAL

	if (!error.empty())

	XMFLOAT4X4 view;



				tinyobj::real_t tx =

		{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

{

	SAFE_RELEASE(m_pSwapChain);



 * Lesson 1: Hello World!

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	// Loop over shapes

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pTexture);

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.SampleDesc.Quality = 0;

struct ConstantMaterial {

		return hr;



		return hr;

}
	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



int SEGMENT = 36;

	tinyobj::ObjReaderConfig reader_config;

	m_Angle += XMConvertToRadians(1.0f);



	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



		pIList[j] = indexList[j];

			index_offset += fv;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

/*

	}*/



	std::vector<tinyobj::shape_t> shapes;

	for (size_t s = 0; s < shapes.size(); s++)

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	while (SDL_PollEvent(&e) != 0)



/*







	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	SAFE_RELEASE(m_pRenderTargetView);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//頂点バッファ作成

	D3D11_BUFFER_DESC ibDesc;

	auto& attrib = reader.GetAttrib();

	//Key press surfaces constants

	SAFE_RELEASE(m_pDepthStencilView);



			}



	vector<WORD> indexList;

		1,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	std::vector<tinyobj::material_t> materials;





	XMStoreFloat4(&clb.ambient, lightAmbient);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

	scDesc.BufferCount = 1;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Viewport.Height = (FLOAT)rect.Height();

	ibDesc.StructureByteStride = 0;

			// Loop over vertices in the face.

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#include <SDL.h>



		if (!reader.Error().empty())

	{

{

		return hr;

	m_Viewport.MinDepth = 0.0f;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;

	pBackBuffer->Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.MipLevels = 1;

	irData.SysMemSlicePitch = 0;



	//ピクセルシェーダー生成

	scDesc.BufferCount = 1;





}

	int     vcount = vertexlist.size();

	WORD* pIList = new WORD[icount];





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		SDL_Delay(1000);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (size_t s = 0; s < shapes.size(); s++)

		flags,

	D3D11_BUFFER_DESC ibDesc;



	cbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <SDL.h>

		KEY_PRESS_SURFACE_UP,

		if (!ret)

	m_pDevice = NULL;



CD3DTest::CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

#endif

	m_pVertexBuffer = NULL;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}*/

		SDL_Delay(1000);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.SampleDesc.Count = 1;

{



};

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.OutputWindow = hwnd;



	irData.SysMemSlicePitch = 0;

		//User presses a key



		SDL_Delay(1000);

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

	//Key press surfaces constants

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (!error.empty())





				break;

	//Key press surfaces constants

struct ConstantLightBuffer {

	//定数バッファ作成

	D3D_FEATURE_LEVEL level;

			{

	ibDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pMatrixBuffer);

	// Loop over shapes



			}

}



struct ConstantLightBuffer {

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyRenderer(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	vector<WORD> indexList;



		{

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pInputLayout);



		SDL_Delay(1000);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::string error;

	bool ret = tinyobj::LoadObj(

		D3D_DRIVER_TYPE_HARDWARE,

		&level,

	txDesc.ArraySize = 1;

	D3D_FEATURE_LEVEL level;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (m_pImmediateContext)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	txDesc.Width = rect.Width();

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	vector<WORD> indexList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	//テクスチャ読み込み

			{



		return hr;

			case SDLK_LEFT:



	//インデックスバッファ作成



	CRect                rect;

		size_t index_offset = 0;  // インデントのオフセット

	Release();

	//ピクセルシェーダー生成

	dsDesc.Texture2D.MipSlice = 0;

	std::string inputfile = "test.obj";

				// access to vertex

#endif

				break;

		return hr;

	//vector<Vertex> vertex_t;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		}

	vector<Vertex> vertexlist;

		delete[] pIList;

				tinyobj::real_t tx =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			// Loop over vertices in the face.

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



CD3DTest::CD3DTest()





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SUBRESOURCE_DATA irData;

CD3DTest::CD3DTest()

struct ConstantMaterial {

	WORD   icount = indexList.size();



		&attrib,

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//頂点バッファ作成

	m_pDevice = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_LEFT:

	m_Viewport.MaxDepth = 1.0f;

			for (size_t v = 0; v < num_vertices; v++)

	}*/



	vrData.SysMemSlicePitch = 0;

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		D3D_DRIVER_TYPE_HARDWARE,

	vbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

 * Lesson 1: Hello World!



#include "DirectXManager.h"



		{

	//Create Index

	dsDesc.Format = txDesc.Format;

	{

	m_pSwapChain = NULL;

		return hr;

}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_BUFFER_DESC ibDesc;

	irData.pSysMem = &pIList[0];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		cout << "SDL_INIT_ERROR" << endl;

		// Loop over faces(polygon)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	Release();



	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pDevice);

	vector<Vertex> vertexlist;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pImmediateContext);



	//Create Index

				tinyobj::real_t tx =









	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//vector<WORD> index_t;



	if (!reader.ParseFromFile(inputfile, reader_config))

			switch (e.key.keysym.sym)

/*

		//User requests quit

	m_pRenderTargetView = NULL;

			index_offset += num_vertices;



	XMFLOAT4X4 world;





	//Create Index

		SDL_RenderPresent(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

		&attrib,









	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	WORD   icount = indexList.size();

	};

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

		// Loop over faces(polygon)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vector<Vertex> vertexlist;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}



	m_pRenderTargetView = NULL;

	//ビューポート設定

	SAFE_RELEASE(m_pDepthStencilView);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	scDesc.BufferCount = 1;

			exit(1);

			}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	}

				// access to vertex

	txDesc.Height = rect.Height();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	for (size_t s = 0; s < shapes.size(); s++)



	irData.pSysMem = &pIList[0];

	auto& shapes = reader.GetShapes();

		D3D11_SDK_VERSION,

				vertex.push_back(vertex_tmp);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	ibDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);

};

	m_Viewport.TopLeftX = 0;



		}

				vertex.push_back(vertex_tmp);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	vrData.SysMemSlicePitch = 0;



	vrData.pSysMem = &pVList[0];

	/*

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pInputLayout = NULL;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	CRect                rect;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void CD3DTest::Render()

	ConstantMatrixBuffer cmb;

	XMFLOAT4X4 view;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pMatrixBuffer);

	std::string inputfile = "test.obj";

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vrData.SysMemPitch = 0;

	LoadObj(vertexlist, indexList);

	};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	for (int i = 0; i < vcount; i++)

#include <SDL.h>





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			// Loop over vertices in the face.

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4 ambient;           //環境(r,g,b)



	//vector<Vertex> vertex_t;

		//User requests quit

				break;

	reader_config.mtl_search_path = "./"; // Path to material files





			default:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	return hr;

	//Create Index

				tinyobj::real_t tx =

		return hr;

	float    farZ = 100.0f;


