				break;

		return hr;

		R"(cube.obj)");

		SDL_RenderPresent(ren);

		pLevels,

	XMFLOAT4X4 projection;

	}

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pSampler);

			case SDLK_DOWN:

		&m_pDevice,

		SDL_RenderCopy(ren, tex, NULL, NULL);



			}

#include "DirectXManager.h"

		size_t index_offset = 0;

{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	//頂点レイアウト作成



	SAFE_RELEASE(m_pDepthStencilTexture);





			switch (e.key.keysym.sym)

#include "DirectXManager.h"

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Event e;

	m_pMatrixBuffer = NULL;

			case SDLK_RIGHT:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

int main(int, char**)

	HRESULT              hr;

				WORD index = idx.vertex_index;

	m_Viewport.MinDepth = 0.0f;

	//定数バッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		&shapes,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantLightBuffer {



	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	m_pLightBuffer = NULL;

		return hr;

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

{

		return 1;

	SAFE_RELEASE(m_pImmediateContext);

	}





		D3D11_SDK_VERSION,

	D3D11_BUFFER_DESC cbDesc;





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//テクスチャ読み込み

};

		return hr;

		pLevels,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//Vertex* pVList = new Vertex[vcount];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_pSwapChain->Present(0, 0);

	SDL_DestroyRenderer(ren);

};

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext = NULL;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		if (e.type == SDL_QUIT)

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_TOTAL

	vrData.pSysMem = &pVList[0];

				indexlist.push_back(index);

	{



		cout << "SDL_INIT_ERROR" << endl;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	cbDesc.StructureByteStride = 0;

			default:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

		return hr;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#include <iostream>

	//頂点バッファ作成

	while (SDL_PollEvent(&e) != 0)



		else if (e.type == SDL_KEYDOWN)

	//頂点シェーダー生成



	vrData.SysMemSlicePitch = 0;

	if (!reader.Warning().empty())

				break;

		return hr;

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//頂点シェーダー生成

				break;

		NULL,

		size_t index_offset = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ConstantMatrixBuffer cmb;

	enum KeyPressSurfaces

	::GetClientRect(hwnd, &rect);

			break;

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t ty =

		D3D11_SDK_VERSION,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

			// Loop over vertices in the face.

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

	irData.pSysMem = &pIList[0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);



	SDL_DestroyTexture(tex);

	if (!reader.Warning().empty())

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderClear(ren);

	//頂点レイアウト作成

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

		pLevels,

		{

	m_pLightBuffer = NULL;

			}



	irData.SysMemSlicePitch = 0;

		if (e.type == SDL_QUIT)

	irData.SysMemPitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}



	return 0;

	m_IndexCount = icount;

/*





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		m_pImmediateContext->ClearState();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		pVList[i] = vertexlist[i];

	auto& materials = reader.GetMaterials();

	m_IndexCount = 0;



		KEY_PRESS_SURFACE_LEFT,



	auto& attrib = reader.GetAttrib();

	m_pRenderTargetView = NULL;

				break;

	for (size_t s = 0; s < shapes.size(); s++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

	return;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pIndexBuffer = NULL;

			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	scDesc.BufferCount = 1;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&attrib,

		delete[] pIList;

struct ConstantLightBuffer {

				vertex.push_back(vertex_tmp);

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.eyePos, eye);

		pLevels,

{



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4X4 view;



	SDL_FreeSurface(suf);





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	m_pPixelShader = NULL;



	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pTextureView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ConstantMaterial material; //物体の質感

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		pIList[j] = indexList[j];

	delete[] pVList;

	SAFE_RELEASE(m_pImmediateContext);

	std::string imagePath = "hello.bmp";



	txDesc.Width = rect.Width();

	enum KeyPressSurfaces

	SAFE_RELEASE(m_pDepthStencilView);

		KEY_PRESS_SURFACE_UP,

		pIList[j] = indexList[j];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.pSysMem = &pIList[0];

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		&shapes,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	/*



	LoadObj(vertexlist, indexList);

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//インデックスバッファ作成



			}



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			for (size_t v = 0; v < fv; v++)

	UINT flags = 0;

	tinyobj::ObjReader reader;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))



				// access to vertex

		D3D_DRIVER_TYPE_HARDWARE,

				break;

		&scDesc,

		{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	//頂点レイアウト作成

	}

	m_Viewport.MaxDepth = 1.0f;



	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	WORD* pIList = new WORD[icount];



		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

};

	irData.SysMemSlicePitch = 0;



		&shapes,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	{



	XMFLOAT4X4 view;





	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	m_pSampler = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			}

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

struct ConstantLight {

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			}

		size_t index_offset = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyRenderer(ren);

			{

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

		return hr;

	if (FAILED(hr))

#include <SDL.h>

	tinyobj::attrib_t attrib;

			exit(1);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	{

#endif

	}

		return hr;

	WORD* pIList = new WORD[icount];



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_DestroyTexture(tex);

	SDL_Quit();

}

	dsDesc.Format = txDesc.Format;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			index_offset += fv;

{

			//Select surfaces based on key press

	{

		cout << "SDL_INIT_ERROR" << endl;

				indexlist.push_back(index);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&materials,

{

			break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		pIList[j] = indexList[j];



		return hr;

		&shapes,

	m_pRenderTargetView = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SAFE_RELEASE(m_pSwapChain);

		delete[] pIList;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

 * Lesson 1: Hello World!

};

	SAFE_RELEASE(m_pImmediateContext);

			case SDLK_RIGHT:



		if (!reader.Error().empty())



int main(int, char**)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vector<WORD> indexList;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)





	if (m_pImmediateContext)

	return hr;

			{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	dsDesc.Format = txDesc.Format;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		size_t index_offset = 0;

		SDL_Delay(1000);

	//テクスチャ読み込み

		}

}

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SAFE_RELEASE(m_pVertexShader);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferCount = 1;

	{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pImmediateContext);

	}*/

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	Vertex* pVList = new Vertex[vcount];

		return hr;

	{

	LoadObj(vertexlist, indexList);

	//テクスチャ読み込み

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t ty =

	scDesc.SampleDesc.Count = 1;

	for (size_t s = 0; s < shapes.size(); s++)

int main(int, char**)

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	WORD   icount = indexList.size();



using std::cout; using std::endl;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Release()

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (size_t s = 0; s < shapes.size(); s++)



				break;

	std::string imagePath = "hello.bmp";

	SDL_Quit();

	//Key press surfaces constants

	WORD   icount = indexList.size();



	for (int i = 0; i < vcount; i++)

				tinyobj::real_t tx =

			}

		SDL_RenderClear(ren);





	Release();

	//Vertex* pVList = new Vertex[vcount];

#include "DirectXManager.h"

	WORD* pIList = new WORD[icount];



	while (SDL_PollEvent(&e) != 0)

	bool ret = tinyobj::LoadObj(

	SDL_DestroyRenderer(ren);

				break;

 */

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		size_t index_offset = 0;  // インデントのオフセット

	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pInputLayout);

}

	{



	}

	//Key press surfaces constants

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_Delay(1000);

{

		SDL_RenderPresent(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//インデックスバッファ作成

	txDesc.MipLevels = 1;



	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pTextureView = NULL;

		size_t index_offset = 0;  // インデントのオフセット



	dsDesc.Format = txDesc.Format;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

struct ConstantLightBuffer {

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_Delay(1000);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	std::string error;

		}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.CPUAccessFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pIndexBuffer = NULL;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	std::string error;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))





	m_pDevice = NULL;

	XMFLOAT4X4 projection;

	//頂点バッファ作成

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		return hr;

	cbDesc.CPUAccessFlags = 0;

	UINT strides = sizeof(Vertex);

			case SDLK_LEFT:



	XMFLOAT4 attenuate;         //減衰(a,b,c)

{

	scDesc.BufferDesc.Width = rect.Width();

		if (!reader.Error().empty())

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_Viewport.MaxDepth = 1.0f;

			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	return 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderPresent(ren);

	cbDesc.MiscFlags = 0;



int main(int, char**)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





	txDesc.CPUAccessFlags = 0;

	return;

	m_pInputLayout = NULL;

	txDesc.SampleDesc.Quality = 0;



{

struct ConstantLightBuffer {

		return hr;

				break;

	ConstantMatrixBuffer cmb;

	vbDesc.MiscFlags = 0;

 * Lesson 1: Hello World!





		KEY_PRESS_SURFACE_UP,

};

	XMFLOAT4X4 view;

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int SEGMENT = 36;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	XMFLOAT4X4 view;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;

		D3D_DRIVER_TYPE_HARDWARE,

	{



		return hr;

	//テクスチャ読み込み

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	std::string imagePath = "hello.bmp";

	{



	WORD   icount = indexList.size();



	//First we need to start up SDL, and make sure it went ok

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 specular;          //反射(r,g,b)

		{

#include "DirectXManager.h"

		return hr;

void CD3DTest::Render()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				vertex.push_back(vertex_tmp);

		delete[] pIList;

	for (int i = 0; i < vcount; i++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.BufferDesc.Width = rect.Width();

	m_pSampler = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		{

	m_IndexCount = 0;

		size_t index_offset = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (const auto& shape : shapes)

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	{

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_pVertexBuffer = NULL;

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_DOWN,



	m_pLightBuffer = NULL;

	//深度ステンシルバッファ作成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	if (!error.empty())

		&level,

			// Loop over vertices in the face.





	tinyobj::ObjReaderConfig reader_config;

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4X4 world;

				WORD index = idx.vertex_index;

using std::cout; using std::endl;

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.TopLeftX = 0;

struct ConstantMaterial {





	bool ret = tinyobj::LoadObj(

	m_pTextureView = NULL;

	//ピクセルシェーダー生成



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int i = 0; i < 3; i++)

	ibDesc.StructureByteStride = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#include <iostream>





	m_pTextureView = NULL;

			index_offset += fv;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_DestroyTexture(tex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}

	m_pSwapChain = NULL;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (m_pImmediateContext)

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.SampleDesc.Quality = 0;

	SDL_Quit();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





};

		return hr;

	SDL_DestroyWindow(win);







	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	scDesc.BufferDesc.Height = rect.Height();

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.CPUAccessFlags = 0;



	XMFLOAT4X4 world;





		KEY_PRESS_SURFACE_UP,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Width = rect.Width();

	//vector<WORD> index_t;

	UINT flags = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

		return hr;

		KEY_PRESS_SURFACE_TOTAL



	//Vertex* pVList = new Vertex[vcount];

			case SDLK_RIGHT:

int SEGMENT = 36;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		//User requests quit

	m_pVertexShader = NULL;

			// Loop over vertices in the face.



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//vector<WORD> index_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyWindow(win);

	SDL_FreeSurface(suf);

	SDL_DestroyTexture(tex);

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	irData.SysMemPitch = 0;

	//頂点バッファ作成

	SAFE_RELEASE(m_pLightBuffer);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_Delay(1000);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pMatrixBuffer = NULL;

	m_pDepthStencilView = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		KEY_PRESS_SURFACE_DEFAULT,







				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	txDesc.Height = rect.Height();

		if (e.type == SDL_QUIT)

int main(int, char**)

	XMFLOAT4 specular;          //反射(r,g,b)



	SDL_DestroyWindow(win);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Viewport.TopLeftY = 0;

		KEY_PRESS_SURFACE_DOWN,

				// access to vertex

		{



			case SDLK_DOWN:

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

		D3D11_SDK_VERSION,

		delete[] pVList;

		{



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				vertex.push_back(vertex_tmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pTextureView = NULL;

	return 0;

{

	{

		}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		m_pImmediateContext->ClearState();



	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//Clean up our objects and quit

	{

	SDL_FreeSurface(bmp);

	UINT flags = 0;



	m_pTexture = NULL;

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	// Loop over shapes

				break;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string error;

				vertex.push_back(vertex_tmp);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	auto& shapes = reader.GetShapes();

};

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

		delete[] pVList;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

#include <SDL.h>

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)

		if (!ret)



	{

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

#ifdef _DEBUG

		//User requests quit







	while (SDL_PollEvent(&e) != 0)

void CD3DTest::Render()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	dsDesc.Format = txDesc.Format;

		pLevels,



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

int SEGMENT = 36;

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	D3D11_BUFFER_DESC vbDesc;

		pLevels,

		{

	dsDesc.Format = txDesc.Format;

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

HRESULT CD3DTest::Create(HWND hwnd)

		{

	}

	{



	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pDevice);

#include "DirectXManager.h"

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.SampleDesc.Count = 1;

			case SDLK_DOWN:

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pVertexBuffer);

	while (SDL_PollEvent(&e) != 0)



		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pDepthStencilTexture);

	}*/

}

	m_pDepthStencilView = NULL;

	auto& shapes = reader.GetShapes();

	SDL_Event e;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return 1;

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_UP,



	D3D11_TEXTURE2D_DESC txDesc;

	}

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}*/

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

	vrData.SysMemPitch = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);

		exit(1);

	m_Viewport.MinDepth = 0.0f;

				WORD index = idx.vertex_index;



	SAFE_RELEASE(m_pInputLayout);

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	CRect                rect;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.pSysMem = &pIList[0];

struct ConstantLightBuffer {

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pVertexBuffer = NULL;

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vbDesc.StructureByteStride = 0;

	D3D11_TEXTURE2D_DESC txDesc;





		SDL_RenderPresent(ren);

			for (size_t v = 0; v < fv; v++)

	txDesc.CPUAccessFlags = 0;



	scDesc.SampleDesc.Count = 1;

int SEGMENT = 36;

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pMatrixBuffer);



	for (size_t s = 0; s < shapes.size(); s++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//vector<WORD> index_t;

		return hr;





		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		NULL,



		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	cbDesc.StructureByteStride = 0;



	txDesc.Height = rect.Height();

	for (int i = 0; i < 3; i++)

		1,

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 view;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferDesc.Height = rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDevice);

				break;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyTexture(tex);

			}



	{



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	::GetClientRect(hwnd, &rect);

				break;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

{

{

	ID3D11Texture2D* pBackBuffer;

				break;



	vbDesc.MiscFlags = 0;

	m_pLightBuffer = NULL;

	{

	txDesc.SampleDesc.Quality = 0;



	ConstantLightBuffer clb;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	m_pVertexShader = NULL;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <iostream>

}



	m_pInputLayout = NULL;

	SDL_DestroyWindow(win);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	}

		m_pImmediateContext->ClearState();

	WORD* pIList = new WORD[icount];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	return hr;



}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				indexlist.push_back(idx.vertex_index);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		// Loop over faces(polygon)

{



	irData.SysMemPitch = 0;



	{

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		&m_pSwapChain,

	float    nearZ = 0.1f;

		return hr;

	SDL_DestroyTexture(tex);

	SDL_DestroyTexture(tex);

}

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);

	enum KeyPressSurfaces

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

	auto& shapes = reader.GetShapes();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

#endif

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))



	{

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//定数バッファ作成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::vector<tinyobj::material_t> materials;

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

		size_t index_offset = 0;  // インデントのオフセット

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				WORD index = idx.vertex_index;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&materials,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pDevice,

		SDL_RenderClear(ren);

	if (FAILED(hr))

	};

	pBackBuffer->Release();

		SDL_Delay(1000);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	UINT strides = sizeof(Vertex);



	{



	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4         eyePos;   //視点座標



	txDesc.Usage = D3D11_USAGE_DEFAULT;





	//テクスチャ読み込み

	//インデックスバッファ作成



}

	if (FAILED(hr))

		&m_pDevice,



	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pTextureView = NULL;

	while (SDL_PollEvent(&e) != 0)

	UINT strides = sizeof(Vertex);

		if (!reader.Error().empty())

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	delete[] pIList;



		&m_pDevice,

	m_pVertexBuffer = NULL;





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	XMFLOAT4 specular;          //反射(r,g,b)

	delete[] pIList;

	scDesc.BufferCount = 1;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4X4 projection;

	vrData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pImmediateContext);

	{

		flags,

	ibDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	// Loop over shapes





	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantMatrixBuffer cmb;

	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.MaxDepth = 1.0f;



	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			//Select surfaces based on key press



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D11_TEXTURE2D_DESC txDesc;

		exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return 1;

	m_pVertexBuffer = NULL;

	D3D11_SAMPLER_DESC smpDesc;

		m_pImmediateContext->ClearState();

		KEY_PRESS_SURFACE_LEFT,

struct ConstantLight {

#ifdef _DEBUG

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pInputLayout = NULL;

		pIList[j] = indexList[j];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

using std::cout; using std::endl;

	if (FAILED(hr))

	m_pInputLayout = NULL;

	{

	if (m_pImmediateContext)

		flags,

	delete[] pVList;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//インデックスバッファ作成

	HRESULT              hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <iostream>

	if (FAILED(hr))

	{

			{





		//User presses a key



	std::vector<tinyobj::material_t> materials;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SDL_FreeSurface(suf);

				// access to vertex

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	SAFE_RELEASE(m_pSwapChain);

	UINT flags = 0;

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	m_pSwapChain = NULL;

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&level,

	m_pTexture = NULL;

	std::string error;

				indexlist.push_back(index);

				break;

	//定数バッファ作成

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	scDesc.OutputWindow = hwnd;



	SDL_Quit();

				tinyobj::real_t ty =

	//インデックスバッファ作成







			}

{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				indexlist.push_back(idx.vertex_index);

		flags,

				tinyobj::real_t tx =

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#ifdef _DEBUG

	WORD   icount = indexList.size();

		m_pImmediateContext->ClearState();

		KEY_PRESS_SURFACE_DOWN,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		R"(cube.obj)");

	ZeroMemory(&txDesc, sizeof(txDesc));



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext = NULL;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(idx.vertex_index);

	// Loop over shapes



	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





		1,

	cbDesc.StructureByteStride = 0;

				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//定数バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	Vertex* pVList = new Vertex[vcount];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	}*/

	SAFE_RELEASE(m_pPixelShader);

	txDesc.Height = rect.Height();

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			//Select surfaces based on key press

	if (m_pImmediateContext)

	delete[] pIList;

		//User presses a key

	m_pIndexBuffer = NULL;

		&error,

		KEY_PRESS_SURFACE_UP,

	vbDesc.StructureByteStride = 0;

	//ピクセルシェーダー生成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;





};



	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pInputLayout);



	scDesc.BufferCount = 1;

	// Loop over shapes



		KEY_PRESS_SURFACE_DEFAULT,



	m_VertexCount = vcount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	WORD* pIList = new WORD[icount];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	txDesc.ArraySize = 1;



		pLevels,

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	vrData.SysMemSlicePitch = 0;

	std::string error;

	//ピクセルシェーダー生成

	return 0;

};

	m_pImmediateContext = NULL;



	m_pTextureView = NULL;

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.ambient, lightAmbient);

			switch (e.key.keysym.sym)

	}

	SDL_FreeSurface(bmp);

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				break;

	D3D11_SUBRESOURCE_DATA irData;

	std::vector<tinyobj::material_t> materials;

		D3D_DRIVER_TYPE_HARDWARE,

	float    farZ = 100.0f;

		SDL_RenderPresent(ren);

			//Select surfaces based on key press

	ibDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	};

	ConstantLight    pntLight; //点光源

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int j = 0; j < icount; j++)

/*

	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilView);

	}

	cbDesc.StructureByteStride = 0;

{

#include <iostream>



				// access to vertex

	//Create Index

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	ConstantMaterial material; //物体の質感



	SAFE_RELEASE(m_pIndexBuffer);

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t ty =

	vbDesc.StructureByteStride = 0;







	return 0;

		return hr;





	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



#include <SDL.h>

	scDesc.OutputWindow = hwnd;

	XMFLOAT4X4 projection;

		SDL_RenderClear(ren);

	tinyobj::ObjReaderConfig reader_config;

	m_pSampler = NULL;

	UINT flags = 0;



		SDL_Delay(1000);

	vector<WORD> indexList;

		delete[] pVList;

			index_offset += num_vertices;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pLightBuffer);

	LoadObj(vertexlist, indexList);

		return hr;

	// Loop over shapes

	SAFE_RELEASE(m_pTexture);

		return hr;

	m_IndexCount = icount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

using std::cout; using std::endl;



			for (size_t v = 0; v < num_vertices; v++)

	{

		return hr;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		if (e.type == SDL_QUIT)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float    farZ = 100.0f;



	Release();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int j = 0; j < icount; j++)

	std::string imagePath = "hello.bmp";

	::ZeroMemory(&scDesc, sizeof(scDesc));



		&error,

	{

	delete[] pIList;

	//First we need to start up SDL, and make sure it went ok

	}

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_RIGHT,

};

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

	delete[] pIList;

	//Create Index

	if (FAILED(hr))



	//深度ステンシルバッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_Viewport.TopLeftX = 0;

		{



	if (FAILED(hr))





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

};

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	auto& shapes = reader.GetShapes();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		&error,

	return 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = 0;

	//Vertex* pVList = new Vertex[vcount];

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pImmediateContext);

				WORD index = idx.vertex_index;

			case SDLK_RIGHT:

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

CD3DTest::~CD3DTest()

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		if (!reader.Error().empty())

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	irData.SysMemPitch = 0;

	if (FAILED(hr))



		&level,

	SDL_FreeSurface(suf);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	UINT offsets = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//Vertex* pVList = new Vertex[vcount];

void CD3DTest::Render()

			}

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

	m_pSwapChain = NULL;

	vector<WORD> indexList;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		D3D_DRIVER_TYPE_HARDWARE,

{



			//Select surfaces based on key press

	enum KeyPressSurfaces

	if (FAILED(hr))





	SAFE_RELEASE(m_pDepthStencilView);

	vrData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

				vertex.push_back(vertex_tmp);

	{

	txDesc.Width = rect.Width();



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_SUBRESOURCE_DATA irData;

	//インデックスバッファ作成

	m_pDepthStencilView = NULL;

	scDesc.OutputWindow = hwnd;



};

	SAFE_RELEASE(m_pInputLayout);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pTexture = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantLight {

	scDesc.BufferCount = 1;

void CD3DTest::Release()

		// Loop over faces(polygon)

{

	cbDesc.StructureByteStride = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferDesc.Width = rect.Width();

};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

int SEGMENT = 36;

		return hr;

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;



	m_Viewport.Height = (FLOAT)rect.Height();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

CD3DTest::~CD3DTest()



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	for (const auto& shape : shapes)

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

				break;

	tinyobj::attrib_t attrib;

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.ArraySize = 1;

				WORD index = idx.vertex_index;

	}



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		}



	tinyobj::attrib_t attrib;

		// Loop over faces(polygon)

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	UINT flags = 0;

struct ConstantMaterial {

		}



void CD3DTest::Release()



	vbDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < fv; v++)

		pLevels,

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_SAMPLER_DESC smpDesc;

	// Loop over shapes



	}







		SDL_Delay(1000);

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pVertexShader);

}

	m_IndexCount = icount;

	txDesc.SampleDesc.Count = 1;

		return hr;

	/*

	cbDesc.StructureByteStride = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

		&error,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		size_t index_offset = 0;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//頂点レイアウト作成





	SAFE_RELEASE(m_pVertexShader);

CD3DTest::~CD3DTest()

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

#include <iostream>





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		return hr;

			}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.SampleDesc.Quality = 0;

		{

	SDL_Event e;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			index_offset += fv;





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//ビューポート設定

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pDevice = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.MiscFlags = 0;

int main(int, char**)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_DestroyRenderer(ren);

	return;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	float    farZ = 100.0f;

};



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	//テクスチャ読み込み

	SAFE_RELEASE(m_pImmediateContext);

	//テクスチャ読み込み

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	auto& materials = reader.GetMaterials();





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTextureView);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		}

	delete[] pVList;



			}

#include <iostream>

	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

			//Select surfaces based on key press

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pDepthStencilView = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			{



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderClear(ren);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		{

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pDepthStencilView = NULL;

	//頂点レイアウト作成

		if (e.type == SDL_QUIT)

{

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		else if (e.type == SDL_KEYDOWN)

using std::cout; using std::endl;

	vbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pTextureView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pRenderTargetView = NULL;

	txDesc.CPUAccessFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	}

		}

		&m_pDevice,

		size_t index_offset = 0;  // インデントのオフセット

	//Key press surfaces constants



	m_pTexture = NULL;

	m_VertexCount = vcount;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vector<WORD> indexList;

	m_pSwapChain->Present(0, 0);





	reader_config.mtl_search_path = "./"; // Path to material files

	}

	vector<WORD> indexList;

#ifdef _DEBUG

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		&materials,

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

using std::cout; using std::endl;

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	//ビューポート設定

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.Height = (FLOAT)rect.Height();



	//頂点シェーダー生成

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pImmediateContext);

	CRect                rect;

				break;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}



	m_pInputLayout = NULL;

	float    farZ = 100.0f;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{

	SDL_DestroyWindow(win);



	m_pImmediateContext = NULL;



	WORD* pIList = new WORD[icount];

	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pTextureView);

			}



	//テクスチャ読み込み

	std::vector<tinyobj::material_t> materials;

		size_t index_offset = 0;  // インデントのオフセット

	DXGI_SWAP_CHAIN_DESC scDesc;

#include <SDL.h>

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	for (int i = 0; i < vcount; i++)

		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pTextureView);

	}

	m_pVertexShader = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			}



void CD3DTest::Release()

	txDesc.Height = rect.Height();

{



	{



	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.eyePos, eye);

	}

			for (size_t v = 0; v < fv; v++)



	m_pTextureView = NULL;

{

	/*

	{

		}

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 pos;               //座標(x,y,z)



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

				WORD index = idx.vertex_index;

	irData.pSysMem = &pIList[0];



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



CD3DTest::~CD3DTest()



	txDesc.MiscFlags = 0;



/*

			// Loop over vertices in the face.

		pLevels,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		{

				break;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#ifdef _DEBUG

	SAFE_RELEASE(m_pSampler);



	m_pTexture = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点レイアウト作成

struct ConstantLight {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	float    nearZ = 0.1f;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			break;

	m_pVertexBuffer = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

};

	SDL_DestroyTexture(tex);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_Viewport.MaxDepth = 1.0f;

	}

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		//User requests quit





	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	ConstantMatrixBuffer cmb;

	tinyobj::ObjReaderConfig reader_config;





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pIndexBuffer);

			index_offset += fv;

	SAFE_RELEASE(m_pMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}



	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pSampler);

		}

		&level,

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pSampler);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))



	::GetClientRect(hwnd, &rect);

		&materials,

				tinyobj::real_t ty =





		exit(1);



	CRect                rect;



	if (FAILED(hr))

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pTexture);

		pVList[i] = vertexlist[i];





struct ConstantMaterial {

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pPixelShader = NULL;

			}

	cbDesc.CPUAccessFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pMatrixBuffer);

		{



		return 1;

	return;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	}



		//User requests quit



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			case SDLK_LEFT:

	HRESULT              hr;

				tinyobj::real_t tx =

	//頂点バッファ作成

	if (FAILED(hr))

	//Clean up our objects and quit

	}



			switch (e.key.keysym.sym)

				tinyobj::real_t tx =

	ConstantMatrixBuffer cmb;

		&level,

	if (FAILED(hr))

	m_pSwapChain = NULL;

	return 0;



	{

	dsDesc.Format = txDesc.Format;

		return 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);

	auto& shapes = reader.GetShapes();



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pSampler);

	//vector<WORD> index_t;

	ConstantMatrixBuffer cmb;





	UINT strides = sizeof(Vertex);

				break;

	m_pDevice = NULL;

	D3D11_BUFFER_DESC ibDesc;

		size_t index_offset = 0;

};

	SAFE_RELEASE(m_pSampler);



		SDL_Delay(1000);

	txDesc.MiscFlags = 0;



using std::cout; using std::endl;

	vbDesc.CPUAccessFlags = 0;



	scDesc.Windowed = TRUE;



 */



			}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

		SDL_Delay(1000);

	SAFE_RELEASE(m_pInputLayout);

	return 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		//User requests quit

	tinyobj::attrib_t attrib;

	//頂点シェーダー生成

int SEGMENT = 36;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vector<WORD> indexList;



	//vector<WORD> index_t;

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.CPUAccessFlags = 0;

		&m_pSwapChain,

		{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pSwapChain,



		&scDesc,

	//vector<WORD> index_t;

			for (size_t v = 0; v < num_vertices; v++)

		KEY_PRESS_SURFACE_LEFT,

{

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	{



	//vector<WORD> index_t;

	//頂点シェーダー生成

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	vector<Vertex> vertexlist;

	txDesc.MiscFlags = 0;

		return hr;



	ConstantLightBuffer clb;

		}



#include <SDL.h>

			{

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

		KEY_PRESS_SURFACE_LEFT,

		return 1;





	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

CD3DTest::~CD3DTest()

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



			index_offset += fv;

		SDL_RenderCopy(ren, tex, NULL, NULL);





		SDL_RenderCopy(ren, tex, NULL, NULL);



	//インデックスバッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_DestroyWindow(win);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	tinyobj::ObjReader reader;

#include <SDL.h>

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	txDesc.SampleDesc.Count = 1;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pDepthStencilView);

	//テクスチャ読み込み

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





};

int SEGMENT = 36;

		{

int SEGMENT = 36;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	bool ret = tinyobj::LoadObj(

			default:

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	SAFE_RELEASE(m_pIndexBuffer);



		else if (e.type == SDL_KEYDOWN)



	txDesc.MipLevels = 1;



	for (int i = 0; i < 3; i++)

	m_Viewport.Width = (FLOAT)rect.Width();

}

	m_pTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Release()

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.eyePos, eye);



	m_VertexCount = 0;

		return hr;



{

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pTexture);

	m_Viewport.Height = (FLOAT)rect.Height();

}



	m_pDevice = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

	{

	//テクスチャ読み込み

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.TopLeftX = 0;

	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

		else if (e.type == SDL_KEYDOWN)

	float    nearZ = 0.1f;

	m_pIndexBuffer = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		size_t index_offset = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	m_pDepthStencilTexture = NULL;

	XMFLOAT4X4 projection;

	enum KeyPressSurfaces

}

	SAFE_RELEASE(m_pIndexBuffer);

	m_pVertexShader = NULL;



		}

HRESULT CD3DTest::Create(HWND hwnd)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	{

	//深度ステンシルバッファ作成

	m_Viewport.TopLeftY = 0;





		&m_pImmediateContext);

	}

	if (FAILED(hr))

 */

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	txDesc.MipLevels = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (!reader.Warning().empty())

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//頂点レイアウト作成

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		KEY_PRESS_SURFACE_DEFAULT,

	m_pSampler = NULL;

	XMFLOAT4X4 world;

#include <SDL.h>



	SDL_Quit();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

		pVList[i] = vertexlist[i];



	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			}

	reader_config.mtl_search_path = "./"; // Path to material files



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



int main(int, char**)

	vector<WORD> indexList;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pDepthStencilView = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

				// access to vertex

	WORD* pIList = new WORD[icount];

				tinyobj::real_t tx =

	m_pImmediateContext = NULL;

			case SDLK_UP:

		m_pImmediateContext->ClearState();

		KEY_PRESS_SURFACE_LEFT,



		SDL_Delay(1000);

		&m_pDevice,

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



CD3DTest::CD3DTest()

	vbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

		R"(cube.obj)");

		&level,

		&m_pImmediateContext);

	m_pDepthStencilView = NULL;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	for (int i = 0; i < vcount; i++)

	SDL_Event e;

	XMFLOAT4X4 view;



	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	delete[] pIList;

	//深度ステンシルバッファ作成

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

}

	int     vcount = vertexlist.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pIndexBuffer = NULL;

	std::string inputfile = "test.obj";

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	dsDesc.Texture2D.MipSlice = 0;

		return 1;





		}

	//頂点バッファ作成

		return hr;

	//深度ステンシルバッファ作成

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				// access to vertex

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Quit();

#include <SDL.h>

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.SampleDesc.Quality = 0;

	{

		{

	m_VertexCount = 0;

	if (FAILED(hr))

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	}

		return hr;

	//頂点シェーダー生成

			exit(1);

	XMStoreFloat4(&clb.eyePos, eye);

	//テクスチャ読み込み

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 specular;          //反射(r,g,b)



	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	};

	{

		SDL_Delay(1000);

#include "DirectXManager.h"





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};



	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vrData.SysMemPitch = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.Height = rect.Height();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	auto& materials = reader.GetMaterials();

}





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	bool ret = tinyobj::LoadObj(

	std::string error;



	m_pImmediateContext = NULL;

	ConstantMaterial material; //物体の質感

	m_pTexture = NULL;

	//Key press surfaces constants

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		KEY_PRESS_SURFACE_UP,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		// Loop over faces(polygon)

		exit(1);

	m_VertexCount = 0;

	m_pIndexBuffer = NULL;



	ibDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_UP,

		return hr;





		KEY_PRESS_SURFACE_RIGHT,

			case SDLK_LEFT:

	cbDesc.StructureByteStride = 0;



		return hr;

	vrData.SysMemSlicePitch = 0;

	m_pDevice = NULL;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pTextureView);

using std::cout; using std::endl;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty =

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	tinyobj::ObjReader reader;

	//Clean up our objects and quit

		delete[] pIList;

	{

	SAFE_RELEASE(m_pTextureView);

		SDL_Delay(1000);

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}

		return hr;

	SAFE_RELEASE(m_pTexture);

	UINT strides = sizeof(Vertex);

				// access to vertex

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!error.empty())

	m_pDepthStencilTexture = NULL;

		NULL,



	vbDesc.StructureByteStride = 0;





HRESULT CD3DTest::Create(HWND hwnd)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	::GetClientRect(hwnd, &rect);

	{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//vector<WORD> index_t;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

}

	tinyobj::attrib_t attrib;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

			break;

	dsDesc.Format = txDesc.Format;

	scDesc.SampleDesc.Count = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<WORD> index_t;

struct ConstantMatrixBuffer {

			case SDLK_DOWN:



			for (size_t v = 0; v < fv; v++)



		&scDesc,

	//vector<Vertex> vertex_t;

		{

	SAFE_RELEASE(m_pTextureView);

	m_pMatrixBuffer = NULL;

		m_pImmediateContext->ClearState();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{



	}

	m_pVertexShader = NULL;

	vector<WORD> indexList;

	m_Viewport.MinDepth = 0.0f;

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//vector<Vertex> vertex_t;

	}

		}



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	CRect                rect;

{

	SAFE_RELEASE(m_pVertexShader);

	//Create Index



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

	ConstantLightBuffer clb;



		delete[] pIList;

	for (int i = 0; i < 3; i++)

	}

	//頂点レイアウト作成

	}

	D3D11_SUBRESOURCE_DATA irData;

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return hr;

int SEGMENT = 36;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		&shapes,

	ConstantLightBuffer clb;

	return 0;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&materials,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

		SDL_RenderClear(ren);



	SDL_DestroyWindow(win);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

};

	SDL_DestroyTexture(tex);

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}



		{

	txDesc.MipLevels = 1;

		SDL_RenderPresent(ren);

	LoadObj(vertexlist, indexList);

		pIList[j] = indexList[j];

	m_VertexCount = 0;

	{

	txDesc.MiscFlags = 0;



	SDL_Event e;

			{


