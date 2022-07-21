	SAFE_RELEASE(m_pImmediateContext);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (m_pImmediateContext)

	scDesc.OutputWindow = hwnd;

#include "DirectXManager.h"

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.StructureByteStride = 0;



	ConstantMaterial material; //物体の質感

CD3DTest::~CD3DTest()

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		{



	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pPixelShader);

	m_Viewport.TopLeftY = 0;

			}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{



	m_pMatrixBuffer = NULL;

	scDesc.Windowed = TRUE;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include "DirectXManager.h"

	cbDesc.CPUAccessFlags = 0;

			}

int main(int, char**)

	SDL_Quit();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	}

	enum KeyPressSurfaces

	//頂点シェーダー生成

	if (!reader.Warning().empty())

	CRect                rect;

	}

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pImmediateContext);







struct ConstantMaterial {

	for (int i = 0; i < 3; i++)

		&scDesc,



	XMFLOAT4 ambient;           //環境(r,g,b)



	m_Angle += XMConvertToRadians(1.0f);

	m_pDevice = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pVertexBuffer = NULL;

	std::string inputfile = "test.obj";



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

		NULL,

{



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		//User requests quit

	return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	auto& attrib = reader.GetAttrib();





	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))



			// Loop over vertices in the face.

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	// Loop over shapes

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantMaterial {

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_FreeSurface(bmp);



#include <iostream>

		}

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.TopLeftX = 0;

				// access to vertex



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	delete[] pIList;

			break;

	vbDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

	WORD* pIList = new WORD[icount];

	}

				WORD index = idx.vertex_index;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTexture = NULL;

		}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	dsDesc.Texture2D.MipSlice = 0;



}

/*

	scDesc.BufferDesc.Height = rect.Height();

}
#include <iostream>

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files





	}

	//Clean up our objects and quit

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	enum KeyPressSurfaces

	D3D11_BUFFER_DESC ibDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_DEFAULT,



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	scDesc.OutputWindow = hwnd;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	//Create Index

#include <iostream>



		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				// access to vertex

	{



struct ConstantLight {

			index_offset += num_vertices;

	SAFE_RELEASE(m_pImmediateContext);

		&error,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pImmediateContext);

	LoadObj(vertexlist, indexList);

	tinyobj::attrib_t attrib;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			}

		return hr;



}

		&error,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantLight {

	m_pPixelShader = NULL;

	delete[] pIList;



		}

	if (FAILED(hr))

	m_pDevice = NULL;



void CD3DTest::Release()

	m_pPixelShader = NULL;

struct ConstantLight {

	if (m_pImmediateContext)



	SAFE_RELEASE(m_pLightBuffer);



	ID3D11Texture2D* pBackBuffer;

	ibDesc.MiscFlags = 0;

		return hr;

	SDL_Quit();

		}

		&level,

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_FreeSurface(bmp);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



};

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#endif

CD3DTest::CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	irData.SysMemSlicePitch = 0;



	if (FAILED(hr))

	XMFLOAT4X4 view;

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		else if (e.type == SDL_KEYDOWN)

	WORD* pIList = new WORD[icount];



	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.CPUAccessFlags = 0;

		pLevels,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	delete[] pVList;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

				// access to vertex

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	//頂点シェーダー生成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}
		return hr;

	D3D_FEATURE_LEVEL level;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//頂点シェーダー生成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 view;

			case SDLK_LEFT:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	for (size_t s = 0; s < shapes.size(); s++)

	ibDesc.StructureByteStride = 0;

		{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{



	ZeroMemory(&txDesc, sizeof(txDesc));

	for (int i = 0; i < vcount; i++)

			break;

	int     vcount = vertexlist.size();

	SAFE_RELEASE(m_pLightBuffer);

	m_VertexCount = vcount;

	vector<Vertex> vertexlist;



		return hr;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	m_pRenderTargetView = NULL;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	int     vcount = vertexlist.size();



	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

		return hr;

				break;

	//定数バッファ作成

	m_pSwapChain = NULL;

		{





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

	cbDesc.MiscFlags = 0;

	m_IndexCount = 0;

	{

	//定数バッファ作成

	delete[] pIList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4         eyePos;   //視点座標

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pVertexBuffer = NULL;

	//vector<WORD> index_t;

		delete[] pIList;

	vrData.SysMemPitch = 0;

	m_pMatrixBuffer = NULL;

		{

		&m_pSwapChain,



	Release();

#include <iostream>

	//vector<WORD> index_t;

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	txDesc.MipLevels = 1;

		1,

		else if (e.type == SDL_KEYDOWN)

	//ピクセルシェーダー生成

	if (FAILED(hr))

#include <iostream>

	SDL_DestroyWindow(win);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

};

	//Clean up our objects and quit

};

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		{

		return hr;

				break;

	//Create Index

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

	txDesc.ArraySize = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_LEFT,

}

	m_pMatrixBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_pDevice = NULL;





	SAFE_RELEASE(m_pSampler);

	for (int i = 0; i < 3; i++)



#include <SDL.h>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//vector<Vertex> vertex_t;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	{

{

{



	//定数バッファ作成

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



		&level,



			index_offset += fv;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				WORD index = idx.vertex_index;

	m_Viewport.TopLeftY = 0;

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pPixelShader);

	if (m_pImmediateContext)

	scDesc.SampleDesc.Quality = 0;

#endif

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ID3D11Texture2D* pBackBuffer;



	tinyobj::ObjReader reader;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			index_offset += fv;



	{

	SAFE_RELEASE(m_pVertexShader);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pInputLayout);

	SDL_FreeSurface(suf);

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::real_t tx =

	{

	//定数バッファ作成

	dsDesc.Texture2D.MipSlice = 0;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





			//Select surfaces based on key press

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

/*

			index_offset += num_vertices;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	vrData.SysMemSlicePitch = 0;



void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_BUFFER_DESC vbDesc;

{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.pSysMem = &pIList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

/*

		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		size_t index_offset = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ConstantLightBuffer clb;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};

			{

	{



	//vector<WORD> index_t;



	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	txDesc.MipLevels = 1;



struct ConstantLight {

	if (FAILED(hr))



	}

	std::string error;



	txDesc.SampleDesc.Quality = 0;





			int num_vertices = shape.mesh.num_face_vertices[f];



		}

	}

	return 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		return hr;

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

void CD3DTest::Release()

	float    farZ = 100.0f;

	D3D11_SUBRESOURCE_DATA vrData;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Angle += XMConvertToRadians(1.0f);

using std::cout; using std::endl;

	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pSampler);

			{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	while (SDL_PollEvent(&e) != 0)

		delete[] pVList;

	SDL_Quit();

#endif

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			break;

	tinyobj::ObjReader reader;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include "DirectXManager.h"



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&scDesc,

		}

	std::string error;

	// Loop over shapes



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	irData.SysMemPitch = 0;

		&level,

	scDesc.BufferDesc.Height = rect.Height();

};



#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4X4 view;

	tinyobj::attrib_t attrib;

	m_pVertexShader = NULL;

struct ConstantMaterial {

			index_offset += fv;

#define TINYOBJLOADER_IMPLEMENTATION

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

		return 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

}

	vrData.pSysMem = &pVList[0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pLightBuffer);

	//インデックスバッファ作成

	if (!reader.Warning().empty())

	m_pTexture = NULL;

	SDL_DestroyTexture(tex);

	txDesc.Height = rect.Height();

	if (FAILED(hr))

		SDL_RenderPresent(ren);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

		&m_pImmediateContext);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_DestroyRenderer(ren);

				// access to vertex

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pMatrixBuffer = NULL;

	m_Viewport.TopLeftY = 0;



			default:



#include <iostream>

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pRenderTargetView);



		NULL,

	hr = D3D11CreateDeviceAndSwapChain(NULL,





	SAFE_RELEASE(m_pMatrixBuffer);

			case SDLK_DOWN:

}



	float    fov = XMConvertToRadians(20.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



int main(int, char**)



	XMFLOAT4X4 projection;





	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

#include <SDL.h>

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	SAFE_RELEASE(m_pVertexBuffer);

	//深度ステンシルバッファ作成



	vector<WORD> indexList;

void CD3DTest::Release()

			index_offset += fv;

	auto& materials = reader.GetMaterials();

}

	scDesc.BufferCount = 1;

		size_t index_offset = 0;  // インデントのオフセット

		//User presses a key

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

 */

	//First we need to start up SDL, and make sure it went ok

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;

	m_Viewport.TopLeftY = 0;

				WORD index = idx.vertex_index;

		}

	// Loop over shapes

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	SDL_Event e;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	vbDesc.StructureByteStride = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext = NULL;





	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pTextureView = NULL;

		return hr;

			{



	HRESULT              hr;



		{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	tinyobj::ObjReaderConfig reader_config;

	std::vector<tinyobj::material_t> materials;

	//頂点シェーダー生成

	XMFLOAT4 specular;          //反射(r,g,b)

	for (int j = 0; j < icount; j++)

	vrData.SysMemPitch = 0;

	m_Angle += XMConvertToRadians(1.0f);







	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ConstantMaterial material; //物体の質感

	XMFLOAT4 pos;               //座標(x,y,z)

	vrData.SysMemSlicePitch = 0;

	bool ret = tinyobj::LoadObj(

				WORD index = idx.vertex_index;

	m_pLightBuffer = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

		flags,

		return hr;

	m_Viewport.TopLeftX = 0;

}

		return hr;

}



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



{

	m_pDevice = NULL;

	delete[] pIList;

}



		&level,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4X4 world;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLight    pntLight; //点光源

	//深度ステンシルバッファ作成



	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferDesc.Height = rect.Height();

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.BufferDesc.Width = rect.Width();



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				vertex.push_back(vertex_tmp);

				break;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;

{



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	m_pSampler = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	{

	scDesc.Windowed = TRUE;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





		if (!reader.Error().empty())

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	//テクスチャ読み込み

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		&shapes,

	m_VertexCount = 0;

	D3D11_BUFFER_DESC ibDesc;

	}

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC cbDesc;

	m_pSwapChain->Present(0, 0);

}

	m_pSwapChain->Present(0, 0);

				WORD index = idx.vertex_index;

		&shapes,

	{





	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	pBackBuffer->Release();

		{

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))



	SAFE_RELEASE(m_pSwapChain);



	//Vertex* pVList = new Vertex[vcount];

	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			exit(1);

	UINT flags = 0;

	SDL_Quit();

	vbDesc.StructureByteStride = 0;

		{

}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderClear(ren);

		size_t index_offset = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

void CD3DTest::Render()

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		if (e.type == SDL_QUIT)

	dsDesc.Texture2D.MipSlice = 0;

};







	XMFLOAT4 attenuate;         //減衰(a,b,c)

int main(int, char**)

		&shapes,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	if (FAILED(hr))

		delete[] pVList;

			case SDLK_RIGHT:

};



	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

void CD3DTest::Render()

	irData.pSysMem = &pIList[0];

	Release();

	WORD* pIList = new WORD[icount];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::string inputfile = "test.obj";

	}*/

	SAFE_RELEASE(m_pSwapChain);







	vrData.SysMemSlicePitch = 0;

struct ConstantMatrixBuffer {

	bool ret = tinyobj::LoadObj(

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_LEFT,

	irData.SysMemSlicePitch = 0;

		delete[] pIList;

CD3DTest::CD3DTest()

			index_offset += fv;

	SDL_DestroyRenderer(ren);



	//頂点レイアウト作成

	{



	m_pVertexShader = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&level,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vector<WORD> indexList;



	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

	WORD   icount = indexList.size();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	txDesc.Usage = D3D11_USAGE_DEFAULT;



			default:

		{

	}

	//vector<Vertex> vertex_t;



		return hr;



	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

	m_pVertexBuffer = NULL;

#include <SDL.h>



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			{





	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	// Loop over shapes

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.StructureByteStride = 0;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	m_pTexture = NULL;

 * Lesson 1: Hello World!

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ID3D11Texture2D* pBackBuffer;

	return;

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		exit(1);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





		{

	//Create Index

	SAFE_RELEASE(m_pInputLayout);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

	float    fov = XMConvertToRadians(20.0f);

	ibDesc.MiscFlags = 0;





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pLightBuffer);









	}

	m_pDepthStencilView = NULL;

#include <SDL.h>

	float    farZ = 100.0f;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			break;

CD3DTest::~CD3DTest()

	UINT offsets = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	int     vcount = vertexlist.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;



	XMFLOAT4X4 projection;

		size_t index_offset = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

		&materials,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&m_pDevice,

		if (!ret)

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

int main(int, char**)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



{

	auto& shapes = reader.GetShapes();



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	WORD* pIList = new WORD[icount];

			case SDLK_RIGHT:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	{

	SDL_FreeSurface(suf);

		flags,

	{

		SDL_Delay(1000);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み



	}

	if (m_pImmediateContext)

			//Select surfaces based on key press

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



{



#ifdef _DEBUG



};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	irData.SysMemPitch = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		if (e.type == SDL_QUIT)

	SDL_Event e;

	if (!error.empty())

		KEY_PRESS_SURFACE_LEFT,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_FreeSurface(bmp);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext = NULL;





	//頂点レイアウト作成

		}



	SAFE_RELEASE(m_pMatrixBuffer);



		R"(cube.obj)");

struct ConstantMaterial {



		return hr;

	m_pLightBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;



		return hr;





		return hr;

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))



#include <SDL.h>







	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			}



	m_pPixelShader = NULL;

		R"(cube.obj)");



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_Delay(1000);



	DXGI_SWAP_CHAIN_DESC scDesc;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	std::string error;

			}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			//Select surfaces based on key press

		{



		flags,

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		R"(cube.obj)");

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_BUFFER_DESC cbDesc;





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

				WORD index = idx.vertex_index;





		D3D11_SDK_VERSION,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		R"(cube.obj)");



CD3DTest::CD3DTest()

	std::string imagePath = "hello.bmp";

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

		&level,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	if (!reader.Warning().empty())

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_DestroyWindow(win);



		return hr;

int main(int, char**)

	scDesc.SampleDesc.Quality = 0;



	std::vector<tinyobj::shape_t> shapes;



		flags,

	m_pDepthStencilView = NULL;



	UINT strides = sizeof(Vertex);

	scDesc.SampleDesc.Count = 1;

		return hr;

	SDL_DestroyRenderer(ren);

		exit(1);

	SAFE_RELEASE(m_pTextureView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//Key press surfaces constants

	cbDesc.StructureByteStride = 0;

{







}

	return hr;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	return;

	SDL_Event e;

	//Key press surfaces constants



#include <SDL.h>

	D3D_FEATURE_LEVEL level;



		return hr;

	//Vertex* pVList = new Vertex[vcount];



	scDesc.OutputWindow = hwnd;

	}

		&scDesc,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pDepthStencilView = NULL;

	if (!reader.Warning().empty())

	return hr;

	SDL_FreeSurface(bmp);

		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感



	::ZeroMemory(&scDesc, sizeof(scDesc));





		return 1;

#include <SDL.h>

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	float    farZ = 100.0f;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;



	m_Viewport.Width = (FLOAT)rect.Width();

	m_IndexCount = icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.MipLevels = 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	int     vcount = vertexlist.size();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	while (SDL_PollEvent(&e) != 0)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pDevice = NULL;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	//頂点レイアウト作成

	scDesc.Windowed = TRUE;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pMatrixBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		NULL,



		KEY_PRESS_SURFACE_DEFAULT,

	WORD   icount = indexList.size();

{

	m_pMatrixBuffer = NULL;

				break;

	SAFE_RELEASE(m_pVertexShader);

		&m_pImmediateContext);

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.pSysMem = &pIList[0];

	m_pVertexBuffer = NULL;

	m_Viewport.MinDepth = 0.0f;

	auto& shapes = reader.GetShapes();

}

	//ピクセルシェーダー生成

	if (FAILED(hr))



	delete[] pIList;

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);

		{

	XMFLOAT4X4 projection;

struct ConstantMatrixBuffer {

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&m_pDevice,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSampler = NULL;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	WORD   icount = indexList.size();

};

	for (int i = 0; i < vcount; i++)

		SDL_Delay(1000);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_FreeSurface(bmp);

	txDesc.CPUAccessFlags = 0;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pInputLayout);





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_DestroyWindow(win);

	}





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	/*

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMFLOAT4X4 view;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			{

			switch (e.key.keysym.sym)

	m_IndexCount = icount;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	ZeroMemory(&txDesc, sizeof(txDesc));

	std::string error;

		return hr;

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

int main(int, char**)



{



	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		D3D11_SDK_VERSION,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext = NULL;

		return hr;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

using std::cout; using std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	auto& attrib = reader.GetAttrib();



using std::cout; using std::endl;

	return hr;

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	txDesc.SampleDesc.Count = 1;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.CPUAccessFlags = 0;

			index_offset += num_vertices;

	}

	}

	if (FAILED(hr))

	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	if (!error.empty())

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_RIGHT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	std::string inputfile = "test.obj";

	m_pIndexBuffer = NULL;

int main(int, char**)

	WORD   icount = indexList.size();

			switch (e.key.keysym.sym)

	CRect                rect;

	if (FAILED(hr))

		// Loop over faces(polygon)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pTextureView = NULL;

	cbDesc.CPUAccessFlags = 0;

	{

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.MiscFlags = 0;

		pLevels,

	m_pSampler = NULL;

		D3D11_SDK_VERSION,



		if (e.type == SDL_QUIT)

	{

		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

	m_VertexCount = 0;

	SDL_DestroyTexture(tex);

	XMFLOAT4X4 view;

				break;

	float    fov = XMConvertToRadians(20.0f);

#define TINYOBJLOADER_IMPLEMENTATION









	vector<WORD> indexList;

			default:



		// Loop over faces(polygon)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				vertex.push_back(vertex_tmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{



		&m_pDevice,

	ConstantLight    pntLight; //点光源





	XMStoreFloat4(&clb.eyePos, eye);

	//vector<Vertex> vertex_t;

	cbDesc.CPUAccessFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderPresent(ren);

	SDL_DestroyWindow(win);

	cbDesc.CPUAccessFlags = 0;

	ibDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	}





	txDesc.CPUAccessFlags = 0;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ID3D11Texture2D* pBackBuffer;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	SDL_DestroyWindow(win);



struct ConstantMatrixBuffer {

	XMFLOAT4X4 projection;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pImmediateContext);

/*

	scDesc.BufferCount = 1;

#endif



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				break;



		return hr;

	SDL_DestroyWindow(win);



		size_t index_offset = 0;  // インデントのオフセット



	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Event e;

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.Height = (FLOAT)rect.Height();

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			}

struct ConstantMaterial {

};

	m_pLightBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

				indexlist.push_back(index);



				// access to vertex

		return hr;

	/*

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	vrData.SysMemPitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

}

	m_pTexture = NULL;

};

		size_t index_offset = 0;  // インデントのオフセット

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	for (int i = 0; i < 3; i++)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(index);

		//User requests quit

{

				vertex.push_back(vertex_tmp);



	//テクスチャ読み込み

	m_pImmediateContext = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

 */

	irData.pSysMem = &pIList[0];

}

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	Release();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		cout << "SDL_INIT_ERROR" << endl;

	//頂点シェーダー生成

			break;

		D3D11_SDK_VERSION,



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;



	SAFE_RELEASE(m_pVertexBuffer);

		else if (e.type == SDL_KEYDOWN)

	SDL_DestroyTexture(tex);

	XMFLOAT4 ambient;           //環境(r,g,b)

			{

	m_pDepthStencilTexture = NULL;

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

struct ConstantLight {

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;

{

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.Width = (FLOAT)rect.Width();

	{

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pDepthStencilView = NULL;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	txDesc.SampleDesc.Count = 1;

		D3D_DRIVER_TYPE_HARDWARE,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pSampler);

#endif



	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

		&shapes,

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		exit(1);



	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SDL_DestroyTexture(tex);

	scDesc.SampleDesc.Quality = 0;

		return hr;



	XMFLOAT4 specular;          //反射(r,g,b)

{

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	pBackBuffer->Release();

	cbDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		m_pImmediateContext->ClearState();

	vbDesc.CPUAccessFlags = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = vcount;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

		&materials,

	UINT offsets = 0;

	vbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_Delay(1000);

			exit(1);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pTextureView);

	m_pLightBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;

		}

	WORD   icount = indexList.size();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferDesc.Width = rect.Width();

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	}

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	enum KeyPressSurfaces

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		R"(cube.obj)");

void CD3DTest::Release()

	ibDesc.CPUAccessFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyTexture(tex);

	//Key press surfaces constants

		return hr;

	scDesc.SampleDesc.Quality = 0;

		return hr;



 */



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	WORD* pIList = new WORD[icount];





	}

CD3DTest::~CD3DTest()

				vertex.push_back(vertex_tmp);

	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



				vertex.push_back(vertex_tmp);

		delete[] pIList;

	if (FAILED(hr))



	{

		SDL_RenderPresent(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.MipLevels = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pSwapChain = NULL;



	m_IndexCount = icount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

		m_pImmediateContext->ClearState();

CD3DTest::~CD3DTest()

	{

		&shapes,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.MiscFlags = 0;





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	if (!reader.ParseFromFile(inputfile, reader_config))

				// access to vertex

			}

	}

	if (!reader.Warning().empty())

	UINT offsets = 0;

	{

#include <SDL.h>

	XMFLOAT4         ambient;  //環境光(r,g,b)

#include <SDL.h>

				break;

			{



{

}

		&error,

		size_t index_offset = 0;



	m_pDepthStencilView = NULL;



	ibDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pInputLayout);

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pTextureView = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			case SDLK_LEFT:

	SAFE_RELEASE(m_pPixelShader);







		{

			exit(1);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pRenderTargetView = NULL;



		KEY_PRESS_SURFACE_DOWN,

	}

	ConstantLight    pntLight; //点光源

	{

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	std::string imagePath = "hello.bmp";

		&error,

#endif

	SAFE_RELEASE(m_pInputLayout);

	//インデックスバッファ作成

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_DestroyTexture(tex);



	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pPixelShader = NULL;



		return hr;



		// Loop over faces(polygon)



};

	m_VertexCount = vcount;



	ConstantLight    pntLight; //点光源

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;







	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			}

	txDesc.SampleDesc.Quality = 0;

{

	XMFLOAT4X4 world;



	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_Viewport.TopLeftY = 0;

			}

	tinyobj::ObjReaderConfig reader_config;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	for (int j = 0; j < icount; j++)

}

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}

		return hr;



#ifdef _DEBUG

	m_pPixelShader = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_DestroyRenderer(ren);

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	tinyobj::attrib_t attrib;

	Release();

	m_pIndexBuffer = NULL;

		&m_pImmediateContext);

				vertex.push_back(vertex_tmp);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pRenderTargetView = NULL;

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	auto& materials = reader.GetMaterials();

	auto& attrib = reader.GetAttrib();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	return hr;



 * Lesson 1: Hello World!

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//定数バッファ作成

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pPixelShader);

	m_pDepthStencilTexture = NULL;

	//Key press surfaces constants





}

		&attrib,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_DestroyWindow(win);

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	int     vcount = vertexlist.size();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vector<WORD> indexList;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_IndexCount = icount;

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	for (size_t s = 0; s < shapes.size(); s++)

	//定数バッファ作成

	D3D11_BUFFER_DESC ibDesc;

		&materials,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				WORD index = idx.vertex_index;



		pVList[i] = vertexlist[i];

	if (m_pImmediateContext)

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 pos;               //座標(x,y,z)

	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.StructureByteStride = 0;

	dsDesc.Format = txDesc.Format;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	LoadObj(vertexlist, indexList);



	SAFE_RELEASE(m_pDepthStencilView);

 * Lesson 1: Hello World!



				WORD index = idx.vertex_index;



	CRect                rect;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

	ibDesc.StructureByteStride = 0;



	scDesc.SampleDesc.Quality = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

/*

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include "DirectXManager.h"

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	for (const auto& shape : shapes)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Vertex* pVList = new Vertex[vcount];

	reader_config.mtl_search_path = "./"; // Path to material files



	m_pSwapChain = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D_FEATURE_LEVEL level;

	m_pPixelShader = NULL;

int main(int, char**)



	for (int j = 0; j < icount; j++)

	while (SDL_PollEvent(&e) != 0)

	if (m_pImmediateContext)

				indexlist.push_back(index);





	WORD   icount = indexList.size();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantMatrixBuffer {



	{



			{



	SDL_Quit();



	}

	m_pRenderTargetView = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;



		pLevels,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

				break;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pDepthStencilTexture = NULL;

	D3D11_BUFFER_DESC cbDesc;





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{



	}

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMStoreFloat4(&clb.eyePos, eye);

				// access to vertex

	D3D11_SUBRESOURCE_DATA irData;

	float    farZ = 100.0f;



#define TINYOBJLOADER_IMPLEMENTATION

		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTextureView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{



	{

}

		KEY_PRESS_SURFACE_DOWN,



	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	D3D11_BUFFER_DESC vbDesc;

struct ConstantLight {

	vector<WORD> indexList;

	SAFE_RELEASE(m_pDepthStencilView);

{

	SAFE_RELEASE(m_pVertexBuffer);

		{

		SDL_Delay(1000);



	for (const auto& shape : shapes)

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			for (size_t v = 0; v < num_vertices; v++)

#endif

	}

	}

		}

	SAFE_RELEASE(m_pDevice);

	SDL_FreeSurface(bmp);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.Width = rect.Width();

			index_offset += num_vertices;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))



void CD3DTest::Render()

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!reader.Warning().empty())

	if (FAILED(hr))



	UINT strides = sizeof(Vertex);



struct ConstantLightBuffer {

		delete[] pVList;

	// Loop over shapes

	m_pSwapChain->Present(0, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4         eyePos;   //視点座標

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		}

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantMaterial material; //物体の質感

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		delete[] pVList;

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_RenderClear(ren);

		{

	UINT offsets = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		}

	if (!error.empty())

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	dsDesc.Texture2D.MipSlice = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	UINT strides = sizeof(Vertex);

	D3D11_SUBRESOURCE_DATA vrData;

	Release();

	hr = D3D11CreateDeviceAndSwapChain(NULL,



				indexlist.push_back(index);

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	{

		&m_pSwapChain,

	scDesc.BufferCount = 1;

		&m_pImmediateContext);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4X4 view;

	{

	//頂点バッファ作成

	txDesc.SampleDesc.Count = 1;



	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;





	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//深度ステンシルバッファ作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::string error;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;











	D3D11_SAMPLER_DESC smpDesc;

	//テクスチャ読み込み

		return 1;

	}*/



	//First we need to start up SDL, and make sure it went ok

#ifdef _DEBUG

	{

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_DOWN,

			exit(1);

	//Create Index

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pTexture = NULL;

void CD3DTest::Release()

	ibDesc.MiscFlags = 0;



	{

	cbDesc.CPUAccessFlags = 0;

		&attrib,



			//Select surfaces based on key press



	float    farZ = 100.0f;

				break;

		else if (e.type == SDL_KEYDOWN)

			for (size_t v = 0; v < fv; v++)

	}

	scDesc.BufferCount = 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	m_pPixelShader = NULL;



	UINT flags = 0;

		&scDesc,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

			// Loop over vertices in the face.

	//First we need to start up SDL, and make sure it went ok



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

		}

	XMFLOAT4         eyePos;   //視点座標

		KEY_PRESS_SURFACE_RIGHT,



	//頂点バッファ作成

		&error,

	return;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

#include <SDL.h>

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	m_Viewport.TopLeftY = 0;

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



{

	m_pVertexShader = NULL;



}

	for (const auto& shape : shapes)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int i = 0; i < vcount; i++)

	if (!reader.ParseFromFile(inputfile, reader_config))

		D3D11_SDK_VERSION,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext = NULL;

	m_pTextureView = NULL;



	XMFLOAT4 ambient;           //環境(r,g,b)



	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	return 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	if (FAILED(hr))



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			exit(1);

		return hr;

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		delete[] pIList;

	//First we need to start up SDL, and make sure it went ok



				break;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMaterial material; //物体の質感



	m_pDepthStencilView = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	//vector<Vertex> vertex_t;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//頂点バッファ作成



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	for (size_t s = 0; s < shapes.size(); s++)

	SDL_DestroyRenderer(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				WORD index = idx.vertex_index;

	m_pDepthStencilView = NULL;



	scDesc.BufferCount = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		// Loop over faces(polygon)

CD3DTest::CD3DTest()

HRESULT CD3DTest::Create(HWND hwnd)

	if (!reader.Warning().empty())



	{

	XMFLOAT4         ambient;  //環境光(r,g,b)



	for (int j = 0; j < icount; j++)

	m_pSampler = NULL;

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;



	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftY = 0;

	bool ret = tinyobj::LoadObj(

	dsDesc.Texture2D.MipSlice = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pTextureView = NULL;



#ifdef _DEBUG



	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pTextureView);



	//First we need to start up SDL, and make sure it went ok

			}

		SDL_RenderPresent(ren);

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pTexture);

};

	UINT offsets = 0;

	txDesc.SampleDesc.Quality = 0;

		return hr;

		KEY_PRESS_SURFACE_UP,



	m_pDevice = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	auto& attrib = reader.GetAttrib();



	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)



	delete[] pVList;

		&scDesc,

				break;

	vrData.SysMemSlicePitch = 0;

	SDL_Quit();

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	enum KeyPressSurfaces



		NULL,

}
				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

				break;

	m_IndexCount = icount;

	txDesc.MipLevels = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

				WORD index = idx.vertex_index;



	XMStoreFloat4(&clb.ambient, lightAmbient);

		if (e.type == SDL_QUIT)

	ibDesc.StructureByteStride = 0;

	XMFLOAT4X4 projection;





	XMFLOAT4X4 view;

	vbDesc.MiscFlags = 0;

		exit(1);

			case SDLK_RIGHT:

	XMFLOAT4X4 world;

	return 0;

			{

	SAFE_RELEASE(m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//Key press surfaces constants

{

				break;

	//ビューポート設定



		{

		SDL_Delay(1000);

		return hr;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

};

		R"(cube.obj)");

	txDesc.CPUAccessFlags = 0;

	//インデックスバッファ作成

			{

	if (!error.empty())

	m_pDepthStencilView = NULL;

		return 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

void CD3DTest::Release()

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	WORD   icount = indexList.size();

	ID3D11Texture2D* pBackBuffer;

	//vector<WORD> index_t;

	vector<WORD> indexList;

		&shapes,

	}

	}

		{





}

			exit(1);

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	return;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			}

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		NULL,





		if (!ret)

		return hr;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_BUFFER_DESC vbDesc;

		delete[] pVList;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#include "DirectXManager.h"

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	dsDesc.Format = txDesc.Format;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	delete[] pVList;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		NULL,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ConstantMatrixBuffer cmb;



	SAFE_RELEASE(m_pVertexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

	txDesc.SampleDesc.Count = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//頂点レイアウト作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.SampleDesc.Count = 1;



}

		if (!ret)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.SampleDesc.Quality = 0;

		return hr;

	if (FAILED(hr))

	if (!reader.Warning().empty())

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))

	//定数バッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemSlicePitch = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	ConstantMaterial material; //物体の質感

				WORD index = idx.vertex_index;

				tinyobj::real_t tx =

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

};

	SDL_DestroyWindow(win);









		size_t index_offset = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{

#include "DirectXManager.h"

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 world;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//ピクセルシェーダー生成

	if (FAILED(hr))

	}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_UP,

				// access to vertex

	reader_config.mtl_search_path = "./"; // Path to material files



	XMFLOAT4         ambient;  //環境光(r,g,b)



	{



	}



		1,

			default:

	SDL_DestroyRenderer(ren);

		D3D11_SDK_VERSION,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{



{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_DOWN,

	int     vcount = vertexlist.size();

			case SDLK_UP:

	if (FAILED(hr))

	delete[] pIList;

	{

			case SDLK_UP:

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{



#include <iostream>





	XMFLOAT4 pos;               //座標(x,y,z)

	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	// Loop over shapes

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMFLOAT4         eyePos;   //視点座標



	scDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	UINT flags = 0;

using std::cout; using std::endl;



				tinyobj::real_t tx =

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Quit();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pSwapChain = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);







	ConstantLight    pntLight; //点光源

	for (int i = 0; i < vcount; i++)

void CD3DTest::Release()





	SDL_DestroyRenderer(ren);

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



int main(int, char**)

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			//Select surfaces based on key press

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.BufferCount = 1;

	//頂点シェーダー生成





		D3D_DRIVER_TYPE_HARDWARE,

		{

	delete[] pVList;



	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.StructureByteStride = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (int i = 0; i < vcount; i++)

};

	tinyobj::ObjReader reader;

	ibDesc.StructureByteStride = 0;

	//頂点シェーダー生成

	vrData.SysMemPitch = 0;



	if (FAILED(hr))

				break;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		}

			exit(1);



	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源





{





	irData.SysMemPitch = 0;

	}

	scDesc.OutputWindow = hwnd;

			{

	scDesc.BufferDesc.Width = rect.Width();

	{


