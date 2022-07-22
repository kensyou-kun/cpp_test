				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

	ConstantMaterial material; //物体の質感

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

	txDesc.Width = rect.Width();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	};

	XMFLOAT4         ambient;  //環境光(r,g,b)

	};

			{

	UINT flags = 0;

};

	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#include <SDL.h>

		{

	vbDesc.CPUAccessFlags = 0;

		return hr;

		R"(cube.obj)");

				break;



	SDL_DestroyWindow(win);

	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	::GetClientRect(hwnd, &rect);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

#include <SDL.h>

	if (FAILED(hr))





	m_pDevice = NULL;

		{



		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	while (SDL_PollEvent(&e) != 0)



	m_Viewport.Width = (FLOAT)rect.Width();

	return hr;

	{



CD3DTest::CD3DTest()

	XMFLOAT4X4 world;

	Release();

		&m_pDevice,

}
{





	return 0;

	ConstantLightBuffer clb;

struct ConstantLightBuffer {

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SDL_DestroyTexture(tex);

				// access to vertex



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	Release();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;



		flags,

		else if (e.type == SDL_KEYDOWN)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

#ifdef _DEBUG

};



	return hr;

	{

	for (size_t s = 0; s < shapes.size(); s++)

	m_pPixelShader = NULL;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Release()



void CD3DTest::Render()

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

struct ConstantMatrixBuffer {

	XMFLOAT4 pos;               //座標(x,y,z)

	if (!reader.Warning().empty())

	SDL_DestroyTexture(tex);

	}



		KEY_PRESS_SURFACE_TOTAL



	m_pDepthStencilView = NULL;

			exit(1);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferCount = 1;

	//頂点レイアウト作成

	if (m_pImmediateContext)



				break;

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	// Loop over shapes

			case SDLK_DOWN:

	m_pDepthStencilTexture = NULL;

	tinyobj::attrib_t attrib;

	{

	{

	//First we need to start up SDL, and make sure it went ok

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	float    nearZ = 0.1f;

}

		return hr;



#ifdef _DEBUG

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			{

	m_pPixelShader = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Viewport.TopLeftX = 0;

int main(int, char**)

HRESULT CD3DTest::Create(HWND hwnd)

	m_pVertexBuffer = NULL;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.CPUAccessFlags = 0;

			}

	ibDesc.StructureByteStride = 0;

	//深度ステンシルバッファ作成

	ibDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	auto& shapes = reader.GetShapes();

	{



	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pSwapChain = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

}

	SAFE_RELEASE(m_pTextureView);

		return hr;





		{



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{

			case SDLK_UP:

		return hr;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (!reader.Warning().empty())

	cbDesc.MiscFlags = 0;

		//User requests quit

		return hr;

	dsDesc.Format = txDesc.Format;

		&m_pImmediateContext);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

			{



#include <SDL.h>

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::string imagePath = "hello.bmp";

	}

	std::vector<tinyobj::shape_t> shapes;

	{

		//User requests quit

	XMFLOAT4         eyePos;   //視点座標



		size_t index_offset = 0;  // インデントのオフセット

	delete[] pIList;

}







	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.ambient, lightAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





		return hr;

	Vertex* pVList = new Vertex[vcount];

};

		delete[] pVList;

	m_Viewport.TopLeftX = 0;



		return hr;

	SDL_DestroyWindow(win);

	return;

		R"(cube.obj)");

	if (FAILED(hr))

#include <SDL.h>

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

}

	SDL_DestroyWindow(win);

	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

	{

	//頂点レイアウト作成

struct ConstantLight {



#include <iostream>

{

	if (FAILED(hr))

	m_pDevice = NULL;

	txDesc.Height = rect.Height();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	HRESULT              hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyTexture(tex);



				break;

			for (size_t v = 0; v < fv; v++)

	irData.SysMemSlicePitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_RIGHT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;

	XMFLOAT4 specular;          //反射(r,g,b)

				indexlist.push_back(idx.vertex_index);



			case SDLK_DOWN:

		// Loop over faces(polygon)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pVertexShader = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	SDL_DestroyRenderer(ren);

				// access to vertex



	vbDesc.CPUAccessFlags = 0;

	{



	m_VertexCount = 0;

	for (int j = 0; j < icount; j++)

		size_t index_offset = 0;

	};

	{



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	UINT offsets = 0;

		return hr;

	m_pMatrixBuffer = NULL;

	{



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	UINT flags = 0;

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

		pVList[i] = vertexlist[i];

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;

	vector<WORD> indexList;



	vrData.pSysMem = &pVList[0];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ConstantMaterial material; //物体の質感

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				break;

	std::vector<tinyobj::shape_t> shapes;

		}

	if (FAILED(hr))

	m_pTextureView = NULL;

	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_LEFT,

	SDL_Quit();



		D3D11_SDK_VERSION,

		if (!ret)

		delete[] pIList;

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;

	}



	//深度ステンシルバッファ作成



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//テクスチャ読み込み

	{

			for (size_t v = 0; v < fv; v++)

/*

	Release();



	vrData.SysMemSlicePitch = 0;

		}

			{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			break;





	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pTexture);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		size_t index_offset = 0;  // インデントのオフセット

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.SampleDesc.Quality = 0;



	ibDesc.CPUAccessFlags = 0;



	return 0;

	m_pDevice = NULL;

				WORD index = idx.vertex_index;



	vector<Vertex> vertexlist;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferCount = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;











		//User presses a key

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&m_pImmediateContext);

		{

	SAFE_RELEASE(m_pTextureView);

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	{

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

			for (size_t v = 0; v < fv; v++)

int main(int, char**)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return 1;





	auto& shapes = reader.GetShapes();



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//Clean up our objects and quit

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.ambient, lightAmbient);

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pDepthStencilTexture);

		if (!reader.Error().empty())

	txDesc.CPUAccessFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

using std::cout; using std::endl;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	}

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

		&materials,

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	m_pTexture = NULL;

	vrData.pSysMem = &pVList[0];

 * Lesson 1: Hello World!

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		size_t index_offset = 0;  // インデントのオフセット

	m_pMatrixBuffer = NULL;

};

		&m_pSwapChain,

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	std::string inputfile = "test.obj";

	}*/

}

	m_VertexCount = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pDevice);



	vrData.SysMemPitch = 0;





		SDL_Delay(1000);

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	//頂点バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderPresent(ren);

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	ConstantLightBuffer clb;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			for (size_t v = 0; v < fv; v++)

	std::string inputfile = "test.obj";





	if (FAILED(hr))

		{

}

		return hr;

	ConstantMaterial material; //物体の質感

};



	}

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	}

	CRect                rect;







void CD3DTest::Render()

		{

				WORD index = idx.vertex_index;

	std::string inputfile = "test.obj";



	//インデックスバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_Delay(1000);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantMatrixBuffer {

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

	std::string imagePath = "hello.bmp";



{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4(&clb.eyePos, eye);

	float    farZ = 100.0f;

	XMFLOAT4         ambient;  //環境光(r,g,b)



		SDL_Delay(1000);

	{

	vbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User requests quit

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	scDesc.SampleDesc.Count = 1;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pTextureView = NULL;

	//vector<Vertex> vertex_t;



		&materials,

		&scDesc,

			case SDLK_DOWN:

	vector<WORD> indexList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void CD3DTest::Release()



	SDL_DestroyTexture(tex);

				break;

	D3D11_BUFFER_DESC vbDesc;

			index_offset += fv;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vector<WORD> indexList;

			}

		if (!ret)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		{

		&m_pDevice,

	for (int i = 0; i < 3; i++)





	DXGI_SWAP_CHAIN_DESC scDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	float    fov = XMConvertToRadians(20.0f);

}

	XMFLOAT4X4 projection;

	std::vector<tinyobj::material_t> materials;





			index_offset += fv;

	m_Viewport.MaxDepth = 1.0f;

	scDesc.SampleDesc.Count = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.SysMemPitch = 0;

	m_pPixelShader = NULL;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

};

	scDesc.BufferDesc.Height = rect.Height();

	for (const auto& shape : shapes)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	UINT offsets = 0;

	ConstantLight    pntLight; //点光源

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	int     vcount = vertexlist.size();

};

	m_pTexture = NULL;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{

	float    farZ = 100.0f;

{

	}

	tinyobj::ObjReaderConfig reader_config;

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;





{

	{

	txDesc.SampleDesc.Quality = 0;

			}

	for (int j = 0; j < icount; j++)

		delete[] pIList;

		{

	SAFE_RELEASE(m_pImmediateContext);



	D3D11_TEXTURE2D_DESC txDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSwapChain = NULL;

	m_pMatrixBuffer = NULL;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pDepthStencilTexture);

		size_t index_offset = 0;  // インデントのオフセット


