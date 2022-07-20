		&level,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	scDesc.SampleDesc.Count = 1;

			index_offset += fv;



	dsDesc.Format = txDesc.Format;

			index_offset += fv;



	ConstantMaterial material; //物体の質感

		&m_pImmediateContext);

	}





	UINT strides = sizeof(Vertex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	float    nearZ = 0.1f;



	if (FAILED(hr))

	m_pSwapChain = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&error,



	{



	ConstantMaterial material; //物体の質感



		return hr;

		return hr;





	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			{

	SDL_Quit();

	SDL_DestroyTexture(tex);

	float    fov = XMConvertToRadians(20.0f);

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{



	m_pMatrixBuffer = NULL;

			exit(1);

	ibDesc.CPUAccessFlags = 0;

	//ピクセルシェーダー生成

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pImmediateContext);



	for (size_t s = 0; s < shapes.size(); s++)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vrData.SysMemPitch = 0;

	//ピクセルシェーダー生成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#ifdef _DEBUG

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

void CD3DTest::Release()

		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#include <SDL.h>



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	//Clean up our objects and quit

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;







	if (!reader.Warning().empty())

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

#include <SDL.h>

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))



	tinyobj::attrib_t attrib;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Quit();





	SAFE_RELEASE(m_pIndexBuffer);





	//深度ステンシルバッファ作成

		SDL_Delay(1000);

	}*/

	delete[] pVList;

#include <iostream>

	float    farZ = 100.0f;

		{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;







	m_IndexCount = 0;



				break;

		KEY_PRESS_SURFACE_DOWN,



				tinyobj::real_t tx =

	float    nearZ = 0.1f;

		&m_pDevice,





	//vector<WORD> index_t;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



CD3DTest::~CD3DTest()

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	ConstantLightBuffer clb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

}
	}



	vrData.pSysMem = &pVList[0];







 * Lesson 1: Hello World!

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





#ifdef _DEBUG

	scDesc.BufferDesc.Width = rect.Width();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    nearZ = 0.1f;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_IndexCount = 0;

	SAFE_RELEASE(m_pSampler);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pVList[i] = vertexlist[i];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.SampleDesc.Count = 1;

	}



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

				// access to vertex

	std::string error;

	SDL_DestroyRenderer(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{

	ibDesc.MiscFlags = 0;





	{

		&m_pImmediateContext);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	return 0;

#include <iostream>

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	}

	XMFLOAT4X4 world;

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		&shapes,

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}



	txDesc.ArraySize = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//頂点レイアウト作成



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			}

	float    nearZ = 0.1f;

{

	XMFLOAT4X4 world;

			{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			exit(1);

	m_pSwapChain->Present(0, 0);

}

	irData.SysMemPitch = 0;



	D3D11_BUFFER_DESC cbDesc;

		&error,

		{

{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.ArraySize = 1;

	XMFLOAT4 pos;               //座標(x,y,z)

CD3DTest::~CD3DTest()

	{

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	}

	{

	auto& shapes = reader.GetShapes();

	pBackBuffer->Release();

		{



	XMFLOAT4X4 world;

		return hr;

CD3DTest::~CD3DTest()

	m_Viewport.Height = (FLOAT)rect.Height();

		&m_pSwapChain,

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		pIList[j] = indexList[j];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//定数バッファ作成

	return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				indexlist.push_back(index);

			for (size_t v = 0; v < num_vertices; v++)

		D3D_DRIVER_TYPE_HARDWARE,

{

CD3DTest::~CD3DTest()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

}
	CRect                rect;

				break;

		&attrib,



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (!reader.ParseFromFile(inputfile, reader_config))

	UINT flags = 0;

	SDL_DestroyRenderer(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pVertexShader);

			int num_vertices = shape.mesh.num_face_vertices[f];

				break;

	m_Viewport.TopLeftX = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}


	{

	auto& shapes = reader.GetShapes();

				break;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Quit();

		return hr;

	//頂点バッファ作成

	ConstantMatrixBuffer cmb;

	::GetClientRect(hwnd, &rect);

	//Clean up our objects and quit

		delete[] pIList;

#include <SDL.h>

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	auto& materials = reader.GetMaterials();

	{

struct ConstantLightBuffer {

	while (SDL_PollEvent(&e) != 0)

	}

		pVList[i] = vertexlist[i];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#define TINYOBJLOADER_IMPLEMENTATION

{

	//ビューポート設定

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_Viewport.Height = (FLOAT)rect.Height();

	return 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pLightBuffer = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_Delay(1000);

	enum KeyPressSurfaces

		D3D_DRIVER_TYPE_HARDWARE,

	//頂点レイアウト作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

	{

		1,

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		}

	SAFE_RELEASE(m_pDevice);

	m_pSampler = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		delete[] pVList;

	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	//vector<WORD> index_t;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pTextureView);







	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_RIGHT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		//User presses a key

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	m_Viewport.MinDepth = 0.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				// access to vertex



		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		delete[] pVList;

	XMFLOAT4         ambient;  //環境光(r,g,b)



			break;

#include <SDL.h>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

		}

	UINT flags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{



	m_pPixelShader = NULL;



			break;

		R"(cube.obj)");

			for (size_t v = 0; v < num_vertices; v++)

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_RIGHT,



	}*/

	scDesc.BufferDesc.Width = rect.Width();

			index_offset += num_vertices;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		m_pImmediateContext->ClearState();

struct ConstantMatrixBuffer {

				vertex.push_back(vertex_tmp);

		}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (m_pImmediateContext)

	m_IndexCount = 0;

	CRect                rect;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		pIList[j] = indexList[j];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&error,

			{

	//テクスチャ読み込み



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	UINT offsets = 0;

		return hr;

}

		&scDesc,





	m_pDepthStencilView = NULL;

	UINT flags = 0;





	vbDesc.StructureByteStride = 0;





void CD3DTest::Render()

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	for (int j = 0; j < icount; j++)

			{

	SDL_DestroyTexture(tex);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	{

	if (FAILED(hr))

	};

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDevice = NULL;

	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_RIGHT,

		delete[] pVList;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

		{



	//テクスチャ読み込み

void CD3DTest::Render()



		return 1;

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Quit();

	m_pIndexBuffer = NULL;

			//Select surfaces based on key press

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.SampleDesc.Quality = 0;

	D3D11_TEXTURE2D_DESC txDesc;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemPitch = 0;







	Vertex* pVList = new Vertex[vcount];

				vertex.push_back(vertex_tmp);

	for (const auto& shape : shapes)

		NULL,







	txDesc.MiscFlags = 0;



	int     vcount = vertexlist.size();

}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	enum KeyPressSurfaces

	txDesc.CPUAccessFlags = 0;



		return 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		cout << "SDL_INIT_ERROR" << endl;









		&error,

#include <SDL.h>

	XMStoreFloat4(&clb.eyePos, eye);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			default:

#include <SDL.h>

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



			index_offset += num_vertices;



			//Select surfaces based on key press



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	D3D11_BUFFER_DESC vbDesc;

	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_DEFAULT,



			case SDLK_DOWN:

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#include "DirectXManager.h"

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.StructureByteStride = 0;

		&attrib,

				indexlist.push_back(idx.vertex_index);

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))





	cbDesc.CPUAccessFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		SDL_RenderPresent(ren);

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}*/

}

	enum KeyPressSurfaces

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

	{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

int main(int, char**)

}

int SEGMENT = 36;



	m_VertexCount = 0;



	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t ty =

				break;

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.ArraySize = 1;

struct ConstantLight {

	m_pImmediateContext = NULL;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_LEFT:

	{

};



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Event e;

	/*

#include <SDL.h>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	tinyobj::attrib_t attrib;

			}



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pIndexBuffer);

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		}

	XMStoreFloat4(&clb.eyePos, eye);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	std::string inputfile = "test.obj";

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pInputLayout);

	{



		m_pImmediateContext->ClearState();

		{

	scDesc.OutputWindow = hwnd;



	if (FAILED(hr))



	scDesc.BufferDesc.Height = rect.Height();



	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	{

	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4X4 world;

		pLevels,



	D3D_FEATURE_LEVEL level;

		cout << "SDL_INIT_ERROR" << endl;

	m_pDepthStencilView = NULL;

	}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4         ambient;  //環境光(r,g,b)

			index_offset += num_vertices;

	Release();

		}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pVertexBuffer = NULL;

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		pLevels,

	m_pDevice = NULL;

	SDL_DestroyRenderer(ren);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			}

};

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pDevice);





	ID3D11Texture2D* pBackBuffer;

	m_IndexCount = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemSlicePitch = 0;

	UINT offsets = 0;

		size_t index_offset = 0;

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	LoadObj(vertexlist, indexList);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		flags,



			{

	scDesc.BufferDesc.Height = rect.Height();

	m_Angle += XMConvertToRadians(1.0f);



	SAFE_RELEASE(m_pTextureView);

			case SDLK_RIGHT:



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

	HRESULT              hr;

	m_pMatrixBuffer = NULL;

	{





	m_pVertexBuffer = NULL;

	scDesc.BufferDesc.Width = rect.Width();

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_Delay(1000);

		R"(cube.obj)");

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		return hr;



	if (FAILED(hr))

}



	cbDesc.CPUAccessFlags = 0;







	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;



};

	while (SDL_PollEvent(&e) != 0)

	SDL_DestroyWindow(win);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	std::string inputfile = "test.obj";

	cbDesc.MiscFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pMatrixBuffer = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			for (size_t v = 0; v < fv; v++)

#include "DirectXManager.h"

}

			index_offset += num_vertices;

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	WORD* pIList = new WORD[icount];

	vector<WORD> indexList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Angle += XMConvertToRadians(1.0f);

		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;



	m_IndexCount = icount;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	//頂点バッファ作成

};

	//vector<WORD> index_t;

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Quality = 0;

}

	vbDesc.CPUAccessFlags = 0;

		pVList[i] = vertexlist[i];

	//頂点レイアウト作成

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	m_Viewport.Width = (FLOAT)rect.Width();



	SAFE_RELEASE(m_pPixelShader);

	CRect                rect;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	auto& shapes = reader.GetShapes();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

void CD3DTest::Render()

}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

			{

	vrData.SysMemPitch = 0;

		&m_pSwapChain,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	XMFLOAT4X4 view;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

	{

	m_Viewport.TopLeftY = 0;





	//Clean up our objects and quit



	cbDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	float    nearZ = 0.1f;

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

{





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t tx =

	Vertex* pVList = new Vertex[vcount];

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&materials,

	for (size_t s = 0; s < shapes.size(); s++)

	Vertex* pVList = new Vertex[vcount];

	//インデックスバッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pDepthStencilView = NULL;

	}

		{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		if (e.type == SDL_QUIT)

int main(int, char**)



	return hr;

	SAFE_RELEASE(m_pPixelShader);

	m_pDepthStencilTexture = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL

		{

		pIList[j] = indexList[j];

	SDL_FreeSurface(suf);

	{

	ConstantMatrixBuffer cmb;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				indexlist.push_back(idx.vertex_index);

				WORD index = idx.vertex_index;

	//頂点シェーダー生成

	{

HRESULT CD3DTest::Create(HWND hwnd)

	tinyobj::ObjReaderConfig reader_config;



	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;

		pVList[i] = vertexlist[i];

	cbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pImmediateContext);

	{

	if (FAILED(hr))

		}

	XMFLOAT4 specular;          //反射(r,g,b)



	bool ret = tinyobj::LoadObj(

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

};

			int num_vertices = shape.mesh.num_face_vertices[f];

	bool ret = tinyobj::LoadObj(

			case SDLK_RIGHT:

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	Release();



	WORD* pIList = new WORD[icount];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pDepthStencilTexture = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	m_pVertexBuffer = NULL;

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		NULL,

	irData.SysMemPitch = 0;

	cbDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pRenderTargetView = NULL;

	SDL_DestroyRenderer(ren);



}

	if (FAILED(hr))



			switch (e.key.keysym.sym)

	cbDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;

	SDL_DestroyWindow(win);

	}



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

#include "DirectXManager.h"



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	SAFE_RELEASE(m_pSwapChain);

		size_t index_offset = 0;  // インデントのオフセット



		size_t index_offset = 0;  // インデントのオフセット



	LoadObj(vertexlist, indexList);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	WORD* pIList = new WORD[icount];

	m_pSwapChain->Present(0, 0);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	cbDesc.MiscFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	std::string inputfile = "test.obj";



	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pImmediateContext);

#include "DirectXManager.h"

			switch (e.key.keysym.sym)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	reader_config.mtl_search_path = "./"; // Path to material files



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



struct ConstantLightBuffer {

	ConstantMatrixBuffer cmb;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pDepthStencilView = NULL;

	SDL_Quit();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		}

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	delete[] pIList;



	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





{

			{

	SDL_FreeSurface(suf);

		}

	m_VertexCount = vcount;

CD3DTest::CD3DTest()

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Viewport.TopLeftY = 0;

	}





	delete[] pIList;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	::GetClientRect(hwnd, &rect);

}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.TopLeftX = 0;



			{



	enum KeyPressSurfaces

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	std::string error;

	SDL_DestroyWindow(win);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	return 0;

	{





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pVertexShader = NULL;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	tinyobj::attrib_t attrib;

			int num_vertices = shape.mesh.num_face_vertices[f];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.CPUAccessFlags = 0;

	//Key press surfaces constants

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pVertexShader);

#include <SDL.h>

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}
	}*/

	XMFLOAT4X4 view;

/*

	//頂点バッファ作成

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_VertexCount = vcount;

	CRect                rect;

	cbDesc.StructureByteStride = 0;

		return hr;

	//vector<WORD> index_t;

CD3DTest::~CD3DTest()

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

}

		KEY_PRESS_SURFACE_DOWN,



	SAFE_RELEASE(m_pTextureView);

	scDesc.BufferCount = 1;





	if (FAILED(hr))

		return hr;

 */

};

	//vector<WORD> index_t;







	{

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyRenderer(ren);

}

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pDevice);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&level,

	std::vector<tinyobj::material_t> materials;

	//Create Index

	{

	WORD* pIList = new WORD[icount];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferCount = 1;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include "DirectXManager.h"

	scDesc.Windowed = TRUE;



		}

	delete[] pIList;

	m_pDepthStencilView = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pPixelShader);





		{

	UINT offsets = 0;

	m_pLightBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4X4 view;

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

	for (int i = 0; i < vcount; i++)

	m_VertexCount = vcount;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

	{

	SAFE_RELEASE(m_pPixelShader);

		&m_pImmediateContext);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

int main(int, char**)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

}

	{

	//頂点シェーダー生成



};



 * Lesson 1: Hello World!



	//定数バッファ作成

		flags,

	if (FAILED(hr))





	m_Viewport.Height = (FLOAT)rect.Height();

	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t tx =

struct ConstantLightBuffer {



}
	//First we need to start up SDL, and make sure it went ok

		if (!ret)

	txDesc.SampleDesc.Quality = 0;

		}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	}*/

			{

	scDesc.SampleDesc.Quality = 0;

using std::cout; using std::endl;



				indexlist.push_back(idx.vertex_index);

	std::string error;

	return;

	m_Viewport.MinDepth = 0.0f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

				break;

{

struct ConstantMaterial {



		return hr;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ZeroMemory(&txDesc, sizeof(txDesc));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4X4 projection;

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.CPUAccessFlags = 0;

			}

	{

#include <SDL.h>

	CRect                rect;

		R"(cube.obj)");

	Vertex* pVList = new Vertex[vcount];

	ibDesc.CPUAccessFlags = 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	CRect                rect;



	m_pVertexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Quit();

	D3D11_SUBRESOURCE_DATA irData;



		return hr;

};

	m_pInputLayout = NULL;

	return hr;

	D3D11_BUFFER_DESC vbDesc;

		return hr;

		R"(cube.obj)");

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	}



	cbDesc.StructureByteStride = 0;

	SDL_Quit();



	m_Viewport.Width = (FLOAT)rect.Width();

	ConstantLightBuffer clb;



		KEY_PRESS_SURFACE_DOWN,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	::GetClientRect(hwnd, &rect);

#ifdef _DEBUG

	SAFE_RELEASE(m_pIndexBuffer);



	txDesc.Width = rect.Width();

				break;

	XMStoreFloat4(&clb.eyePos, eye);



	return 0;

		pLevels,

			{



	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;

			exit(1);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//インデックスバッファ作成

	auto& attrib = reader.GetAttrib();

	//頂点シェーダー生成

			}

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	return hr;



		delete[] pIList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (!reader.ParseFromFile(inputfile, reader_config))



	XMFLOAT4 pos;               //座標(x,y,z)



	cbDesc.CPUAccessFlags = 0;

	//頂点バッファ作成

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

int main(int, char**)



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	::GetClientRect(hwnd, &rect);

		flags,

	SDL_DestroyWindow(win);

	/*

}


	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include "DirectXManager.h"

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ConstantMatrixBuffer cmb;

	if (!error.empty())



	if (m_pImmediateContext)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	bool ret = tinyobj::LoadObj(



		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.TopLeftY = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	return;

	SAFE_RELEASE(m_pVertexBuffer);

		pVList[i] = vertexlist[i];

	UINT strides = sizeof(Vertex);

			{

	vrData.pSysMem = &pVList[0];

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pIndexBuffer);

#include "DirectXManager.h"

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyTexture(tex);

			case SDLK_LEFT:

	SAFE_RELEASE(m_pVertexBuffer);

		}

		KEY_PRESS_SURFACE_DEFAULT,



	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

				break;

	XMFLOAT4         eyePos;   //視点座標

	irData.SysMemPitch = 0;

	m_pVertexBuffer = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

		m_pImmediateContext->ClearState();

		R"(cube.obj)");

	SDL_DestroyRenderer(ren);

				break;

	float    farZ = 100.0f;

		SDL_RenderPresent(ren);



};





void CD3DTest::Render()

	for (int i = 0; i < vcount; i++)

	std::string imagePath = "hello.bmp";



	scDesc.BufferDesc.Height = rect.Height();

	//ピクセルシェーダー生成





	//ピクセルシェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

		NULL,

		SDL_Delay(1000);



	SDL_DestroyTexture(tex);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{

	XMFLOAT4X4 projection;



HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		cout << "SDL_INIT_ERROR" << endl;



	txDesc.Height = rect.Height();

	SDL_FreeSurface(suf);

	m_pSampler = NULL;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

		}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	while (SDL_PollEvent(&e) != 0)

	m_pInputLayout = NULL;

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4X4 world;

			case SDLK_RIGHT:



	m_pVertexShader = NULL;

		return hr;



				break;

	//テクスチャ読み込み



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pSwapChain = NULL;

	//Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点バッファ作成



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	UINT strides = sizeof(Vertex);

		return hr;

	//頂点レイアウト作成

	scDesc.Windowed = TRUE;

		&attrib,

	ConstantMatrixBuffer cmb;



		if (!reader.Error().empty())

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&scDesc,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



			index_offset += num_vertices;

	ConstantLightBuffer clb;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

struct ConstantLightBuffer {

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//Clean up our objects and quit

		}



	vrData.SysMemPitch = 0;

	ConstantLightBuffer clb;

		&shapes,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pVertexShader);

};

	m_pInputLayout = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(idx.vertex_index);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))



	Release();

	txDesc.MiscFlags = 0;

	tinyobj::ObjReaderConfig reader_config;

		if (!ret)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		flags,

		SDL_RenderPresent(ren);

	//インデックスバッファ作成

struct ConstantLightBuffer {

	m_pImmediateContext = NULL;

		if (!reader.Error().empty())

	m_pVertexShader = NULL;

	D3D11_BUFFER_DESC vbDesc;

	for (const auto& shape : shapes)

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;

			default:

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = 0;

	XMFLOAT4X4 view;

struct ConstantMaterial {

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderClear(ren);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

 * Lesson 1: Hello World!



	ConstantMatrixBuffer cmb;

	}

		&attrib,

	SAFE_RELEASE(m_pTexture);

	SDL_DestroyTexture(tex);

	//ビューポート設定

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	XMStoreFloat4(&clb.eyePos, eye);



	for (const auto& shape : shapes)

	//ビューポート設定

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

	for (const auto& shape : shapes)

#ifdef _DEBUG

	}

	m_Viewport.TopLeftY = 0;

using std::cout; using std::endl;

	if (FAILED(hr))





	scDesc.SampleDesc.Quality = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		cout << "SDL_INIT_ERROR" << endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



{

	for (size_t s = 0; s < shapes.size(); s++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	CRect                rect;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			index_offset += fv;

}


	irData.SysMemSlicePitch = 0;

/*

	return;

};

	reader_config.mtl_search_path = "./"; // Path to material files

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

{

CD3DTest::CD3DTest()

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_DestroyWindow(win);

	if (FAILED(hr))





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;





		return hr;

		KEY_PRESS_SURFACE_UP,

	//頂点バッファ作成

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_DOWN,

	//vector<WORD> index_t;

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



}


	std::vector<tinyobj::shape_t> shapes;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	}*/

		R"(cube.obj)");

		return hr;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	irData.SysMemSlicePitch = 0;

	txDesc.Height = rect.Height();



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))



	//Vertex* pVList = new Vertex[vcount];

				// access to vertex

{

	XMFLOAT4 pos;               //座標(x,y,z)

		KEY_PRESS_SURFACE_LEFT,

	vrData.SysMemPitch = 0;



		SDL_Delay(1000);

	txDesc.Height = rect.Height();



		1,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.CPUAccessFlags = 0;





	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	HRESULT              hr;

	//vector<Vertex> vertex_t;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

CD3DTest::CD3DTest()

				tinyobj::real_t ty =



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(bmp);

	tinyobj::attrib_t attrib;



	dsDesc.Texture2D.MipSlice = 0;



#include "DirectXManager.h"

	if (!reader.Warning().empty())

struct ConstantMatrixBuffer {



		return hr;



	delete[] pVList;



	m_pVertexBuffer = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.ArraySize = 1;

	D3D11_BUFFER_DESC vbDesc;

	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantMatrixBuffer {



}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyTexture(tex);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pSampler);

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};

	}

	m_pSwapChain->Present(0, 0);

		{

	UINT flags = 0;

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//Create Index

	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

	}

	ibDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		cout << "SDL_INIT_ERROR" << endl;

		NULL,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	{

			{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pSwapChain->Present(0, 0);





	scDesc.SampleDesc.Count = 1;

	m_Viewport.TopLeftY = 0;

	auto& materials = reader.GetMaterials();

				break;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	Release();





	irData.pSysMem = &pIList[0];

{

				tinyobj::real_t ty =



	{

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

		NULL,

				// access to vertex

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pTextureView);

	while (SDL_PollEvent(&e) != 0)

	//vector<WORD> index_t;

	XMFLOAT4X4 view;

	if (FAILED(hr))

		&m_pSwapChain,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	txDesc.Height = rect.Height();

		flags,



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vector<Vertex> vertexlist;



	//頂点バッファ作成

	m_Viewport.TopLeftY = 0;

	//ピクセルシェーダー生成

	m_Viewport.TopLeftY = 0;

	m_pDevice = NULL;

	txDesc.SampleDesc.Quality = 0;

	// Loop over shapes

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.MipLevels = 1;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDepthStencilTexture);

	CRect                rect;



		return 1;

	}

	WORD* pIList = new WORD[icount];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	// Loop over shapes

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Key press surfaces constants



	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		return hr;

	if (FAILED(hr))

	}

	XMFLOAT4         eyePos;   //視点座標

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    fov = XMConvertToRadians(20.0f);

	pBackBuffer->Release();





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

 */

			case SDLK_RIGHT:

	DXGI_SWAP_CHAIN_DESC scDesc;

	dsDesc.Format = txDesc.Format;

	return 0;

}



			case SDLK_UP:

		{

	while (SDL_PollEvent(&e) != 0)

	dsDesc.Texture2D.MipSlice = 0;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Event e;

	txDesc.SampleDesc.Count = 1;

	irData.pSysMem = &pIList[0];

		return hr;



		SDL_RenderPresent(ren);

		return hr;

	SDL_FreeSurface(bmp);

	m_pVertexBuffer = NULL;

		return hr;

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pVertexShader);

	}

	auto& materials = reader.GetMaterials();

		}

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.SampleDesc.Count = 1;

		}

	//Key press surfaces constants

#ifdef _DEBUG



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

		}

		delete[] pIList;

	//vector<WORD> index_t;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

/*

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



using std::cout; using std::endl;

	cbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;

			case SDLK_LEFT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

		pVList[i] = vertexlist[i];

	for (int i = 0; i < vcount; i++)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pVList[i] = vertexlist[i];

				indexlist.push_back(idx.vertex_index);

	delete[] pVList;





	//Vertex* pVList = new Vertex[vcount];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//Vertex* pVList = new Vertex[vcount];

	Vertex* pVList = new Vertex[vcount];

	{







	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	irData.pSysMem = &pIList[0];



		return hr;

	scDesc.Windowed = TRUE;



			case SDLK_DOWN:

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

	ConstantMatrixBuffer cmb;

	m_pRenderTargetView = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

{

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

	std::string inputfile = "test.obj";

	int     vcount = vertexlist.size();

	m_pPixelShader = NULL;



	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 ambient;           //環境(r,g,b)



		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

		pLevels,



	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

struct ConstantMatrixBuffer {



	XMFLOAT4         ambient;  //環境光(r,g,b)

				break;

		}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	Release();

	tinyobj::attrib_t attrib;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}

				indexlist.push_back(idx.vertex_index);

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	txDesc.Height = rect.Height();

	//ビューポート設定



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

}

	scDesc.BufferDesc.Width = rect.Width();

		return hr;



}

	SAFE_RELEASE(m_pTexture);

		&m_pSwapChain,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC vbDesc;

				vertex.push_back(vertex_tmp);

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t ty =





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//頂点バッファ作成



				WORD index = idx.vertex_index;

	m_IndexCount = 0;

				vertex.push_back(vertex_tmp);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	enum KeyPressSurfaces

			{



		{

	enum KeyPressSurfaces

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pIndexBuffer);

		}

	Release();

	//Key press surfaces constants

	bool ret = tinyobj::LoadObj(

			for (size_t v = 0; v < fv; v++)

	tinyobj::attrib_t attrib;

#define TINYOBJLOADER_IMPLEMENTATION

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pImmediateContext);

#include <iostream>

		SDL_Delay(1000);

		&attrib,

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.MiscFlags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

}

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	m_pRenderTargetView = NULL;

	XMFLOAT4X4 projection;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();





	}





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pDepthStencilView = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	UINT strides = sizeof(Vertex);

{

	vrData.SysMemPitch = 0;





	m_pRenderTargetView = NULL;

	m_Viewport.TopLeftY = 0;





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		flags,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	float    farZ = 100.0f;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		return hr;

		return hr;

	ConstantMatrixBuffer cmb;



				break;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Vertex* pVList = new Vertex[vcount];

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 specular;          //反射(r,g,b)

			case SDLK_RIGHT:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = vcount;

	ConstantMaterial material; //物体の質感



	if (!reader.Warning().empty())

int main(int, char**)

}

		&attrib,





	SAFE_RELEASE(m_pDevice);

	//テクスチャ読み込み

	SDL_DestroyTexture(tex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





		&m_pDevice,

	m_Angle += XMConvertToRadians(1.0f);

	}

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				break;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

		KEY_PRESS_SURFACE_UP,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.CPUAccessFlags = 0;

		}

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.Windowed = TRUE;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&shapes,

	tinyobj::ObjReader reader;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

			exit(1);

	txDesc.ArraySize = 1;

	auto& shapes = reader.GetShapes();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		pIList[j] = indexList[j];

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

		return hr;



	{



	while (SDL_PollEvent(&e) != 0)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	ibDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_DestroyTexture(tex);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.OutputWindow = hwnd;

	if (!reader.Warning().empty())

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	delete[] pIList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (!reader.ParseFromFile(inputfile, reader_config))

		&level,

			}

		else if (e.type == SDL_KEYDOWN)



 */

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



};

	if (FAILED(hr))



	m_Viewport.Height = (FLOAT)rect.Height();

		{



	m_pLightBuffer = NULL;

		{

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 projection;

/*

		//User requests quit

	XMFLOAT4 ambient;           //環境(r,g,b)

		else if (e.type == SDL_KEYDOWN)

		//User requests quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

struct ConstantLight {



	txDesc.MipLevels = 1;

	SDL_DestroyRenderer(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.SysMemSlicePitch = 0;

struct ConstantMatrixBuffer {

	if (!error.empty())

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{

			break;



			case SDLK_LEFT:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

struct ConstantMaterial {

	D3D11_BUFFER_DESC ibDesc;



			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pSwapChain = NULL;





	m_pDevice = NULL;





				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pLightBuffer);



	txDesc.ArraySize = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			}

	delete[] pVList;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

struct ConstantMaterial {

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			}

	SDL_DestroyTexture(tex);





				indexlist.push_back(index);

	irData.SysMemSlicePitch = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ID3D11Texture2D* pBackBuffer;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	m_pLightBuffer = NULL;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				vertex.push_back(vertex_tmp);

	cbDesc.MiscFlags = 0;

	enum KeyPressSurfaces

	UINT flags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

		}

		return hr;

	ibDesc.CPUAccessFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pDevice = NULL;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pTextureView);

	}

	SAFE_RELEASE(m_pSwapChain);

	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (e.type == SDL_QUIT)

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		if (e.type == SDL_QUIT)

	ibDesc.StructureByteStride = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	WORD* pIList = new WORD[icount];



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	float    nearZ = 0.1f;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_UP:

	vbDesc.CPUAccessFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pVertexShader = NULL;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				// access to vertex

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4X4 projection;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	irData.SysMemPitch = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

	irData.pSysMem = &pIList[0];

			case SDLK_UP:

		size_t index_offset = 0;  // インデントのオフセット

	{

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pVertexShader);

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_BUFFER_DESC cbDesc;

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	pBackBuffer->Release();

		{

	ibDesc.CPUAccessFlags = 0;

{

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_TOTAL

		&shapes,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	enum KeyPressSurfaces

	}

	SAFE_RELEASE(m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

		return hr;

		m_pImmediateContext->ClearState();

		&m_pDevice,

	scDesc.BufferDesc.Width = rect.Width();

		return hr;



	tinyobj::ObjReaderConfig reader_config;

	//ビューポート設定

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pImmediateContext);

	vbDesc.MiscFlags = 0;

		&materials,

	//深度ステンシルバッファ作成

	ConstantMaterial material; //物体の質感

{

	//頂点バッファ作成

	SAFE_RELEASE(m_pRenderTargetView);

	}

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return 1;

	float    nearZ = 0.1f;

	UINT offsets = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	tinyobj::attrib_t attrib;



	SDL_DestroyRenderer(ren);



	}



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::ObjReaderConfig reader_config;

	ID3D11Texture2D* pBackBuffer;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	float    farZ = 100.0f;

{

		exit(1);

	m_Viewport.Height = (FLOAT)rect.Height();

{

	SDL_Event e;



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//テクスチャ読み込み

	for (int i = 0; i < vcount; i++)

		R"(cube.obj)");

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.MipLevels = 1;



	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMFLOAT4X4 world;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.MaxDepth = 1.0f;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pInputLayout = NULL;

int SEGMENT = 36;

	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return 1;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string error;

	SAFE_RELEASE(m_pSwapChain);

			case SDLK_UP:

	tinyobj::ObjReader reader;

		size_t index_offset = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&scDesc,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		NULL,

	std::string error;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		if (!reader.Error().empty())

	return 0;

};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	for (int j = 0; j < icount; j++)

	//頂点バッファ作成

	std::vector<tinyobj::material_t> materials;

	UINT flags = 0;



	}

	m_Viewport.MinDepth = 0.0f;



int main(int, char**)

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pSwapChain = NULL;

			{

	}

#include <iostream>

	}

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,

	m_pDepthStencilView = NULL;

		SDL_Delay(1000);



		if (e.type == SDL_QUIT)

		return 1;

	//頂点シェーダー生成

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 */

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.StructureByteStride = 0;

		return hr;

		//User presses a key

			for (size_t v = 0; v < num_vertices; v++)



	ConstantLight    pntLight; //点光源

		return hr;

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.MiscFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		pLevels,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





			{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);



		&error,

				tinyobj::real_t ty =





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

	}

		exit(1);

	if (FAILED(hr))



	D3D_FEATURE_LEVEL level;

#include <SDL.h>

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.CPUAccessFlags = 0;





	m_pSwapChain = NULL;

	//定数バッファ作成

#include <iostream>

	D3D11_SUBRESOURCE_DATA irData;

struct ConstantMatrixBuffer {



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&m_pDevice,

		cout << "SDL_INIT_ERROR" << endl;

#include <SDL.h>



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&attrib,



	{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			break;

	}

				break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

		{

	// Loop over shapes

#ifdef _DEBUG

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&error,

				tinyobj::real_t ty =

}





	{

		return hr;

	ibDesc.StructureByteStride = 0;

				break;

	vector<WORD> indexList;



		KEY_PRESS_SURFACE_TOTAL

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	};



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferCount = 1;

	vrData.pSysMem = &pVList[0];



	D3D11_BUFFER_DESC vbDesc;

		//User requests quit



	SAFE_RELEASE(m_pVertexBuffer);



	m_pVertexShader = NULL;

		//User requests quit



	if (FAILED(hr))

		flags,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_Delay(1000);



	cbDesc.StructureByteStride = 0;

HRESULT CD3DTest::Create(HWND hwnd)





	auto& materials = reader.GetMaterials();

	UINT offsets = 0;



	{



	UINT offsets = 0;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_FreeSurface(bmp);

	ZeroMemory(&txDesc, sizeof(txDesc));

		pLevels,

	D3D11_SUBRESOURCE_DATA irData;

			break;

	float    farZ = 100.0f;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	HRESULT              hr;



				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

	}

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	{

	SDL_DestroyTexture(tex);

	WORD   icount = indexList.size();

	//ビューポート設定

		}

	ConstantMatrixBuffer cmb;

	m_pSwapChain->Present(0, 0);

	std::vector<tinyobj::material_t> materials;

	}*/

};

	SDL_DestroyRenderer(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			index_offset += fv;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);









	XMFLOAT4         eyePos;   //視点座標

{

				tinyobj::real_t ty =

	}



	m_pRenderTargetView = NULL;

			}

	//vector<Vertex> vertex_t;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{



		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	XMFLOAT4X4 view;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}

	XMStoreFloat4(&clb.ambient, lightAmbient);



	}*/

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	txDesc.MipLevels = 1;

	WORD* pIList = new WORD[icount];







	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))



	txDesc.ArraySize = 1;

	m_pTexture = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				WORD index = idx.vertex_index;

		delete[] pIList;

	XMFLOAT4X4 view;

	XMFLOAT4         eyePos;   //視点座標

}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		{



		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)





	enum KeyPressSurfaces

	hr = D3D11CreateDeviceAndSwapChain(NULL,

CD3DTest::~CD3DTest()

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	auto& attrib = reader.GetAttrib();



	if (FAILED(hr))



		KEY_PRESS_SURFACE_UP,



	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;



	WORD* pIList = new WORD[icount];



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#ifdef _DEBUG

	{

	ID3D11Texture2D* pBackBuffer;

		pLevels,

	scDesc.SampleDesc.Quality = 0;

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include <iostream>

	}

		return hr;

	vrData.SysMemSlicePitch = 0;

	//テクスチャ読み込み

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;





		{

	//深度ステンシルバッファ作成

	txDesc.Width = rect.Width();

			}





		return hr;

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

		&materials,







	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//ピクセルシェーダー生成

{



		if (!ret)

		R"(cube.obj)");

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



{

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

CD3DTest::~CD3DTest()

		SDL_RenderCopy(ren, tex, NULL, NULL);

		1,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		{



	}*/

	if (FAILED(hr))

int main(int, char**)



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//Clean up our objects and quit

	HRESULT              hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	return hr;

		SDL_RenderClear(ren);

int main(int, char**)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pSampler);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

	SDL_DestroyRenderer(ren);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pTexture = NULL;

		delete[] pVList;

	//vector<Vertex> vertex_t;

	txDesc.Width = rect.Width();

		return hr;



	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

		m_pImmediateContext->ClearState();

}



	for (int i = 0; i < 3; i++)



	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4X4 world;

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		return hr;

#include <iostream>



	txDesc.SampleDesc.Count = 1;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	{



	{

{

	D3D11_SAMPLER_DESC smpDesc;

			}



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	WORD   icount = indexList.size();

	txDesc.MipLevels = 1;

	m_pMatrixBuffer = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyRenderer(ren);



	CRect                rect;

		{

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (size_t s = 0; s < shapes.size(); s++)



		}

	auto& attrib = reader.GetAttrib();

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_VertexCount = vcount;

	{

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (!reader.Warning().empty())



	SAFE_RELEASE(m_pMatrixBuffer);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return 1;

				WORD index = idx.vertex_index;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pDevice = NULL;



		pVList[i] = vertexlist[i];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.MiscFlags = 0;

	dsDesc.Format = txDesc.Format;

	// Loop over shapes

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	}



			switch (e.key.keysym.sym)

		R"(cube.obj)");

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		}



	//vector<WORD> index_t;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			default:

	SAFE_RELEASE(m_pInputLayout);

		// Loop over faces(polygon)

	XMFLOAT4X4 view;

	SDL_Quit();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	DXGI_SWAP_CHAIN_DESC scDesc;

		if (!ret)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	}

}

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	WORD* pIList = new WORD[icount];



				break;





#endif

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pSampler = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		flags,

struct ConstantMaterial {

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		return hr;

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pVertexBuffer = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		}

	m_Viewport.MinDepth = 0.0f;

	pBackBuffer->Release();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_DOWN:



		return hr;



	vector<Vertex> vertexlist;

		D3D11_SDK_VERSION,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&error,

		SDL_Delay(1000);

	LoadObj(vertexlist, indexList);



	SAFE_RELEASE(m_pVertexBuffer);

	if (m_pImmediateContext)

	m_pImmediateContext = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.CPUAccessFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4         eyePos;   //視点座標



	SAFE_RELEASE(m_pDepthStencilView);

	enum KeyPressSurfaces

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			case SDLK_LEFT:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	std::vector<tinyobj::shape_t> shapes;

	ConstantLightBuffer clb;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	XMFLOAT4 diffuse;           //拡散(r,g,b)





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	{

		else if (e.type == SDL_KEYDOWN)

#include <SDL.h>

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))





{

		return hr;

		delete[] pVList;

}

	//Create Index

		&level,

	ibDesc.MiscFlags = 0;

	m_Viewport.MaxDepth = 1.0f;





	//頂点バッファ作成

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))



		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	ibDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

}

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pInputLayout = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	if (FAILED(hr))

				indexlist.push_back(index);

		return hr;

}

	UINT strides = sizeof(Vertex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.ArraySize = 1;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	flags |= D3D11_CREATE_DEVICE_DEBUG;





{

	auto& attrib = reader.GetAttrib();

	ibDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	SDL_DestroyTexture(tex);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}









	WORD* pIList = new WORD[icount];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <SDL.h>

#ifdef _DEBUG

	{

	//定数バッファ作成



		SDL_RenderClear(ren);

	SDL_FreeSurface(suf);

	scDesc.BufferCount = 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//頂点バッファ作成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		R"(cube.obj)");

	SDL_Event e;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	auto& materials = reader.GetMaterials();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Quit();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vector<WORD> indexList;

}
	reader_config.mtl_search_path = "./"; // Path to material files

			case SDLK_UP:

	std::string error;

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

struct ConstantMaterial {

	SDL_DestroyWindow(win);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{



	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

	m_pDevice = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;

	m_Angle += XMConvertToRadians(1.0f);



	ibDesc.StructureByteStride = 0;

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	pBackBuffer->Release();

	m_pImmediateContext = NULL;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

				// access to vertex

		&materials,

				indexlist.push_back(index);

	m_VertexCount = 0;

	{

	m_pDepthStencilView = NULL;

}



	m_pTextureView = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	auto& shapes = reader.GetShapes();

int SEGMENT = 36;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



}

	ConstantMaterial material; //物体の質感

	}



	float    fov = XMConvertToRadians(20.0f);

	scDesc.SampleDesc.Count = 1;

			case SDLK_DOWN:



	txDesc.CPUAccessFlags = 0;

			index_offset += num_vertices;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (const auto& shape : shapes)

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.StructureByteStride = 0;

	if (m_pImmediateContext)





	delete[] pIList;

	//Create Index

		}



	ConstantLightBuffer clb;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_VertexCount = vcount;

	UINT offsets = 0;

	LoadObj(vertexlist, indexList);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_VertexCount = vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		KEY_PRESS_SURFACE_TOTAL

	delete[] pVList;

		SDL_Delay(1000);

}
	int     vcount = vertexlist.size();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.ArraySize = 1;

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)



	SDL_FreeSurface(bmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MinDepth = 0.0f;

	Release();

		&m_pDevice,

	dsDesc.Texture2D.MipSlice = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				indexlist.push_back(index);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_Viewport.TopLeftY = 0;

		&m_pImmediateContext);

	txDesc.Width = rect.Width();

				// access to vertex

	m_Viewport.TopLeftY = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SUBRESOURCE_DATA vrData;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#include "DirectXManager.h"

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSampler);

	//定数バッファ作成

		size_t index_offset = 0;

		size_t index_offset = 0;

		// Loop over faces(polygon)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		}



			}

	if (FAILED(hr))

		return hr;



	txDesc.CPUAccessFlags = 0;

		&error,

CD3DTest::~CD3DTest()

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				break;

		1,

	dsDesc.Format = txDesc.Format;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantLight {

	XMFLOAT4         ambient;  //環境光(r,g,b)





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

{

void CD3DTest::Release()

	m_pDevice = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

	SAFE_RELEASE(m_pImmediateContext);

	{

struct ConstantMaterial {

	m_pTextureView = NULL;

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		flags,



	for (int j = 0; j < icount; j++)

	{



{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



			//Select surfaces based on key press



}

	SAFE_RELEASE(m_pInputLayout);

	scDesc.OutputWindow = hwnd;

}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



				break;





	int     vcount = vertexlist.size();

	SDL_DestroyTexture(tex);

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	vector<WORD> indexList;

		pVList[i] = vertexlist[i];

	m_pDevice = NULL;



		// Loop over faces(polygon)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	SDL_Quit();

};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





}

			{

	SAFE_RELEASE(m_pTexture);

		SDL_Delay(1000);

};

	txDesc.SampleDesc.Count = 1;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MaxDepth = 1.0f;



void CD3DTest::Release()

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	//ピクセルシェーダー生成



	dsDesc.Format = txDesc.Format;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pLightBuffer = NULL;

	D3D11_BUFFER_DESC cbDesc;



	{

		NULL,

		D3D_DRIVER_TYPE_HARDWARE,

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			default:

	m_Angle += XMConvertToRadians(1.0f);

	UINT offsets = 0;

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_RIGHT,

	{

		}

		SDL_Delay(1000);

	{

	XMFLOAT4X4 view;

			}

	XMFLOAT4X4 projection;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

#include <iostream>

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pTextureView = NULL;

	SDL_DestroyTexture(tex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

#include <SDL.h>



}









	scDesc.OutputWindow = hwnd;

		return hr;

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_DestroyRenderer(ren);

	}

#include "DirectXManager.h"

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	WORD   icount = indexList.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	ConstantMaterial material; //物体の質感

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pMatrixBuffer);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vrData.pSysMem = &pVList[0];

	ConstantMatrixBuffer cmb;



				vertex.push_back(vertex_tmp);



	ConstantMatrixBuffer cmb;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	//ビューポート設定

	auto& materials = reader.GetMaterials();

			case SDLK_RIGHT:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SDL_DestroyTexture(tex);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4 specular;          //反射(r,g,b)

			}

	SDL_DestroyTexture(tex);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	scDesc.BufferDesc.Height = rect.Height();



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

struct ConstantLightBuffer {

{

	}

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;

#ifdef _DEBUG



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				break;

	m_Viewport.TopLeftX = 0;

	}

		{

	m_pImmediateContext = NULL;

	Vertex* pVList = new Vertex[vcount];

{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#include <SDL.h>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			case SDLK_RIGHT:





		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pRenderTargetView);



		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return 0;

	dsDesc.Format = txDesc.Format;

	UINT flags = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		}

				vertex.push_back(vertex_tmp);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_SUBRESOURCE_DATA vrData;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	tinyobj::ObjReaderConfig reader_config;

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		pLevels,

{

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	//Clean up our objects and quit

	txDesc.MiscFlags = 0;

	m_IndexCount = icount;

	m_pTextureView = NULL;

		return hr;

	m_pVertexShader = NULL;

	if (FAILED(hr))

				tinyobj::real_t ty =

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//頂点バッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pLightBuffer = NULL;



	txDesc.ArraySize = 1;

	vbDesc.MiscFlags = 0;



			index_offset += fv;



#include "DirectXManager.h"

	XMFLOAT4X4 world;

	ibDesc.StructureByteStride = 0;

struct ConstantMaterial {

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

int SEGMENT = 36;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//vector<Vertex> vertex_t;

		D3D11_SDK_VERSION,

	SDL_DestroyRenderer(ren);

	if (m_pImmediateContext)

		pLevels,



		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	std::string inputfile = "test.obj";

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	delete[] pIList;

	SDL_DestroyTexture(tex);

		1,

	while (SDL_PollEvent(&e) != 0)

		//User requests quit

	m_pVertexBuffer = NULL;

	delete[] pVList;

		}

struct ConstantLightBuffer {

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	for (const auto& shape : shapes)

		KEY_PRESS_SURFACE_RIGHT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	//vector<WORD> index_t;

	D3D11_BUFFER_DESC vbDesc;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.SampleDesc.Quality = 0;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

int main(int, char**)

	::ZeroMemory(&scDesc, sizeof(scDesc));



		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	WORD   icount = indexList.size();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t ty =



		flags,

		&m_pSwapChain,

	}

#ifdef _DEBUG

void CD3DTest::Render()



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_VertexCount = vcount;









	auto& shapes = reader.GetShapes();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	SDL_DestroyRenderer(ren);

	XMFLOAT4X4 projection;

	cbDesc.MiscFlags = 0;

	ConstantLight    pntLight; //点光源

	vector<WORD> indexList;

		{



	{

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

		&materials,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			}

	vrData.pSysMem = &pVList[0];

			{

int main(int, char**)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	auto& shapes = reader.GetShapes();



			switch (e.key.keysym.sym)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pTexture);







	ConstantLight    pntLight; //点光源

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		//User requests quit

		return hr;

	D3D11_BUFFER_DESC cbDesc;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

struct ConstantLightBuffer {

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//First we need to start up SDL, and make sure it went ok

	D3D11_TEXTURE2D_DESC txDesc;





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pSwapChain,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

#include "DirectXManager.h"





	m_pRenderTargetView = NULL;

	{

	for (int i = 0; i < vcount; i++)

	XMFLOAT4X4 view;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pPixelShader);



	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

	if (FAILED(hr))



		return 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))





	ConstantLightBuffer clb;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (const auto& shape : shapes)

	auto& shapes = reader.GetShapes();





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_VertexCount = vcount;



	//vector<Vertex> vertex_t;



	txDesc.Height = rect.Height();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				WORD index = idx.vertex_index;

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	UINT flags = 0;

		pLevels,



	dsDesc.Texture2D.MipSlice = 0;

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.MinDepth = 0.0f;

	ConstantMaterial material; //物体の質感

	D3D11_SAMPLER_DESC smpDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;  // インデントのオフセット

	std::string inputfile = "test.obj";

	if (FAILED(hr))





 */



	vbDesc.CPUAccessFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	irData.SysMemPitch = 0;

		return hr;





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		m_pImmediateContext->ClearState();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

#include <iostream>

	WORD   icount = indexList.size();



	}

{

	tinyobj::attrib_t attrib;

	m_pDepthStencilTexture = NULL;



int SEGMENT = 36;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		pVList[i] = vertexlist[i];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyTexture(tex);

	{

	cbDesc.MiscFlags = 0;

#ifdef _DEBUG

}

	if (FAILED(hr))



			switch (e.key.keysym.sym)

		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		&shapes,

	return 0;





	XMFLOAT4X4 view;

			index_offset += fv;



	//テクスチャ読み込み

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	if (m_pImmediateContext)

	/*

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	LoadObj(vertexlist, indexList);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vector<WORD> indexList;

			case SDLK_LEFT:

				// access to vertex

		&attrib,



			for (size_t v = 0; v < num_vertices; v++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_pSwapChain = NULL;

	}

	}

}

	float    farZ = 100.0f;

	SAFE_RELEASE(m_pLightBuffer);





		KEY_PRESS_SURFACE_TOTAL

	return;

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		m_pImmediateContext->ClearState();

	if (FAILED(hr))



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

	}

	//頂点レイアウト作成

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (m_pImmediateContext)

			//Select surfaces based on key press

		KEY_PRESS_SURFACE_DEFAULT,

};



	//Vertex* pVList = new Vertex[vcount];

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	float    farZ = 100.0f;

			int num_vertices = shape.mesh.num_face_vertices[f];



	{

				break;

	XMFLOAT4X4 view;

		NULL,





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}*/

	{

	}



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pVertexShader);

{

	if (FAILED(hr))





	std::string inputfile = "test.obj";

	D3D_FEATURE_LEVEL level;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pInputLayout = NULL;

	}



	}*/



};

		return hr;

	txDesc.SampleDesc.Count = 1;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pRenderTargetView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

 * Lesson 1: Hello World!

#include <SDL.h>

		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemSlicePitch = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		flags,

	m_pRenderTargetView = NULL;

	if (!reader.Warning().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    farZ = 100.0f;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pVertexBuffer = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL



	cbDesc.CPUAccessFlags = 0;

	}

	scDesc.BufferDesc.Width = rect.Width();

	}

	D3D11_BUFFER_DESC ibDesc;

		&shapes,



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	vrData.SysMemSlicePitch = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#include <SDL.h>

	m_Angle += XMConvertToRadians(1.0f);



	//定数バッファ作成



	{

		SDL_Delay(1000);

		// Loop over faces(polygon)

	dsDesc.Texture2D.MipSlice = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	UINT offsets = 0;

				vertex.push_back(vertex_tmp);

	m_pVertexBuffer = NULL;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 world;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;



		SDL_Delay(1000);

	{

	{

	delete[] pIList;

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	enum KeyPressSurfaces

			}

	vbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

#include "DirectXManager.h"



		}

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	}

	}

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			}

	//頂点レイアウト作成

	if (FAILED(hr))

	SDL_Quit();

	scDesc.SampleDesc.Quality = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.pSysMem = &pVList[0];

	vrData.pSysMem = &pVList[0];

}

	{



		}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		// Loop over faces(polygon)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pDepthStencilTexture);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.Height = (FLOAT)rect.Height();

		SDL_RenderPresent(ren);



		return hr;



	CRect                rect;

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <iostream>

	enum KeyPressSurfaces

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	}



			// Loop over vertices in the face.

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	ConstantMatrixBuffer cmb;

	SDL_Quit();

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_RIGHT,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			for (size_t v = 0; v < fv; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

		m_pImmediateContext->ClearState();

	}

	ConstantLightBuffer clb;

	cbDesc.MiscFlags = 0;



	SDL_DestroyWindow(win);



	::ZeroMemory(&scDesc, sizeof(scDesc));

using std::cout; using std::endl;

	m_pPixelShader = NULL;

/*

	if (FAILED(hr))



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

			case SDLK_RIGHT:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			{

	WORD   icount = indexList.size();

	auto& materials = reader.GetMaterials();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		}

	m_IndexCount = icount;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			for (size_t v = 0; v < num_vertices; v++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&m_pImmediateContext);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	delete[] pIList;

#endif

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.SampleDesc.Quality = 0;

	ibDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.SampleDesc.Count = 1;

		return hr;

	//vector<Vertex> vertex_t;

	//ピクセルシェーダー生成

	//定数バッファ作成

	m_pSwapChain->Present(0, 0);

	SDL_FreeSurface(bmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



};



	{

		pLevels,

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(



	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み

			for (size_t v = 0; v < fv; v++)

		size_t index_offset = 0;  // インデントのオフセット

			exit(1);

		{



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

int SEGMENT = 36;

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA irData;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t ty =



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.Height = rect.Height();

				break;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	bool ret = tinyobj::LoadObj(

	m_Viewport.TopLeftY = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.CPUAccessFlags = 0;

#endif

	//vector<Vertex> vertex_t;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(suf);

			for (size_t v = 0; v < fv; v++)

	SDL_FreeSurface(bmp);

	m_pTextureView = NULL;

	}

		R"(cube.obj)");

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

int main(int, char**)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		&materials,

};

		pLevels,

	SDL_Event e;



	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	float    farZ = 100.0f;

	cbDesc.CPUAccessFlags = 0;

};

			exit(1);

		return hr;

	if (m_pImmediateContext)

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;



#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		&materials,



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);







	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include "DirectXManager.h"

		if (!reader.Error().empty())



	D3D11_BUFFER_DESC cbDesc;

	for (int i = 0; i < 3; i++)

	SDL_Quit();

		cout << "SDL_INIT_ERROR" << endl;

				break;

			case SDLK_UP:



	ibDesc.MiscFlags = 0;

	int     vcount = vertexlist.size();

	m_VertexCount = 0;

		&m_pDevice,

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	txDesc.ArraySize = 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				WORD index = idx.vertex_index;

	txDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);





	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SDL_Quit();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pDepthStencilView);

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		&m_pImmediateContext);

		{

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pTextureView);

	std::string imagePath = "hello.bmp";

	for (const auto& shape : shapes)

};

}
	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

	XMFLOAT4X4 view;

		&attrib,

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;





};

	m_pDevice = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}



};

	//Key press surfaces constants

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//Clean up our objects and quit

		KEY_PRESS_SURFACE_UP,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#include <iostream>



	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			int num_vertices = shape.mesh.num_face_vertices[f];





	m_IndexCount = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	for (size_t s = 0; s < shapes.size(); s++)

};

			index_offset += fv;

#include <SDL.h>

		{

			}

 * Lesson 1: Hello World!

			case SDLK_LEFT:



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&level,

	vbDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pTexture);



	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//ピクセルシェーダー生成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.ArraySize = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

/*

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		else if (e.type == SDL_KEYDOWN)

	vrData.SysMemPitch = 0;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.Windowed = TRUE;

	scDesc.SampleDesc.Count = 1;

	SDL_DestroyWindow(win);

	{

	m_pVertexBuffer = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.Width = rect.Width();

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

void CD3DTest::Render()

int main(int, char**)

	D3D11_BUFFER_DESC cbDesc;

	txDesc.SampleDesc.Quality = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	return 0;





	dsDesc.Texture2D.MipSlice = 0;

int main(int, char**)





		{

	}

	}

	D3D11_TEXTURE2D_DESC txDesc;

		if (!reader.Error().empty())



		&error,

using std::cout; using std::endl;

		SDL_RenderPresent(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	}

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyTexture(tex);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_TEXTURE2D_DESC txDesc;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

			index_offset += num_vertices;

		pVList[i] = vertexlist[i];

	//深度ステンシルバッファ作成



		return hr;

				vertex.push_back(vertex_tmp);



				indexlist.push_back(idx.vertex_index);

	//頂点バッファ作成

}

	{

	SAFE_RELEASE(m_pImmediateContext);

{

	SAFE_RELEASE(m_pVertexBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	pBackBuffer->Release();



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			{



			//Select surfaces based on key press

	SAFE_RELEASE(m_pSwapChain);

	//vector<Vertex> vertex_t;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			}

	scDesc.BufferDesc.Width = rect.Width();

			default:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return 1;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = vcount;

	m_pDevice = NULL;



	XMFLOAT4 pos;               //座標(x,y,z)



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Quit();

	return 0;

}

	txDesc.ArraySize = 1;

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//Key press surfaces constants

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		NULL,

	SDL_DestroyWindow(win);

			exit(1);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#endif

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	irData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

	LoadObj(vertexlist, indexList);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

void CD3DTest::Release()

	//Key press surfaces constants

	txDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	float    fov = XMConvertToRadians(20.0f);



	return 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

			}

	SDL_Quit();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);







	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))





	{

{

	SDL_DestroyTexture(tex);

	m_pSampler = NULL;

				WORD index = idx.vertex_index;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pIndexBuffer);

#include <iostream>

	tinyobj::attrib_t attrib;

	bool ret = tinyobj::LoadObj(

				// access to vertex

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_FreeSurface(bmp);

	//頂点シェーダー生成

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&attrib,

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_SAMPLER_DESC smpDesc;



			case SDLK_UP:

};

	}



#include <iostream>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();

	{

	D3D11_TEXTURE2D_DESC txDesc;

	std::string inputfile = "test.obj";

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	CRect                rect;

	scDesc.BufferCount = 1;



	XMFLOAT4 specular;          //反射(r,g,b)





				indexlist.push_back(index);



			for (size_t v = 0; v < num_vertices; v++)

		return hr;

		SDL_Delay(1000);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.TopLeftY = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	delete[] pIList;

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Height = rect.Height();



	SDL_DestroyTexture(tex);

		&shapes,

void CD3DTest::Render()

};

	//深度ステンシルバッファ作成

		SDL_RenderPresent(ren);





	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vrData.SysMemSlicePitch = 0;

int SEGMENT = 36;

	m_pDepthStencilTexture = NULL;

			{

		return hr;

	m_pLightBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	delete[] pIList;

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pDepthStencilView);

	ibDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

		SDL_RenderClear(ren);

	m_pMatrixBuffer = NULL;

	txDesc.SampleDesc.Count = 1;

	if (!reader.Warning().empty())



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 view;

	//ピクセルシェーダー生成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

};

	XMFLOAT4 ambient;           //環境(r,g,b)

	//ビューポート設定





		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

 */

HRESULT CD3DTest::Create(HWND hwnd)

		{

	vector<WORD> indexList;



		return hr;





	scDesc.Windowed = TRUE;

void CD3DTest::Render()

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				// access to vertex

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_SUBRESOURCE_DATA irData;

	CRect                rect;





void CD3DTest::Release()

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_TEXTURE2D_DESC txDesc;

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pVertexBuffer);

	if (!error.empty())

	LoadObj(vertexlist, indexList);

		SDL_Delay(1000);

	}*/

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

#endif

	std::string error;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	for (size_t s = 0; s < shapes.size(); s++)



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4         ambient;  //環境光(r,g,b)



	//定数バッファ作成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vrData.SysMemPitch = 0;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vector<WORD> indexList;

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	if (FAILED(hr))





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pPixelShader = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		delete[] pVList;

		}

	if (m_pImmediateContext)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	return hr;

		KEY_PRESS_SURFACE_DOWN,

#include <SDL.h>

	{

struct ConstantMaterial {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	irData.SysMemPitch = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		delete[] pIList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (m_pImmediateContext)

struct ConstantMatrixBuffer {

			{



	vbDesc.MiscFlags = 0;







		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.SampleDesc.Count = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

{

			switch (e.key.keysym.sym)

{

		flags,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			{

	CRect                rect;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

		return hr;

	{

	SAFE_RELEASE(m_pVertexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			exit(1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				// access to vertex

		{

		return hr;



{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





		D3D_DRIVER_TYPE_HARDWARE,

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	auto& materials = reader.GetMaterials();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include <iostream>

			{



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDevice);



		{

	SDL_FreeSurface(suf);

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pTexture);

	{

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	UINT flags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		exit(1);

	}

 */

	SDL_FreeSurface(suf);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	delete[] pVList;

void CD3DTest::Release()

	//頂点シェーダー生成

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pPixelShader = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	reader_config.mtl_search_path = "./"; // Path to material files



	int     vcount = vertexlist.size();

	/*



	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	CRect                rect;

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 pos;               //座標(x,y,z)

	vrData.pSysMem = &pVList[0];

	vbDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			index_offset += fv;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

				tinyobj::real_t tx =

			switch (e.key.keysym.sym)



	bool ret = tinyobj::LoadObj(

	{



	// Loop over shapes

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.eyePos, eye);

{





	scDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < 3; i++)

	WORD   icount = indexList.size();



HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pLightBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.MipLevels = 1;



HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_LEFT,



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	dsDesc.Texture2D.MipSlice = 0;



	}

	}

	vrData.pSysMem = &pVList[0];

				WORD index = idx.vertex_index;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.MiscFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.MipLevels = 1;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pLightBuffer);



		&scDesc,

	auto& attrib = reader.GetAttrib();



		return hr;



	vrData.pSysMem = &pVList[0];

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_VertexCount = 0;

				// access to vertex

				tinyobj::real_t ty =

	//定数バッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Quit();



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_IndexCount = icount;

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))



	SAFE_RELEASE(m_pSwapChain);

	SDL_Event e;

	bool ret = tinyobj::LoadObj(

			// Loop over vertices in the face.

	WORD* pIList = new WORD[icount];



	auto& attrib = reader.GetAttrib();

#include "DirectXManager.h"

			switch (e.key.keysym.sym)

		&m_pDevice,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

		else if (e.type == SDL_KEYDOWN)

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pTextureView);

}
				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.MiscFlags = 0;

{

	return;









	}*/

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		}

	vector<WORD> indexList;



struct ConstantMaterial {

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_IndexCount = icount;

	for (size_t s = 0; s < shapes.size(); s++)

	float    fov = XMConvertToRadians(20.0f);

	}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	std::vector<tinyobj::material_t> materials;

		SDL_RenderPresent(ren);

	}

	{

	m_pPixelShader = NULL;

	cbDesc.StructureByteStride = 0;

	{

	{



	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilTexture);

#endif

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_SUBRESOURCE_DATA irData;

	vbDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.eyePos, eye);

{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点レイアウト作成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

void CD3DTest::Render()

	auto& shapes = reader.GetShapes();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

CD3DTest::CD3DTest()

CD3DTest::~CD3DTest()

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4X4 projection;

	CRect                rect;

		KEY_PRESS_SURFACE_LEFT,

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	ConstantMatrixBuffer cmb;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_DOWN:

}



	ibDesc.StructureByteStride = 0;

				indexlist.push_back(index);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.MinDepth = 0.0f;

	cbDesc.MiscFlags = 0;

	SDL_Quit();

				indexlist.push_back(index);

	UINT strides = sizeof(Vertex);



	{

#include <SDL.h>

	scDesc.BufferDesc.Width = rect.Width();

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyTexture(tex);

		return hr;

CD3DTest::CD3DTest()



	SDL_FreeSurface(bmp);

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			//Select surfaces based on key press

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.Warning().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	irData.SysMemPitch = 0;

	UINT offsets = 0;



int main(int, char**)



			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    nearZ = 0.1f;



};

		return hr;

	vrData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	delete[] pVList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		pLevels,

	}



	SDL_Quit();



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pSampler);



#include "DirectXManager.h"

	dsDesc.Format = txDesc.Format;

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

		if (!reader.Error().empty())

	WORD* pIList = new WORD[icount];

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.StructureByteStride = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pRenderTargetView = NULL;

/*

			{

	m_pSampler = NULL;

				break;





				WORD index = idx.vertex_index;



	XMFLOAT4         eyePos;   //視点座標





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





/*



	ibDesc.CPUAccessFlags = 0;



	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.CPUAccessFlags = 0;

		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	std::string inputfile = "test.obj";

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	txDesc.Height = rect.Height();

	WORD* pIList = new WORD[icount];

}

	return 0;

		&materials,

	}



		KEY_PRESS_SURFACE_RIGHT,

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	return;

	tinyobj::ObjReaderConfig reader_config;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pIndexBuffer);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

		NULL,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		m_pImmediateContext->ClearState();

	SDL_FreeSurface(bmp);





#endif





	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

	{

			// Loop over vertices in the face.

	Vertex* pVList = new Vertex[vcount];

		&scDesc,

		KEY_PRESS_SURFACE_DOWN,

				vertex.push_back(vertex_tmp);



	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}*/

			switch (e.key.keysym.sym)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	WORD* pIList = new WORD[icount];

	txDesc.SampleDesc.Count = 1;

	//Key press surfaces constants





		&m_pDevice,



		return hr;

	{

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

#include "DirectXManager.h"

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{

	m_Viewport.TopLeftY = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pDepthStencilView);

	vrData.SysMemPitch = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				// access to vertex

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	auto& materials = reader.GetMaterials();

	::ZeroMemory(&scDesc, sizeof(scDesc));





	auto& materials = reader.GetMaterials();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			case SDLK_RIGHT:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);







	irData.SysMemSlicePitch = 0;

	vbDesc.CPUAccessFlags = 0;

	Release();

				tinyobj::real_t ty =





	auto& shapes = reader.GetShapes();

		&m_pImmediateContext);



	//定数バッファ作成





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_IndexCount = 0;

		pLevels,

	cbDesc.MiscFlags = 0;


