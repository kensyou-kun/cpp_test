				break;



	SAFE_RELEASE(m_pTextureView);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

			case SDLK_UP:

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t tx =

			// Loop over vertices in the face.

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			}

	enum KeyPressSurfaces

			case SDLK_RIGHT:

	return 0;

/*



	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		size_t index_offset = 0;

	//テクスチャ読み込み

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		NULL,

		return hr;

	std::string imagePath = "hello.bmp";

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	irData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Quality = 0;

	auto& materials = reader.GetMaterials();





	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4         eyePos;   //視点座標

#include "DirectXManager.h"



		return hr;

				break;

	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		return 1;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		}



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



{

			}

int main(int, char**)

	//vector<Vertex> vertex_t;

	D3D_FEATURE_LEVEL level;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



			{

	m_IndexCount = 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4         ambient;  //環境光(r,g,b)



			case SDLK_LEFT:

	if (FAILED(hr))

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

int SEGMENT = 36;



	ibDesc.MiscFlags = 0;

	}

	}

	delete[] pIList;

		delete[] pVList;

	m_pLightBuffer = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User requests quit

		exit(1);

		// Loop over faces(polygon)

};

	}

	{

	SDL_DestroyTexture(tex);

	{

	std::vector<tinyobj::shape_t> shapes;



		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 ambient;           //環境(r,g,b)

struct ConstantMatrixBuffer {

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



			case SDLK_DOWN:

	if (!reader.ParseFromFile(inputfile, reader_config))

struct ConstantMaterial {

		pVList[i] = vertexlist[i];

				break;





}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	SAFE_RELEASE(m_pDepthStencilView);



	for (int j = 0; j < icount; j++)

	ConstantLight    pntLight; //点光源

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			//Select surfaces based on key press

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_TEXTURE2D_DESC txDesc;

	//ピクセルシェーダー生成



};

	delete[] pVList;

struct ConstantMatrixBuffer {

	/*



	{

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (FAILED(hr))



		KEY_PRESS_SURFACE_DOWN,

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	//深度ステンシルバッファ作成

using std::cout; using std::endl;

};

			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				WORD index = idx.vertex_index;



	HRESULT              hr;

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))



		pVList[i] = vertexlist[i];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vector<Vertex> vertexlist;

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_UP,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

struct ConstantMaterial {



	SAFE_RELEASE(m_pDepthStencilTexture);

		//User requests quit

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				WORD index = idx.vertex_index;

			index_offset += num_vertices;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	scDesc.Windowed = TRUE;

#include <SDL.h>

struct ConstantLight {

		KEY_PRESS_SURFACE_LEFT,

	scDesc.OutputWindow = hwnd;

	//Key press surfaces constants

};

				WORD index = idx.vertex_index;



				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_DOWN,



	float    farZ = 100.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			exit(1);

			case SDLK_LEFT:

	SAFE_RELEASE(m_pTexture);

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	return 0;



		1,



	WORD* pIList = new WORD[icount];

	m_Viewport.Height = (FLOAT)rect.Height();

	float    nearZ = 0.1f;



}

	}



	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.MaxDepth = 1.0f;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

{

		&m_pImmediateContext);

#ifdef _DEBUG

	UINT flags = 0;

	{

		SDL_Delay(1000);

		return hr;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pTexture);

		SDL_RenderClear(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pIndexBuffer = NULL;

	if (FAILED(hr))



	cbDesc.StructureByteStride = 0;

#include <iostream>

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			for (size_t v = 0; v < num_vertices; v++)

	//Key press surfaces constants

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	bool ret = tinyobj::LoadObj(

	txDesc.CPUAccessFlags = 0;



			break;

		return hr;

	enum KeyPressSurfaces

	UINT flags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		{

	tinyobj::ObjReader reader;



		return hr;

		}

		return hr;

			}

{

	//Key press surfaces constants

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_Delay(1000);



		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext = NULL;

	for (int i = 0; i < 3; i++)



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		pIList[j] = indexList[j];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	txDesc.ArraySize = 1;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			default:

	{



{

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

 */

	ZeroMemory(&txDesc, sizeof(txDesc));

		}

	cbDesc.CPUAccessFlags = 0;

			index_offset += num_vertices;

	ConstantMatrixBuffer cmb;



	UINT strides = sizeof(Vertex);

	D3D11_BUFFER_DESC vbDesc;

	ibDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	WORD* pIList = new WORD[icount];





	txDesc.SampleDesc.Quality = 0;

	m_pLightBuffer = NULL;

	LoadObj(vertexlist, indexList);

		}

	//頂点シェーダー生成

		SDL_Delay(1000);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	tinyobj::attrib_t attrib;

	UINT strides = sizeof(Vertex);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pDevice);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();



	XMFLOAT4 ambient;           //環境(r,g,b)

/*

#include <iostream>

	SDL_DestroyRenderer(ren);





	return 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	ibDesc.CPUAccessFlags = 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点シェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			}

		exit(1);

	SAFE_RELEASE(m_pVertexShader);

HRESULT CD3DTest::Create(HWND hwnd)

	ID3D11Texture2D* pBackBuffer;

	}

			case SDLK_DOWN:

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	vrData.SysMemPitch = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//頂点シェーダー生成

			// Loop over vertices in the face.



		pVList[i] = vertexlist[i];





	SAFE_RELEASE(m_pImmediateContext);

{

	scDesc.OutputWindow = hwnd;



				break;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_DestroyWindow(win);

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vector<Vertex> vertexlist;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



CD3DTest::CD3DTest()

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

		{

	/*



};

	std::vector<tinyobj::shape_t> shapes;

	{



	std::string error;

	tinyobj::ObjReaderConfig reader_config;

#include "DirectXManager.h"

				WORD index = idx.vertex_index;



	vrData.SysMemSlicePitch = 0;

	txDesc.Width = rect.Width();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;

void CD3DTest::Render()



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&m_pDevice,

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.TopLeftY = 0;

	m_VertexCount = vcount;

	auto& shapes = reader.GetShapes();



	Release();

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_IndexCount = 0;

		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				vertex.push_back(vertex_tmp);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#ifdef _DEBUG

		flags,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	// Loop over shapes

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	for (int i = 0; i < 3; i++)

	{



	for (int i = 0; i < vcount; i++)



	}

		delete[] pVList;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	std::string imagePath = "hello.bmp";





	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pMatrixBuffer);

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pVertexBuffer = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

		cout << "SDL_INIT_ERROR" << endl;

		{

		if (e.type == SDL_QUIT)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		size_t index_offset = 0;  // インデントのオフセット

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t tx =

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    farZ = 100.0f;



	vbDesc.StructureByteStride = 0;

		R"(cube.obj)");

		return hr;

	return hr;

	return hr;

	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	//Key press surfaces constants

		size_t index_offset = 0;  // インデントのオフセット



	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_UP,



	//ビューポート設定

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pPixelShader);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	float    farZ = 100.0f;

	float    nearZ = 0.1f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 view;



	D3D11_SUBRESOURCE_DATA vrData;

	m_pDepthStencilView = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;

	std::string imagePath = "hello.bmp";

		&scDesc,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			switch (e.key.keysym.sym)

		if (!reader.Error().empty())

	ibDesc.CPUAccessFlags = 0;

}



	m_pInputLayout = NULL;

	for (size_t s = 0; s < shapes.size(); s++)





	tinyobj::attrib_t attrib;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	auto& shapes = reader.GetShapes();

 * Lesson 1: Hello World!







			{

		&m_pDevice,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pLightBuffer);

};

{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

};

	vrData.SysMemPitch = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	std::string inputfile = "test.obj";



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <SDL.h>

		KEY_PRESS_SURFACE_LEFT,

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{

	WORD   icount = indexList.size();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

		KEY_PRESS_SURFACE_LEFT,

	txDesc.ArraySize = 1;

#define TINYOBJLOADER_IMPLEMENTATION

}

		pVList[i] = vertexlist[i];

{

	}





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

void CD3DTest::Release()



			int num_vertices = shape.mesh.num_face_vertices[f];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



void CD3DTest::Render()



		KEY_PRESS_SURFACE_UP,

	}

	SAFE_RELEASE(m_pSampler);

	{





		SDL_RenderClear(ren);



	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

			}

	Release();

	SAFE_RELEASE(m_pVertexShader);



{

			case SDLK_RIGHT:

	m_IndexCount = icount;

	//ピクセルシェーダー生成



HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SAFE_RELEASE(m_pTextureView);

	cbDesc.CPUAccessFlags = 0;

}

	HRESULT              hr;





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Quit();

	{

	SDL_DestroyWindow(win);

		return hr;

		&scDesc,

	}



	SDL_DestroyTexture(tex);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



		D3D_DRIVER_TYPE_HARDWARE,



		&materials,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyRenderer(ren);

	dsDesc.Texture2D.MipSlice = 0;

			{

	return hr;

		&m_pDevice,

	m_pSampler = NULL;

				WORD index = idx.vertex_index;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



				break;

	for (const auto& shape : shapes)

	UINT flags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		&attrib,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



void CD3DTest::Release()

struct ConstantMaterial {

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain->Present(0, 0);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pTextureView);



	scDesc.OutputWindow = hwnd;

	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//vector<WORD> index_t;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				vertex.push_back(vertex_tmp);



	std::string imagePath = "hello.bmp";

	delete[] pIList;

	m_pSwapChain = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)



	SDL_FreeSurface(suf);

		}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



}

		{

#include <iostream>

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	CRect                rect;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

				break;

	return;

		return hr;

	}

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	delete[] pIList;



	enum KeyPressSurfaces

	while (SDL_PollEvent(&e) != 0)

	int     vcount = vertexlist.size();

		if (!reader.Error().empty())

	}

#include "DirectXManager.h"

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#include <iostream>



	cbDesc.CPUAccessFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	std::string error;

	}



	SDL_DestroyWindow(win);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	SAFE_RELEASE(m_pTexture);



	tinyobj::ObjReaderConfig reader_config;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	//ビューポート設定

	//深度ステンシルバッファ作成

	//定数バッファ作成

		&error,

}

	if (FAILED(hr))



	ConstantLightBuffer clb;



		flags,

				// access to vertex

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



		exit(1);

	vbDesc.MiscFlags = 0;

		return hr;

	txDesc.SampleDesc.Count = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_VertexCount = 0;

	vector<WORD> indexList;

		delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		pLevels,

	for (int j = 0; j < icount; j++)

	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	Release();

	ID3D11Texture2D* pBackBuffer;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{

	dsDesc.Format = txDesc.Format;

	D3D11_SAMPLER_DESC smpDesc;



	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

			case SDLK_RIGHT:

	//頂点シェーダー生成

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.SampleDesc.Count = 1;

	LoadObj(vertexlist, indexList);

	auto& attrib = reader.GetAttrib();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点バッファ作成

			case SDLK_UP:



	}

				vertex.push_back(vertex_tmp);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	auto& attrib = reader.GetAttrib();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



			}

	SDL_FreeSurface(bmp);

	D3D11_BUFFER_DESC cbDesc;

			case SDLK_UP:



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				indexlist.push_back(idx.vertex_index);

	auto& shapes = reader.GetShapes();



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	return;

		// Loop over faces(polygon)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (size_t s = 0; s < shapes.size(); s++)

	m_pMatrixBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.ParseFromFile(inputfile, reader_config))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pDevice,

		KEY_PRESS_SURFACE_DEFAULT,

	ZeroMemory(&txDesc, sizeof(txDesc));

	vector<WORD> indexList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	reader_config.mtl_search_path = "./"; // Path to material files



	//深度ステンシルバッファ作成



#ifdef _DEBUG



	WORD   icount = indexList.size();





	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_FreeSurface(suf);

			break;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vbDesc.StructureByteStride = 0;

#include <iostream>

 */

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}



	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))





	XMFLOAT4 attenuate;         //減衰(a,b,c)

		SDL_RenderPresent(ren);

		}

}

			break;

struct ConstantMaterial {

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	return 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pSwapChain = NULL;

	};

	m_pLightBuffer = NULL;

{

		return hr;

	auto& attrib = reader.GetAttrib();



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	m_Viewport.MaxDepth = 1.0f;



		return 1;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pVertexShader);

	{

}



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	return;

}

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftX = 0;

	{

				WORD index = idx.vertex_index;

	//vector<Vertex> vertex_t;

	txDesc.Width = rect.Width();

#endif



	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	std::string error;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

int main(int, char**)

};

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	UINT flags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilView);



				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.Height = rect.Height();

	//First we need to start up SDL, and make sure it went ok

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		delete[] pVList;

		{

	Release();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	SDL_DestroyRenderer(ren);

	tinyobj::ObjReader reader;

		size_t index_offset = 0;  // インデントのオフセット

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyTexture(tex);

	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	tinyobj::attrib_t attrib;



	if (FAILED(hr))

	pBackBuffer->Release();

	{



		pIList[j] = indexList[j];

	//ビューポート設定

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





int SEGMENT = 36;

	/*

		m_pImmediateContext->ClearState();

			case SDLK_UP:



			{

		SDL_RenderPresent(ren);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_IndexCount = icount;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		SDL_Delay(1000);

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_DestroyTexture(tex);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Viewport.TopLeftX = 0;

 * Lesson 1: Hello World!

	return 0;



	for (int i = 0; i < vcount; i++)

				vertex.push_back(vertex_tmp);

			}

	auto& attrib = reader.GetAttrib();

	m_VertexCount = 0;

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	}

		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&m_pDevice,

}

void CD3DTest::Release()

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderClear(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				WORD index = idx.vertex_index;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantLightBuffer clb;



	//vector<WORD> index_t;

{

	}



	m_pPixelShader = NULL;

	//Vertex* pVList = new Vertex[vcount];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				indexlist.push_back(index);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{



	UINT strides = sizeof(Vertex);





}

		return hr;

struct ConstantLight {

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pDevice = NULL;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderClear(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 projection;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLight {



	tinyobj::ObjReaderConfig reader_config;

	int     vcount = vertexlist.size();

	std::string inputfile = "test.obj";



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC ibDesc;

		//User requests quit

	pBackBuffer->Release();

};

			index_offset += num_vertices;

	//定数バッファ作成



		return hr;

		return hr;

			index_offset += num_vertices;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		}

	for (size_t s = 0; s < shapes.size(); s++)



	delete[] pIList;

	cbDesc.MiscFlags = 0;

	{

		else if (e.type == SDL_KEYDOWN)



		size_t index_offset = 0;  // インデントのオフセット

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

		return hr;

	//テクスチャ読み込み

	{

		delete[] pVList;

		SDL_RenderPresent(ren);

	return;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.MiscFlags = 0;

	m_pVertexShader = NULL;

	vbDesc.MiscFlags = 0;

};



	scDesc.BufferCount = 1;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pTextureView = NULL;

	}

		}

	//頂点レイアウト作成

				indexlist.push_back(index);

		//User requests quit

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

#endif

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		if (e.type == SDL_QUIT)

	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

#ifdef _DEBUG

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vector<Vertex> vertexlist;



	tinyobj::attrib_t attrib;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	enum KeyPressSurfaces

	m_pSwapChain->Present(0, 0);

	m_VertexCount = vcount;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	dsDesc.Format = txDesc.Format;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pRenderTargetView = NULL;

			for (size_t v = 0; v < fv; v++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_Viewport.Height = (FLOAT)rect.Height();

				break;



			//Select surfaces based on key press

}

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vector<Vertex> vertexlist;

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

{

	//頂点シェーダー生成

int main(int, char**)

	for (int j = 0; j < icount; j++)

	//頂点レイアウト作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		SDL_RenderClear(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&scDesc,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pVertexShader = NULL;

	m_pSampler = NULL;

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	pBackBuffer->Release();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//First we need to start up SDL, and make sure it went ok





{

	SAFE_RELEASE(m_pTexture);

}



int main(int, char**)

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.CPUAccessFlags = 0;

	irData.SysMemSlicePitch = 0;

		}

	m_pSampler = NULL;



	vrData.pSysMem = &pVList[0];

		m_pImmediateContext->ClearState();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pIndexBuffer = NULL;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	UINT flags = 0;

#include <iostream>

	txDesc.MipLevels = 1;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		//User requests quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok





	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		KEY_PRESS_SURFACE_DEFAULT,

	enum KeyPressSurfaces

	Release();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pSwapChain->Present(0, 0);

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	}

	{

				WORD index = idx.vertex_index;

	m_pVertexShader = NULL;

		pVList[i] = vertexlist[i];

		&error,



	}







			// Loop over vertices in the face.

		SDL_Delay(1000);



{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.MiscFlags = 0;

	//Clean up our objects and quit

	cbDesc.StructureByteStride = 0;

		cout << "SDL_INIT_ERROR" << endl;

 * Lesson 1: Hello World!

		m_pImmediateContext->ClearState();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

 */

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SAFE_RELEASE(m_pTexture);

	{

	m_VertexCount = vcount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	{

			{



				break;

	m_pIndexBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.Warning().empty())

{

}

		&error,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

	{

	if (FAILED(hr))

int main(int, char**)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	tinyobj::attrib_t attrib;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}
				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		return hr;

		&error,

{

		exit(1);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		D3D_DRIVER_TYPE_HARDWARE,

	//Create Index

		}

		return hr;

	{

			index_offset += num_vertices;



	auto& attrib = reader.GetAttrib();

		return hr;

	vector<Vertex> vertexlist;

	m_pIndexBuffer = NULL;



	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < 3; i++)

		{

	if (!error.empty())

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))



		return hr;

	Release();

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

	scDesc.BufferDesc.Width = rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		&shapes,



		SDL_RenderCopy(ren, tex, NULL, NULL);

	::GetClientRect(hwnd, &rect);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	std::vector<tinyobj::shape_t> shapes;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	LoadObj(vertexlist, indexList);

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		else if (e.type == SDL_KEYDOWN)

};

#ifdef _DEBUG

			}

	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

{

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		//User presses a key

	std::string inputfile = "test.obj";

	// Loop over shapes

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		pLevels,

	XMFLOAT4X4 view;

	Release();

	m_pDevice = NULL;

		m_pImmediateContext->ClearState();

			index_offset += fv;

	CRect                rect;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//ビューポート設定

	m_pSampler = NULL;



			exit(1);

	m_IndexCount = icount;

		cout << "SDL_INIT_ERROR" << endl;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))



		return hr;

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyWindow(win);







	}

	WORD* pIList = new WORD[icount];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		exit(1);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_VertexCount = 0;

			}

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	if (FAILED(hr))

			case SDLK_DOWN:

	vector<WORD> indexList;

	dsDesc.Texture2D.MipSlice = 0;

	//頂点バッファ作成

	D3D11_BUFFER_DESC cbDesc;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vrData.pSysMem = &pVList[0];

struct ConstantLight {

			// Loop over vertices in the face.

};

			for (size_t v = 0; v < fv; v++)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_Delay(1000);

	XMFLOAT4X4 world;

	m_VertexCount = vcount;

	SDL_DestroyWindow(win);

#include <SDL.h>

		}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.Width = (FLOAT)rect.Width();

			index_offset += fv;

	{

	//Vertex* pVList = new Vertex[vcount];

int main(int, char**)

{

{

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

};





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pTextureView);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_VertexCount = vcount;

	ibDesc.StructureByteStride = 0;

		{

		&m_pSwapChain,

		return hr;

	UINT flags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			case SDLK_RIGHT:

	{

				break;

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	pBackBuffer->Release();

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			case SDLK_LEFT:



	DXGI_SWAP_CHAIN_DESC scDesc;

		size_t index_offset = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_DestroyTexture(tex);



				vertex.push_back(vertex_tmp);

		return hr;





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//深度ステンシルバッファ作成

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

struct ConstantMatrixBuffer {

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		R"(cube.obj)");



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//ビューポート設定

/*

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_DOWN:





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pTexture);



	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	std::string inputfile = "test.obj";

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 projection;



	m_pImmediateContext = NULL;

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{

				indexlist.push_back(idx.vertex_index);



	return 0;

	return hr;

#include <iostream>



 * Lesson 1: Hello World!

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		pLevels,

		delete[] pVList;

	}

CD3DTest::~CD3DTest()

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	SAFE_RELEASE(m_pImmediateContext);

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.MinDepth = 0.0f;

				// access to vertex

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	UINT offsets = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pVertexShader = NULL;

	vrData.SysMemPitch = 0;

	D3D_FEATURE_LEVEL level;

			{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ConstantMaterial material; //物体の質感

	m_Viewport.TopLeftX = 0;





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

int main(int, char**)

	{



				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	tinyobj::ObjReader reader;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.eyePos, eye);



	vbDesc.StructureByteStride = 0;

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	{

			{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		{

		}

	WORD* pIList = new WORD[icount];



		//User requests quit

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.Windowed = TRUE;



	vrData.pSysMem = &pVList[0];

	//頂点シェーダー生成

void CD3DTest::Render()



			}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;







	}

		}

	}

	SDL_Quit();

	std::vector<tinyobj::shape_t> shapes;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_FreeSurface(suf);

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	WORD   icount = indexList.size();





	}

	UINT strides = sizeof(Vertex);

	SDL_DestroyWindow(win);



	//インデックスバッファ作成

{

HRESULT CD3DTest::Create(HWND hwnd)

			{

		SDL_RenderPresent(ren);

		&materials,



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	if (FAILED(hr))

	{

}

CD3DTest::~CD3DTest()

		return hr;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyWindow(win);

	if (FAILED(hr))



	txDesc.ArraySize = 1;

CD3DTest::~CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#include <SDL.h>

	/*

		m_pImmediateContext->ClearState();



	txDesc.MipLevels = 1;

		return hr;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDepthStencilView = NULL;

			for (size_t v = 0; v < fv; v++)





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

void CD3DTest::Release()

		}

			}



		SDL_Delay(1000);

	::GetClientRect(hwnd, &rect);



	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			case SDLK_UP:

		return hr;

	//インデックスバッファ作成

	//インデックスバッファ作成



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_RIGHT,

CD3DTest::~CD3DTest()

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_Delay(1000);

	m_Viewport.TopLeftX = 0;

		return hr;

		&scDesc,

{

	//Create Index

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	auto& attrib = reader.GetAttrib();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		SDL_Delay(1000);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files







	std::vector<tinyobj::material_t> materials;

		&error,

	WORD   icount = indexList.size();

	XMFLOAT4 ambient;           //環境(r,g,b)



				vertex.push_back(vertex_tmp);

	enum KeyPressSurfaces

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyWindow(win);

	m_pDevice = NULL;

CD3DTest::CD3DTest()

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	pBackBuffer->Release();

		SDL_Delay(1000);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//深度ステンシルバッファ作成

		}

int main(int, char**)



	txDesc.SampleDesc.Count = 1;



	};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.MiscFlags = 0;

	m_IndexCount = 0;

	vector<WORD> indexList;

		&error,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.MiscFlags = 0;

struct ConstantMatrixBuffer {

	D3D11_SUBRESOURCE_DATA irData;

		}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pVertexShader = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



			}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	std::string error;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	pBackBuffer->Release();

	vrData.pSysMem = &pVList[0];

	tinyobj::ObjReader reader;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			{

		KEY_PRESS_SURFACE_RIGHT,

				indexlist.push_back(index);

		pIList[j] = indexList[j];

		if (e.type == SDL_QUIT)

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





#include <SDL.h>

	UINT offsets = 0;

	vrData.SysMemSlicePitch = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_DOWN,

		{

		KEY_PRESS_SURFACE_RIGHT,



	D3D11_BUFFER_DESC ibDesc;

	m_Viewport.MinDepth = 0.0f;

	//深度ステンシルバッファ作成

	SDL_Event e;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		KEY_PRESS_SURFACE_LEFT,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				vertex.push_back(vertex_tmp);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

		if (e.type == SDL_QUIT)

	LoadObj(vertexlist, indexList);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//定数バッファ作成

		if (!ret)

	SDL_DestroyWindow(win);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

{

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		D3D_DRIVER_TYPE_HARDWARE,

				break;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	SAFE_RELEASE(m_pImmediateContext);

	enum KeyPressSurfaces

		D3D11_SDK_VERSION,

	//インデックスバッファ作成

};

	m_Viewport.MaxDepth = 1.0f;

	vrData.SysMemPitch = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderPresent(ren);

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	UINT offsets = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_RenderClear(ren);

		&m_pDevice,

{

	XMFLOAT4X4 world;

	m_pIndexBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	UINT offsets = 0;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.eyePos, eye);

	dsDesc.Format = txDesc.Format;

	LoadObj(vertexlist, indexList);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (m_pImmediateContext)

	SDL_DestroyRenderer(ren);



{

			{

	tinyobj::ObjReaderConfig reader_config;

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

	{

		}



		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.MinDepth = 0.0f;



	SDL_FreeSurface(suf);

		return hr;

		// Loop over faces(polygon)



	scDesc.Windowed = TRUE;

	WORD   icount = indexList.size();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	UINT flags = 0;

	scDesc.SampleDesc.Count = 1;



	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.MiscFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}



		KEY_PRESS_SURFACE_UP,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&attrib,

CD3DTest::CD3DTest()

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (size_t s = 0; s < shapes.size(); s++)

	while (SDL_PollEvent(&e) != 0)





	m_pSampler = NULL;

				tinyobj::real_t tx =

	{

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.ArraySize = 1;

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pSwapChain = NULL;

		return hr;

struct ConstantMatrixBuffer {

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pSampler = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferDesc.Height = rect.Height();



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	SAFE_RELEASE(m_pTextureView);

	tinyobj::ObjReader reader;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	std::string inputfile = "test.obj";

		pIList[j] = indexList[j];

				WORD index = idx.vertex_index;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





		SDL_RenderCopy(ren, tex, NULL, NULL);

			//Select surfaces based on key press

	//インデックスバッファ作成



	UINT strides = sizeof(Vertex);

				tinyobj::real_t ty =

	{

		if (!ret)

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	cbDesc.MiscFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	if (!error.empty())

	ConstantLight    pntLight; //点光源

	auto& attrib = reader.GetAttrib();



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

		exit(1);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



	UINT flags = 0;

#include <iostream>

	m_pTexture = NULL;

	m_VertexCount = vcount;

	m_IndexCount = icount;

	SDL_Quit();

		KEY_PRESS_SURFACE_DOWN,

	txDesc.ArraySize = 1;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pInputLayout);

	m_pTextureView = NULL;

		1,

	//First we need to start up SDL, and make sure it went ok

	cbDesc.StructureByteStride = 0;

			default:

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#include <SDL.h>

	}

	for (int j = 0; j < icount; j++)

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

			default:

			case SDLK_DOWN:



	int     vcount = vertexlist.size();

	std::vector<tinyobj::shape_t> shapes;

	}

	while (SDL_PollEvent(&e) != 0)

	//頂点レイアウト作成

	if (FAILED(hr))

CD3DTest::CD3DTest()

	UINT flags = 0;



	//ビューポート設定

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 specular;          //反射(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pMatrixBuffer = NULL;

#ifdef _DEBUG

	if (FAILED(hr))

		SDL_RenderClear(ren);

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			for (size_t v = 0; v < fv; v++)

		delete[] pVList;



	vrData.pSysMem = &pVList[0];



		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	LoadObj(vertexlist, indexList);

	delete[] pVList;

	irData.pSysMem = &pIList[0];

				vertex.push_back(vertex_tmp);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (m_pImmediateContext)

	ConstantMaterial material; //物体の質感

	//Vertex* pVList = new Vertex[vcount];

struct ConstantMaterial {



		&m_pSwapChain,

	scDesc.SampleDesc.Quality = 0;

	}



	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{





	Release();

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	if (!error.empty())

	//インデックスバッファ作成

	m_pSwapChain->Present(0, 0);





	}



	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_DOWN,

	float    nearZ = 0.1f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

#include <iostream>

}

	//Vertex* pVList = new Vertex[vcount];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferCount = 1;



		return hr;

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pTexture = NULL;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDepthStencilView = NULL;

	tinyobj::ObjReaderConfig reader_config;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



struct ConstantMaterial {

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				// access to vertex

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		m_pImmediateContext->ClearState();



		&scDesc,

	delete[] pIList;

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			break;

	if (FAILED(hr))

		1,

	SDL_Quit();

		{



	for (const auto& shape : shapes)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	//頂点レイアウト作成

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pMatrixBuffer = NULL;

		else if (e.type == SDL_KEYDOWN)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vector<Vertex> vertexlist;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#endif

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyRenderer(ren);

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

using std::cout; using std::endl;

	m_IndexCount = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				vertex.push_back(vertex_tmp);

	WORD* pIList = new WORD[icount];

	m_pDepthStencilView = NULL;

CD3DTest::CD3DTest()

	//深度ステンシルバッファ作成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#define TINYOBJLOADER_IMPLEMENTATION

	//Create Index

	{

struct ConstantLightBuffer {

	txDesc.SampleDesc.Quality = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		}

		return hr;





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				indexlist.push_back(idx.vertex_index);

	}

#include <SDL.h>

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

		// Loop over faces(polygon)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				tinyobj::real_t tx =

				vertex.push_back(vertex_tmp);

HRESULT CD3DTest::Create(HWND hwnd)

	//ビューポート設定

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t tx =

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



			for (size_t v = 0; v < fv; v++)

	m_Viewport.MinDepth = 0.0f;

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	CRect                rect;



	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#include <iostream>

	XMFLOAT4         ambient;  //環境光(r,g,b)

	tinyobj::ObjReaderConfig reader_config;

		exit(1);

	SAFE_RELEASE(m_pVertexBuffer);

		if (!ret)

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pIList;

	//インデックスバッファ作成

	//頂点シェーダー生成

			for (size_t v = 0; v < fv; v++)

int SEGMENT = 36;

			}

	SAFE_RELEASE(m_pLightBuffer);

	tinyobj::ObjReader reader;



	::ZeroMemory(&scDesc, sizeof(scDesc));

 * Lesson 1: Hello World!

	/*

		}

	std::string imagePath = "hello.bmp";

	//頂点レイアウト作成

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

};

		if (!reader.Error().empty())



		{

	//インデックスバッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_pPixelShader = NULL;

	m_IndexCount = 0;

			}

	{

int main(int, char**)



	irData.SysMemSlicePitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





				break;

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

		m_pImmediateContext->ClearState();

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	tinyobj::ObjReader reader;

		&shapes,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			for (size_t v = 0; v < fv; v++)

			index_offset += fv;

	vbDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

		&scDesc,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D11_BUFFER_DESC ibDesc;







	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	irData.pSysMem = &pIList[0];

	ConstantLight    pntLight; //点光源

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	SDL_Event e;

		D3D11_SDK_VERSION,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pVertexShader = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMFLOAT4         eyePos;   //視点座標

		SDL_RenderClear(ren);

	UINT flags = 0;

	//頂点バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	delete[] pVList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.pSysMem = &pVList[0];

	txDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



 */



		SDL_RenderClear(ren);

	//インデックスバッファ作成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

};

		SDL_RenderPresent(ren);

	//頂点バッファ作成

	if (FAILED(hr))

	}



	D3D11_SUBRESOURCE_DATA irData;



				tinyobj::real_t ty =

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	if (FAILED(hr))



	auto& materials = reader.GetMaterials();





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

#include <iostream>

	m_pLightBuffer = NULL;

	delete[] pIList;



	XMFLOAT4 specular;          //反射(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_BUFFER_DESC ibDesc;

	}

	for (int i = 0; i < 3; i++)

				break;

				break;

		return hr;

{

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.TopLeftX = 0;



	tinyobj::attrib_t attrib;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_IndexCount = icount;

		KEY_PRESS_SURFACE_TOTAL

	float    nearZ = 0.1f;

	//定数バッファ作成

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	Vertex* pVList = new Vertex[vcount];

	txDesc.ArraySize = 1;



struct ConstantLight {

	D3D11_SUBRESOURCE_DATA irData;

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	vbDesc.CPUAccessFlags = 0;

				// access to vertex

	if (FAILED(hr))

	float    nearZ = 0.1f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	//First we need to start up SDL, and make sure it went ok

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

void CD3DTest::Render()

	irData.pSysMem = &pIList[0];

			// Loop over vertices in the face.

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.CPUAccessFlags = 0;

	txDesc.Width = rect.Width();

	m_pDepthStencilView = NULL;

CD3DTest::CD3DTest()

	HRESULT              hr;

void CD3DTest::Release()

	for (int j = 0; j < icount; j++)



}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pMatrixBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.StructureByteStride = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	tinyobj::ObjReaderConfig reader_config;



	UINT flags = 0;

	return 0;

	vbDesc.StructureByteStride = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		pIList[j] = indexList[j];

	enum KeyPressSurfaces

	std::string error;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	cbDesc.StructureByteStride = 0;



	m_pPixelShader = NULL;

			switch (e.key.keysym.sym)

	m_pTexture = NULL;

	ibDesc.MiscFlags = 0;

		{

	cbDesc.CPUAccessFlags = 0;

CD3DTest::CD3DTest()





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};

	if (FAILED(hr))

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	tinyobj::attrib_t attrib;

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DOWN,



		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4X4 view;

};



		return hr;

	for (int i = 0; i < 3; i++)

			{

CD3DTest::CD3DTest()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		KEY_PRESS_SURFACE_TOTAL

	txDesc.ArraySize = 1;

struct ConstantLightBuffer {

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyWindow(win);

			break;

	SAFE_RELEASE(m_pInputLayout);



		&level,

	m_pDevice = NULL;

	std::string imagePath = "hello.bmp";



	txDesc.Width = rect.Width();

	scDesc.BufferCount = 1;

	SDL_FreeSurface(bmp);

		return hr;

		SDL_Delay(1000);

}

		{

	SAFE_RELEASE(m_pDepthStencilTexture);



	reader_config.mtl_search_path = "./"; // Path to material files





#include <iostream>

	scDesc.BufferCount = 1;

			case SDLK_RIGHT:

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	auto& shapes = reader.GetShapes();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	UINT strides = sizeof(Vertex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_TOTAL

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_VertexCount = vcount;

		return 1;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	bool ret = tinyobj::LoadObj(



	LoadObj(vertexlist, indexList);

		SDL_Delay(1000);

		m_pImmediateContext->ClearState();

	cbDesc.MiscFlags = 0;

		return hr;

	}

	bool ret = tinyobj::LoadObj(

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	dsDesc.Format = txDesc.Format;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_DestroyTexture(tex);

		&scDesc,

				break;

	XMFLOAT4 pos;               //座標(x,y,z)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}

}

	SDL_Event e;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pDevice,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4X4 projection;



	tinyobj::ObjReaderConfig reader_config;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	}

	UINT flags = 0;

	SAFE_RELEASE(m_pInputLayout);

	m_VertexCount = vcount;

	}

		if (!ret)

#include <iostream>

	if (FAILED(hr))

	//ビューポート設定





		return hr;

	}

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	scDesc.SampleDesc.Quality = 0;



	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferDesc.Width = rect.Width();

	DXGI_SWAP_CHAIN_DESC scDesc;

	vector<WORD> indexList;

	m_pVertexShader = NULL;

	{

	ConstantMaterial material; //物体の質感

{



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			//Select surfaces based on key press

	XMFLOAT4X4 world;

	{

	txDesc.ArraySize = 1;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

CD3DTest::~CD3DTest()



	ibDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		}

	enum KeyPressSurfaces

		return hr;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMFLOAT4 ambient;           //環境(r,g,b)

	vrData.pSysMem = &pVList[0];

			index_offset += num_vertices;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	std::vector<tinyobj::material_t> materials;

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//頂点バッファ作成

			{

			}

	}

struct ConstantLight {



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	Release();



		SDL_Delay(1000);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

CD3DTest::CD3DTest()

CD3DTest::CD3DTest()

	m_Angle += XMConvertToRadians(1.0f);

			exit(1);









				break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//頂点バッファ作成

		return hr;

	}

	auto& shapes = reader.GetShapes();



	if (FAILED(hr))



	enum KeyPressSurfaces

	D3D11_SUBRESOURCE_DATA vrData;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		KEY_PRESS_SURFACE_LEFT,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		}

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				// access to vertex

				vertex.push_back(vertex_tmp);



	delete[] pVList;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Quit();

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		//User presses a key





	{

	while (SDL_PollEvent(&e) != 0)

	scDesc.SampleDesc.Count = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

CD3DTest::~CD3DTest()

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	vbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;

		SDL_RenderPresent(ren);



		}

	SDL_DestroyTexture(tex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	for (int j = 0; j < icount; j++)

 */



	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	m_Viewport.TopLeftY = 0;

	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		NULL,

	irData.SysMemPitch = 0;

CD3DTest::CD3DTest()

int main(int, char**)

	m_Viewport.TopLeftX = 0;



	tinyobj::attrib_t attrib;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	ConstantLightBuffer clb;

	m_pVertexShader = NULL;

				break;



}

	m_pDepthStencilTexture = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

	m_pSwapChain->Present(0, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	//Vertex* pVList = new Vertex[vcount];

	m_pDevice = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			case SDLK_LEFT:

	UINT strides = sizeof(Vertex);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				// access to vertex

	//ビューポート設定

	}

	SAFE_RELEASE(m_pInputLayout);

	//テクスチャ読み込み

	txDesc.ArraySize = 1;

	//Clean up our objects and quit

				break;

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		}

{

/*

	D3D_FEATURE_LEVEL level;

}

	D3D11_SUBRESOURCE_DATA irData;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pIndexBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;

	//定数バッファ作成

		SDL_Delay(1000);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.Height = rect.Height();

	}

	{

	CRect                rect;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点シェーダー生成

using std::cout; using std::endl;

}

				break;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t ty =

{

	txDesc.SampleDesc.Quality = 0;

	/*

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.pSysMem = &pVList[0];

 */

	vbDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_RenderPresent(ren);



};

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include <iostream>



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				indexlist.push_back(idx.vertex_index);



	XMFLOAT4         eyePos;   //視点座標

		SDL_RenderPresent(ren);

	XMFLOAT4X4 view;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			for (size_t v = 0; v < num_vertices; v++)



	}

	m_pDepthStencilView = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	m_pVertexShader = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pVList;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		pVList[i] = vertexlist[i];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		delete[] pIList;

	}

			{

	XMFLOAT4 ambient;           //環境(r,g,b)

	irData.SysMemPitch = 0;



				indexlist.push_back(idx.vertex_index);





	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_FreeSurface(bmp);

#include <iostream>

	auto& shapes = reader.GetShapes();

}

/*

/*

#define TINYOBJLOADER_IMPLEMENTATION

	{

#include <iostream>

	SDL_FreeSurface(bmp);

	pBackBuffer->Release();

};

	};

			}

	txDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;



		NULL,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pIndexBuffer = NULL;

	SDL_DestroyTexture(tex);

};

	m_pMatrixBuffer = NULL;

	SDL_Quit();

		SDL_RenderPresent(ren);



		return hr;



{



	{

}
	m_pSwapChain = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ibDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.TopLeftY = 0;

	{



 * Lesson 1: Hello World!

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		{

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	SDL_DestroyWindow(win);

	vrData.SysMemPitch = 0;

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_IndexCount = 0;

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	return 0;



	SDL_FreeSurface(bmp);



	for (int j = 0; j < icount; j++)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				break;

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 projection;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.SampleDesc.Quality = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pSwapChain->Present(0, 0);

	bool ret = tinyobj::LoadObj(

	while (SDL_PollEvent(&e) != 0)

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//Clean up our objects and quit

struct ConstantMaterial {



			default:

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	irData.SysMemSlicePitch = 0;

		&scDesc,

	delete[] pIList;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_RenderClear(ren);

void CD3DTest::Render()

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_RIGHT,

	float    farZ = 100.0f;



	m_pSampler = NULL;

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include <iostream>



	m_IndexCount = 0;



	vector<WORD> indexList;

		SDL_RenderPresent(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Event e;



	XMFLOAT4X4 projection;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SDL_FreeSurface(bmp);

	{

		}

}

	m_pInputLayout = NULL;

	{



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	D3D11_SUBRESOURCE_DATA vrData;

	m_pDevice = NULL;



	//定数バッファ作成

	if (!error.empty())





			default:

	dsDesc.Format = txDesc.Format;

	txDesc.CPUAccessFlags = 0;

	for (int i = 0; i < 3; i++)

	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_TEXTURE2D_DESC txDesc;



	LoadObj(vertexlist, indexList);

#endif

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	D3D11_BUFFER_DESC ibDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		delete[] pIList;

	cbDesc.CPUAccessFlags = 0;



			case SDLK_UP:

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vrData.SysMemSlicePitch = 0;



	}

	vrData.SysMemPitch = 0;

}
	scDesc.OutputWindow = hwnd;







	m_Viewport.TopLeftY = 0;

		SDL_RenderClear(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	D3D11_SAMPLER_DESC smpDesc;



	if (FAILED(hr))



};

	{

		&shapes,



	// Loop over shapes

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&m_pDevice,



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}



	SAFE_RELEASE(m_pVertexBuffer);

#endif

	return 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <SDL.h>

	m_VertexCount = 0;

		KEY_PRESS_SURFACE_DEFAULT,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Event e;

	}

	SAFE_RELEASE(m_pDevice);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_BUFFER_DESC cbDesc;

		if (e.type == SDL_QUIT)

	SDL_FreeSurface(bmp);





	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderPresent(ren);

};

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			case SDLK_RIGHT:

	}

		{

			// Loop over vertices in the face.

		}

			// Loop over vertices in the face.

		if (!reader.Error().empty())

		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.TopLeftX = 0;

struct ConstantLightBuffer {

	std::string imagePath = "hello.bmp";

	enum KeyPressSurfaces

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	//Vertex* pVList = new Vertex[vcount];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

};

	SAFE_RELEASE(m_pDevice);



	m_pIndexBuffer = NULL;

		return hr;

			{



	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		}

			index_offset += fv;



	vbDesc.StructureByteStride = 0;

	return 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.BufferCount = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pTexture = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			for (size_t v = 0; v < num_vertices; v++)

		if (e.type == SDL_QUIT)

	m_Viewport.Height = (FLOAT)rect.Height();

	//Create Index



	m_IndexCount = 0;





	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.Width = rect.Width();

	return;

	SDL_DestroyRenderer(ren);



	D3D11_TEXTURE2D_DESC txDesc;

	UINT offsets = 0;



	txDesc.SampleDesc.Quality = 0;

		D3D_DRIVER_TYPE_HARDWARE,

				break;

	return;

	SAFE_RELEASE(m_pVertexShader);

	//Create Index

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		D3D11_SDK_VERSION,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL level;

	txDesc.Width = rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				WORD index = idx.vertex_index;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

	for (const auto& shape : shapes)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	UINT flags = 0;

};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

struct ConstantMaterial {

	D3D11_BUFFER_DESC cbDesc;

	float    farZ = 100.0f;

struct ConstantMatrixBuffer {

				break;

		&level,

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)



	scDesc.SampleDesc.Count = 1;

		R"(cube.obj)");

	irData.SysMemPitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.SampleDesc.Count = 1;

	ConstantLight    pntLight; //点光源

	vbDesc.MiscFlags = 0;

		flags,

		return hr;

		KEY_PRESS_SURFACE_UP,

	float    fov = XMConvertToRadians(20.0f);



}

		NULL,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext = NULL;

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	txDesc.MipLevels = 1;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pSwapChain->Present(0, 0);

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

 */

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;



void CD3DTest::Render()

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		{



		delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vrData.SysMemSlicePitch = 0;

};

	SDL_DestroyWindow(win);

	enum KeyPressSurfaces

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&scDesc,

	m_pInputLayout = NULL;

	{

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pRenderTargetView = NULL;

int SEGMENT = 36;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string imagePath = "hello.bmp";

	SDL_Event e;

		{



#ifdef _DEBUG



	auto& materials = reader.GetMaterials();



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	tinyobj::ObjReader reader;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pVList;

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pTexture = NULL;

	//ピクセルシェーダー生成

	ibDesc.ByteWidth = sizeof(WORD) * icount;



CD3DTest::CD3DTest()

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);





				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ConstantLight    pntLight; //点光源

	for (const auto& shape : shapes)

	HRESULT              hr;

	ibDesc.CPUAccessFlags = 0;

		return hr;

	D3D11_SUBRESOURCE_DATA irData;



		}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#define TINYOBJLOADER_IMPLEMENTATION

	ConstantLight    pntLight; //点光源

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    nearZ = 0.1f;

	vector<Vertex> vertexlist;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				WORD index = idx.vertex_index;

		&level,



	{

	enum KeyPressSurfaces

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	//ピクセルシェーダー生成





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	}

	m_pVertexBuffer = NULL;



	//Key press surfaces constants

HRESULT CD3DTest::Create(HWND hwnd)

	{

	SAFE_RELEASE(m_pSampler);



	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	CRect                rect;

	D3D11_BUFFER_DESC ibDesc;

	m_pDevice = NULL;

}

				// access to vertex

			case SDLK_LEFT:

{

		return hr;

	//vector<Vertex> vertex_t;

	txDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;



		KEY_PRESS_SURFACE_UP,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ConstantMatrixBuffer cmb;

		KEY_PRESS_SURFACE_LEFT,

	}

	m_pRenderTargetView = NULL;



		return hr;



HRESULT CD3DTest::Create(HWND hwnd)

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pDepthStencilTexture);

	std::string inputfile = "test.obj";

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	/*

		&m_pImmediateContext);



		}

		KEY_PRESS_SURFACE_UP,

	SDL_Quit();

{

	ibDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

int main(int, char**)

		return hr;

	irData.SysMemPitch = 0;



		return hr;

		KEY_PRESS_SURFACE_LEFT,

	}

 */

	SDL_DestroyWindow(win);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	scDesc.Windowed = TRUE;

};

	}

		if (e.type == SDL_QUIT)

	m_IndexCount = icount;

	//vector<Vertex> vertex_t;

				WORD index = idx.vertex_index;



		SDL_Delay(1000);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

	float    nearZ = 0.1f;

	while (SDL_PollEvent(&e) != 0)

		// Loop over faces(polygon)

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Angle += XMConvertToRadians(1.0f);

			{

	SDL_DestroyTexture(tex);

	dsDesc.Format = txDesc.Format;



	m_pDepthStencilView = NULL;

		pIList[j] = indexList[j];

		pVList[i] = vertexlist[i];

			index_offset += fv;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



			//Select surfaces based on key press

			{

}

		D3D_DRIVER_TYPE_HARDWARE,

			int num_vertices = shape.mesh.num_face_vertices[f];

		if (!reader.Error().empty())

void CD3DTest::Render()



		size_t index_offset = 0;

 */

	SAFE_RELEASE(m_pTexture);

	reader_config.mtl_search_path = "./"; // Path to material files





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

		&m_pSwapChain,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	{



			case SDLK_LEFT:

		m_pImmediateContext->ClearState();

{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))



	//インデックスバッファ作成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	auto& attrib = reader.GetAttrib();

		pLevels,



	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pLightBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	::GetClientRect(hwnd, &rect);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

	//Create Index

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



		&m_pDevice,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



			for (size_t v = 0; v < num_vertices; v++)

			for (size_t v = 0; v < fv; v++)



	UINT flags = 0;

			}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	vrData.SysMemPitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		NULL,

	m_VertexCount = vcount;



	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);

	ConstantLightBuffer clb;

	{

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.CPUAccessFlags = 0;

				indexlist.push_back(index);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	UINT flags = 0;

				// access to vertex

	::GetClientRect(hwnd, &rect);

};

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);







	{

}



	delete[] pIList;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantMaterial {

			case SDLK_RIGHT:

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//vector<WORD> index_t;



	m_pSampler = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

using std::cout; using std::endl;





	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

{

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			case SDLK_RIGHT:

	WORD* pIList = new WORD[icount];

	ibDesc.MiscFlags = 0;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

	m_pLightBuffer = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		&scDesc,

				break;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



			default:

	D3D11_BUFFER_DESC vbDesc;



	::GetClientRect(hwnd, &rect);





	{

	m_Viewport.MinDepth = 0.0f;

#ifdef _DEBUG

		return hr;



}

#include "DirectXManager.h"

	}

	//頂点レイアウト作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



#define TINYOBJLOADER_IMPLEMENTATION

	//頂点レイアウト作成

 */

			index_offset += num_vertices;

CD3DTest::~CD3DTest()



	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	vbDesc.MiscFlags = 0;

	UINT offsets = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	float    farZ = 100.0f;

		pVList[i] = vertexlist[i];

	m_VertexCount = vcount;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pTexture);

		1,

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	std::string inputfile = "test.obj";

	XMFLOAT4         eyePos;   //視点座標

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

			{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pLightBuffer);







	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		pVList[i] = vertexlist[i];

		return hr;

	ConstantMaterial material; //物体の質感

	SDL_DestroyRenderer(ren);

	m_Angle += XMConvertToRadians(1.0f);

{

}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return 0;



	::GetClientRect(hwnd, &rect);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_SUBRESOURCE_DATA vrData;

		}

	CRect                rect;

		pVList[i] = vertexlist[i];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4X4 view;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	{

	m_pDepthStencilTexture = NULL;



	CRect                rect;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t ty =

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

		{

	SDL_Quit();

	if (FAILED(hr))

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		size_t index_offset = 0;  // インデントのオフセット



	m_Viewport.Width = (FLOAT)rect.Width();

	vector<WORD> indexList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pIndexBuffer = NULL;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4X4 view;

	if (FAILED(hr))

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

}

	};

	}

	SDL_DestroyTexture(tex);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		if (!ret)



	D3D11_SAMPLER_DESC smpDesc;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_Angle += XMConvertToRadians(1.0f);

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pTexture);

	m_pDepthStencilView = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	UINT offsets = 0;



	txDesc.CPUAccessFlags = 0;



			case SDLK_UP:

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pSwapChain,

CD3DTest::~CD3DTest()

				vertex.push_back(vertex_tmp);

}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.MaxDepth = 1.0f;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



{

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderPresent(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);

	std::string error;

	// Loop over shapes

	SAFE_RELEASE(m_pImmediateContext);



	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pIndexBuffer);



		&error,

		&m_pSwapChain,

		SDL_RenderCopy(ren, tex, NULL, NULL);



	std::vector<tinyobj::shape_t> shapes;





	SAFE_RELEASE(m_pMatrixBuffer);

	tinyobj::ObjReader reader;

				break;

		return hr;

{

/*

{

	m_pInputLayout = NULL;

	vbDesc.StructureByteStride = 0;

	//Create Index

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

	m_pTextureView = NULL;

	if (FAILED(hr))

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	enum KeyPressSurfaces

	m_IndexCount = icount;

	m_pSwapChain = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&m_pDevice,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&error,

};

	m_pSwapChain = NULL;

	{



		SDL_Delay(1000);



		exit(1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

#include <iostream>

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferCount = 1;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

};

		&m_pDevice,

	//vector<Vertex> vertex_t;

	// Loop over shapes

	SAFE_RELEASE(m_pDevice);

	m_pDepthStencilTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&m_pDevice,

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	{

	//ピクセルシェーダー生成

		delete[] pVList;

	if (m_pImmediateContext)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			for (size_t v = 0; v < fv; v++)





	WORD   icount = indexList.size();

	}

		size_t index_offset = 0;

	m_Angle += XMConvertToRadians(1.0f);

	//頂点バッファ作成

	}

	for (const auto& shape : shapes)



	{

	{

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	{

}

		//User requests quit





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	for (const auto& shape : shapes)

	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pSwapChain);

	}*/

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

	irData.SysMemSlicePitch = 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMFLOAT4 specular;          //反射(r,g,b)

		if (e.type == SDL_QUIT)

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pVertexBuffer);

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

using std::cout; using std::endl;

		return hr;

	SAFE_RELEASE(m_pTextureView);



	m_Viewport.Width = (FLOAT)rect.Width();

		exit(1);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pImmediateContext);

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{



 */

	ibDesc.StructureByteStride = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pSampler);



	float    nearZ = 0.1f;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			exit(1);



			//Select surfaces based on key press

		{

	SDL_FreeSurface(suf);



				break;

		return hr;

	m_pTexture = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	Release();

				break;

	::GetClientRect(hwnd, &rect);



	{

	//Clean up our objects and quit

		&m_pSwapChain,

	SAFE_RELEASE(m_pMatrixBuffer);

	vector<WORD> indexList;

		{

				break;

	//定数バッファ作成



	SAFE_RELEASE(m_pDepthStencilTexture);



		delete[] pIList;

		{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		pVList[i] = vertexlist[i];

	std::vector<tinyobj::shape_t> shapes;

	m_pVertexShader = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <SDL.h>

	Release();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_RenderPresent(ren);



	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantLightBuffer clb;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	txDesc.SampleDesc.Count = 1;

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//定数バッファ作成



CD3DTest::CD3DTest()

		//User requests quit

	m_pSwapChain = NULL;



	//Create Index

	Release();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;



		{

		D3D_DRIVER_TYPE_HARDWARE,



		if (!reader.Error().empty())

				break;

	m_Viewport.MinDepth = 0.0f;



	SAFE_RELEASE(m_pLightBuffer);

	D3D11_BUFFER_DESC vbDesc;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

struct ConstantMaterial {



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

		if (e.type == SDL_QUIT)

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	UINT offsets = 0;

			}

int SEGMENT = 36;

	{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

 */

	//頂点シェーダー生成

	SDL_DestroyRenderer(ren);



struct ConstantMaterial {

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

int main(int, char**)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





				vertex.push_back(vertex_tmp);

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	delete[] pIList;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//テクスチャ読み込み





#include "DirectXManager.h"





	cbDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);



	}

}




	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	}

	if (FAILED(hr))

	SDL_FreeSurface(bmp);

	SDL_DestroyTexture(tex);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pSwapChain = NULL;

	// Loop over shapes

		size_t index_offset = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_Viewport.MaxDepth = 1.0f;

#define TINYOBJLOADER_IMPLEMENTATION

				WORD index = idx.vertex_index;



	cbDesc.MiscFlags = 0;



	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))



#define TINYOBJLOADER_IMPLEMENTATION

	Release();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::vector<tinyobj::shape_t> shapes;



	m_pDepthStencilView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferCount = 1;





	auto& shapes = reader.GetShapes();





		&m_pSwapChain,



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		return hr;



	m_Viewport.MaxDepth = 1.0f;

	std::vector<tinyobj::material_t> materials;

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	std::string imagePath = "hello.bmp";

	SDL_DestroyWindow(win);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	scDesc.Windowed = TRUE;

	vbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{

	//vector<Vertex> vertex_t;





				break;

};



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	irData.SysMemPitch = 0;

#include <iostream>

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	auto& attrib = reader.GetAttrib();

		}

	//頂点レイアウト作成

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

	m_pIndexBuffer = NULL;



	if (!error.empty())

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			}

	std::string inputfile = "test.obj";

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			case SDLK_RIGHT:

				break;

{

	D3D11_BUFFER_DESC cbDesc;

	//頂点シェーダー生成

		&shapes,



	while (SDL_PollEvent(&e) != 0)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	ID3D11Texture2D* pBackBuffer;

	}



struct ConstantMatrixBuffer {



#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_SUBRESOURCE_DATA vrData;

			// Loop over vertices in the face.



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		&shapes,

	SDL_DestroyRenderer(ren);

	SDL_Quit();



	scDesc.BufferDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_LEFT,

	//頂点シェーダー生成

	dsDesc.Format = txDesc.Format;

	{



	std::string imagePath = "hello.bmp";

	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))



	for (const auto& shape : shapes)



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}*/

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	m_pLightBuffer = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			//Select surfaces based on key press

	XMFLOAT4         eyePos;   //視点座標

	scDesc.SampleDesc.Count = 1;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

		{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}

	dsDesc.Texture2D.MipSlice = 0;



{



	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (!reader.ParseFromFile(inputfile, reader_config))

	for (size_t s = 0; s < shapes.size(); s++)

}
}

{

	SAFE_RELEASE(m_pMatrixBuffer);

	ConstantMaterial material; //物体の質感

 * Lesson 1: Hello World!



	m_Viewport.TopLeftX = 0;

{

	vbDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	scDesc.Windowed = TRUE;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&materials,

				indexlist.push_back(idx.vertex_index);

				vertex.push_back(vertex_tmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>

	m_pVertexShader = NULL;

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点シェーダー生成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			case SDLK_RIGHT:

	XMFLOAT4X4 world;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pTexture = NULL;

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& shapes = reader.GetShapes();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

			break;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}



			case SDLK_DOWN:

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&level,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		delete[] pIList;

	D3D11_SUBRESOURCE_DATA irData;







	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Height = rect.Height();

{

}





			for (size_t v = 0; v < num_vertices; v++)

	//頂点レイアウト作成

	for (const auto& shape : shapes)



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	float    nearZ = 0.1f;

	m_VertexCount = 0;



};

	m_pInputLayout = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;



CD3DTest::CD3DTest()



		//User presses a key

				WORD index = idx.vertex_index;

		}





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//ピクセルシェーダー生成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	WORD* pIList = new WORD[icount];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	DXGI_SWAP_CHAIN_DESC scDesc;

			}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//Vertex* pVList = new Vertex[vcount];

	irData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pMatrixBuffer);

		pIList[j] = indexList[j];

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	SDL_DestroyTexture(tex);

	};



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	hr = D3D11CreateDeviceAndSwapChain(NULL,



			}

	}

		{

	//Create Index



		return hr;







	m_pRenderTargetView = NULL;

	ConstantLightBuffer clb;

	D3D11_TEXTURE2D_DESC txDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyRenderer(ren);



			exit(1);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	if (!reader.Warning().empty())

	if (FAILED(hr))

	//vector<Vertex> vertex_t;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		1,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pSwapChain = NULL;

	SDL_DestroyTexture(tex);

	ConstantLight    pntLight; //点光源

	int     vcount = vertexlist.size();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	float    nearZ = 0.1f;

			index_offset += num_vertices;

	for (const auto& shape : shapes)

			// Loop over vertices in the face.

	XMStoreFloat4(&clb.ambient, lightAmbient);





	SAFE_RELEASE(m_pTexture);

	if (m_pImmediateContext)

		D3D_DRIVER_TYPE_HARDWARE,

		&shapes,

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	vector<Vertex> vertexlist;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;



#ifdef _DEBUG

	ibDesc.StructureByteStride = 0;

	std::string error;

	txDesc.MipLevels = 1;

CD3DTest::CD3DTest()

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	SDL_DestroyWindow(win);

	int     vcount = vertexlist.size();

struct ConstantLight {

struct ConstantMatrixBuffer {



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





struct ConstantLight {

			}

int main(int, char**)

};



	if (FAILED(hr))

			exit(1);



	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);

	int     vcount = vertexlist.size();



	vbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pInputLayout);

		SDL_RenderClear(ren);

		return hr;

}


	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&m_pSwapChain,

		if (e.type == SDL_QUIT)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SAFE_RELEASE(m_pSwapChain);

		SDL_RenderPresent(ren);

	SDL_FreeSurface(bmp);







			{

	{

	std::vector<tinyobj::shape_t> shapes;

		return hr;

			index_offset += fv;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMFLOAT4X4 view;

			index_offset += num_vertices;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pImmediateContext);

	ibDesc.StructureByteStride = 0;

	delete[] pVList;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	Release();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.TopLeftY = 0;

	m_pTexture = NULL;

	SAFE_RELEASE(m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;



		1,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	vrData.SysMemPitch = 0;

}

	UINT flags = 0;



			switch (e.key.keysym.sym)

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

	m_pImmediateContext = NULL;

	SDL_DestroyRenderer(ren);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMFLOAT4 attenuate;         //減衰(a,b,c)

}

		return hr;

	SDL_DestroyTexture(tex);

	m_pVertexBuffer = NULL;



	//Create Index

			{

		SDL_RenderPresent(ren);

	ConstantLight    pntLight; //点光源

	std::string error;



				// access to vertex



		&shapes,

	m_pRenderTargetView = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

CD3DTest::CD3DTest()

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pTextureView);

	std::string inputfile = "test.obj";

		size_t index_offset = 0;

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;

	XMFLOAT4X4 world;

		R"(cube.obj)");

	std::string imagePath = "hello.bmp";

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vrData.pSysMem = &pVList[0];

			{

				break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_IndexCount = 0;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	{



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string error;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);



	//ビューポート設定

	return 0;

	m_Angle += XMConvertToRadians(1.0f);









		NULL,

	D3D11_SUBRESOURCE_DATA irData;

	// Loop over shapes

	D3D11_TEXTURE2D_DESC txDesc;

	//頂点シェーダー生成

}

	irData.SysMemSlicePitch = 0;



	return 0;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			exit(1);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_TOTAL

	bool ret = tinyobj::LoadObj(





		&materials,

	for (size_t s = 0; s < shapes.size(); s++)

	//ピクセルシェーダー生成

		&attrib,

			{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	{

	m_pVertexShader = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);

	Vertex* pVList = new Vertex[vcount];

#include <SDL.h>


