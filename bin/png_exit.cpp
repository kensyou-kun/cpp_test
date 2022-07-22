				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float    nearZ = 0.1f;

	//vector<Vertex> vertex_t;





	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	dsDesc.Texture2D.MipSlice = 0;

	m_pIndexBuffer = NULL;

		SDL_RenderClear(ren);



		return hr;

	for (const auto& shape : shapes)

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{



	txDesc.SampleDesc.Count = 1;

	/*

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#ifdef _DEBUG



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_Viewport.Width = (FLOAT)rect.Width();



	if (FAILED(hr))

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pLightBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pDepthStencilView);



				break;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pRenderTargetView = NULL;

	for (const auto& shape : shapes)

	m_pVertexShader = NULL;



			{

			default:

	WORD* pIList = new WORD[icount];

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	// Loop over shapes

	scDesc.BufferCount = 1;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		KEY_PRESS_SURFACE_UP,

				indexlist.push_back(idx.vertex_index);

		KEY_PRESS_SURFACE_DEFAULT,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	vector<WORD> indexList;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (!error.empty())

	SDL_DestroyRenderer(ren);

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Quit();

	for (int i = 0; i < 3; i++)





	}

		return hr;

			case SDLK_DOWN:

	enum KeyPressSurfaces

	}

 * Lesson 1: Hello World!

		return hr;

	if (FAILED(hr))

				WORD index = idx.vertex_index;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				break;

	ConstantMatrixBuffer cmb;



	irData.pSysMem = &pIList[0];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				// access to vertex

};

		return hr;

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

}

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SUBRESOURCE_DATA irData;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	int     vcount = vertexlist.size();

	//vector<Vertex> vertex_t;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	std::string imagePath = "hello.bmp";

#ifdef _DEBUG



		}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	if (FAILED(hr))

	}

				break;

	//ピクセルシェーダー生成

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	::GetClientRect(hwnd, &rect);

	m_pVertexBuffer = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))





struct ConstantMaterial {





	m_IndexCount = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    farZ = 100.0f;

	{



int main(int, char**)

	m_pTexture = NULL;

	//vector<WORD> index_t;

	XMFLOAT4X4 view;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void CD3DTest::Render()



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	CRect                rect;

	enum KeyPressSurfaces

			index_offset += num_vertices;

		return hr;

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ConstantMatrixBuffer cmb;

}

	irData.pSysMem = &pIList[0];





struct ConstantLight {

using std::cout; using std::endl;

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	for (int i = 0; i < vcount; i++)



#ifdef _DEBUG



 */

		return hr;

				WORD index = idx.vertex_index;

		SDL_RenderClear(ren);

	//定数バッファ作成

		}

		NULL,



	vector<WORD> indexList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	m_pDepthStencilView = NULL;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

HRESULT CD3DTest::Create(HWND hwnd)



{

	ConstantLightBuffer clb;

	m_pSwapChain->Present(0, 0);

	}

	tinyobj::ObjReader reader;

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pVertexShader);

	D3D11_TEXTURE2D_DESC txDesc;

			//Select surfaces based on key press



	ID3D11Texture2D* pBackBuffer;

			default:

				tinyobj::real_t tx =

	Release();



			{

	txDesc.MipLevels = 1;



		if (!reader.Error().empty())





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	WORD* pIList = new WORD[icount];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

		return hr;

{

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	return 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ConstantLight    pntLight; //点光源

	irData.SysMemPitch = 0;



		SDL_RenderPresent(ren);

	//vector<WORD> index_t;

	pBackBuffer->Release();

	m_pVertexBuffer = NULL;



	enum KeyPressSurfaces

	}

#include <SDL.h>





	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pInputLayout);



				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC cbDesc;



	XMFLOAT4         eyePos;   //視点座標

};

	m_VertexCount = vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	SDL_FreeSurface(bmp);

	SDL_Event e;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			{

		&m_pImmediateContext);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext = NULL;

		{

			index_offset += fv;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		}

	m_pIndexBuffer = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			break;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

CD3DTest::~CD3DTest()

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pTextureView = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		SDL_Delay(1000);





	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pTextureView);

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		1,

			case SDLK_UP:

	scDesc.BufferDesc.Height = rect.Height();

	std::string imagePath = "hello.bmp";

		pVList[i] = vertexlist[i];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&m_pImmediateContext);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 projection;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			index_offset += fv;



{



	{

			{

	//Vertex* pVList = new Vertex[vcount];







	if (FAILED(hr))

		{

	ibDesc.CPUAccessFlags = 0;





		KEY_PRESS_SURFACE_LEFT,

		if (!reader.Error().empty())

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



};

	}

	float    fov = XMConvertToRadians(20.0f);



	D3D11_TEXTURE2D_DESC txDesc;





	dsDesc.Format = txDesc.Format;

		&m_pImmediateContext);



	txDesc.SampleDesc.Quality = 0;

	txDesc.CPUAccessFlags = 0;

#include <SDL.h>

	}

				vertex.push_back(vertex_tmp);

	ConstantLight    pntLight; //点光源

		NULL,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	SAFE_RELEASE(m_pTexture);





	ConstantLight    pntLight; //点光源

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_FreeSurface(suf);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				vertex.push_back(vertex_tmp);

		SDL_RenderPresent(ren);



		pLevels,



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (!error.empty())

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	CRect                rect;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	irData.pSysMem = &pIList[0];

	D3D11_BUFFER_DESC ibDesc;

CD3DTest::CD3DTest()

	delete[] pIList;

	SAFE_RELEASE(m_pLightBuffer);

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}
	for (const auto& shape : shapes)





}

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

		KEY_PRESS_SURFACE_DOWN,

#include <iostream>



	std::string imagePath = "hello.bmp";





	m_pSwapChain = NULL;

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	m_pIndexBuffer = NULL;

}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



void CD3DTest::Render()

	}

	auto& shapes = reader.GetShapes();

		return hr;

	cbDesc.StructureByteStride = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pSwapChain->Present(0, 0);

	if (!reader.Warning().empty())

#include <iostream>

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pRenderTargetView);

		{



		return hr;

int SEGMENT = 36;

	for (int i = 0; i < 3; i++)

int SEGMENT = 36;

	WORD   icount = indexList.size();



	return;

	delete[] pIList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

			// Loop over vertices in the face.

	{

	SDL_FreeSurface(bmp);

void CD3DTest::Render()

	m_VertexCount = vcount;

	if (FAILED(hr))

	SDL_FreeSurface(bmp);



	UINT strides = sizeof(Vertex);

	bool ret = tinyobj::LoadObj(

	HRESULT              hr;

	XMFLOAT4X4 view;

		}

			index_offset += num_vertices;

		D3D_DRIVER_TYPE_HARDWARE,

	//Clean up our objects and quit

	pBackBuffer->Release();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);







	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	std::vector<tinyobj::shape_t> shapes;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			}

HRESULT CD3DTest::Create(HWND hwnd)



	XMFLOAT4 pos;               //座標(x,y,z)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







	//頂点シェーダー生成

		{

		delete[] pVList;





		// Loop over faces(polygon)

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pIndexBuffer = NULL;

			break;

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

			case SDLK_UP:

{

		&m_pImmediateContext);

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





			{



			exit(1);











	vrData.SysMemSlicePitch = 0;



int SEGMENT = 36;

		SDL_Delay(1000);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

struct ConstantLight {



	SDL_DestroyTexture(tex);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		if (e.type == SDL_QUIT)





		D3D_DRIVER_TYPE_HARDWARE,

		}





			}



	{

	vector<Vertex> vertexlist;

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		delete[] pIList;





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

		}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		pIList[j] = indexList[j];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	// Loop over shapes





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_RIGHT:

			{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&materials,

	//Key press surfaces constants

	return 0;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderPresent(ren);

	vrData.pSysMem = &pVList[0];

	m_pInputLayout = NULL;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))



{

};

	SAFE_RELEASE(m_pTextureView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&attrib,

	if (!reader.Warning().empty())

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pPixelShader);

	}

	D3D11_BUFFER_DESC cbDesc;

		delete[] pVList;

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	LoadObj(vertexlist, indexList);

	ConstantMaterial material; //物体の質感

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{

	ibDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.OutputWindow = hwnd;

#include <iostream>



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



{

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pTextureView);

	ibDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

HRESULT CD3DTest::Create(HWND hwnd)

	D3D11_SUBRESOURCE_DATA vrData;



	SDL_DestroyWindow(win);

	UINT flags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return;

				vertex.push_back(vertex_tmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&level,



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//ピクセルシェーダー生成

	m_pIndexBuffer = NULL;

		NULL,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SAFE_RELEASE(m_pIndexBuffer);





	SDL_DestroyRenderer(ren);





	m_Angle += XMConvertToRadians(1.0f);



	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

}

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pMatrixBuffer);





	SAFE_RELEASE(m_pSwapChain);

 * Lesson 1: Hello World!

	// Loop over shapes

	vector<WORD> indexList;

	tinyobj::ObjReaderConfig reader_config;

int SEGMENT = 36;



	m_Viewport.MaxDepth = 1.0f;

		delete[] pVList;

	//頂点バッファ作成

		&level,



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.pSysMem = &pVList[0];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vbDesc.StructureByteStride = 0;

		}



		delete[] pIList;

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_VertexCount = vcount;

	while (SDL_PollEvent(&e) != 0)

	return 0;

	m_Viewport.TopLeftY = 0;

#include <SDL.h>





	float    farZ = 100.0f;





	{





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pLightBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		m_pImmediateContext->ClearState();

		m_pImmediateContext->ClearState();

	m_Viewport.TopLeftX = 0;

{

	ID3D11Texture2D* pBackBuffer;

			default:

			case SDLK_LEFT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		m_pImmediateContext->ClearState();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pMatrixBuffer);

			// Loop over vertices in the face.

	//定数バッファ作成

		KEY_PRESS_SURFACE_DOWN,





	SAFE_RELEASE(m_pRenderTargetView);

#include <SDL.h>

				// access to vertex

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	SAFE_RELEASE(m_pDepthStencilTexture);

	}

	float    farZ = 100.0f;

				break;

	float    farZ = 100.0f;

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



	//vector<WORD> index_t;

/*

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.StructureByteStride = 0;

		R"(cube.obj)");

				WORD index = idx.vertex_index;

	txDesc.Width = rect.Width();



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext = NULL;

				break;

	m_VertexCount = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	//頂点シェーダー生成

	{

	pBackBuffer->Release();

	ConstantMatrixBuffer cmb;

	}

			case SDLK_LEFT:

			index_offset += num_vertices;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pSampler = NULL;

			default:

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pImmediateContext);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



			//Select surfaces based on key press

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			}

	vbDesc.StructureByteStride = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pIndexBuffer = NULL;



{



	scDesc.OutputWindow = hwnd;

	auto& shapes = reader.GetShapes();



		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	vrData.SysMemSlicePitch = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.MiscFlags = 0;

		return hr;

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4X4 world;



			case SDLK_DOWN:

	SDL_FreeSurface(bmp);

			default:

	XMFLOAT4 ambient;           //環境(r,g,b)

}

	m_pVertexShader = NULL;

 * Lesson 1: Hello World!

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	vrData.SysMemPitch = 0;

};

	SAFE_RELEASE(m_pVertexBuffer);

void CD3DTest::Release()

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_RIGHT,

		delete[] pVList;

	return 0;

	return 0;



	}

	SDL_DestroyTexture(tex);

		else if (e.type == SDL_KEYDOWN)

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

	//頂点バッファ作成



	vrData.pSysMem = &pVList[0];

	pBackBuffer->Release();

}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

};

	vector<WORD> indexList;

	D3D11_SAMPLER_DESC smpDesc;





	ID3D11Texture2D* pBackBuffer;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyRenderer(ren);



		{

			{



		&attrib,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	return;

		exit(1);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return 1;







{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;


