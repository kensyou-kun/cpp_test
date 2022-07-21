	//定数バッファ作成



	if (!reader.Warning().empty())

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	delete[] pVList;



	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		exit(1);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	};

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Quit();

	pBackBuffer->Release();

	ZeroMemory(&dsDesc, sizeof(dsDesc));



{

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderCopy(ren, tex, NULL, NULL);

void CD3DTest::Render()



		return 1;

	m_pDepthStencilTexture = NULL;

	WORD   icount = indexList.size();

		// Loop over faces(polygon)

	irData.pSysMem = &pIList[0];

			case SDLK_DOWN:





			case SDLK_UP:

		SDL_RenderPresent(ren);

	ibDesc.CPUAccessFlags = 0;

#ifdef _DEBUG

	}*/

				WORD index = idx.vertex_index;

	}

	cbDesc.MiscFlags = 0;

	m_pSwapChain = NULL;



		delete[] pVList;

			}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pTexture);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			default:

	irData.SysMemSlicePitch = 0;

	m_pSampler = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//Clean up our objects and quit

			{



	std::string inputfile = "test.obj";



		delete[] pVList;

	UINT flags = 0;

	int     vcount = vertexlist.size();

	return 0;

	}

	/*





	{

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	cbDesc.MiscFlags = 0;

#include <iostream>



		pLevels,



	//定数バッファ作成

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	vbDesc.StructureByteStride = 0;







		if (e.type == SDL_QUIT)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.SysMemPitch = 0;

			{

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	for (int i = 0; i < 3; i++)

	Vertex* pVList = new Vertex[vcount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.StructureByteStride = 0;

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_UP:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



			}

				tinyobj::real_t tx =

	m_pSampler = NULL;

	if (FAILED(hr))

		size_t index_offset = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);



		return hr;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

void CD3DTest::Render()

				vertex.push_back(vertex_tmp);

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	for (int i = 0; i < vcount; i++)

{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

};

		{

		{

			{

		&attrib,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	auto& shapes = reader.GetShapes();



	//ピクセルシェーダー生成

	if (!reader.Warning().empty())





	SAFE_RELEASE(m_pVertexBuffer);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	delete[] pVList;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



HRESULT CD3DTest::Create(HWND hwnd)

		1,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.BufferDesc.Height = rect.Height();

/*

	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();

		return 1;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    farZ = 100.0f;



	m_VertexCount = vcount;

	{



#include <iostream>



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				WORD index = idx.vertex_index;

	{

	m_pDepthStencilView = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

};

	// Loop over shapes

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

int SEGMENT = 36;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

{

				break;

	LoadObj(vertexlist, indexList);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	return 0;

				break;

	return hr;

		// Loop over faces(polygon)

{

		if (!reader.Error().empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pTexture);

		1,



				indexlist.push_back(index);

	scDesc.BufferCount = 1;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	int     vcount = vertexlist.size();

				// access to vertex

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

	m_pVertexShader = NULL;



	SAFE_RELEASE(m_pMatrixBuffer);

	{

{

	SDL_DestroyWindow(win);

	//頂点レイアウト作成

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	ConstantLightBuffer clb;

	std::string imagePath = "hello.bmp";

	{

	SDL_Quit();

	scDesc.OutputWindow = hwnd;

	{

	std::string inputfile = "test.obj";

		}

	scDesc.OutputWindow = hwnd;

	irData.SysMemPitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pSwapChain,

{

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Quit();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;



#include <SDL.h>

	txDesc.Height = rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pDepthStencilView);

		{

int SEGMENT = 36;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Create Index



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

		NULL,



		SDL_RenderClear(ren);



	tinyobj::attrib_t attrib;

	SDL_DestroyTexture(tex);



	scDesc.BufferDesc.Width = rect.Width();

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDepthStencilView);

		D3D11_SDK_VERSION,

	SDL_DestroyWindow(win);

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	// Loop over shapes

	cbDesc.MiscFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//vector<WORD> index_t;



	}



{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



}



	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

	vector<Vertex> vertexlist;

	::ZeroMemory(&scDesc, sizeof(scDesc));



			for (size_t v = 0; v < fv; v++)



	vector<WORD> indexList;

	m_IndexCount = icount;

		// Loop over faces(polygon)

	scDesc.BufferCount = 1;



}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pSwapChain);

struct ConstantMatrixBuffer {

	//深度ステンシルバッファ作成

{

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pLightBuffer);

	dsDesc.Format = txDesc.Format;

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pTextureView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	}

		return hr;

	// Loop over shapes

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#ifdef _DEBUG

	scDesc.SampleDesc.Count = 1;

	while (SDL_PollEvent(&e) != 0)



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_Viewport.MinDepth = 0.0f;

	}

#define TINYOBJLOADER_IMPLEMENTATION

	//First we need to start up SDL, and make sure it went ok





		NULL,



	SAFE_RELEASE(m_pSwapChain);

		m_pImmediateContext->ClearState();

		return 1;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pInputLayout = NULL;

	m_pVertexBuffer = NULL;

	D3D_FEATURE_LEVEL level;

	XMFLOAT4X4 projection;

		else if (e.type == SDL_KEYDOWN)

	SDL_Quit();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	if (!reader.ParseFromFile(inputfile, reader_config))





	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t ty =

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	WORD   icount = indexList.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{



	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//Create Index

	scDesc.BufferDesc.Width = rect.Width();



	if (FAILED(hr))

	if (FAILED(hr))





	scDesc.SampleDesc.Quality = 0;

	return 0;

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext = NULL;

	vrData.SysMemSlicePitch = 0;

	m_pSwapChain = NULL;

}



}

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{



	std::vector<tinyobj::shape_t> shapes;

		&level,



	delete[] pIList;

struct ConstantLight {

CD3DTest::~CD3DTest()

	UINT offsets = 0;

{

			}



}

	txDesc.CPUAccessFlags = 0;

		return hr;

	SDL_DestroyWindow(win);

		delete[] pIList;

				indexlist.push_back(index);

struct ConstantMatrixBuffer {

			for (size_t v = 0; v < fv; v++)

	};



		KEY_PRESS_SURFACE_TOTAL

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	cbDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_pVertexShader = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	vrData.SysMemSlicePitch = 0;

		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

struct ConstantLightBuffer {

};

	{





	return 0;



				break;



		else if (e.type == SDL_KEYDOWN)

	DXGI_SWAP_CHAIN_DESC scDesc;

		KEY_PRESS_SURFACE_DEFAULT,



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (!reader.Warning().empty())

		R"(cube.obj)");



		//User requests quit

		SDL_RenderCopy(ren, tex, NULL, NULL);





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	while (SDL_PollEvent(&e) != 0)

	m_pVertexBuffer = NULL;



	irData.pSysMem = &pIList[0];

				vertex.push_back(vertex_tmp);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}

				break;

	delete[] pVList;

	{



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&attrib,

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	//頂点シェーダー生成

	m_pVertexShader = NULL;

	m_pVertexShader = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	for (int i = 0; i < vcount; i++)



	XMFLOAT4 pos;               //座標(x,y,z)

	::GetClientRect(hwnd, &rect);

}

	delete[] pVList;

			index_offset += fv;

	float    fov = XMConvertToRadians(20.0f);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	reader_config.mtl_search_path = "./"; // Path to material files

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pTextureView = NULL;

#include <SDL.h>

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SDL_DestroyTexture(tex);

	m_pDevice = NULL;

CD3DTest::CD3DTest()

	//ピクセルシェーダー生成

struct ConstantMaterial {

		if (e.type == SDL_QUIT)

	scDesc.OutputWindow = hwnd;

{

				// access to vertex



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

}

};

	SDL_FreeSurface(suf);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&scDesc,



		1,

{

}

	delete[] pVList;

	ibDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pTexture);

#include "DirectXManager.h"



	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

}

	if (FAILED(hr))

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pSampler = NULL;

			exit(1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.MiscFlags = 0;





	std::string error;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_RIGHT,

	{

	m_pDepthStencilView = NULL;

}

			}

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 specular;          //反射(r,g,b)

		&scDesc,

			break;

			case SDLK_RIGHT:

		pIList[j] = indexList[j];

	for (int j = 0; j < icount; j++)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	float    nearZ = 0.1f;

			index_offset += num_vertices;

		{



			case SDLK_RIGHT:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			case SDLK_UP:

		&level,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_RenderClear(ren);

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		// Loop over faces(polygon)



	m_pTextureView = NULL;

	//vector<WORD> index_t;

	LoadObj(vertexlist, indexList);



	irData.pSysMem = &pIList[0];

	SDL_Quit();

	vector<WORD> indexList;





	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.eyePos, eye);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

int main(int, char**)

	SAFE_RELEASE(m_pDevice);

	vbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		}

	m_pTextureView = NULL;

				indexlist.push_back(index);

		pVList[i] = vertexlist[i];

	txDesc.Width = rect.Width();





	m_pImmediateContext = NULL;





}


	return 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

	m_pTextureView = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD   icount = indexList.size();

	if (FAILED(hr))

				// access to vertex

CD3DTest::CD3DTest()

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;





	scDesc.Windowed = TRUE;

	}



{

	if (FAILED(hr))





	Vertex* pVList = new Vertex[vcount];



struct ConstantMaterial {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		}

		if (!reader.Error().empty())

	D3D11_SUBRESOURCE_DATA irData;

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

	return;

	m_pSwapChain = NULL;

	/*

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	for (int i = 0; i < vcount; i++)

	//First we need to start up SDL, and make sure it went ok

		m_pImmediateContext->ClearState();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <iostream>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SUBRESOURCE_DATA irData;

		&shapes,



	{



	if (FAILED(hr))



	bool ret = tinyobj::LoadObj(

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

};

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		SDL_RenderClear(ren);



		&shapes,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.pSysMem = &pVList[0];

	};

	int     vcount = vertexlist.size();

	//頂点シェーダー生成



	tinyobj::attrib_t attrib;

		else if (e.type == SDL_KEYDOWN)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	vbDesc.StructureByteStride = 0;

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}



	irData.SysMemPitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				indexlist.push_back(index);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext = NULL;







	m_pTexture = NULL;

	if (FAILED(hr))

struct ConstantMatrixBuffer {

}

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&m_pDevice,





	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



		size_t index_offset = 0;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

}

	::ZeroMemory(&scDesc, sizeof(scDesc));



		KEY_PRESS_SURFACE_UP,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty =

	m_VertexCount = 0;

	ConstantLightBuffer clb;





int SEGMENT = 36;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (FAILED(hr))

	enum KeyPressSurfaces



	m_IndexCount = 0;

		}



		SDL_RenderClear(ren);

	vrData.pSysMem = &pVList[0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	vector<Vertex> vertexlist;

}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		SDL_RenderPresent(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&m_pImmediateContext);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pVertexBuffer = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SAFE_RELEASE(m_pRenderTargetView);



	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	return;

		}



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pDevice);

	};

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pLightBuffer);



	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	SDL_FreeSurface(bmp);

		// Loop over faces(polygon)

		return hr;

#include <SDL.h>

		delete[] pIList;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

HRESULT CD3DTest::Create(HWND hwnd)

{





	SAFE_RELEASE(m_pVertexShader);

		{

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

		&m_pDevice,

	D3D11_BUFFER_DESC ibDesc;

	m_pPixelShader = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			//Select surfaces based on key press

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pImmediateContext);

		if (!ret)

	D3D11_BUFFER_DESC cbDesc;

#include <iostream>

	m_pVertexShader = NULL;

	}

	LoadObj(vertexlist, indexList);

	m_Viewport.Width = (FLOAT)rect.Width();

void CD3DTest::Render()

void CD3DTest::Render()

	WORD   icount = indexList.size();

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return 0;



		{





	SDL_Quit();

#include <SDL.h>

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

/*

	}





	SAFE_RELEASE(m_pImmediateContext);

	std::vector<tinyobj::shape_t> shapes;

	LoadObj(vertexlist, indexList);

		// Loop over faces(polygon)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		return hr;

		if (!reader.Error().empty())

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		SDL_Delay(1000);



		m_pImmediateContext->ClearState();



	ConstantLight    pntLight; //点光源

	return 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	scDesc.BufferDesc.Height = rect.Height();





	XMFLOAT4 pos;               //座標(x,y,z)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	HRESULT              hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_IndexCount = icount;

	m_pInputLayout = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	/*

			}

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.MiscFlags = 0;

		SDL_Delay(1000);





				break;



struct ConstantLight {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		cout << "SDL_INIT_ERROR" << endl;

				// access to vertex

			//Select surfaces based on key press

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	tinyobj::attrib_t attrib;



}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string inputfile = "test.obj";

	}

		KEY_PRESS_SURFACE_TOTAL

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

				vertex.push_back(vertex_tmp);

	ConstantLight    pntLight; //点光源

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

	}

		&scDesc,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		}

		R"(cube.obj)");

	D3D11_SAMPLER_DESC smpDesc;

				tinyobj::real_t tx =

	//Create Index

	m_pRenderTargetView = NULL;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pImmediateContext);

}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_VertexCount = vcount;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.SampleDesc.Count = 1;

		&attrib,



	UINT offsets = 0;

	{

			for (size_t v = 0; v < fv; v++)

};

CD3DTest::CD3DTest()



		return hr;

	m_pSwapChain->Present(0, 0);

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

#define TINYOBJLOADER_IMPLEMENTATION



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		NULL,

int SEGMENT = 36;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

	}

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.StructureByteStride = 0;

	//インデックスバッファ作成

	SDL_FreeSurface(bmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Quit();

	txDesc.Width = rect.Width();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	}

struct ConstantLightBuffer {

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);



		SDL_Delay(1000);

struct ConstantMaterial {

	m_pSwapChain->Present(0, 0);

	m_Viewport.MaxDepth = 1.0f;

		{

	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pRenderTargetView);

	CRect                rect;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

				WORD index = idx.vertex_index;

		&shapes,

		return hr;

#ifdef _DEBUG

	//頂点バッファ作成

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

void CD3DTest::Release()

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	// Loop over shapes

	txDesc.Height = rect.Height();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	D3D11_BUFFER_DESC vbDesc;

		&scDesc,

	UINT strides = sizeof(Vertex);

	m_Viewport.MaxDepth = 1.0f;

	//Clean up our objects and quit

		// Loop over faces(polygon)

	{

			for (size_t v = 0; v < fv; v++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	CRect                rect;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		NULL,

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_BUFFER_DESC cbDesc;



	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

		if (!reader.Error().empty())

		m_pImmediateContext->ClearState();

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

{

		size_t index_offset = 0;

		//User requests quit

		// Loop over faces(polygon)

		}

	bool ret = tinyobj::LoadObj(



			for (size_t v = 0; v < fv; v++)

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDepthStencilTexture);







	cbDesc.MiscFlags = 0;

#ifdef _DEBUG

}

	{

	txDesc.CPUAccessFlags = 0;

				// access to vertex

		flags,

			default:

				indexlist.push_back(index);

	vector<WORD> indexList;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		else if (e.type == SDL_KEYDOWN)

			for (size_t v = 0; v < fv; v++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		}



struct ConstantMatrixBuffer {

	txDesc.Width = rect.Width();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		{

	//Create Index

				break;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&materials,

	SDL_Quit();

				tinyobj::real_t tx =

	auto& shapes = reader.GetShapes();

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemSlicePitch = 0;

	std::string inputfile = "test.obj";

				indexlist.push_back(idx.vertex_index);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	tinyobj::ObjReaderConfig reader_config;

	//vector<WORD> index_t;

	//Key press surfaces constants



	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.SampleDesc.Quality = 0;



		KEY_PRESS_SURFACE_DOWN,



		SDL_RenderPresent(ren);

struct ConstantLightBuffer {

	m_IndexCount = icount;









	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	// Loop over shapes

	std::string error;

		KEY_PRESS_SURFACE_DEFAULT,



		D3D11_SDK_VERSION,



	XMFLOAT4         eyePos;   //視点座標

CD3DTest::~CD3DTest()

		exit(1);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		}

	//定数バッファ作成





	SDL_DestroyWindow(win);

	}



		return hr;

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	HRESULT              hr;



	std::vector<tinyobj::material_t> materials;

	return hr;

};

		return hr;

	//First we need to start up SDL, and make sure it went ok



			index_offset += num_vertices;



		{

	{

CD3DTest::~CD3DTest()



	if (!reader.Warning().empty())

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);

				WORD index = idx.vertex_index;

};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//インデックスバッファ作成

	{

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyRenderer(ren);

			index_offset += num_vertices;

		//User requests quit

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

	//頂点レイアウト作成

	}



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;

	ID3D11Texture2D* pBackBuffer;

		return hr;

}

};

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SDL_DestroyRenderer(ren);

	Release();

			case SDLK_RIGHT:

	m_pSwapChain->Present(0, 0);

	//頂点シェーダー生成

			//Select surfaces based on key press

	UINT flags = 0;

}



		SDL_RenderPresent(ren);

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			index_offset += fv;

	m_pVertexShader = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		pVList[i] = vertexlist[i];



	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ConstantMaterial material; //物体の質感

	m_pImmediateContext = NULL;

	//ビューポート設定

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SDL_DestroyTexture(tex);



	m_pPixelShader = NULL;

	txDesc.CPUAccessFlags = 0;

	//vector<WORD> index_t;

			index_offset += num_vertices;

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_RIGHT:

	}

	ibDesc.MiscFlags = 0;

#include <SDL.h>

	for (int i = 0; i < vcount; i++)

	txDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

CD3DTest::~CD3DTest()

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SAFE_RELEASE(m_pRenderTargetView);



struct ConstantMatrixBuffer {

	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

#define TINYOBJLOADER_IMPLEMENTATION

CD3DTest::~CD3DTest()

	vrData.pSysMem = &pVList[0];

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_DOWN,

			break;

	auto& materials = reader.GetMaterials();



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&error,

	if (FAILED(hr))

#include <iostream>

	D3D11_SUBRESOURCE_DATA irData;

	for (int i = 0; i < vcount; i++)



		SDL_RenderPresent(ren);

}

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.Width = rect.Width();

	XMFLOAT4X4 projection;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderPresent(ren);

}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	HRESULT              hr;

	reader_config.mtl_search_path = "./"; // Path to material files



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

using std::cout; using std::endl;

	m_pDevice = NULL;

				vertex.push_back(vertex_tmp);



	scDesc.OutputWindow = hwnd;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D11_SDK_VERSION,



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	return hr;

struct ConstantMatrixBuffer {







	scDesc.BufferCount = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

		pVList[i] = vertexlist[i];

	SDL_DestroyTexture(tex);

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t ty =

	for (int j = 0; j < icount; j++)

	{

	m_Viewport.TopLeftY = 0;

				WORD index = idx.vertex_index;



	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	flags |= D3D11_CREATE_DEVICE_DEBUG;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pTexture);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		//User presses a key

};

	::GetClientRect(hwnd, &rect);



	//ピクセルシェーダー生成

	UINT offsets = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		size_t index_offset = 0;  // インデントのオフセット

{

	delete[] pIList;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		}



	Vertex* pVList = new Vertex[vcount];

	vbDesc.StructureByteStride = 0;



	m_pInputLayout = NULL;

	{

		size_t index_offset = 0;

	m_pIndexBuffer = NULL;

	//頂点バッファ作成





	m_VertexCount = vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{



	//vector<WORD> index_t;

	D3D11_SUBRESOURCE_DATA vrData;



	m_Viewport.Height = (FLOAT)rect.Height();

		if (!ret)

	SDL_DestroyWindow(win);

	//インデックスバッファ作成



		return hr;

}



	if (FAILED(hr))

{

	m_pVertexBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexShader);

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		&materials,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//インデックスバッファ作成

	cbDesc.MiscFlags = 0;





	scDesc.BufferDesc.Height = rect.Height();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	cbDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

				// access to vertex

	if (FAILED(hr))



	ibDesc.MiscFlags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	SDL_DestroyRenderer(ren);





		KEY_PRESS_SURFACE_LEFT,





	XMStoreFloat4(&clb.eyePos, eye);

	UINT offsets = 0;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pImmediateContext = NULL;

	}



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				break;

	for (int j = 0; j < icount; j++)

}
	}*/

			exit(1);

	m_IndexCount = icount;

	while (SDL_PollEvent(&e) != 0)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	int     vcount = vertexlist.size();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		}

			index_offset += num_vertices;

	irData.pSysMem = &pIList[0];

	//テクスチャ読み込み

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	float    nearZ = 0.1f;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

		&m_pDevice,

	UINT offsets = 0;



	UINT offsets = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

		return hr;

		D3D11_SDK_VERSION,



		size_t index_offset = 0;  // インデントのオフセット

	SDL_FreeSurface(suf);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







				// access to vertex

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	vector<WORD> indexList;

}

	txDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t ty =

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;







		delete[] pVList;

	m_IndexCount = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vbDesc.CPUAccessFlags = 0;

	irData.SysMemSlicePitch = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ibDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;



	}

	scDesc.Windowed = TRUE;

	}

		size_t index_offset = 0;

CD3DTest::CD3DTest()

	WORD   icount = indexList.size();

		flags,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Event e;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    farZ = 100.0f;

		NULL,

{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	float    nearZ = 0.1f;

	{

CD3DTest::~CD3DTest()

	XMFLOAT4X4 view;

		// Loop over faces(polygon)

		&error,

	m_Viewport.MinDepth = 0.0f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ID3D11Texture2D* pBackBuffer;



	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	ConstantLight    pntLight; //点光源

		return hr;

	if (m_pImmediateContext)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))



	cbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	{

	//ビューポート設定

		else if (e.type == SDL_KEYDOWN)

	tinyobj::ObjReaderConfig reader_config;

	ConstantMaterial material; //物体の質感

 * Lesson 1: Hello World!

}

		&error,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pMatrixBuffer = NULL;

};

		return hr;

		&scDesc,

	return;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pLightBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <SDL.h>

				// access to vertex

	std::string error;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ConstantLightBuffer clb;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t tx =

			}

	txDesc.Height = rect.Height();

	cbDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t ty =

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC ibDesc;

	txDesc.CPUAccessFlags = 0;

	std::string error;

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			default:

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	{

{







	scDesc.SampleDesc.Count = 1;

	Release();

			// Loop over vertices in the face.

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		m_pImmediateContext->ClearState();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#ifdef _DEBUG



	SAFE_RELEASE(m_pDepthStencilView);

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

void CD3DTest::Render()

	}

	UINT flags = 0;

	scDesc.OutputWindow = hwnd;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				indexlist.push_back(index);

{

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);







	//vector<Vertex> vertex_t;



struct ConstantLight {

	{

	std::string imagePath = "hello.bmp";

#include <SDL.h>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	dsDesc.Format = txDesc.Format;



				break;

	//ビューポート設定



			// Loop over vertices in the face.

	//Key press surfaces constants

#ifdef _DEBUG



	}

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

#include <iostream>



	enum KeyPressSurfaces

		&shapes,

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		if (!ret)

	scDesc.BufferCount = 1;



	m_IndexCount = icount;



	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ConstantMaterial material; //物体の質感







	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

using std::cout; using std::endl;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

			break;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	XMFLOAT4X4 world;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vrData.SysMemPitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	delete[] pIList;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			for (size_t v = 0; v < fv; v++)

	pBackBuffer->Release();

	cbDesc.CPUAccessFlags = 0;

		delete[] pIList;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}


	hr = D3D11CreateDeviceAndSwapChain(NULL,

#define TINYOBJLOADER_IMPLEMENTATION

		NULL,

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pMatrixBuffer);

	//頂点バッファ作成

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderClear(ren);



	Release();

#include <iostream>

	m_pRenderTargetView = NULL;

	SDL_DestroyWindow(win);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_Quit();

		m_pImmediateContext->ClearState();

{

	float    fov = XMConvertToRadians(20.0f);

};

	irData.pSysMem = &pIList[0];



struct ConstantMatrixBuffer {

	CRect                rect;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		m_pImmediateContext->ClearState();

		return hr;



	}

	SAFE_RELEASE(m_pDevice);

		&shapes,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_DestroyTexture(tex);

		if (!ret)

				break;



	SDL_FreeSurface(bmp);

#include <iostream>

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

			index_offset += fv;



	SAFE_RELEASE(m_pPixelShader);



		pIList[j] = indexList[j];

		cout << "SDL_INIT_ERROR" << endl;

	::GetClientRect(hwnd, &rect);

			break;

		exit(1);

}

	/*



	ConstantMaterial material; //物体の質感



	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	if (FAILED(hr))

		size_t index_offset = 0;

	vrData.SysMemSlicePitch = 0;

struct ConstantLightBuffer {

	SDL_DestroyRenderer(ren);



		flags,

#endif

void CD3DTest::Render()

	}

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_Viewport.MaxDepth = 1.0f;

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	txDesc.Height = rect.Height();

		return hr;



	reader_config.mtl_search_path = "./"; // Path to material files

	for (size_t s = 0; s < shapes.size(); s++)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			for (size_t v = 0; v < fv; v++)

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

	D3D11_BUFFER_DESC cbDesc;



	SDL_Quit();

				break;



	SAFE_RELEASE(m_pDepthStencilView);



	// Loop over shapes

	float    aspect = m_Viewport.Width / m_Viewport.Height;

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_VertexCount = 0;

	SAFE_RELEASE(m_pInputLayout);

	return;

	m_Angle += XMConvertToRadians(1.0f);

	//ビューポート設定

	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);

			}

				tinyobj::real_t tx =



HRESULT CD3DTest::Create(HWND hwnd)



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pSwapChain->Present(0, 0);

			}

CD3DTest::CD3DTest()

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#include <SDL.h>

	{

	cbDesc.CPUAccessFlags = 0;

	ibDesc.MiscFlags = 0;

}

	reader_config.mtl_search_path = "./"; // Path to material files



	{

	}



	return 0;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

		return hr;

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

#include "DirectXManager.h"



	XMFLOAT4X4 world;

	m_pMatrixBuffer = NULL;

		return hr;

			case SDLK_RIGHT:

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	enum KeyPressSurfaces

	m_pSwapChain->Present(0, 0);

		pIList[j] = indexList[j];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点レイアウト作成

{

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	HRESULT              hr;

			exit(1);



		cout << "SDL_INIT_ERROR" << endl;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				break;

		KEY_PRESS_SURFACE_TOTAL

	std::vector<tinyobj::material_t> materials;

	{





{

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#endif

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		flags,

	Vertex* pVList = new Vertex[vcount];



	cbDesc.StructureByteStride = 0;

CD3DTest::CD3DTest()

			index_offset += fv;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!error.empty())

		return hr;

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{

	if (FAILED(hr))

	return;

	txDesc.ArraySize = 1;

	D3D11_BUFFER_DESC ibDesc;

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);

	std::vector<tinyobj::shape_t> shapes;

		&level,

			case SDLK_DOWN:



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);

	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Count = 1;

	HRESULT              hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	UINT strides = sizeof(Vertex);

	for (int j = 0; j < icount; j++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//頂点バッファ作成

	std::string imagePath = "hello.bmp";

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

				vertex.push_back(vertex_tmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Render()

	}



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ConstantLight    pntLight; //点光源

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Clean up our objects and quit

	scDesc.SampleDesc.Count = 1;

	delete[] pIList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//vector<WORD> index_t;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		}

}

	vbDesc.MiscFlags = 0;

	//頂点シェーダー生成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_DestroyWindow(win);

		D3D11_SDK_VERSION,

		flags,



		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		delete[] pVList;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 world;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{



/*



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return 0;

	}

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);



};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;

			index_offset += num_vertices;

	std::vector<tinyobj::material_t> materials;



	cbDesc.MiscFlags = 0;

{

#include <iostream>

	CRect                rect;

	m_pDepthStencilTexture = NULL;

{

		size_t index_offset = 0;





	SDL_Event e;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.pSysMem = &pIList[0];

	for (int i = 0; i < vcount; i++)

	CRect                rect;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	int     vcount = vertexlist.size();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	txDesc.CPUAccessFlags = 0;

		R"(cube.obj)");

	SAFE_RELEASE(m_pTextureView);

				break;

using std::cout; using std::endl;



	Release();

	}



	if (FAILED(hr))

			index_offset += fv;

	m_VertexCount = vcount;

	}

	SAFE_RELEASE(m_pImmediateContext);



	};

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

#include <SDL.h>

		return hr;

	{

	}

	ConstantMaterial material; //物体の質感

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

				indexlist.push_back(idx.vertex_index);

	//Create Index

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

struct ConstantLightBuffer {

	{

	}

		if (!ret)

	delete[] pIList;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		exit(1);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//First we need to start up SDL, and make sure it went ok

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	Release();

	if (FAILED(hr))

CD3DTest::~CD3DTest()

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	{

	vector<Vertex> vertexlist;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pDepthStencilView);



CD3DTest::CD3DTest()

		pLevels,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	m_VertexCount = vcount;

	}

			switch (e.key.keysym.sym)

	//インデックスバッファ作成

			for (size_t v = 0; v < fv; v++)

	delete[] pVList;

 */

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_VertexCount = 0;

	D3D11_SUBRESOURCE_DATA vrData;

}

		{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

CD3DTest::~CD3DTest()

}

		return hr;

}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点レイアウト作成

	D3D_FEATURE_LEVEL level;

	// Loop over shapes

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&level,

	cbDesc.CPUAccessFlags = 0;

	m_pIndexBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//vector<WORD> index_t;

}





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>

		}

	for (int i = 0; i < vcount; i++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		R"(cube.obj)");





		SDL_Delay(1000);



	m_Viewport.TopLeftX = 0;

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	XMFLOAT4X4 view;

	SDL_DestroyRenderer(ren);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_BUFFER_DESC cbDesc;

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pRenderTargetView = NULL;

	m_pImmediateContext = NULL;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_BUFFER_DESC ibDesc;

	m_Viewport.TopLeftY = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}
	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//ビューポート設定

	//Key press surfaces constants

		return hr;

	SAFE_RELEASE(m_pDevice);

	D3D11_BUFFER_DESC vbDesc;

			{

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilTexture);

		pLevels,

	}

	//Key press surfaces constants

	for (int i = 0; i < 3; i++)

 * Lesson 1: Hello World!

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyTexture(tex);

	}

	vrData.SysMemPitch = 0;

	scDesc.SampleDesc.Quality = 0;

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	tinyobj::ObjReaderConfig reader_config;

};

	HRESULT              hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.SampleDesc.Quality = 0;



	txDesc.MipLevels = 1;

	}*/

			}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

 */

		else if (e.type == SDL_KEYDOWN)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	bool ret = tinyobj::LoadObj(

#include "DirectXManager.h"

	cbDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)



}

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//定数バッファ作成

	{

	scDesc.SampleDesc.Count = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vector<WORD> indexList;

		{



			switch (e.key.keysym.sym)



	float    farZ = 100.0f;

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

		{





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ty =

		1,





	if (m_pImmediateContext)

		1,

	m_pImmediateContext = NULL;

			}

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}



	std::string error;

	if (FAILED(hr))

	UINT offsets = 0;

	pBackBuffer->Release();

{



	//インデックスバッファ作成

	while (SDL_PollEvent(&e) != 0)

	}



	m_pTextureView = NULL;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	UINT offsets = 0;

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);




