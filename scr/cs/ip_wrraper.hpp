};

void CD3DTest::Release()

	m_pDepthStencilView = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pInputLayout);

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pVertexBuffer = NULL;

		SDL_RenderClear(ren);





	m_Viewport.TopLeftX = 0;



	m_pIndexBuffer = NULL;



	m_pDepthStencilTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.SampleDesc.Count = 1;

		pIList[j] = indexList[j];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		SDL_RenderClear(ren);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ConstantLight    pntLight; //点光源





		pLevels,

	D3D11_BUFFER_DESC ibDesc;

{

	txDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vrData.SysMemPitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		//User requests quit

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



		&m_pImmediateContext);

	m_pPixelShader = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Quit();

		D3D_DRIVER_TYPE_HARDWARE,

		if (e.type == SDL_QUIT)

	ConstantMaterial material; //物体の質感

struct ConstantLight {

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		if (e.type == SDL_QUIT)

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

	m_VertexCount = vcount;

		pLevels,



	cbDesc.MiscFlags = 0;



	m_pVertexBuffer = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pLightBuffer);

	//定数バッファ作成

		{

	ConstantMaterial material; //物体の質感

	}

	XMFLOAT4 specular;          //反射(r,g,b)



	m_IndexCount = icount;

	vbDesc.StructureByteStride = 0;



	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	txDesc.MipLevels = 1;

	{



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

		SDL_RenderPresent(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

		exit(1);

				vertex.push_back(vertex_tmp);

	m_pVertexBuffer = NULL;

{

		return hr;

		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::string error;



	ConstantLightBuffer clb;

}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))



	m_IndexCount = icount;



	irData.SysMemPitch = 0;

	ibDesc.MiscFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;  // インデントのオフセット

	//テクスチャ読み込み

	if (FAILED(hr))

		return hr;

};

		return hr;

				break;

	m_pTexture = NULL;



struct ConstantMaterial {

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&error,

	{



	SDL_FreeSurface(suf);

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//テクスチャ読み込み

	}



		SDL_RenderClear(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pVertexBuffer = NULL;

	SDL_DestroyWindow(win);

				WORD index = idx.vertex_index;

	//頂点シェーダー生成

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);



		return hr;

using std::cout; using std::endl;

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

{

			for (size_t v = 0; v < fv; v++)

	SDL_Quit();



		//User requests quit

		{

	{

CD3DTest::~CD3DTest()

	txDesc.Usage = D3D11_USAGE_DEFAULT;



{

	m_pPixelShader = NULL;



	Release();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

	vector<Vertex> vertexlist;

			break;

	scDesc.SampleDesc.Quality = 0;

int main(int, char**)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vrData.pSysMem = &pVList[0];

	m_pDepthStencilTexture = NULL;



	m_pTexture = NULL;

int SEGMENT = 36;

	for (int j = 0; j < icount; j++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



				indexlist.push_back(idx.vertex_index);



	m_Viewport.MinDepth = 0.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	std::string imagePath = "hello.bmp";

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 ambient;           //環境(r,g,b)

	irData.pSysMem = &pIList[0];

	std::string inputfile = "test.obj";

	D3D11_TEXTURE2D_DESC txDesc;

	if (!error.empty())



	irData.pSysMem = &pIList[0];

	SDL_Quit();



				// access to vertex

	scDesc.OutputWindow = hwnd;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		&scDesc,



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}



	return 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	int     vcount = vertexlist.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&m_pImmediateContext);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);







		KEY_PRESS_SURFACE_LEFT,

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	WORD* pIList = new WORD[icount];

				tinyobj::real_t ty =

				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//ピクセルシェーダー生成

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	//ピクセルシェーダー生成

	SDL_DestroyRenderer(ren);

void CD3DTest::Render()

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_Viewport.MinDepth = 0.0f;

	}

	SDL_Quit();

	}

	//ピクセルシェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	UINT offsets = 0;



	{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_FreeSurface(suf);

	{

	m_IndexCount = icount;

		D3D_DRIVER_TYPE_HARDWARE,

	//インデックスバッファ作成

	bool ret = tinyobj::LoadObj(

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pRenderTargetView = NULL;

				// access to vertex

		return hr;

	dsDesc.Texture2D.MipSlice = 0;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	Vertex* pVList = new Vertex[vcount];

};

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



#include "DirectXManager.h"

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	if (!reader.Warning().empty())

	for (int i = 0; i < 3; i++)

}

}
	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

};

				break;

		return hr;

			{

	scDesc.BufferDesc.Width = rect.Width();

	}



				WORD index = idx.vertex_index;

	SDL_FreeSurface(suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}*/

	m_pSampler = NULL;



}


	SAFE_RELEASE(m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		&scDesc,

	{

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				break;

	Release();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#include "DirectXManager.h"

#include <iostream>



	m_IndexCount = icount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pIndexBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

	if (!error.empty())

	m_pImmediateContext = NULL;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4X4 projection;

using std::cout; using std::endl;

	if (m_pImmediateContext)

void CD3DTest::Render()



	if (FAILED(hr))

	XMFLOAT4X4 projection;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				WORD index = idx.vertex_index;



int main(int, char**)

	SDL_DestroyWindow(win);

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

		// Loop over faces(polygon)

			break;

	SDL_Quit();





		if (!reader.Error().empty())

	}*/



	vbDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		&shapes,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

	m_IndexCount = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//Key press surfaces constants

	if (m_pImmediateContext)

	bool ret = tinyobj::LoadObj(

		}

				break;

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vector<WORD> indexList;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	tinyobj::ObjReaderConfig reader_config;

	irData.SysMemSlicePitch = 0;

	ID3D11Texture2D* pBackBuffer;

		// Loop over faces(polygon)

	ConstantMaterial material; //物体の質感

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pDevice = NULL;



	m_pLightBuffer = NULL;



	D3D11_BUFFER_DESC cbDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

{

		&level,

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = 0;

	m_VertexCount = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	}

	SDL_FreeSurface(bmp);



		SDL_Delay(1000);



			}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		}

#include <SDL.h>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	return 0;

		D3D_DRIVER_TYPE_HARDWARE,



	m_Viewport.TopLeftY = 0;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	//vector<WORD> index_t;

		NULL,

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

	m_pVertexBuffer = NULL;

	m_pDepthStencilView = NULL;



	SDL_FreeSurface(bmp);

		}

	ConstantMaterial material; //物体の質感

	if (!reader.Warning().empty())

	if (FAILED(hr))

}





	SDL_DestroyTexture(tex);

#include <SDL.h>

	//ピクセルシェーダー生成



	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyRenderer(ren);

		size_t index_offset = 0;  // インデントのオフセット

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//vector<Vertex> vertex_t;

	for (const auto& shape : shapes)

			{

	m_IndexCount = icount;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pSwapChain->Present(0, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	SDL_DestroyTexture(tex);



	UINT strides = sizeof(Vertex);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		}

	SAFE_RELEASE(m_pSwapChain);

	m_Viewport.Height = (FLOAT)rect.Height();

			index_offset += num_vertices;

	}

	auto& shapes = reader.GetShapes();

		return hr;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		&level,



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				indexlist.push_back(idx.vertex_index);





	hr = D3D11CreateDeviceAndSwapChain(NULL,

			case SDLK_LEFT:

		return hr;

	dsDesc.Format = txDesc.Format;

int SEGMENT = 36;

		KEY_PRESS_SURFACE_TOTAL







	return hr;

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.StructureByteStride = 0;

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyRenderer(ren);

	ConstantMatrixBuffer cmb;



	SAFE_RELEASE(m_pImmediateContext);

	m_pLightBuffer = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	};

	ZeroMemory(&txDesc, sizeof(txDesc));





void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

#include <iostream>

	for (size_t s = 0; s < shapes.size(); s++)

				indexlist.push_back(idx.vertex_index);



	//ピクセルシェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vector<WORD> indexList;

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);



				break;

		m_pImmediateContext->ClearState();

	Release();

	dsDesc.Format = txDesc.Format;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//定数バッファ作成

		}

		return 1;

	cbDesc.StructureByteStride = 0;



	auto& attrib = reader.GetAttrib();

		return hr;

	tinyobj::ObjReaderConfig reader_config;





	m_pSwapChain->Present(0, 0);

	txDesc.SampleDesc.Count = 1;





using std::cout; using std::endl;

	WORD   icount = indexList.size();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pMatrixBuffer = NULL;

		&materials,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			exit(1);

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);



	vbDesc.StructureByteStride = 0;

		else if (e.type == SDL_KEYDOWN)





	//頂点シェーダー生成

	txDesc.MipLevels = 1;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}



	}

int main(int, char**)

	WORD* pIList = new WORD[icount];

	UINT flags = 0;



	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	//インデックスバッファ作成

	m_pRenderTargetView = NULL;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		{

	vrData.SysMemPitch = 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		&level,

		return hr;



		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4         eyePos;   //視点座標





	if (FAILED(hr))

	XMFLOAT4X4 projection;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	m_pSwapChain = NULL;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

		KEY_PRESS_SURFACE_UP,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};

	m_VertexCount = 0;

			{

	{

				vertex.push_back(vertex_tmp);

				break;

				indexlist.push_back(idx.vertex_index);

int main(int, char**)

 */

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Event e;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pDevice);

		return hr;

				indexlist.push_back(idx.vertex_index);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

	tinyobj::attrib_t attrib;

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include "DirectXManager.h"

				indexlist.push_back(index);

	//ビューポート設定

	vbDesc.StructureByteStride = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	m_IndexCount = 0;

	std::string error;

	WORD   icount = indexList.size();

		//User presses a key

}
	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&materials,

{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	int     vcount = vertexlist.size();



	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{



	delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	float    nearZ = 0.1f;

				break;

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pSwapChain);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		R"(cube.obj)");



}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		flags,

	irData.pSysMem = &pIList[0];

	m_Viewport.TopLeftX = 0;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)



	int     vcount = vertexlist.size();

	}

	m_VertexCount = vcount;





	//頂点レイアウト作成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pSampler = NULL;

	//ピクセルシェーダー生成

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//定数バッファ作成



	//Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



	CRect                rect;

	SDL_DestroyWindow(win);

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pSampler = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

			}

	SDL_FreeSurface(bmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	return;

		pIList[j] = indexList[j];

			int num_vertices = shape.mesh.num_face_vertices[f];

	};

				// access to vertex

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderPresent(ren);

	pBackBuffer->Release();

				break;

	Vertex* pVList = new Vertex[vcount];

		// Loop over faces(polygon)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	irData.pSysMem = &pIList[0];

		if (e.type == SDL_QUIT)

	UINT offsets = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

		return hr;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





			index_offset += num_vertices;

	//頂点レイアウト作成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    fov = XMConvertToRadians(20.0f);



	cbDesc.StructureByteStride = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vbDesc.StructureByteStride = 0;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

			break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;



	tinyobj::attrib_t attrib;

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//Key press surfaces constants

		}



		&attrib,

	if (FAILED(hr))



	irData.SysMemPitch = 0;



	vector<Vertex> vertexlist;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}



		NULL,

	//Vertex* pVList = new Vertex[vcount];

	//vector<Vertex> vertex_t;

	int     vcount = vertexlist.size();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::string error;



	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

			switch (e.key.keysym.sym)

	float    nearZ = 0.1f;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

int SEGMENT = 36;





#endif

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;



	int     vcount = vertexlist.size();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	//インデックスバッファ作成

		}

	}*/



	if (FAILED(hr))

};

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_FreeSurface(bmp);

	SDL_DestroyWindow(win);

	XMFLOAT4 pos;               //座標(x,y,z)

		&attrib,

		KEY_PRESS_SURFACE_RIGHT,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vbDesc.StructureByteStride = 0;

	{

	WORD   icount = indexList.size();

		return hr;



	m_pImmediateContext = NULL;

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	}

		&m_pSwapChain,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderPresent(ren);



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	irData.SysMemPitch = 0;

		m_pImmediateContext->ClearState();

}



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTextureView);







	SAFE_RELEASE(m_pVertexShader);

}
	vector<Vertex> vertexlist;

	{

	for (const auto& shape : shapes)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//深度ステンシルバッファ作成

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT strides = sizeof(Vertex);

		{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pTextureView);



	std::vector<tinyobj::material_t> materials;

	LoadObj(vertexlist, indexList);

	SDL_Event e;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			case SDLK_LEFT:

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Event e;



				break;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pPixelShader = NULL;

	m_pInputLayout = NULL;

	for (int i = 0; i < vcount; i++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ConstantMatrixBuffer cmb;

	return;

	D3D11_BUFFER_DESC ibDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	//頂点バッファ作成

	m_Viewport.MinDepth = 0.0f;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	scDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	irData.pSysMem = &pIList[0];

}

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	{

	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

using std::cout; using std::endl;

	ConstantMaterial material; //物体の質感

		&attrib,

	cbDesc.MiscFlags = 0;



		{



	if (FAILED(hr))

};







	//vector<WORD> index_t;

	SAFE_RELEASE(m_pLightBuffer);



}



	//頂点レイアウト作成



		if (e.type == SDL_QUIT)

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//定数バッファ作成

	//Key press surfaces constants



	UINT strides = sizeof(Vertex);

		{

{

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pTexture);



		return hr;



	//頂点シェーダー生成

};



int SEGMENT = 36;

	vrData.pSysMem = &pVList[0];

	int     vcount = vertexlist.size();



				vertex.push_back(vertex_tmp);

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	WORD   icount = indexList.size();

		// Loop over faces(polygon)

		&error,



		SDL_Delay(1000);

		return hr;

		return hr;

	CRect                rect;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	return;

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	UINT strides = sizeof(Vertex);

				break;

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::vector<tinyobj::material_t> materials;

	txDesc.MipLevels = 1;

	ConstantLight    pntLight; //点光源

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	// Loop over shapes

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	tinyobj::ObjReader reader;

			for (size_t v = 0; v < num_vertices; v++)



		1,

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pImmediateContext);

	std::string imagePath = "hello.bmp";



	if (FAILED(hr))

struct ConstantLightBuffer {



	m_pTexture = NULL;

		pLevels,

	UINT strides = sizeof(Vertex);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	//定数バッファ作成

			}

{

	SDL_DestroyWindow(win);

	D3D11_SUBRESOURCE_DATA irData;

	dsDesc.Format = txDesc.Format;

	scDesc.SampleDesc.Quality = 0;

	D3D_FEATURE_LEVEL level;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	delete[] pVList;

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

int main(int, char**)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.ArraySize = 1;

	vrData.SysMemSlicePitch = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			break;

		exit(1);

		return hr;

				WORD index = idx.vertex_index;

		return hr;

	SDL_Event e;

		pIList[j] = indexList[j];





	}

	m_pVertexBuffer = NULL;

	D3D11_SUBRESOURCE_DATA vrData;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

	}

};







		if (!reader.Error().empty())

	SAFE_RELEASE(m_pImmediateContext);

		return hr;



	m_Viewport.TopLeftY = 0;



	vector<Vertex> vertexlist;

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//Clean up our objects and quit

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

}
	m_pSampler = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	SDL_Quit();

	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_UP,





		return hr;

	SAFE_RELEASE(m_pInputLayout);

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (int j = 0; j < icount; j++)

int main(int, char**)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		R"(cube.obj)");

	cbDesc.CPUAccessFlags = 0;

{

	txDesc.Height = rect.Height();

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit



	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.StructureByteStride = 0;

				// access to vertex

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pTexture = NULL;

				// access to vertex

	ibDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;







	{

	{

	//Vertex* pVList = new Vertex[vcount];

	m_pSampler = NULL;

		&error,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.MipLevels = 1;

	vrData.SysMemPitch = 0;

	}

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ty =

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyRenderer(ren);

	m_pLightBuffer = NULL;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

struct ConstantMaterial {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pSwapChain = NULL;

}

				// access to vertex



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_VertexCount = vcount;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	}



	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyTexture(tex);

}

	CRect                rect;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	delete[] pVList;

#ifdef _DEBUG

	//Key press surfaces constants

	m_pTexture = NULL;

	SDL_Quit();

			}

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



struct ConstantMaterial {

	{

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	for (size_t s = 0; s < shapes.size(); s++)

	{

{

};

};



	flags |= D3D11_CREATE_DEVICE_DEBUG;



		&scDesc,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&scDesc,

		return hr;

	cbDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		SDL_Delay(1000);

	{

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pLightBuffer = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		R"(cube.obj)");

{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;



	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	for (const auto& shape : shapes)

		return hr;

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pSampler);

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	irData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftY = 0;

		SDL_RenderPresent(ren);

	XMFLOAT4X4 world;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	auto& attrib = reader.GetAttrib();

	XMFLOAT4X4 world;

	irData.SysMemPitch = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(bmp);

			switch (e.key.keysym.sym)

#endif

	{

			for (size_t v = 0; v < num_vertices; v++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

int main(int, char**)

				break;



	{



#include "DirectXManager.h"

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

		if (!ret)

	std::vector<tinyobj::material_t> materials;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//vector<Vertex> vertex_t;

				indexlist.push_back(idx.vertex_index);

	UINT flags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	Release();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

		m_pImmediateContext->ClearState();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	std::vector<tinyobj::material_t> materials;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))



	ConstantLight    pntLight; //点光源

	m_pLightBuffer = NULL;

	m_pSampler = NULL;

		return hr;

	m_pRenderTargetView = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		//User presses a key

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	HRESULT              hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

#include "DirectXManager.h"

	//First we need to start up SDL, and make sure it went ok

}
		pLevels,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	m_VertexCount = 0;

}



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		}

	m_pDepthStencilTexture = NULL;

	UINT flags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





		}



}

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		return hr;

		return 1;

			}



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.TopLeftX = 0;

	irData.pSysMem = &pIList[0];

	reader_config.mtl_search_path = "./"; // Path to material files



struct ConstantMaterial {

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	vector<WORD> indexList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	WORD* pIList = new WORD[icount];

	txDesc.MipLevels = 1;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



struct ConstantMatrixBuffer {

{

	vbDesc.CPUAccessFlags = 0;

	int     vcount = vertexlist.size();



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = 0;

using std::cout; using std::endl;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSwapChain);

	}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ZeroMemory(&dsDesc, sizeof(dsDesc));



#include "DirectXManager.h"

struct ConstantLightBuffer {

				break;

				break;





	{

	irData.pSysMem = &pIList[0];

	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pInputLayout = NULL;



	m_Viewport.MinDepth = 0.0f;

}



		}

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	LoadObj(vertexlist, indexList);

		return hr;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

		{

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	/*

	SDL_DestroyWindow(win);

	scDesc.OutputWindow = hwnd;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D_FEATURE_LEVEL level;

	SDL_DestroyTexture(tex);



	vrData.pSysMem = &pVList[0];

		pVList[i] = vertexlist[i];

	//深度ステンシルバッファ作成



	{



	vbDesc.MiscFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	return;

	if (FAILED(hr))

			index_offset += num_vertices;

				indexlist.push_back(idx.vertex_index);

				break;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	auto& materials = reader.GetMaterials();

				break;

		exit(1);



	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

				// access to vertex

		{

	int     vcount = vertexlist.size();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pSampler);







	}*/

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//頂点バッファ作成



	if (FAILED(hr))



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pSwapChain);



};



	delete[] pIList;

	if (FAILED(hr))

	if (FAILED(hr))

void CD3DTest::Release()

	SAFE_RELEASE(m_pIndexBuffer);

	ConstantMatrixBuffer cmb;

	HRESULT              hr;

		if (!ret)



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		flags,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];







	enum KeyPressSurfaces

	txDesc.Usage = D3D11_USAGE_DEFAULT;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ConstantMaterial material; //物体の質感

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t ty =





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		if (!reader.Error().empty())

			//Select surfaces based on key press

	SAFE_RELEASE(m_pTextureView);



		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyWindow(win);



	{

#include <iostream>

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		pVList[i] = vertexlist[i];

	ZeroMemory(&txDesc, sizeof(txDesc));

		&level,

	scDesc.BufferDesc.Width = rect.Width();

	vbDesc.StructureByteStride = 0;

	m_Viewport.TopLeftX = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_BUFFER_DESC ibDesc;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	int     vcount = vertexlist.size();

	SDL_DestroyRenderer(ren);



		pLevels,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyTexture(tex);

	}

		&shapes,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		D3D_DRIVER_TYPE_HARDWARE,



	if (FAILED(hr))

	vector<Vertex> vertexlist;

		&m_pImmediateContext);

	m_pSampler = NULL;

		1,

using std::cout; using std::endl;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	Release();

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



#include <iostream>

	SAFE_RELEASE(m_pTexture);

	};

	}*/

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.Width = rect.Width();

	txDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	ID3D11Texture2D* pBackBuffer;

	}

		{





	}



		pLevels,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





{

	D3D_FEATURE_LEVEL level;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	irData.SysMemPitch = 0;



	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vrData.pSysMem = &pVList[0];

	float    nearZ = 0.1f;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		if (!ret)

	WORD* pIList = new WORD[icount];

	m_pMatrixBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pInputLayout);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.StructureByteStride = 0;

		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			case SDLK_RIGHT:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		flags,

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pDevice);

	HRESULT              hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyRenderer(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

}

	m_pDepthStencilView = NULL;

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

	m_pMatrixBuffer = NULL;

	txDesc.Width = rect.Width();

}

	SAFE_RELEASE(m_pDevice);

	// Loop over shapes

	SDL_DestroyRenderer(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMFLOAT4X4 projection;



 */



		{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pVertexShader);



	Vertex* pVList = new Vertex[vcount];

{



		return 1;



	m_VertexCount = 0;

#ifdef _DEBUG



	if (!reader.ParseFromFile(inputfile, reader_config))



	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

	scDesc.BufferCount = 1;

	m_Viewport.MinDepth = 0.0f;

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{

};

	ibDesc.MiscFlags = 0;

	auto& attrib = reader.GetAttrib();

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

struct ConstantMatrixBuffer {

	tinyobj::attrib_t attrib;

	//Create Index



	cbDesc.MiscFlags = 0;

 */

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

		delete[] pIList;

		cout << "SDL_INIT_ERROR" << endl;

			index_offset += fv;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

{







		size_t index_offset = 0;

#endif

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	D3D11_SUBRESOURCE_DATA vrData;

	return hr;

	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include "DirectXManager.h"



	//ビューポート設定

}

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#define TINYOBJLOADER_IMPLEMENTATION



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilView = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		{

		&m_pSwapChain,

	}*/

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	}

			for (size_t v = 0; v < fv; v++)





	//Clean up our objects and quit

			{

	//vector<Vertex> vertex_t;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		R"(cube.obj)");

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

int main(int, char**)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	for (int j = 0; j < icount; j++)

	Release();

	//テクスチャ読み込み

#include "DirectXManager.h"

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

#include "DirectXManager.h"



	}

	//ピクセルシェーダー生成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

	m_pIndexBuffer = NULL;

	txDesc.MipLevels = 1;



}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		flags,

	m_IndexCount = 0;

	bool ret = tinyobj::LoadObj(



		size_t index_offset = 0;

int main(int, char**)

	tinyobj::attrib_t attrib;

		SDL_RenderClear(ren);

	//定数バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;







		pVList[i] = vertexlist[i];

		SDL_RenderPresent(ren);

	m_pInputLayout = NULL;



		return hr;

	XMFLOAT4         eyePos;   //視点座標

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::GetClientRect(hwnd, &rect);

	std::vector<tinyobj::material_t> materials;





	{



	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pImmediateContext);

		delete[] pVList;

	m_pTexture = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			//Select surfaces based on key press

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D11_SDK_VERSION,

	//頂点バッファ作成

		}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;

		R"(cube.obj)");

	if (m_pImmediateContext)

	if (!reader.Warning().empty())

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;

		&attrib,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

CD3DTest::~CD3DTest()

		}

	std::string imagePath = "hello.bmp";

	{

	SDL_FreeSurface(bmp);

	//Clean up our objects and quit

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



}

	SDL_DestroyRenderer(ren);

{

	m_pTexture = NULL;

	SAFE_RELEASE(m_pImmediateContext);

}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			for (size_t v = 0; v < num_vertices; v++)

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,

		SDL_Delay(1000);

	XMFLOAT4X4 projection;

	std::string inputfile = "test.obj";





	for (int i = 0; i < 3; i++)

		m_pImmediateContext->ClearState();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			case SDLK_DOWN:

		{



	SAFE_RELEASE(m_pSampler);

	}*/

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&m_pSwapChain,

		&attrib,

	txDesc.CPUAccessFlags = 0;

		flags,



#include <SDL.h>

	m_pSwapChain = NULL;

	ibDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

			case SDLK_DOWN:



	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_RIGHT:

	SDL_DestroyTexture(tex);

	vbDesc.CPUAccessFlags = 0;

	vector<WORD> indexList;

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	if (FAILED(hr))

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#endif

	//頂点バッファ作成

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.ArraySize = 1;

}

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ID3D11Texture2D* pBackBuffer;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

 */

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::string inputfile = "test.obj";

#include <iostream>



		SDL_Delay(1000);

	SDL_Event e;

		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pRenderTargetView = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	UINT flags = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;

	scDesc.OutputWindow = hwnd;

		&level,

	XMFLOAT4X4 view;

struct ConstantMatrixBuffer {

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	UINT offsets = 0;

	vbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pDepthStencilTexture);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.StructureByteStride = 0;

};

	SAFE_RELEASE(m_pTexture);

		&scDesc,



	for (size_t s = 0; s < shapes.size(); s++)

			}

{



	//ビューポート設定

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return hr;

	SAFE_RELEASE(m_pTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		}

	SDL_FreeSurface(bmp);

	scDesc.BufferCount = 1;



			for (size_t v = 0; v < fv; v++)

	{

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	m_pRenderTargetView = NULL;

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		&shapes,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		D3D11_SDK_VERSION,

	m_pSampler = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	tinyobj::ObjReaderConfig reader_config;

		}

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ConstantMaterial material; //物体の質感

{

int main(int, char**)

	vector<Vertex> vertexlist;

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit

				WORD index = idx.vertex_index;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))



	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;



		NULL,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

				tinyobj::real_t tx =

	{

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;



	dsDesc.Format = txDesc.Format;



	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		&attrib,



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	return 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;



struct ConstantLight {

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	::GetClientRect(hwnd, &rect);

	if (!reader.Warning().empty())



		return hr;

		pLevels,

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				// access to vertex

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_TOTAL

	::ZeroMemory(&scDesc, sizeof(scDesc));



	ConstantLightBuffer clb;

	SDL_Event e;

		size_t index_offset = 0;  // インデントのオフセット

			index_offset += fv;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pMatrixBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_VertexCount = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t ty =

		return 1;

			exit(1);



	for (int i = 0; i < 3; i++)

				break;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		SDL_RenderCopy(ren, tex, NULL, NULL);







	for (int i = 0; i < vcount; i++)

			case SDLK_RIGHT:

	XMFLOAT4 specular;          //反射(r,g,b)

			for (size_t v = 0; v < fv; v++)



	for (int i = 0; i < 3; i++)

	irData.SysMemSlicePitch = 0;

	Release();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

	auto& shapes = reader.GetShapes();

		{

	//頂点シェーダー生成

	Release();

			break;

	txDesc.CPUAccessFlags = 0;

		{

	SDL_Quit();

}
	dsDesc.Texture2D.MipSlice = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		pIList[j] = indexList[j];



		return hr;

#ifdef _DEBUG

	if (!reader.Warning().empty())

				break;

	}*/



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



using std::cout; using std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

			default:

	m_pTexture = NULL;



	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_RenderClear(ren);

	vector<Vertex> vertexlist;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;



	return 0;



	D3D11_BUFFER_DESC vbDesc;

	SDL_Quit();

	m_pInputLayout = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	SAFE_RELEASE(m_pSampler);

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pVertexShader = NULL;

	cbDesc.MiscFlags = 0;

 */

				vertex.push_back(vertex_tmp);

				break;

	Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		pIList[j] = indexList[j];

	std::string error;



int main(int, char**)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	return 0;

		}

	//vector<Vertex> vertex_t;

			}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&shapes,

	if (m_pImmediateContext)

		{

			exit(1);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_SAMPLER_DESC smpDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;


