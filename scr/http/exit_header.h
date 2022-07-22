

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			{

	Vertex* pVList = new Vertex[vcount];

		&m_pImmediateContext);





	flags |= D3D11_CREATE_DEVICE_DEBUG;

			index_offset += num_vertices;

		}



		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//深度ステンシルバッファ作成

#include <SDL.h>



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

};

			case SDLK_UP:

	ibDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&attrib,





		return hr;

{

		return hr;

		flags,

	if (FAILED(hr))

	m_IndexCount = icount;

	m_Viewport.MinDepth = 0.0f;



	return hr;



	if (FAILED(hr))

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	delete[] pVList;

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.StructureByteStride = 0;



		m_pImmediateContext->ClearState();

	ibDesc.CPUAccessFlags = 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}*/

	vbDesc.StructureByteStride = 0;







			}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		delete[] pVList;



		&materials,

	std::vector<tinyobj::material_t> materials;

int main(int, char**)

			}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	//ピクセルシェーダー生成

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include "DirectXManager.h"

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_TEXTURE2D_DESC txDesc;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

	if (FAILED(hr))

				WORD index = idx.vertex_index;

		SDL_RenderPresent(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);





	if (FAILED(hr))

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	//頂点シェーダー生成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pMatrixBuffer = NULL;

	vrData.SysMemPitch = 0;

};



	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&attrib,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include "DirectXManager.h"

		&scDesc,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

 */

		SDL_Delay(1000);

	}

		// Loop over faces(polygon)

	}

		&shapes,



#include <iostream>

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	delete[] pIList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_Delay(1000);

	WORD* pIList = new WORD[icount];

	return hr;

using std::cout; using std::endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

 * Lesson 1: Hello World!



	txDesc.MiscFlags = 0;

			index_offset += fv;

}



	{



		SDL_RenderCopy(ren, tex, NULL, NULL);

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	pBackBuffer->Release();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	HRESULT              hr;

{

			index_offset += num_vertices;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_Viewport.TopLeftY = 0;

				indexlist.push_back(index);

};

		SDL_Delay(1000);



				indexlist.push_back(index);

	vector<Vertex> vertexlist;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			//Select surfaces based on key press

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_RIGHT:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	vbDesc.CPUAccessFlags = 0;

		&attrib,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	float    fov = XMConvertToRadians(20.0f);



	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4X4 projection;

			// Loop over vertices in the face.

	return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

	m_pInputLayout = NULL;

		{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	for (int i = 0; i < 3; i++)



	scDesc.Windowed = TRUE;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

{

};

	ConstantMaterial material; //物体の質感

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pSwapChain->Present(0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D_FEATURE_LEVEL level;

		SDL_RenderClear(ren);

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		KEY_PRESS_SURFACE_UP,

				indexlist.push_back(index);

	vrData.SysMemSlicePitch = 0;

	return 0;

CD3DTest::CD3DTest()

	delete[] pVList;

		// Loop over faces(polygon)

	//深度ステンシルバッファ作成

};

	//Key press surfaces constants

			default:

	}











	for (size_t s = 0; s < shapes.size(); s++)

#include <SDL.h>

	auto& attrib = reader.GetAttrib();





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Render()

	SAFE_RELEASE(m_pVertexShader);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

	}





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ConstantLightBuffer clb;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];







	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_LEFT:

	ibDesc.MiscFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!error.empty())

			for (size_t v = 0; v < fv; v++)

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pSwapChain->Present(0, 0);

	m_pPixelShader = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	}

	XMFLOAT4         eyePos;   //視点座標

			// Loop over vertices in the face.

	D3D11_SUBRESOURCE_DATA irData;

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	cbDesc.MiscFlags = 0;



	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

				break;

		KEY_PRESS_SURFACE_DEFAULT,



	{





	SAFE_RELEASE(m_pLightBuffer);

		{

		cout << "SDL_INIT_ERROR" << endl;

	SDL_FreeSurface(bmp);

	// Loop over shapes

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return;

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	WORD   icount = indexList.size();



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

		return hr;



	std::string inputfile = "test.obj";

		&m_pSwapChain,



}

	D3D11_BUFFER_DESC ibDesc;



				break;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	WORD* pIList = new WORD[icount];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];







	txDesc.SampleDesc.Count = 1;

	m_pDepthStencilTexture = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);







	SDL_DestroyWindow(win);



struct ConstantMaterial {

	XMFLOAT4X4 world;



	}



	{

int main(int, char**)

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		if (e.type == SDL_QUIT)

		SDL_RenderClear(ren);

	scDesc.BufferCount = 1;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		R"(cube.obj)");

	m_pVertexShader = NULL;



};

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	m_pTexture = NULL;

	CRect                rect;

	UINT flags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;



	m_VertexCount = vcount;

		// Loop over faces(polygon)

	txDesc.SampleDesc.Count = 1;

	//頂点シェーダー生成

	cbDesc.CPUAccessFlags = 0;

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

			exit(1);

};

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



			}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

	}



		cout << "SDL_INIT_ERROR" << endl;

		exit(1);

	ConstantMaterial material; //物体の質感

		&m_pImmediateContext);



};



struct ConstantMatrixBuffer {

	pBackBuffer->Release();





	UINT flags = 0;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	//Key press surfaces constants

	vbDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	::ZeroMemory(&scDesc, sizeof(scDesc));



	Release();

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			for (size_t v = 0; v < num_vertices; v++)

	}

{



	ConstantMatrixBuffer cmb;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	/*



	float    farZ = 100.0f;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Clean up our objects and quit

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}







		&m_pDevice,



	}

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Clean up our objects and quit

		delete[] pIList;

	txDesc.SampleDesc.Quality = 0;

	D3D_FEATURE_LEVEL level;

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_Delay(1000);

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))



	//ビューポート設定

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ConstantLightBuffer clb;

{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//ピクセルシェーダー生成

	txDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& shapes = reader.GetShapes();



	XMFLOAT4         ambient;  //環境光(r,g,b)

};

		&error,

	txDesc.MiscFlags = 0;

	{

	return 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_DEFAULT,

		&m_pDevice,

		D3D_DRIVER_TYPE_HARDWARE,



#endif

	ibDesc.CPUAccessFlags = 0;

	enum KeyPressSurfaces

	if (FAILED(hr))

		return hr;





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::material_t> materials;

	{

	}

		return hr;

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D_DRIVER_TYPE_HARDWARE,

	std::string error;

	}

	//ピクセルシェーダー生成



				tinyobj::real_t tx =



				indexlist.push_back(index);

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pDevice);

				break;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	{

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	{

		return hr;

{

	int     vcount = vertexlist.size();



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantMatrixBuffer cmb;

	{

	{



	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))



		return hr;

	SAFE_RELEASE(m_pInputLayout);

	m_pSwapChain = NULL;

	}

	//First we need to start up SDL, and make sure it went ok



CD3DTest::~CD3DTest()

	tinyobj::attrib_t attrib;

	scDesc.BufferCount = 1;

	m_pDepthStencilTexture = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderClear(ren);

		size_t index_offset = 0;  // インデントのオフセット





	D3D11_SUBRESOURCE_DATA vrData;

	//First we need to start up SDL, and make sure it went ok



	}

		{



	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.TopLeftY = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_DestroyWindow(win);



		else if (e.type == SDL_KEYDOWN)

			case SDLK_RIGHT:

		SDL_Delay(1000);

		&attrib,

		}

	SDL_DestroyRenderer(ren);

	CRect                rect;



			{

	ConstantLight    pntLight; //点光源

	}

	m_pLightBuffer = NULL;



};

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	bool ret = tinyobj::LoadObj(

	bool ret = tinyobj::LoadObj(

	cbDesc.StructureByteStride = 0;

		}

		SDL_RenderPresent(ren);

		return hr;

			case SDLK_LEFT:

	if (!reader.Warning().empty())

	{

		&m_pSwapChain,

		&materials,

	SDL_Event e;

		return hr;

	::GetClientRect(hwnd, &rect);

	m_IndexCount = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				indexlist.push_back(idx.vertex_index);

	m_pDepthStencilTexture = NULL;

	D3D11_BUFFER_DESC cbDesc;

	m_pIndexBuffer = NULL;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//テクスチャ読み込み

#include <iostream>

	m_Viewport.MinDepth = 0.0f;

	ConstantLight    pntLight; //点光源

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;





	for (int i = 0; i < 3; i++)

		return hr;

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_BUFFER_DESC ibDesc;



	D3D_FEATURE_LEVEL level;

	vector<Vertex> vertexlist;

	ConstantMaterial material; //物体の質感



struct ConstantMaterial {

	if (!reader.ParseFromFile(inputfile, reader_config))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMFLOAT4X4 view;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain = NULL;

	while (SDL_PollEvent(&e) != 0)

	return 0;

		KEY_PRESS_SURFACE_LEFT,

	D3D11_BUFFER_DESC cbDesc;

		&level,





{

		D3D11_SDK_VERSION,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pTextureView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pSwapChain,



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	delete[] pIList;

		&attrib,

	}

	WORD   icount = indexList.size();





void CD3DTest::Render()

	reader_config.mtl_search_path = "./"; // Path to material files

		exit(1);

	m_pDevice = NULL;



	auto& attrib = reader.GetAttrib();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pDevice = NULL;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	return 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 projection;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Viewport.TopLeftX = 0;

	}

	txDesc.ArraySize = 1;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pMatrixBuffer);

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.SampleDesc.Quality = 0;

	return;

			case SDLK_UP:



	}*/

	vrData.SysMemSlicePitch = 0;

	}

	delete[] pIList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		size_t index_offset = 0;



/*

		{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	for (const auto& shape : shapes)

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

	return;





	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_FreeSurface(bmp);

	txDesc.Width = rect.Width();

	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Render()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			index_offset += fv;

	m_pSampler = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&m_pSwapChain,



		return hr;

	D3D_FEATURE_LEVEL level;

	float    fov = XMConvertToRadians(20.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				vertex.push_back(vertex_tmp);



			{

	m_Viewport.MinDepth = 0.0f;

	return hr;

				break;

	Vertex* pVList = new Vertex[vcount];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			default:





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	//深度ステンシルバッファ作成

	tinyobj::ObjReaderConfig reader_config;

	vrData.pSysMem = &pVList[0];

{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	pBackBuffer->Release();

#include "DirectXManager.h"

#include <iostream>

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{



		KEY_PRESS_SURFACE_TOTAL

	float    farZ = 100.0f;

		return hr;

	{

	int     vcount = vertexlist.size();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < 3; i++)



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_LEFT:

	return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantMatrixBuffer cmb;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	m_pIndexBuffer = NULL;

			{

{

	m_pInputLayout = NULL;

	}



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.SampleDesc.Quality = 0;

	SDL_Event e;

	int     vcount = vertexlist.size();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		if (!ret)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	for (const auto& shape : shapes)

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

#define TINYOBJLOADER_IMPLEMENTATION

{



	}

		&level,

	m_Viewport.Width = (FLOAT)rect.Width();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				indexlist.push_back(idx.vertex_index);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		//User presses a key

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			for (size_t v = 0; v < num_vertices; v++)

{

#include <iostream>

	while (SDL_PollEvent(&e) != 0)

	float    fov = XMConvertToRadians(20.0f);

	float    farZ = 100.0f;



		// Loop over faces(polygon)

	D3D11_BUFFER_DESC cbDesc;

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext = NULL;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User requests quit

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

	}



	}





				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pDevice);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&m_pImmediateContext);



	cbDesc.StructureByteStride = 0;

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_VertexCount = vcount;



			}

	float    nearZ = 0.1f;

	}

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	CRect                rect;



	m_pPixelShader = NULL;

	if (FAILED(hr))

	SDL_Event e;



	txDesc.ArraySize = 1;





				// access to vertex

	m_pVertexBuffer = NULL;

			case SDLK_DOWN:

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (!reader.ParseFromFile(inputfile, reader_config))

	vbDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	bool ret = tinyobj::LoadObj(

};

	m_pSwapChain->Present(0, 0);

		return hr;



	auto& shapes = reader.GetShapes();

	if (!error.empty())

	return;





	Release();

		else if (e.type == SDL_KEYDOWN)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_FreeSurface(suf);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pTexture = NULL;

	//Vertex* pVList = new Vertex[vcount];

	cbDesc.MiscFlags = 0;

using std::cout; using std::endl;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

	for (int i = 0; i < 3; i++)

		&shapes,



	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//ピクセルシェーダー生成

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//ビューポート設定

		SDL_RenderClear(ren);

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}



	if (!reader.Warning().empty())

	::GetClientRect(hwnd, &rect);

		//User presses a key



	ConstantLightBuffer clb;

	//vector<Vertex> vertex_t;



			int num_vertices = shape.mesh.num_face_vertices[f];



	delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}
	//Clean up our objects and quit

	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))

		return hr;





	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		if (!ret)

{





	cbDesc.CPUAccessFlags = 0;

}

		return 1;

CD3DTest::~CD3DTest()



	{

				break;

}

CD3DTest::CD3DTest()

	if (FAILED(hr))

struct ConstantLight {

	return 0;

int SEGMENT = 36;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_TEXTURE2D_DESC txDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

	reader_config.mtl_search_path = "./"; // Path to material files

				break;

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.ArraySize = 1;





				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexBuffer);



struct ConstantMatrixBuffer {

		&m_pImmediateContext);

	{

		}

	SAFE_RELEASE(m_pPixelShader);

	txDesc.MipLevels = 1;

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ConstantLight    pntLight; //点光源



}

	return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pTextureView);



	vbDesc.MiscFlags = 0;





	vrData.SysMemPitch = 0;



			case SDLK_DOWN:

	}*/

	m_IndexCount = icount;

	reader_config.mtl_search_path = "./"; // Path to material files



	{

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





	std::string error;

		exit(1);

	}

	vrData.SysMemSlicePitch = 0;

	//頂点バッファ作成



		&scDesc,

	SDL_Quit();

			switch (e.key.keysym.sym)



{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	Release();

	scDesc.Windowed = TRUE;

int SEGMENT = 36;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pTextureView = NULL;

{

	m_pVertexShader = NULL;



		m_pImmediateContext->ClearState();

	delete[] pVList;

		return hr;

	reader_config.mtl_search_path = "./"; // Path to material files

		{

	D3D11_SUBRESOURCE_DATA vrData;

	return hr;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		&error,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Key press surfaces constants

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//Create Index

CD3DTest::~CD3DTest()

	txDesc.ArraySize = 1;



}
	}

	{

				tinyobj::real_t tx =

}

}

{

		delete[] pIList;

	scDesc.BufferDesc.Height = rect.Height();

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_SAMPLER_DESC smpDesc;

	txDesc.Width = rect.Width();

	if (FAILED(hr))

struct ConstantLightBuffer {



				break;

	m_pDepthStencilView = NULL;







	for (int j = 0; j < icount; j++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.SampleDesc.Quality = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pImmediateContext);

			index_offset += num_vertices;



}

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_DestroyRenderer(ren);

	txDesc.Height = rect.Height();

		return hr;

	txDesc.MiscFlags = 0;

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{



		D3D11_SDK_VERSION,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>



		SDL_RenderPresent(ren);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}





	D3D11_BUFFER_DESC ibDesc;

	std::string inputfile = "test.obj";

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.CPUAccessFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	vector<WORD> indexList;



	m_pSampler = NULL;

				vertex.push_back(vertex_tmp);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pVertexShader = NULL;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

{

	tinyobj::ObjReaderConfig reader_config;

	//テクスチャ読み込み

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pImmediateContext = NULL;

	}

		flags,

	m_Viewport.TopLeftX = 0;

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

{

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&m_pSwapChain,



			case SDLK_LEFT:

	m_pInputLayout = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

		{

	auto& attrib = reader.GetAttrib();

		return hr;

	m_pMatrixBuffer = NULL;

	D3D11_BUFFER_DESC ibDesc;





	{

	cbDesc.CPUAccessFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyWindow(win);

	txDesc.Height = rect.Height();



		KEY_PRESS_SURFACE_DOWN,





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				vertex.push_back(vertex_tmp);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	return 0;

	SDL_DestroyTexture(tex);

};

				break;

		SDL_RenderClear(ren);

	UINT strides = sizeof(Vertex);

			}



	//定数バッファ作成

		return hr;

	LoadObj(vertexlist, indexList);

	return 0;

		}



	return hr;



	ID3D11Texture2D* pBackBuffer;

	//頂点バッファ作成

	txDesc.Height = rect.Height();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

CD3DTest::CD3DTest()

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



			}

		1,

	std::string inputfile = "test.obj";



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferDesc.Height = rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_TOTAL



		return hr;

		return hr;

			case SDLK_DOWN:



	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return;

	return;



};

		// Loop over faces(polygon)

	m_pSampler = NULL;

struct ConstantMatrixBuffer {

	D3D_FEATURE_LEVEL level;

		&m_pDevice,

{

{

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < 3; i++)





	SAFE_RELEASE(m_pRenderTargetView);

	m_pMatrixBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



struct ConstantMatrixBuffer {

	XMFLOAT4X4 world;

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pDepthStencilView = NULL;



		return hr;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				break;



		// Loop over faces(polygon)

	m_pRenderTargetView = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}
				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.Width = (FLOAT)rect.Width();

#include <iostream>

	txDesc.ArraySize = 1;

		&m_pDevice,

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//頂点シェーダー生成

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			case SDLK_DOWN:

	XMFLOAT4         eyePos;   //視点座標

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



{

	{

		return hr;

	m_pInputLayout = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 specular;          //反射(r,g,b)

#ifdef _DEBUG

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferDesc.Width = rect.Width();

	}



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vector<Vertex> vertexlist;

	m_pRenderTargetView = NULL;

	tinyobj::ObjReaderConfig reader_config;

	{

	m_pSampler = NULL;



	for (int i = 0; i < vcount; i++)

		SDL_Delay(1000);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t ty =

		}

	{

	ConstantLight    pntLight; //点光源

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		}



	float    farZ = 100.0f;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

int main(int, char**)

	m_IndexCount = icount;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vector<Vertex> vertexlist;

{

		KEY_PRESS_SURFACE_DOWN,

}



	UINT strides = sizeof(Vertex);

		}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{


